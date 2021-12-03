#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int total = 0;
    int i;
    for (i = 1; i <= 10; i++)
    {
        total += i;
    }
    cout << "Ans: " << total << endl;
    return 0;
}