// move all negative  to left side of an array ; no need to maintain order
// using dutch national falg algorithm (i.e using two pointer approach)
#include<iostream>
#include<vector>
using namespace std;
void sortNEG(vector<int> arr)
{
    int i,low,high;
    i=0;low=0;high=arr.size()-1;
    while(i<high)
    {
        if(arr[i]<0)
        {
            i++; 
        }
        else{
            swap(arr[i],arr[high]);
            high--;
        }
    }
    for(int j=0;j<arr.size();j++)
{
    cout<<arr[j]<<" ";
}
}
int main()
{
vector<int> arri{-1,2,-3,4,5,-6};   // error in vs code
sortNEG(arri);

}