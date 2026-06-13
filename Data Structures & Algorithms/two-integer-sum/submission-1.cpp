class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int newsum ;

        vector<pair<int,int>> newArr;
        for(int i=0; i<nums.size();i++){
            newArr.push_back({nums[i],i});
        }

        sort(newArr.begin(), newArr.end());

        int i = 0;
        int j = nums.size()-1;

        while(i<j){
            int newSum = newArr[i].first + newArr[j].first;

            if(newSum == target){
                // int min = min(newArr[i].second,newArr[j].second);
                int x = min(newArr[i].second, newArr[j].second);
                int y = max(newArr[i].second,newArr[j].second);
                return {x, y};
            }
            else if(newSum > target){
                // i++;
                j--;
            }
            else{
                i++;
            }
        }

        return {};
        
    }
};
