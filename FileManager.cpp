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

}

FileManager::~FileManager() {

}
