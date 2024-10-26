#include <iostream>
using namespace std;

// Assignment - Solving Fun Math Problem using Loops

int main()
{
    int n, sum = 0;
    cout<<"Type a natural number below:\n(Natural numbers are integers starting from 1 till infinity)"<<endl;
    cin>>n;

    for(int i = 1; i<=n; i++)
    {
        sum += i;
    }
    cout<<"The sum of the first "<<n<<" natural numbers is: "<<sum<<endl;
}


