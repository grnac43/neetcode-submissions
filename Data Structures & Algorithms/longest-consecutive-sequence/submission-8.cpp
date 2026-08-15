class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        unordered_set<int> numsSet(nums.begin(), nums.end());

        int max = 0;
        for(auto& num : numsSet){
            if(numsSet.contains(num-1))
                continue;
            int curr = 1;
            int temp = num;
            while(numsSet.contains(temp+1)){
                curr++;
                temp += 1;
            }
            if(curr > max)
                max = curr;
        }
        return max;
    }
};
