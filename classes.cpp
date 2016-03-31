#include "classes.h"
 using namespace std ;
 ROT13:: ROT13()
 {};
 ROT13 :: ~ROT13()
 {};
 ROT13 :: ROT13(string texte)
 {text=texte;
 }
 void ROT13 :: settexte(string texte)
 {text=texte;}
 string ROT13 :: gettexte()
 {return text;}
 void ROT13 :: cryptertexte()
 {
{ int k;
         int b=(unsigned)text.length();
for(int i=0;i<b;i++)
{if (text[i] != ' ')
{
k=(int) text[i];
if ((k>64 && k <78) || (k<110 && k>96))
    {text[i]=(char) k+13;}
                          else if (k>77 && k<91)
                                                {text[i]=(char) (64 + 13 - (90-k));}
                                                                                    else if(k>109 && k<123)
                                                                                          {text[i]=(char) (96 + 13 - (122 - k));}}}}};
 void ROT13 :: crypterfichier()
{string fich;
cout<<"donner le nom du fichier ";
cin>>fich;
fichier.open(fich.c_str(), ios::in);
std::string ligne;
while(getline(fichier, ligne))
        {
                settexte(ligne);
                cryptertexte();
                cout<<gettexte();
        }
};
chiffredecesar::chiffredecesar()
{};
chiffredecesar::chiffredecesar(int k)
{cle=k;};
chiffredecesar::~chiffredecesar()
{};
void chiffredecesar :: cryptertexte()
{
int k;
int b=(unsigned)text.length();
for(int i=0;i<b;i++)
{if (text[i] != ' ')
{
k=(int) text[i];
if ((k>64 && k <(90-cle+1)) || (k<(122-cle+1) && k>96))
    {text[i]=(char) k+cle;}
                          else if(k>64 && k<91)
                              {text[i]=(char) (64 + cle - (90-k));}
                                                                                    else if(k>96 && k<123)
                                                                                          {text[i]=(char) (96 + cle - (122 - k));}}}}

void chiffredecesar :: crypterfichier()
{string fich;
cout<<"donner le nom du fichier ";
cin>>fich;
fichier.open(fich.c_str(), ios::in);
std::string ligne;
while(getline(fichier, ligne))
        {
                settexte(ligne);
                cryptertexte();
                cout<<gettexte();
        }
};
chiffreduche::chiffreduche()
{};
chiffreduche::chiffreduche(int k)
{cle=k;};
chiffreduche :: ~chiffreduche()
{};
void chiffreduche :: codage (char m ,string & n)
{if(m == 'a' || m == 'A') {n= '6';}
                         else if (m=='b' || m=='B') {n= "38";}
                         else if (m=='c' || m=='C') {n= "32";}
                         else if (m=='d' || m=='D') {n= '4';}
                         else if (m=='e' || m=='E') {n= '8';}
                         else if (m=='f' || m=='F') {n= "30";}
                         else if (m=='g' || m=='G') {n= "36";}
                         else if (m=='h' || m=='H') {n= "34";}
                         else if (m=='i' || m=='I') {n= "39";}
                         else if (m=='j' || m=='J') {n= "31";}
                         else if (m=='k' || m=='K') {n= "78";}
                         else if (m=='l' || m=='L') {n= "72";}
                         else if (m=='m' || m=='M') {n= "70";}
                         else if (m=='n' || m=='N') {n= "76";}
                         else if (m=='o' || m=='O') {n= '9';}
                         else if (m=='p' || m=='P') {n= "79";}
                         else if (m=='q' || m=='Q') {n= "71";}
                         else if (m=='r' || m=='R') {n= "58";}
                         else if (m=='s' || m=='S') {n= '2';}
                         else if (m=='t' || m=='T') {n= '0';}
                         else if (m=='u' || m=='u') {n= "52";}
                         else if (m=='v' || m=='V') {n= "50";}
                         else if (m=='w' || m=='W') {n= "56";}
                         else if (m=='x' || m=='X') {n= "54";}
                         else if (m=='y' || m=='Y') {n= '1';}
                         else if (m=='z' || m=='Z') {n= "59";};};
void chiffreduche ::deuxiemephase()
{int l =0;
string text;
int b=(unsigned)texte.length();
for(int i=0;i<b;i++)
{if (texte[i] != ' ') {text =text + texte[i];
                      l++;}
                      if (l % 5 == 0 ) {text=text + ' ';
                                        l=0;}
}
texte=text;} ;
void chiffreduche :: premierephase()
{string text;
string m;
int b=(unsigned)texte.length();
for(int i=0;i<b;i++)
{if (texte[i] !=' ') {codage(texte[i],m);
                       text = text + m;
                       text = text + ' '; }}
texte = text ;}
void chiffreduche ::cryptertexte()
{
std::string text;
premierephase();
deuxiemephase();
    std::ostringstream oss;
    oss << cle;
    std::string result = oss.str();
    cout <<result<<endl;
    int k=0;
    int b=(unsigned)texte.length();
for(int i=0;i<b;i++)
{
if (texte[i] != ' ')
                   {
                   int nombre;
                   nombre = (int) texte[i] - 48;
                   int nombre1;
                   nombre1=(int) result[k] - 48;
                   k ++;
                   int somme,somme1;
                   somme = (nombre + nombre1) ;
                   somme1=somme % 10;
                   std::ostringstream oss;
                   oss << somme1;
                   std::string resultat = oss.str();

                   text = text + resultat;}
                   else {k=0;
                        text= text + ' ';}

                   }
  texte=text;
}
void chiffreduche :: settexte(std::string text)
{texte =text;}
string chiffreduche :: gettexte ()
{return texte  ;}
void chiffreduche :: crypterfichier()
{string fich;
cout<<"donner le nom du fichier ";
cin>>fich;
fichier.open(fich.c_str(), ios::in);
std::string ligne;
while(getline(fichier, ligne))
        {
                settexte(ligne);
                cryptertexte();
                gettexte();
        }
};
chiffredevigenere::chiffredevigenere()
{};
chiffredevigenere::chiffredevigenere(std::string text,std::string clee)
{texte=text;
cle=clee;}
chiffredevigenere::~chiffredevigenere()
{};
string chiffredevigenere :: gettexte()
{return texte ;}
void chiffredevigenere :: settexte (std::string text)
{texte=text;}
void chiffredevigenere :: cryptertexte()
{string text;
int k=0,result;
int b=(unsigned)texte.length();
for(int i=0; i<b;i++)
{if(texte[i] != ' ' && texte[i] != '\n') {int code;
                      code=(int) texte[i];
                      if (code>96 && code <123) {code=code-32;}
                      int code1;
                      code1=(int) cle[k];
                      if (code1>96 && code1<123) {code1=code1-97;}
                                                 else {code1 = code1 - 65;}
                      k++;
                      int a=(unsigned)cle.length();
                      if (k>=a) {k=0;}
                      result=(code+code1);
                      if(result>90) {result=(result-90+64);}
                      string text1;
                      text1=(char) result;
                      text=text+ text1; }
                      else if(texte[i]== ' ') {text=text+ ' ';}
                      else if(texte[i]== '\n') {text=text+ '\n';}
}

texte=text;}
void chiffredevigenere :: crypterfichier()
{string fich;
cout<<"donner le nom du fichier ";
cin>>fich;
fichier.open(fich.c_str(), ios::in);
std::string ligne;
while(getline(fichier, ligne))
        {
                settexte(ligne);
                cryptertexte();
                gettexte();
        }
};
