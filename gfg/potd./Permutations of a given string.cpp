class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		    set<string> ans;
		    vector<string>vc;
		    sort(S.begin(),S.end());
            do{
                ans.insert(S);
            }while (next_permutation(S.begin(), S.end()));
            
            for (auto& it : ans) {
            vc.push_back(it);
		}
	    return vc;
    }
};
