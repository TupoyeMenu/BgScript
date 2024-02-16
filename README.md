## BgScript auto differ
This is a small project for getting latest diffs of BgScript.rpf

It uses a shitty CodeWalker based rpf extractor and runs on Linux.
The "shitty CodeWalker based rpf extractor" is not public but it's just CodeWalker.Core that extracts scripts.

### File structure
- `BgScript` Contains extracted script.
- `BgScript/export_diffmode` Decompiled script without var names and mk2 function name hashes.
- `BgScript/export_normal` Decompiled script with mk2 function name hashes.
- `gta5/` Used internally to extract BgScript.rpf.

### Projects used
- [GTA-V-Script-Decompiler](https://github.com/maybegreat48/GTA-V-Script-Decompiler)
- [CodeWalker](https://github.com/niekschoemaker/CodeWalker)

