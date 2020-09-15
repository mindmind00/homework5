#include<iostream>
#include <time.h> 
using namespace std;
int main()
{
    int random, num, x = 1;
       srand(time(NULL));
        random = rand() % 20;
         cout << "-------------------------------------------\n";
        do
        {
            cout << " Enter luckynumber  " << x++ << "(1-20) : ";
            cin >> num;
            if (random != num)
            {
                cout << "This is wrong number\n";
            }
            else if (random == num)
            {
                cout << "Lucky!!!!!!\n";
            }
        }
        while  (random != num);
        cout << "You got 1,000,000 bath!\n";
        cout << "-------------------------------------\n";
        return 0;
}