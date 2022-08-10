class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while(columnNumber!=0){
            int r=columnNumber%26;
            char ch=r+64;
            if(r==0){
                ch=r+90;
                columnNumber--;
            }
            columnNumber/=26;
            ans+=(ch);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};