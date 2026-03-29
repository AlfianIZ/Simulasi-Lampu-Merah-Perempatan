// Lampu Utara
int utaraMerah = 2;
int utaraKuning = 3;
int utaraHijau = 4;

// Lampu Timur
int timurMerah = 5;
int timurKuning = 6;
int timurHijau = 7;

// Lampu Selatan
int selatanMerah = 8;
int selatanKuning = 9;
int selatanHijau = 10;

// Lampu Barat
int baratMerah = 11;
int baratKuning = 12;
int baratHijau = 13;


void setup()
{
    // Inisialisasi pin
	for(int i = 2; i <= 13; i++){
  	    pinMode(i, OUTPUT);
  	}
  	semuaLedMerah();
}

// Kondisi awal semua led merah menyala selain merah mati
void semuaLedMerah(){
	digitalWrite(utaraMerah, HIGH);
    digitalWrite(timurMerah, HIGH);
    digitalWrite(selatanMerah, HIGH);
    digitalWrite(baratMerah, HIGH);

    digitalWrite(utaraKuning, LOW);
    digitalWrite(timurKuning, LOW);
    digitalWrite(selatanKuning, LOW);
    digitalWrite(baratKuning, LOW);

    digitalWrite(utaraHijau, LOW);
    digitalWrite(timurHijau, LOW);
    digitalWrite(selatanHijau, LOW);
    digitalWrite(baratHijau, LOW);
}

// Fungsi untuk mengaktifkan lampu merah, kuning, dan hijau secara bergantian
void aktifkanTrafficLights(int merah, int kuning, int hijau){
    semuaLedMerah();
    
    digitalWrite(merah, LOW);
    digitalWrite(hijau, HIGH);
    delay(5000);
    digitalWrite(hijau, LOW);

    for(int i = 0; i < 3; i++){
        digitalWrite(kuning, HIGH);
        delay(333);
        digitalWrite(kuning, LOW);
        delay(333);
    }
    
}


void loop()
{
    // Pemanggilan fungsi aktifkanTrafficLights untuk setiap arah
    aktifkanTrafficLights(utaraMerah, utaraKuning, utaraHijau);
    aktifkanTrafficLights(timurMerah, timurKuning, timurHijau);
    aktifkanTrafficLights(selatanMerah, selatanKuning, selatanHijau);
    aktifkanTrafficLights(baratMerah, baratKuning, baratHijau);
}
