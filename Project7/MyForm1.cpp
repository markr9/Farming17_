#include "MyForm1.h"
#include <Windows.h>
using namespace Project7;
int __stdcall WinMain(HINSTANCE hInst, HINSTANCE hPInst,
	LPSTR lpCmdLine, int nCmdShow)
{
	MyForm1 frm;
	frm.ShowDialog();
	return 0;
}

//vector<int> Project7::MyForm1::p1(int)
//{
	//return vector<int>();
//}
