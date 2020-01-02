#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<math.h>
main()
{
	int e,ogrencisayi,sorusayisi,i,puan=0,yanlis=0,d;
	printf("Soru adedi:\n");
	scanf("%d",&sorusayisi);
	char cevap[sorusayisi],verilencevap[sorusayisi];
	for(i=0;i<sorusayisi;i++){
	printf("%d. Sorunun cevabi\n",i+1);
    scanf("%s",&cevap[i]);
}
printf("Ogrenci Sayisi\n");
scanf("%d",&ogrencisayi);
int nott[ogrencisayi-1],ogrencino[ogrencisayi];
for(i=0;i<ogrencisayi;i++)
{
	printf("Ogrencinin Numarasi\n");
	scanf("%d",&ogrencino[i]);
	puan=0;
	yanlis=0;
   for(d=1;d<=sorusayisi;d++)
   {
   	printf("%d. Verilen Cevap\n(Bos ise 0 girin)\n",d);
    scanf("%s",&verilencevap[d]);
   }
  for(d=1;d<=sorusayisi;d++)
{
  	if(cevap[d-1]==verilencevap[d])
{
  	puan+=4;
}
	else if(verilencevap[d]=='0')
	{
		puan+=0;
	}
	else
	{
	yanlis++;
	}
  }
  puan=puan-yanlis;
  nott[i]=puan;
}
    e=ogrencisayi;
    for(i=0;i<e;i++)
    {
	printf("%d Numarali ogrencinin puani %d\n",ogrencino[i],nott[i]);
	
}
int byk;
byk=nott[0];
for(i=0;i<e;i++)
{
if(byk<nott[i])
{
	byk=nott[i];
	}	
	else 
	{
		byk=byk;
	}
}
printf("%d En buyuk Not:\n",byk);
int kck,ortalama,n,j,d1;
kck=nott[0];
for(i=0;i<e;i++)
{
if(kck>nott[i])
{
	kck=nott[i];
	}	
	else 
	{
		kck=kck;
	}
}
printf("%d En dusuk not\n",kck);
for(i=0;i<e;i++)
{
	ortalama+=nott[i];
}
printf("Rangei budur: %d\n",byk-kck);
printf("Ortalamasi budur: %d\n",ortalama/e);
for(i=n-1;i>0;i--)
		for(j=0;j<i;j++)
		if(nott[j]>nott[j+1])
		{
			d1=nott[j];
			nott[j]=nott[j+1];
			nott[j+1]=d1;
		}
e=ogrencisayi;
if(e%2==1)
{
	i=(e+1)/2;
	printf("Medyani budur: %d\n",nott[i]);
}
else
{
	i=e/2;
	printf("Medyanlaribudurd\n",nott[i],nott[i+1]);
}
}
//Kaynakça:Kaan Kizilates,Mert Can Gunay,Caylak yazilimci,Fredosarusa baktim ama hicbirsey anlamadim,Murat Yucedag,
//ESAT YUSUF DALBUDAK 2019280023










