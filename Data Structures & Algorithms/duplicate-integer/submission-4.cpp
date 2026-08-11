class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> visited;

        visited.reserve(nums.size());
        for(int & num : nums){
            if(visited.count(num))
                return true;
            visited.insert(num);
        }
        return false;
    }
};