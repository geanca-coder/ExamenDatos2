#include "Person.h"
#include "Graph.h"
int main(){
    auto*g = new Graph<Person*>;
    auto* amritsar = new Person("amritsar");
    auto* delhi = new Person("delhi");
    auto* jaipur = new Person("jaipur");
    auto* mumbai = new Person("mumbai");
    auto* bhopal = new Person("bhopal");
    auto* agra = new Person("agra");

    g->addEdge(amritsar,delhi,1);
    g->addEdge(amritsar,jaipur,4);
    g->addEdge(jaipur,delhi,2);
    g->addEdge(jaipur,mumbai,8);
    g->addEdge(bhopal,agra,2);
    g->addEdge(mumbai,bhopal,3);
    g->addEdge(agra,delhi,1);
    cout<<g->print();
    cout<<"\n";

    cout<<g->dijkstra(amritsar);

    delete g;



    return 0;
}
