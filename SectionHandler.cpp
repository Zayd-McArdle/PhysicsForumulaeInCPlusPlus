#include "Menu.h"
#include "Calculators/Energy.h"
#include "Calculators/Electricity.h"
#include "Calculators/ParticleMatter.h"
#include "Calculators/Forces.h"
#include "Calculators/Waves.h"
#include "Calculators/MagenetismAndElectromagenetism.h" 
void returnToMainMenu()
{
}

void goToEnergySection()
{
    printSectionMenu(Energy::loadSection);
}

void goToElectricitySection()
{
    printSectionMenu(Electricity::loadSection);
}

void goToParticleMatterSection()
{
    printSectionMenu(ParticleMatter::loadSection);
}

void goToForcesSection()
{
    printSectionMenu(Forces::loadSection);
}

void goToWavesSection()
{
    printSectionMenu(Waves::loadSection);
}

void goToMagenetismAndElectromagenetismSection()
{
    printSectionMenu(MagenetismAndElectromagenetism::loadSection);
}
