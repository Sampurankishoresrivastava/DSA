class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        for(int i = 0; i < words.size(); i++){
            string str = words[i];
            for(int j = 0; j < str.length(); j++){
                if(allowed.find(str[j]) == -1){
                    count++;
                    break;
                }       
            }
        }
        return words.size()-count;
    }
};
