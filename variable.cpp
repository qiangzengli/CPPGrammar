#include <iostream>
using namespace std;

//变量声明
 extern int a,b,c;

 extern float f;

int main(void)
{
	//变量定义
	int a,b,c;
	float f;


	//实际初始化
	a = 10;
	b = 20;
	c = a + b;

	f = 70.0/3.0;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	cout << f << endl;
	


	return 0;

}