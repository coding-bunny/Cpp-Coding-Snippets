#include <iostream>
#include <string>
#include "StudentRecords.h"

using namespace std;

// Predefine the functions so the compiler knows about them.
// Implementation is after the main function.
void ask_for_name();
void calculate_average();
void calculate_gpa();
StudentRecords loadRecords();

/// <summary>
/// Main entry point of the program.
/// </summary>
/// <returns>Integer indicating the result of running the application</returns>
int main() {
	ask_for_name();
	calculate_average();
	calculate_gpa();
	
	return 0;
}

/// <summary>
/// Programming Challenge 1 : Ask a User for his name and greet them
/// </summary>
void ask_for_name() {
	string name;
	cout << "Please enter your name: ";
	cin >> name;
	std::cout << "Hello " + name << std::endl;
}

/// <summary>
/// Programming Challenge 2: Create an array of 5 integers and calculate the average
/// </summary>
void calculate_average() {
	int values[5] = { 1, 14, 25, 47, 99 };
	float average = 0;
	const int array_length = sizeof(values) / sizeof(int);

	cout << "Values in the array: ";

	for (int i = 0; i < array_length; i++) {
		cout << values[i] << " ";
		average += values[i];
	}

	cout << endl;
	cout << "Average: " << average / 5.0 << endl;
}

/// <summary>
/// Programming Challenge 4: Calculates the GPA for each Student
/// </summary>
void calculate_gpa() {
	StudentRecords records = loadRecords();

	// Fetch the studentID, and the student
	int id;	
	cout << endl << "Enter Student ID: ";
	cin >> id;
	string student_name = records.getStudentName(id);

	// Check if we found the Student
	if (student_name.empty()) {
		cout << "Student not found" << endl;
		return;
	}
	
	// Output the results for the Student
	cout << "The GPA for " << student_name << " is " << records.getGPA(id) << endl;
}

/// <summary>
/// Helper function to load all data
/// </summary>
/// <returns>Initialized StudentRecords object</returns>
StudentRecords loadRecords() {
	// Set up the data
	StudentRecords records = StudentRecords();

	records.addStudent(1, "George P. Burdell");
	records.addStudent(2, "Nancy Rhodes");

	records.addCourse(1, "Algebra", 5);
	records.addCourse(2, "Physics", 4);
	records.addCourse(3, "English", 3);
	records.addCourse(4, "Economics", 4);

	records.addGrade(1, 1, 'B');
	records.addGrade(1, 2, 'A');
	records.addGrade(1, 3, 'C');
	records.addGrade(2, 1, 'A');
	records.addGrade(2, 2, 'A');
	records.addGrade(2, 4, 'B');

	return records;
}
