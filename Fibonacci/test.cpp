#include <iostream>
using namespace std;

int fibonacci(int number)
{
    if(number<=2)
    {
        if(number == 0)
        {
            return 0;
        }
        else
        {
            return number;
        }
    }

    int result = fibonacci(number-1) + fibonacci(number -2);
    return result;
}


int main()
{
    const int MAX_NUMBER = 45;
    const int MAX_NUMBER2 = INT_MAX;
    for (int i = 10; i < MAX_NUMBER; i++)
    {
        cout<<"The fibonacci value of "<<i<<" is: "<< fibonacci(i)<<" \n"<<endl;
    }
    cout<<"The fibonacci value of "<<MAX_NUMBER<<" is: "<< fibonacci(MAX_NUMBER)<<" \n"<<endl;
    cout<<"------------------------------------\n";
    cout<<MAX_NUMBER2;
}

