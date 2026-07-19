class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int , int> mp;
        for(int x : arr){
            mp[x]++;
        }
        unordered_set<int>st;
        for(auto p : mp){
            if(st.count(p.second)){
                return false;
            }
            st.insert(p.second);
        }
        return true;
    }
};