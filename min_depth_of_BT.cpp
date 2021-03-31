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
// class Solution {
// public:
//     int next_level(TreeNode* left, TreeNode* right, int level) {
//         if (left == nullptr && right == nullptr) {
//             return level;
//         }
//         if (left == nullptr) {
//             return next_level(right->left, right->right, level + 1);
//         }
//         if (right == nullptr) {
//             return next_level(left->left, left->right, level + 1);
//         }
//         return min(next_level(left->left, left->right, level + 1), next_level(right->left, right->right, level + 1));
//     }
//     int minDepth(TreeNode* root) {
//         if (root == nullptr) {
//             return 0;
//         }   
//         return next_level(root->left, root->right, 1);
//     }
    // int minDepth(TreeNode* root) {
    //     if (root == nullptr) {
    //         return 0;
    //     }
    //     int level = 1;
    //     queue<TreeNode*> curr;
    //     queue<TreeNode*> next;
    //     curr.push(root);
    //     while(true) {
    //         while(!curr.empty()) {
    //             TreeNode* node = curr.front();
    //             curr.pop();
    //             if (node->left == nullptr && node->right == nullptr) {
    //                 return level;
    //             }
    //             if(node->left != nullptr) {
    //                 next.push(node->left);
    //             }
    //             if(node->right != nullptr) {
    //                 next.push(node->right);
    //             }
    //         }
    //         ++level;
    //         swap(curr, next);
    //     }
    //     return level;
    // }
// };