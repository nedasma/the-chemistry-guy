#pragma once
#include <fstream>
#include <string>
#include <cmath>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>  

struct Elementas{
			std::string elementas;
			char metalas;
			int atomsk;
			int atomase;
};
struct Metalas{
			std::string elem;
			int sk;
};
struct Oksidacija{
			std::string element;
			int laipsniai;
};

struct Druska{
			std::string elemen;
			int atominmase;
};

struct Reakcija{
			std::string reakcija;
			std::string atsak;
};

class Klase
{
public:
	int n, m, k, l, a;
	Elementas A[100]; Metalas B[100]; Oksidacija C[100]; Druska D[100]; Reakcija R[100];
public:
	Klase(void);
	double Klase::Mol(Elementas A[], int n, double mase, std::string chemelementas, Druska D[], int l, std::string raktas, double molsk);
	double Klase::Molsk(double mol);
	double Klase::Molinemase(Druska D[], Elementas A[], int n, int l, double mol, std::string chemelementas);
	double Klase::Turis(Elementas A[], int n, double mol, std::string chemelementas, double konc);
	double Klase::Molkoncentracija(double v, double mol);
	double Klase::Koncmol(double v, double konc);
	void Klase::Masesdalissk(Elementas A[], int n, std::string chemelementas, double atominemase, int & w1, int & w2);
	double Klase::Masesdalisjung(Elementas A[], Druska D[], int n, int l, std::string chemelementas, std::string raktas);
	double Klase::Iseigask(Elementas A[], int n, double maseelem, std::string chemelementas, double mol, std::string raktas, Druska D[], int l);
	double Klase::Mase(Elementas A[], int n, double mol, double wsi, double mase, std::string raktas);
	double Klase::Teorine(double mase, double wsi);
	void Klase::Reakcijos(Reakcija R[], int a, int & index, int & index2, int & index3, int & index4, int & index5);
};


