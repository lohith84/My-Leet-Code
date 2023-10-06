class Solution {
public:
    int integerBreak(int n) {
        int result = 1;
        if(n == 2) return 1;
        if(n == 3) return 2;

        while(n > 1){
            if(n - 3 > 1 || n - 3 == 0) {
                result *= 3;
                n -= 3;
                }
            else if (n - 2 >= 0) {
                result*= 2;
                n -= 2;
            }
        }
        return result;
    }
};