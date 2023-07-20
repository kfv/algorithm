#ifndef ALGORITHM_SEARCH_H
#define ALGORITHM_SEARCH_H

/* Linear Search
 * -------------
 *
 * linear_search(arr, val, res):
 *
 *   Macro to search for the value 'val' in the array 'arr' using the Linear
 *   Search algorithm. Upon success, the index of the value is stored in
 *   'res', otherwise, 'res' is set to -1.
 *
 *   Time complexity:
 *
 *   - Best case: O(1), where the value is found at the first index.
 *
 *   - Average case: O(n), where n is the number of elements in the array.
 *     This occurs when the value is found at the last index.
 *
 *   - Worst case: O(n), where the value is not found in the array.
 *
 *   Space complexity: O(1). The algorithm is in-place, meaning it doesn't
 *   require any additional space that scales with the input array size.
 *
 *   Note: The array 'arr' shall be a valid array, not a pointer.
 */

#define linear_search(arr, val, res) \
do {                                           \
    size_t size = sizeof(arr)/sizeof(arr[0]);  \
    res = -1;                                  \
    for (size_t i = 0; i < size; i++) {        \
        if (arr[i] == val) {                   \
            res = i;                           \
            break;                             \
        }                                      \
    }                                          \
} while(0)

#endif /* ALGORITHM_SEARCH_H */
