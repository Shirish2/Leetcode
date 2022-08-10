class Solution {
public:
    bool isHappy(int n) {
        if(n == 1 or n == 7) return true;
        if(n < 9) {
            return false;
        }
        
        int num = 0;
        while(n != 0)
        {
            int m = n%10;
            num += (m*m);
            n /= 10;
        }
        
        if(num == 1){
            return true;}
        else {
            return isHappy(num);
    }
    }
};