class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        int cnt, maxlen=0;
        int curr;

        for(auto it:st)
        {  
           if(st.find(it-1)==st.end())
           {
            curr=it;
           int cnt=1;
           while(st.find(curr+1)!=st.end())
           {
            cnt++;
            curr=curr+1;
           }
            maxlen=max(cnt,maxlen);
        }
        }
        return maxlen;
        } 
};
