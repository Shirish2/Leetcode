class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int n=arr.size();
        int m=arr.size();
        int res=0;
        vector<int> v1;
        for(auto i:mp){
            v1.push_back(i.second);
        }
        sort(v1.begin(),v1.end());
        reverse(v1.begin(),v1.end());
        for(int i=0;i<=v1.size();i++){
            m-=v1[i];
            if(m<=(n/2)){
                res=res+1;
                break;
            }
            else
                res++;
        }
        return res;
    }
};