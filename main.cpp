#include "View.h"
int main()
{
    auto* view = new View();
    view->mainMenu();
    delete view;
    return 0;
}