#include <iostream>
using namespace std;

class fact{
public:

    int i,n, factorial=1;
    void fout()
    {
        cout<<"Enter a positive integer"<<endl;
        cin>>n;
        for (i=1; i<=n; i++)
        {
            factorial = i*factorial;
        }
        cout<<"Factorial = "<<factorial<<endl;
    }
};
int main()
{
fact obj1;
obj1.fout();
return 0;
}
