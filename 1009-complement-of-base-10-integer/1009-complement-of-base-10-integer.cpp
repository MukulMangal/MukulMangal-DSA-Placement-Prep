class Solution {
public:
    int bitwiseComplement(int n) {
        long long ans = 0;
        int mul = 1;
        int rem;
        if(n==0) return 1;
        while(n){
            rem = n % 2;
            rem = 1-rem;
            ans+=rem*mul;
            n/=2;
            mul*=2;
        }
        return ans;
        
    }
};