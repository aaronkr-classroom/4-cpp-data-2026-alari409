#pragma once
// Student_info.h

#ifndef GUARD_STUDENT_info_h
#define GUARD_STUDENT_info_h

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student_info
{
	string name;
	double midterm, final;
	vector<double> homework;
}

//함수 원형 정의
bool compare(const Student_info&, const Student_info&);
istream& read(istream&, Student_info&);
istream& read_hw(istream&, vector<double>&);
#endif // GUARD_STUDENT_INFO_H