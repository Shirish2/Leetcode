class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        if(pattern.size()==1){
            return words;
        }
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            vector<int> old(125,0);
            vector<int> wo(125,0);
            int flag=0;
            string wor=words[i];
            for(int j=0;j<pattern.size();j++){
                if(old[int(pattern[j])]==0 and wo[int(wor[j])]==0){
                    old[int(pattern[j])]=int(wor[j]);
                    wo[int(wor[j])]=int(pattern[j]);
                }
                else if(old[int(pattern[j])]!=0 && wo[int(wor[j])]!=0){
                    if(old[int(pattern[j])]!=int(wor[j]) || wo[int(wor[j])]!=int(pattern[j])){
                        flag=1;
                        break;
                    }
                }
                else{
                    flag=1;
                    break;
                }
            }
            if(flag==0) ans.push_back(wor);
        }
        return ans;
    }
};