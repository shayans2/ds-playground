#include "iostream"
using namespace std;

/*
    This is pass by refrence
*/
// void func1(int &numVal)
// {
//     numVal = numVal * 2;
//     cout << numVal << '\n';
// }

/*
    This is pass by value
*/
void func2(int numVal)
{
    numVal = numVal * 2;
    cout << numVal << '\n';
}

int main()
{
    int num = 5;

    // func1(num);
    func2(num);

    cout << num << '\n';
    return 0;
}
