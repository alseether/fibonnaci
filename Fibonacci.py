#Derek Neil
#figure out Fibonacci number who's digits sum is 15165
#phython is 5x slower then java and php, even without sequences
#using %100 of one core, but only using 3.5mb of ram ??

#pypy uses %100 of one core, but increases ram to 19.5mb
#pypy reduces run time to 1/4 of python

import sys
import time

#declare variables
twoNumbersAgo = long(0)
oneNumberAgo = long(1)
sum = 0
fibNumber = ""

#timing stuff
startTime = time.time()

#start
sys.stdout.write("Calculating in Python: ")
sys.stdout.flush()

#build sequence with loop until the sum of the digits is == 15165
d=0
while sum != 15165 :
	currentNumber = twoNumbersAgo + oneNumberAgo
	twoNumbersAgo = oneNumberAgo
	oneNumberAgo = currentNumber
	fibNumber = str(currentNumber)
	
	if len(fibNumber) >= 2012 :
		sum = 0
		for i in range( 0,len(fibNumber) ) : 
			sum += int(fibNumber[i])
	
	#eye candy
	if d%700==0 : #modulus calc in python?
		sys.stdout.write('. ')
		sys.stdout.flush()
	
	d+=1

#print results
result = "\nThe magic numbers are: "
for i in xrange(2005,2012) :  #will return 2006-2012 digits
	result += fibNumber[i]
	if i==2007 :
		result += "-"

#how long it took
endTime = time.time()
runTime = (endTime - startTime)

#print some info
print result
print "Total execution time was:", '%0.2f' % runTime, "seconds"
#print "\nFibonacci number was: "
#print fibNumber