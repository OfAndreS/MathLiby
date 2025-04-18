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

float calcularRaizN(float num, int n) {
    // Verifica se n é par e o número é negativo (raiz não real)
    if (num < 0 && n % 2 == 0) {
        std::cerr << "Erro: Não existe raiz real par de número negativo." << std::endl;
        return NAN; // Retorna Not a Number
    }

    // Verifica se n é zero
    if (n == 0) {
        std::cerr << "Erro: Índice de raiz não pode ser zero." << std::endl;
        return NAN;
    }

    // Calcula a raiz n-ésima usando potência
    return pow(num, 1.0 / n);
}

void emptyList(const std::vector<float>& v)
{
    if (v.empty()) {
        std::cout << "| The list is empty, cannot calculate." << std::endl;
        exit(1);
    }
}