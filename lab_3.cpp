#include<math.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
	double multip = 1;
	int minplu=1;
	int n;
	printf_s("n=");
	scanf_s("%d", &n);
	for(int k = 1; k<n; k++)
	{
		double modl = (n - k) / pow(k, k);
		multip*= minplu*modl;
		minplu *= -1;
	}
	printf_s("Mult=%g", multip);
	system("pause");
}
