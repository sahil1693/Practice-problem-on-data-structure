a=[]
n=input()
b=[]

for i in range(0,int(n)):
    for j in range(0,int(n)):
        a.insert(j,0)
    b.insert(i,a)
    a=[]
n=int(n)
if n%2 == 0:
    mid=int(n/2)-1
else:
    mid=int(n/2)
n1=n
for i in range(0,n):
    if i%2==0 :
        b[i][mid]=1
        mid=mid-1
    else :
        b[i][n1-1]=1
        n1=n1-1
for i in b:     
    print(i)
    
'''    
0 0 0 1 0 0 0 0
0 0 0 0 0 0 0 1
0 0 1 0 0 0 0 0    
0 0 0 0 1 0 0 0
0 1 0 0 0 0 0 0
0 0 0 0 0 1 0 0    
1 0 0 0 0 0 0 0
0 0 0 0 0 0 1 0'''
