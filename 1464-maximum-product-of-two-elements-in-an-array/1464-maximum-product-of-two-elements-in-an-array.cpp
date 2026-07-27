class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n  = nums.size();
        int ans = 0;
        int currMax = nums[0];
        for(int i = 1 ; i < n ; i++){
            ans = max(ans , (currMax -1) * (nums[i]-1));
            currMax = max(currMax , nums[i]); 
        }
        return ans;
        
    }
};