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
	echo "checando diferencias $line"
#	diff $line.out out1.txt > $line.res  #.res tiene comparacion
	diff -q <(sort $line.out | uniq) <(sort out1.txt | uniq) > $line.res
done    

for line in $(find . -name "*2.c.exe") ;
do
    echo "ejecutando $line"
    echo "$line <p1.in > $line.out "
    $line <p2.in > $line.out
#   diff $line.out out2.txt > $line.res  #.res tiene comparacion
    diff -q <(sort $line.out | uniq) <(sort out2.txt | uniq) > $line.res


done 

for line in $(find . -name "*3.c.exe") ;
do
    echo "ejecutando $line"
    echo "$line <p1.in > $line.out "
    $line <p3.in > $line.out
#   diff $line.out out3.txt > $line.res  #.res tiene comparacion
    diff -q <(sort $line.out | uniq) <(sort out3.txt | uniq) > $line.res


done

for line in $(find . -name "*4.c.exe") ;
do
    echo "ejecutando $line"
    echo "$line <p1.in > $line.out "
    $line <p4.in > $line.out
#   diff $line.out out4.txt > $line.res  #.res tiene comparacion
    diff -q <(sort $line.out | uniq) <(sort out4.txt | uniq) > $line.res


done

for line in $(find . -name "*5.c.exe") ;
do
    echo "ejecutando $line"
    echo "$line <p1.in > $line.out "
    $line <p5.in > $line.out
#   diff $line.out out5.txt > $line.res  #.res tiene comparacion
    diff -q <(sort $line.out | uniq) <(sort out5.txt | uniq) > $line.res


done




