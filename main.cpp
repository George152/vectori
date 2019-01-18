#include <iostream>
using namespace std;
int i,j,n;
int V[100];
int main()
{
    int k, maxim=-10000000;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>V[i];
    }
    cout<<"Initial/n";
    for(i=n-1;i>=0;i--)
    {
        cout<<V[i]<<" ";
    }
    for(i=0;i<n;i++)
    {
        maxim=-10000000;
        for(j=i;j<n;j++)
        {
            if(maxim<V[j])
            {
                maxim=V[j];
                k=j;
            }
        }
        swap(V[i],v[k]);
    }
    cout<<"\nsortat\n";
    for(i=0;i<n;i++)
    {
        cout<<V[i]<<" ";
    }

}
