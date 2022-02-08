//
// Created by geanc on 8 feb. 2022.
//

#ifndef EXAMENDATOS2_FILEMANAGER_H
#define EXAMENDATOS2_FILEMANAGER_H

#include "Graph.h"
#include <fstream>
#include <iterator>
#include <unordered_set>
using namespace std;
class FileManager {
private:
    unordered_set<string>set;
public:
    FileManager();

    Graph<string>* graphMaker();
    int nodesCounter();
    int **graphKrusKalMaker();
    string allNodes();
    ~FileManager();

};


#endif //EXAMENDATOS2_FILEMANAGER_H
