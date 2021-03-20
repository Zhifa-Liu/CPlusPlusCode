#pragma once

#include <iostream>
using namespace std;
enum Gender { Man, Woman };

class Student
{
private:
	std::string id;
	std::string name;
	int age;
	Gender gender;
public:
	Student();
	Student(std::string,std::string,int,Gender);
	~Student();
	std::string getID();
	std::string getName();
	int getAge();
	int getGender();
	friend ostream& operator<<(ostream& out,const Student& stu);
	bool operator==(Student& stu);
};

