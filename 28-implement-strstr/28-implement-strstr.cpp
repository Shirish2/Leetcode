class Solution {
private:
        int ch(string haystack, string needle, int i){
            int j=0;
            while(j<needle.size()){
                if(haystack[i]!=needle[j]){
                    return false;}
                i++;
                j++;
                
            }
            return true;
        }    
public:
    int strStr(string haystack, string needle) {
        int i=0;
        while(i<haystack.size()){
            if(haystack[i]==needle[0] and ch(haystack,needle, i)){
                return i;}
            
            i++;
            
        }
        return -1;
    }
};