class Solution {
public:
    int calculate(string s) {
        int len=s.length();
        if(len==0){
            return 0;
        }
        stack<int> x;
       
        int currN=0;
        char operation='+';
        for(int i=0;i<len;i++){
            char currCh=s[i];
            if(isdigit(currCh)){
                currN=(currN*10)+(currCh-'0');
            }
            if(!isdigit(currCh) and !iswspace(currCh) or i==len-1){
                if(operation=='-'){
                    x.push(-currN);
                }
                else if(operation=='+'){
                    x.push(currN);
                }
                else if(operation=='*'){
                    int a=x.top();
                    x.pop();
                    x.push(currN*a);
                }
                else if(operation=='/'){
                    int a=x.top();
                    x.pop();
                    x.push(a/currN);
                }
                operation=currCh;
                currN=0;
            }
        }
        int res=0;
        while(x.size()!=0){
            res+=x.top();
            x.pop();
        }
        return res;
    }
};