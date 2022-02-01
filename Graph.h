//
// Created by geanc on 1 feb. 2022.
//

#ifndef EXAMENDATOS2_GRAPH_H
#define EXAMENDATOS2_GRAPH_H
#include <iostream>
#include <list>
#include <vector>
#include <set>
#define infinity 0x3f3f3f3f
using namespace std;
template <class Type, class Weight>
class Graph {
private:
    int V;
    list<pair<Type,Type>>*adj;
public:
    explicit Graph(int vertex=0);
    void addEgde(Type u ,Type v, Weight w);
    void printVector(vector<Type>vec);
    void shortestPath(int src);

};

template<class Type, class Weight>
Graph<Type, Weight>::Graph(int vertex) {
    this->V = vertex;
    adj = new list<pair<Type, Type>>[vertex];
}

template<class Type, class Weight>
void Graph<Type, Weight>::addEgde(Type u, Type v, Weight w) {
    adj[u].emplace_back(make_pair(v,w));
    adj[v].emplace_back(make_pair(u,w));
}

template<class Type, class Weight>
void Graph<Type, Weight>::printVector(vector<Type> vec) {
    vector<int>::iterator it;
    for(it = vec.begin(); it!=vec.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
}

template<class Type, class Weight>
void Graph<Type, Weight>::shortestPath(int src) {
  
}


#endif //EXAMENDATOS2_GRAPH_H
