#include <bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int t,i,j;
    int ng,nm;
    scanf("%d",&t);
    printf("\n");
    while(t>0){
        scanf("%d%d",&ng,&nm);
        int arr1[ng],arr2[nm];
        for (i=0;i<ng;i++){
            scanf("%d",&arr1[i]);
        }
        for(j=0;j<nm;j++){
            scanf("%d",&arr2[j]);
        }
        sort(arr1,arr1+ng);
        sort(arr2,arr2+nm);
        printf("%d%d",arr1[0],arr1[ng-1]);
        i=0,j=0;
        while(true){
            printf("value of i: %d  value of j : %d\n",i,j);
            if(arr1[i]==arr2[j]){
                j++;
            }
            else if(arr1[i]<arr2[j]){
                i++;
            }
            else if(arr2[j]<=arr1[i]){
                j++;
            }
            if (i==ng){
                printf("MechaGodzilla\n");
                break;
            }
            else if(j==nm){
                printf("Godzilla\n");
                break;
            }
        }
        printf("\n");
        t--;
    }

    return 0;
}
