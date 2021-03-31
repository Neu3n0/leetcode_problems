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
/*class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (q == nullptr && p == nullptr) {
            return true;
        }
        if (q != nullptr && p != nullptr && p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right)) {
            return true;
        }
        return false;
    }
};
*/
// class Solution {
// public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         stack<pair<TreeNode*, TreeNode*>> st;
//         st.push(make_pair(p, q));
//         while (!st.empty()) {
//             TreeNode* left = st.top().first;
//             TreeNode* right = st.top().second;
//             st.pop();
//             if (left == nullptr && right == nullptr) {
//                 continue;
//             }
//             if (left == nullptr || right == nullptr) {
//                 return false;
//             }
//             if (left != nullptr && right != nullptr && left->val != right->val) {
//                 return false;
//             }
//             st.push(make_pair(left->left, right->left));
//             st.push(make_pair(left->right, right->right));
//         }
//         return true;
//     }
// };