/* C867Final.cpp
   Scripting and Programming - Applications C867
   Aaron Cuddeback
   Student ID# 000927044
*/

#pragma once
#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include "Student.h"

class SecurityStudent : public Student {
public:
	SecurityStudent();

	SecurityStudent(string, string, string, string, int, int*, Degree);

	Degree getDegree() override;

	void print() override;
private:
	Degree degree;
};


#endif //SECURITYSTUDENT_H

