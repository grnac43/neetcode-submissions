class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> mapa;

        for(int i = 0; i < nums.size(); i++){
            if(mapa.find(target - nums[i]) != mapa.end()){
                return {mapa[target - nums[i]], i};
            }
            mapa.insert({nums[i], i});
        }
    }
};
