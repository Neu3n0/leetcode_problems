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
/*rec*/
// class Solution {
// private:
//     bool isSymmetric(TreeNode* left, TreeNode* right) {
//         if (left == nullptr && right == nullptr) {
//             return true;
//         }
//         if (left == nullptr || right == nullptr) {
//             return false;
//         }
//         return right->val == left->val &&
//             isSymmetric(left->left, right->right) &&
//             isSymmetric(left->right, right->left);
//     }
// public:
//     bool isSymmetric(TreeNode* root) {
//         if (root == nullptr) {
//             return true;
//         }
//         return isSymmetric(root->left, root->right);
//     }
// };
/*iter*/
// class Solution {
// public:
//     bool isSymmetric(TreeNode* root) {
//         if (root == nullptr) {
//             return true;
//         }
//         stack<pair<TreeNode*, TreeNode*>> st;
//         st.push(make_pair(root->left, root->right));
//         while (!st.empty()) {
//             // TreeNode* left;
//             // TreeNode* right;
//             // tie(left, right) = st.top();
//             TreeNode* left = st.top().first;
//             TreeNode* right = st.top().second;
//             st.pop();
//             if (left == nullptr && right == nullptr) {
//                 continue;
//             }
//             if (left == nullptr || right == nullptr) {
//                 return false;
//             }
//             if (left->val != right->val) {
//                 return false;
//             }
//             st.push(make_pair(left->left, right->right));
//             st.push(make_pair(left->right, right->left));
//         }
//         return true;
//     }
// };