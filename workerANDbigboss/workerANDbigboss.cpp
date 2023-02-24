#include <iostream>
#include <string>

using namespace std;

class Worker
{
public:
	string name;
	int age;
	int salary;
	void display()
	{
		cout << "Name: " << name << "\tAge: " << age << "\t\tSalary: " << salary << endl;
	}
};

class BigBoss : public Worker
{
private:
	int bonus = 10;
public:
	int GetBonus()
	{
		return bonus;
	}
	
	int salary_with_bonus;
	
	void display()
	{
		salary_with_bonus = ((salary * bonus) / 100) + salary;
		cout << "Name: " << name << "\tAge: " << age << "\t\tSalary: " << salary << "\t\tBonus: " << bonus << "\tSalary with bonus: " << salary_with_bonus << endl;
	}
};

int main()
{
	Worker Bob;
	Bob.name = "Bob";
	Bob.age = 20;
	Bob.salary = 30000;
	
	BigBoss John;
	John.name = "John";
	John.age = 30;
	John.salary = 100000;

	Bob.display();
	John.display();
}