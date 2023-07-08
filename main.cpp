#include "CLast.h"

int main() {
	CLast game1;
	CAdmin game2;
	CUser game3;
	float m_fpMoney, av;
	game1.Screen();
	m_fpMoney = game1.Register();
	cout << m_fpMoney;
	while (true)
	{
	game1.Loading();
	av = m_fpMoney;
	cout << "Play - press 1" << endl;
	cout << "Data - press 2" << endl;
	cout << "Community - press 3" << endl;
	int c;
	cin >> c;
	if (c == 1)
	{
		std::system("cls");
		cout << "Game 1 - press 1" << endl;
		cout << "Game 2 - press 2" << endl;
		cout << "Game 3 - press 3" << endl;
		int a;
		cin >> a;
		if (a == 1)
		{
			game1.Game1(m_fpMoney);
		}
		if (a == 2)
		{
			game1.Game2(m_fpMoney);
		}
		if (a == 3)
		{
			game1.Game3(m_fpMoney);
		}
		//cout << "av = " << av << endl;
		av = av - m_fpMoney;
		game1.GetMoney(m_fpMoney);
		game1.Loading();
		game1.Exit();
		cout << "av = " << av << endl;
		m_fpMoney = av;
		break;
	}
	if (c == 2)
	{
		std::system("cls");
		cout << "All Account Info - press 1" << endl;
		cout << "Show casino money - press 2" << endl;
		cout << "Account Info - press 3" << endl;
		int b;
		cin >> b;
		if (b == 1)
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
					break;
				}
				cout << setw(9) << "IsAdmin" << setw(9) << "Money" << setw(9) << "Nickname" << setw(9) << "Password" << endl;
				cout.width(9); cout << IsAdmin; cout.width(9); cout << m_fpMoney; cout.width(9); cout << m_pszNickname; cout.width(9); cout << m_nPassword; cout << endl;
			}
			infile.close();
			cout << "------------------------------------" << endl;
		}
		if (b == 2)
		{
			game2.ShowCasinoMoney();
		}
		if (b == 3)
		{
			game3.AccountInfo();
		}

	}
	if (c == 3)
	{
		std::system("cls");
		cout << "To Comment - press 1" << endl;
		cout << "Show Site - press 2" << endl;
		cout << "To get help - press 3" << endl;
		int n;
		cin >> n;
		if (n == 1)
		{
			game3.CommentSite();
		}
		if (n == 2)
		{
			game1.ShowSite();
		}
		if (n == 3)
		{
			game1.Help();
		}
	}
	cin >> c;
	game1.Loading();
	game1.Exit();
	cin >> c;
	if (c = 1)
	{
		break;
	}
}
int b;
cin >> b;
}