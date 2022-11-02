//just a student already "played" with numbers...
#include <bits/stdc++.h>

using namespace std;
int a[10001];
void out(int n, int a[])    // Ouput function
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
}
int main()
{
    int n, countx = 0;
    cin >> n;
    for (int k = 1; k <= n; k++)
    {
        a[k] = 0;
        cout << a[k];      // First n-Element binary number : 000...0
    }
    cout << endl;
    while (countx != pow(2,n)-1)   //  there are {2^n} n-Element binary numbers.
    {
        for (int i = n; i >= 1; i--)
        {
            if(a[i] == 0)
            {
                a[i] = 1;
                for (int j = i+1; j <= n; j++)
                {
                    a[j] = 0;
                }
                out(n,a);
                cout << endl;
                countx++;
                break;
            }
        }
    }
    return 0;
}
