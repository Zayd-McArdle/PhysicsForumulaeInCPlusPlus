#pragma once
#include "Menu.h"
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