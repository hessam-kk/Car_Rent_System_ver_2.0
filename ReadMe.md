# Car_Rent_System_ver_2.0
Hi everyone, today I would like to show you my new project which I'm wroting in C++ at free time.

Car Rent System "CRS" is console aplication. The application allows you to register new users and log into the created accounts. All data is stored in the date_base directory in the project files.
An admin account is created by default.
After logging in to the account, the application allows, depending on the type of account:

ADMIN:
checking the list of cars
adding a car
car fall asleep
updating the car's data
checking the list of users and their data
checking account / vehicle history
deletion of the account
adding another administrator

USER:
rent a vehicle
update account details
checking account history
account termination

Each action in the application will generate an entry in the logs.

The application is divided into smaller elements (files) which allows you to organize the code.

Main.cpp -> main project file.

Definition_Log_in.cpp 	-> file with function definitions of a given class.
Definition_Sign_in.cpp 	-> file with function definitions of a given class.
Definition_User.cpp 	-> file with function definitions of a given class.
Definition_Admin.cpp 	-> file with function definitions of a given class.
Definition_Server.cpp 	-> file with function definitions of a given class.
Definition_Others.cpp 	-> file with function definitions of a given class.

Log_in.h 	-> file with class headers.
Sign_in.h 	-> file with class headers.
User.h 		-> file with class headers.
Admin.h 	-> file with class headers.
Server.h 	-> file with class headers.
Others.h 	-> file with class headers.

Currently, the project is in the Pre-Alfa phase, so it has not yet achieved any functionalities, and the above-mentioned functions are design assumptions.
You can find out about all changes by checking the current page.
