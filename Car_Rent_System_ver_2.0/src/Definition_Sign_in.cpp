#include "Sign_in.h"

/*
 * DEFINITION PUBLIC FUNCTION CLASS REGISTRATION
 */

registration::registration() // Constructor class registration.
{
	login_ = "login";
	password_ = "password";
	repeat_password_ = "repeat_password";
	email_ = "email";
	repeat_email_ = "repeat_email";
	name_ = "name";
	surname_ = "surname";
	date_of_birthday_ = "date_of_birthday";
	phone_number_ = "phone_number";
}

registration::~registration() // Destructor class registration.
{

}

bool registration::sign_in() // Function that calls up other functions needed to register new account.
{
	bool end_loop = true;
	do
	{
		enter_login();
		if (validation_login())
		{
			if (!is_user_exist(login_))
			{
				end_loop = false;
				continue;
			}
			feedback_message("Successful Registration!");
		}
	}while (end_loop);
	end_loop = true;
	do
	{
		enter_password();
		if (validation_password())
		{
			end_loop = false;
		}
	}while (end_loop);
	end_loop = true;
	do
	{
		enter_email();
		if (validation_email())
		{
			end_loop = false;
		}
	}
	while (end_loop);
	enter_personal_details();
	if (!add_new_account_to_date_base(login_, password_, email_, name_, surname_, date_of_birthday_, phone_number_))
	{
		feedback_message("Registration Failed!");
		return false;
	}
	feedback_message("Successful Registration!");
	return true;
}

/*
 * DEFINITION PRIVATE FUNCTION CLASS REGISTRATION
 */

void registration::enter_login() //Entering login for new account.
{
	system("cls");
	cout << "User name must include minimum 4 characters. (Don't use space bar.)\n\n";
	cout << "Enter your login: ";
	cin >> login_;
	cin.ignore();
	system("cls");
}

void registration::enter_password() //Entering password for new account.
{
	cout << "\n Password must include minimum 8 characters, 1 big letters and 1 digit. (Don't use space bar.)\n\n";
	cout << "\nEnter your password: ";
	cin >> password_;
	cin.ignore();
	cout << "\nRepeat password: ";
	cin >> repeat_password_;
	cin.ignore();
	system("cls");
}

bool registration::validation_login()
{
	if (login_.length() <= 3)
	{
		feedback_message("Login is to short. Use minimum 4 characters. (Don't use space bar.)\n");
		return false;
	}
	return true;
}

bool registration::validation_password() //TODO IMPROVE VALIDATION (ADD isupper() / isdigit() / etc.).
{
	if (password_ != repeat_password_)
	{
		feedback_message("Password aren't the same.\n");
		return false;
	}
	if (password_.length() <= 7)
	{
		feedback_message("Password is to short. Use minimum 8 characters, 1 big letters and 1 digit. (Don't use space bar.)\n");
		return false;
	}
	return true;
}

void registration::enter_email()
{
	cout << "Enter your email: ";
	cin >> email_;
	cin.ignore();
	cout << "\nRepeat your email: ";
	cin >> repeat_email_;
	cin.ignore();
	system("cls");
}

bool registration::validation_email()
{
	if (email_ != repeat_email_)
	{
		feedback_message("Email aren't the same!");
		return false;
	}
	return true;
}

void registration::enter_personal_details()
{
	cout << "Enter your name: ";
	cin >> name_;
	cin.ignore();
	cout << "\nEnter your surname: ";
	cin >> surname_;
	cin.ignore();
	cout << "\nEnter your date of birthday: ";
	cin >> date_of_birthday_;
	cin.ignore();
	cout << "\nEnter your phone number: ";
	cin >> phone_number_;
	cin.ignore();
	system("cls");
}
