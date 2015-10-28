#include<string.h>
#include <bits/stdc++.h>
using namespace std;
int arr[100001];

long long int maxin(long long int a,long long int b){
    if(a>b)return a;
    else return b;
}
long long int coin(long long int n){
    long long int result;
    if(n<=100001&&arr[n]!=-1){
        result=arr[n];
    }
    else{
        result=maxin(n,(coin(n/2)+coin(n/3)+coin(n/4)));

    }
    if(n<100001)arr[n]=result;

    return result;
}
int main()
{

    memset(arr,-1,sizeof(arr));
    long long inp;
    arr[0]=0;
    arr[1]=1;
    int t =1;
    while(scanf("%lld",&inp)!=EOF && t<=10){
        long long int ans=coin(inp);
        printf("%lld\n",ans);
        t++;
    }
    return 0;
}

