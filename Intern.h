#ifndef INTERN_H
#define INTERN_H

#include <string>
#include <iostream>
using namespace std;

class Intern
{
private:
    int Id;
    string Name;
    string Email;
    string Major;

public:
   
    Intern();

    Intern(int Id, string Name, string Email, string Major);

   
    int getId();
    string getName();
    string getEmail();
    string getMajor();

  
    void setName(const string &Name);
    void setEmail(const string &Email);
    void setMajor(const string &Major);

    void display();
};

#endif
