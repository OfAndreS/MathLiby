#include "probability.h"

float getListAverage(const std::vector<float>& v)
{   
    
    emptyList(v);

    float sum = 0;
    for (float num : v) {
        sum += num;
    }
    float average = sum / v.size();

    std::cout << "| The list average is: " << average << std::endl;

    return average;
}

void getListModa(const std::vector<float>& v) // NOTE: Utilizar map para resolver esse problema
{
    float mostFrequencyNumber = 0;
    int newFrequency = 0;
    int oldFrequency = 0;

    emptyList(v);

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

void getListMediana(const std::vector<float>& v)
{
    emptyList(v);

}

float getListVariance(const std::vector<float>& v) 
{
    float listVariance;
    float listSum = 0 ;
    float listAvarage;
    float diference;
    int listSize; 
    
    emptyList(v);

    listSize = v.size();
    listAvarage = getListAverage(v);

    for (float i : v)
    {
        diference = i - listAvarage;
        listSum += diference * diference;
    }

    listVariance = listSum / listSize;

    std::cout << "| The variance of the list is: " << listVariance << std::endl;

    return listVariance;
}