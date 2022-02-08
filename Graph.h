//
// Created by geanc on 1 feb. 2022.
//

#ifndef EXAMENDATOS2_GRAPH_H
#define EXAMENDATOS2_GRAPH_H
#include <iostream>
#include <map>
#include <list>
#include <climits>
#include <set>
using namespace std;
#include <sstream>
template <typename T>
class Graph{
private:
    int v;
    map<T,list<pair<T,int>>>l;
public:
    Graph();
    void addEdge(T u,T v,int wt,bool bidir=true);
    string print();
    string dijkstra(T src);
};

template<typename T>
Graph<T>::Graph() {
    this->v =0;
}

template<typename T>
void Graph<T>::addEdge(T u, T v, int wt, bool bidir) {
    l[u].push_back(make_pair(v,wt));
    if(bidir){
        l[v].push_back(make_pair(u,wt));
    }
}

template<typename T>
string Graph<T>::print() {
    stringstream ss;
    for(auto it=l.begin();it!=l.end();it++){
        ss<<*it->first<<" -> ";
        for(auto it1=it->second.begin();it1!=it->second.end();it1++){
            ss<<"("<<it1->first<<","<<it1->second<<"),";
        }
        ss<<"\n";
    }
    return ss.str();
}

template<typename T>
string Graph<T>::dijkstra(T src) {
    stringstream ss;
    map <T,int>dist;
    for(auto i=l.begin();i!=l.end();i++){
        dist[i->first]=INT_MAX;
    }
    dist[src]=0;
    set<pair<int,T>>s;
    s.insert(make_pair(0,src));
    while(!s.empty()){
        auto p=*(s.begin());
        T node=p.second;
        int nodeDist=p.first;
        s.erase(s.begin());
        for(auto i=l[p.second].begin();i!=l[p.second].end();i++){
            if(nodeDist+i->second<dist[i->first]){
                T dest=i->first;
                auto f= s.find(make_pair(dist[dest],dest));
                if(f!=s.end()){
                    s.erase(f);
                }
                dist[dest]=nodeDist+i->second;
                s.insert(make_pair(dist[dest],dest));
            }
        }
    }

    for(auto d=dist.begin();d!=dist.end();d++){
        ss<<d->first<<" is located at distance of "<<d->second<<"\n";
    }
    return ss.str();
}


#endif //EXAMENDATOS2_GRAPH_H
