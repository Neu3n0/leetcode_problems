/*n^2*/
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target) {
                    nums.clear();
                    nums.push_back(i);
                    nums.push_back(j);
                }
            }
        }
        return nums;
    }
};
*/

/*n*ln(n)*/
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); ++i) {
            if (mp.find(target - nums[i]) != mp.end()) {
                nums.clear();
                nums.push_back(i);
                nums.push_back(mp[target - nums[i]]);
                return nums;
            }
            mp[nums[i]] = i;
        }
        return nums;
    }
};
*/

/*n^2*/
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        vector<int> ans = nums;
        vector<int> a;
        int k;
        sort(ans.begin(), ans.end());
        while (left < right) {
            if (ans[left] + ans[right] == target) {
                int x = ans[left];
                int y = ans[right];
                ans.clear();
                ans.push_back(x);
                ans.push_back(y);
                for (int i = 0; i < nums.size(); ++i) {
                    if (ans[0] == nums[i]) {
                        a.push_back(i);
                        k = i;
                        break;
                    }
                }
                for (int i = 0; i < nums.size(); ++i) {
                    if (ans[1] == nums[i] && i != k) {
                        a.push_back(i);
                        break;
                    }
                }
                return a;
            }
            else {
                if (ans[left] + ans[right] > target) {
                    --right;
                }
                else {
                    ++left;
                }
            }
        }
        return a;
    }
};
*/