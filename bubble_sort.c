#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define sci(n) scanf("%d",&n)
#define true printf("True")
#define ln printf("\n")
#define pri(n) printf("%d",n)
#define prs(s) printf("%s",s)
#define spc printf(" ")
#define false printf("False")
void bubble (int arr[],int n)
{ //for bubble no of iteration needed is n-1
int ct=1;
while(ct<=n-1)
{
    for(int i=0;i<n-ct;++i)
    {
        if(arr[i+1]>arr[i])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    ct++;

}


}

int main(){

    int n,key;
    sci(n);
    int a[n];
    for(int i=0;i<n;++i)
    {

        sci(a[i]);
    }
bubble(a,n);
    for(int i=0;i<n;++i)
    {

        pri(a[i]);spc;
    }


return 0;
}



