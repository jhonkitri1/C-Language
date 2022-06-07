/*Nama	:Jhon SIanturi
  NIM	:14S18034
  TUGAS :Nomor 1
*/

#include <stdio.h>

float HitungKonversi(int b,float c) { 
	
	float hasilkonversi; /*mendeklarasikan variabel hasilkonversi untuk menampung nilai konversi */
 switch(b){
 	case 1:  
   		 	hasilkonversi= c/13757;  
    		break;
  	case 2:  
   		 	hasilkonversi= c/10457;
   		 	break;
    case 3:  
   		 	hasilkonversi= c/107;
   		 	break;
    case 4:  
   		 	hasilkonversi= c/15125;
   		 	break;
}
      return (hasilkonversi); // mengembalikan nilai yang didapat dari hasil proses 
}

// Fungsi Utama 
int main(void) {
  	float a,konversi;
  	int b;
  
 		printf("==Mesin konversi nilai tukar Rupiah== \n");
		printf("\t[1] Rupiah konversi ke US Dolar \n");
		printf("\t[2] Rupiah konversi ke Australia Dolar \n");
		printf("\t[3] Rupiah konversi ke Yen Jepang \n");
		printf("\t[4] Rupiah konversi ke Euro\n\n");	
	
		printf("Masukkan jenis konversi yang diinginkan[] :");
		scanf("%d", &b);
			
	if( b>=1 && b<=4){
		printf("Masukkan nilai Rupiah yang ingin dikonversi (mis:Rp.20000) :Rp."); //User memasukkan nilai mata uang rupiah yang ingin dikonversi
		scanf("%f", &a);

	}
	else{
		while(b<=0||b>=5){
 		printf("\nMasukkanmu salah,coba lagi!!");
 		printf("\nPilihlah jenis konversi  antara 1-4:");
		scanf("%d", &b);
}			printf("\nMasukkan nilai Rupiah yang ingin dikonversi (mis:Rp.20000) :Rp."); //User memasukkan nilai mata uang rupiah yang ingin dikonversi
			scanf("%f", &a);
}	
	
	// Memanggil fungsi Hitungkonversi dan menampung nilainya ke variabel konversi
    	konversi=HitungKonversi(b,a);
    	
// Mencetak hasil perhitungan ke layar monitor  
   		 switch(b){		
 	case 1: 
    	 printf("\nRupiah ke US$:\t%.2f dollar\n",konversi);  
		 break;   
 	case 2: 
     	printf("\nRupiah ke AU$:\t%.2f dollar\n",konversi); 
		 break; 
   	case 3: 
        printf("\nRupiah ke Yen Jepang:\t%.2f Yen \n",konversi); 
		break; 
   	case 4: 
        printf("\nRupiah ke Euro:\t%.2f Euro\n",konversi);
		break;
}
 	return (0);
} 
