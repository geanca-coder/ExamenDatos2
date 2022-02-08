//
// Created by geanc on 8 feb. 2022.
//

#ifndef EXAMENDATOS2_KRUSKALGRAPH_H
#define EXAMENDATOS2_KRUSKALGRAPH_H

#include <bits/stdc++.h>
#include "FileManager.h"
using namespace std;
class KruskalGraph {
private:
    FileManager *objeto;
    int V;
    int *parent;
    int **cost;
public:
    KruskalGraph();
    int find(int i);
    void union1(int i, int j);
    string kruskalMST();
    ~KruskalGraph();

};

#endif //EXAMENDATOS2_KRUSKALGRAPH_H
