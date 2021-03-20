#include "Student.h"

Student::Student() {

}

Student::Student(std::string id_, std::string name_, int age_, Gender gender_)
{
	id = id_;
	name = name_;
	age = age_;
	gender = gender_;
}

Student::~Student()
{
}

std::string Student::getID()
{
	return id;
}

std::string Student::getName()
{
	return name;
}

int Student::getAge()
{
	return age;
}

int Student::getGender()
{
	return gender;
}

bool Student::operator==(Student& stu)
{
	return id == stu.id;
}

ostream & operator<<(ostream & out, Student & stu)
{
	out << "ID: "<<stu.getID().data()<<"Name: "<<stu.getName().data();
	return out;
}
