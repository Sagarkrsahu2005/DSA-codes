#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // ye bool ek function ka kaam kreega ki agr iski value/condition change hui toh usse hum ans nikalenge
    bool isprime = 1;

    // yha 2 se starting isliye bo rhi hai bc 1 se toh every num divide hota hai
    for (int i = 2; i < n; i++)
    {
        //n%i isliye dala bc like 7/2 kra toh 1 reminder bachega toh ye prime hua
        if (n % i == 0)
        {
            // cout << n << "This is prime" << endl;
            isprime = 0;
            // break isliye dala bc ye loop ek baar chalke bahar aajae
            break;
        }
    }
    if (isprime == 0)
    {
        cout << "This is not Prime" << endl;
    }
    else
    {
        cout << "This is prime" << endl;
    }
}