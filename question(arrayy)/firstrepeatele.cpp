// first repeating elemnt
#include<iostream>
#include<unordered_map>
using namespace std;
// int firstRepeated(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         bool isrepeat=false;
//         for(int j=i+1;j<n;j++)
//         {
//             if(a[i]==a[j])
//             {
//                 isrepeat=true;
//                return i+1;
//             }

//         }
//     }
//     return -1;
    // time comp=o(n^2);
//}
// second method-- hashing method(iterate each eleemnt if it has occurrenece in future) i.e ki konsa eleemnt kitni baar ara use stor krlo
int firstRepeated(int a[],int n)
{
    //sort-- STL C++
    // hashing-- STL c++ unordered map
    unordered_map<int,int>hash; //<key,value>
    for(int i=0;i<n;i++)
    {
    hash[a[i]]++;
    }

for(int i=0;i<n;i++)
{
    if(hash[a[i]] >1)
    {
        return i+1;
    }
}
return -1;
}
//time comp=0(n)
//space comp=o(n)  as depending on elements ki hash table mei kinni entries hri worst case mei ssare h element enter honge jab koi eleemnt repeating nhi hga



int main()
{
    int arr[]={1,3,4,5,6,3};
    int n= sizeof(arr)/sizeof(int);
    cout<<"answer "<<firstRepeated(arr,n);

}
