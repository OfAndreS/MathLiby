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
        std::cout << "\n\n| Probability Menu\n|\n| ( 1 ) List Avarage \n| ( 2 ) List Moda \n| ( 3 ) List Mediana\n| ( 4 ) List Variance\n| ( 5 ) List Geometry \n| ( 0 ) End program\n| Your choice: ";

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
            getListMediana(listOfNumbers());
            break;
        case '4':
            getListVariance(listOfNumbers());
            break;
        case '5':
            getListAverageGeometry(listOfNumbers());
        case '0':
            break;
        default:
            std::cout << "| Invalid option" << std::endl;
            break;
        }

    } while (choice != '0');
}