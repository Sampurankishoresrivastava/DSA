class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int lc=0;
        int rc=0;
        stack<char> st;

        for(char ch: s){
            if(ch=='('){
                lc++;
            }
            else if(ch==')'){
                rc++;
            }
            if(rc>lc){
                rc--;
                continue;
            }
            else{
                st.push(ch);
            }
        }

        string res="";
        
        while(!st.empty()){
            char curr= st.top();
            st.pop();
            if(lc>rc && curr=='('){
                lc--;
            }
            else{
                res +=curr;
            }
        }

        reverse(res.begin(),res.end());

        return res;
    }
};
