class Solution {
public:
int connectTwoGroups(vector<vector<int>>& cost) {

    int m=cost.size(), n=cost[0].size();

    vector <int> rc(n, numeric_limits<int>::max());
    for (int i=0; i<m; ++i)
        for (int j=0; j<n; ++j)
            rc[j] = min(rc[j], cost[i][j]);

    int d[13][1<<12]{};
    for (int i=m; i>=0; --i) {
        for (int j=0; j<1<<12; ++j) {
            if (i==m)
                for (int k=0; k<n; ++k)
                    d[i][j] += !(j&1<<k) ? rc[k] : 0;
            else {
                d[i][j] = numeric_limits<int>::max();
                for (int k=0; k<n; ++k)
                    d[i][j] = min(d[i][j], d[i+1][j|1<<k] + cost[i][k]);
            }
        }
    }
    return d[0][0];
}
};

// https://leetcode.com/problems/minimum-cost-to-connect-two-groups-of-points/
