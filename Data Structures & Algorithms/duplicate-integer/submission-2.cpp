class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_map<int,int>mpp;
        for(int x: nums){
            if(mpp.count(x)){
                return true;
            }
            mpp[x]++;
        }
        return false;
    }
};