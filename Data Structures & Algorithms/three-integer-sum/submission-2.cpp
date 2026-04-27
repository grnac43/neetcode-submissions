class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ret{};

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0) break;
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int r = i + 1;
            int l = nums.size()-1;
            int target = -nums[i];
            while(r < l){
                if(nums[l] + nums[r] < target){
                    r++;
                }
                else if(nums[l] + nums[r] > target){
                    l--;
                }
                else {
                    ret.push_back({nums[i], nums[r], nums[l]});
                    r++;
                    l--;
                    while(r<l && nums[r] == nums[r-1])
                        r++;
                }
            } 
        }

        return ret;
    }
};
