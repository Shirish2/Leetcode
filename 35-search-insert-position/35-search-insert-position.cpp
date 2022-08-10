#include <iostream>
class Solution {
public:
    int searchInsert(vector<int>& nums, int &target) {
        
        int mid=0;
        
        int i=0,j=nums.size()-1;
        
        while(i<=j)
        {
            mid=(i+j)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                j=mid-1;
            }
            else i=mid+1;
        }
        if(nums[mid]>target) return mid;
        return mid+1;
    }
};