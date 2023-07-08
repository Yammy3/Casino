#include "CCasino.h"
#ifndef User
#define User
class CUser : virtual public CCasino
{
private:
	float b{};
	int c{};
	int i{};
	int* m_sGame1Arr{};
public:
float Game1(float m_fpMoney);
float Game2(float m_fpMoney);
float Game3(float m_fpMoney);
void ShowMoney(float m_fpMoney);
float GetMoney(float m_fpMoney);
int AccountInfo();
void CommentSite();
void Help();
};
#endif