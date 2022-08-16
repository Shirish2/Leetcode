class Solution {
public:
    int firstUniqChar(string s) {
       unordered_map<char,int> map(26);
        
        for(int i=0;i<s.size();i++){
            map[s[i]]++;
        }
        
        for(int i=0;i<s.size();i++){
            if(map[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};