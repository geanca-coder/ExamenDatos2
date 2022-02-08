//
// Created by geanc on 8 feb. 2022.
//

#include "View.h"

View::View() {
    manager = new FileManager;
    graph = nullptr;
    kruskalGraph = nullptr;
}

void View::mainMenu() {
    int option = 0;

    do{

        cout<<"1. Cargar datos automaticos\n"
            <<"2. Dijkstra\n"
            <<"3. Kruskal\n"
            <<"4. Quit"<<endl;
        cin>>option;
        while(cin.fail()){
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"RUNTIME ERROR NUMBERS ONLY"<<endl<<endl;
            cout<<"1. Cargar datos automaticos\n"
                <<"2. Dijkstra\n"
                <<"3. Kruskal\n"
                <<"4. Quit"<<endl;
            cin>>option;
        }
        switch (option) {
            case 1: {
                kruskalGraph = new KruskalGraph;
                graph = manager->graphMaker();
                cout << "CARGA DE DATOS EXITOSA" << endl;
            }
                break;
            case 2:{
                if(graph){
                    string nodes = manager->allNodes();
                    char node;
                    bool found = false;
                    cout<<"Digite el nodo source: "<<endl;
                    cin>>node;
                    if(!cin.fail()){
                        for(char i : nodes){
                            if(i==node){
                                string variable(1,i);
                                cout<<graph->dijkstra(variable);
                                found = true;
                                break;
                            }
                        }
                        if(not found){
                            cout<<"NODO NO ENCONTRADO"<<endl;
                        }
                    }else{
                        cout<<"INTENTELO MAS TARDE!!!"<<endl;
                    }

                }else{
                    cout<<"DEBE CARGAR LOS DATOS PRIMERO"<<endl;
                }

            }
                break;
            case 3:{
                if(kruskalGraph){
                    cout<<kruskalGraph->kruskalMST()<<endl;
                }
                cout<<"DEBE CARGAR LOS DATOS PRIMERO"<<endl;
            }
                break;
            case 4:

                break;
            default:
                cout<<"OPCION INVALIDA NO EXISTE"<<endl;
                break;
        }

    } while (option!=4);
    cout<<"MUCHAS GRACIAS !!!!"<<endl;
}

View::~View() {
    delete manager;
    /*
     if en caso de que la persona no entre de una vez a la carga y se quiera salir
     */
    if(graph){
        delete graph;
    }
    if(kruskalGraph){
        delete kruskalGraph;
    }
}

