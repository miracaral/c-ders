#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //ceil bir �st say�ya yuvarlama
    printf("%f\n", ceil(4.3));

    //floor bir alt say�ya yuvarlama
    printf("%f\n", floor(4.9));

    //sqrt (say�n�n karek�k�n� alma)
    printf("%f\n", sqrt(36));

    //pow (�ss� al�nacak say�, al�nacak �s )
    printf("%f\n", pow(2,10));

    //abs k�sacas� mutlak de�er alma fonksiyonudur. do�ru par�as�nda de�i�ken say�n�n 0 a uzakl���n� verir.( abs bir TAM say�n�n mutlak de�erini al�r )
    printf("%d\n", abs(-129));

    return 0;
}
