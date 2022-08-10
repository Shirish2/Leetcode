class NumArray {
public:
    vector<int> temp;
    int s;
    NumArray(vector<int>& nums) {
        temp=nums;    
        s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
    }
    
    void update(int index, int val) {
        s=s-temp[index];
        temp[index]=val;
        s=s+val;
    }
    
    int sumRange(int left, int right) {
        int result=s;
        for(int i=0;i<left;i++){
            result=result-temp[i];
        }
        for(int i=right+1;i<temp.size();i++){
            result=result-temp[i];
        }
        return result;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */