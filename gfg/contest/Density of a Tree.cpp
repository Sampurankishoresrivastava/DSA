class Solution{
    public:
    int dfs(int node, vector<int>& par, vector<vector<int>>& adj) {  
    int size = 1;  
    for (int child : adj[node]) {  
        if (child != par[node]) {  
            size += dfs(child, par, adj);  
        }  
    }  
    return size;  
}  
  
int getHeight(int node, vector<int>& par, vector<vector<int>>& adj) {  
    int height = 0;  
    for (int child : adj[node]) {  
        if (child != par[node]) {  
            height = max(height, getHeight(child, par, adj));  
        }  
    }  
    return height + 1;  
}  
    long double density(int N, vector<int> par){ 
        // code here 
         vector<vector<int>> adj(N);  
    for (int i = 1; i < N; i++) {  
        adj[par[i]].push_back(i);  
        adj[i].push_back(par[i]);  
    }  
  
    int size = dfs(0, par, adj);  
    int height = getHeight(0, par, adj);  
  
    double density = (double)size / height;  
    return density;  
    } 
};
