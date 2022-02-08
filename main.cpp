#include "KruskalGraph.h"
#include "FileManager.h"
int main()
{
    auto*graphK = new KruskalGraph();
    cout<<graphK->kruskalMST();
    delete graphK;
    return 0;
}