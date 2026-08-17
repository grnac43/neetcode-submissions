class Solution {

    int findPivot(vector<int>& nums){
        int l = 0;
        int r = nums.size() - 1;

        while (l < r) {
            int mid = (r + l) / 2;

            if (nums[mid] > nums[r])
                l = mid + 1;
            else
                r = mid;
        }

        return l;
    }

    int binarySearch(vector<int>& nums, int left, int right, int target){

        while(left<=right){
            int mid = (left+right)/2;

            if(nums[mid] > target)
                right = mid-1;
            else if(nums[mid] < target)
                left = mid+1;
            else return mid;
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int pivot = findPivot(nums);

        int ret = binarySearch(nums, 0, pivot-1, target);
    
        if(ret!=-1)
            return ret;
        
        ret = binarySearch(nums, pivot, nums.size()-1, target);

        return ret;
    }
};
