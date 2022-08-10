class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int m=0;
        if(n==3){
            m=nums[0]*nums[1]*nums[2];
        }
        else{
            int ans1=nums[n-1]*nums[n-2]*nums[n-3];
            int ans2=nums[0]*nums[1]*nums[n-1];
            if(ans1>ans2){
                m=ans1;
            }
            else{
                m=ans2;
            }
        }
        return m;
    }
};