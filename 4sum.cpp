/*n^4 ln(n)*/
/*
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                for (int k = j + 1; k < nums.size(); ++k) {
                    for (int l = k + 1; l < nums.size(); ++l) {
                        if (nums[i] + nums[j] + nums[k] + nums[l] == target) {
                            vector<int> tmp ({nums[i], nums[j], nums[k], nums[l]});
                            sort(tmp.begin(), tmp.end());
                            st.insert(tmp);
                        }
                    }            
                }            
            }   
        }
        for (auto x : st) {
            ans.push_back(x);
        }
        return ans;
    }
};
*/

/* */
/*

*/