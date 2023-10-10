#include <iostream>
#include <G4RunManager.hh>

int main()
{
    G4RunManager* manager = new G4RunManager();

    manager->Initialize();
    delete manager;
   // std::cout<<"RODEI"<<std::endl;
}