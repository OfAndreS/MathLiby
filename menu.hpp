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
        std::cout << "\n\n| Probability Menu\n|\n| ( 1 ) List Avarage \n| ( 2 ) List Moda \n| ( 3 ) List Variance \n| ( 0 ) End program\n| Your choice: ";

        std::cin >> choice;

        switch (choice)
        {
        case '1':
            getListAverage(listOfNumbers());
            break;
        case '2':
            getListModa(listOfNumbers());
            break; 
        case '3':
            getListVariance(listOfNumbers());
        case '0':
            break;
        default:
            std::cout << "| Invalid option" << std::endl;
            break;
        }

    } while (choice != '0');
}