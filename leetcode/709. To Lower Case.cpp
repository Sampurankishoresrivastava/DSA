class Solution {
public:
    string toLowerCase(string s) {
        // string ans=transform(s.begin(), s.end(), s.begin(), ::tolower);
        for (int i = 0; i < s.size(); i++){
  		    s[i] = tolower(s[i]);
  	    }
        return s;
    }
};
