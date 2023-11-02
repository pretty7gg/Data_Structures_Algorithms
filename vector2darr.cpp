#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // if we want vector of 1d array use one vector , for 2-d use two vectors;
    // vector<vector<int>> v;
    // outer and inner vectors for rows and columns;
     
     vector<vector<int> > arr;   // space is must

    //  vector<int> a{1,2,3};
    //  vector<int> b{4,5,6};
    //  vector<int> c{7,8,9};     // pc mei run n hoti so input leni pdegi vector ki  idhr single by single
     
    //  arr.push_back(a);
    //  arr.push_back(b);
    //  arr.push_back(c);

//  for(int i=0;i<arr.size();i++)
//  {
//     for(int j=0; j< arr[0].size(); j++)   // as every row has same no of column , in case there are different use i instead of 0;
//     {
//         cout<<arr[i][j];
//     }
//     cout<<endl;

int row=3;
int col=5;
vector<vector<int> > arrr(row, vector<int>(col,0));   // initialising it with 0 here;
// here row used for size of outer vector i.e no of rows
// here col is used for size of inner vector i.e no of columns
// here 0 is just used here for the sake of initialising vector with zero;
// vector<int> a(5,0); in case of 1 d array

for(int i=0;i<arrr.size();i++)
{
    for(int j=0; j< arrr[i].size(); j++)   
    {
         cout<<arrr[i][j];
 }
 cout<<endl;

 }

}
     
