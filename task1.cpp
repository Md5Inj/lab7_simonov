#include <iostream>
#include <ctime>

using namespace std;

void setRandom(int* array, int N)
{
	for (int i = 0; i < N; i++)
	{
		array[i] = rand() % 10 - 5;
	}
}

void print(int* array, int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int* min(int* a1, int n1, int* a2, int n2)
{
    double sr1 = 0, sr2;
    int count = 0, sum = 0;
    for (int i = 0; i < n1; i++)
    {
        sum += a1[i];
        count ++;
    }

    sr1 = sum / count;

    sum = 0; count = 0;

    for (int i = 0; i < n2; i++)
    {
        sum += a2[i];
        count ++;
    }

    sr2 = sum / count;

    return sr1 > sr2? a1 : a2;
}

int main()
{
    const int N1 = 10;
    const int N2 = 10;
    int a[N1];
    int b[N2];

    setRandom(a, N1);
    setRandom(b, N2);

    print(a, N1);
    print(b, N2);

    cout << "Min sr arifm is: " << min(a, b) << endl;

    system("read _");
    return 0;
}