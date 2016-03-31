#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class ROT13
{protected :
std::string text ;
std::ifstream fichier ;
public :
ROT13();
ROT13(std::string texte);
void settexte(std::string texte);
std::string gettexte();
void cryptertexte ();
void crypterfichier();
~ROT13();
};
class chiffredecesar : public ROT13
{private:
int cle;
public:
chiffredecesar();
chiffredecesar(int k);
void cryptertexte();
void crypterfichier();
~chiffredecesar();};
class chiffreduche
{private:
 int cle;
 std::string texte;
 std::ifstream fichier;
 public:
 chiffreduche();
 chiffreduche(int k);
 void cryptertexte();
 void crypterfichier();
 void codage (char m ,std::string & n);
 void premierephase();
 void deuxiemephase();
 void settexte(std::string text);
 std::string gettexte();
 ~chiffreduche();};
 class chiffredevigenere
 {private:
 std::string texte;
 std::string cle;
 std::ifstream fichier;
 public:
 chiffredevigenere();
 chiffredevigenere(std::string text,std::string clee);
  void settexte(std::string text);
 std::string gettexte();
 void crypterfichier();
 void cryptertexte();
 ~chiffredevigenere();
 };
#endif
