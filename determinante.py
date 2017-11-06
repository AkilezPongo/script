#!/usr/bin/env python
print "DETERMINANTE DE UNA MATRIZ nxn"

from random import randint 
import numpy as np
array=([0,0,0],[0,0,0],[0,0,0])
for i in range(3):
 for j in range(3):
  array[i][j]=randint(0,300)
print (array)
up=array[0][0]*array[1][1]*array[2][2]+array[1][0]*array[2][1]*array[0][2]+array[2][0]*array[0][1]*array[1][2]
down=array[2][0]*array[1][1]*array[0][2]+array[1][0]*array[0][1]*array[2][2]+array[0][0]*array[2][1]*array[1][2]
det=up-down
print ("El determinante es: ",det)
print ("con la funcion numpy: ",np.linalg.det(array))
