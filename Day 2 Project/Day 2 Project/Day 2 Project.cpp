/*
Day 2 Project.cpp: Using Mod in multiple ways
@author Chris Rice
@date 1/31/2020
*/

#include <iostream>

//Subtraction based mod function
int Mod1(int a, int b) {

    while (a - b >= 0) {
        a = a - b;
    }

    return a;

}

//Division based mod function
int Mod2(int a, int b) {

    return ( a - ((a / b) * b));

}

int main()
{

    int valueA = 400;
    int valueB = 220;

    //Unit test of both mod functions
    std::cout << valueA << " % " << valueB << " equals " << Mod1(valueA, valueB) << "\n";
    std::cout << valueA << " % " << valueB << " equals " << Mod2(valueA, valueB) << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
