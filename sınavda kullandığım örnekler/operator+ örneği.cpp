#include <iostream> 
using namespace std;
    
          
typedef struct {
int gun;
int ay;
int yil;
} tarih;


tarih operator+ (tarih t1, tarih t2) 
{
   tarih tar3;
   
   tar3.ay = t1.ay + t2.ay;
   tar3.gun = t1.gun + t2.gun;
   tar3.yil = (t1.yil + t2.yil)/2;

   if(tar3.gun>30){
   	tar3.ay++;
   	tar3.gun = tar3.gun-30;
   }
   
   if(tar3.ay>12){
 //  tar3.yil++;
   	tar3.ay = tar3.ay-12;
   }
   
   return tar3;
   
 }



ostream& operator<<(ostream &os, tarih d)
{
    os<<d.gun <<" / "<<d.ay<<" / "<<d.yil;
    return os;
}



int main() {

tarih tar1;
tar1.gun=10;
tar1.ay=1;
tar1.yil=2020;
tarih tar2;
tar2.gun=12;
tar2.ay=4;
tar2.yil=2030;

tarih toplamtarih;
toplamtarih = tar1 + tar2;

printf("%d %d %d %s",toplamtarih.gun, toplamtarih.ay, toplamtarih.yil,"\n\n");

std::cout<<tar1;








}
