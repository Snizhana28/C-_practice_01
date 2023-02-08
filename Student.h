#include <iostream>
#include <string>

using namespace std;
class Student
{
private:
	string name, date_of_birth;
	int contact_phone;
	string city, country;
	string educational_institution;
	string institution_in_city, institution_in_country;
	int group_number;

public:
	Student(string name, string date_of_birth, int contact_phone,
		string city, string country, string educational_institution,
		string institution_in_city, string institution_in_country, int group_number);

	void set_name(string name);
	string get_name();

	void set_date_of_birth(string date_of_birth);
	string get_date_of_birth();

	void set_contact_phone(int contact_phone);
	int get_contact_phone();

	void set_city(string city);
	string get_city();

	void set_country(string country);
	string get_country();

	void set_educational_institution(string educational_institution);
	string get_educational_institution();

	void set_institution_in_city(string institution_in_city);
	string get_institution_in_city();

	void set_institution_in_country(string institution_in_country);
	string get_institution_in_country();

	void set_group_number(int group_number);
	int get_group_number();

	void Print();
	~Student();
};
