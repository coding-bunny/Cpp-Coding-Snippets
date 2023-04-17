#include "Grade.h"

Grade::Grade(const int student_id, const int course_id, const char grade) {
	this->student_id = student_id;
	this->course_id = course_id;
	this->grade = grade;
}

const int Grade::getStudentId() {
	return this->student_id;
}

const int Grade::getCourseId() {
	return this->course_id;
}

const char Grade::getGrade() {
	return this->grade;
}

void Grade::setStudentId(const int student_id) {
	this->student_id = student_id;
}

void Grade::setCourseId(const int course_id) {
	this->course_id = course_id;
}

void Grade::setGrade(const char grade) {
	this->grade = grade;
}
