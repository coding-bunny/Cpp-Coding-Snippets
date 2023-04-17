#pragma once

#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <stdint.h>

/// <summary>
/// This class represents a Course that a Student can take.
/// This is the second class from the programming challenge in Chapter 3.
/// 
/// The class requires the following members:
///		* integer for the ID
///		* string for the name
///		* 8 bit integer for the credits
/// </summary>
class Course
{
private:
	int id;
	std::string name;
	std::uint8_t credits;

public:
	Course(const int id, const std::string name, const std::uint8_t credits);

	const int getId();
	const std::string getName();
	const std::uint8_t getCredits();

	void setId(const int id);
	void setName(const std::string name);
	void setCredits(const std::uint8_t);
};

#endif
