//
// Created by geanc on 8 feb. 2022.
//

#ifndef EXAMENDATOS2_VIEW_H
#define EXAMENDATOS2_VIEW_H

#include "FileManager.h"
#include "KruskalGraph.h"
class View {
private:
    Graph<string>* graph;
    FileManager* manager;
    KruskalGraph* kruskalGraph;
public:
    View();
    void mainMenu();
    ~View();

};


#endif //EXAMENDATOS2_VIEW_H
