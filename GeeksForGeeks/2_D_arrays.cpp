class Solution{
  public:
    vector<vector<int>> final_matrix(vector<vector<int>> &a, int n)
    {
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]==0)
                    q.push(make_pair(i,j));
            }
        }
        while(!q.empty())
        {   
            pair<int,int>p=q.front();
            q.pop();
            for(int i=0;i<n;i++)
                a[p.first][i]=0;
            for(int i=0;i<n;i++)
                a[i][p.second]=0;
        }
        vector<vector<int>> ans(a.size());
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                ans[i].push_back(a[i][j]);
        }
        return ans;
    }
};;
