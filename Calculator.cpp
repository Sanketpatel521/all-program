#include <bits/stdc++.h>
using namespace std;
int main()
{
    char choice; // enter your choice as '+' for addition of 2 numbers , '-' for subtraction of 2 numbers, '*' for product of 2 numbers, '/' for division of 2 numbers
    cin >> choice;
    int a, b;
    int ans;
    cin >> a >> b;
    switch (choice)
    {
    case '+':
        ans = a + b;
        cout << ans << endl;
        break;

    case '-':
        ans = a - b;
        cout << ans << endl;
        break;

    case '*':
        ans = a * b;
        cout << ans << endl;
        break;

    case '/':
        ans = a / b;
        cout << ans << endl;
        break;

    default:
        cout << "Wrong choice";
        break;
    }
    return 0;
}
