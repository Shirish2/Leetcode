class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v1={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_map<string,int> mp;
        
        for(int i=0;i<words.size();i++){
            string res;
            for(int j=0;j<words[i].size();j++){
                res+=v1[words[i][j]-'a'];}
                mp[res]=1;
            
        }
        return mp.size();
    }
};