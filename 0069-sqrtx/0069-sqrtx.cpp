class Solution {
public:
    int mySqrt(int x) {
        int s = 0 , e = x , ans , mid;
        if(x<2) return x;
        while(s<=e){
            mid = s + (e-s)/2;
            if(mid == x/mid){
                return mid;
            }
            else if(mid > x/mid){
                e = mid-1;
            }
            else{
                ans = mid;
                s = mid + 1;
            }

        }
        return ans;
        
    }
};