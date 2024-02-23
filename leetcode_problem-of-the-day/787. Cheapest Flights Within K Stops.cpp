class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        // lets create the graph first
        vector<pair<int,int>> adj[n];

        for(auto it: flights){
            // it[0] ke corresponding next node and uski cost store kiya
            adj[it[0]].push_back({it[1], it[2]});
        }

        queue<pair<int, pair<int,int>>> q;
        // {stops,{node,dist}}
        q.push({0,{src,0}});

        vector<int> dist(n,1e9);
        dist[src]=0;

        while(!q.empty()){
            auto it=q.front();
            q.pop();

            int stops=it.first;
            int node=it.second.first;
            int cost= it.second.second;

            if(stops>k){
                continue;
            }

            for(auto i: adj[node]){
                int adnode=i.first;
                int edgewt=i.second;

                if(cost+ edgewt< dist[adnode] && stops<=k){
                    dist[adnode]= cost+edgewt;
                    q.push({stops+1, {adnode, cost+edgewt}});
                }
            }
        }

        if(dist[dst]==1e9){
            return -1;
        }

        return dist[dst];
    }
};
