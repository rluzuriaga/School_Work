//
// Created by Rodrigo Luzuriaga on 10/26/2016.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class student {
public:
	student();
	student(string, int);
	void add_course(int);
	void drop_course(int);
	void print_schedule();
	int get_student_id() { return student_id; };
	string get_student_name() { return student_name; };

private:
	string student_name;
	int student_id;
	vector<int> course_number;
};

student::student(void) {
	student_name = " ";
	student_id = 0;
}

student::student(string name, int id) {
	student_name = name;
	student_id = id;
}

void student::add_course(int course_num) {
	course_number.push_back(course_num);
}

void student::drop_course(int course_num) {
	for (unsigned int i = 0; i < course_number.size(); i++) {
		if (course_num == course_number[i]) {
			course_number[i] = course_number[course_number.size() - 1];
			course_number.pop_back();
		}
	}
}

void student::print_schedule() {
	cout << "Student Name: " << student_name << endl;
	cout << "Student ID Number: " << student_id << endl;
	cout << "Courses registered to: ";
	for (unsigned int i = 0; i < course_number.size(); i++) {
		cout << course_number[i] << ", ";
	}
	cout << endl << endl;
}

class course {
public:
	course();
	course(int, int);
	void add_student(int student_id);
	void remove_student(int student_id);
	void print_students_in_course(int course_number);
	int get_course_id() {return course_number;};
	int get_student_id() {return student_id;};

private:
	int student_id;
	int course_number;
	vector<int> registered_student_id_numbers;
};

course::course(void) {
	course_number = 0;
}

course::course(int number, int id) {
	course_number = number;
	student_id = id;
}

void course::add_student(int student_id) {
	registered_student_id_numbers.push_back(student_id);
}

void course::remove_student(int student_id) {
	for (unsigned int i = 0; i < registered_student_id_numbers.size(); i++) {
		if (student_id == registered_student_id_numbers[i]) {
			registered_student_id_numbers[i] = registered_student_id_numbers[registered_student_id_numbers.size() - 1];
			registered_student_id_numbers.pop_back();
		}
	}
}

void course::print_students_in_course(int course_number) {
	cout << "Students in course: " << course_number << endl;

	for (unsigned int i = 0; i < registered_student_id_numbers.size(); i++) {
		cout << "	" << registered_student_id_numbers[i] << endl;
	}
}


int main() {

	bool done = false;
	bool second_done = false;
	int choice;
	string name;
	int course_id;
	int student_id;
	vector<student> student_vector;
	vector<course> course_vector;

	while (!done) {
		cout << "Please select the right option for what you would like to do: " << endl
			 << "	1. Add course for student" << endl
			 << "	2. Drop student from course" << endl
			 << "	3. Print course roster" << endl
			 << "	4. Print courses for student" << endl
			 << "	5. Exit the program" << endl;

		cin >> choice;

		switch (choice) {
			case 1: {

				cout << "Please enter the student's name and student ID number: ";
				cin >> name >> student_id;

				cout << "Please enter the course you want to add: ";
				cin >> course_id;

				student a(name, student_id);
				student_vector.push_back(a);

				course b(course_id, student_id);
				course_vector.push_back(b);


				for (unsigned int i = 0; i < student_vector.size(); i++) {
					if (student_id == student_vector[i].get_student_id()) {
						student_vector[i].add_course(course_id);

						for (unsigned int j = 0; j < course_vector.size(); j++) {
							if (course_id == course_vector[j].get_course_id()) {
								course_vector[j].add_student(student_id);
							}
						}
					}
				}

				break;
			}
			case 2: {

				cout << "Please enter the student's name and student ID number: ";
				cin >> name >> student_id;

				cout << "Please enter the course you want to add: ";
				cin >> course_id;

				for (unsigned int i = 0; i < student_vector.size(); i++) {
					if (student_id == student_vector[i].get_student_id()) {
						student_vector[i].drop_course(course_id);
						student_vector[i] = student_vector[student_vector.size() - 1];
						student_vector.pop_back();
						for (unsigned int j = 0; j < course_vector.size(); j++) {
							if (student_id == course_vector[j].get_student_id()) {
								course_vector[j].remove_student(student_id);
								course_vector[j] = course_vector[course_vector.size() - 1];
								course_vector.pop_back();
							}
						}
					}
				}

				break;
			}
			case 3: {

				second_done = false;

				cin.clear();
				cin.ignore();

				cout << "Please enter the course you want to print the roster out for: ";
				cin >> course_id;

				for (unsigned int i = 0; i < course_vector.size(); i++) {
					while(!second_done) {
						if (course_id == course_vector[i].get_course_id()) {
							course_vector[i].print_students_in_course(course_id);
						}
						second_done = true;
					}
				}

				break;
			}
			case 4: {

				second_done = false;

				cout << "Please enter the student ID number you want to print the schedul of: ";
				cin >> student_id;

				for (unsigned int i = 0; i < student_vector.size(); i++) {
					while (!second_done) {
						if (student_id == student_vector[i].get_student_id()) {
							student_vector[i].print_schedule();
						}
						second_done = true;
					}
				}
			}
			case 5:
				done = true;
				break;
			default:
				done = true;
				break;
		}
	}
	/* For testing!
	cout << "Student vector: " << endl;
	for (unsigned int i = 0; i < student_vector.size(); i++) {
		cout << student_vector[i].get_student_id() << ", ";
	}

	cout << endl << endl << "Course vector: " << endl;
	for (unsigned int i = 0; i < course_vector.size(); i++) {
		cout << course_vector[i].get_student_id() << ", ";
	}
	*/
	cout << endl;

	return 0;
}