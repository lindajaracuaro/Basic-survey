// Bit fields example.cpp 
//

#include <iostream>

struct preferences{

    bool hair : 1;
    bool likesMusic : 1;
    bool happiness : 1; 
    bool job : 1;
    bool internet : 1;
    bool dinasour : 1;
    unsigned int kids : 4;

};

int main()
{
    struct preferences Joel;
    Joel.hair = true;
    Joel.likesMusic = true;
    Joel.job = false;
    Joel.happiness = true;
    Joel.internet = false;
    Joel.dinasour = true;
    Joel.kids = 15;
    int x = sizeof(Joel);

    std::cout << "Preferences of Joel\n";
    if (Joel.hair == true)              std::cout << "He has hair \n";
    if (Joel.likesMusic == true)        std::cout << "He likes music \n";
    if (Joel.happiness == true)         std::cout << "He IS happy \n";
    if (Joel.job == true)               std::cout << "He has a job \n";
    if (Joel.internet == true)          std::cout << "He has internet \n";
    if (Joel.dinasour == true)          std::cout << "He has a dinasour ";
    if (Joel.kids != 0)                 std::cout << " and He has " << Joel.kids << " kids\n";

    std::cout << "The structure size is \t" << sizeof(preferences) *8 << " bits \n";
    std::cout << "The data size is \t" << sizeof(Joel) * 8 << " bits \n";
    
    return 0;
}

