#include <iostream>
using namespace std;


int factorial(int x){
    if (x == 1) return 1;
    return x * factorial( x - 1 );
}

int fib(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fib(x-1)+fib(x-2));
   }
}


int main()
{
    int num,res;
    cout << "please enter a number" << endl;
    cin>>num;
    res = factorial(num);
    cout << "your factorial = " << res << endl;

    res = fib(num);
    cout << "the fibonacci = " << res << endl;
    return 0;

}
