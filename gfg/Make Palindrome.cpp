class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        // Code here
        unordered_set<string> s;
        for(int i=0;i<n;++i){
            string str = arr[i];
            reverse(str.begin(),str.end());
            if(s.find(str)!=s.end()){
                s.erase(str);
            }else{
                s.insert(arr[i]);
            }
        }
        if(s.size()==0)
            return true;
        if(s.size()==1){
            auto it = s.begin();
            string str = *it;
            reverse(str.begin(),str.end());
            return str==(*it);
        }
        return false;
    }
};
