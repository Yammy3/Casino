#include "CUser.h"
void CUser::ShowMoney(float m_fpMoney)
{
	cout << "You have: " << m_fpMoney << endl;
}
float CUser::GetMoney(float m_fpMoney)
{
	int card;
	cout << "You have: " << m_fpMoney << endl;
	cout << "Enter your card: ";
	cin >> card;
	cout << "We send: " << m_fpMoney << " to card" << card << endl;
	return m_fpMoney = 0;
}
int CUser::AccountInfo()
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
void CUser::CommentSite()
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
void CUser::Help()
{
	system("cls");
	cout << "Ask for help (use _ instead of space):";
	string row{};
	cin >> row;
	cout << row;
	fstream outfile("Help.txt", ios::app);
	if (!outfile)
	{
		cout << "Cannot open file" << endl;
	}
	outfile.setf(ios::left);
	outfile << row << endl;
	outfile.close();
}
float CUser::Game1(float m_fpMoney)
{
	system("cls");
	m_sGame1Arr = new int[12];
	for (i = 0; i < 11; i++)
	{
		m_sGame1Arr[i] = rand() % 20;
		//cout << i + 1 << " = " << m_sGame1Arr[i] << " -- " << endl;
	}
	cout << "Choose: 1 - smaller, 2 - bigger, 3 - exit " << endl;
	cout << "Choose bet: 1 - 10, 2 - 20, 3 - 50, 4 - 100:  " << endl;
	cin >> c;
	if (c == 1)
	{
		b = 10;
		m_fpMoney = m_fpMoney - b;
	}
	if (c == 2)
	{
		b = 20;
		m_fpMoney = m_fpMoney - b;
	}
	if (c == 3)
	{
		b = 50;
		m_fpMoney = m_fpMoney - b;
	}
	if (c == 4)
	{
		b = 100;
		m_fpMoney = m_fpMoney - b;
	}
	if (m_fpMoney < 0)
	{
		cout << "You have not enough money" << endl;
		m_fpMoney = m_fpMoney + b;
		b = 0;
		i++;
	}
	for (i = 0; i < 10; i++)
	{
		cout << "Current number -- " << m_sGame1Arr[i] << " -- ";
		cin >> c;
		if (c == 1)
		{
			if (m_sGame1Arr[i] >= m_sGame1Arr[i + 1])
			{
				m_fpMoney = m_fpMoney + b/3;
				cout << "You win:  " << m_fpMoney << endl;
			}
			if (m_sGame1Arr[i] < m_sGame1Arr[i + 1])
			{
				m_fpMoney = m_fpMoney - b;
				cout << "You lose:  " << m_fpMoney << endl;
			}
		}
		if (c == 2)
		{
			if (m_sGame1Arr[i] <= m_sGame1Arr[i + 1])
			{
				m_fpMoney = m_fpMoney + b/3;
				cout << "You win:  " << m_fpMoney << endl;
			}
			if (m_sGame1Arr[i] > m_sGame1Arr[i + 1])
			{
				m_fpMoney = m_fpMoney - b;
				cout << "You lose:  " << m_fpMoney << endl;
			}
		}
		if (c == 3)
		{
			i = 10;
		}
	}
	return m_fpMoney;
}
float CUser::Game2(float m_fpMoney)
{
	system("cls");
	cout << "Game2" << endl;
	int x1, x2, x3;
	for (i = 0; i < 10; i = i)
	{
		cout << "Choose bet: 1 - 10, 2 - 20, 3 - 50, 4 - 100:  " << endl;
		cin >> c;
		if (c == 1)
		{
			b = 10;
			m_fpMoney = m_fpMoney - b;
		}
		if (c == 2)
		{
			b = 20;
			m_fpMoney = m_fpMoney - b;
		}
		if (c == 3)
		{
			b = 50;
			m_fpMoney = m_fpMoney - b;
		}
		if (c == 4)
		{
			b = 100;
			m_fpMoney = m_fpMoney - b;
		}
		if (m_fpMoney < 0)
		{
			cout << "You have not enough money" << endl;
			m_fpMoney = m_fpMoney + b;
			b = 0;
			i++;
		}
		cout << "bet == " << b << " Money == " << m_fpMoney << endl;
		x1 = rand() % 5;
		x2 = rand() % 5;
		x3 = rand() % 5;
		cout << "( " << x1 << " )" << "( " << x2 << " )" << "( " << x3 << " )" << endl;
		if (x1 == x2 && x1 != x3)
		{
			b = b * 1.5;
			m_fpMoney = m_fpMoney + b;
			cout << " You have 2 same numbers " << endl;
			cout << " Your bet is multiplied by 1.5 == " << b << endl;
		}
		if (x2 == x3 && x1 != x2)
		{
			b = b * 1.5;
			m_fpMoney = m_fpMoney + b;
			cout << " You have 2 same numbers " << endl;
			cout << " Your bet is multiplied by 1.5 == " << b << endl;
		}
		if (x1 == x3 && x1 != x2)
		{
			b = b * 1.5;
			m_fpMoney = m_fpMoney + b;
			cout << " You have 2 same numbers " << endl;
			cout << " Your bet is multiplied by 1.5 == " << b << endl;
		}
		if (x1 == x2 && x2 == x3)
		{
			b = b * 20;
			m_fpMoney = m_fpMoney + b;
			std::cout << "\n\n\n\n\n\n\n\n" << std::endl;
			std::cout << "\t\t\t\t  *******   ******   *******   **   ***   ******    *******   **********" << std::endl;
			std::cout << "\t\t\t\t       **  **    ** **     **  **  **     **   **  **     **      **    " << std::endl;
			std::cout << "\t\t\t\t       **  **    ** **         ** **      **   **  **     **      **    " << std::endl;
			std::cout << "\t\t\t\t       **  ******** **         ****       *******  **     **      **    " << std::endl;
			std::cout << "\t\t\t\t *     **  **    ** **         ** **      **       **     **      **    " << std::endl;
			std::cout << "\t\t\t\t **    **  **    ** **     **  **  **     **       **     **      **    " << std::endl;
			std::cout << "\t\t\t\t  ******   **    **  *******   **   ***   **        *******       **\n\n\n\n " << std::endl;
			cout << " You have 3 same numbers " << endl;
			cout << " Your bet is multiplied by 20 == " << b << endl;
		}
		cout << " Money == " << m_fpMoney << endl;
		cout << "Play again? (1 -- yes, 0 -- no) " << endl;
		int n = 0;
		cin >> n;
		if (n == 1)
		{
			i++;
		}
		if (n == 0)
		{
			i = 10;
		}
	}
	return m_fpMoney;
}
float CUser::Game3(float m_fpMoney)
{
	system("cls");
	cout << "Game3" << endl;
	float x, b;
	int x1, x2, x3;
	for (i = 0; i < 10; i = i)
	{
		cout << "Choose bet: 1 - 10, 2 - 20, 3 - 50, 4 - 100:  " << endl;
		cin >> c;
		if (c == 1)
		{
			b = 10;
			m_fpMoney = m_fpMoney - b;
		}
		if (c == 2)
		{
			b = 20;
			m_fpMoney = m_fpMoney - b;
		}
		if (c == 3)
		{
			b = 50;
			m_fpMoney = m_fpMoney - b;
		}
		if (c == 4)
		{
			b = 100;
			m_fpMoney = m_fpMoney - b;
		}
		if (m_fpMoney < 0)
		{
			cout << "You have not enough money" << endl;
			m_fpMoney = m_fpMoney + b;
			b = 0;
			i++;
		}
		cout << " bet == " << b << " Money == " << m_fpMoney << endl;
		x1 = 1 + rand() % 5;
		x2 = 1 + rand() % 5;
		x3 = 1 + rand() % 5;

		cout << "( " << x1 << " )" << "( " << x2 << " )" << "( " << x3 << " )" << endl;
		x = x1 + x2 + x3;
		if (x > 11)
		{
			b = b * 1.9;
			m_fpMoney = m_fpMoney + b;
			cout << " You score more than 11" << endl;
			cout << " Your bet is multiplied by 1.9 == " << b << endl;
		}
		if (x <= 11)
		{
			b = b * 0;
			m_fpMoney = m_fpMoney + b;
			cout << " You don't score more than 11" << endl;
			cout << " You lose: " << b << endl;
		}
		cout << " You current money: " << m_fpMoney << endl;
		cout << "Play again? (1 -- yes, 0 -- no) " << endl;
		int n = 0;
		cin >> n;
		if (n == 1)
		{
			i++;
		}
		if (n == 0)
		{
			i = 10;
		}
	}
	return m_fpMoney;
};