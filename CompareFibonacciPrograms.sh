#!/bin/sh -e

printf "\n\n******************************************\n"
printf "* Running all the Fibonacci programs now *\n"
printf "******************************************\n\n\n"

pypy Fibonacci.py
printf "\n\n\n"
java FibonacciBigInteger
printf "\n\n\n"
php FibonacciBigInteger.php

printf "\n\n\n*******************************************\n"
printf "* Done running all the Fibonacci programs *\n"
printf "*******************************************\n\n"

