#!/bin/python3

import math
import os
import random
import re
import sys

a0,a1,a2 = input().strip().split(' ')
a0,a1,a2 = [int(a0),int(a1),int(a2)]
b0,b1,b2 = input().strip().split(' ')
b0,b1,b2 = [int(b0),int(b1),int(b2)]
A = (a0 > b0) + (a1 > b1) + (a2 > b2)
B = (a0 < b0) + (a1 < b1) + (a2 < b2)
print(A,B)
