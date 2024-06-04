#include <iostream>
using namespace std;

int main(){
    int number,j,i;
    int bilangan = 1;

    cout<<"Input number of rows: "; 
    cin>>number;

    for(i=1;i<=number;i++)
    {
        for(j=1;j<=i;j++)
        {
         cout<<bilangan<<" ";
            bilangan++;
        }
        cout<<endl;

    }
}