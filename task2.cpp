#include <iostream>
#include <ctime>

using namespace std;

void setRandom(int* array, int N)
{
	for (int i = 0; i < N; i++)
	{
		array[i] = rand() % 20 - 10;
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

void Sort(int* arr, int n) {
    bool swapped = true;
    int j = 0;
    int tmp;
    while (swapped) {
        swapped = false;
        j++;
        for (int i = 0; i < n - j; i++) {
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                swapped = true;
            }
        }
    }
}

int main()
{
    const int N = 10;
    int a[N], b[N], c[N];

    setRandom(a, N);
    setRandom(b, N);
    setRandom(c, N);

    print(a, N);
    print(b, N);
    print(c, N);

    int num = 0;

    cout << "Input num of array (0, 1, 2): "; cin >> num;

    switch (num) {
        case 0:
            Sort(a, N);
            print(a, N); 
            break;
        case 1: 
            Sort(b, N);
            print(b, N);
            break;
        case 3: 
            Sort(c, N);
            print(c, N);
            break;
    }

    system("read _");
    return 0;
}