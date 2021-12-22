#include <iostream>

using namespace std;

int main()
{
	//array배열 선언[n] = { 1,2,3,4,5,6......n }
	int Sum = 0;

	//식을 구상하는 방법
	//Sum = Sum +2
	//Sum = Sum +3
	//Sum = Sum +4
	//Sum = Sum +5
	//Sum = Sum +6
	//....
	//Sum = Sum +100

	//노가다...식을 머리로 구상하고 함축(공통분모를 찾는다) 시킨다

	for (int n = 1; n <= 100;++n)
	{
		Sum = Sum + n;
	}



	cout << sum << endl;

	return 0;
}
