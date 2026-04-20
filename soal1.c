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
    int a,b;
    int jumlah = 0;
    scanf("%d", &N);
    int arr[N];

    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<N; i++){
        a=i,b=i;
        if(arr[i]==-1 && i == 0){
            while(arr[a+1]==-1 && a!=N-1){
                a++;
            }
            if(a==N-1){
                arr[i] = 0;
            }
            else{
                arr[i]=arr[a+1];
            }
        }
        else if(arr[i]==-1 && i == N-1){
            arr[i] = arr[i-1];
        }
        else if(arr[i]==-1){
            while(arr[a+1]==-1 && a!=N-1){
                a++;
            }
            if(a==N-1){
                a = i;
            }
            if(arr[a+1]!=-1 && arr[i-1]!=-1){
                arr[i] = floor((arr[a+1]+arr[i-1])/2);
                if(arr[i] <=0 && (arr[a+1]+arr[i-1])%2!=0){
                    arr[i] = arr[i]-1;
                }
            }
            else if(arr[i-1]!=-1){
                arr[i] = arr[i-1];
            }
            else if(arr[i+1]!=-1){
                arr[i] = arr[i+1];
            }
        }
    }
    printf("RECOVERED ");
    for(int i=0; i<N; i++){
        printf("%d", arr[i]);
        if(i!=N-1){
            printf(" ");
        }
        jumlah = jumlah + arr[i];
    }
    printf("\n");
    printf("MAX_SUM %d", jumlah);
}
