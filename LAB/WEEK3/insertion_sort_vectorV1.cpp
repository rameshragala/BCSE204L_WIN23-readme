#include<iostream>
#include<vector>
#include<ctime>
using namespace std;
int main()
{
    vector<int> A;
    int key,i,j,n,ele;
    cout<<"Enter number of elements";
    cin>>n;
    for(i=0;i<n;i++)
    {        
      cin>>ele;
      A.push_back(ele);
    }
    // Logic 
    clock_t tStart = clock();    
    for(i=1;i<n;i++)
    {
        key = A[i];
        j = 0;
        while((j<i)&&(A[j]<key))
        {
            A[j+1] = A[j];
            j = j+1;
        }
        A[j-1] = key;
    }
  double time1=(double)(clock() - tStart)/CLOCKS_PER_SEC;
 cout<<"Time taken is "<<time1<<endl;
   for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
