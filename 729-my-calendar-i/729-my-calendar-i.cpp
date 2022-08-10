class MyCalendar {
public:
    vector<pair<int,int>> v1;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(int i=0;i<v1.size();i++){
            if((v1[i].first>=start and v1[i].second<=end) or(v1[i].first<=start and v1[i].second>start) or(v1[i].first<end and v1[i].second>end)){
                return false;
            }
            else{
                continue;
            }
        }
        v1.push_back({start, end});
        return true;
    }
    
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */