#include "StudentRecords.h"
#include <iostream>

void StudentRecords::addStudent(const int id, const std::string name) {
	students.push_back(Student(id, name));
}

void StudentRecords::addCourse(const int id, const std::string name, const unsigned char credits) {
	courses.push_back(Course(id, name, credits));
}

void StudentRecords::addGrade(const int student_id, const int course_id, const char grade) {
	grades.push_back(Grade(student_id, course_id, grade));
}

const float StudentRecords::getNumericalGrade(const char letter) {
	switch (letter) {
	case 'A': return 4.0f;
	case 'B': return 3.0f;
	case 'C': return 2.0f;
	case 'D': return 1.0f;
	default: return 0.0f;
	}
}

const std::string StudentRecords::getStudentName(const int id) {
	for (int i = 0; i < students.size(); i++) {
		if (students[i].getId() == id) {
			return students[i].getName();
		}
	}
}

const unsigned char StudentRecords::getCourseCredits(const int id) {
	int i = 0;
	
	while (i < courses.size() && courses[i].getId() != id)
		i++;
	
	return courses[i].getCredits();
}

const float StudentRecords::getGPA(const int id) {
	float points = 0.0f, credits = 0.0f;
	std::cout << std::endl << "Report Card for " << getStudentName(id) << std::endl;

	for (int i = 0; i < grades.size(); i++) {
		if (grades[i].getStudentId() == id) {
			std::cout << getCourseName(grades[i].getCourseId()) << ":" << grades[i].getGrade() << std::endl;
			unsigned char current_credits = getCourseCredits(grades[i].getCourseId());

			credits += current_credits;
			points += getNumericalGrade(grades[i].getGrade()) * current_credits;
		}
	}

	return (points / credits);
}

const std::string StudentRecords::getCourseName(const int id) {
	for (int i = 0; i < courses.size(); i++)
		if (courses[i].getId() == id)\
			return courses[i].getName();
}
