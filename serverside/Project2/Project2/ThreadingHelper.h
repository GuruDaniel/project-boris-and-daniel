#pragma once
#include <iostream>
using namespace std;
class THelper
{
public:
	THelper();
	~THelper();
	void THelper_close_all();
	int THelper_process_client();
	//TODO: add a sub class containing a thread, and order them up in this helper so that the server 
	//can manage these.
private:

};

