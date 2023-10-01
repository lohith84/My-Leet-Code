class Solution {
public:
    string reverseWords(string s) {
           string ans;
           string str;
           for(int i=0; i<s.size(); i++){
                if(s[i] != ' '){
                    str += s[i];
                }
                else{
                    reverse(str.begin(), str.end());
                    ans += str;
                    str = "";
                    ans += ' ';
                }
           }
           reverse(str.begin(), str.end());
           ans += str;
           return ans;
    }
};