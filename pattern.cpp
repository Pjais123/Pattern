#include <iostream>
using namespace std;
int main()
{
    int rows,n,a=1;
    cout<<"Enter the number of rows you want :";
    cin>>rows;
    cout << "Here number pattern is:" << endl;
    for(int i=1; i<=rows; ++i)
    {
        n=rows-i;
        while(n>0)
        {
            cout<<" ";
            n--;
        }
        for(int j=i; j>=1; j--)
        {
            cout<<a;
            a++;
        }
        cout<<"\n";
    }
    return 0;
}
