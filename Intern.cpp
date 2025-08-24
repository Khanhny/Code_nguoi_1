#include"Intern.h"
#include <string>
using namespace std;
Intern::Intern() : Id(0),Name(""),Email(""),Major(""){}
Intern::Intern(int Id,string Name, string Email,string Major):Id(Id),Name(Name),Email(Email),Major(Major){}
int Intern::getId() const
{ return Id;}
string Intern::getName() const
{ return Name;}
string Intern::getEmail() const
{ return Email;}
string Intern::getMajor() const
{ return Major;}

void Intern:: setName(const string &N)
{
    Name=N;
}
void Intern:: setEmail(const string &E)
{
    Email=E;
}
void Intern:: setMajor(const string &M)
{
    Major=M;
}

void Intern::display() const{
    cout<< "Id:"<<Id<<endl;
    cout<< "Name:"<<Name<<endl;
    cout<< "Email:"<<Email<<endl;
    cout<< "Major:"<<Major<<endl;
}