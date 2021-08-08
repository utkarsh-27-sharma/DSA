class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i,j,n=nums.size(),remain,low,high,twoSum;
        vector<vector<int>> ans;
        if(nums.size()==0) return ans;
        sort(nums.begin(), nums.end());
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                remain=target-nums[i]-nums[j];
                low=j+1, high=n-1;
                while(low<high){
                    twoSum=nums[low]+nums[high];
                    if(twoSum<remain) low++;
                    else if(twoSum>remain) high--;
                    else{
                        vector<int> temp(4,0);
                        temp[0]=nums[i]; temp[1]=nums[j];
                        temp[2]=nums[low]; temp[3]=nums[high];
                        ans.push_back(temp);
                        //Processing the number for duplicate 3
                        while(low<high && nums[low]==temp[2]) low++;
                        //Processing the number for duplicate 4
                        while(low<high && nums[high]==temp[3]) high--;
                    }
                }
                //Processing the number for duplicate 2
                while(j+1<n && nums[j+1]==nums[j]) j++;
            }
            //Processing the number for duplicate 1
            while(i+1<n && nums[i+1]==nums[i]) i++;
        }
        return ans;
    }
};

// https://leetcode.com/problems/4sum/
