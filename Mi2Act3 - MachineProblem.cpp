#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Input any positive integer: ";
    cin >> num;

    while(num != 1)
    {   
        if(num & 1)
            num = num * 3 + 1;
        else
            num = num / 2;

        cout << "Current value is " << num << endl;
    }

    return 0;
}