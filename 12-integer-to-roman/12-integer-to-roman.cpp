class Solution {
public:
     map<int,string> map={
          {1000,"M"},
          {900,"CM"},
          {500,"D"},
          {400,"CD"},
          {100,"C"},
          {90,"XC"},
          {50,"L"},
          {40,"XL"},
          {10,"X"},
          {9,"IX"},
          {5,"V"},
          {4,"IV"},
          {1,"I"}
          
      } ;
    string intToRoman(int num) {
        string res="";
        for(auto a=map.rbegin();a!=map.rend();a++){
            while(num>=a->first){
                res+=a->second;
                num-=a->first;
            }
        }
        return res;
        
    }
};