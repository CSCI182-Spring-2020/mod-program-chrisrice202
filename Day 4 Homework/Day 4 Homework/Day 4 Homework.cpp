/// Purpose: Homework problems 1-4 
/// @author Chris Rice
/// @date 2/2/2020

#include <iostream>

enum Planets { Mercury, Venus, Earth, Mars, Jupiter, Saturn, Uranus, Neptune, Pluto };

int planetStrToNum(const char* str1) {

    if (str1 == "Mercury") {
        return Mercury;
    } else if (str1 == "Venus") {
        return Venus;
    }
    else if (str1 == "Earth") {
        return Earth;
    }
    else if (str1 == "Mars") {
        return Mars;
    }
    else if (str1 == "Jupiter") {
        return Jupiter;
    }
    else if (str1 == "Saturn") {
        return Saturn;
    }
    else if (str1 == "Uranus") {
        return Uranus;
    }
    else if (str1 == "Neptune") {
        return Neptune;
    }
    else if (str1 == "Pluto") {
        return Pluto;
    } else {
        return Earth;
    }

}

const char* planetNumToStr(int planet) {

    switch (planet) {
        case 0:
            return "Mercury";
        case 1:
            return "Venus";
        case 2:
            return "Earth";
        case 3:
            return "Mars";
        case 4:
            return "Jupiter";
        case 5:
            return "Saturn";
        case 6:
            return "Uranus";
        case 7:
            return "Neptune";
        case 8:
            return "Pluto";
        default:
            return "Error";
    }

}

int main()
{

    std::cout << "Neptune: " << planetStrToNum("Neptune") << "\n";
    std::cout << "2 is:  " << planetNumToStr(2) << "\n\n";

    for (int i = 0; i < 9; i++) {

        std::cout << "Number " << i << " is: " << planetNumToStr(i) << "\n";

    }
}
