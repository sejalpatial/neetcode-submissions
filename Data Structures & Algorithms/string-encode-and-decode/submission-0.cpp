class Solution {
public:
 map<int,string>mp;
    string encode(vector<string>& strs) {
       
        string str;
        for(int i=0;i<strs.size();i++)
        {
            mp[i]=strs[i];
        }
        for(auto it : mp)
        {
            str+=it.first;
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        return ans;

    }
};
