#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

string role_holder = "N/A";

class person {
protected:
	int ssn;
	string name;
	string address;
	string birthdate;
	string gender;
	string role; //student, employee, or student_worker

public:
	person() {};
	person(string);
	virtual ~person() {}; //{cout << "Base destructor" << endl;};
	map < int, vector <string> > main_person_map;
	void user_input_questions(string);
	void print_all_persons();
	void print_by_gender(string);
};

person::person(string r_h) {
	user_input_questions(r_h);
}

void person::user_input_questions(string r_h) {
	role = r_h;

	cout << "Please enter the " << r_h << "'s SSN: ";
	cin >> ssn;
	cin.ignore();

	cout << "Please enter the " << r_h << "'s name: ";
	getline(cin, name);

	cout << "Please enter the " << r_h << "'s address: ";
	getline(cin, address);

	cout << "Please enter the " << r_h << "'s birthdate: ";
	getline(cin, birthdate);

	cout << "Please enter the " << r_h << "'s gender: ";
	cin >> gender;
}

void person::print_all_persons() { //need to change to be a loop so that it prints all in one line and with commas
	for (map<int, vector<string> >::iterator it = main_person_map.begin(); it != main_person_map.end(); ++it) {
		if (main_person_map[it->first][4] == "student") {
			cout << "SSN: " << it->first << "  -  " << endl;
			cout << "  Name:			" << main_person_map[it->first][0] << endl;
			cout << "  Address:		" << main_person_map[it->first][1] << endl;
			cout << "  Birthdate:	" << main_person_map[it->first][2] << endl;
			cout << "  Gender:		" << main_person_map[it->first][3] << endl;
			cout << "  Role:			" << main_person_map[it->first][4] << endl;
			cout << "  Student ID:	" << main_person_map[it->first][5] << endl;
			cout << "  School:		" << main_person_map[it->first][6] << endl << endl;
		}
		else if (main_person_map[it->first][4] == "employee") {
			cout << "SSN: " << it->first << "  -  " << endl;
			cout << "  Name:			" << main_person_map[it->first][0] << endl;
			cout << "  Address:		" << main_person_map[it->first][1] << endl;
			cout << "  Birthdate:	" << main_person_map[it->first][2] << endl;
			cout << "  Gender:		" << main_person_map[it->first][3] << endl;
			cout << "  Role:			" << main_person_map[it->first][4] << endl;
			cout << "  Employee ID: 	" << main_person_map[it->first][5] << endl;
			cout << "  Company:		" << main_person_map[it->first][6] << endl << endl;
		}
		else if (main_person_map[it->first][4] == "student worker") {
			cout << "SSN: " << it->first << "  -  " << endl;
			cout << "  Name:			" << main_person_map[it->first][0] << endl;
			cout << "  Address:		" << main_person_map[it->first][1] << endl;
			cout << "  Birthdate:	" << main_person_map[it->first][2] << endl;
			cout << "  Gender:		" << main_person_map[it->first][3] << endl;
			cout << "  Role:			" << main_person_map[it->first][4] << endl;
			cout << "  Student ID: 	" << main_person_map[it->first][5] << endl;
			cout << "  School:		" << main_person_map[it->first][6] << endl;
			cout << "  Employee ID:	" << main_person_map[it->first][7] << endl;
			cout << "  Company:		" << main_person_map[it->first][8] << endl << endl;
		}
		else {
			cout << "There was an issue!" << endl << endl;
		}
	}
}

