#include<iostream>
using namespace std;
class employee
{
	char emp_name[30];
	int emp_age;
	float emp_salary;
public:
	void getData(void);
	float Calculate_anual_salary(float emp_salary);
	void Display_record(void);
	float getSalary(void);
};
void employee::getData() {
	cout << "Enter name: ";
	cin.getline(emp_name,29);
	cout << "Enter age: ";
	cin >> emp_age;
	cout << "Enter salary: ";
	cin >> emp_salary;
}
float employee::Calculate_anual_salary(float emp_salary) {
	float anualSalary=emp_salary*12;
	return anualSalary;
}
void employee::Display_record() {
	cout << "\nEMPLOYEE RECORD:\nName: " << emp_name << "\nMonthly salary: " << emp_salary << "\nAnual salary: "<< employee::Calculate_anual_salary(emp_salary)<<endl;
}
float employee::getSalary(void) {
	return emp_salary;
}

int main() {
	static employee e;
	e.getData();
	e.Calculate_anual_salary(e.getSalary());
	e.Display_record();
}
