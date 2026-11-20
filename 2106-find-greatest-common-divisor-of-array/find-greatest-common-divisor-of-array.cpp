class Solution {
public:
    int findGCD(vector<int>& nums) {

        int minimum = INT_MAX;
        int maximum = INT_MIN;
        for (int n: nums) {
            minimum = min(minimum, n);
            maximum = max(maximum, n);
        }
        int ans = 1;
        for (int i = 1; i <= minimum; i++) {
            if (minimum % i == 0 && maximum % i == 0) {
                ans = i;
            }
        }
        return ans;
    }
};