//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    set<char> st;
	   // for(int i=0;i<str.size();i++){
	   //     st.insert(str[i]);
	   // }
	    
	    string ans;
	   // for(int i=0;i<str.size();i++){
	   //     if(st.find(str[i])==st.end()){
	   //         ans.push_back(str[i]);
	   //     }
	   // }
	    for (char c : str) {
            // Check if the character has been encountered before
            if (st.find(c) == st.end()) {
                // If not, add it to the set and to the answer string
                st.insert(c);
                ans.push_back(c);
            }
        }
	    return ans;
	}
};
