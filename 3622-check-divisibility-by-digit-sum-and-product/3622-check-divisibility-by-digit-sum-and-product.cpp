class Solution {
public:
    bool checkDivisibility(int n) {
        
        int sum = 0 , prod = 1;
        for(int i = n; i > 0 ; i/=10){
            int remain = i % 10;
            sum+=remain;
            prod*=remain;

        }
        return n % (sum+prod)==0;
    }
};