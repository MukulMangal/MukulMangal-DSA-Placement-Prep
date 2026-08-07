class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int maxWater = 0;
        while(i < j){
            int ht =min(height[i] , height[j]);
            int wt = j - i;
            int ans = ht * wt;
            maxWater = max(maxWater , ans);

            height[i] < height[j] ? i++ : j--;
        }
        return maxWater;
        
    }
};