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

float getListAverageGeometry(const std::vector<float>& v)
{
    int listSize = v.size();
    float listMultiplication = 1.0;
    float listAverageGeometry;

    emptyList(v);

    for (int i = 0; i < listSize; i++)
    {
        listMultiplication = listMultiplication * v.at(i);
    }

    listAverageGeometry = calcularRaizN(listMultiplication, listSize);

    std::cout << "| The Geometry Avarage of the list is: " << listAverageGeometry << std::endl;

    return listAverageGeometry;
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

float getListMediana(const std::vector<float>& oldV)
{
    std::vector<float> v = oldV;
    int listSize = v.size();
    emptyList(v);

    std::sort(v.begin(), v.end());

    if ((listSize % 2) == 0)
    {
        int midIndex1 = (listSize / 2) - 1;
        int midIndex2 = listSize / 2;
        float listMediana = (v[midIndex1] + v[midIndex2]) / 2.0f;
        std::cout << "| The mediana of the list is: " << listMediana << std::endl;

        return listMediana;
    }
    else
    {
        int midIndex = listSize / 2;

        std::cout << "| The mediana of the list is: " << v[midIndex] << std::endl;

        return v[midIndex];
    }
}

float getListVariance(const std::vector<float>& v) 
{
    float listAmostralVariance;
    float listPopulacionalVariance;
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

    listAmostralVariance = listSum / listSize - 1;
    listPopulacionalVariance = listSum / listSize;

    std::cout << "|\n| The variance of the list is:\n| Populacional: " << listPopulacionalVariance << "\n| Amostral: " << listAmostralVariance << std::endl;

    return listAmostralVariance;
}