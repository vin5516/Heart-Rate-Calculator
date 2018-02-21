#include<iostream>
#include<stdexcept>

using namespace std;

class HeartRates
{
	string firstName, lastName;
	int date, month, year, Maximum_Heart_Rate, age, year1;
	
	public:

	HeartRates(string, string);

	// void setf_name(); 
	void getf_name();
	
	//void setl_name(); 
	void getl_name();
	
	void name();

	int get_Age();

	int get_Maximum_Heart_Rate();
	int get_Target_Heart_Rate();
	
};