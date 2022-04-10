#include "Userdetails.h"
#include<vector>
#include<string>
class System {
public:
	std::vector<Userdetails*> userdetails;

	void addusers();
	void showusers();
	void deleteusers();

};