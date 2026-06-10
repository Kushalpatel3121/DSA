'''
Insertion Sort is a simple and intuitive sorting algorithm that works by building a sorted list one element at a time. It takes each element from the unsorted portion and inserts it into the correct position in the sorted portion.
Steps:
1. Start with the second element (as first element is considered sorted).
2. Compare the current element (called key) with elements before it.
3. Shift all larger elements one position to the right.
4. Insert the key into its correct position.
5. Repeat until the entire list is sorted.

In essence, we consider the first element as sorted, and then from second element to the end, we check the element with the sorted elements, and "insert" to its correct position. Hence, called insertion sort.
'''

def insertion_sort(arr):
    n = len(arr)
    for i in range(1, n):
        key = arr[i]
        j = i-1
        while j >= 0 and key < arr[j]:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key
    return arr

if __name__ == "__main__":
    arr = [34,55,12,3,1,0,7,3,9,67,33,18,79,69,100, 134]
    insertion_sort(arr)
    print("Sorted Array: ", arr)