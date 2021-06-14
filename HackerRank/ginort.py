# Enter your code here. Read input from STDIN. Print output to STDOUT
s=input()
k=sorted(s,key=lambda x:(x.isdigit(),x.isupper(),x.islower(),x.isdigit() and int(x) % 2==0,x))
j=str(k).strip("[],''")
j=j.replace(",","")
j=j.replace("'","")
j=j.replace(" ","")
print(j) 
