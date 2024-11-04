#!/usr/bin/python3
import os, hashlib
import urllib.request

download_filename = "bg_ng_3351_0.rpf"
filename = "BgScript.rpf"
file_hash = 0

def set_file_hash():
	global file_hash
	# File does not exist, we are probably running for the first time
	if not os.path.exists('script_sha1.txt'):
		file_hash = 0
		print("Script sha1 hash file not found.")
		return

	with open('script_sha1.txt', 'r') as script_sha1_file:
		file_hash = script_sha1_file.read()
		script_sha1_file.close()

def has_bg_ng_updated():
	with urllib.request.urlopen(f"http://prod.cloud.rockstargames.com/titles/gta5/pcros/bgscripts/{download_filename}") as f:
		global file_hash
		file = f.read()
		sha1 = hashlib.sha1(file)
		old_file_hash = file_hash
		file_hash = sha1.hexdigest()
		if file_hash != old_file_hash:
			with open(filename, 'wb') as out_file:
				out_file.write(file)
				out_file.close()
		else:
			return False
		
		with open("script_sha1.txt", "w") as script_sha1_file:
			script_sha1_file.write(file_hash)
			script_sha1_file.close()
			
		return True

def main():
	set_file_hash()
	if has_bg_ng_updated():
		print("BgScript updated")
		# Extract the rpf...
		os.system(f"./CodeWalkerCli/CodeWalker.Cli ./{filename} -g ./gta5 -o ./BgScript")
		
		# Run the decompiler
		os.system(r"./decompiler/GTA\ V\ Script\ Decompiler -o export_diffmode -d -r -h ./BgScript")
		os.system(r"./decompiler/GTA\ V\ Script\ Decompiler -o export_normal -r -i -h ./BgScript")

		# Git commit the changes.
		os.system('git add -A && git commit -m "BgScript updated" && git push')

if __name__ == "__main__":
    main()
