#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

bool checkBinaryString(int num){
  bool isTrue = true;
  while(num){
    if(num%10 > 1)
      isTrue = false;

    num /= 10;
  }

  return isTrue;
}

int32_t main()
{
  fastio;
  int arr[] = {10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10001,
              10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111};

  int test;
  cin >> test;

  while(test--){
    int n;
    cin >> n;

    if(checkBinaryString(n)){
      cout << "YES" << endl;
      continue;
    }

    bool breaking = true;
    while(breaking){
      bool track = false;
      for(int i = 0; i < 30; ++i){
        if(n % arr[i] == 0){
          n /= arr[i];
          track = true;
        }
        else if(i == 29 && track == false)
          breaking = false;
      }
    }

    if(n == 1)
      cout << "YES" << endl;

    else
      cout << "NO" << endl;
  }


  return 0;
}

