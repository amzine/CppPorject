#include <iostream>

class Employee {
private:
    std::string Name;
    std::string Company;
    int Age;
public:
    void setName(std::string name)
    {
        Name = name;
    }
    std::string getName()
    {
        return Name;
    }
    void setCompany(std::string company)
    {
        Company = company;
    }
    std::string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if (age >= 20)
             Age = age;
    }
    int getAge()
    {
        return Age;
    }
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

    Employee employee2 = Employee("easport","sss",55);
    employee2.messi();

    employee1.setAge(21);
    std::cout<< employee1.getName() << " is " << employee1.getAge()<< " years old" <<std::endl;
    return 0;
}
