#pragma once

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

/// <summary>
/// This class represents the Student, and is part of the programming challenge in section 3: Structures, Classes and Pointers.
/// This class requires the following members:
///		* int for the ID
///		* String for the name
/// </summary>
class Student
{
private:
	int id;
	std::string name;

public:
	Student();
	Student(const int id, const std::string name);

	const int getId();
	const std::string getName();

	void setId(const int id);
	void setName(const std::string name);
};

#endif
