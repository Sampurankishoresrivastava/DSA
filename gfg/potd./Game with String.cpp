//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        unordered_map<char,int> mp;
        priority_queue<int> p;
        
        for(char ch: s){
            mp[ch]++;
        }
        
        for(auto &it: mp){
            p.push(it.second);
        }
        
        while(k>0){
            int count = p.top();
            p.pop();
            count--;
            p.push(count);
            k--; 
        }
        
        int ans=0;
        
        while(!p.empty()){
            int temp=p.top();
            p.pop();
            ans+=temp*temp;
        }
        
        return ans;
    }
};
