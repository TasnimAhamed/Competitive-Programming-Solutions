#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int store[a + 5];
        int z = 0;
        for (int i = 0; i < a; i++)
        {
            char arr[4];
            for (int j = 0; j < 4; j++)
            {
                cin >> arr[j];
            }

            for (int k = 0; k < 4; k++)
            {
                if (arr[k] == '#')
                {
                    store[z] = k + 1;
                    z++;
                    break;
                }
            }
        }

        for(int i = a -1; i>=0; i--){
            cout << store[i] << " ";
        }
        cout << "\n";
    }
}