void person::print_by_gender(string gen) {
	for (map<int, vector<string> >::iterator it = main_person_map.begin(); it != main_person_map.end(); ++it) {
		if ((main_person_map[it->first][3] == "female" || main_person_map[it->first][3] == "Female" || 		main_person_map[it->first][3] == "FEMALE") && (gen == "female")) {
			if (main_person_map[it->first][4] == "student") {
				cout << "SSN: " << it->first << "  -  " << endl;
				cout << "  Name:			" << main_person_map[it->first][0] << endl;
				cout << "  Address:		" << main_person_map[it->first][1] << endl;
				cout << "  Birthdate:	" << main_person_map[it->first][2] << endl;
				cout << "  Gender:		" << main_person_map[it->first][3] << endl;
				cout << "  Role:			" << main_person_map[it->first][4] << endl;
				cout << "  Student ID:	" << main_person_map[it->first][5] << endl;
				cout << "  School:		" << main_person_map[it->first][6] << endl << endl;
			}
			else if (main_person_map[it->first][4] == "employee") {
				cout << "SSN: " << it->first << "  -  " << endl;
				cout << "  Name:			" << main_person_map[it->first][0] << endl;
				cout << "  Address:		" << main_person_map[it->first][1] << endl;
				cout << "  Birthdate:	" << main_person_map[it->first][2] << endl;
				cout << "  Gender:		" << main_person_map[it->first][3] << endl;
				cout << "  Role:			" << main_person_map[it->first][4] << endl;
				cout << "  Employee ID: 	" << main_person_map[it->first][5] << endl;
				cout << "  Company:		" << main_person_map[it->first][6] << endl << endl;
			}
			else if (main_person_map[it->first][4] == "student worker") {
				cout << "SSN: " << it->first << "  -  " << endl;
				cout << "  Name:			" << main_person_map[it->first][0] << endl;
				cout << "  Address:		" << main_person_map[it->first][1] << endl;
				cout << "  Birthdate:	" << main_person_map[it->first][2] << endl;
				cout << "  Gender:		" << main_person_map[it->first][3] << endl;
				cout << "  Role:			" << main_person_map[it->first][4] << endl;
				cout << "  Student ID: 	" << main_person_map[it->first][5] << endl;
				cout << "  School:		" << main_person_map[it->first][6] << endl;
				cout << "  Employee ID:	" << main_person_map[it->first][7] << endl;
				cout << "  Company:		" << main_person_map[it->first][8] << endl << endl;
			}
		}
		else if ((main_person_map[it->first][3] == "male" || main_person_map[it->first][3] == "Male" || 		main_person_map[it->first][3] == "MALE") && (gen == "male")) {
			if (main_person_map[it->first][4] == "student") {
				cout << "SSN: " << it->first << "  -  " << endl;
				cout << "  Name:			" << main_person_map[it->first][0] << endl;
				cout << "  Address:		" << main_person_map[it->first][1] << endl;
				cout << "  Birthdate:	" << main_person_map[it->first][2] << endl;
				cout << "  Gender:		" << main_person_map[it->first][3] << endl;
				cout << "  Role:			" << main_person_map[it->first][4] << endl;
				cout << "  Student ID:	" << main_person_map[it->first][5] << endl;
				cout << "  School:		" << main_person_map[it->first][6] << endl << endl;
			}
			else if (main_person_map[it->first][4] == "employee") {
				cout << "SSN: " << it->first << "  -  " << endl;
				cout << "  Name:			" << main_person_map[it->first][0] << endl;
				cout << "  Address:		" << main_person_map[it->first][1] << endl;
				cout << "  Birthdate:	" << main_person_map[it->first][2] << endl;
				cout << "  Gender:		" << main_person_map[it->first][3] << endl;
				cout << "  Role:			" << main_person_map[it->first][4] << endl;
				cout << "  Employee ID: 	" << main_person_map[it->first][5] << endl;
				cout << "  Company:		" << main_person_map[it->first][6] << endl << endl;
			}
			else if (main_person_map[it->first][4] == "student worker") {
				cout << "SSN: " << it->first << "  -  " << endl;
				cout << "  Name:			" << main_person_map[it->first][0] << endl;
				cout << "  Address:		" << main_person_map[it->first][1] << endl;
				cout << "  Birthdate:	" << main_person_map[it->first][2] << endl;
				cout << "  Gender:		" << main_person_map[it->first][3] << endl;
				cout << "  Role:			" << main_person_map[it->first][4] << endl;
				cout << "  Student ID: 	" << main_person_map[it->first][5] << endl;
				cout << "  School:		" << main_person_map[it->first][6] << endl;
				cout << "  Employee ID:	" << main_person_map[it->first][7] << endl;
				cout << "  Company:		" << main_person_map[it->first][8] << endl << endl;
			}
		}
	}
}

class student : public virtual person {
protected:
	string student_id;
	string school;

public:
	student() { student::person(); };
	~student() {}; //{cout << "Derived student destructor" << endl;};
	void add_student(string);
	void print_student(int);
};

