#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

int arr[MAX],len=0;

int checkLucky(int n){
    while(n>0){
        int rem=n%10;
        if(rem!=4 && rem!=7) return 0;
        n/=10;
    }
    return 1;
}

void luckyNumbers(){
    for(int i=1;i<=MAX;i++){
        if(checkLucky(i)){
            arr[len++]=i;
        }
    }
}

int main(){
    luckyNumbers();

    int n;
    cin>>n;

    int paisi=0;
    for(int i=0;i<len;i++){
        if(n%arr[i]==0){
            printf("YES\n");
            paisi=1;
            break;
        }
    }
    if(!paisi) printf("NO\n");

}
