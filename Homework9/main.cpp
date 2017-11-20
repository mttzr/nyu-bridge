#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Node.h"
#include <cstddef>

using namespace std;
using namespace linkedlistofclasses;

void HeadInsert(EmployeePtr& head, int id_number, double hourly_pay_rate, string name);
EmployeePtr search(EmployeePtr head, int id_target);

int main() {

//read in file to create employee linked list
	ifstream in_stream;
	string file_name;
	EmployeePtr head;
	head = new Employee;
	EmployeePtr tmp;
	int id_number;
	int hours_worked;
	double hourly_pay_rate;
	string name;

	//create linked list of employees
	cout<<"Enter employee data filename: ";
	cin>>file_name;
	in_stream.open(file_name);

	if (in_stream.fail()) {
		cout<<"Input file opening filed.\n";
		exit(1);
	}

	while (in_stream>>id_number) {
		in_stream>>hourly_pay_rate;
		getLine(in_stream, name);
		HeadInsert(head, id_number, hourly_pay_rate, name);
	}

	in_stream.close();

	//add hours to employees
	cout<<"Enter work hours filename: ";
	cin>>file_name;
	in_stream.open(file_name);

	if (in_stream.fail()) {
		cout<<"Input file opening filed.\n";
		exit(1);
	}

	while(in_stream>>id_number) {
		tmp = search(head, id_number);
		if(tmp != NULL){
			in_stream>>hours_worked;
			tmp->AddHoursWorked(hours_worked);
		}
		else {
			in_stream.ignore(9999, '\t');
		}
	}

	//sort employees by amount paid


	//print
	cout<<"***********Payroll Information***********"
	while (tmp != NULL) {
		tmp->PrintEmployee();
		tmp = tmp->GetLink();
	}
	cout<<"*************End Information*************"

//delete
	tmp = head;
	while (tmp != NULL) {
		EmployeePtr node_to_delete = tmp;
		tmp = tmp->GetLink();
		delete node_to_delete;
	}

	return 0;
}

void HeadInsert(EmployeePtr& head, int id_number, double hourly_pay_rate, string name) {
	EmployeePtr temp_ptr;
	temp_ptr = new Employee;
	temp_ptr->SetId(id_number);
	temp_ptr->SetHourlyPayRate(hourly_pay_rate);
	temp_ptr->SetName(name);
	temp_ptr->SetLink(head);
	head = temp_ptr;
}

EmployeePtr search(EmployeePtr head, int id_target){
	EmployeePtr here = head;
	if (here == NULL) {
		return NULL;
	}
	else {
		while (here->GetId() != id_target && here->GetLink() != NULL) {
			here = here->GetLink();
		}
		if(here->GetId() == id_target) {
			return here;
		}
		else {
			return NULL;
		}
	}
}

