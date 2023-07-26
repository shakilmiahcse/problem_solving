#include <iostream>
using namespace std;


  int n1=60,n2=30,gcd,remind;

  int main(){

  while(n2 != 0) {
    remind = n1 % n2;
    n1=n2;
    n2=remind;
    gcd = n1;
  cout<<"Gcd is"<<gcd<<endl;

  }
  return 0;
  }


