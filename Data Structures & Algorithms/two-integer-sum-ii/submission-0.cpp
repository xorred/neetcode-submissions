class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;

        // sort(numbers.begin(), numbers.end());

        int i = 0;
        int j = numbers.size()-1;

        while(i<j){
            int sum = numbers[i]+ numbers[j];
            if(numbers[i]+ numbers[j] == target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                i++;
                j--;

                while(i<j && i>0 && numbers[i]!= numbers[i-1]){
                    i++;
                }

                while(i<j && j <numbers.size() && numbers[j]!= numbers[j+1]){
                    j--;
                }
            }
            else if(sum>target){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};
