class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int Totalsum=n*(n+1)/2;
        int sumNums=0;
        for(int i=0;i<=nums.size()-1;i++){
            sumNums+=nums[i];
        }
        return Totalsum-sumNums; 
    }
};