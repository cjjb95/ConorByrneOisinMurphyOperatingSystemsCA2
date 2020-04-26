# CONOR - perform task 1 - print last 10 lines of access.log
run-task-1: access.log
	tail access.log && echo "\n"

# OISIN - perform task 2 - prints all unique ips from access.log
run-task-2: access.log
	cut -d " " -f 1 access.log | sort -n | uniq

# CONOR & OISIN - perform task 3 - get request portion from all requests that resulted in a 404
run-task-3: access.log
	grep " 404 " access.log | cut -d ' ' -f 3-5

# OISIN - perfrom task 4 - get all requests from internet explorer browsers & store in access.ie.log
run-task-4: access.log
	(grep "Trident/" access.log && grep "MSIE" access.log) > access.ie.log

# CONOR & OISIN - perfrom task 5 *unfinished* - get all 5ms or more requests, and print terminal report
run-task-5: access.log
	egrep '^([0-9]{1,3}.){3}[0-9]{1,3}\s[0-9]{4}-[0-9]{1,2}-[0-9]{1,2}\T[0-9]{2}:[0-9]{2}:[0-9]{2}.[0-9]{3}\Z\s"GET\s/((([a-zA-Z0-9]{0,})?+(-?[a-zA-Z0-9])?*))(.[a-z]{2,})?\sHTTP/1.1"\s[0-9]{1,3}\s([5-9]{1}|[1-9]{1}[0-9]{1,2})' access.log | cut -d ' ' -f 4 | sort | uniq -c	
