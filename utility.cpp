#include "utility.h"

std::vector<float> listOfNumbers() // Create a dynamic list with the numbers for manipulation 
{
   std::string tempStrVar;
   std::vector<float> v; // Change the vector type to float

   std::cout << "| Type a list of numbers: ";

   while (true) {
       std::cin >> tempStrVar;
       if (tempStrVar == "/end") {
           break;
       }
       try {
           float tempFloatVar = std::stof(tempStrVar); // Use std::stof to convert to float
           v.push_back(tempFloatVar);
       }
       catch (const std::invalid_argument& e) {
           std::cerr << "Invalid number: " << tempStrVar << std::endl;
       }
   }

   return v;
}

void emptyList(const std::vector<float>& v)
{
    if (v.empty()) {
        std::cout << "| The list is empty, cannot calculate." << std::endl;
        exit(1);
    }
}