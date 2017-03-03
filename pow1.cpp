#include <cstdlib>
#include <iostream>

using namespace std;

long pow(int x, int n)
{
if(n==0) return 1;
if(n==1) return x;
if(n%2==0) return pow(x*x,n/2);
else return pow(x*x,n/2) * x;

     
}


int main(int argc, char *argv[])
{
    
   
    
    cout<<"taban sayisini giriniz:";
   
    cin>>a;
    cout<<"üst sayiyi giriniz:";
    
    cin>> b;
    
    cout << pow(a,b);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
 
