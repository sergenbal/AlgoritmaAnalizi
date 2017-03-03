#include <cstdlib>
#include <iostream>

using namespace std;

int m = 0;
long pow(int x, int n)
{
m = m+1;
if(n==0) return 1;
if(n==1) return x;
if(n%2==0) return pow(x*x,n/2);
else return pow(x*x,n/2) * x;

     
}


int main(int argc, char *argv[])
{
    
   
    int a;
    int b;
    cout<<"taban sayisini giriniz:";
   
    cin>>a;
    cout<<"üst sayiyi giriniz:";
    
    cin>> b;
    
    cout << pow(a,b) << endl;
    cout << "Adim sayisi" << m << endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
