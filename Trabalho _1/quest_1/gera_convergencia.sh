#!/bin/bash

rm -f conv.dat

for i in {1..2000}
do
	./main.x 2 $((i * 50)) >> conv.dat
done
