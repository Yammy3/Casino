#include "CCasino.h"
int CCasino::CreatePassword()
{
	cout << "Create Password:";
	cin >> m_nPassword;
	return m_nPassword;
}
string CCasino::CreateNickname()
{
	cout << "Create Nickname:";
	cin >> m_sNickname;
	return m_sNickname;
}
bool CCasino::Accounttype()
{
	cout << "Enter Admin Password:";
	cin >> m_nAdminPassword;

	if (m_nAdminPassword = 1000)
	{
		
		bool IsAdmin = true;
	}
	else
	{
		bool IsAdmin = false;
	}
	return IsAdmin;
}
void CCasino::ShowSite()
{
	system("cls");
	fstream infile;
	infile.open("Site.txt");
	if (!infile)
	{
		cout << "Cannot open file" << endl;
	}
	string row;
	while (getline(infile, row))
	{
		cout << row << endl;
	}
	infile.close();
}
float CCasino::Register()
{
	system("cls");
	cout << "------------------------------------" << endl;
	string m_sNickname{};
	int m_nPassword{}, m_nAdminPassword{};
	float m_fpMoney;
	bool IsAdmin;
	m_sNickname = CCasino::CreateNickname();
	m_nPassword = CCasino::CreatePassword();
	IsAdmin = CCasino::Accounttype();
	cout << "how much to bet" << endl;
	cin >> m_fpMoney;
	fstream outfile("Users.txt", ios::app);
	if (!outfile)
	{
		cout << "Cannot open file" << endl;
		return -1;
	}
	outfile.setf(ios::left);
	outfile.width(9);
	outfile << IsAdmin << ' ';
	outfile.width(9);
	outfile << m_fpMoney << ' ';
	outfile.width(9);
	outfile << m_sNickname << ' ';
	outfile.width(9);
	outfile << m_nPassword << endl;
	outfile.close();
	cout << "Your register successfully" << endl;
	cout << "------------------------------------" << endl;
	return m_fpMoney;
}
bool CCasino::LogIn() 
{
	cout << "------------------------------------" << endl;
	string Nickname{}, m_sNickname{};
	int Password{}, m_nPassword{};
	bool IsAdmin{}, IsLogIn = false;
	float m_fpMoney{};
	cout << "Log In" << endl;
	cout << "Nickname:";
	cin >> Nickname;
	cout << "Password:";
	cin >> Password;
	fstream infile;
	infile.open("Users.txt");
	if (!infile)
	{
		cout << "Cannot open file" << endl;
		return IsLogIn;
	}
	while (!infile.eof()) {
		infile >> IsAdmin;
		infile >> m_fpMoney;
		infile >> m_sNickname;
		infile >> m_nPassword;
		if (Nickname == m_sNickname)
		{
			if (m_nPassword == Password)
			{
				cout << "You log in" << endl;
				IsLogIn = true;
				break;
			}
			if (m_nPassword != Password)
			{
				cout << "Wrong password" << endl;
				IsLogIn = 0;
				break;
			}
		}
		infile.close();
	
		if (IsLogIn == false)
		{
			cout << "This user isn't registered" << endl;
			return IsLogIn;
		}
	}
	infile.close();
	cout << "------------------------------------" << endl;
	return IsLogIn;
}