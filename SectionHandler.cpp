#include "Menu.h"
#include "Calculators/Energy.h"
#include "Calculators/Electricity.h"
#include "Calculators/ParticleMatter.h"
#include "Calculators/Forces.h"
#include "Calculators/Waves.h"
#include "Calculators/MagenetismAndElectromagenetism.h" 
inline void returnToMainMenu()
{
}
inline void goToEnergySection()
{
    printSectionMenu(Energy::loadSection);
}

inline void goToElectricitySection()
{
    printSectionMenu(Electricity::loadSection);
}

inline void goToParticleMatterSection()
{
    printSectionMenu(ParticleMatter::loadSection);
}

inline void goToForcesSection()
{
    printSectionMenu(Forces::loadSection);
}

inline void goToWavesSection()
{
    printSectionMenu(Waves::loadSection);
}

inline void goToMagenetismAndElectromagenetismSection()
{
    printSectionMenu(MagenetismAndElectromagenetism::loadSection);
}
