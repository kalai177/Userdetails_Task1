#include<iostream>
#include<Windows.h>
#include "System.h"
int main() {
	System sys;
	std::cout << "if you want to add user press 1:";
	DWORD createuser;
	std::cin >> createuser;
	if (createuser == 1) {
		std::cout << "Enter number of users to be added:";
		std::cout << std::endl;
		DWORD num_of_users;
		std::cin >> num_of_users;
		for (DWORD itr = 0; itr < num_of_users; itr++) {
			sys.addusers();
		}
	}

	DWORD showuser;
	std::cout << "If you want to view users detail press 1:";
	std::cin >> showuser;
	if (showuser == 1) {
		sys.showusers();
	}

	DWORD deleteuser;
	std::cout << "If you want ot delete user press 1: ";
	std::cin >> deleteuser;
	if (deleteuser == 1) {
		DWORD how_many_users;
		std::cout << "Enter how many users you want to delete:";
		std::cin >> how_many_users;
		for (DWORD itr = 0; itr < how_many_users; itr++) {
			sys.deleteusers();
		}

	}

	DWORD exit_program;
	std::cout << "If you want to exit program press 1: ";
	std::cin >> exit_program;
	if (exit_program == 1) {
		exit(0);
	}

}