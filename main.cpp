// Complete the following program.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int exp, flag = 0;
    cin >> exp;
    double power = 1.0;
    
    if (exp < 0){
        exp = -exp;
        flag = 1; 
    }

    for (int i = 0; i < exp; i++)
        power *= 2;
    if (flag ==1)
        power = 1/power;
    cout << fixed << setprecision(2);
    cout << "Power of 2: " << power << endl;
        
}

