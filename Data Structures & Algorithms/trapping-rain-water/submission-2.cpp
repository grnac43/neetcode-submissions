class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size()-1;
        int maxL=height[l], maxR = height[r];
        int water = 0;
        while(l < r){
            if(maxL < maxR){
                l++;
                int area = maxL-height[l];
                if(area > 0){
                    water += area;
                }
                maxL = max(maxL, height[l]);
            } else {
                r--;
                int area = maxR-height[r];
                if(area > 0){
                    water += area;
                }
                maxR = max(maxR, height[r]);
            }
        }
        return water;

    }
};
