#include <stdio.h>

class hesaplar{
	public:
		char hesap_ismi;
		int miktar;
		char sahip_TC;
	private:
		Paracek(int miktar);
		EFTyap(int miktar,char hesap_ismi);
		HesabaParaAktar(int miktar, char hesap_ismi);
		Hesabýkontrolet(char sahip_TC);
		Faturaöde(int miktar);
	
};
class kullanici : public hesaplar{
	public:
		char isim;
		char TC;
		char sifre;
		hesaplar hesabým;
	private:
		void getName(char TC,char sifre);
		
};

kullanici::getName(char TC_ata,char sifre_ata)
{
	strcpy(TC,TC_ata);
	strcpy(sifre,sifre_ata);
}

hesaplar::Paracek(int miktar)
{
	
}

hesaplar::EFTyap(int miktar,char hesap_ismi)
{
	
}

hesaplar::HesabaParaAktar(int miktar, char hesap_ismi)
{
	
}

hesaplar::Hesabýkontrolet(char sahip_TC)
{
	
}

hesaplar::Faturaöde(int miktar)
{
	
}

int main()
{	
	int kontrol;
	kullanici k1;
	hesaplar
	k1.getName("TC","sifre");
	printf("Ne iþlem yapmak istersiniz: \n Para cek(1)\n EFT (2)\n Hesaba Para Aktar(3)\n Hesabý Kontrol Et(4)\n Fatura öde(5)\n");
	scanf("%d",kontrol);
	if(kontrol==1)
	{
		Paracek(miktar);
	}
	else if(kontrol==2)
	{
		Paracek(miktar);
	}
}
