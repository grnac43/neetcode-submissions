class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> pairs;

        for(int i = 0; i < nums.size(); i++){
            if(pairs.contains(target-nums[i]))
                return {pairs[target-nums[i]], i};
            pairs[nums[i]] = i;
        }

        return {};
    }
};
