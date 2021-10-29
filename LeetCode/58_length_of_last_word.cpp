// Runtime 4ms
// Memory 6.5MB
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int c = -1;
        
        while(n>=0){
            if(s[n] != ' ') c++;
            else if(c > 0) return c;
            n--;
        }
        return c;
    }
};
