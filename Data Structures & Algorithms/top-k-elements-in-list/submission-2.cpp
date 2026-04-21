class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ret {};
        unordered_map<int, int> count_map;
        vector<vector<int>> freq(nums.size()+1);

        for(auto& num: nums){
            count_map[num]+=1;
        }

        for(auto entry: count_map){
            freq[entry.second].push_back(entry.first);
        }

        for(int i = freq.size()-1; i >= 0; i--){
            for(auto n: freq[i]){
                ret.push_back(n);
                if(ret.size() == k)
                    return ret;
            }
        }

        return ret;
    }
};
