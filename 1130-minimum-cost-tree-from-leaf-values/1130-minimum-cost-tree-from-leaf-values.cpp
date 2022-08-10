class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        int n=arr.size();
        int r=0;
        stack<int> s;
        for(int i=0;i<n;i++){
            int n=arr[i];
            while(!s.empty() and s.top()<=n ){
                int curr=s.top();
                s.pop();
            if(!s.empty()){
                r=r+curr*min(s.top(),n);
            }
                else{
                    r=r+curr*n;
                }
                
            }
            s.push(n);
        }
         while(s.size()>=2){
             int v=s.top();
             s.pop();
             r=r+s.top()*v;
         }   
        
        return r;
    }
};