#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;

    cout << "Enter number: ";
    cin >> n;

    for(int i=2;i<=n;i=i+2)
      {
      
          sum=sum+i;
      }
  cout<<"sum of even numbers: "<<sum;
    return 0;
}
