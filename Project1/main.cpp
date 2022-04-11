#include<iostream>
#include<Windows.h>
#include "System.h"

int functionsavailable() {
	std::cout << "Press the following numbers to use the functions:" << std::endl;

	std::cout << "1 - for creating new user" << std::endl;
	std::cout << "2 - for showing all users" << std::endl;
	std::cout << "3 - for delete user" << std::endl;
	std::cout << "4 - for exit" << std::endl;
	DWORD func;
	std::cin >> func;
	return func;
}
int main() {
	System sys;
	std::cout << "if you want to add user press 1:";

functionstarts:

	DWORD executefunc = functionsavailable();
	switch (executefunc) {

	case 1:

		std::cout << "Enter number of users to be added:";
		std::cout << std::endl;
		DWORD num_of_users;
		std::cin >> num_of_users;
		for (DWORD itr = 0; itr < num_of_users; itr++) {
			sys.addusers();
		}
		goto functionstarts;

	case 2:

		sys.showusers();
		goto functionstarts;


	case 3:
		if (sys.userdetails.size() == 0) {
			std::cout << "List is empty, there are no users to be deleted" << std::endl;
			goto functionstarts;

		   }
    		DWORD how_many_users;
			std::cout << "Enter how many users you want to delete:";
			std::cin >> how_many_users;
			for (DWORD itr = 0; itr < how_many_users; itr++) {
				sys.deleteusers();
			}
			goto functionstarts;

	case 4:

		exit(0);

	default:
		goto functionstarts;

	}

}