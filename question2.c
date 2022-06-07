/*Nama	:Jhon SIanturi
  NIM	:14S18034
  TUGAS :Nomor 2
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int *perhitungan,*pertama,*kedua;
        int *D,*E,*F;
        int i,j,k;
        int r,c,sizeA,sizeB,sizeC;
    
         printf("===Masukkan komponen Kedua ukuran matriks=== \n");  //Meminta pengguna memasukkan ukuran matrix
         printf("Baris = ");
 		 scanf("%d", &r);
 
         printf("Kolom = ");
         scanf("%d", &c);
         
         
        if(r<0 || c<0){
			while(r<0 || c<0){
				printf("\nMasukkanmu salah,coba lagi!!");
 				printf("\nMasukkan bilangan bulat lebih besar atau samadengan 0 =");
 					printf("\nBaris = ");
 					scanf("%d", &r);
 						printf("Kolom = ");
 						scanf("%d", &c);
		
	}
}
        //Mengalokasikan memori secara dinamis
        sizeA=sizeB=sizeC=r*c;
        
        D  = (int *)malloc(sizeA*sizeof(int *));
        pertama = D;

        E = (int *)malloc(sizeB*sizeof(int *));
        kedua = E;

        F   = (int *)malloc(sizeC*sizeof(int *));
        perhitungan = F;

   			printf("\n\n===Masukkan ukuran Matriks pertama===\n", i);	 //Pengguna memasukkan ukuran matrix
        	for(i=0;i<sizeA;i++,pertama++)
        	scanf("%d",pertama);
        
        printf("\n\n===Masukkan ukuran Matriks ke 2===\n", i);
		for(i=0;i<sizeB;i++,kedua++)
        scanf("%d",kedua);


        pertama=D;        
        kedua= E;      
        
        //Melakukan operasi perhitungan
        if(r==1 && c==1){
            for(i=0;i<r;i++){
                for(j=0;j<c;j++){
                *perhitungan=0;
                for(k=0;k<c;k++)
                    *perhitungan = *perhitungan + (*(pertama + (k + i*c))) * (*(kedua + (j+k*c)));
                perhitungan++;
                }
            }
        }
    else{
        for(i=0;i<r;i++){
        	for(j=0;j<c;j++){
            	*perhitungan=0;
            		for(k=0;k<r;k++)
                	*perhitungan =*perhitungan + (*(pertama + (k + i*c))) * (*(kedua + (j+k*r)));
            		perhitungan++;
        }
        }

	}
		//Menampilkan hasil operasi perkalian
        printf("\n==Hasil perkalian kedua matrix==");
        perhitungan = F;
        for(i=0;i<r;i++)
        {
         for(j=0;j<c;j++,perhitungan++)
         printf("\n%d\n",*perhitungan);
    }
    
     // Mendealokasikan alamat yang telah selesai digunakan  
    free(D);
    free(E);
    free(F);
    
    return (0);
}
