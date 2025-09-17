#!/bin/bash


out=$(./main | grep "succ")

if [ -z "$out" ]; then 
	echo "Test failed!"
	exit 1
else 
	echo "Test succeed!"
	exit 0
fi



