class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for(auto& num : nums){
            freq[num]++;
        }

        vector<vector<int>> buckets(nums.size()+1);
        for(auto& [num, count] : freq){
            buckets[count].push_back(num);
        }
        vector<int> ret{};
        for(int i = nums.size(); i > 0; i--){
            for(auto num : buckets[i]){
                ret.push_back(num);

                if(ret.size() == k)
                    return ret;
            }
        }

        return ret;
    }
};
