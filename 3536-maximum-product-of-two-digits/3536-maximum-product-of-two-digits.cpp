class Solution {
public:
    int maxProduct(int n) {
        int fMax = -1;
        int secMax = -1;
        while(n>0){
            int digit = n % 10;
            if(digit > fMax){
                secMax = fMax; 
                fMax = digit;
            }
            else if(digit  > secMax){
                secMax = digit;
            }
            n = n / 10;
        }
        return fMax * secMax;
        
    }
};