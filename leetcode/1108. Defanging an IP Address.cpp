class Solution {
public:
    string defangIPaddr(string address) {
        string a="";
        for(auto x: address){
            if(x=='.') a =a+"[.]";
            else a=a+x;
        }
        return a;
    }
};
