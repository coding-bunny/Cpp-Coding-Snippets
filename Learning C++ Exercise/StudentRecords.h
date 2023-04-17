#pragma once

#ifndef STUDENT_RECORDS_H
#define STUDENT_RECORDS_H

#include <vector>
#include "Student.h"
#include "Course.h"
#include "Grade.h"

/// <summary>
/// Part of Chapter 5, introducing functions, and cleaning up the code to make the main code easier to follow.
/// This class basically resembles the data storage on which the exercise is based.
/// </summary>
class StudentRecords
{
private:
	std::vector<Student> students;
	std::vector<Course> courses;
	std::vector<Grade> grades;

public:
	void addStudent(const int, const std::string);
	void addCourse(const int, const std::string, const unsigned char);
	void addGrade(const int, const int, const char);

	const std::string getStudentName(const int);
	const std::string getCourseName(const int);
	const unsigned char getCourseCredits(const int);
	const float getGPA(const int);

	const static float const getNumericalGrade(const char);
};

#endif
