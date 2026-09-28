#include <iostream>
using namespace std;

void menu()
{
    int choice;

    cout << "\nRestaurant Menu" << endl;
    cout << "1. Pizza" << endl;
    cout << "2. Burger" << endl;
    cout << "3. Pasta" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 4)
    {
        cout << "Thank you!" << endl;
        return;
    }

    cout << "You selected option " << choice << endl;

    menu();   // Recursive call
}

int main()
{
    menu();
    return 0;
}
