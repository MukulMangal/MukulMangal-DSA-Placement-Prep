class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum  = nums[0];
        int i = 1;
        while(i<nums.size() && nums[i] == nums[i-1] + 1){
            sum +=nums[i];
            i++;
        }
        unordered_set<int> seen(nums.begin() , nums.end());

        int candidate = sum;
        while(seen.count(candidate)){
            candidate++;
        }
        return candidate;
        
    }
};