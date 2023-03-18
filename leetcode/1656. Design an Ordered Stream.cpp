class OrderedStream {
public:
    string * ordStream;
    int i=0;
    OrderedStream(int n) {
        ordStream= new string[n];
    }
    
    vector<string> insert(int idKey, string value) {
        vector<string>ans;
        ordStream[idKey-1]=value;

        while(ordStream[i]!="\0"){
            ans.push_back(ordStream[i]);
            i++;
        }
        return ans;
    }
    
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
