#include "CLast.h"
void CLast::Loading()
{
	for (int i = 0; i < 3; i++)
	{
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading\n\n\n\n\n\n\n\n";
		Sleep(500);
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading.\n\n\n\n\n\n\n\n";
		Sleep(500);
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading..\n\n\n\n\n\n\n\n";
		Sleep(500);
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...\n\n\n\n\n\n\n\n";
		Sleep(500);
		system("cls");
	}
}
void CLast::Screen()
{
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n" << std::endl;
    std::cout <<"\t\t\t\t  ******    ******   *******  *******  **     **     ******* "<< std::endl;
	std::cout <<"\t\t\t\t **    **  **    ** **     **   ***    ***    **    **     **"<< std::endl;
	std::cout <<"\t\t\t\t **        **    ** **          ***    ** *   **    **     **"<< std::endl;
	std::cout <<"\t\t\t\t **        ********  ********   ***    **  *  **    **     **"<< std::endl;
	std::cout <<"\t\t\t\t **        **    **        **   ***    **   * **    **     **"<< std::endl;
	std::cout <<"\t\t\t\t **    **  **    ** **     **   ***    **    ***    **     **"<< std::endl;
	std::cout <<"\t\t\t\t  ******   **    **  *******  *******  **     **     *******\n\n\n\n\n\n\n\n "<< std::endl;
	std::cout << "\t\t\t\t\t\t  press any button to start... \n\n\n\n\n\n\n" << std::endl;
	getchar();
}
void CLast::Play()
{
	std::system("cls");
	cout << "Game 1 - press 1" << endl;
	cout << "Game 2 - press 2" << endl;
	cout << "Game 3 - press 3" << endl;
	int c;
	std::cin >> c;
	if (c = 1)
	{
		CUser Game1(float m_fpMoney);
	}
	if (c = 2)
	{
		CUser Game2(float m_fpMoney);
	}
	if (c = 3)
	{
		CUser Game3(float m_fpMoney);
	}
	float GetMoney(float m_fpMoney);
}
void CLast::Community() 
{
	std::system("cls");
	cout << "To Comment - press 1" << endl;
	cout << "Show Site - press 2" << endl;
	cout << "To get help - press 3" << endl;
	int c;
	std::cin >> c;
	if (c = 1)
	{
		void CommentSite();
	}
	if (c = 2)
	{
		void ShowSite();
	}
	if (c = 3)
	{
		void Help();
	}
}
void CLast::Data()
{
	std::system("cls");
	cout << "All Account Info - press 1" << endl;
	cout << "Show casino money - press 2" << endl;
	cout << "Account Info - press 3" << endl;
	int c;
	std::cin >> c;
	if (c = 1)
	{
		int AccountSInfo();
	}
	if (c = 2)
	{
		int ShowCasinoMoney();
	}
	if (c = 3)
	{
		int AccountInfo();
	}
}
void CLast::Exit()
{
	
	std::system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n" << std::endl;
	std::cout << "\t\t\t\t  ******    ******   *******  *******  **     **     ******* " << std::endl;
	std::cout << "\t\t\t\t **    **  **    ** **     **   ***    ***    **    **     **" << std::endl;
	std::cout << "\t\t\t\t **        **    ** **          ***    ** *   **    **     **" << std::endl;
	std::cout << "\t\t\t\t **        ********  ********   ***    **  *  **    **     **" << std::endl;
	std::cout << "\t\t\t\t **        **    **        **   ***    **   * **    **     **" << std::endl;
	std::cout << "\t\t\t\t **    **  **    ** **     **   ***    **    ***    **     **" << std::endl;
	std::cout << "\t\t\t\t  ******   **    **  *******  *******  **     **     *******\n\n\n\n\n\n\n\n " << std::endl;
	std::cout << "\t\t\t\t\t\t  press 1 button to end... \n\n\n\n\n\n\n" << std::endl;
}