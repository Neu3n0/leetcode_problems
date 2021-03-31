/*n*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
/*
class Solution {
public:
    bool isValidBST(TreeNode* node, const int* min,const int* max) {
        if (node == nullptr) {
            return true;
        }
        if (min != nullptr && !(node->val > *min)) {
            return false;
        }
        if(max != nullptr && !(node->val < *max)) {
            return false;
        }
        return isValidBST(node->left, min, &node->val) && isValidBST(node->right, &node->val, max);
        
    }
    bool isValidBST(TreeNode* root) {
        return isValidBST(root, nullptr, nullptr);
    }
};
*/

/*
class Solution{
public:
    bool isValidBST(TreeNode* node, int min, int max) {
        if (node == nullptr) {
            return true;
        }
        if (!(min <= node->val && max >= node->val)) {
            return false;
        }
        if(node->val == INT_MIN && node->left != nullptr) {
            return false;
        }
        if (node->val != INT_MIN && !isValidBST(node->left, min, node->val - 1)) {
            return false;
        }
        if(node->val == INT_MAX && node->right != nullptr) {
            return false;
        }
        if (node->val != INT_MAX && !isValidBST(node->right, node->val + 1, max)) {
            return false;
        }
        return true;
        
    }
    bool isValidBST(TreeNode* root) {
        return isValidBST(root, INT_MIN, INT_MAX);
    }
};
*/