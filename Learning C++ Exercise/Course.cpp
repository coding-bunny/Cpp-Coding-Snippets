#include "Course.h"

Course::Course(int id, std::string name, std::uint8_t credits) {
	this->id = id;
	this->name = name;
	this->credits = credits;
}

const int Course::getId() {
	return this->id;
}

const std::string Course::getName() {
	return this->name;
}

const std::uint8_t Course::getCredits() {
	return this->credits;
}

void Course::setId(const int id) {
	this->id = id;
}

void Course::setName(const std::string name) {
	this->name = name;
}

void Course::setCredits(const std::uint8_t credits) {
	this->credits = credits;
}
