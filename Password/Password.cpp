#include <iostream>

/*
* if the password length is 16 characters you can breach into the system
* for examle: aaaaaaaaaaaaaaaa
* becasue we write 16 chars we have no space foe the end string symbol which strcmp relies on
*/

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}
