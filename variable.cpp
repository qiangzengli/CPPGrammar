#include <iostream>
using namespace std;

//��������
 extern int a,b,c;

 extern float f;

int main(void)
{
	//��������
	int a,b,c;
	float f;


	//ʵ�ʳ�ʼ��
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