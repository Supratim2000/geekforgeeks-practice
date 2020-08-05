//Pasha and Primes solution
#include <iostream>
#include <cstring>
using namespace std;
const int Nmax = 1000000;

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
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int count = 0;
        int ccount[n] = {0};
        for (int i = 0; i < n; i++)
        {
            if (prime[arr[i]])
                ccount[i] = ++count;
            else
                ccount[i] = count;
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l=l-1;r=r-1;
            cout << ccount[r] - ccount[l-1] << endl;
        }
    }
    return 0;
}
