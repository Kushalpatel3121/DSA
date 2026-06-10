'''
Bubble Sort is one of the simplest sorting algorithms. It repeatedly compares adjacent elements in the list and swaps them if they are in the wrong order.
Steps:
1. Starting from index 0, compare the adjacent elements.
2. If first element is greater than the second one, swap them. This way the greater element "bubbles up" to the end of the list.
3. Repeat the process for all the elements in the list.
'''

def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0,n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

if __name__ == "__main__":
    arr = [3,15,78,33,12,0,3,1,11,34,12,9]
    bubble_sort(arr)
    print("Sorted Array: ", arr)