#include <iostream>
using namespace std;

int main()
{   
    int DegPerSec = 6; //1 RPM = 6 degree/second
    int rpm = 3000, x;
    
    cout << "An Ball is spinning and creates 3000 revolutions per minutes.\nCalculate the degrees it rotates in one second.\n\n";

    x = rpm * DegPerSec; // 3000 * 6

    cout << rpm << " RPM" << " = " << x << " deg/sec"; // rotation of ball per second

    return 0;
}