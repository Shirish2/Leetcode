class Solution {
public:
    int mirrorReflection(int p, int q) {
        int r=p;
        int e=q;
        
        while(r%2==0 and e%2==0){
            r/=2;
            e/=2;
        }
        if(r%2==1 and e%2==0){
            return 0;
        }
        else if(r%2==1 and e%2==1){
            return 1;
        }
        else if(r%2==0 and e%2==1){
            return 2;
        }
        else return -1;
    }
};