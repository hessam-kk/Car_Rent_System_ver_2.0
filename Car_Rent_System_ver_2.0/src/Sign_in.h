#pragma once
#ifndef SIGN_IN_h
#include "Others.h"
#include "Server.h"

class registration : public server
{
	private:

		//Variables
		string login_;
		string password_, repeat_password_;
		string email_, repeat_email_;
		string name_;
		string surname_;
		string date_of_birthday_;
		string phone_number_;

		//Private functions
		void enter_login();
		void enter_password();
		bool validation_login();
		bool validation_password();
		void enter_email();
		bool validation_email();
		void enter_personal_details();

	public:

		//Constructor
		registration();
		//Destructor
		~registration();

		//Public functions
		bool sign_in();
};


#endif