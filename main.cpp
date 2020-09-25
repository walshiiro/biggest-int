#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
string s;
getline(cin,s);
cin>>x; cin.ignore();
for(int k=0;k<x;k++)
{
   for(int i=0;i<s.length();i++)
       if(int(s[i])<int(s[i+1]))
           s.erase(i,1);
}
cout<<s;

}
