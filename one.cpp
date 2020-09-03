#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{   
    multiset <int,less<int>> MS;
  MS.insert(10);
  MS.insert(21);
MS.insert(11);
  MS.insert(10);
  MS.insert(10);
MS.insert(21);

set<int> :: iterator itr;
set<int> :: iterator itr1;
itr=MS.begin();
for (itr1=itr;itr!=MS.end();)
{   
    int count=0;
    while(*itr==*itr1)
        {
            count=count+1;
            itr1++;
        }
    cout<<"Count of "<<*itr<<" is "<< count<<"\n";
    itr=itr1;
    

}
}
    


