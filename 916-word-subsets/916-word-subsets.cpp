class Solution {
public:
    vector<string> wordSubsets(vector<string>& word1, vector<string>& word2) {
        vector<string> ans;
        vector<int> count(26,0);
        
        for(auto x:word2){
            vector<int> count1(26,0);
            for(auto y:x){
                count1[y-'a']++;
            }
            for(int i=0;i<26;i++){
                count[i]=max(count[i],count1[i]);
            }
        }
        for(auto x:word1){
        bool f=1;
            vector<int> count1(26,0);
            for(auto y:x){
                count1[y-'a']++;
            }
            for(int i=0;i<26;i++){
           if(count[i]>count1[i]){
               f=0;
               break;
           }
            }
            if(f==1){
                ans.push_back(x);
            }
        }
        
        return ans;
    }
};