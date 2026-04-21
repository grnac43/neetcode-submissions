class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size()), post(nums.size());
        int left = 1;
        for(int i = 0; i < nums.size(); i++){
            int temp = nums[i];
            pre[i] = left;
            left *= temp;
        }
        int right = 1;
        for(int i = nums.size() - 1; i >= 0; i--){
            int temp = nums[i];
            post[i] = right;
            right *= temp;
        }

        for(int i = 0; i < nums.size(); i++){
            pre[i] *= post[i];
        }

        return pre;
    }
};
