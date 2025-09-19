// Insertion -> O(log n) average, O(n) worst (agar skewed tree ho)
// Deletion -> O(log n) average, O(n) worst
// Searching -> O(log n) average, O(n) worst
// Traversal -> O(n) (Inorder/Preorder/Postorder sab O(n))

#include <bits/stdc++.h>
using namespace std;


// val_ --> private varible ke liye likhte hai readable nature ke liye 

class TreeNode {
    public:
        int val_;
        TreeNode* left = nullptr;
        TreeNode* right = nullptr;

        TreeNode(int val) {
            val_ = val;
        }
};

bool search(TreeNode* root, int target) {
    if (!root) {
        return false;
    }

    if (target > root->val_) {
        return search(root->right, target);
    } else if (target < root->val_) {
        return search(root->left, target);
    } else {
        return true;
    }
}
