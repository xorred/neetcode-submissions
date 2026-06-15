class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // int sum = (nums.size())*(nums.size()+1)/2;

        // int sum1 = 0;
        // for(int i=0; i<nums.size();i++){
        //     sum1 = sum1 + nums[i];
        // }

        // return sum - sum1;

        // int i = 0;
        int ans=nums.size();
        for(int i= 0; i<nums.size();i++){
            ans = ans ^ i ^ nums[i];
        }

        return ans;
        
    }
};
