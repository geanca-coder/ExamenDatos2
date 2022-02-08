//
// Created by geanc on 8 feb. 2022.
//

#include "FileManager.h"

Graph<string> *FileManager::graphMaker() {
    auto *graph = new Graph<string>;
    fstream file;
    char lim = ',';
    string node1, node2, weight;
    file.open("../DATABASE/EXAM2.csv", ios::in);
    if(file.is_open()){
        while(!file.eof()) {
            getline(file, node1, lim);
            getline(file, node2, lim);
            getline(file, weight, '\n');
            graph->addEdge(node1,node2, stoi(weight));
        }
    }
    return graph;
}

FileManager::FileManager() {
    fstream file;
    file.open("../DATABASE/EXAM2.csv", ios::in);
    char lim = ',';
    if(file.is_open()){
        while(!file.eof()) {
            string node1, node2, weight;
            getline(file, node1, lim);
            getline(file, node2, lim);
            getline(file, weight, '\n');
            set.insert(node1);
            set.insert(node2);
        }
    }
}

FileManager::~FileManager() {

}

int FileManager::nodesCounter() {
    return set.size();
}

int **FileManager::graphKrusKalMaker() {
    int ** cost;
    fstream file;
    file.open("../DATABASE/EXAM2.csv", ios::in);
    char lim = ',';
    int size = nodesCounter();
    cost = new int*[size];
    for (int i=0; i<size; i++)
    {
        cost[i]= new int[size];
    }

    for (int i = 0; i <size ; ++i) {
        for (int j = 0; j <size; ++j) {
            cost[i][j] = -1;
        }
    }
    string abecedario = "ABCDEFGHIJKMNOPQRSTUVWXYZ";
    if(file.is_open()){
        while(!file.eof()) {
            string node1, node2, weight;
            getline(file, node1, lim);
            getline(file, node2, lim);
            getline(file, weight, '\n');
            cost[    abecedario.find(node1)][    abecedario.find(node2)] = stoi(weight);
        }
    }
    for (int i = 0; i <size ; ++i) {
        for (int j = 0; j < size; ++j) {
            if (cost[i][j] == -1) {
                cost[i][j] = INT_MAX;
            }
        }
    }
    return cost;
}

string FileManager::allNodes() {
    auto it = set.begin();
    string allNodes;
    for(int i= 0; i<set.size(); i++){
        allNodes+=*it;
        it++;
    }
    return allNodes;
}
