//It21833366 Wijerathna G.D.K
//Event Photography Management System
//RegisterdUser.cpp

#include "RegisterdUser.h"
// #include "Feedback.h"
// #include "Payments.h"

#include <iostream>
#include <cstring>
using namespace std;

RegisterdUser::RegisterdUser(){
    strcpy(name[],"");
		strcpy(email[],"");
		strcpy(address[],"");
		strcpy(dob[],"");
		strcpy(username[],"");
		strcpy(password[],"");
		user_id=0;
		
} //default constructor

RegisterdUser::RegisterdUser(pname[],pemail[],paddress[],pdob[],pusername[],ppassword[],puId){
	strcpy(name[],pname);
	strcpy(email[],pemail);
	strcpy(address[],paddress);
	strcpy(dob[],pdob);
	strcpy(username[],pusername);
	strcpy(password[],ppassword);
	user_id=puId;

} // overload constructor

//getters
char RegisterdUser::getName(){}
char RegisterdUser::getEmail(){}
char RegisterdUser::getAddress(){}
char RegisterdUser::getDob(){}
char RegisterdUser:: getUsername(){	}
char RegisterdUser::getPassword(){}

//setters
void RegisterdUser::setName(pname[]){}
void RegisterdUser::setEmail(pemail[]){}
void RegisterdUser::setAddress(paddress[]){}
void RegisterdUser::setDob(pdob[]){}		
void RegisterdUser:: setUsername(pusername[]){}
void RegisterdUser::setPassword(ppassword[]){}
		
int RegisterdUser::login(puId){} //login function which use to login the system

void RegisterdUser::updateProfile(pname[],pemail[],paddress[],pdob[],pusername[],ppassword[]){} // use to update the current details in profile page

void RegisterdUser::verifyLogin(){} // verify the login details

// float RegisterdUser::makePayements(Payments* pay[]){} // use to make a payments

// void RegisterdUser::givefeedbacks(Feedback* fd[]){} // use to give a feedback

RegisterdUser::~RegisterdUser(){} // destructor

