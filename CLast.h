#include "CUser.h"
#include "CAdmin.h"
#ifndef Last
#define Last
class CLast : public CUser, CAdmin
{
public:
	void Loading();
	void Screen();
	void Play();
	void Community();
	void Data();
	void Exit();
};
#endif