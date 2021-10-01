//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
Memo1->Clear();
try{
String alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
String alpha0="abcdefghijklmnopqrstuvwxyz1234567890";
int a=alpha.Length();
String key=Edit1->Text;
String rez;
int n=0;
int k=key.Length();
int index[40],i,j,l=1,m;
String text=Edit2->Text;
int t=text.Length();
for(i=1;i<k+1;i++){
n=0;
for(j=1;j<a+1;j++){
if(key[i]==alpha[j] || key[i]==alpha0[j]){
n++;
index[i]=j;}}}
if(n==0){
       Memo1->Lines->Add("Для уникнення неспівпадінь введіть значення без знаків  пунктуації та прогалин англійськими літерами");
       return;}
for(i=1;i<t+1;i++){
n=0;
        for(j=1;j<a+1;j++){
                if(text[i]==alpha[j] || text[i]==alpha0[j]){
                n++;
                        if(l==k+1){
                                l=1;}
                        m=(j+index[l]-1)%(a);
                        if(m==0){
                                m=a;}
                        rez+=alpha[m];
                        break;
                }
        }
        l++;
        if(n==0){
       Memo1->Lines->Add("Для уникнення неспівпадінь введіть значення без знаків  пунктуації та прогалин англійськими літерами");
       return;
       }
}
Memo1->Lines->Add(rez);
}
catch(...){
ShowMessage("Заповніть поля Ключ і Текст");}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
    Memo1->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
Memo1->Clear();
try{
String alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
String alpha0="abcdefghijklmnopqrstuvwxyz1234567890";
int a=alpha.Length();
int n=0;
String key=Edit1->Text;
String rez;
int k=key.Length();
int index[40],i,j,l=1,m;
String text=Edit2->Text;
int t=text.Length();
for(i=1;i<k+1;i++){
n=0;
for(j=1;j<a+1;j++){
if(key[i]==alpha[j] || key[i]==alpha0[j]){
n++;
index[i]=j;}}}
if(n==0){
       Memo1->Lines->Add("Для уникнення неспівпадінь введіть значення без знаків  пунктуації та прогалин англійськими літерами");
       return;
       }
for(i=1;i<t+1;i++){
n=0;
        for(j=1;j<a+1;j++){
                if(text[i]==alpha[j] || text[i]==alpha0[j]){
                n++;
                        if(l==k+1){
                                l=1;}
                        m=(j+a-index[l]+1)%(a);
                        if(m==0){
                                m=a;}
                        rez+=alpha[m];
                        break;
                }
        }
       l++;
       if(n==0){
       Memo1->Lines->Add("Для уникнення неспівпадінь введіть значення без знаків  пунктуації та прогалин англійськими літерами");
       return;
       }
       }
Memo1->Lines->Add(rez);
}
catch(...){
ShowMessage("Заповніть поля Ключ і Текст");}
}
//---------------------------------------------------------------------------
