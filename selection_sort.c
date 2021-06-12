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
void selsort(int arr[],int n)
{
    for(int i=0;i<=n-2;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(arr[j]>arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        for(int k=0;k<=i;++k)
        {
            pri(arr[k]);spc;
        }
        printf("\n");
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
    selsort(a,n);
    for(int i=0;i<n;++i)
    {

        pri(a[i]);spc;
    }
spc;


return 0;
}



