#!/bin/bash
echo "Comienza mamalaje"

find  . -name "*.c*" -exec gcc {} -o {}.exe \;

find -name "*1.c.exe*" -exec {} + < p1.in >p1res.txt

#diferencia
diff p1res.txt out1.txt >final1.txt

#cortar cadena
find -name "*1.c.exe*" -exec  expr substr {} 1 3 \;


