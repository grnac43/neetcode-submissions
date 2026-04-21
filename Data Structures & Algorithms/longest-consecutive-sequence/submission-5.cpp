class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numbers(nums.begin(), nums.end());
        int ret = 0;
        for(int num : numbers){
            int len = 0;
            if(numbers.find(num-1) == numbers.end()){
                len = 1;
                while(numbers.find(num+len) != numbers.end()){
                    len++;
                }
                ret = max(ret, len);
            }
        }

        return ret;
    }
};
