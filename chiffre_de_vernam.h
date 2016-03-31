#ifndef CHIFFRE_DE_VERNAM_H_INCLUDED
#define CHIFFRE_DE_VERNAM_H_INCLUDED
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include<cstdlib>




class chiffredevernam
{private:
std::vector<int> cle;
std::string text ;
std::ifstream fichier ;
public:
chiffredevernam();
void settexte(std::string texte);
std::string gettexte();
void cryptertexte();
void crypterfichier();
void decryptertexte();
void decrypterfichier();
void setcle();
void getcle();
~chiffredevernam();
};


#endif // CHIFFRE_DE_VERNAM_H_INCLUDED
