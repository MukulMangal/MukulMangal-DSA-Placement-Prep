class Solution {
public:
    int findComplement(int num) {
        long long ans = 0 , rem , mul =1;
        if(num==0) return 1;
        while(num){
            rem = num%2;
            rem = rem^1;
            num/=2;
            ans = ans+rem*mul;
            mul*=2;
        }
        return ans;
        
    }
};