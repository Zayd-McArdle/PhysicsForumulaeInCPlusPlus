#include <iostream>
#include <string>
#include "InputValidator.h"
#include "SectionHandler.h"
const char* sections[] = { "Energy", "Electricity", "Particle Model of Matter", "Forces", "Waves", "Magenetism & Electromagenetism" };
void (*sectionNavigator[])() = {
    returnToMainMenu,
    goToEnergySection,
    goToElectricitySection,
    goToParticleMatterSection,
    goToForcesSection,
    goToWavesSection,
    goToMagenetismAndElectromagenetismSection
};
static void printSections(){
    std::cout << "What area of physics do you want to calculate (select by number)" << std::endl;
    for (int i = 0; i < 7; ++i)
    {
        std::cout << i << ")" << sections[i];
    }
    
}
int main(void){
    std::string input;
    do
    {
        std::cout << "Physics Formulae In C++" << std::endl;
        printSections();
        std::cin >> input;
        for (int i = 0; i < 7; ++i)
        {
            //If the user has inputted a non-numeric type
            if (!hasNumbers(input.c_str()))
            {
                continue;
            }
            else if (std::stoi(input) == i)
            {
                sectionNavigator[i]();
            }                        
        }
    } while (input != "exit");
    
    return 0;
}