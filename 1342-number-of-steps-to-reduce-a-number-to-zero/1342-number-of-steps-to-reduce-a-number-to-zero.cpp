class Solution {
public:
    int numberOfSteps(int num) {
        int j=0;
        while(num!=0){
            if(num%2==0){
            num=num/2;
            j++;
        }
        else if(num%2!=0){
            num=num-1;
            j++;
        }
        }
        return j;
    }
};