#include <iostream>
using namespace std;
typedef long long ll;

void prefix_sum(ll arr[], ll pf_sum[], int n)
{
    pf_sum[0] = arr[0];
    for (int i = 1; i < n; i++)
        pf_sum[i] = pf_sum[i - 1] + arr[i];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        int it=0;
        cin >> n;
        ll arr[n];
        ll pf_sum[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            
        prefix_sum(arr, pf_sum, n);

        for (it = 1; it < n; it++)
        {
            if (pf_sum[it - 1] == pf_sum[n - 1] - pf_sum[it])
            {
                ans = it;
                break;
            }
        }
        if(it==n && n!=1)
            cout<<-1<<endl;
        else
            cout << ans+1 << endl;
    }

    return 0;
}
