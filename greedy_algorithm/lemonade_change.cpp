#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int five = 0, ten = 0;

        for (int i = 0; i < n; i++) {
            if (bills[i] == 5) {
                five++;
            }
            else if (bills[i] == 10) {
                if (five == 0) return false;
                five--;
                ten++;
            }
            else { // bill is 20
                if (ten > 0 && five > 0) {
                    ten--;
                    five--;
                }
                else if (five >= 3) {
                    five -= 3;
                }
                else {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);

    freopen("input.txt", "r", stdin);   // input from file
    freopen("output.txt", "w", stdout); // output to file

    int n;
    cin >> n;
    vector<int> bills(n);
    for (int i = 0; i < n; i++) {
        cin >> bills[i];
    }

    Solution sol;
    bool ans = sol.lemonadeChange(bills);

    cout << (ans ? "true" : "false") << "\n";
    return 0;
}
