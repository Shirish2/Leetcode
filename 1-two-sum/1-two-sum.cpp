class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int>ans;
        for(int i=0;i<nums.size()-1;i++){
            int j=nums.size()-1;
            while(i<j){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
                else
                    j--;
            }
        }
        return ans;
    }
};