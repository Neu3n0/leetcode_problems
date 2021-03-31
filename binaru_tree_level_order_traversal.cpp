//dfs
// class Solution {
// public:
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         if (root == nullptr) {
//             return {};
//         }
//         queue<TreeNode*> q;
//         q.push(root);
//         int level = 0;
//         while (!q.empty()) {
//             ans.push_back(vector<int> ());
//             int size = q.size();
//             for (int i = 0; i < size; ++i) {
//                 TreeNode* node = q.front();
//                 q.pop();
//                 ans[level].push_back(node->val);
//                 if (node->left != nullptr) {
//                     q.push(node->left);
//                 }
//                 if (node->right != nullptr) {
//                     q.push(node->right);
//                 }
//             }
//             ++level;
//         }
//         return ans;
//      }
// };
//rec
