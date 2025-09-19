// Best Case     --> O(n + k)   // k = number of buckets
// Average Case  --> O(n + k)
// Worst Case    --> O(n^2)     // (agar saare elements ek hi bucket me chale gaye)
// Space         --> O(n + k)

// Works best jab input uniformly distributed ho.
// Mostly float/double values (0–1 range) ke liye use hota hai.
// Not comparison-based → can beat O(n log n).



#include <vector>

using namespace std;

vector<int> bucketSort(vector<int>& arr) {
    // Assuming arr only contains 0, 1 or 2
    int counts[] = {0, 0, 0};

    // Count the quantity of each val in arr
    for (int n: arr) {
        counts[n]++;
    }

    int i = 0;
    for (int n = 0; n < 3; n++) {
        for (int j = 0; j < counts[n]; j++) {
            arr[i] = n;
            i++;
        }
    }
    return arr;
}
