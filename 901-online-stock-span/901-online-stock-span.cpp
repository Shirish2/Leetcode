class StockSpanner {
private:
    vector<int> v;
    stack<int> s;
    int day=0;
public:
   
    StockSpanner() {
        
    }
    
    int next(int price) {
        int ans=0;
        v.push_back(price);
        while(s.size() and v[s.top()]<=v[day]){
            s.pop();
        }
        if(s.size()==0){
            ans=day+1;
        }
        else{
            ans=day-s.top();
        }
        s.push(day);
        day++;
    
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */