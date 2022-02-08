//
// Created by geanc on 8 feb. 2022.
//

#include "KruskalGraph.h"
int KruskalGraph::find(int i)
{
    while (parent[i] != i)
        i = parent[i];
    return i;
}

void KruskalGraph::union1(int i, int j)
{
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}

string KruskalGraph::kruskalMST(int cost[][V])
{
    stringstream ss;
    int mincost = 0;
    for (int i = 0; i < V; i++)
        parent[i] = i;

    int edge_count = 0;
    while (edge_count < V - 1) {
        int min = INT_MAX, a = -1, b = -1;
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (find(i) != find(j) && cost[i][j] < min) {
                    min = cost[i][j];
                    a = i;
                    b = j;
                }
            }
        }
        string a1, b1, nodes="ABCDEFGHI";
        union1(a, b);
        a1= nodes.at(a);
        b1 = nodes.at(b);

        ss<<"Edge "<<edge_count++<<":("<<a1<<","<<b1<<")"<<" cost: "<<min<<"\n";
        mincost += min;
    }
    ss<<"Minimun cost="<<mincost<<"\n";
    return ss.str();
}