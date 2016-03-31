#ifndef CHIFFREMENT_RSA_H_INCLUDED
#define CHIFFREMENT_RSA_H_INCLUDED
#include <iostream>
#include <string>
#include<cstdlib>
#include <fstream>





class RSA
{private:
int p,q,n,phi; //cle publique
int e; //cle publique
int d; //cle privée
std::string text;
std::ifstream fichier;
public:
RSA ();
void settexte(std::string texte);
int gete();
int getphi();
std::string gettexte();
void getcle();
void transformertexte();
int inverse_module (int b , int n);
void cle_public(int k,int l);
void cle_privee();
void chiffrertexte();
void chiffrerfichier();
void dechiffrertexte();
void dechiffrerfichier();
int puissance_modulo(int x,int k,int n);
int* euclide_etendu (int a , int b);
int pgcd(int a , int b);
~RSA();
};


#endif // CHIFFREMENT_RSA_H_INCLUDED
