#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class P1{
	public:
		void f1(){	cout << "Function of P1\n";}
};
class P21:public P1{
	public:
		void f21(){	cout << "Function of P21\n";}
};
class P31:public P21{
	public:
		void f31(){	cout << "Function of P31\n";}
};
class P41:public P31{
	public:
		void f41(){	cout << "Function of P41\n";}
};
class XYZ{
	public:
		void fxyz(){	cout << "Function of xyz\n";}
};
int main(){
	P1 *p1 = new P41;
	p1->f1();
	P21 *p21 = (P21*)p1;
	p21->f21();
	XYZ *pxyz = (XYZ*)p1;
	pxyz->fxyz();
	return 0;
}
