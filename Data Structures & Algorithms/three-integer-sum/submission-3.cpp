class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<pair<int,int>> newVec;

        for(int i = 0; i<nums.size();i++){
            newVec.push_back({nums[i],i});
        }

        sort(newVec.begin(), newVec.end());
        
        for(int i=0 ; i<newVec.size();i++){
            int l = i+1;
            int h = newVec.size()-1;

            if (i > 0 && newVec[i].first == newVec[i-1].first) {
                continue;
            }

            while(l<h){
                int sum = newVec[l].first + newVec[h].first+newVec[i].first;
                if(sum == 0){
                    ans.push_back({newVec[i].first, newVec[l].first, newVec[h].first});
                    l++;
                    h--;  

                    while(l < h && newVec[l].first == newVec[l-1].first){
        l++;
    }
    
    // Fast-forward 'h' if it's sitting on a duplicate of the number it just left
    while(l < h && newVec[h].first == newVec[h+1].first){
        h--;
    }
                }

                else if(sum < 0){
                    l++;
                }

                else{
                    h--;
                }
            }
        }
        return ans;
    }
};
