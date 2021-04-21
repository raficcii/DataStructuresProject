#include <iostream>
#include <string>
#include <filesystem>
#include "minigit.hpp"


void menu()
{
    cout << "1. Initialize a new repository" << endl;
    cout << "2. Add a file" << endl;
    cout << "3. Remove a file" << endl;
    cout << "4. Commit changes" << endl;
    cout << "5. Checkout" << endl;
}