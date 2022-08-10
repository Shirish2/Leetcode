class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int m=nums[0],n=nums.size();
        for(int i=1;i<n;i++){
            if(m<nums[i]){
                m=nums[i];
            }
        }
        int k;
        for(int i=0;i<n;i++){
            if(m==nums[i]){
                k=i;
            }
        }
        return k;
    }
};