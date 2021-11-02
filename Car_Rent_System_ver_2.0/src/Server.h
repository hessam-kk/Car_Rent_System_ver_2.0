#pragma once
#ifndef SERVER_h
#include "Others.h"

class server
{
	private:

		bool create_path_to_file(string path, string folder_name);
		void add_log(string path, string message);

	public:

		bool is_user_exist(string login);
		bool add_new_account_to_date_base(string login, string password, string status, string email, string name, string surname, string date_of_birthday, string phone_number);
};

#endif