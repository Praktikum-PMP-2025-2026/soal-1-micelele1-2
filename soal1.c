/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 2
 *   Hari dan Tanggal    : 20 April 2026
 *   Nama (NIM)          : Michelle (13224098)
 *   Nama File           : soal1.c
 *   Deskripsi           : Memulihkan data yang hilang dengan menggunakan fungsi floor dan menghitung
 *                          jumlah maksimum dari semua subarray kontinu non kosong
 * 
 */

 #include<stdio.h>
 #include<math.h>
 #include<stdlib.h>
 #include<string.h>


 void recover(int ukuran, int *arr){
    int temp=0;
    int tempo=0;
    for (int i=0; i<ukuran; i++){
        if(i!=0 && i!=(ukuran)-1){
            int j=1;
            while(arr[i+j]==-1&&(i+j)!=(ukuran)-1){
                j++;
                int temp=arr[i+j];
            }
            while(arr[i-j]==-1&&(i-j)!=0){
                j++;
                int tempo=arr[i-j];
            }
            if(arr[i+j]==-1) {int temp=0;}
            else if (arr[i-j]==-1) {int tempo=0;}
        else if(i==0){
            while(arr[i+j]==-1&&(i+j)!=(ukuran)-1){
                j++;
                int temp=arr[i+j];
            }if(arr[i+j]==-1) {int temp=0;}
        }    
        else if(i==(ukuran)-1){
            while(arr[i-j]==-1&&(i-j)!=0){
                j++;
                int tempo=arr[i-j];
            }if (arr[i-j]==-1) {int tempo=0;}
        }
     } arr[i]=floor((temp+tempo)/2);
    }
 }

 int subarraymax(int *arr, int ukuran){
    int total=0;
    for(int i=0; i<ukuran; i++){
        total+=arr[i];
    }
    printf("%d", total);
 }
 
 void masukkan(int *temp_array, int *nums, char *input){
    fgets(input, 256, stdin);
    char *token= strtok(input, " ");
    if(token){
        *nums=atoi(token);
        for(int i=0; i<*nums; i++){
            token=strtok(NULL, " ");
            int temp=atoi(token);
            printf("%d\n", temp);
            temp_array[i]=temp;
            printf("masuk ga sih %d\n", temp_array[i]);
        }

    }
 }
 int main(){
    char input [256];
    int ukuran;
    int arr[20];
    masukkan(arr, &ukuran, input);
     for(int i=0; i<ukuran; i++){
        printf("%d", arr[i]);
    }
    recover(ukuran, arr);
     for(int i=0; i<ukuran; i++){
        printf("%d", arr[i]);
    }
    printf("RECOVERED ");
    for(int i=0; i<ukuran; i++){
        printf("%d", arr[i]);
    }
    subarraymax(arr, ukuran);
    

 }
