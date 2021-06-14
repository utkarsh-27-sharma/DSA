class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int ans = 1, prev = nums[0], i = 1;
        while (i < nums.size())
            if (nums[i] == prev) while (i < nums.size() && prev == nums[i]) i++;
            else {
                if (nums[i] > prev) while (i < nums.size() && nums[i - 1] <= nums[i]) i++;
                else while (i < nums.size() && nums[i - 1] >= nums[i]) i++;
                ans++; prev = nums[i - 1];
            }
        return ans;
    }
};
