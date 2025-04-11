#include <iostream>

#include "utility.h"
#include "probability.h"

inline void printHead()
{
    std::cout << "\n\n|  *  *  *  *  *  *  *  *  *  *  *  *\n\n" << std::endl;
}

void mainMenu()
{
    char choice = 'a';

    do
    {
        std::cout << "\n\n| Probability Menu\n|\n| ( 1 ) List Avarage \n| ( 2 ) Moda List \n| ( 0 ) End program\n| Your choice: ";

        std::cin >> choice;

        switch (choice)
        {
        case '1':
            getListAvarege(listOfNumbers());
            break;
        case '2':
            getListModa(listOfNumbers());
            break; // Adicionado para evitar o fall-through
        case '0':
            break;
        default:
            std::cout << "| Invalid option" << std::endl;
            break;
        }

    } while (choice != '0');
}