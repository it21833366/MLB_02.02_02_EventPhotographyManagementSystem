#include <iostream>
#include <cstring>
#include "RegisterdUser.h"

using namespace std;

int main() {
	
	//create registerd user object
	RegisterdUser* reguser[2];
	reguser[0] = new RegisterdUser();
	reguser[1] = new RegisterdUser("smanali","samanali@gmail.com","no97/5,galle","1999/10/12","samanali@99","Sam@991012",2);
	
	//acces method in Registerd user class
	reguser[0]->getUsername();
	reguser[0]->getPassword();
	reguser[0]->login(12);
	reguser[0]->verifyLogin();
	reguser[0]->updateProfile("sama","sama@gmail.com","no97/5,galle","1999/10/12","sama@99","Sama@991012");
	// reguser[0]->makePayements(payments[0]);
	// reguser[0]->givefeedbacks(feedback[0]);
	
	
	//clear dynamic memory space after complete the process 
	delete reguser[0];
	delete reguser[1];

  
  
return 0;
  
}