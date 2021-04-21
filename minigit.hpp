#ifndef MINIGIT_H
#define MINIGIT_H
#include <vector>
#include <iostream>
using namespace std;

struct singlyNode;
struct doublyNode
{
    int commitNumber;
    singlyNode* head;
    doublyNode* previous;
    doublyNode* next;
};

struct singlyNode
{
    string fileName; // name of local file
    string fileVersion; // name of file in .minigit folder
    singlyNode* next;
};

class miniGit
{
    public:
        // Initialize new repository function
        // Add file function
        // Remove file function
        // Commit changes function
        // Checkout function
    private:

};
#endif
