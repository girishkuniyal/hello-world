#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
int i,k,t;
for(i=0;i<=100;i++)
{
clrscr();
setbkcolor(i/12);
printf("\n\t\t\t\tDownloading\t\t\t\t\t\n\n\n\n\n");
	for(int s=19;s>=0;s--)
	{
	printf("\t");
	}

gotoxy(38,8);
printf("%d%",i);
gotoxy(26,9);
		for(int l=0;l<=27;l++)
		{
		printf(".");delay(15);
		}
}
clrscr();
printf("\n\n\n\n\n\t\t\t    DOWNLOADING COMPLETE\t\t\t\t");
delay(5000);
closegraph();
}
