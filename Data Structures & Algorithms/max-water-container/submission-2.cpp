class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxA = 0;

        int l = 0, r = heights.size()-1;

        while(l < r){
            int area = (r-l)*min(heights[r],heights[l]);
            maxA = max(maxA, area);
            if(heights[r] > heights[l]){
                l++;
            }
            else{
                r--;
            }
        }

        return maxA;
    }
};
