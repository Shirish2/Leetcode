class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n=nums1.size();
        int m=nums2.size();
        int a=0;
        int b=0;
        vector<int> nums3;
        
        while(a<n && b<m){
        if(nums1[a]==nums2[b]){
                nums3.push_back(nums1[a]);
                a++;
                b++;
            }
             else if(nums1[a]<nums2[b]){
                 a++;
             }
             else{
                 b++;
             }
        }
        
        return nums3;
    
    }
};