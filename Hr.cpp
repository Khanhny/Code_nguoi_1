#include"Hr.h"
#include <string>
using namespace std;
Hr:Hr() : Id(0),Name(""),Email(""),Major(""){}
Hr:Hr(int Id,string Name, string Email,string Major):Id(Id),Name(Name),Email(Email),Major(Major){}
int Hr::getId() const
{ return Id;}
string Hr::getName() const
{ return Name;}
string Hr::getEmail() const
{ return Email;}
string Hr::getMajor() const
{ return Major;}

void Hr:: setName(const string &N)
{
    Name=N;
}
void Hr:: setEmail(const string &E)
{
    Email=E;
}
void Hr:: setMajor(const string &M)
{
    Major=M;
}

void Hr::display() const{
    cout<< "Id:"<<Id<<endl;
    cout<< "Name:"<<Name<<endl;
    cout<< "Email:"<<Email<<endl;
    cout<< "Major:"<<Major<<endl;
}