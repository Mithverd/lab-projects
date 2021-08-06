#include <iostream>

class OrnekClass {     // class
  public:           // Tanýmlayýcý
    OrnekClass() {     // Kurucu
      std::cout << "Nesne Kuruldu!\n";
    }
    void print();
    int year;
    OrnekClass(int year) {     // Kurucu
      std::cout << "YIL Nesne Kuruldu!\n";
      this->year = year;
    }
    
};


void OrnekClass::print()
{
	std::cout << year << "\n";
}


int main() {
  OrnekClass nesnem1;    // Class'den Bir Nesne Yarat (Parametresiz)
  
  int year = 20;
  OrnekClass nesnem2(year);    // Class'den Bir Nesne Yarat (Parametreli)
  nesnem2.print();
  
  int year2 = 2020;
  OrnekClass *nesnem3 = new OrnekClass(year2);    // Class'den Bir Nesne Yarat (New ile)
  nesnem3->print();
  
  
  return 0;
  
}