void student::add_student(string role_holder) {
	person::user_input_questions(role_holder);
	person::main_person_map[ssn] = { name, address, birthdate, gender, role };

	cin.ignore();
	cout << "Please enter the student ID number: ";
	getline(cin, student_id);
	person::main_person_map[ssn].push_back(student_id);

	cout << "Please enter the school name: ";
	getline(cin, school);
	person::main_person_map[ssn].push_back(school);
}

void student::print_student(int s) { //s == ssn
	for (map<int, vector<string> >::iterator it = main_person_map.begin(); it != main_person_map.end(); ++it) {
		if (it->first == s) {
			cout << "SSN: " << it->first << "  -  " << endl;
			cout << "  Name:			" << main_person_map[it->first][0] << endl;
			cout << "  Address:		" << main_person_map[it->first][1] << endl;
			cout << "  Birthdate:	" << main_person_map[it->first][2] << endl;
			cout << "  Gender:		" << main_person_map[it->first][3] << endl;
			cout << "  Role:			" << main_person_map[it->first][4] << endl;
			cout << "  Student ID:	" << main_person_map[it->first][5] << endl;
			cout << "  School:		" << main_person_map[it->first][6] << endl << endl;
		}
	}
}

class worker : public virtual person {
protected:
	string company;
	string employee_id;

public:
	worker() { worker::person(); };
	~worker() {}; //{cout << "Derived worker destructor" << endl;};
	void add_employee(string);
	void print_worker(int);
};

void worker::add_employee(string role_holder) {
	person::user_input_questions(role_holder);
	person::main_person_map[ssn] = { name, address, birthdate, gender, role };

	cin.ignore();
	cout << "Please enter the employee ID: ";
	getline(cin, employee_id);
	person::main_person_map[ssn].push_back(employee_id);

	cout << "Please enter the company name: ";
	getline(cin, company);
	person::main_person_map[ssn].push_back(company);
}

void worker::print_worker(int s) { //s == ssn
	for (map <int, vector<string> >::iterator it = main_person_map.begin(); it != main_person_map.end(); ++it) {
		if (it->first == s) {
			cout << "SSN: " << it->first << "  -  " << endl;
			cout << "  Name:			" << main_person_map[it->first][0] << endl;
			cout << "  Address:		" << main_person_map[it->first][1] << endl;
			cout << "  Birthdate:	" << main_person_map[it->first][2] << endl;
			cout << "  Gender:		" << main_person_map[it->first][3] << endl;
			cout << "  Role:			" << main_person_map[it->first][4] << endl;
			cout << "  Employee ID: 	" << main_person_map[it->first][5] << endl;
			cout << "  Company:		" << main_person_map[it->first][6] << endl << endl;
		}
	}
}

class student_worker : public student, public worker {
public:
	student_worker() { student_worker::student(); student_worker::worker(); student_worker::person(); };
	student_worker(int);
	~student_worker() {}; //{cout << "Derived student_worker destructor" << endl;};
	void add_student_worker(string);
	void print_student_workers(int);

};

student_worker::student_worker(int r_h) {
	role_holder = r_h;
}

void student_worker::add_student_worker(string role_holder) {
	person::user_input_questions(role_holder);
	person::main_person_map[ssn] = { name, address, birthdate, gender, role };

	cin.ignore();
	cout << "Please enter the student ID number: ";
	getline(cin, student_id);
	main_person_map[ssn].push_back(student_id);

	cout << "Please enter the school name: ";
	getline(cin, school);
	main_person_map[ssn].push_back(school);

	cout << "Please enter the employee ID number: ";
	getline(cin, employee_id);
	main_person_map[ssn].push_back(employee_id);

	cout << "Please enter the company name: ";
	getline(cin, company);
	main_person_map[ssn].push_back(company);

}

void student_worker::print_student_workers(int s) { //s == ssn
	for (map <int, vector<string> >::iterator it = main_person_map.begin(); it != main_person_map.end(); ++it) {
		if (it->first == s) {
			cout << "SSN: " << it->first << "  -  " << endl;
			cout << "  Name:			" << main_person_map[it->first][0] << endl;
			cout << "  Address:		" << main_person_map[it->first][1] << endl;
			cout << "  Birthdate:	" << main_person_map[it->first][2] << endl;
			cout << "  Gender:		" << main_person_map[it->first][3] << endl;
			cout << "  Role:			" << main_person_map[it->first][4] << endl;
			cout << "  Student ID: 	" << main_person_map[it->first][5] << endl;
			cout << "  School:		" << main_person_map[it->first][6] << endl;
			cout << "  Employee ID:	" << main_person_map[it->first][7] << endl;
			cout << "  Company:		" << main_person_map[it->first][8] << endl << endl;
		}
	}
}



