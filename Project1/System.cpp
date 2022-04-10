#include "System.h"
#include<iostream>
#include<string>
#include<vector>
void System::addusers() {
	std::cout << "Enter user details:" << std::endl;
	 char* name = new char[256];
	 DWORD age;
	 char* mail = new char[500];
	 DWORD phone_number;
	 std::string district;

	std::cout << "Enter name:";
	scanf_s("%s", name,256);
	
	std::cout << "Enter age:";
	std::cin >> age;

	std::cout << "Enter mailid:";
	scanf_s("%s", mail, 500);

	std::cout << "Enter phone number:";
	std::cin >> phone_number;

	std::cout << "Enter district:";
	std::cin >> district;

	Userdetails* user = new Userdetails(name, age, mail, phone_number, district);
	userdetails.push_back(user);

	std::cout << "User added successfully " << std::endl;

}

void System::showusers() {

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