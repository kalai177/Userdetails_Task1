#include "System.h"
#include<iostream>
#include<string>
#include<vector>
void System::addusers() {
	std::cout << "Enter user details:" << std::endl;
	 char* temp_name = new char[256];
	 DWORD age;
	 char* temp_mail = new char[500];
	 DWORD phone_number;
	 std::string district;

	std::cout << "Enter name:";
	scanf_s("%[^\n]s", temp_name,256);
	int size_name = strlen(temp_name);
	char* name = new char[size_name + 1];
	strcpy_s(name, size_name + 1, temp_name);
	delete[] temp_name;

	
	
	std::cout << "Enter age:";
	std::cin >> age;

	std::cout << "Enter mailid:";
	scanf_s("%[^\n]s", temp_mail, 500);
	int size_mail = strlen(temp_mail);
	char* mail = new char[size_mail + 1];
	strcpy_s(mail, size_mail + 1, temp_mail);
	delete[] temp_mail;

	
	std::cout << "Enter phone number:";
	std::cin >> phone_number;

	std::cout << "Enter district:";
	std::cin >> district;

	Userdetails* user = new Userdetails(name, age, mail, phone_number, district);
	userdetails.push_back(user);

	std::cout << "User added successfully " << std::endl;

}

void System::showusers() {

	if (userdetails.size() == 0) {
		std::cout << "There are no users to show" << std::endl;
	}


	for (int itr = 0; itr < userdetails.size(); itr++) {
		Userdetails* user = userdetails[itr];
		std::cout << "Displaying details of user " << itr + 1 << ":" << std::endl;
		std::cout << "User id: " << user->id << std::endl;
		std::cout << "User name: " << user->name << std::endl;
		std::cout << "User age: " << user->age << std::endl;
		std::cout << "User mail_id: " << user->mail << std::endl;
		std::cout << "User phone number: " << user->phone_number << std::endl;
		std::cout << "User district: " << user->district << std::endl;
	}
}

void System::deleteusers() {

	std::cout << "Enter the user id to delete user: ";
	DWORD delete_user_id;
	std::cin >> delete_user_id;
	if (userdetails.size() <= delete_user_id) {
		std::cout << "User id doesn't exist" << std::endl;
	}
	DWORD index = 0;
	for (DWORD itr = 0; itr < userdetails.size(); itr++) {
		Userdetails* user = userdetails[itr];
		if (user->id == delete_user_id) {
			
			delete user;
			index = itr;
			break;
		}
	}

	userdetails.erase(userdetails.begin() + index);
	std::cout << "User deleted successfully";

}