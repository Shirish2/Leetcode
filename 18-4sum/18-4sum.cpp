class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        set<vector<int>> store;
        sort(nums.begin(), nums.end());
        if(nums.size()<4){return result;}
        for(int i=0; i<nums.size()-3; i++)
        {
            for(int j=i+1; j<nums.size()-2; j++)
            {
                int vala=nums[i];
                int valb=nums[j];
                int low=j+1;
                long long sumij=vala+valb;
                int high=nums.size()-1;
                while(low<high)
                {
                    long long sumlowhigh=nums[low]+nums[high];
                    long long sum=sumij + sumlowhigh;
                    if( sum == target)
                    {
                        store.insert({vala, valb, nums[low], nums[high]});
                        low++;
                        high--;
                    }
                    else if(sum>target)
                    {
                        high--;
                    }
                    else
                    {
                        low++;
                    }
                }
                

            }
        }
                for(auto it: store)
                {
                    result.push_back(it);
                }
                return result;
    }
};