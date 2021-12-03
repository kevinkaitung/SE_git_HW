#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int kevinTotal = 0;
    int i;
    for (i = 1; i <= 10; i++)
    {
        kevinTotal += i;
    }
    cout << "Ans: " << kevinTotal << endl;
    return 0;
}