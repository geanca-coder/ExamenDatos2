#include "KruskalGraph.h"

int main()
{
    auto*graph = new KruskalGraph();
    int cost[][V] = {{INT_MAX,10,12,INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX},
                     {10,INT_MAX,9,8,INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX},
                     {12,9,INT_MAX,INT_MAX,3,1, INT_MAX,INT_MAX,INT_MAX},
                     {INT_MAX,8,INT_MAX,INT_MAX,7,11,8,5,INT_MAX},
                     {INT_MAX, INT_MAX,3,7, INT_MAX,3, INT_MAX,INT_MAX,INT_MAX},
                     {INT_MAX,INT_MAX, 1, 11,3,INT_MAX,INT_MAX,6, INT_MAX},
                     {INT_MAX, INT_MAX, INT_MAX, 8, INT_MAX,INT_MAX,INT_MAX,9,2},
                     {INT_MAX,INT_MAX,INT_MAX,5,INT_MAX,6,9,INT_MAX,11},
                     {INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX,2,11,INT_MAX}};

    cout<<graph->kruskalMST(cost);
    delete graph;
    return 0;
}