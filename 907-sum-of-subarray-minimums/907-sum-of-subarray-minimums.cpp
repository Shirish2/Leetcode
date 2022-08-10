class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        long long int n=arr.size();
        stack<int> s1,s2;
        vector<long int> g2(n),g1(n);
        for(int i=0;i<n;i++){
            g1[i]=n-i-1;
            g2[i]=i;
        }
        for(int i=0;i<n;i++){
            while(!s1.empty() and arr[s1.top()]>arr[i]){
                g1[s1.top()]=i-s1.top()-1;
                s1.pop();
            }
            s1.push(i);
        }
        for(int i=n-1;i>=0;i--){
            while(!s2.empty() and arr[s2.top()]>=arr[i]){
                g2[s2.top()]=s2.top()-i-1;
                s2.pop();
            }
            s2.push(i);
        }
       long long int ans=0;
        int m=1e9+7;
        for(int i=0;i<n;i++){
            ans+=(arr[i]*(g1[i]+1)*(g2[i]+1));
            ans%=m;
        }
        
        return ans;
    }
};