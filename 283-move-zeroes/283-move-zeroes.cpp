class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                k++;
                swap(nums[k],nums[i]);
            }
        }
    }
};