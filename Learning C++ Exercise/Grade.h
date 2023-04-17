#pragma once

#ifndef GRADE_H
#define GRADE_H

/// <summary>
/// This is the third class from the chapter 3 programming challenge, and represents the grade that a Student can have on the Course.
/// The class requires the following members:
///		* int for the Student ID
///		* int for the Course ID
///		* char for the grade of the course
/// </summary>
class Grade
{
private:
	int student_id;
	int course_id;
	char grade;

public:
	Grade(const int student_id, const int course_id, const char grade);

	const int getStudentId();
	const int getCourseId();
	const char getGrade();

	void setStudentId(const int student_id);
	void setCourseId(const int course_id);
	void setGrade(const char grade);
};

#endif
