#pragma once
#include "Menu.h"
/// @brief Used for getting user inputs from menus
/// @return returns -1 if a non-numeric character was entered
static int getUserInput() {
    try
    {
        int input;
        std::cin >> input;
        return input;
    }
    catch(...)
    {
        return -1;
    }
    
}
int printSectionMenu(void (*printList)()) {
    std::cout << "Choose from the following options, which formula do you want to calculate?" << std::endl;
    printList();
    return getUserInput();
}
int printFormulaMenu(void (*printList)()){
    std::cout << "Choose from the following options, which element do you want to calculate?" << std::endl;
    printList();
    return getUserInput();
}