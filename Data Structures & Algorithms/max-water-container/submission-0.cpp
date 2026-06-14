class Solution {
public:
    int maxArea(vector<int>& heights) {

        int maxi = 0;
        int area;
        int minu;
        int i = 0;
        int j = heights.size()-1;
        // sort(heights.begin(), heights.end());

        for(int i=0 ; i<heights.size();i++){
            for(int j = i+1; j<heights.size();j++){
                area = min(heights[i],heights[j])*(j-i);
                maxi = max(area, maxi);
            }
        }
        return maxi; 
    }
};
