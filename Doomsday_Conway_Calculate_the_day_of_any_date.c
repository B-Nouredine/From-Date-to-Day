#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int Verifier_date(int y, int m, int d); // verifie si la date existe
int Calcul_doomsday(int y); // calcule le num de doomsday de l'annee en question 
int Doomsday_to_date(int doomsday, int y, int m, int d); // calcule le jour exacte de la date en qst (donne par un num)
void Number_to_day(int num); // change le num de ce doomsday en nom reel du jour

int main()
{
	int year, month, day;
	int doomsday_of_year=0;
	
	printf("Hey, tell me any date and I will tell you which day of the weak it is!\n");
	printf("Give me the year: ");
	scanf("%d",&year);
	printf("Give me the month: ");
	scanf("%d",&month);
	printf("Give me the day: ");
	scanf("%d",&day);
	
	if(Verifier_date(year, month, day)){
		printf("\n\nThis date is a: ");
		doomsday_of_year=Calcul_doomsday(year);
		Number_to_day(Doomsday_to_date(doomsday_of_year, year, month, day));
		printf("\n");
	}
	
return 0;
}

int Verifier_date(int y, int m, int d)
{
	int a=1;
	
	if(d<1){a=0;};
	if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
		if(d>31)
		a=0;
	}else if(m==4 || m==6 || m==9 || m==11){
		if(d>30)
		a=0;
	}else if(m==2){
		if(y%4==0){
			if(d>29)
			a=0;
		}else{
			if(d>28)
			a=0;
		}
	}else{
		a=0;
	}
return a;
}

int Calcul_doomsday(int y)
{
	int n,m,s=0;
	
	if((y-y%100)%400==0){
		s=2;
	}else if((y-y%100)%400==100){
		s=0;
	}else if((y-y%100)%400==200){
		s=5;
	}else if((y-y%100)%400==300){
		s=3;
	}else{
		printf("Erreur");
	}
	
	n=y%100;
	m=n%12;
	n=n/12;
	s+=n+m+m/4;
	s=s%7;
	
	return s;
	
}

int Doomsday_to_date(int doomsday, int y, int m, int d)
{
	int var; // numero du jour en qst
	int n=0; // numero de doomsday dans le moi
	
	if(m==3){
		n=14;
		var=abs(n-d) % 7;
		if(d>n){
			var+=doomsday;
			var%=7;
		}else if(d<n){
			var=doomsday-var;
			if(var<0){
				var+=7;
			}
		}else{
			var=doomsday;
		}
	}else if(m==4){
				n=4;
		var=abs(n-d) % 7;
		if(d>n){
			var+=doomsday;
			var%=7;
		}else if(d<n){
			var=doomsday-var;
			if(var<0){
				var+=7;
			}
		}else{
			var=doomsday;
		}
	}else if(m==5){
				n=9;
		var=abs(n-d) % 7;
		if(d>n){
			var+=doomsday;
			var%=7;
		}else if(d<n){
			var=doomsday-var;
			if(var<0){
				var+=7;
			}
		}else{
			var=doomsday;
		}
	}else if(m==6){
				n=6;
		var=abs(n-d) % 7;
		if(d>n){
			var+=doomsday;
			var%=7;
		}else if(d<n){
			var=doomsday-var;
			if(var<0){
				var+=7;
			}
		}else{
			var=doomsday;
		}
	}else if(m==7){
				n=11;
		var=abs(n-d) % 7;
		if(d>n){
			var+=doomsday;
			var%=7;
		}else if(d<n){
			var=doomsday-var;
			if(var<0){
				var+=7;
			}
		}else{
			var=doomsday;
		}
	}else if(m==8){
				n=8;
		var=abs(n-d) % 7;
		if(d>n){
			var+=doomsday;
			var%=7;
		}else if(d<n){
			var=doomsday-var;
			if(var<0){
				var+=7;
			}
		}else{
			var=doomsday;
		}
	}else if(m==9){
				n=5;
		var=abs(n-d) % 7;
		if(d>n){
			var+=doomsday;
			var%=7;
		}else if(d<n){
			var=doomsday-var;
			if(var<0){
				var+=7;
			}
		}else{
			var=doomsday;
		}
	}else if(m==10){
				n=10;
		var=abs(n-d) % 7;
		if(d>n){
			var+=doomsday;
			var%=7;
		}else if(d<n){
			var=doomsday-var;
			if(var<0){
				var+=7;
			}
		}else{
			var=doomsday;
		}
	}else if(m==11){
				n=7;
		var=abs(n-d) % 7;
		if(d>n){
			var+=doomsday;
			var%=7;
		}else if(d<n){
			var=doomsday-var;
			if(var<0){
				var+=7;
			}
		}else{
			var=doomsday;
		}
	}else if(m==12){
				n=12;
		var=abs(n-d) % 7;
		if(d>n){
			var+=doomsday;
			var%=7;
		}else if(d<n){
			var=doomsday-var;
			if(var<0){
				var+=7;
			}
		}else{
			var=doomsday;
		}
	}else if(m==1){
		if((y-y%100)%4==0)
		n=4;
		else
		n=3;
		
		var=abs(n-d) % 7;
		if(d>n){
			var+=doomsday;
			var%=7;
		}else if(d<n){
			var=doomsday-var;
			if(var<0){
				var+=7;
			}
		}else{
			var=doomsday;
		}
	}else if(m==2){
		if((y-y%100)%4==0)
		n=29;
		else
		n=28;
		
		var=abs(n-d) % 7;
		if(d>n){
			var+=doomsday;
			var%=7;
		}else if(d<n){
			var=doomsday-var;
			if(var<0){
				var+=7;
			}
		}else{
			var=doomsday;
		}
	}

return var;
}

void Number_to_day(int num)
{
	switch(num)
	{
	case 0: printf("Sunday");
	break;
	case 1: printf("Monday");
	break;
	case 2: printf("Tuesday");
	break;
	case 3: printf("Wednesday");
	break;
	case 4: printf("Thurday");
	break;
	case 5: printf("Friday");
	break;
	case 6: printf("Saturday");
	break;
	default: printf("error");
	break;	
	}
}
