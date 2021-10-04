#include<iostream>
using namespace std;

 int makeseive (int n){

     bool isprime[n+1];
     for (int i = 0; i <= n; i++)
     {
        isprime[i] = true;
     }
     
     isprime[0]=false;
     isprime[1]=false;

     for (int i = 2; i*i <= n; i++)
     {
        if (isprime[i] == true)
        {
            for (int j = i*i; j<=n; j+=i)
            {
                isprime[j] = false;
            }
            
        }
        
     }
     int count =0;
     for (int i = 0; i <= n; i++)
     {
        if (isprime[i]==true)
        {
            count++;
        }
     }
     return count;
    }

int main (){

    int n;
    cin>>n;

    int nprimes=makeseive(n);
    cout<<nprimes<<endl;

    return 0;
}