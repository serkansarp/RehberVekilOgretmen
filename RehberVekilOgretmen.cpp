#include <iostream>
#include <iomanip>
#include <clocale>
#include <ctime>
#include <thread>		//	sleep için gereklidr
#include <chrono>		//	sleep icin +gereklidir

using namespace std;

int rastgele();
void cokYaz(int, char);

int main() {
	setlocale(LC_ALL, "Turkish");
	int a = 6;
	int gun = 1, kalanHareket = 3, toplamRehberlik = 0, edebiyat = 0, fen = 0, matematik = 0, beden = 0;
	int cigdem = 100, sevim = 100, zeliha = 100, ozge = 100, hareket = 100, x = 0;
	
	string ceyrekHedefTutmadi = " çeyrek kontrollerinde hedefleri tutturamadığın için oyun bitti!\n";
	string ceyrekHedefTuttu = " çeyrek kontrollerinden başarıyla geçtin, devam ediyorsun!\n\n";
	string dersYap = " dersi yapıldı\n";
	string birSureSohbet = " bir süre sohbet ettin\n";
	string snfOgrBul = " sınıfından bir öğrenci bul\n";
	string snfOgrYok = " sınıfında öğrenci bulamadın.\n";
	string rehbEgVer = " sınıfından bulduğun öğrenciye rehberlik eğitimi verdin.\n";

	srand(time(NULL));

	cout << endl << " REHBER VEKİL ÖĞRETMEN...                     by Serkan SARP - 2022" << endl;
	cout << " "; cokYaz(66, '='); cout << endl;
	cout << " Merkez  Anadolu  Lisesi  son  sınıf  öğrencilerine rehber ve  bazı" << endl;
	cout << " derslere de vekil öğretmen  olarak olarak atandın. Fakat atandığın" << endl;
	cout << " bölge, muhafazakarlığıyla  biliniyor. Sınav ise 60 gün içerisinde." << endl;
	cout << " Öğretmenlik  mesleğinin onuruna  uygun  olarak  liseli öğrencilere" << endl;
	cout << " hem derslerinde,  hem de boş vakitlerinde rehberlik eğitimi vermen" << endl;
	cout << " gerekiyor." << endl;
	cout << endl;
	cout << " Yeni ve  erkek bir  öğretmensin. Erkek  öğrenciler pek  rehberliğe" << endl;
	cout << " gereksinim  duymuyor,   derslerle  de  ilgilenmiyorlar. Kızlar bu" << endl;
	cout << " konuda daha hassas, OÖBP'lerini  yüksek tutmak istiyorlar. Sen de" << endl;
	cout << " daha çok kız öğrencilere rehberlik konusunda yardımcı oluyorsun." << endl;
	cout << endl;
	cout << " Yalnız bu durum, okuldaki  diğer öğretmenlerin  sana baştan  biraz" << endl;
	cout << " şüpheyle  bakmasına  neden  oluyor.  Yani  kısacası hem  ders, hem" << endl;
	cout << " rehberlik eğitimi verecek, hem de diğer  öğretmenlerle sohbet edip" << endl;
	cout << " şüphelerini düşüreceksin." << endl;
	cout << endl;
	cout << " Her gün 3 hareket  hakkın,  sınava ise  60  gün var. 15  günde bir" << endl;
	cout << " sınav yapılacak ve durumun diğer hocalarla  görüşülecek. Derslerle" << endl;
	cout << " ilgili öğrencilerin  puan durumu,  şüpheler ve verebildiğin toplam" << endl;
	cout << " rehberlik eğitimi, ve ulaşman  gereken  sonuçlar  ekranda  sürekli" << endl;
	cout << " bulunacak. 4 kontrol gününde ve oyun  sonunda  hedefleri tutturman" << endl;
	cout << " bekleniyor." << endl;
	cout << endl;
	cout << " Bazı hareketler öğrencileri motive ederek  başarısını  arttırırken" << endl;
	cout << " bazıları nedensiz  yere şüphe çekebilir,  bunları da tablodan fark" << endl;
	cout << " edebilirsin. Başarılar!" << endl;
	cout << " "; cokYaz(66, '='); cout << endl;
	cout << " - Başlamak için herhangi bir tuşa basınız -" << endl << endl;
	system("pause"); cout << "\033[2J\033[1;1H";		//	Ekran temizliği için ansi kaçış kodu (linux+windows)

	for (gun; gun <= 60; gun = gun) {

		if (kalanHareket == 0) { kalanHareket = 3; gun++; }

		cout << endl << " REHBER VEKİL ÖĞRETMEN..." << endl;
		cout << " "; cokYaz(66, '='); cout << endl << endl;
		cout << " -DURUM-                   -DERSLER-           -ŞÜPHELER-" << endl;
		cout << " "; cokYaz(66, '-'); cout << endl;
		cout << " Gün            : " << setw(2) << setfill(' ') << gun << "   /   Edebiyat : " << setw(2) << setfill(' ') << edebiyat << "   /   Çiğdem: " << setw(3) << setfill(' ') << cigdem << endl;
		cout << " Kalan Hareket  : " << setw(2) << setfill(' ') << kalanHareket << "   /   Fen      : " << setw(2) << setfill(' ') << fen << "   /   Sevim : " << setw(3) << setfill(' ') << sevim << endl;
		cout << " Top.Rehberlik  : " << setw(2) << setfill(' ') << toplamRehberlik << "   /   Matematik: " << setw(2) << setfill(' ') << matematik << "   /   Zeliha: " << setw(3) << setfill(' ') << zeliha << endl;
		cout << " -------------------   /   Beden    : " << setw(2) << setfill(' ') << beden << "   /   Özge  : " << setw(3) << setfill(' ') << ozge << endl << endl << endl;

		cout << " AMAÇ TABLOSU" << endl;
		cout << " "; cokYaz(66, '-'); cout << endl;
		cout << " Gün       | -15-  | -30-  | -45-  | -60- |" << endl;
		cout << " "; cokYaz(42, '-'); cout << endl;
		cout << " Dersler   | >=15  | >=30  | >=50  | >=70 |" << endl;
		cout << " Rehberlik | >=10  | >=20  | >=35  | >=50 |" << endl;
		cout << " Şüpheler  | <=85  | <=70  | <=50  | <=30 |" << endl << endl << endl;

		if (gun == 16 && kalanHareket == 3) {
			if (edebiyat < 15 || fen < 15 || matematik < 15 || beden < 15 || toplamRehberlik < 10 || cigdem>85 || sevim>85 || zeliha>85 || ozge>85)
			{
				cout << " İlk" << ceyrekHedefTutmadi; hareket = 149; break;
			}
			else {	cout << " " << char(3) << " İlk" << ceyrekHedefTuttu;		}
		}
		if (gun == 31 && kalanHareket == 3) {
			if (edebiyat < 30 || fen < 30 || matematik < 30 || beden < 30 || toplamRehberlik < 20 || cigdem>70 || sevim>70 || zeliha>70 || ozge>70)
			{
				cout << " İkinci" << ceyrekHedefTutmadi; hareket = 149; break;
			}
			else { cout << " " << char(3) << " İkinci" << ceyrekHedefTuttu;		}
		}
		if (gun == 46 && kalanHareket == 3) {
			if (edebiyat < 50 || fen < 50 || matematik < 50 || beden < 50 || toplamRehberlik < 35 || cigdem>50 || sevim>50 || zeliha>50 || ozge>50)
			{
				cout << " Üçüncü" << ceyrekHedefTutmadi; hareket = 149; break;
			}
			else {	cout << " " << char(3) << " Üçüncü" << ceyrekHedefTuttu;	}
		}
		if (gun == 61 && kalanHareket == 3) {
			if (edebiyat < 70 || fen < 70 || matematik < 70 || beden < 70 || toplamRehberlik < 50 || cigdem>30 || sevim>30 || zeliha>30 || ozge>30)
			{
				cout << " Son çeyrek" << ceyrekHedefTutmadi; hareket = 149; break;
			}
			else { cout << " " << char(3) << " Rehber Vekil Öğretmenlik görevini başarıyla yaparken\n şüpheleri de gidermenin yolunu buldun." << endl << endl; hareket = 150; }
		}


		cout << " "; cokYaz(56, '-'); cout << endl;

		if (hareket == 100) {
			cout << " 1. Ders yap" << endl;
			cout << " 2. Öğretmenler odasına git" << endl;
			cout << " 3. Rehberlik eğitimi verecek öğrenci araştır" << endl;
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
			this_thread::sleep_for(chrono::milliseconds(1000));
		}
		else if (hareket == 103) {
			cout << " Fen" << dersYap;
			fen += 4;
			kalanHareket--;
			hareket = 100;
			sevim--;
			this_thread::sleep_for(chrono::milliseconds(1000));
		}
		else if (hareket == 104) {
			cout << " Matematik" << dersYap;
			matematik += 4;
			kalanHareket--;
			hareket = 100;
			zeliha--;
			this_thread::sleep_for(chrono::milliseconds(1000));
		}
		else if (hareket == 105) {
			cout << " Beden" << dersYap;
			beden += 4;
			kalanHareket--;
			hareket = 100;
			ozge--;
			this_thread::sleep_for(chrono::milliseconds(1000));
		}
		else if (hareket == 110) {
			cout << " 1. Edebiyat Öğretmeni Çiğdem'le sohbet et" << endl;
			cout << " 2. Fen Öğretmeni Sevim'le sohbet et" << endl;
			cout << " 3. Matematik Öğretmeni Zeliha'yla sohbet et" << endl;
			cout << " 4. Beden Öğretmeni Özge'yle sohbet et" << endl;
			cout << " "; cokYaz(56, '-'); cout << endl;
			cout << " Hangi öğretmenle konuşmak istersin : "; cin >> x;
			if (x == 1) { hareket = 111; }
			else if (x == 2) { hareket = 112; }
			else if (x == 3) { hareket = 113; }
			else if (x == 4) { hareket = 114; }
			else { hareket = 110; }
		}
		else if (hareket == 111) {
			cout << " Edebiyat Öğretmeni Çiğdem'le" << birSureSohbet;
			cigdem -= 5;
			edebiyat++;
			kalanHareket--;
			hareket = 100;
			this_thread::sleep_for(chrono::milliseconds(1500));
		}
		else if (hareket == 112) {
			cout << " Fen Öğretmeni Sevim'le" << birSureSohbet;
			sevim -= 5;
			fen++;
			kalanHareket--;
			hareket = 100;
			this_thread::sleep_for(chrono::milliseconds(1500));
		}
		else if (hareket == 113) {
			cout << " Matematik Öğretmeni Zeliha'yla" << birSureSohbet;
			zeliha -= 5;
			matematik++;
			kalanHareket--;
			hareket = 100;
			this_thread::sleep_for(chrono::milliseconds(1500));
		}
		else if (hareket == 114) {
			cout << " Beden Öğretmeni Özge'yle" << birSureSohbet;
			ozge -= 5;
			beden++;
			kalanHareket--;
			hareket = 100;
			this_thread::sleep_for(chrono::milliseconds(1500));
		}
		else if (hareket == 120) {
			cout << " 1. Edebiyat" << snfOgrBul;
			cout << " 2. Fen" << snfOgrBul;
			cout << " 3. Matematik" << snfOgrBul;
			cout << " 4. Beden eğitimi öğrencisi için spor salonuna git" << endl;
			cout << " "; cokYaz(56, '-'); cout << endl;
			cout << " Nereden bir öğrenciye rehberlik eğitimi vermek istiyorsun : "; cin >> x;
			if (x == 1) { hareket = 121; }
			else if (x == 2) { hareket = 122; }
			else if (x == 3) { hareket = 123; }
			else if (x == 4) { hareket = 124; }
			else { hareket = 120; }
		}
		else if (hareket == 121) {
			if (rastgele() == 1) { cout << " Ne yazık ki edebiyat"<< snfOgrYok; this_thread::sleep_for(chrono::milliseconds(1500));		}
			else {
				cout << " Edebiyat" << rehbEgVer;
				toplamRehberlik++;
				this_thread::sleep_for(chrono::milliseconds(2000));
			}
			cout << endl;
			edebiyat++;
			cigdem++;
			kalanHareket--;
			hareket = 100;
		}
		else if (hareket == 122) {
			if (rastgele() == 1) { cout << " Ne yazık ki fen"<< snfOgrYok; this_thread::sleep_for(chrono::milliseconds(1500));		}
			else {
				cout << " Fen" << rehbEgVer;
				toplamRehberlik++;
				this_thread::sleep_for(chrono::milliseconds(2000));
			}
			cout << endl;
			fen++;
			sevim++;
			kalanHareket--;
			hareket = 100;
		}
		else if (hareket == 123) {
			if (rastgele() == 1) { cout << " Ne yazık ki matematik" << snfOgrYok; this_thread::sleep_for(chrono::milliseconds(1500));		}
			else {
				cout << " Matematik" << rehbEgVer;
				toplamRehberlik++;
				this_thread::sleep_for(chrono::milliseconds(2000));
			}
			cout << endl;
			matematik++;
			zeliha++;
			kalanHareket--;
			hareket = 100;
		}
		else if (hareket == 124) {
			if (rastgele() == 1) { cout << " Ne yazık ki spor salonunda öğrenci bulamadın."; this_thread::sleep_for(chrono::milliseconds(1500));	}
			else {
				cout << " Spor salonundan bulduğun öğrenciye rehberlik eğitimi verdin.";
				toplamRehberlik++;
				this_thread::sleep_for(chrono::milliseconds(2000));
			}
			cout << endl;
			beden++;
			ozge++;
			kalanHareket--;
			hareket = 100;
		}
		cout << " "; cokYaz(56, '-'); cout << endl;

		cout << endl << endl;
		cout << "\033[2J\033[1;1H";		//	Ekran temizliği için ansi kaçış kodu (linux+windows)
	}

	cout << "\033[2J\033[1;1H";		//	Ekran temizliği için ansi kaçış kodu (linux+windows)
	cout << " -OYUN SONU-" << endl;
	if (hareket == 149) { cout << "- Sonuç: Başarısız " << char(4) << " -" << endl; }
	else if (hareket == 150) { cout << " - Sonuç: Başarılı! " << char(3) << " -" << endl; }
	else { cout << " !ERROR!" << endl << endl; }
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
