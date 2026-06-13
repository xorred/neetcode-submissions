class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0;
        int count2 = 0;
        int cnd1 = 0;
        int cnd2 = INT_MIN;
        vector<int>ans;
        for(int i: nums){

            if(i==cnd1){
                count1++;
            }

            else if(i==cnd2){
                count2++;
            }

            else if(count1==0){
                cnd1 = i;
                count1 = 1;
                // cnd1 = i;
            }

            else if(count2 == 0){
                cnd2 = i;
                count2 =1;
                
            }
            
            else{
                count1--;
                count2--;
            }
            

        }

        int countA=0;
        int countB=0;
        for(int i: nums){
            if(i==cnd1){
                countA++;
            }
            else if(i==cnd2)
                countB++;
            }
        
        if(countA > (nums.size()/3)){
            ans.push_back(cnd1);
        }
       
       if(countB > (nums.size()/3)){
        ans.push_back(cnd2);
       }
        return ans;

    }
    
};