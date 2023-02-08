#include "Student.h"

Student::Student(string name, string date_of_birth, int contact_phone,
	string city, string country, string educational_institution,
	string institution_in_city, string institution_in_country, int group_number)
{
	cout << "Constructor with param!" << endl;
	set_name(name);
	set_date_of_birth(date_of_birth);
	set_contact_phone(contact_phone);
	set_city(city);
	set_country(country);
	set_educational_institution(educational_institution);
	set_institution_in_city(institution_in_city);
	set_institution_in_country(institution_in_country);
	set_group_number(group_number);

}
void Student::set_name(string name)
{
	this->name = name;
}
string Student::get_name()
{
	getline(cin, name);
	if (name.size() != 0)
		return name;
	else {
		return "Empty string value!";
	}
}
void Student::set_date_of_birth(string date_of_birth)
{
	this->date_of_birth = date_of_birth;
}
string Student::get_date_of_birth()
{
	getline(cin, date_of_birth);
	if (date_of_birth.size() != 0)
		return date_of_birth;
	else {
		return "Empty string value!";
	}
}

void Student::set_contact_phone(int contact_phone)
{
	this->contact_phone = contact_phone;
}
int Student::get_contact_phone()
{
	cin >> contact_phone;
	cin.ignore();
	if (contact_phone > 0)
		return contact_phone;
	else {
		cout << "Empty int value!";
	}
}

void Student::set_city(string city)
{
	this->city = city;
}
string Student::get_city()
{
	getline(cin, city);
	if (city.size() != 0)
		return city;
	else {
		return "Empty string value!";
	}
}

void Student::set_country(string country)
{
	this->country = country;
}
string Student::get_country()
{
	getline(cin, country);
	if (country.size() != 0)
		return country;
	else {
		return "Empty string value!";
	}
}

void Student::set_educational_institution(string educational_institution)
{
	this->educational_institution = educational_institution;
}
string Student::get_educational_institution()
{
	getline(cin, educational_institution);
	if (educational_institution.size() != 0)
		return educational_institution;
	else {
		return "Empty string value!";
	}
}

void Student::set_institution_in_city(string institution_in_city)
{
	this->institution_in_city = institution_in_city;
}
string Student::get_institution_in_city()
{
	getline(cin, institution_in_city);
	if (institution_in_city.size() != 0)
		return institution_in_city;
	else {
		return "Empty string value!";
	}
}

void Student::set_institution_in_country(string institution_in_country)
{
	this->institution_in_country = institution_in_country;
}
string Student::get_institution_in_country()
{
	getline(cin, institution_in_country);
	if (institution_in_country.size() != 0)
		return institution_in_country;
	else {
		return "Empty string value!";
	}
}

void Student::set_group_number(int group_number)
{
	this->group_number = group_number;
}
int Student::get_group_number()
{
	cin >> group_number;
	if (group_number > 0)
		return group_number;
	else {
		cout << "Empty int value!";
	}
}

void Student::Print() {
	cout << "FIO: " << name << endl;
	cout << "Date of birth: " << date_of_birth << endl;
	cout << "Contact phone: " << contact_phone << endl;
	cout << "City: " << city << endl;
	cout << "Country: " << country << endl;
	cout << "Educational institution: " << educational_institution << endl;
	cout << "Institution in city: " << institution_in_city << endl;
	cout << "Institution in country: " << institution_in_country << endl;
	cout << "Group number: " << group_number << endl;
}

Student::~Student()
{
	cout << "Destructor!" << endl;
	name.clear();
	date_of_birth.clear();
	city.clear();
	country.clear();
	educational_institution.clear();
	institution_in_city.clear();
	institution_in_country.clear();

}