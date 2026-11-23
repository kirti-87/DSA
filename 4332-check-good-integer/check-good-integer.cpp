class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum=0;
         int squareSum=0;
        while(n>0){
            int lastDigit=n%10;
            digitSum+=lastDigit;
            squareSum+=lastDigit*lastDigit;
             n=n/10;
        }
        if(squareSum-digitSum>=50){
            return true;
        }
        return false;
    }
};