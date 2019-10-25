#include<iostream>
#include<string>

using namespace std;

int main()
{
int n;
cin>>n;
string grid;
cin>>grid;
for(int i=0;i<grid.length();i++)
{
if(grid[i] == 'H' && grid[i-1] == 'H')
{
cout<<"NO";
return 0;
}
}
cout<<"YES"<<endl;
for(int i=0;i<grid.length();i++)
{
if(grid[i] == '.')
cout<<"B";
else
cout<<grid[i];
}
return 0;
}