class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min=0;
        string s="";
        int count=1;
        for(int i=0;i<strs.size();i++){
                if(strs[i].length()>min){
                    min=strs[i].length();
                }
        }
        for(int i=0;i<min;i++){
            char c=strs[0][i];
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=c){
                    count=0;
                }
            }
            if(count){
                s+=c;
            }
            else{
                break;
            }
        }
        return s;
    }
};