// User function template for C++
class Solution{
    public:
    bool match(string wild, string pattern)
    {
        // code here
        int n = wild.length();
        int m = pattern.length();
        int i = 0, j = 0;
        for (;j<m;j++){
            if (wild[i] == '?'){
                i++;
                continue;
            }
            else if (wild[i] == '*'){
                i++;
                j++;
                while(i<n && (wild[i] == '*' || wild[i] == '?')){
                    i++;
                    j++;
                }
                while(j<m && wild[i]!=pattern[j])
                    j++;
                i++;
                continue;
            }
            else if (wild[i] != pattern[j]){
                //cout << i << " " << j << endl;
                return false;
            }
            i++;
        }
        return true;
    }
};
