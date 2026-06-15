class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        int i =0;
        int j = people.size() - 1;
        int count = 0;

        if(people.size() == 1){
            return 1;
        }

        sort(people.begin(), people.end());

        while(i<=j && j>= 0 && people[j]>= limit){
            j--;
            count++;
        }

        while(i<=j){
            if(i!=j){
                int sum = people[i] + people[j];
                if(sum <= limit){
                    i++;
                    j--;
                    count++;
                }
                else{
                    j--;
                    count++;
                }
            }
            else{
                count++;
                j--;
            }
        }

       return count; 
    }
};