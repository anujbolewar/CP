// Best Case     --> O(n log n)
// Average Case  --> O(n log n)
// Worst Case    --> O(n^2)     // (agar pivot har baar worst choose ho jaye)
// Space         --> O(log n)   // recursive stack


// Fastest in practice -> cache friendly & in-place.
// Divide & Conquer algorithm.
// Worst case avoid karne ke liye -> Randomized Quick Sort (pivot randomly select karo).
// Not stable by default.

#include <vector>

using namespace std;

vector<int> quickSort(vector<int>& arr, int s, int e) {
    if (e - s + 1 <= 1) {
        return arr;
    }

    int pivot = arr[e];
    int left = s; // pointer for left side

    // Partition: elements smaller than pivot on the left side.
    for (int i = s; i < e; i++) {
        if (arr[i] < pivot) {
            int tmp = arr[left];
            arr[left] = arr[i];
            arr[i] = tmp;
            left++;
        }
    }
    // Move pivot in-between left & right sides
    arr[e] = arr[left];
    arr[left] = pivot;
    
    // Quick sort left side
    quickSort(arr, s, left - 1);

    // Quick sort right side
    quickSort(arr, left + 1, e);

    return arr;
}
