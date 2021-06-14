# Enter your code here. Read input from STDIN. Print output to STDOUT
import cmath
c = complex(input().strip())
print("%.3f\n%.3f" % (cmath.polar(c)))
