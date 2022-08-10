class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> arr;
        int m=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                arr.push_back(i);
            }
            
        }
        if(k>arr.size()){
            return -1;
           
        }
         m=arr[k-1];
        return m;
    }
};