#include "iostream"
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    swap(&arr[0], &arr[1]);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}