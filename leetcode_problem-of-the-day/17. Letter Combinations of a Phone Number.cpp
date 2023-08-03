class Solution {
private:
    map<int, string> digi;
    vector<string> ans;
public:
    vector<string> letterCombinations(string digits) {
        // map<int,string> digi;
        // vector<string>ans;
        digi[2]="abc";
        digi[3]="def";
        digi[4]="ghi";
        digi[5]="jkl";
        digi[6]="mno";
        digi[7]="pqrs";
        digi[8]="tuv";
        digi[9]="wxyz";

        if(digits==""){
            return ans;
        }

        string currString="";
        makeCombinations(digits, currString, 0);
        
        return ans;
    }

    void makeCombinations(string digits, string &currString, int i){
        if(i==digits.size()){
            ans.push_back(currString);
            return;
        }
        
        for(auto letter : digi[digits[i]-'0']){
            currString.push_back(letter);
            makeCombinations(digits, currString, i+1);
            currString.pop_back();
        }
        return; 
    }
};
