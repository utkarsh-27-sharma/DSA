// runtime 4ms
// memory 9.2MB
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty() || strs.size() == 0) {
                return "";
        }
            
            for (int i = 0; i<strs[0].length(); i++) {
                    char c = strs[0][i];
                    for (int j = 1; j< strs.size(); j++) {
                            if (i == strs[j].length() || strs[j][i] != c) {
                                    return strs[0].substr(0,i);
                            }
                    }
            }
        return strs[0];
    }
};

// runtime 0ms
// memory 9.1MB
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int a=0,b;
	    string ans,m;
        if(strs.size()==0){return "";}
	    for(int i=0;i<strs[0].size();i++){
		for(int j=1;j<strs.size();j++){
			if(strs[j][i]==strs[0][i]){a++;
			}
		}
		if(a==strs.size()-1){ans.push_back(strs[0][i]);a=0;
		}
		else break;
	    }
	 return ans ;
     };
};
