#CONOR & OISIN - perform task 1 - print all valid rgb values from colours.txt
run-task-1: colours.txt
	( grep -E '^#[a-fA-F0-9]{6}$$' colours.txt && grep -E '^#[a-fA-F0-9]{8}$$' colours.txt ) | cat

# CONOR - perform task 2 - converts valid g values from hex to decimal
run-task-2:	colours.txt	build/convert-hex
	( grep -E '^#[a-fA-F0-9]{6}$$' colours.txt && grep -E '^#[a-fA-F0-9]{8}$$' colours.txt ) | cat | cut -b 4-5 | scripts/convert-hex/build/convert-hex

# build convert-hex script
build/convert-hex:	scripts/convert-hex/convert-hex.c
	gcc -Wall -Wextra -Wpedantic scripts/convert-hex/convert-hex.c -o scripts/convert-hex/build/convert-hex

#OISIN - perform task 3 - *unfinished* converts valid rgb's to rgba format
