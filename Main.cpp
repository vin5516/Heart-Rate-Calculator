#include "HeartRates.h"
#include<iostream>
#include<stdexcept>

using namespace std;

int main()
{
	HeartRates h("Vinoth ", "Kumar");
	h.getf_name();
	h.getl_name();
	h.name();
	h.get_Age();
	h.get_Maximum_Heart_Rate();
	h.get_Target_Heart_Rate();
	return 0;	
}