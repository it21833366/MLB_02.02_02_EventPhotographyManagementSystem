//It21833366 Wijerathna G.D.K
//Event Photography Management System
//RegisterdUser.h

// #include "Feedback.h"
// #include "Payments.h"

class RegisterdUser
{
	private:
		char name[20];
		char email[20];
		char address[20];
		char dob[20];
		char username[20];
		char password[20];
		int user_id;
		
		// Feedback* fd[0];
		// Payments* pay[1];
		
	public:
		RegisterdUser();
		RegisterdUser(const char pname[],const char pemail[],const char paddress[],const char pdob[],const char pusername[],const char ppassword[],int uId);
		
		void setName(const char pname[]);
		char getName();
		
		void setEmail(const char pemail[]);
		char getEmail();
		
		void setAddress(const char paddress[]);
		char getAddress();
		
		void setDob(const char pdob[]);
		char getDob();
		
		void setUsername(const char pusername[]);
		char getUsername();
		
		void setPassword(const char ppassword[]);
		char getPassword();
		
		int login(int puId);
		void updateProfile(const char pname[],const char pemail[],const char paddress[],const char pdob[],const char pusername[],const char ppassword[]);
		void verifyLogin();
		
		// float makePayements(Payments* pay[]);
		// void givefeedbacks(Feedback* fd[]);
		
		~RegisterdUser();
	
};