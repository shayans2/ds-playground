#include "iostream"
using namespace std;

void func1(int numVal)
{
    numVal = numVal * 2;
    cout << numVal << '\n';
}

int main()
{
    int num = 5;
    func1(num);
    cout << num << '\n';
    return 0;
}