class Solution {
    private:
    bool dfs(vector<int>&color,int i,vector<vector<int>>&adj){
        stack<int>st;
        st.push(i);
        color[i]=1;
        while(!st.empty()){
            int node=st.top();
            st.pop();
            for(int j=0;j<adj[node].size();j++){
                int nr=adj[node][j];
                if(color[nr]==0){
                    if(color[node]==1){
                        color[nr]=2;
                    }
                    else{
                        // color[node]==2;
                        color[nr]=1;
                    }
                    st.push(nr);
                }
                else {
                    if(color[node]==color[nr])return false;
                }
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<vector<int>>adj(graph.size());
        for(int i=0;i<graph.size();i++){
            for(int j=0;j<graph[i].size();j++){

            adj[i].push_back(graph[i][j]);
            }
        }
        int n=graph.size();
        vector<int>color(n,0);

        for(int i=0;i<n;i++){
            if(color[i]==0){
                if(!dfs(color,i,adj)) return false;
            }
        }
        return true;
    }
};