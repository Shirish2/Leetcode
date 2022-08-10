class Solution {
public:
    int reverse(int x) {
        int nums=0;
        while(x){
            if(nums > INT_MAX/10 || nums<INT_MIN/10) return 0;
            
            //int r=;
            int t=nums*10+x%10;
            nums=t;
            x/=10;
        }
        return nums;
    }
};