
void solve(vector<int> &A,int start,int end,vector<int>& temp,set<vector<int> >& ans,int sum)
{
    if(sum<0) return;
    if(sum==0){
        ans.insert(temp);
        return;
    }
    if(start>end) return;
    solve(A,start+1,end,temp,ans,sum);
    temp.push_back(A[start]);
    solve(A,start,end,temp,ans,sum-A[start]);
    temp.pop_back();
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    int n=A.size(),i;
    vector<vector<int> > ret;
    if(n==0) return ret;
    set<vector<int> > ans;
    vector<int> temp;
    solve(A,0,n-1,temp,ans,B);
    for(auto it=ans.begin() ; it!=ans.end() ; it++)
        ret.push_back(*it);
    return ret;
}
// https://www.interviewbit.com/problems/combination-sum/
