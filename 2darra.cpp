#include <iostream>
using namespace std;
int main()
{
    // here there are row and columns count starting from 0;
    // DECLARE 2D ARRAY
    int arr[4][5]; // 4 for rows and 5 for columns
    // 2 d array also stores like a linear array in memory not like 2d space
    // the elements of 2 d array in memory can be accesssed by using formula (c*i)+j ; where c= no of columns, i= ith row, j=jth column;
    // INITIALISATION
    int arri[2][2] = {{1, 2}, {3, 4}};
    cout << arri[0][1];
    cout << endl;
    // assume we have total m columns and n rows , the indexes go from 0 to n-1 and 0 to m-1;

    // row wise print
    for (int i = 0; i < 2; i++) // outer loop for row
    {
        for (int j = 0; j < 2; j++) // inner loop for columns (like ek row jse row=0 ke phle sare columns fir row 1 ke..)
        {
            cout << arri[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // column wise print
    for (int i = 0; i < 2; i++) // outer loop for row
    {
        for (int j = 0; j < 2; j++) // inner loop for columns (like ek row jse row=0 ke phle sare columns fir row 1 ke..)
        {
            cout << arri[j][i] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // PRINTING ROW SUM
    // just create a function
    // void printSum(int arr[][3], int rows, int col)  // array mei function mei size pass krna is compulsory jha wo function create hra
    // yha hum sirf phle col khali chod skte baki sare fill krne pdenge , row fill krne ki need islayi nhi pdi as um directlyu access kr skte element ko c*i+j;
    //        for(int i=0;i<2;i++)    // outer loop for row
    //       {
    //       int sum=0;
    //         for(int j=0;j<2;j++)   // inner loop for columns (like ek row jse row=0 ke phle sare columns fir row 1 ke..)
    //         {
    //             sum=sum+arr[i][j];
    //         }
    //         cout<<endl;

    // LINEAR SERACH
    // MAX OR MIN ELEMNT (using INT_MIN/INT_MAX) --> need to include<limits.h> library

    // TRANSPOSE OF A MATRIX
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3];
// printing original array
        for (int i = 0; i < 3; i++) // outer loop for row
    {
        for (int j = 0; j < 3; j++) // inner loop for columns (like ek row jse row=0 ke phle sare columns fir row 1 ke..)
        {
           cout<< arr1[i][j];
        }
        cout << endl;
}
// TRANSPOSING
    for (int i = 0; i < 3; i++) // outer loop for row
    {
        for (int j = 0; j < 3; j++) // inner loop for columns (like ek row jse row=0 ke phle sare columns fir row 1 ke..)
        {
            arr2[j][i]=arr1[i][j];
        }
        cout << endl;
    }

    cout<<endl;
// printing transposed array
        for (int i = 0; i < 3; i++) // outer loop for row
    {
        for (int j = 0; j < 3; j++) // inner loop for columns (like ek row jse row=0 ke phle sare columns fir row 1 ke..)
        {
           cout<< arr2[i][j];
        }
        cout << endl;
}
cout<<endl;

// using function
// void TRANPose(int arr[][a], int r, int c,int trans[][]);

// questions- rotate matrix by 90, spiral print, wave print/zig zag print, median 2d array}

