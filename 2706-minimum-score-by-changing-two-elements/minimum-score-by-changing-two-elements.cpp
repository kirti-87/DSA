// class Solution {
// public:
//     int minimizeSum(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int n=nums.size();
//         // int low=min(nums[0],nums[1]);
//         // int high=nums[n-1]-nums[n-2];
//         // int score=low+high;
//         // return score;
//     }
// };

class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return min({nums[n-2] - nums[1], nums[n-1] - nums[2], nums[n-3] - nums[0]});
    }
};