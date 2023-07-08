#include "CCasino.h"
#ifndef Admin
#define Admin
class CAdmin : virtual public CCasino
{
private:
	float m_fpAllMoney = 140000;
public:
	int AccountSInfo();
	int ShowCasinoMoney();
	void ShowMoney(float m_fpMoney);
	void CommentSite();
	int AccountInfo();
};
#endif