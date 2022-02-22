#include <iostream>

using namespace std;

int main()
{
    int user1 = 0, user2 = 0;

    cout << "Numbers? " << endl;

    cin >> user1 >> user2;

    while (user1 <= user2)
    {
        cout << user1 << endl;
        user1++;
    }
    
    return 0;
}