// Best Case     --> O(n)       // already sorted
// Average Case  --> O(n^2)
// Worst Case    --> O(n^2)
// Space         --> O(1)       // in-place

// Stable sort (equal elements ki order preserve hoti hai).
// Adaptive ->  agar array thoda sorted hai toh bahut fast ho jata hai.
// Good for small datasets or almost sorted data.

#include <vector>

using namespace std;
vector<int> insertionSort(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int j = i - 1;
        while (j >= 0 && arr[j + 1] < arr[j]) {
            int tmp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = tmp;
            j--;
        }
    }
    return arr;
}