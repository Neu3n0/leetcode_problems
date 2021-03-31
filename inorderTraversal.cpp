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
//     /*
//             1
//         2       3
//     4       5
    
//     */
// //     vector<int> inorderTraversal(TreeNode* root) {
// //         if (root == nullptr) {
// //             return {};
// //         }  
// //         vector<int> ans = inorderTraversal(root->left);
// //         ans.push_back(root->val);
// //         vector<int> right = inorderTraversal(root->right);
// //         ans.insert(ans.end(), right.begin(), right.end());
// //         return ans;
// //     }
//     /*
//             1
//         2       3
//     4       5
//     */
//     vector<int> inorderTraversal(TreeNode* root) {
//         if (root == nullptr) {
//             return {};
//         }  
//         vector<int> ans;
//         stack<TreeNode*> st;
//         TreeNode* curr = root;
//         while(!st.empty() || curr != nullptr) {
//             while (curr != nullptr) {
//                 st.push(curr);
//                 curr = curr->left;
//             }
//             curr = st.top();
//             st.pop();
//             ans.push_back(curr->val);
//             curr = curr->right;
//         }
//         return ans;
//     }
// //     void inorderTraversal(TreeNode* node, vector<int>& ans) {
// //         if (node == nullptr) {
// //             return;
// //         }
// //         inorderTraversal(node->left, ans);
// //         ans.push_back(node->val);
// //         inorderTraversal(node->right, ans);
// //     }
    
// //     vector<int> inorderTraversal(TreeNode* root) {
// //         vector<int> ans;
// //         inorderTraversal(root, ans);
// //         return ans;
// //     }
// };