#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int masterTotal = 0;
    int i;
    for (i = 1; i <= 10; i++)
    {
        masterTotal += i;
    }
    cout << "Ans: " << masterTotal << endl;
    return 0;
}