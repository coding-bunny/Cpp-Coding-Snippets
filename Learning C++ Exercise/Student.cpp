#include "Student.h"

Student::Student(const int id, const std::string name) {
	this->id = id;
	this->name = name;
}

const int Student::getId() {
	return this->id;
}

const std::string Student::getName() {
	return this->name;
}

void Student::setId(const int id) {
	this->id = id;
}

void Student::setName(const std::string name) {
	this->name = name;
}
