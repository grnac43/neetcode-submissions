class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int maxL = height[l], maxR = height[r];
        int res = 0;
        while(l < r){
            if(maxL <= maxR){
                l++;
                int area = maxL - height[l];
                if(area > 0){
                    res+=area;
                }
                maxL = max(height[l], maxL);
            }
            else{
                r--;
                int area = maxR - height[r];
                if(area > 0){
                    res+=area;
                }
                maxR = max(height[r], maxR);
            }
        }
        return res;
    }
};
