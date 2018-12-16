#include<iostream>
#include<cmath>

using namespace std;
/**
    Abdullahi Yusuf
    LovowAb
    A program that finds Prime numbers
**/
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "List of the numbers below " << n <<endl;

    for(int i = 2; i <= n; i ++){
        for(int j = 2; j * j; j ++)
    {
        if (i % j == 0){
            break;
        }
        else if (j + 1 > sqrt(i))
        {
            cout << i <<endl;
        }
    }
    }
    return 0;
}
