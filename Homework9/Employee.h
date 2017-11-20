namespace linkedlistofclasses {
	Class Employee {
	public:
		Employee();
		Employee(string name, int id_number, double hourly_pay_rate);
		string GetName() const;
		int GetId() const;
		double GetHourlyPayRate() const;
		int GetHoursWorked() const;
		void SetName(string name);
		void SetId(int id_number);
		void SetHourlyPayRate(double hourly_pay_rate);
		void SetHoursWorked(int hours_worked);
		void SetLink(Employee *link);
		void PrintEmployee();
		void AddHoursWorked(int hours_worked);

	private:
		String name_;
		int id_number_;
		double hourly_pay_rate_;
		int hours_worked_;
		Employee *link_;
	};
	typedef Employee* EmployeePtr;
}