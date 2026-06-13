class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int element: nums){
            mpp[element]++;
        }
        int ans=0;
        for(auto isSeen: mpp){
            if(isSeen.second>(nums.size()/2)){
                ans = isSeen.first;
            }
        }
        return ans;
    }
};