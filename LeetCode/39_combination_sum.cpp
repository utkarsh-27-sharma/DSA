class Solution {
public:
    vector<int> vec;
    vector<vector<int>> r;
    void check(int c,int t,vector<int> vec, vector<int> cand, int l){
        if(c==t) return r.push_back(vec);
        for(int i=l; i<cand.size(); i++){
            if(cand[i]+c<=t){
                int tmp = cand[i];
                vector<int> v = vec;
                v.push_back(tmp);
                if(tmp+c<t) check(tmp+c, t, v, cand, i);
                else if(tmp+c==t) r.push_back(v);
            } else return;
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      sort(candidates.begin(), candidates.end());
      for(int i=0; i<candidates.size(); i++){
          vec.push_back(candidates[i]);
          check(candidates[i],target,vec,candidates, i);
          vec.clear();
      }
      return r;
    }
};
