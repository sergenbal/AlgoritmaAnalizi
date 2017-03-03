#include 
#include

using namespace std;

int main(int argc, char *argv[])
{
int i,sonuc=1;
cout<<"taban sayisini giriniz:";
int a;
cin>>a;
cout<<"üst sayiyi giriniz:";
int b;
cin>> b;

for(i=0;i<b;i++){
    sonuc=sonuc*a;                 
}
cout<< sonuc <<endl;
system("PAUSE");
return EXIT_SUCCESS;
}
