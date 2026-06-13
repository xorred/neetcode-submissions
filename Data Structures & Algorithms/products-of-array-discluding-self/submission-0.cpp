class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> ans;
        int prod; 

        // int prod1=1;
        // for(int i=0; i<nums.size();i++){
        //     prod1 = prod1 * nums[i];
        // }

        //  for(int i=0; i<nums.size();i++){
        //     int j = prod1/nums[i];
        //     ans.push_back(j);
        //  }

        for(int i=0; i<nums.size();i++){
            prod = 1;
            for(int j = 0; j<nums.size();j++){
                if(j != i){
                    prod = nums[j]*prod;
                }
            }
            ans.push_back(prod);
        }

        return ans;
    }
};
