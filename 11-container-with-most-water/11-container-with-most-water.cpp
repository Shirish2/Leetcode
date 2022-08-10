class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int max1=0;
        while(l<r){
            int lh=height[l];
            int rh=height[r];
            int min1=min(lh,rh);
            int area=min1*(r-l);
            max1=max(max1,area);
        if(lh<rh){
            l++;
        }
            else{
                r--;
            }
        }
        return max1;
    }
};