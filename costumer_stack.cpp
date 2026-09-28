#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int orders[5];
    stack<int> s;

    cout << "Enter 5 cancelled order numbers:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> orders[i];
        s.push(orders[i]);
    }

    cout << "\nCancelled orders from most recent:" << endl;

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}
