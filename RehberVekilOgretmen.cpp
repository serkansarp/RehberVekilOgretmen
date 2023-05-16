#include <iostream>
#include <iomanip>
#include <clocale>
#include <ctime>
#include <windows.h>

using namespace std;

int rastgele();
void cokYaz(int, char);

int main() {
	setlocale(LC_ALL, "Turkish");
	int a = 6;
	int gun = 1, kalanHareket = 3, toplamRehberlik = 0, edebiyat = 0, fen = 0, matematik = 0, beden = 0;
	int cigdem = 100, sevim = 100, zeliha = 100, ozge = 100, hareket = 100, x = 0;
	
	string ceyrekHedefTutmadi = " �eyrek kontrollerinde hedefleri tutturamad���n i�in oyun bitti!\n";
	string ceyrekHedefTuttu = " �eyrek kontrollerinden ba�ar�yla ge�tin, devam ediyorsun!\n\n";
	string dersYap = " dersi yap�ld�\n";
	string birSureSohbet = " bir s�re sohbet ettin\n";
	string snfOgrBul = " s�n�f�ndan bir ��renci bul\n";
	string snfOgrYok = " s�n�f�nda ��renci bulamad�n.\n";
	string rehbEgVer = " s�n�f�ndan buldu�un ��renciye rehberlik e�itimi verdin.\n";

	srand(time(NULL));

	cout << endl << " REHBER VEK�L ��RETMEN...                     by Serkan SARP - 2022" << endl;
	cout << " "; cokYaz(66, '='); cout << endl;
	cout << " Merkez  Anadolu  Lisesi  son  s�n�f  ��rencilerine rehber ve  baz�" << endl;
	cout << " derslere de vekil ��retmen  olarak olarak atand�n. Fakat atand���n" << endl;
	cout << " b�lge, muhafazakarl���yla  biliniyor. S�nav ise 60 g�n i�erisinde." << endl;
	cout << " ��retmenlik  mesle�inin onuruna  uygun  olarak  liseli ��rencilere" << endl;
	cout << " hem derslerinde,  hem de bo� vakitlerinde rehberlik e�itimi vermen" << endl;
	cout << " gerekiyor." << endl;
	cout << endl;
	cout << " Yeni ve  erkek bir  ��retmensin. Erkek  ��renciler pek  rehberli�e" << endl;
	cout << " gereksinim  duymuyor,   derslerle  de  ilgilenmiyorlar. K�zlar bu" << endl;
	cout << " konuda daha hassas, O�BP'lerini  y�ksek tutmak istiyorlar. Sen de" << endl;
	cout << " daha �ok k�z ��rencilere rehberlik konusunda yard�mc� oluyorsun." << endl;
	cout << endl;
	cout << " Yaln�z bu durum, okuldaki  di�er ��retmenlerin  sana ba�tan  biraz" << endl;
	cout << " ��pheyle  bakmas�na  neden  oluyor.  Yani  k�sacas� hem  ders, hem" << endl;
	cout << " rehberlik e�itimi verecek, hem de di�er  ��retmenlerle sohbet edip" << endl;
	cout << " ��phelerini d���receksin." << endl;
	cout << endl;
	cout << " Her g�n 3 hareket  hakk�n,  s�nava ise  60  g�n var. 15  g�nde bir" << endl;
	cout << " s�nav yap�lacak ve durumun di�er hocalarla  g�r���lecek. Derslerle" << endl;
	cout << " ilgili ��rencilerin  puan durumu,  ��pheler ve verebildi�in toplam" << endl;
	cout << " rehberlik e�itimi, ve ula�man  gereken  sonu�lar  ekranda  s�rekli" << endl;
	cout << " bulunacak. 4 kontrol g�n�nde ve oyun  sonunda  hedefleri tutturman" << endl;
	cout << " bekleniyor." << endl;
	cout << endl;
	cout << " Baz� hareketler ��rencileri motive ederek  ba�ar�s�n�  artt�r�rken" << endl;
	cout << " baz�lar� nedensiz  yere ��phe �ekebilir,  bunlar� da tablodan fark" << endl;
	cout << " edebilirsin. Ba�ar�lar!" << endl;
	cout << " "; cokYaz(66, '='); cout << endl;
	cout << " - Ba�lamak i�in herhangi bir tu�a bas�n�z -" << endl << endl;
	system("pause"); system("cls");

	for (gun; gun <= 60; gun = gun) {

		if (kalanHareket == 0) { kalanHareket = 3; gun++; }

		cout << endl << " REHBER VEK�L ��RETMEN..." << endl;
		cout << " "; cokYaz(66, '='); cout << endl << endl;
		cout << " -DURUM-                   -DERSLER-           -��PHELER-" << endl;
		cout << " "; cokYaz(66, '-'); cout << endl;
		cout << " G�n            : " << setw(2) << setfill(' ') << gun << "   /   Edebiyat : " << setw(2) << setfill(' ') << edebiyat << "   /   �i�dem: " << setw(3) << setfill(' ') << cigdem << endl;
		cout << " Kalan Hareket  : " << setw(2) << setfill(' ') << kalanHareket << "   /   Fen      : " << setw(2) << setfill(' ') << fen << "   /   Sevim : " << setw(3) << setfill(' ') << sevim << endl;
		cout << " Top.Rehberlik  : " << setw(2) << setfill(' ') << toplamRehberlik << "   /   Matematik: " << setw(2) << setfill(' ') << matematik << "   /   Zeliha: " << setw(3) << setfill(' ') << zeliha << endl;
		cout << " -------------------   /   Beden    : " << setw(2) << setfill(' ') << beden << "   /   �zge  : " << setw(3) << setfill(' ') << ozge << endl << endl << endl;

		cout << " AMA� TABLOSU" << endl;
		cout << " "; cokYaz(66, '-'); cout << endl;
		cout << " G�n       | -15-  | -30-  | -45-  | -60- |" << endl;
		cout << " "; cokYaz(42, '-'); cout << endl;
		cout << " Dersler   | >=15  | >=30  | >=50  | >=70 |" << endl;
		cout << " Rehberlik | >=10  | >=20  | >=35  | >=50 |" << endl;
		cout << " ��pheler  | <=85  | <=70  | <=50  | <=30 |" << endl << endl << endl;

		if (gun == 16 && kalanHareket == 3) {
			if (edebiyat < 15 || fen < 15 || matematik < 15 || beden < 15 || toplamRehberlik < 10 || cigdem>85 || sevim>85 || zeliha>85 || ozge>85)
			{
				cout << " �lk" << ceyrekHedefTutmadi; hareket = 149; break;
			}
			else {	cout << " " << char(3) << " �lk" << ceyrekHedefTuttu;		}
		}
		if (gun == 31 && kalanHareket == 3) {
			if (edebiyat < 30 || fen < 30 || matematik < 30 || beden < 30 || toplamRehberlik < 20 || cigdem>70 || sevim>70 || zeliha>70 || ozge>70)
			{
				cout << " �kinci" << ceyrekHedefTutmadi; hareket = 149; break;
			}
			else { cout << " " << char(3) << " �kinci" << ceyrekHedefTuttu;		}
		}
		if (gun == 46 && kalanHareket == 3) {
			if (edebiyat < 50 || fen < 50 || matematik < 50 || beden < 50 || toplamRehberlik < 35 || cigdem>50 || sevim>50 || zeliha>50 || ozge>50)
			{
				cout << " ���nc�" << ceyrekHedefTutmadi; hareket = 149; break;
			}
			else {	cout << " " << char(3) << " ���nc�" << ceyrekHedefTuttu;	}
		}
		if (gun == 61 && kalanHareket == 3) {
			if (edebiyat < 70 || fen < 70 || matematik < 70 || beden < 70 || toplamRehberlik < 50 || cigdem>30 || sevim>30 || zeliha>30 || ozge>30)
			{
				cout << " Son �eyrek" << ceyrekHedefTutmadi; hareket = 149; break;
			}
			else { cout << " " << char(3) << " Rehber Vekil ��retmenlik g�revini ba�ar�yla yaparken\n ��pheleri de gidermenin yolunu buldun." << endl << endl; hareket = 150; }
		}


		cout << " "; cokYaz(56, '-'); cout << endl;

		if (hareket == 100) {
			cout << " 1. Ders yap" << endl;
			cout << " 2. ��retmenler odas�na git" << endl;
			cout << " 3. Rehberlik e�itimi verecek ��renci ara�t�r" << endl;
			cout << " "; cokYaz(56, '-'); cout << endl;
			cout << " Ne yapmak istiyorsun : "; cin >> x;
			if (x == 1) { hareket = 101; }
			else if (x == 2) { hareket = 110; }
			else if (x == 3) { hareket = 120; }
			else { hareket = 101; }
		}
		else if (hareket == 101) {
			cout << " 1. Edebiyat" << endl;
			cout << " 2. Fen" << endl;
			cout << " 3. Matematik" << endl;
			cout << " 4. Beden" << endl;
			cout << " "; cokYaz(56, '-'); cout << endl;
			cout << " Hangi ders : "; cin >> x;
			if (x == 1) { hareket = 102; }
			else if (x == 2) { hareket = 103; }
			else if (x == 3) { hareket = 104; }
			else if (x == 4) { hareket = 105; }
			else { hareket = 101; }
		}
		else if (hareket == 102) {
			cout << " Edebiyat" << dersYap;
			edebiyat += 4;
			kalanHareket--;
			hareket = 100;
			cigdem--;
			Sleep(1000);
		}
		else if (hareket == 103) {
			cout << " Fen" << dersYap;
			fen += 4;
			kalanHareket--;
			hareket = 100;
			sevim--;
			Sleep(1000);
		}
		else if (hareket == 104) {
			cout << " Matematik" << dersYap;
			matematik += 4;
			kalanHareket--;
			hareket = 100;
			zeliha--;
			Sleep(1000);
		}
		else if (hareket == 105) {
			cout << " Beden" << dersYap;
			beden += 4;
			kalanHareket--;
			hareket = 100;
			ozge--;
			Sleep(1000);
		}
		else if (hareket == 110) {
			cout << " 1. Edebiyat ��retmeni �i�dem'le sohbet et" << endl;
			cout << " 2. Fen ��retmeni Sevim'le sohbet et" << endl;
			cout << " 3. Matematik ��retmeni Zeliha'yla sohbet et" << endl;
			cout << " 4. Beden ��retmeni �zge'yle sohbet et" << endl;
			cout << " "; cokYaz(56, '-'); cout << endl;
			cout << " Hangi ��retmenle konu�mak istersin : "; cin >> x;
			if (x == 1) { hareket = 111; }
			else if (x == 2) { hareket = 112; }
			else if (x == 3) { hareket = 113; }
			else if (x == 4) { hareket = 114; }
			else { hareket = 110; }
		}
		else if (hareket == 111) {
			cout << " Edebiyat ��retmeni �i�dem'le" << birSureSohbet;
			cigdem -= 5;
			edebiyat++;
			kalanHareket--;
			hareket = 100;
			Sleep(1500);
		}
		else if (hareket == 112) {
			cout << " Fen ��retmeni Sevim'le" << birSureSohbet;
			sevim -= 5;
			fen++;
			kalanHareket--;
			hareket = 100;
			Sleep(1500);
		}
		else if (hareket == 113) {
			cout << " Matematik ��retmeni Zeliha'yla" << birSureSohbet;
			zeliha -= 5;
			matematik++;
			kalanHareket--;
			hareket = 100;
			Sleep(1500);
		}
		else if (hareket == 114) {
			cout << " Beden ��retmeni �zge'yle" << birSureSohbet;
			ozge -= 5;
			beden++;
			kalanHareket--;
			hareket = 100;
			Sleep(1500);
		}
		else if (hareket == 120) {
			cout << " 1. Edebiyat" << snfOgrBul;
			cout << " 2. Fen" << snfOgrBul;
			cout << " 3. Matematik" << snfOgrBul;
			cout << " 4. Beden e�itimi ��rencisi i�in spor salonuna git" << endl;
			cout << " "; cokYaz(56, '-'); cout << endl;
			cout << " Nereden bir ��renciye rehberlik e�itimi vermek istiyorsun : "; cin >> x;
			if (x == 1) { hareket = 121; }
			else if (x == 2) { hareket = 122; }
			else if (x == 3) { hareket = 123; }
			else if (x == 4) { hareket = 124; }
			else { hareket = 120; }
		}
		else if (hareket == 121) {
			if (rastgele() == 1) { cout << " Ne yaz�k ki edebiyat"<< snfOgrYok; Sleep(1500); }
			else {
				cout << " Edebiyat" << rehbEgVer;
				toplamRehberlik++;
				Sleep(2000);
			}
			cout << endl;
			edebiyat++;
			cigdem++;
			kalanHareket--;
			hareket = 100;
		}
		else if (hareket == 122) {
			if (rastgele() == 1) { cout << " Ne yaz�k ki fen"<< snfOgrYok; Sleep(1500); }
			else {
				cout << " Fen" << rehbEgVer;
				toplamRehberlik++;
				Sleep(2000);
			}
			cout << endl;
			fen++;
			sevim++;
			kalanHareket--;
			hareket = 100;
		}
		else if (hareket == 123) {
			if (rastgele() == 1) { cout << " Ne yaz�k ki matematik" << snfOgrYok; Sleep(1500);	}
			else {
				cout << " Matematik" << rehbEgVer;
				toplamRehberlik++;
				Sleep(2000);
			}
			cout << endl;
			matematik++;
			zeliha++;
			kalanHareket--;
			hareket = 100;
		}
		else if (hareket == 124) {
			if (rastgele() == 1) { cout << " Ne yaz�k ki spor salonunda ��renci bulamad�n."; Sleep(1500); }
			else {
				cout << " Spor salonundan buldu�un ��renciye rehberlik e�itimi verdin.";
				toplamRehberlik++;
				Sleep(2000);
			}
			cout << endl;
			beden++;
			ozge++;
			kalanHareket--;
			hareket = 100;
		}
		cout << " "; cokYaz(56, '-'); cout << endl;

		cout << endl << endl;
		system("cls");
	}

	system("cls");
	cout << " -OYUN SONU-" << endl;
	if (hareket == 149) { cout << "- Sonu�: Ba�ar�s�z " << char(4) << " -" << endl; }
	else if (hareket == 150) { cout << " - Sonu�: Ba�ar�l�! " << char(3) << " -" << endl; }
	else { cout << " ERROR!" << endl << endl; }
	system("pause");

	return 0;
}

int rastgele() {
	int i = rand() % 5 + 1;
	return i;
}

void cokYaz(int x, char y) {
	for (int i = 0; i < x; i++)
		cout << y;
}
