#include<bits/stdc++.h>
using namespace std;
int main()
{
   int start=123,end=432;
   int cnt=0;
   int i=start;
   while(i<=end){
        ///�ж�i�Ƿ������������������ cnt+=1,���i
        int a=i/100,b=i/10%10,c=i%10;
        if(1<=a&&a<=4
           && 1<=b&&b<=4
           && 1<=c&&c<=4
           && a!=b && b!=c &&c!=a
           )
        {
            cnt++;
            cout<<i<<endl;
        }
        i++;
   }
    cout<<cnt<<endl;
    return 0;
}
