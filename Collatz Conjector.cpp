#include <iostream>
#define ll long long
using namespace std;


int main() 
{
	ll N;
	cout << "Input Integer Number Here: ";
	cin >> N;
	while (N != 1) {
		cout <<N << " ";
		if ((N & 1) == 0)
			N >>= 1;
		else 
			N = N * 3 + 1;
	}
	cout << 1 << endl;

	system("pause");
	return 0;
}