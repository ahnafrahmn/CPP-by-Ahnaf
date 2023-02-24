#include<bits/stdc++.h>
using namespace std;

int arr[100005];

int primeCount(int m, int n, int *arr)
{
    int prime=0;
    for(int i=m; i<=n; i++){
            if(i==0 || i==1)continue;
            if(arr[i]==0)
            {
                  prime++;
            }
      }
    return prime;
}

void sievePrime(int *arr)
{
      int prime=0;

      for(int i=2; i*i<=100000; i++)
      {
            if(arr[i]==0)
            {
                  for(int j=i*i; j<=100000; j+=i)
                  {
                        arr[j]=1;
                  }
            }
      }
}
int main()
{
      int t;
      cin>>t;

    sievePrime(arr);
      while(t--)
      {
            int a, b;
            cin>>a>>b;

            cout<<primeCount(a,b,arr);
            if(t!=0){
                  cout<<endl;
            }
      }
      return 0;
}
