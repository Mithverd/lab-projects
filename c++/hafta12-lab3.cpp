#include <iostream>

int main() {

	int ogrencino,vize,final;
	std::cout<<"ogrenci numaranizi giriniz. ";
	std::cin>>ogrencino;
	
	std::cout<<"ogrenci vize giriniz. ";
	std::cin>>vize;
	
	std::cout<<"ogrenci final giriniz. ";
	std::cin>>final;

try {
  if (ogrencino <= 200099 && ogrencino > 199999) {
    std::cout << "your no is correct.\n";
  } else {
	throw (ogrencino);
  }
}catch (int myNum) {
  std::cout << "hatali giris\n";
}


  try {
if (vize < 101 && vize >= 0) {
   		std::cout << "your midterm note is correct.\n";
  } else {
	throw (vize); 
  }
}catch (int myvize) {
  std::cout << "hatali giris\n";
}


  try {
  if (final < 101 && final >= 0) {
    std::cout << "your lastterm note is correct.\n";
  } else {
	throw (final);
  }
  
}catch (int myfinal) {
  std::cout << "hatali giris\n";
}






}
