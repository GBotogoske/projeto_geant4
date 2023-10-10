#include <iostream>
#include <G4RunManager.hh>

#include "MyWorld.cpp"


using namespace CLHEP;

int main()
{
    G4RunManager* manager = new G4RunManager();

   

    manager->SetUserInitialization(new MyWorld());
    manager->Initialize();
    delete manager;

   // std::cout<<"RODEI"<<std::endl;
}