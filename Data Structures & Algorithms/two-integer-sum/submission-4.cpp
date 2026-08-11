class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> pairs;

        for(int i = 0; i < nums.size(); i++){
            if(pairs.find(target-nums[i]) != pairs.end())
                return {pairs[target-nums[i]], i};
            pairs.insert({nums[i], i});
        }
    }
};
