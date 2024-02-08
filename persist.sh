#!/usr/bin/sh
while true; do
	echo "Running script."
	./check_for_updates.py;
	echo "Script ran."
	shuf -i 3600-7200 -n 1 | xargs sleep; # A random number, from 1 to 2 hours
done
