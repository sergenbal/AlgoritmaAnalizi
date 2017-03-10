#include <cstdlib>
#include <iostream>



// kendisine gönderilen bir diziy
using namespace std;


void sagTarafbuyukElemanyazdir(int dizi[], int elemanSayisi){
     int i;
     int temp;
     int toplam=0;
     int enbuyuk=0;
    
    cout << endl;
    
    
    temp = dizi[elemanSayisi/2];
    for(i=elemanSayisi/2;i<elemanSayisi-1; i++){       
        toplam = temp + dizi[i+1];
        if(toplam > temp){
                  enbuyuk = toplam;       
                  }
          temp = toplam;        
                                                             
    }  
    cout << enbuyuk;
        

     
}
void solTarafbuyukElemanyazdir(int dizi[], int elemanSayisi){
     int i;
     int temp;
     int toplam=0;
     int enbuyuk=0;
    
    cout << endl;
    
    
    temp = dizi[0];
    for(i=0;i<elemanSayisi/2-1; i++){       
        toplam = temp + dizi[i+1];
        if(toplam > temp){
                  enbuyuk = toplam;       
                  }
          temp = toplam;        
                                                             
    }  
    cout << enbuyuk;
        

     
}
int main(int argc, char *argv[])
{
    int dizi[] = {4,-3,2,1,6,-1,-2,4};
    
    sagTarafbuyukElemanyazdir(dizi,8);
    solTarafbuyukElemanyazdir(dizi,8);
         
    system("PAUSE");
    return EXIT_SUCCESS;
}
