#ifndef ALGORITHM_SORT_H
#define ALGORITHM_SORT_H

/* Insertion Sort
 * --------------
 *
 * insertion_sort(arr):
 *
 *   Macro to sort the array 'arr' using the Insertion Sort algorithm.
 *
 *   Time complexity:
 *
 *   - Best case: O(n), where n is the number of elements in the array.
 *     This occurs when the array is already sorted in ascending order.
 *
 *   - Average case: O(n²), because on average, half of the elements in
 *     the unsorted part of the array need to be shifted in each iteration.
 *
 *   - Worst case: O(n²). This happens when the array is sorted in
 *     descending order.
 *
 *   Space complexity: O(1). The algorithm is in-place, meaning it doesn't
 *   require any additional space that scales with the input array size.
 *
 *   Note: The array 'arr' shall be a valid array, not a pointer.
 */

#define insertion_sort(arr) \
do {                                                    \
    typeof(arr[0]) k;                                   \
    size_t size = sizeof(arr)/sizeof(arr[0]);           \
    for (int i = 1, j = 0; i < size; i++, j = i - 1) {  \
        k = arr[i];                                     \
        while (j >= 0 && arr[j] > k) {                  \
            arr[j + 1] = arr[j];                        \
            j--;                                        \
        }                                               \
        arr[j + 1] = k;                                 \
    }                                                   \
} while(0)

#endif /* ALGORITHM_SORT_H */
