// sort an array of 0,1,2
// FIRST MEthod- using counting method (not supporting inplace sort i.e shuffling the array==inplace)
// SECOND METHOD_ using three pointer approach
// THIRD METHOD- using sort function (quick.heap.insertion sort ka mixture hota hai STL ka sort function)
#include<iostream>
#include<vector>
using namespace std;
void sortCOlors(vector<int> nums)
{
    int start,end,mid,i;
    start=0;mid=0,i=0;
    end=nums.size()-1;
    // sorting 

while(i<end)
{
 if(nums[i]==0)
    {
swap(nums[start],nums[i]);
i++;start++;
    }
    else if(nums[i]==1)
    {
        i++;
    }
    else
    {
        swap(nums[end],nums[i]);
    }
// printing the output
    for(int j=0;j<nums.size();j++)
{
    cout<<nums[j]<<" ";
}
}
}
int main()
{
vector<int> arri{0,1,2,0,1,2};   // this will produce error hence use for loop to declare it but runinng in online
sortCOlors(arri);
}