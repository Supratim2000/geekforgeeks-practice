#Return two prime numbers solution


#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
const int Nmax = 10000;

bool prime[Nmax + 1];

int main()
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= Nmax; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= Nmax; j += i)
                prime[j] = false;
        }
    }

    vector<int> arr;
    for (int i = 2; i <= Nmax; i++)
        if (prime[i])
            arr.push_back(i);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for(int i=0;i<arr.size();i++)
        {
            if(prime[n-arr[i]])
            {
                cout<<arr[i]<<" "<<n-arr[i]<<endl;
                break;
            }
        }
    }

    return 0;
}
