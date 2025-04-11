#include "probability.h"

void getListAvarege(const std::vector<float>& v)
{   
    
    if (v.empty()) {
        std::cout << "| The list is empty, cannot calculate average." << std::endl;
        exit(1);
    }

    float sum = 0;
    for (int num : v) {
        sum += num;
    }
    float average = sum / v.size();

    std::cout << "| The list average is: " << average << std::endl;
}

void getListModa(const std::vector<float>& v) // NOTE: Utilizar map para resolver esse problema
{
    int mostFrequencyNumber = 0;
    int newFrequency = 0;
    int oldFrequency = 0;

    if (v.empty()) {
        std::cout << "| The list is empty, cannot calculate average." << std::endl;
        exit(1);
    }

    for (float i : v)
    {
        newFrequency = 0;
        for (float j : v)
        {
            if (i == j)
            {
                newFrequency++;
            }
        }
        if (newFrequency > oldFrequency)
        {
            mostFrequencyNumber = i;
            oldFrequency = newFrequency;
        }
    }

    std::cout << "| The most frequency number is: " << mostFrequencyNumber << std::endl;
}