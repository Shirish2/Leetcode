class Solution {
public:
    int evalRPN(vector<string>& token) {
        stack<int> s;
       
        for(int i=0;i<token.size();i++){
            if(token[i]=="+" || token[i]=="-" || token[i]=="/" || token[i]=="*"){
                int v1=s.top();
                s.pop();
                int v2=s.top();
                s.pop();
                s.push(solve(v2,v1,token[i]));
            }
            else{
                s.push(stoi(token[i]));
            }
            
        }
         return s.top();
        }
        int solve(int v1,int v2, string a){
            if(a=="+"){
                return v1+v2;
            }
             if(a=="-"){
                return v1-v2;
            }
             if(a=="/"){
                return v1/v2;
            }
            return v1*v2;
        }
     
                       
};