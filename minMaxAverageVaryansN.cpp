#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;



void minAndMax(int arr [], int e)
{
    int enKucuk;
    int enBuyuk;
    int temp;
    int i=0;
    enKucuk = arr[0];
    enBuyuk = arr[0];
    for(i=0; i<e; i++)
    {
     if(arr[i] > enBuyuk){
          enBuyuk = arr[i];     
               }
     if(arr[i] < enKucuk){
          enKucuk = arr[i];     
               }                      
    }
    cout  << "En kucuk deger  " << enKucuk << "\n" << "En buyuk Deger  " <<  enBuyuk;  
}

void ortalamaBul(int arr [], int e)
{
     int toplam=0;
     int ortalama;
     int i;
     for(i=0; i<e; i++)
    {
         toplam = toplam + arr[i];               
    }
    ortalama = toplam / e;
    cout  << "Ortalama  " << ortalama;

     
}

void varyansBul(int dizi [], int e)
{
float art,ss,toplam=0.0;
    for(int i=0;i<10;i++){
       toplam+=dizi[i];
    }
    art=toplam/10;
    cout<<"Varyans Toplam deger :"<<toplam<<endl;
    for(int i=0;i<10;i++)
            toplam+=pow((double)dizi[i]-art,2.0);
            
    ss=sqrt(toplam/(10-1));
    cout<<"Standart sapma degeri:"<<ss;

     
}   




int main(int argc, char *argv[])
{
    int dizi[10] = {1,2,3,4,5,6,7,8,9,10};
    minAndMax(dizi,10);
    cout << "\n";
    ortalamaBul(dizi,10);
    cout << "\n";
    varyansBul(dizi,10);
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
