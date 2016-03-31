#include "chiffrement_RSA.h"
#include<sstream>
using namespace std ;



RSA :: RSA ()
{};
RSA :: ~RSA ()
{};
void RSA :: settexte (string texte)
{text=texte;}
std::string RSA :: gettexte ()
{return text;}
int RSA::gete()
{
    return e ;
}
int RSA::getphi()
{
    return phi ;
}
int RSA :: pgcd (int a, int b)
{int c;
while(b != 0)
{c=a;
a=b;
b= c % a;}
return a;
}
 int* RSA ::  euclide_etendu(int a, int b)
{int* z;
z=(int*)malloc(3);
int u=1,uu=0;
int v=0,vv=1;
int r,rr,rs,vs,us,q;
r=a;
rr=b;
while(rr != 0)
{q= r / rr;
rs = r;
us = u;
vs = v;
r = rr;
u = uu;
v = vv;
rr = rs - q *rr;
uu = us - q*uu;
vv = vs - q*vv;
};
*z=r;
*(z+1)=u;
*(z+2)=v;
return z;
};
int RSA :: puissance_modulo(int a, int b,int c)
{
     long x=1;
    long long y=a;
    while(b > 0)
        {
        if((b % 2) == 1){
            x=(x*y)%c;
        }
        y = (y*y)%c;
        b = b / 2;
    }
    return (int) x%c;
}
void RSA :: transformertexte()
{int code;
string texte;
for(int i=0;i<text.length();i++)
{ code = (int) text[i];
  std::ostringstream oss;
  oss << code;
  std::string resultat = oss.str();
  if(code<100) {resultat='0'+resultat;}
  texte=texte + resultat;
  texte= texte + ' ';}

int k=1;
string chaine;
for(int i=0;i< texte.length();i++ )
{if (texte[i] != ' ')
                    {chaine=chaine+texte [i];
                    k++;
                    if(k % 5 ==0) {chaine = chaine + ' ';
                                   k=1;}}}
text=chaine;
}
int RSA :: inverse_module (int b , int n)
{int n0 = n;
int b0=b;
int t0 = 0;
int t= 1 ;
int q = n0 / b0 ;
int r = n0 - q * b0;
int temp;
while (r>0)
{temp = t0 - q * t;
if (temp >= 0) {temp = temp % n;}
               else {temp=n - ((-temp) %n); }
t0 =t;
t=temp;
n0=b0;
b0=r;
q=n0 / b0;
r = n0 - q * b0;}
return t;}
void RSA :: cle_public(int l,int k)
{p =l;
q =k;
n = p*q;
phi = (p-1)*(q-1);
e=max(p,q);
bool test =false;
while(test == false && e < phi)
{e++;
if(pgcd(e,phi)==1) {test = true;}}}
void RSA :: cle_privee()
{d=inverse_module(e,phi);}
void RSA :: chiffrertexte()
{int k=1;
string chaine,texte;
int message;
for(int i=0;i< text.length();i++ )
{if (text[i] != ' ')
                     {chaine=chaine+text [i];
                     k++;
                     if(k % 4 ==0 || i==text.length()-1) {istringstream ss(chaine);
                                   int result;
                                   ss >> result ? result : 0;
                                   chaine = "";
                                   if (result != 0)
                                   {
                                   message = puissance_modulo(result,e,n);
                                   std::ostringstream oss;
                                   oss << message;
                                   std::string resultat = oss.str();
                                   texte = texte + resultat;
                                   texte=texte + ' ';
                                    k=1;}}}}
text = texte ;
}
void RSA :: getcle()
{cout<<"n=";
cout<<n<<endl;
cout<<"phi = ";
cout<<phi<<endl;
cout<<"e=";
cout<<e<<endl;
cout<<"d=";
cout<<d<<endl;}
void RSA :: dechiffrertexte()
{string chaine,texte;
char caractere;
for(int i=0;i<text.length();i++)
{if(text[i] != ' ')
                   {chaine=chaine + text[i];}
                   else {istringstream ss(chaine);
                         int result;
                         ss >> result ? result : 0;
                         chaine = "";
                         int message = puissance_modulo(result,d,n);
                         caractere=(char)message;
                         texte = texte + caractere;}}
text=texte;}
void RSA :: chiffrerfichier()
{string fich;
cout<<"donner le nom du fichier ";
cin>>fich;
fichier.open(fich.c_str(), ios::in);
std::string ligne;
while(getline(fichier, ligne))
        {
                settexte(ligne);
                chiffrertexte();
                gettexte();
        }
};
void RSA :: dechiffrerfichier()
{string fich;
cout<<"donner le nom du fichier ";
cin>>fich;
fichier.open(fich.c_str(), ios::in);
std::string ligne;
while(getline(fichier, ligne))
        {
                settexte(ligne);
                dechiffrertexte();
                gettexte();
        }
};
