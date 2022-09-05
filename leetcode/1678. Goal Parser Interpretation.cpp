class Solution {
public:
    string interpret(string command) {
        int n=command.size();
        string s;
        for(int i =0;i<n;i++){
            if(command[i]=='G'){
                s=s+'G';
            }
            else if(command[i]=='(' && command[i+1]==')'){
                s=s+'o';
                i=i+1;
            }
            else if(command[i]=='(' && command[i+1]=='a'){
                s=s+"al";
                i=i+3;
            }
        }
        return s;
    }
};
