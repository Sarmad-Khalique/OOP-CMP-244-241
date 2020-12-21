#include <iostream>

using namespace std;

class Employee{
	int employeeNo;
protected:
	int salary;
public:
	Employee(int en, int sal):employeeNo(en), salary(sal){	}
	void showSalary(){	cout << "Employee\nSalary:" << salary << '\n'	;	}
};
class RegularEmployee:public Employee{
	int bonus;
public:
	RegularEmployee(int en, int sal, int b):Employee(en, sal), bonus(b){	}
	void showSalary(){	cout << "Regular Employee\nSalary:" << salary+bonus << '\n'	;	}
};
class SalesMan:public Employee{
	int sales;
	int commission;	//percentage of sales
public:
	SalesMan(int en, int sal, int ss, int c):Employee(en, sal), sales(ss), commission(c){	}
	void showSalary(){	cout << "Sales Man\nSalary:" << salary+sales*commission/100 << '\n'	;	}
};
int main(){
	Employee *e1 = new RegularEmployee(1, 30000, 5000);
	Employee *e2 = new SalesMan(2, 10000, 300000, 2);

	//If function exist in both parent and child class then parent class pointer will call function
	//from parent class
	e1->showSalary();
	e2->showSalary();
	//If function exist in both parent and child class then child class pointer will call function 
	//from child class instead of parent class
	RegularEmployee *re = new RegularEmployee(1, 30000, 5000);
	SalesMan *sm = new SalesMan(2, 10000, 300000, 2);
	re->showSalary();
	sm->showSalary();
	return 0;
}
