class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int> s;
        int n=t.size()-1;
        vector <int> ans(t.size(),0);
        while(n>=0){
            while(!s.empty() and t[s.top()]<=t[n]){
                s.pop();
            }
             if(!s.empty()){
                ans[n]=s.top()-n;
            }
            s.push(n--);
        }
        return ans;
    }
};