class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        if(mp.size()==nums.size())
        {
            return false;
        }
        return true;
    }
};