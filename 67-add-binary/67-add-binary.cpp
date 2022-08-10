class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        if(b.length()<a.length()){
            swap(a,b);
        }
        int carry=0;
        string ans="";
        for(int i=0;i<a.length();i++){
            int sum=a[i]-'0'+b[i]-'0'+carry;
            if(sum==0 || sum==1){
                carry=0;
            }
            else if(sum==2){
                sum=0;carry=1;
            }
            else if(sum==3){
                sum=1;carry=1;
            }
        
        ans.push_back(sum+'0');}
        for(int i=a.length();i<b.length();i++){
            int sum=b[i]-'0'+carry;
            if(sum==0 || sum==1){
                carry=0;
            }
            else if(sum==2){
                sum=0;carry=1;
            }
           
        
        ans.push_back(sum+'0');
        }
        if(carry==1){
            ans.push_back('1');
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};