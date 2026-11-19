class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
            int possibility1= nums[n-1]*nums[n-2]*nums[n-3];
            int possibility2=nums[0]*nums[1]*nums[n-1]; //for checking product of 2 -ve numbers
            return max(possibility1,possibility2);         
    }
};