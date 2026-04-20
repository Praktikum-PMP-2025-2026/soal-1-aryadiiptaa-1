/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : Data Manipulation and External Files
 *   Hari dan Tanggal    : Senin, 24 April 2026
 *   Nama (NIM)          : Ihsan Arya Pradipta (13224037)
 *   Nama File           : soal1.c
 *   Deskripsi           : -1 dan kawand kawand
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int N;
    int jumlah = 0;
    scanf("%d", &N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=N-1; i>=0; i--){
        if(arr[i]==-1){
            if(arr[i-1]!=-1 && arr[i+1]!=-1){
                arr[i] = floor((arr[i+1]+arr[i-1])/2);
            }
            else if(arr[i-1]!=-1){
                arr[i]=arr[i-1];
            }
            else if(arr[i+1]!=-1){
                arr[i]=arr[i+1];
            }
        }
    }
    printf("RECOVERED ");
    for(int i=0; i<N; i++){
        printf("%d ", arr[i]);
        jumlah = jumlah + arr[i];
    }
    printf("\n");
    printf("MAX_SUM %d", jumlah);
}
