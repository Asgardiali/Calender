#include<stdio.h>
#include<stdlib.h>

int main(void){
	 int yil;                                            // De�i�ken tan�mlamalar� yapt�m.
	 int ay=1;
	 int gun=1;
	 printf("Please Enter Year:\n");                      //Kullan�c�dan istenilen y�l� girmesini istedim.
	 scanf("%d",&yil);

	 
 for(ay=1;ay<=12;ay++)                                       // Aylar� for d�ng�s� olarak al�yorum.
	{
		for(gun=1;gun<=31;gun++)                                // G�nleri for d�ng�s� olarak al�yorum.
		{

 switch(ay) {                                                //Switch case yap�s�n� kullanarak aylar� g�nleri s�rayla ekrana basmas�n� sa�lad�m.
		case 1:
			printf(" %d January %d\n\t",gun,yil);
			printf("\n");
			break;

  		case 2:
  			if(yil==1996)
			  {
  				if (gun>=29){break;}
			  }
			  else
			  {
			  	if(gun>=28){break;}
			  }

			printf(" %d February %d\n\t",gun,yil);
			printf("\n");
			break;
		case 3:
  			printf(" %d March %d\n\t",gun,yil);
  			printf("\n");
			break;
		case 4:
			if(gun>=31){
				break;
			}
			printf(" %d April %d\n\t",gun,yil);
			printf("\n");
			break;
		case 5:
			printf(" %d May %d\n\t",gun,yil);
			printf("\n");
			break;
		case 6:
			if(gun>=31){
				break;
			}
			printf(" %d June %d\n\t",gun,yil);
			printf("\n");
			break;
		case 7:
			printf(" %20d July %d\n\t",gun,yil);
			printf("\n");
			break;
  		case 8:
			printf("%20d August %d\n\t",gun,yil);
			printf("\n");
			break;
		case 9:
			if(gun>=31){
				break;
			}
			printf("%20d September %d\n\t",gun,yil);
			printf("\n");
			break;
		case 10:
			printf("%20d October %d\n\t",gun,yil);
			printf("\n");
			break;
		case 11:
			if(gun>=31){
				break;
			}
			printf("%20d November %d\n\t",gun,yil);
			printf("\n");
			break;
		case 12:
			printf("%20d December %d\n\t",gun,yil);
			printf("\n");
			break;
		}

		}
	}

}

