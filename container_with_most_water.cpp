/*n^2*/
/*
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        for (int i = 0; i < height.size(); ++i) {
            for (int j = i + 1; j < height.size(); ++j) {
                ans = max(ans, min(height[i], height[j]) * (j - i));
            }
        }
        return ans;
    }
};
*/

/*n*/
/*
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int left = 0;
        int right = height.size() - 1;
        while (left < right) {
            ans = max(ans, min(height[left], height[right]) * (right - left));
            if (height[left] < height[right]) {
                ++left;
            }
            else {
                --right;
            }
        }
        return ans;
    }
};
*/