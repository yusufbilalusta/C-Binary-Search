#include <stdio.h>
#include <stdbool.h>

bool asalMi(int sayi) {
    if (sayi < 2) 
        return false;
    else if (sayi == 2) 
        return true;
    else {
    	int i;
        for (i = 2; i <= sayi / 2; i++) {
            if (sayi % i == 0) 
                return false;
        }
        return true;
    }
}

int sirasinaGoreAsalBulma(int indeks) {
    if (indeks <= 0) 
        return -1;

    int adet = 0;
    int sayi = 2; // 2'den baþlatýyoruz, çünkü 0 ve 1 asal deðiller.

    while (adet < indeks) {
        if (asalMi(sayi)) {
            adet++;
        }
        sayi++;
    }

    return sayi - 1; // Asal sayýyý bulduktan sonra bir arttýðý için bir daha eksiltiyoruz.
}

int main() {
    int dizi[] = {25, 68, 34, 7, 32, 69, 42, 1, 6, 61, 55};
    int diziUzunlugu = sizeof(dizi) / sizeof(dizi[0]);
	int i,j;
	
    for (j = 0; j < diziUzunlugu; j++) {
        printf("\n%d. siradaki asal eleman: %d", dizi[j], sirasinaGoreAsalBulma(dizi[j]));
    }

    return 0;
}

