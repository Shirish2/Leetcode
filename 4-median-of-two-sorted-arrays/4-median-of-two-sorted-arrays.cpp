class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
if(nums1.size()>nums2.size())
return findMedianSortedArrays(nums2,nums1);

    int n=nums1.size(),m=nums2.size();
    int l=0,h=n;
    while(l<=h){
        int cut1=(l+h)>>1;
        int cut2=(n+m+1)/2 - cut1;
        
        int lmax1=cut1==0?INT_MIN:nums1[cut1-1];
        int lmax2=cut2==0?INT_MIN:nums2[cut2-1];
        int rmin1=cut1==n?INT_MAX:nums1[cut1];
        int rmin2=cut2==m?INT_MAX:nums2[cut2];
        
        if(lmax1<=rmin2 && lmax2<=rmin1){
            if((n+m)%2==0){
                return double((max(lmax1,lmax2) + min(rmin1,rmin2))/2.0);
            }else{
                return double(max(lmax1,lmax2));
            }
        }else if(lmax1>rmin2){
            h=cut1-1;
        }else{
            l=cut1+1;
        }
    }
    return 0.0;
}

};