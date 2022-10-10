"""
1. bubblesort(array)
2. iterate over the array len
3. loop over the first loop (i -1)
4. if arr[j] > the next element, 
5. create a temp variable to hold the value at arr[j]
6. swap the arr[j] with the next element
7. Assign the value in the temp variable to the next element


"""
def bubblesort(array):
    if len(array) != 0:
        for i in range(len(array)):
            for j in range(len(array) -i -1):
                if array[j] > array[j+1]:
                    array[j], array[j+1] = array[j+1], array[j]

arr = [5, 6, 9, 2, 0, -8, 5]
print(arr, "unsorted list")
bubblesort(arr)
print(arr, "sorted list")
