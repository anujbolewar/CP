#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int stud = g.size();
        int gred = s.size();

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0, j = 0;
        while (i < stud && j < gred) {
            if (s[j] >= g[i]) {
                i++;
            }
            j++;
        }
        return i;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;

    int n, m;
    cin >> n; 
    vector<int> g(n);
    for (int i = 0; i < n; i++) cin >> g[i];

    cin >> m;
    vector<int> s(m);
    for (int i = 0; i < m; i++) cin >> s[i];

    cout << sol.findContentChildren(g, s) << "\n";

    return 0;
}


// input 
// 3
// 1 2 3
// 2
// 1 1

// output 
// 1
