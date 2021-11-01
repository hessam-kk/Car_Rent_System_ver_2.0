#include "Sign_in.h"

int main()
{
	system("cls");
	cout << "CAR RENT SYSTEM!\n";
	cin.get();
	while(true)
	{
		auto* account_type = new int;
		auto* login = new std::string;
		bool login_successful = false;
		while (login_successful != true)
		{
			system("cls");
			cout << "1. Log In.\n";
			cout << "2. Sign In.\n";
			cout << "3. Exit.\n";
			switch (_getch())
			{
				case '1':
				{

				}
				break;
				case '2':
				{
					registration sign_in;
					sign_in.sign_in();
				}
				break;
				case '3':
				{
					_exit(0);
				}
				default:
				{

				}
				break;
			}
		}
	}
}