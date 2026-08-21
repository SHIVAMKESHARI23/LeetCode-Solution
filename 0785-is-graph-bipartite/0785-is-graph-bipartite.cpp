class Solution {
private:
    bool bfs(int start, vector<int>& color, vector<vector<int>>& graph) {
        queue<int> qu;

        qu.push(start);
        color[start] = 1;

        while (!qu.empty()) {
            int node = qu.front();
            qu.pop();

            for (int neighbour : graph[node]) {

                if (color[neighbour] == 0) {

                    if (color[node] == 1) {
                        color[neighbour] = 2;
                    }
                    else {
                        color[neighbour] = 1;
                    }

                    qu.push(neighbour);
                }
                else {
                    if (color[node] == color[neighbour]) {
                        return false;
                    }
                }
            }
        }

        return true;
    }

public:
    bool isBipartite(vector<vector<int>>& graph) {

        int n = graph.size();

        vector<int> color(n, 0);

        for (int i = 0; i < n; i++) {

            if (color[i] == 0) {

                if (!bfs(i, color, graph)) {
                    return false;
                }
            }
        }

        return true;
    }
};