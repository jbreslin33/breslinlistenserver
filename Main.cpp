#include "ListenServer.h"

#include <iostream>
#include <string>

int main()
{
    std::cout << "Launching ListenServer..." << std::endl;

    ListenServer* listenServer = new ListenServer();

    bool listenOn = true;
    while (listenOn == true)
    {
        listenServer->processRequests();
    }

}
