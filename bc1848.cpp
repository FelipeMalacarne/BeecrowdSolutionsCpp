#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int count=1,sum=0;
    while(count<=3)
    {
        getline(cin,str);
        if(str[0]=='c')
        {
            cout<<sum<<endl;
            count++;
            sum=0;
        }
        else
        {
        if(str[0] == '*'){
            sum += 4;
        }
        if(str[1] == '*'){
            sum += 2;
        }
        if(str[2] == '*'){
            sum += 1;
        }

     }
        }

    return 0;
}