int main() {
	int ssn;
	int object_selector;
	int choice;
	bool done = false;
	person a;
	student b;
	worker c;
	student_worker d;

	cout << "Please enter the number for what you want to do." << endl;
	while (!done) {
		cout << endl
			 << " 1. Student" << endl
			 << " 2. Worker" << endl
			 << " 3. Student Worker" << endl
			 << " 4. Print all (student, worker, & student worker)" << endl
			 << " 5. Print by gender" << endl
			 << " 6. Exit" << endl << endl;
		cin.clear();
		cin >> object_selector;

		switch (object_selector) {
			case 1: { //Select Student
				cout << endl
					 << " 1. Add student" << endl
					 << " 2. Print student" << endl
					 << " 3. Main menu" << endl << endl;
				cin.clear();
				cin >> choice;

				switch (choice) {
					case 1: { // Add student
						role_holder = "student";
						b.add_student(role_holder);

						break;
					}
					case 2: { // Print student
						cout << "Please enter the SSN of the user you want to print the info for: ";
						cin >> ssn;
						b.print_student(ssn);

						break;
					}
					case 3:
						break;
					default:
						cout << "Number entered is not valid." << endl << "Returning to main menu." << endl << endl;
						//sleep(1);
						break;
				}
				break;
			}
			case 2: { //Worker
				cout << endl
					 << " 1. Add employee" << endl
					 << " 2. Print employee" << endl
					 << " 3. Main menu" << endl << endl;

				cin >> choice;

				switch (choice) {
					case 1: { //Add employee
						role_holder = "employee";
						c.add_employee(role_holder);
						break;
					}
					case 2: { //Print employee
						cout << "Please enter the SSN of the user you want to print the info for: ";
						cin >> ssn;
						c.print_worker(ssn);
						break;
					}
					case 3:
						break;
					default:
						cout << "Number entered is not valid." << endl << "Returning to main menu." << endl << endl;
						break;
				}
				break;
			}
			case 3: { //Student Worker
				cout << endl
					 << " 1. Add student worker" << endl
					 << " 2. Print student worker" << endl
					 << " 3. Main menu" << endl << endl;

				cin >> choice;
				switch (choice) {
					case 1: { //Add student worker
						role_holder = "student worker";
						d.add_student_worker(role_holder);
						break;
					}
					case 2: { //Print student worker
						cout << "Please enter the SSN of the user you want to print rhe info for: ";
						cin >> ssn;
						d.print_student_workers(ssn);
						break;
					}
					case 3:
						break;
					default:
						cout << "Number entered is not valid." << endl << "Returning to main menu." << endl << endl;
						break;
				}
				break;
			}
			case 4 : { //Print all (from person class)
				a.print_all_persons();
				b.print_all_persons();
				c.print_all_persons();
				d.print_all_persons();
				break;
			}
			case 5 : { //print by gender (from person class)
				int gen_sel;
				cout << " 1. Female" << endl
					 << " 2. Male" << endl
					 << " 3. Main menu" << endl;
				cin >> gen_sel;

				switch (gen_sel) {
					case 1: {
						a.print_by_gender("female");
						b.print_by_gender("female");
						c.print_by_gender("female");
						d.print_by_gender("female");
						break;
					}
					case 2 : {
						a.print_by_gender("male");
						b.print_by_gender("male");
						c.print_by_gender("male");
						d.print_by_gender("male");
						break;
					}
					case 3 :
						break;
					default :
						cout << "Number entered is not valid." << endl << "Returning to main menu." << endl << endl;
						break;
				}
				break;
			}
			case 6: { //Exit
				cout << "Closing program" << endl << endl;
				done = true;
				break;
			}
			default:
				cout << "Something went wrong!" << endl << "Closing the program now!";
				done = true;
				break;
		}
	}

	return 0;
}