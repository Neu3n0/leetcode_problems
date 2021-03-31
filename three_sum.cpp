/*n^3 ln(n)*/
/*
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                for (int k = j + 1; k < nums.size(); ++k) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> tmp ({nums[i], nums[j], nums[k]});
                        sort(tmp.begin(), tmp.end());
                        st.insert(tmp);
                        tmp.clear(); 
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

/*n^2 ln(n)*/
/*
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++ i) {
            if (i > 0 &&  nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < nums.size(); ++j) {
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }
                int ze = - nums[i] - nums[j];
                if (binary_search(nums.begin() + j + 1, nums.end(), ze)) {
                    ans.push_back({nums[i], nums[j], ze});
                }
            }
        }
        return ans;
    }
};
*/