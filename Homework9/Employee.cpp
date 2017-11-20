#include <iostream>;
#include "Employee.h"

namespace linkedlistofclasses {

	Employee::Employee() {
		name_ = "";
		id_number_ = NULL;
		hourly_pay_rate_ = NULL;
		hours_worked_ = NULL;
		link_ = NULL;
	}

	Employee::Employee(string name, int id_number, double hourly_pay_rate) {
		name_ = name;
		id_number_ = id_number;
		hourly_pay_rate_ = hourly_pay_rate;
		hours_worked_ = NULL;
		link_ = NULL;
	}

	string Employee::GetName() const {
		return name_;
	}

	int Employee::GetId() const {
		return id_number_;
	}

	double Employee::GetHourlyPayRate() const {
		return hourly_pay_rate_;
	}

	int Employee::GetHoursWorked() const {
		return hours_worked_;
	}

	void Employee::SetName(string name) {
		name_ = name;
	}

	void Employee::SetId(int id_number) {
		id_number_ = id_number	
	}

	void Employee::SetHourlyPayRate(double hourly_pay_rate) {
		hourly_pay_rate_ = hourly_pay_rate;
	}

	void Employee::SetHoursWorked(int hours_worked) {
		hours_worked_ = hours_worked;
	}

	void Employee::SetLink(Employee* link) {
		link_ = link;
	}

	void Employee::AddHoursWorked(int hours_worked) {
		hours_worked_ = hours_worked_ + hours_worked;
	}

}
