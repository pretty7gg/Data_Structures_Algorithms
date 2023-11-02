// wave print a matrix
// wave print a matrix (column wise)
#include <iostream>
#include <vector>
using namespace std;
void printMatrix(vector<vector<int>> v)
{

    for(int i=0;i<v[0].size();i++)   // declaring the size of column here in for loop
    {
        // if column is even then traverse from top to bottom
        if(i%2==0)
        {
            for(int k=0;k<v.size();k++)   // declaring th size of row here in for loop as we will traverse every row for sngle column
            {
                cout<<v[k][i]<<" ";
            }
        }
        // if column is odd then traverse from bottom to top
        else
        {
            for(int k=v.size()-1;k>=0;k--)
            {
                cout<<v[k][i]<<" ";
            }
        }
    
    }
}
int main()
{
    vector<vector<int>> v    // errro but running in online
    {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
    };
    printMatrix(v);
}