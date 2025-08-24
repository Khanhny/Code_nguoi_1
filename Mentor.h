#ifndef MENTOR_H
#define MENTOR_H

#include <string>
#include <iostream>
using namespace std;

class Mentor
{
private:
    string Name;
    string Email;

public:
   
    Intern();

    Intern( string Name, string Email);

   
   
    string getName();
    string getEmail();
   

  
    void setName(const string &Name);
   

    void display();
};

#endif
