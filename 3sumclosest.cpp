/*n^3*/
/*class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int dif = abs(nums[0] + nums[1] + nums[2] - target);
        int ans = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                for (int k = j + 1; k < nums.size(); ++k) {
                    if (abs(nums[i] + nums[j] + nums[k] - target) < dif) {
                        ans = nums[i] + nums[j] + nums[k];
                        dif = abs(nums[i] + nums[j] + nums[k] - target);
                    }    
                }
            }
        }
        return ans;
    }
};
*/