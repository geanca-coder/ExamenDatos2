//
// Created by geanc on 8 feb. 2022.
//

#ifndef EXAMENDATOS2_KRUSKALGRAPH_H
#define EXAMENDATOS2_KRUSKALGRAPH_H

#include <bits/stdc++.h>
#define V 9
using namespace std;
class KruskalGraph {
private:
    int parent[V];
public:
    int find(int i);
    void union1(int i, int j);
    string kruskalMST(int cost[][V]);

};


#endif //EXAMENDATOS2_KRUSKALGRAPH_H
