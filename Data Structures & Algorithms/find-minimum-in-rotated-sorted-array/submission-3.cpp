class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0, r = nums.size()-1;

        if(nums[l]<nums[r])
            return nums[l];
        int ret = nums[0];
        while(l<=r){
            if (nums[l] < nums[r]){
                return min(ret, nums[l]);
            }
            int mid = (l+r)/2;
            ret = min(ret, nums[mid]);
            if(nums[mid] >= nums[l]){
                l = mid+1;
            }
            else
                r = mid-1;
        }

        return ret;
    }
};
