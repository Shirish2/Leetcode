class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s= to_string(n);
        sort(s.begin(),s.end());
        vector<string> v1;
        
        for(int i=0;i<=30;i++){
            int p=pow(2,i);
            v1.push_back(to_string(p));
        }
        for(int i=0;i<=30;i++){
            sort(v1[i].begin(),v1[i].end());
        }
        for(int i=0;i<=30;i++){
            if(v1[i]==s) return true;
        }
        return false;
    }
};