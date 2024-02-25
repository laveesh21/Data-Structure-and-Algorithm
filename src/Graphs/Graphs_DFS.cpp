#include <iostream>
#include <vector>

class Graph
{
private:
    std::vector<std::vector<int>> adj;

    void dfs(int node, std::vector<int> &vis, std::vector<int> &ls)
    {
        vis[node] = 1;
        ls.push_back(node);
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                dfs(it, vis, ls);
            }
        }
    }

public:
    Graph()
    {
        int n, m;
        std::cout << "Enter the number of nodes and edges: ";
        std::cin >> n >> m;
        adj.resize(n + 1);
        std::cout << "Enter the edges (format: u v):" << std::endl;
        for (int i = 1; i <= m; i++)
        {
            int u, v;
            std::cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }

    std::vector<int> dfsOfGraph(int start)
    {
        std::vector<int> vis(adj.size());
        std::vector<int> ls;
        dfs(start, vis, ls);
        return ls;
    }

    void printGraph()
    {
        for (int i = 1; i < adj.size(); ++i)
        {
            std::cout << "Adjacency list of node " << i << ": ";
            for (int j = 0; j < adj[i].size(); ++j)
            {
                std::cout << adj[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    void printList(const std::vector<int> &ls)
    {
        std::cout << "DFS traversal list: ";
        for (int i = 0; i < ls.size(); ++i)
        {
            std::cout << ls[i] << " | ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    Graph obj;
    std::vector<int> ls = obj.dfsOfGraph(1); // Starting DFS from node 3
    obj.printGraph();
    obj.printList(ls);

    return 0;
}


// First initialise a VISTED_LIST and DFS_LIST
// Call a recursive DFS funtion by passing Staring_Node
// Upate VISITED_LIST = 1  &&  push that node in DFS_LIST
// For every neighbout of that node run for each loop
// If not visited , Enter the recursion funtion inside that unvisited node for deep interation

// NOTE : PASS BY REFERENCE shall be used 