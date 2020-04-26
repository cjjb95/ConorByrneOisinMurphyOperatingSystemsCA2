# Syntax:
# target: dependencies
# 	command


# CA2 SECTION 1
# OISIN - perform task 1 - count the number of words in string
run-task-1:
	echo "The quick brown fox jumps over the lazy dog\n" | wc -w

# CONOR - perform task 2 - convert string to uppercase
run-task-2:
	echo "The quick brown fox jumps over the lazy dog\n" | tr “[a-z]” “[A-Z]”

# CONOR - perform task 3 - download dkit homepage and store in dkit.html file
run-task-3:
	curl -o dkit.html https://www.dkit.ie

# OISIN - perform task 4 - write first and last line of dkit.html into mangled.txt, in reverse order, with the angle brackets replaced with square brackets
run-task-4: dkit.html
	tail -n 1 dkit.html | tr '<' '[' | tr '>' ']' > mangled.txt && head -n 1 dkit.html | tr '<' '[' | tr '>' ']' >> mangled.txt
