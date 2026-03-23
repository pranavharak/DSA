
def selection_sort(arr):
    for i in range(0,len(arr)-1):
        min_ind = i
        for j in range(i+1,len(arr)):
            if arr[j] < arr[min_ind]:
                min_ind = j
        
        arr[min_ind],arr[i] = arr[i],arr[min_ind]
    
'''arr = [13,5,20,9,2,12]
print(f"unsorted elements = {arr}")
selection_sort(arr)
print(f"sorted elements = {arr}")'''

def bubble_sort(arr):
    for i in range(len(arr)-1,1,-1):
        noswap = 0
        for j in range(0,i):
            if arr[j] > arr[j+1]:
                arr[j],arr[j+1] = arr[j+1],arr[j]
                noswap = 1
        
        if noswap == 0:
            break
            
'''arr = [13, 5, 20, 9, 2, 12]
print(f"unsorted array = {arr}")
bubble_sort(arr)
print(f"sorted array = {arr}") '''


def insertion_sort(arr):
    for i in range(0,len(arr)):
        j = i
        while j>0 and arr[j-1]>arr[j]:
            arr[j-1],arr[j] = arr[j],arr[j-1]
            j -=1


'''arr = [13, 5, 20, 9, 2, 12]
print(f"unsorted array = {arr}")
insertion_sort(arr)
print(f"sorted array = {arr}")
'''
