#pragma once
#include <iostream>
class DBHelper
{
public:
	DBHelper();
	~DBHelper();
	void * statement(std::string statement); //basic execution of a statement in 
											 //the database, with the return value being a void pointer which contains the data.

private:

};

