#include <iostream>
#include <vector>

class Graph
{
private:
    void dfs(int node, std::vector<int> &vis, std::vector<int> &ls, std::vector<std::vector<int>> &adj)
    {
        vis[node] = 1;
        ls.push_back(node);
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                dfs(it, vis, ls, adj);
            }
        }
    }

public:
    std::vector<std::vector<int>> initGraph(int n, int m)
    {

        std::vector<std::vector<int>> adj(n + 1);
        std::cout << "Enter the edges (format: u v):" << std::endl;

        for (int i = 1; i <= m; i++)
        {
            int u, v;

            std::cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        return adj;
    }

    std::vector<int> dfsOfGraph(int V, std::vector<std::vector<int>> &adj, int start)
    {
        std::vector<int> vis(V);
        std::vector<int> ls;
        dfs(start, vis, ls, adj);
        return ls;
    }

    void printGraph(std::vector<std::vector<int>> &adj)
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

    void printList(std::vector<int> &ls)
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
    int n, m;
    std::cout << "Enter the number of nodes and edges: ";
    std::cin >> n >> m;
    Graph obj;
    std::vector<std::vector<int>> adj = obj.initGraph(n, m);
    std::vector<int> ls = obj.dfsOfGraph(n, adj, 3);
    obj.printGraph(adj);
    obj.printList(ls);

    return 0;
}