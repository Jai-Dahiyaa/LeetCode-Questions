class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int index = 0;

        while (left <= right) {
            int mid = (left + right) / 2;

            if (nums[mid] == target) {

                return mid;
            }

            else if (nums[mid] < target) {
                left = mid + 1;
            }

            else {
                right = mid - 1;
            }
        }

        // while (left <= right) {
        //     int mid = (left + right) / 2;

        //     if (nums[mid] == target) {
        //         return index = mid;
        //     }

        //     else if(nums[mid] > target) {
        //         return index = mid;
        //     } 

        //     else if (nums[mid] < target) {
        //         left = mid + 1;
        //     }

        //     else {
        //         right = mid - 1;
        //     }

        //     // return index = (nums.size() - 1) + 1;
        // }

        // if(index == 0) {
        //     while (left <= right) {
        //    int mid = (left + right) / 2;

        //    if(nums[mid] != target) {
        //     index = nums.size() - 1;
        //     return index + 1;
        //    }
        // }
        // }    

        // if (index == 0) {
        //     for(int i = 0; i < n-1; i++) {
        //        if (target != nums[i])  {
        //             index = nums.size() - 1;
        //             return index + 1;
        //         }
        //     }
        // }

        return left;
    }
};