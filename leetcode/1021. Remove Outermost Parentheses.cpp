class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int o = 0;
        for (char c : s) {
            if (c == '(' && o++ > 0){
                 ans += c;
            }
            if (c == ')' && o-- > 1){
                 ans += c;
            }
        }
        return ans;
    }
};
