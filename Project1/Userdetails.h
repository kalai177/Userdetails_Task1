#include<Windows.h>
#include<string>
#include< IntSafe.h>
#include< WinNT.h>
#include<iostream>
class Userdetails {
private:
	static DWORD uid;
public:
	DWORD id;
	const char* name;
	DWORD age;
	const char* mail;
	DWORD phone_number;
	std::string district;

	Userdetails( char  *namee, DWORD agee, char *maill, DWORD phone_numberr, std::string districtt) {
		this->id = uid;
		this->name = namee;
		this->age = agee;
		this->mail = maill;
		this->phone_number = phone_numberr;
		this->district = districtt;
		Userdetails::uid = uid + 1;
		
	}

	~Userdetails() {
		delete name;
		delete mail;
	}

};




