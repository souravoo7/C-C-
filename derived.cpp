/*
this exhibits the derived classes in C++
however it is some times necessary for derived classes to have constructors
?how can that be handled
*/
#include<iostream>//derived classes in c++

using namespace std;

class employees
{
public:
    string name;
    int salary;
    void setemployees(string,int);
    void print_name();
    virtual void print_post();
};
void employees::setemployees(string k,int d)
{
    name=k;
    salary=d;
}
void employees::print_name()
{
    cout<<"Name:"<<name<<"\n";
}
void employees::print_post()
{
    cout<<"Worker at Molecular Informatics and Design Labs\n";
    cout<<"Salary="<<salary<<"\n";
}
class manager:public employees
{
public:
    void print_post();
};
/*
employees::manager::manager(string k,int d)
{
    employees(string k,int d);
}*/
void manager::print_post()
{
    cout<<"Manager at Molecular Informatics and Design Labs\n";
    cout<<"Salary="<<salary<<"\n";
}

int main()
{
    manager smith;
    smith.setemployees("smith",23000);
    smith.print_name();
    smith.print_post();
    employees kate;
    kate.setemployees("kate",12000);
    kate.print_name();
    kate.print_post();
    return 0;
}
