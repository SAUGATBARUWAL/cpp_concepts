#include <iostream>
using namespace std; 

int main()
{
    int i = 10;
    
    for (; i > 0; i--)
    {
        do
        {
            cout << i << " ";
            i++; // Incrementing i here is necessary for the do-while loop to reach the condition i < 5
        } while (i < 5);
    }

    return 0;
}

