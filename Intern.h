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
    // Constructor mặc định
    Intern();

    // Constructor có tham số
    Intern(int Id, string Name, string Email, string Major);

    // Getter
    int getId();
    string getName();
    string getEmail();
    string getMajor();

    // Setter
    void setName(const string &Name);
    void setEmail(const string &Email);
    void setMajor(const string &Major);

    // Hiển thị thông tin
    void display();
};

#endif
