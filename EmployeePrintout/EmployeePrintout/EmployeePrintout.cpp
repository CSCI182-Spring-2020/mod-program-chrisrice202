// EmployeePrintout.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum EMPLOYEE_TYPE { MANAGER, EMPLOYEE, VOLUNTEER };

struct Address {

    string City;
    string State;

};

struct Employee {

    string Name;
    int DivisionNo;
    Address address;
    EMPLOYEE_TYPE empType;

};

int main()
{

    Employee myEmployee;

    myEmployee.Name = "Chris";
    myEmployee.DivisionNo = 123;
    myEmployee.address.City = "Myrtle Beach";
    myEmployee.address.State = "SC";
    myEmployee.empType = EMPLOYEE;

    std::cout << myEmployee.empType << ": " << myEmployee.Name << " " << myEmployee.DivisionNo << " " << myEmployee.address.City << ", " << myEmployee.address.State;
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
