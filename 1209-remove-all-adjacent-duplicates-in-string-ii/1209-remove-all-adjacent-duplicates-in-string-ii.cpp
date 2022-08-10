class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        string ans="";
        for(int i=0;i<s.size();i++){
            int count=1;
            if(st.size()==0){
                st.push({s[i],count});
            }
            else if(st.top().first!=s[i]){
                st.push({s[i],count});
            }
            else{
                int a=st.top().second;
                if(a==k-1){
                    st.pop();
                }
                else{
                    st.pop();
                    st.push({s[i],a+1});
                }
            }
        }
        
        while(st.size()!=0){
            int t=st.top().second;
            while(t--){
                ans+=st.top().first;
            }
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};