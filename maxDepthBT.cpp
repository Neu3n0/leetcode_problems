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
//     int maxDepth(TreeNode* root) {
//         if (root == nullptr) {
//             return 0;
//         }   
//         return max(maxDepth(root->left), maxDepth(root->right)) + 1;
//     }
// };
// class Solution {
// public:
//     int maxDepth(TreeNode* root) {
//         int answer = 0;
//         if (root == nullptr) {
//             return 0;
//         }
//         vector<TreeNode*> curr;
//         curr.push_back(root);
//         while (!curr.empty()) {
//             vector<TreeNode*> next;
//             for (TreeNode* node : curr) {
//                 if (node->left != nullptr) {
//                     next.push_back(node->left);
//                 }
//                 if (node->right != nullptr) {
//                     next.push_back(node->right);
//                 }    
//             }
//             next.swap(curr);
//             ++answer;
//         }
//         return answer;
//     }
// };