#include "Klase.h"
#include "Pagrindinis.h"

Klase::Klase(void) // konstruktorius, vyksta duomenø nuskaitymas ið failø
{
	std::ifstream fd("Elementai.txt");
	fd >> n;
	for(int i = 0; i < n; i++)
		fd >> A[i].elementas >> A[i].metalas >> A[i].atomsk >> A[i].atomase;
	fd.close();
	std::ifstream fk("Metaluitampa.txt");
	fk >> m;
	for(int i = 0; i < m; i++)
		fk >> B[i].elem >> B[i].sk;
	fk.close();
	std::ifstream fl("Oksidacijoslaipsniai.txt");
	fl >> k;
	for(int i = 0; i < k; i++)
		fl >> C[i].element >> C[i].laipsniai;
	fl.close();
	std::ifstream fm("Druska.txt");
	fm >> l;
	for(int i = 0; i < l; i++)
		fm >> D[i].elemen >> D[i].atominmase;
	fm.close();
	std::ifstream ff("Reakcijos.txt");
	ff >> a;
	ff.ignore();
	for(int i = 0; i < a; i++){
		std::getline(ff, R[i].reakcija, '-');
		std::getline(ff, R[i].atsak, '\n');
	}
	ff.close();
}
double Klase::Mol(Elementas A[], int n, double mase, std::string chemelementas, Druska D[], int l, std::string raktas, double molsk) // skaièiuoja moliø skaièiø elemente
{
	double mol = 0;
	double mol1 = 0, mol2 = 0;
	double NA = 6.02 * pow(10, 23);
	for(int i = 0; i < n; i++)
		if(A[i].elementas == chemelementas)
			mol1 = mase / A[i].atomase;
	if(raktas != ""){
		for(int j = 0; j < l; j++)
			if(D[j].elemen == raktas)
				mol2 = D[j].atominmase;
	}
	if((molsk == 0) && (raktas == ""))
		mol = mol1;
	else if(molsk == 0)
		mol = mol1 + mol2;
	else mol = molsk / NA;
	return mol;
}
double Klase::Molsk(double mol) // skaièiuoja molekuliø skaièiø elemente
{
	double molsk = 0;
	double NA = 6.02 * pow(10, 23);
	molsk = NA * mol;
	return molsk;
}
double Klase::Molinemase(Druska D[], Elementas A[], int n, int l, double mol, std::string chemelementas) // skaièiuoja molinæ masæ
{
	double mase = 0;
	double NA = 6.02 * pow(10, 23);
	std::string laik;
	for(int i = 0; i < n; i++){
		if((chemelementas == "H2") || (chemelementas == "N2") || (chemelementas == "O2") || (chemelementas == "F2") || (chemelementas == "Cl2") || (chemelementas == "Br2") || (chemelementas == "I2"))
			laik = A[i].elementas + "2";
		else laik = A[i].elementas;
		if(l != 0){
		for(int j = 0; j < l; j++){
			if((laik + D[j].elemen) == chemelementas)
				mase = mol * (A[i].atomase + D[j].atominmase);
			}
		}
	    if(laik == chemelementas){
			if((chemelementas == "H2") || (chemelementas == "N2") || (chemelementas == "O2") || (chemelementas == "F2") || (chemelementas == "Cl2") || (chemelementas == "Br2") || (chemelementas == "I2"))
				mase = mol * (A[i].atomase * 2);
			else 
				mase = mol * A[i].atomase;
			}
		}
	return mase;
}
double Klase::Turis(Elementas A[], int n, double mol, std::string chemelementas, double konc) // skaièiuoja junginio tûrá
{
	double molsk = 0, mase = 0, turis = 0;
	double NA = 6.02 * pow(10, 23), VM = 22.4;
	if(konc == 0)
		turis = mol * VM;
	else turis = mol / konc;
	return turis;
}
double Klase::Molkoncentracija(double v, double mol) // skaièiuoja elemento molinæ koncentracijà
{
	double konc = 0;
	konc = mol / v;
	return konc;
}
double Klase::Koncmol(double v, double konc) // skaièiuoja elemento molinæ koncentracijà, tik kitu bûdu
{
	double mol = 0;
	mol = konc * v;
	return mol;
}
void Klase::Masesdalissk(Elementas A[], int n, std::string chemelementas, double atominemase, int & w1, int & w2) // skaièiuoja elemento masës dalá junginyje
{
	for(int i = 0; i < n; i++)
		if(A[i].elementas == chemelementas)
			w1 = (A[i].atomase / atominemase) * 100;
	w2 = 100 - w1;
}
double Klase::Masesdalisjung(Elementas A[], Druska D[], int n, int l, std::string chemelementas, std::string raktas) // skaièiuoja visà masës dalá junginyje
{
	double w = 0;
	double mr = 0;
	std::string laik;
	for(int i = 0; i < n; i++){
		laik = A[i].elementas;
		for(int j = 0; j < l; j++){
			if((laik + D[j].elemen) == chemelementas)
				mr = A[i].atomase + D[j].atominmase;
		}
	}
	for(int i = 0; i < n; i++)
		if(A[i].elementas == raktas)
			w = (A[i].atomase / mr) * 100;
	return w;
}
double Klase::Iseigask(Elementas A[], int n, double maseelem, std::string chemelementas, double mol, std::string raktas, Druska D[], int l) // skaièiuoja reakcijos iðeigà
{
	double wsi = 0;
	double w1 = 0, w2 = 0;
	double mase = 0;
	for(int i = 0; i < n; i++){
		if(A[i].elementas == chemelementas)
			w1 = A[i].atomase;
		if(D[i].elemen == raktas)
			w2 = D[i].atominmase;
	}
	mase = (w1 + w2) * mol;
	wsi = (maseelem / mase) * 100;
	return wsi;
}
double Klase::Mase(Elementas A[], int n, double mol, double wsi, double mase, std::string raktas) // skaièiuoja elemento masæ
{
	double mt = 0;
	double molmase = 0;
	mt = (mase / wsi) * 100;
	for(int i = 0; i < n; i++)
		if(A[i].elementas == raktas)
			molmase = A[i].atomase;
	mase = molmase * mol;
	return mase;
}
double Klase::Teorine(double mase, double wsi) // skaièiuoja reakcijos teorinæ iðeigà
{
	double mt = 0;
	mt = (mase / wsi) * 100;
	return mt;
}
void Klase::Reakcijos(Reakcija R[], int a, int & index, int & index2, int & index3, int & index4, int & index5) // parenka atsitiktines penkias reakcijos lygtis ið masyvo
{
	srand(time(NULL));
	index = rand() % 21 + 1;
	index2 = rand() % 21 + 1;
	index3 = rand() % 21 + 1;
	index4 = rand() % 21 + 1;
	index5 = rand() % 21 + 1;
}
