/*	Nama 	:jhon Kitri Sianturi
	Nim 	:14S18034
	TUGAS	:Nomor 3
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000

int main(void) {
 
 FILE *pf;
 char namefile[256]; 	//mendeklarasikan  nama file text. yang akan dibuka  
 int huruf, kalimat;
 char ch;
 
  	printf("Masukkan nama file beserta lokasinya (mis=D:/file text.TXT): ");  //Meminta pengguna memasukkan nama file text.
  	gets(namefile);
 
  	pf = fopen(namefile, "r");	//Membuka sumber file dengan mode 'r'
  
		if (pf == NULL) {   //Mencek apakah file terbuka atau tidak
  			printf("\nFile tidak dapat dibuka\n");
  			printf("Mohon dicek keberadaan tempat lokasi file dan nama file text. tersebut\n");
  			printf("\nProgram telah eror.....\n");
  			exit(EXIT_FAILURE); 
			}
 				printf("\n==Teks dalam file (%s)==\n", namefile);
				printf("-------------------------------------\n");
					
  			while ((ch = fgetc(pf)) != EOF){	//Menghitung jumlah huruf dan kalimat
  				printf("%c", ch); 	
        
             	if ((ch>= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
       		 	huruf++;
    	
				else if (ch != ' ') 
       		 	kalimat++;
   		 	}										 //akhir struktur while 

 /* Menampilkan informasi jumlah huruf dan kalimat  */
 	 		printf("\n\n\n\n==Jumlah huruf dan kalimat dalam file==\n");
 	 		printf("------------------------------------\n");
  		    printf("Jumlah huruf	=%d\n",huruf);
            printf("Jumlah kalimat 	= %d\n",kalimat);
    
 		fclose(pf); /* Menutup file */
 		return 0;
} 
