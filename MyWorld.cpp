#pragma once

#include "G4VUserDetectorConstruction.hh"

#include <G4NistManager.hh>
#include "CLHEP/Units/SystemOfUnits.h"

#include  "G4Box.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"

using namespace CLHEP;

class MyWorld: public G4VUserDetectorConstruction
{
    public:
        virtual G4VPhysicalVolume* Construct() override
        {
            G4Material* air = G4NistManager::Instance()->FindOrBuildMaterial("G4_AIR");
            G4Box *myWorld = new G4Box("MyWorld",5*m,5*m,5*m);
            G4LogicalVolume *myLogicalWorld = new G4LogicalVolume(myWorld,air,"MyLogicalWorld");
            G4PVPlacement *myPhysicalWorld = new G4PVPlacement(0,{0,0,0},myLogicalWorld,"MyPhysicalWorld",0,false,0);
            return myPhysicalWorld;
        }
    private:
};