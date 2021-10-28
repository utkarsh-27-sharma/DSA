class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)    
            return 0;
        int result = 1;
        int current = 1;
        for(int i=1;i<n;i++){
            if(nums[i] > nums[i-1]){
                current++;
            }else{
                current = 1;
            }
            result = max(result, current);
        }
        return result;
    }
};
