class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int>mpp;
        for(int x: nums){
            mpp[x]++;
        }
        for(auto isSeen: mpp){
            if(isSeen.second>(nums.size()/3)){
                int val= isSeen.first;
                ans.push_back(val);
            }
        }
        return ans;
    }
};