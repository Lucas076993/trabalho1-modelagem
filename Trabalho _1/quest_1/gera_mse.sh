#!/bin/bash

rm -f erro.dat

for i in {1..2000}
do
	./mse.x 2 $((i * 50)) >> erro.dat
done
