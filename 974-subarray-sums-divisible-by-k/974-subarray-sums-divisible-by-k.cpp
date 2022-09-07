class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> rem_map;
        rem_map[0]++;
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if (i>0)
                nums[i]+=nums[i-1];
            int rem = nums[i]%k;
            if(rem<0) 
                rem += k;
            if(rem_map.find(rem)!=rem_map.end())  
                
                count +=rem_map[rem];
            rem_map[rem]++;
            
        }
        return count;
    }
};