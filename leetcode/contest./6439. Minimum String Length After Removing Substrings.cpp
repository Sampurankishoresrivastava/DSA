class Solution {
public:
    int minLength(string s) {
        int length=s.length();
        int i=0;
        while(i<length-1) {
            if ((s[i]=='A' && s[i+1]=='B') || (s[i]=='C' && s[i+1]=='D')) {
                s.erase(i, 2);
                length -= 2;
                i=max(0,i-1);
            }
            else{
                i++;
            }
        }
        return length;
    }
};
