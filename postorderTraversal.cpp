// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     vector<int> postorderTraversal(TreeNode* root) {
//         if (root == nullptr) {
//             return {};
//         }
//         stack<TreeNode*> st1, st2;
//         st1.push(root);
//         vector<int> ans;
//         while(!st1.empty()) {
//             TreeNode* node = st1.top();
//             st1.pop();
//             st2.push(node);
//             if(node->left != nullptr) {
//                 st1.push(node->left);
//             }
//             if(node->right != nullptr) {
//                 st1.push(node->right);
//             }
//         }
//         while (!st2.empty()) {
//             ans.push_back(st2.top()->val);
//             st2.pop();
//         }
//         return ans;
//     }
//     // vector<int> postorderTraversal(TreeNode* root) {
//     //     if (root == nullptr) {
//     //         return {};
//     //     }
//     //     vector<int> ans = postorderTraversal(root->left);
//     //     vector<int> right = postorderTraversal(root->right);
//     //     ans.insert(ans.end(), right.begin(), right.end());
//     //     ans.push_back(root->val);
//     //     return ans;
//     // }
// };