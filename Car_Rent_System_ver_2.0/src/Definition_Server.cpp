#include "Server.h"

/*
 * DEFINITION PUBLIC FUNCTION CLASS REGISTRATION
 */

bool server::is_user_exist(string login) //Checking is user already exist.
{
	fstream file;
	string path_to_file = "date_base\\users\\" + login + "\\login_details.txt";
	file.open(path_to_file.c_str(), ios::in);
	if (file.good())
	{
		return true;
	}
	file.close();
	return false;
}

bool server::add_new_account_to_date_base(string login, string password, string status, string email, string name, string surname, string date_of_birthday, string phone_number) //Enter account details to file.
{
	if (create_path_to_file("date_base\\users\\", login))
	{
		fstream file;
		file.open("date_base\\users\\" + login + "\\login_details.txt", ios::out);
		file << login << "\n";
		file << password << "\n";
		file << status << "\n";
		file.close();
		file.open("date_base\\users\\" + login + "\\personal_details.txt", ios::out);
		file << email << "\n";
		file << name << "\n";
		file << surname << "\n";
		file << date_of_birthday << "\n";
		file << phone_number << "\n";
		file.close();
		string path_to_file = "date_base\\users\\" + login + "\\logs.txt";
		add_log(path_to_file, "Create account!");
		return true;
	}
	return false;
}


/*
  * DEFINITION PRIVATE FUNCTION CLASS REGISTRATION
  */

bool server::create_path_to_file(string path, string folder_name) //Create new folder.
{
	path += folder_name;
	if (!_mkdir(path.c_str()))
	{
		return true;
	}
	return false;
}

void server::add_log(string path, string message) //Adding new log.
{
	fstream file;
	file.open(path.c_str(), ios::out | ios::app);
	file << message << "\n";
	file.close();
}
