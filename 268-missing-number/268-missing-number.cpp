class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int m;
        sort(nums.begin(),nums.end());
        
            for(int i=0;i<n;i++){
                if(i!=nums[i]){
                    m=i;
                    break;
                    }
                
            }
        return m;
    }
};