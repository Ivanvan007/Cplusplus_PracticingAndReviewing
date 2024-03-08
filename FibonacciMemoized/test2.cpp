//
// Created by ivani on 08/03/2024.
//
#include <iostream>
using namespace std;


int fibonacci(int number, int cache[] = {})
{
    if (cache[number] != 0)
    {
        return cache[number];
    }

    if(number<=2)
    {
        if(number == 0)
        {
            return cache[number]=0;
        }
        else
        {
            return cache[number]=number;
        }
    }

    int result = fibonacci(number-1, cache) + fibonacci(number -2, cache);
    return cache[number] = result;
}


int main()
{
    const int MAX_NUMBER = 45;
    int cache[MAX_NUMBER + 1] = {};
    const int MAX_NUMBER2 = INT_MAX;
    for (int i = 10; i <= MAX_NUMBER; i++)
    {
        cout<<"The fibonacci value of "<<i<<" is: "<< fibonacci(i, cache)<<" \n"<<endl;
    }
    cout<<"The fibonacci value of "<<MAX_NUMBER<<" is: "<< fibonacci(MAX_NUMBER, cache)<<" \n"<<endl;
    cout<<"------------------------------------\n";
    cout<<MAX_NUMBER2;
}