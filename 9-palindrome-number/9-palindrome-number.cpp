class Solution {
public:
    bool isPalindrome(int x) {
        long long int sum=0;
       long long  int y=x;
        if(x>=0){
            while(x>0){
                long long int r=x%10;
                sum=10*sum+r;
                x/=10;
            }
            if(y==sum){
                return true;
            }
            else return false;
        
        }
        else return false;
    }
};