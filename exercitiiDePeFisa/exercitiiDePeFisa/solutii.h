#include "functii.h"

// 1. Se citeste o matrice patratica de maxim 100
// de elemente numere intregi.
// a) Sa se calculeze suma elementelor 
// de pe diagonala secundara.
// b) Realizati suma elementelor situate deasupra
// diagonalei principale.
// c) Afisati descrescator (dupa ce au fost sortate)
// elementele depe diagonala principala.
// d) Cate elemente superprime situate sub
// diagonala secundara avem?
// e) Care este suma elementelor situate
// deasupra diagonalei secundare?
// f) Afisati media aritmetica a elementelor din
// regiunea de nord a matricei.
// g) Cate elemente negative sunt in regiunea
// de sud a matricei?
// h) Cate elemente pare sunt in regiunea
// de est a matricei?
// i) Care este cel mai mare element din vestul
// matricei?

// 1-a
// Sa se calculeze suma elementelor 
// de pe diagonala secundara.

void solutiepb1a() {
	int m = 0, n = 0;
	int x[100][100];
	citireFisier(x, m, n);
	afisareMatrice(x, m, n);
	cout << "Suma elementelor de pe diagonala secundara este : " << sumaElementeDiagSec(x, m, n) << "." << endl;
}

// 1-b
// Realizati suma elementelor situate deasupra
// diagonalei principale.

void solutiepb1b() {
	int m = 0, n = 0;
	int x[100][100];
	citireFisier(x, m, n);
	afisareMatrice(x, m, n);
	cout << "Suma elementelor de deasupra diagonalei principale este : " << sumaElementeDeasupraDiagPrin(x, m, n) << "." << endl;
}

// 1-c
// Afisati descrescator (dupa ce au fost sortate)
// elementele depe diagonala principala.

void solutiepb1c() {
	int m = 0, n = 0;
	int x[100][100];
	citireFisier(x, m, n);
	afisareMatrice(x, m, n);
	cout << "Elementele diagonalei principale in ordine descrescatoare sunt : ";
	vectorElementeDiagPrin(x, m, n);
}

// 1-d
// Cate elemente superprime situate sub
// diagonala secundara avem?

void solutiepb1d() {
	int m = 0, n = 0;
	int x[100][100];
	citireFisier(x, m, n);
	afisareMatrice(x, m, n);
	cout << "Sub diagonala secundara exista " << countElemSuperPrimeSubDiagSec(x, m, n) << " elemente superprime." << endl;
}

// 1-e
// Care este suma elementelor situate
// deasupra diagonalei secundare?

void solutiepb1e() {
	int m = 0, n = 0;
	int x[100][100];
	citireFisier(x, m, n);
	afisareMatrice(x, m, n);
	cout << "Suma elementelor situate deasupra diagonalei secundare este : " << sumaElementeDeasupraDiagSec(x, m, n) << "." << endl;
}

// 1-f
// Afisati media aritmetica a elementelor din
// regiunea de nord a matricei.

void solutiepb1f() {
	int m = 0, n = 0;
	int x[100][100];
	citireFisier(x, m, n);
	afisareMatrice(x, m, n);
	cout << "Media aritmetica a elementelor din regiunea de nord a matricei este : " << mediaAritElementeNord(x, m, n) << "." << endl;
}

// 1-g
// Cate elemente negative sunt in regiunea
// de sud a matricei?

void solutiepb1g() {
	int m = 0, n = 0;
	int x[100][100];
	citireFisier(x, m, n);
	afisareMatrice(x, m, n);
	cout << "In regiunea de sud exista " << countNegativeRegiuneSud(x, m, n) << " elemente negative." << endl;
}

// 1-h
// Cate elemente pare sunt in regiunea
// de est a matricei?

void solutiepb1h() {
	int m = 0, n = 0;
	int x[100][100];
	citireFisier(x, m, n);
	afisareMatrice(x, m, n);
	cout << "In regiunea de est exista " << countPareRegiuneEst(x, m, n) << " elemente pare." << endl;
}

// 1-i
// Care este cel mai mare element din vestul
// matricei?

void solutiepb1i() {
	int m = 0, n = 0;
	int x[100][100];
	citireFisier(x, m, n);
	afisareMatrice(x, m, n);
	cout << "Cel mai mare element din vestul matricei este : " << celMaiMareRegiuneVest(x, m, n) << "." << endl;
}