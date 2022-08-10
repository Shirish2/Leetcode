class Solution {
public:
   void hp(vector<string> &v,int n, int oc, int cc, string s){
       if(oc==n and cc==n){
           v.push_back(s);
           return;
       }
       if(oc<n){
           hp(v,n,oc+1,cc,s+"(");
       }
       if(cc<oc){
           hp(v,n,oc,cc+1,s+")");
       }
   }
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        int oc=0,cc=0;
        hp(v,n,oc,cc,"");
        return v;
    }
};