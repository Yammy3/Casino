#include "CAdmin.h"
void CAdmin::ShowMoney(float m_fpMoney)
{
	cout << "You have: " << m_fpMoney << endl;
}
int CAdmin::ShowCasinoMoney()
{
	cout << "------------------------------------" << endl;
	string Nickname{}, m_pszNickname{};
	int Password{}, m_nPassword{};
	bool IsAdmin{};
	float m_fpMoney{};
	cout << "All Users Info" << endl;
	fstream infile;
	infile.open("Users.txt");
	if (!infile)
	{
		cout << "Cannot open file" << endl;
		return -1;
	}
	cout << setw(9) << "Money" << setw(9) << "Casino" << endl;
	while (!infile.eof()) {
		infile >> IsAdmin;
		infile >> m_fpMoney;
		infile >> m_pszNickname;
		infile >> m_nPassword;
		m_fpAllMoney = m_fpAllMoney - m_fpMoney;
		if (infile.eof())
		{
			infile.close();
			return 0;
		}
		cout.width(9); cout << m_fpMoney; cout.width(9); cout << m_fpAllMoney; cout << endl;
	}
	infile.close();
	cout << "------------------------------------" << endl;
	return 0;
}
int CAdmin::AccountSInfo()
{
	cout << "------------------------------------" << endl;
	string Nickname{}, m_pszNickname{};
	int Password{}, m_nPassword{};
	bool IsAdmin{};
	float m_fpMoney{};
	cout << "All Users Info" << endl;
	fstream infile;
	infile.open("Users.txt");
	if (!infile)
	{
		cout << "Cannot open file" << endl;
		return -1;
	}
	while (!infile.eof()) {
		infile >> IsAdmin;
		infile >> m_fpMoney;
		infile >> m_pszNickname;
		infile >> m_nPassword;
		if (infile.eof())
		{
			infile.close();
			return 0;
		}
		cout << setw(9) << "IsAdmin" << setw(9) << "Money" << setw(9) << "Nickname" << setw(9) << "Password" << endl;
		cout.width(9); cout << IsAdmin; cout.width(9); cout << m_fpMoney; cout.width(9); cout << m_pszNickname; cout.width(9); cout << m_nPassword; cout << endl;
	}
	infile.close();
	cout << "------------------------------------" << endl;
	return 0;
}
int CAdmin::AccountInfo()
{
	string Nickname{}, m_pszNickname{};
	int Password{}, m_nPassword{};
	bool IsAdmin{};
	float m_fpMoney{};
	cout << "AccountInfo" << endl;
	cout << "Nickname:";
	cin >> Nickname;
	fstream infile;
	infile.open("Users.txt");
	if (!infile)
	{
		cout << "Cannot open file" << endl;
		return -1;
	}
	while (!infile.eof()) {
		infile >> IsAdmin;
		infile >> m_fpMoney;
		infile >> m_pszNickname;
		infile >> m_nPassword;
		if (m_pszNickname == Nickname)
		{
			cout << setw(9) << "IsAdmin" << setw(9) << "Money" << setw(9) << "Nickname" << setw(9) << "Password" << endl;
			cout.width(9); cout << IsAdmin; cout.width(9); cout << m_fpMoney; cout.width(9); cout << m_pszNickname; cout.width(9); cout << m_nPassword; cout << endl;
		}
		if (infile.eof())
		{
			infile.close();
			return 0;
		}
	}
	infile.close();
	return 0;
}
void CAdmin::CommentSite()
{
	cout << "Write your comment (use _ instead of space):";
	string row{};
	cin >> row;
	cout << row;
	fstream outfile("Site.txt", ios::app);
	if (!outfile)
	{
		cout << "Cannot open file" << endl;
	}
	outfile.setf(ios::left);
	outfile << row << endl;
	outfile.close();
}