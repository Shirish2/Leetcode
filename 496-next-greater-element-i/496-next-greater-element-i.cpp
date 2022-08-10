class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        vector<int> r(n,-1);
        stack<int> s;
        vector<int> v;
        
        for(int i=n-1;i>=0;i--){
            while(!s.empty() and s.top()<=nums2[i]){
                s.pop();
            }
            if(!s.empty()){
                r[i]=s.top();
            }
            s.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<n;j++){
                if(nums1[i]==nums2[j]){
                    v.push_back(r[j]);
                    break;
                }
            }
        }
        return v;
            
    }
};