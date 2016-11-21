def qu(a,l,r):
    if l<r:
        i=l
        j=r        
        pivot=a[i]
        while i<j:
            while a[i] < pivot:
                i=i+1
            
            while a[j] > pivot:
                j=j-1
            
            if i<j:
                t=a[i]
                a[i]=a[j]
                a[j]=t
            
            
        t=a[i]
        a[i]=pivot
        pivot=t
    
        qu(a,l,j-1)
        qu(a,j+1,r)
    
print ('enter nos')
n=int(input())
print('nos')
a=[int(input()) for i in range(n)]
qu(a,0,n-1)
print(a)
