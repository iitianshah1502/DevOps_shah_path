list=[6,5,4,3,7]
list3=[]
n=len(list)
l=0
r=n-1
def divide(lis,l,r):

 if(l<r):
  
  m=int((l+r)/2)
  
  divide(lis,l,m)
  
  divide(lis,m+1,r)
  breakpoint()
  merge(l,m,r)
  
  
def merge(l,m,r):
  
  n1=r-l+1
  breakpoint()
  list1=list[l:m+1]
  breakpoint()
  list2=list[m+1:r+1]
  breakpoint()
  for i in list1:
   print(i)
   for j in list2:
    if i<j:
     breakpoint()
     list3.append(i)
     breakpoint()
    elif i>j:
     list3.append(j)
     breakpoint()
  if(list1!=[]):
   list3.extend(list1)
  if(list2!=[]):
   list3.extend(list2)

divide(list,l,r) 
for x in list3:
 print(x)