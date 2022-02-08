//
// Created by geanc on 8 feb. 2022.
//

#ifndef EXAMENDATOS2_FILEMANAGER_H
#define EXAMENDATOS2_FILEMANAGER_H

#include "Graph.h"
#include <fstream>
class FileManager {
public:
    FileManager();

    Graph<string>* graphMaker();

    ~FileManager();

};


#endif //EXAMENDATOS2_FILEMANAGER_H
