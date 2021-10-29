// Runtime : 8ms
// Memory : 7.3MB

class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==0)return true;
        int left=0,right=s.size()-1;
            while(left<=right){
                while(left<=right){
                    if('a'<=s[left]&&s[left]<='z'){
                        break;
                    }
                    else if('A'<=s[left]&&s[left]<='Z'){
                        s[left]=s[left]+32;
                        break;
                    }
                    else if(isdigit(s[left])){
                        break;
                    }
                    else{
                        left++;
                    }
                }
                while(left<=right){
                    if('a'<=s[right]&&s[right]<='z'){
                        break;
                    }
                    else if('A'<=s[right]&&s[right]<='Z'){
                        s[right]=s[right]+32;
                        break;
                    }
                    else if(isdigit(s[right])){
                        break;
                    }
                    else{
                        right--;
                    }
                }
                if(left<=right){
                    if(s[left]!=s[right])return false;
                    left++;
                    right--;
                }
            }
            
        return true;
        
    }
};


// // Runtime : 4ms
// Memory : 7.2MB
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size(), l = 0, r = n - 1;
        while (l < r) {
            while (l < r && !isalnum(s[l])) {
                l++;
            }
            while (l < r && !isalnum(s[r])) {
                r--;
            }
            if (tolower(s[l++]) != tolower(s[r--])) {
                return false;
            }
        }
        return true;
    }
};
