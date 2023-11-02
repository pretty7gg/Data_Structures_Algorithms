#include<iostream>
#include<algorithm>
using namespace std;
// size of array = n, integers ranges from{1,n}
// void findMissing(int *a, int n)
// {
//     // visisted method
//     for(int i=0;i<n;i++)
//     {
//         int index=abs(a[i]);
//         if(a[index-1]>0)
//         {
//             a[index-1]*= -1;
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
// cout<<endl;
//     // all positive indexes are missing
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]>0)
//         {
//             cout<<i+1<<" ";
//         }
//     }
// }
// // time comp=o(n);
// // space comp=o(1);
// second method=sorting method+swapping method

void findMissing(int *a, int n)
{
int i=0;
while(i<n)
{
int index =a[i]-1;
if(a[i]!=a[index])
{
    swap(a[i],a[index]);
}
else 
{ 
    i++;
}
}

for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}   // har eleemnt apni jagah pe phunch gya
cout<<endl;
for(int i=0;i<n;i++)
{
    if(a[i]!=i+1)
    {
        cout<<i+1<<" ";
    }
}
// time comp=o(n);
//space comp=o(1);

}

int main()
{
int n;
int a[]={1,3,4,3,5};
n=sizeof(a)/sizeof(int);
findMissing(a,n);
return 0;

}