// Struct Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

enum characters { BugsBunny, Elmer, MickeyMouse, Tweety };

struct cartoonChar {

    characters character;
    string street;
    string city;
    string state;
    string zip;

};

int myFunc(int& val) {

    val+= 5;
    return val;
}

int main()
{

    int origVal = 10;

    myFunc(origVal);
    cout << origVal;


    /*
    cartoonChar myCharacter;

    myCharacter.character = Elmer;
    myCharacter.street = "950 Hilgard";
    myCharacter.city = "Los Angeles";
    myCharacter.state = "CA";
    myCharacter.zip = "92656";

    //Pretty Print
    cout << myCharacter.street << " " << myCharacter.city << ", " << myCharacter.state << " " << myCharacter.zip << " " << endl;
    */
}


