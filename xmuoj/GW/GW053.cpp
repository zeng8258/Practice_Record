#include <iostream>
using namespace std;
void SwapMemory(void * m1,void * m2, int size)
{
// 在此处补充你的代码
    char tmp, *tmp1 = (char*)m1, *tmp2 = (char*)m2;
    for (int i = 0; i < size; i++) tmp = tmp1[i], tmp1[i] = tmp2[i], tmp2[i] = tmp;
}

void PrintIntArray(int * a,int n)
{
	for(int i = 0;i < n; ++i)
		cout << a[i] << ",";
	cout << endl;
}

int main()
{
	int a[5] = {1,2,3,4,5};
	int b[5] = {10,20,30,40,50};
	SwapMemory(a,b,5 * sizeof(int));
	PrintIntArray(a,5);
	PrintIntArray(b,5);
	char s1[] = "12345";
	char s2[] = "abcde";
	SwapMemory(s1,s2,5);
	cout << s1 << endl;
	cout << s2 << endl;
	return 0;
}