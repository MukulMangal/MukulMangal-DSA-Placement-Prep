class Solution {
public:
    bool dfs(int node , vector<vector<int>> &adj , vector<bool> &visited , vector<bool> &pathVisited){
        visited[node] =1;
        pathVisited[node] = 1;
           for(int neighbour : adj[node]){
            if(!visited[neighbour]){
                if(dfs(neighbour, adj, visited, pathVisited))
                    return true;
            }
            else if(pathVisited[neighbour]){
                return true;
            }
        }

        pathVisited[node] = false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>> adj(numCourses);

        for(auto &p : prerequisites)
        {
            int course = p[0];
            int prereq = p[1];

            adj[prereq].push_back(course);
        }

        vector<bool> visited(numCourses, false);
        vector<bool> pathVisited(numCourses, false);

        for(int i = 0; i < numCourses; i++)
        {
            if(!visited[i])
            {
                if(dfs(i, adj, visited, pathVisited))
                    return false;
            }
        }

        return true;
        
    }
};