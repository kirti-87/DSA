class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        // Step 1: Sort the array
        sort(nums.begin(), nums.end());
        // Step 2: Set the initial closest sum
        int closestSum = nums[0] + nums[1] + nums[2];
        // Step 3: Fix one element
        for (int i = 0; i < n - 2; i++) {
            // Step 4: Initialize two pointers
            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                // Sum of the current three elements
                int sum = nums[i] + nums[left] + nums[right];
                // Check whether the current sum is closer to the target
                if (abs(sum - target) <
                    abs(closestSum - target)) {
                    closestSum = sum;
                }
                // Found the exact target
                if (sum == target) {
                    return sum;
                }
                // Sum is too small, so increase it
                else if (sum < target) {
                    left++;
                }
                // Sum is too large, so decrease it
                else {
                    right--;
                }
            }
        }
        return closestSum;
    }
};