#include <iostream>

using namespace std;

int main()
{
	//array�迭 ����[n] = { 1,2,3,4,5,6......n }
	int Sum = 0;

	//���� �����ϴ� ���
	//Sum = Sum +2
	//Sum = Sum +3
	//Sum = Sum +4
	//Sum = Sum +5
	//Sum = Sum +6
	//....
	//Sum = Sum +100

	//�밡��...���� �Ӹ��� �����ϰ� ����(����и� ã�´�) ��Ų��

	for (int n = 1; n <= 100;++n)
	{
		Sum = Sum + n;
	}



	cout << sum << endl;

	return 0;
}
