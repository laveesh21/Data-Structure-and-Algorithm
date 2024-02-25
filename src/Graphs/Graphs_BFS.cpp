#include <iostream>
#include <vector>
#include <queue>

class Graph
{

public:
    std::vector<int> bfsOfGraph(int n, std::vector<std::vector<int>> adj)
    {
        std::vector<int> bfs;
        std::vector<int> vis(n);
        vis[0] = 1;

        std::queue<int> q;
        q.push(0);

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for(auto it: adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }

        return bfs;

    }
};

int main()
{



    return 0;
}


// Fit we initialized a VISITED_LIST,   QUEUE,   BFS_LIST
// We initialised VISITED_LIST[0] by 1 and also pushed it inside QUEUE
// While queue is not epty we will run loop
// We will take front element of QUEUE, pop() it , and push it inside BFS_LIST because we visited it
// For each NODE we will iterate inside it, to see who are all neighbour
// Then we will visit every neighbour and change VISITED_LIST nodes to 1, while alsp pushing them in QUEUE after visiting.
