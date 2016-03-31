#include"chiffre_de_vernam.h"
#include<time.h>
using namespace std;


chiffredevernam :: chiffredevernam()
{};
chiffredevernam :: ~chiffredevernam()
{};
void chiffredevernam :: settexte(string texte)
{text=texte;}
void chiffredevernam :: setcle()
{
int nbr_aleatoire;
srand(time(NULL));
int a=(unsigned)text.length();
for(int i=0;i<a;i++)
{if (text[i] != ' ') {nbr_aleatoire=rand() % 26;
                      cle.push_back(nbr_aleatoire);}}}
std::string chiffredevernam :: gettexte()
{return text;}
void chiffredevernam :: getcle()
{
    int a=(unsigned) cle.size();
    for(int i=0;i<a;i++)
{cout<<cle[i];
cout<<" "<<endl;}}
void chiffredevernam :: cryptertexte()
{
string texte;
int k=0;
int code;
int a=(unsigned) text.size() ;
for(int i=0;i<a;i++)
{code = (int) text[i];
if (code>96 && code<123) {code=code-32;}
if (code>64 && code<91) {code = (code + cle[k]);
                         if(code > 90) {code=code-90 + 64;}
                         k++;
                         texte=texte + ((char) code);}
                         else if (text [i] == ' ') {texte=texte + ' ';}
                        else if (text [i] == '\n') {texte=texte + '\n';}
}
text=texte;}
void chiffredevernam :: decryptertexte()
{int k=0;
string texte;
int code;
int a=(unsigned)text.size() ;
for(int i=0;i<a;i++)
{code=(int)text[i];
if (code>64 && code <91) {code=code - cle [k];
                          if(code<65) {code=91 -(65 - code); }
                          k++;
                          texte = texte +((char) code);}
                          else {texte = texte + ' ';}}
 text = texte;}
void chiffredevernam :: crypterfichier()
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

