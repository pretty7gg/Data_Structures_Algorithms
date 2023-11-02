//find duplicate number (there is only one repeating number)
// like aray hai{1,3,2,4,4} here n+1=5 toh n=4 i.e array mei integres mei 1 se 4 ke beech honge i.e {1,2,3,4}
// eg{1,3,2,2,2} here n+1=5; hence int in range{1-4} i.e{1,3,2}
//1)- firstly sort and then check the adjacent element like{1,2,2,3,4} i==i+1 or not?
#include<iostream>
#include<vector>
#include<algorithm>   // for sort function
using namespace std;
// int findREPEAT(vector<int> num)
// {
// sort(num.begin(),num.end());
//  // sort krne ke baaad suppose is eg[1,2,3,4,4] mei hum jab is position ie aaynege i.e second last toh last pe check krne ki jarurrat h nh
// for(int i=0;i<num.size()-1;i++)
// {
//     if (num[i]==num[i+1])
//     {
//         return num[i];
//     }
// }
// }
// TIME COMPLEXITY OF THIS METHOD IS O(nlogn) ---> to make O(n)
// second method-- negative marking method i.e indexes se element ko map krna 1 pe 1 etc..i.e jab hum ek index pe ke se jyada baar visit kr gaye toh humara no duplicate hga

int findREPEAT(vector<int> num)
 {
    // already visited
    int ans=-1;
for(int i=0;i<num.size();i++)
{
    int index= abs(num[i]);
    if(num[index]<0){
       ans=index;
    }
    // mark visited
    num[index]*=-1;
}
return ans;

}
int main()
{
vector<int> v{1,2,4,3,4};    // online running
findREPEAT(v);
cout<<"the repeated element is:"<< findREPEAT(v);
}