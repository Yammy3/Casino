#include<iostream> 
#include<fstream> 
#include<string> 
#include<iomanip>
#include<stdlib.h>
#include <windows.h>
using namespace std;
#ifndef Casino
#define Casino
class CCasino
{
private:
	float m_fpMoney{};
	bool IsAdmin = 0;
	bool IsLogIn = 0;
	string m_sNickname{};
	int m_nPassword = 0;
	int m_nAdminPassword;
public:
	int CreatePassword();
	string CreateNickname();
	bool Accounttype();
	void ShowSite();
	float Register();
	bool LogIn();
};
#endif