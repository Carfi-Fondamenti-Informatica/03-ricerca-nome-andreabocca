#include <iostream>
using namespace std;

int main() {
   char lista[3][5]={"","",""};
   char nome[5]={""};
   bool a=0,b=0,c=0;

   cin>>lista[0];
   cin>>lista[1];
   cin>>lista[2];
   cout<<endl;
   cin>>nome;

   a=(((nome[0]==lista[0][0])and(nome[1]==lista[0][1]))and((nome[2]==lista[0][2])and(nome[3]==lista[0][3])));
   b=(((nome[0]==lista[1][0])and(nome[1]==lista[1][1]))and((nome[2]==lista[1][2])and(nome[3]==lista[1][3])));
   c=(((nome[0]==lista[2][0])and(nome[1]==lista[2][1]))and((nome[2]==lista[2][2])and(nome[3]==lista[2][3])));

   if (a==1) {
       cout<<0;
   } else if (b==1) {
       cout<<1;
   } else if (c==1) {
       cout<<2;
   }

   return 0;
}
