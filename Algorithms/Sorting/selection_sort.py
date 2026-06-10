'''
Selection Sort is one of the simplest comparison-based sorting algorithms. It sorts an array by repeatedly finding the smallest (or largest) element from the unsorted portion and placing it in its correct position. In essense, select the smallest (or largest) element and place it at the correct position (fromt or end) in the sorted array.
Steps:
1. Start from the first element and find the smallest element in the entire array by iterating over it.
2. Swap this smallest element with the first element.
3. Now, move to the second element and find the next smallest in the remaining unsorted portion and swap it with the second position.
4. Repeat this process until the entire array becomes sorted.
'''

def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        min_idx = i
        for j in range(i+1,n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
    return arr

if __name__ == "__main__":
    arr = [34,55,12,3,1,0,7,3,9,67,33,18,79,69,100, 134]
    selection_sort(arr)
    print("Sorted array: ", arr)