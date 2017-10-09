#!/bin/bash

#for line in $(find . -name "*.c") ;
#do
#	echo "compilando $line" 
#	gcc $line -o $line.exe

#done

for line in $(find . -name "*1.c.exe") ;
do
	echo "ejecutando $line"
	echo "$line <p1.in > $line.out "
	$line <p1.in > $line.out

done    

for line in $(find . -name "*2.c.exe") ;
do
    echo "ejecutando $line"
    echo "$line <p1.in > $line.out "
    $line <p2.in > $line.out

done 

for line in $(find . -name "*3.c.exe") ;
do
    echo "ejecutando $line"
    echo "$line <p1.in > $line.out "
    $line <p3.in > $line.out

done

for line in $(find . -name "*4.c.exe") ;
do
    echo "ejecutando $line"
    echo "$line <p1.in > $line.out "
    $line <p4.in > $line.out
done

for line in $(find . -name "*5.c.exe") ;
do
    echo "ejecutando $line"
    echo "$line <p1.in > $line.out "
    $line <p5.in > $line.out
done




