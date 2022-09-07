class Solution {
public:
    string sortSentence(string s) {
        string word;
        vector<string> v(10);
        for(int i=0;i<s.size();i++){
            if( isdigit(s[i]) ){
                v[s[i]-48]=word+" ";
                word="";
                i++;
            }
            else{
                word=word+s[i];
            }
        }
        string ans;
		for(int i=0;i<10;i++){
			ans =ans+ v[i];
		}
		ans.pop_back();

		return ans;
    }
};
