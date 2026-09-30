class Solution {
public:
    bool isPalindrome(int x) {

         if(x<0) return false;

        long long temp = x;
        long long  rev =0;

        while(temp) {
            int digit = temp%10;
            rev = rev*10 + digit;
            temp /= 10;
        }
        return x == rev;
        
    }
};