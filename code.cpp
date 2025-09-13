class Solution {
public:
int count = 0;
unordered_map<int,vector<pair<int,int>>>adj;
unordered_map<int,bool> visited;
    void dfs(int node){
        visited[node] = true;
        for(auto &val : adj[node]){
            int test1 = val.first;
            int test2 = val.second;
            if(!visited[test1]){
                count += test2;
                dfs(test1);
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        for(auto &val : connections){
            adj[val[0]].push_back({val[1],1});
            adj[val[1]].push_back({val[0],0});
        }
        dfs(0);
        return count;
    }
};
