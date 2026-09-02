#!/bin/bash

for ((i=2; i<=8; i++))
do
	./main.x $i 40000 >> esfera.dat
done
