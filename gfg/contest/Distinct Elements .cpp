class Solution{
    public:
    int distinctElements(int N, int K, vector<int> A){
        // code here
        unordered_map<int, int> d;
        sort(A.begin(), A.end());
        int k=K;
        for (int i : A) {
            if (d.find(i - k) == d.end()) {
                d[i - k] = 1;
            } else if (d.find(i - k) != d.end()) {
                if (d.find(i) == d.end()) {
                    d[i] = 1;
                } else if (d.find(i + k) == d.end()) {
                    d[i + k] = 1;
                }
            }
        }
        
        return d.size();
    }
};
