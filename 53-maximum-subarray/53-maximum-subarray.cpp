class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int a=0, ans=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            a=max(nums[i],a+nums[i]);
            ans=max(ans,a);
        }
        return ans;
        
    }
};