#include<iostream>
using namespace std;

struct triplet {
    int x,y,gcd;
};

triplet extendedEuclid (int a, int b){
    if (b==0)
    {
        triplet ans;
        ans.x=1;
        ans.gcd=a;
        ans.y=0;

        return ans;
    }
    
    triplet smallAns=extendedEuclid(b,a%b);
    triplet ans;

    ans.gcd=smallAns.gcd;
    ans.x=smallAns.y;
    ans.y=smallAns.x-(a/b)*smallAns.y;

    return ans;
    
}

int multiplicativeModulo (int a, int m){
    triplet ans = extendedEuclid(a,m);
    return ans.x;
}

int main (){
    int a,m;
    cin>>a>>m;

    cout<<multiplicativeModulo<<endl;
    return 0;
}