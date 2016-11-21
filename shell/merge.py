def merge(left,right):
    i,j=0,0
    result=[]
    while i<len(left) and j<len(right):
        if left[i]<=right[j]:
            result.append(left[i])
            i+=1
            
        else:
            result.append(right[i])
            j+=1
            
    result+=left[i:]
    result+=right[j:]
    return result

def mergesort(a):
    if len(a)<=1:
        return a 
    mid=int(len(a)/2)
    left=mergesort(a[:mid])
    right=mergesort(a[mid:])
    return merge(left,right)

print ('enter nos')
n=int(input())
print('nos')
a=[int(input()) for i in range(n)]
mergesort(a)
print(a)
