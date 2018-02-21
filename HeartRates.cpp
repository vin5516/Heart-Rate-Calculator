#include "HeartRates.h"

	HeartRates::HeartRates(string fname, string lname)
{
	firstName=fname;
	lastName=lname;
	/* month=m;
	date=d;
	year=y; */	
}

	/* void HeartRates::setf_name(string fname)
	{
	firstName=fname;	
	} */
	
	void HeartRates::getf_name()
	{
	cout<<"Your FirstName is:"<<firstName<<"\n"; 			
	}

	/* void HeartRates::setl_name(string lname)
	{
	lastName=lname;		
	} */
	
	void HeartRates::getl_name()
	{
	cout<<"Your LastName is:"<<lastName<<"\n";
	}	
	
	void HeartRates::name()
	{
	cout<<"Your Full Name is:"<<((firstName)+(lastName))<<"\n";	
	}
	
	int HeartRates::get_Age()
	{
	int a,b;
	cout<<"Enter the month of birth:";	
	cin>>month;	
	cout<<"Enter the date of birth:";	
	cin>>date;
	cout<<"Enter the year of birth:";	
	cin>>year;
	cout<<"Enter the current month:";	
	cin>>a;
	cout<<"Enter the current year:";	
	cin>>b;
	//int currentYear=2018;
	year1=((b)-(year))-1;
	int year2=((12)-(month))+a;
	cout<<"Your date of birth is "<<(month)<<"-"<<(date)<<"-"<<(year)<<"\n";
	cout<<"You are "<<year1<<" years and "<<year2<<" months old"<<"\n";
	return 0;
	}

	int HeartRates::get_Maximum_Heart_Rate()
	{
	//cout<<"I am in maximum heart rate function"<<"\n";	
	Maximum_Heart_Rate=((220)-(year1));
	cout<<"Maximum Heart Rate is "<<Maximum_Heart_Rate<<" beats per minute"<<"\n";		
	return 0;
	}
	
	int  HeartRates::get_Target_Heart_Rate()
	{
	int a,b;
	a=0.50*Maximum_Heart_Rate;
	b=0.85*Maximum_Heart_Rate;
	cout<<"Target Heart Rate ranges from "<<a<<" to "<<b<<" beats per minute"<<"\n";	
	return 0;		
	}
