#include<iostream>
using namespace std;
int main()
{
    int number_of_soldiers, killed;
    cin>>number_of_soldiers;
 
    killed = 3*((number_of_soldiers + 1)/2);
    cout<< killed<<endl;
    return 0;
}