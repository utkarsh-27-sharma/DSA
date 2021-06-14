class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ans;
        int prev = 0, cur = 0;
        for (int i = 0; i < s.size(); i++)
        {
            prev = i;
            while (i < s.size() - 1 && s[i] == s[i + 1])
                i++;

            cur = i;
            int len = (cur - prev) + 1;
            if (len >= 3)
            {
                vector<int> v;
                v.push_back(prev);
                v.push_back(cur);
                ans.push_back(v);
            }
        }
        return ans;
    }
};
