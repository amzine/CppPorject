#include <iostream>

class Employee {
public:    
    std::string Name;
    std::string Company;
    int Age;
    void messi(){
        std::cout<< "NAME - " << Name << std::endl;
        std::cout<< "company - " << Company << std::endl;
        std::cout<< "age - " << Age << std::endl;       
    }
    Employee(std::string name, std::string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main(int argc, char const *argv[])
{
    Employee employee1 = Employee("messi", "footballl", 42);
    employee1.messi();

    Employee employee2=Employee("easport","sss",55);
    employee2.messi();
    return 0;
}
