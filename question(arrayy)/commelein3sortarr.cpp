//commom element in three sorted array
#include<iostream>
#include<vector>
using namespace std;
//sorting ka faydaaa-kon kisse bda hai here we use three iterators i,j,k jisse hum ek ek krke aage bdhaynege 
vector<int> commonElement (int a[],int b[],int c[],int n1,int n2, int n3)
{
    vector<int> ans;
    int i,j,k;
    i=j=k=0;
    while(i<n1 && j<n2 && k<n3)
    {
        if(a[i]==b[j]==c[k])
        {
            ans.push_back(a[i]);
            i++,j++,k++;
        }

        else if(a[i]<b[j])
        {
            i++;
        }
        else if(b[j]<c[k])
        {
            j++;
        }
        else{
            k++;
        }
    }
    return ans;

}
int main()
{

    int a[]={10,20,30,40};
    int n1=sizeof(a)/sizeof(int);
    int b[]={30,40,50,60};
    int n2=sizeof(b)/sizeof(int);
    int c[]={20,30,40,50};
    int n3=sizeof(c)/sizeof(int);

    vector<int>result=commonElement(a,b,c,n1,n2,n3);
    for(int i=0; i<result.size(); i++)
    {
    cout<<result[i]<<" ";
    }
}
    