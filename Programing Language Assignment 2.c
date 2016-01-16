/*
name:                     Emre HIZAL
no:                       12011064
date:                     29.11.2015
e-mail:                   emrehizal_772@hotmail.com
compiler used:            GCC
IDE:                      DEV-C++
operating system:         windows 7 home basic
*/ 






#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//person struct tanımlaması 
typedef struct {
	char name;
	char surname;
	char birthdate[11];
	char gender;
    unsigned short int  id;
	char *horoscope;
}Person;

//burçları bulan fonksiyon
char *findHoroscope(char *birthdate){
	char *horoscope;
	if(((birthdate[4]==51)&&(birthdate[0]==50)&&(birthdate[1]!=0))||((birthdate[4]==52)&&((birthdate[0]==48)||(birthdate[0]==49))))
         horoscope="aries";
    if(((birthdate[4]==52)&&(birthdate[0]==50))||((birthdate[4]==53)&&((birthdate[0]==48)||(birthdate[0]==49))))
	     horoscope="taurus";
	if(((birthdate[4]==53)&&(birthdate[0]==50)&&(birthdate[1]!=0))||((birthdate[4]==54)&&((birthdate[0]==48)||(birthdate[0]==49))))
	     horoscope="gemini";
	if(((birthdate[4]==54)&&(birthdate[0]==50)&&(birthdate[1]!=0))||((birthdate[4]==55)&&((birthdate[0]==48)||(birthdate[0]==49))))	
	     horoscope="cancer"; 	      
    if(((birthdate[4]==55)&&(birthdate[0]==50)&&(birthdate[1]>50))||((birthdate[4]==56)&&((birthdate[0]==48)||(birthdate[0]==49)))) 
	     horoscope="leo";
    if(((birthdate[4]==56)&&(birthdate[0]==50)&&(birthdate[1]>50))||((birthdate[4]==57)&&((birthdate[0]==48)||(birthdate[0]==49)))) 
	     horoscope="virgo";
    if(((birthdate[4]==57)&&(birthdate[0]==50)&&(birthdate[1]>50))||(((birthdate[4]==48)&&(birthdate[3]==49))&&((birthdate[0]==48)||(birthdate[0]==49))))
	     horoscope="libra"; 
	if((((birthdate[4]==48)&&(birthdate[3]==49))&&(birthdate[0]==50)&&(birthdate[1]>50))||(((birthdate[4]==49)&&(birthdate[3]==49))&&((birthdate[0]==48)||(birthdate[0]==49))))
	     horoscope="scorpio";
    if((((birthdate[4]==49)&&(birthdate[3]==49))&&(birthdate[0]==50)&&(birthdate[1]>49))||(((birthdate[4]==50)&&(birthdate[3]==49))&&((birthdate[0]==48)||(birthdate[0]==49))))
	     horoscope="sagittarius";
	if((((birthdate[4]==50)&&(birthdate[3]==49))&&(birthdate[0]==50)&&(birthdate[1]>49))||(((birthdate[4]==49)&&(birthdate[3]==48))&&((birthdate[0]==48)||(birthdate[0]==49))))
	     horoscope="capricorn";
	if((((birthdate[4]==49)&&(birthdate[3]==48))&&(birthdate[0]==50)&&(birthdate[1]>48))||(((birthdate[4]==50)&&(birthdate[3]==48))&&((birthdate[0]==48)||(birthdate[0]==49))))     
	     horoscope="aquarius";
	if((((birthdate[4]==50)&&(birthdate[3]==48))&&(birthdate[0]==50))||(((birthdate[4]==51)&&(birthdate[3]==48))&&((birthdate[0]==48)||(birthdate[0]==49))))
	     horoscope="pisces";     
	
	return horoscope;
	
}
// kişi ismine göre sıralama yapan fonksiyon 
Person *personName(int numbofPerson,Person *person){
	int i,j;
	Person *personName;//esas listenin bozulmaması için yedek liste tanımlaması 
	Person tmp;//sıralama esnasında değişim işlemini gerçekleştirmek için
	personName=(Person*)malloc(numbofPerson*sizeof(Person));
	for (i=0;i<numbofPerson;i++)
	     personName[i]=person[i];
	

	   
	for (i=0;i<numbofPerson-1;i++){
		
		for (j=i+1;j<numbofPerson;j++){
			if(personName[i].name==personName[j].name){
				if(personName[i].id>personName[j].id){
					tmp=personName[i];
					personName[i]=personName[j];
					personName[j]=tmp;
					
				}
				   
			}
			
		    if(personName[i].name>personName[j].name){
		    	tmp=personName[i];
		    	personName[i]=personName[j];
		    	personName[j]=tmp;
		    	
			     
			}
		    
		    
      	}
      	
      	
    } 
    return personName ;
	
}
// kişi soyismine göre sıralama yapan fonksiyon 
Person *personSurname(int numbofPerson,Person *person){
	int i,j;
	Person *personSurname;//esas listenin bozulmaması için yedek liste tanımlaması 
	Person tmp;//sıralama esnasında değişim işlemini gerçekleştirmek için
	personSurname=(Person*)malloc(numbofPerson*sizeof(Person));
	for (i=0;i<numbofPerson;i++)
	     personSurname[i]=person[i];
	

	   
	for (i=0;i<numbofPerson-1;i++){
		
		for (j=i+1;j<numbofPerson;j++){
			if(personSurname[i].surname==personSurname[j].surname){
				if(personSurname[i].id>personSurname[j].id){
					tmp=personSurname[i];
					personSurname[i]=personSurname[j];
					personSurname[j]=tmp;
					
				}
				   
			}
			
		    if(personSurname[i].surname>personSurname[j].surname){
		    		tmp=personSurname[i];
					personSurname[i]=personSurname[j];
					personSurname[j]=tmp;
		    	
			     
			}
		    
		    
      	}
      	
      	
    } 
    return personSurname ;
	
}
//doğum tarihine göre sıralama yapan fonksiyon
Person *personBirthdate(int numbofPerson,Person *person){
	int i,j;
	Person *personBirthdate;//esas listenin bozulmaması için yedek liste tanımlaması
	Person tmp ;//sıralama esnasında değişim işlemini gerçekleştirmek için
	personBirthdate=(Person*)malloc(numbofPerson*sizeof(Person));
	for(i=0;i<numbofPerson;i++)
	    personBirthdate[i]=person[i];
	 
	for(i=0;i<numbofPerson-1;i++){
		for(j=i+1;j<numbofPerson;j++){
			if(personBirthdate[i].birthdate[8]>personBirthdate[j].birthdate[8]){
				tmp=personBirthdate[i];
				personBirthdate[i]=personBirthdate[j];
				personBirthdate[j]=tmp;
			}
			if(personBirthdate[i].birthdate[8]==personBirthdate[j].birthdate[8]){
				if (personBirthdate[i].birthdate[9]>personBirthdate[j].birthdate[9]){
					 tmp=personBirthdate[i];
				     personBirthdate[i]=personBirthdate[j];
				     personBirthdate[j]=tmp;
					
				}
				if(personBirthdate[i].birthdate[9]==personBirthdate[j].birthdate[9]){
					if(personBirthdate[i].birthdate[3]>personBirthdate[j].birthdate[3]){
						tmp=personBirthdate[i];
				        personBirthdate[i]=personBirthdate[j];
				        personBirthdate[j]=tmp;
						
					}
					if (personBirthdate[i].birthdate[3]==personBirthdate[j].birthdate[3]){
						if(personBirthdate[i].birthdate[4]>personBirthdate[j].birthdate[4]){
							tmp=personBirthdate[i];
				            personBirthdate[i]=personBirthdate[j];
				            personBirthdate[j]=tmp;
						}
						if(personBirthdate[i].birthdate[4]==personBirthdate[j].birthdate[4]){
							if(personBirthdate[i].birthdate[0]>personBirthdate[j].birthdate[0]){
								tmp=personBirthdate[i];
				                personBirthdate[i]=personBirthdate[j];
				                personBirthdate[j]=tmp;
								
								
							}
						}
					}
				}
			}
		}
	}    
	return personBirthdate;
}
//cinsiyete göre sıralama yapan fonksiyon
Person *personGender(int numbofPerson,Person *person){

    int i,j,count;
    Person *personGender;//esas listenin bozulmaması için yedek liste tanımlaması
    
    personGender=(Person*)malloc(numbofPerson*sizeof(Person));
   
    count=0;
    for (i=0;i<numbofPerson;i++){
    	if(person[i].gender==70){
    		personGender[count]=person[i];
    		
    		count++;
		}
		
   }
   for(i=0;i<numbofPerson;i++){
   	   if(person[i].gender==77){
   	   	   personGender[count]=person[i];
   	   	   count ++;
   	   	   
		}
   }
    
    
	     
   return personGender;
}
//burçlara göre sıralama yapan fonksiyon 
Person *personHoroscope(int numbofPerson,Person *person){
	int i,j,k;// k aynı harflerin tespit edilmesi için değişken
	Person *personHoroscope;//esas listenin bozulmaması için yedek liste tanımlaması
	Person tmp;//sıralama esnasında değişim işlemini gerçekleştirmek için
	personHoroscope=(Person*)malloc(numbofPerson*sizeof(Person));
	for (i=0;i<numbofPerson;i++){
		personHoroscope[i]=person[i];
	}
	for (i=0;i<numbofPerson-1;i++){
		for(j=i+1;j<numbofPerson;j++){
			k=0;
			while(((personHoroscope[i].horoscope[k])==(personHoroscope[j].horoscope[k]))&&personHoroscope[i].horoscope[k])
			     k++;
			if(k>3){
				if(personHoroscope[i].id>personHoroscope[j].id){
					tmp=personHoroscope[i];
					personHoroscope[i]=personHoroscope[j];
					personHoroscope[j]=tmp;
					
				}
				
			} 
			else {
				if(personHoroscope[i].horoscope[k]>personHoroscope[j].horoscope[k]){
					tmp=personHoroscope[i];
					personHoroscope[i]=personHoroscope[j];
					personHoroscope[j]=tmp;
				}
			}   
		}
	}
	return personHoroscope;
}
//kriterlere göre sıralanmış listeleri ekrana yazdıran fonksiyon
void listof(int numbofPerson,Person *person){
	int i ;
	printf("ASCENDING\n\n");
	printf("name\t");
	printf("surname\t\t");
	printf("birthdate\t");
	printf("gender\t");
	printf("id\t");
	printf("horoscope\n");
	printf("-----------------------------------------------------------------\n");
	for (i=0;i<numbofPerson;i++){
		printf("%c\t",person[i].name);
		printf("%c\t\t",person[i].surname);
		printf("%s\t",person[i].birthdate);
		printf("%c\t",person[i].gender);
		printf("%d\t",person[i].id);
		printf("%s\n",person[i].horoscope);
	}
	printf("\n\n");
	printf("DESCENDING\n\n");
	printf("name\t");
	printf("surname\t\t");
	printf("birthdate\t");
	printf("gender\t");
	printf("id\t");
	printf("horoscope\n");
	printf("-----------------------------------------------------------------\n");
	for (i=numbofPerson-1;i>-1;i--){
		printf("%c\t",person[i].name);
		printf("%c\t\t",person[i].surname);
		printf("%s\t",person[i].birthdate);
		printf("%c\t",person[i].gender);
		printf("%d\t",person[i].id);
		printf("%s\n",person[i].horoscope);
	}
	
}

int main(int argc, char *argv[]) {
	 
	 Person *person;
	 
	 Person *name,*surname,*birthdate,*gender,*horoscope;
	 int i,g; //g gender belirlemek için bir değişken
	 int k;//sıralanacak kriteri belirlemek için bir değişken 
	 srand(time(NULL));
	 int numbofPerson=1+rand()%50;
	 person=(Person*)calloc(numbofPerson,sizeof(Person));
	 if (person==NULL){
	 	printf("memory not allocated");
	 	exit(0);
	 }
	 	 
	 
	//random atamaları for içerisinde gerçekleştiriyoruz
	 
	 for (i=0;i<numbofPerson;i++){
	 	person[i].name=65+rand()%25;   //buyuk harler ASCII tablosunda 65'ten başladığı için 
	 	person[i].surname=65+rand()%25;
	     
			
	    
	    // doğum tarihi random atamaları her bir karakter için rakamların ASCII karşılıkları üzerinden yapılmıştır
		person[i].birthdate[0]=48+rand()%3;
		person[i].birthdate[1]=49+rand()%8;
		person[i].birthdate[2]='.';
		person[i].birthdate[3]=48+rand()%2;
		if(person[i].birthdate[3]==48) // bir yıl 12 aydan fazla olamayacağı için if kontrolü
		   person[i].birthdate[4]=49+rand()%9;
		else
		   person[i].birthdate[4]=48+rand()%3;
		person[i].birthdate[5]='.';
		person[i].birthdate[6]='1';    //burda da absürt doğum yılları oluşmaması için bir takım ayarlar 
		person[i].birthdate[7]='9';
		person[i].birthdate[8]=54+rand()%3;
		person[i].birthdate[9]=48+rand()%9;  
		person[i].birthdate[10]='\0'; 
		//cinsiyet atamaları
		g=rand()%2;
		if(g==0)
		   person[i].gender=70;        
		else    
		   person[i].gender=77;
		//id ataması    
		person[i].id=i; 
		//fonksiyonla burç ataması
		person[i].horoscope=findHoroscope(person[i].birthdate); 
	 	
	 } 
	
	    
    //bütün kriterlere göre listeyi en başta sıralıyoruz 
	name=personName(numbofPerson,person);
    surname=personSurname(numbofPerson,person);
    birthdate=personBirthdate(numbofPerson,person);
    gender=personGender(numbofPerson,person);
    horoscope=personHoroscope(numbofPerson,person);
	printf("\n\n\n");
	k=0;//kullanıcıdan kriteri almak için bir değişken 
	 
	while(k!=7){
	//başlangıç listesi	
	printf("RANDOM BEGINNING LIST\n\n\n");
    printf("name\t");
	printf("surname\t\t");
	printf("birthdate\t");
	printf("gender\t");
	printf("id\t");
	printf("horoscope\n");
	printf("-----------------------------------------------------------------\n");
	for (i=0;i<numbofPerson;i++){
		printf("%c\t",person[i].name);
		printf("%c\t\t",person[i].surname);
		printf("%s\t",person[i].birthdate);
		printf("%c\t",person[i].gender);
		printf("%d\t",person[i].id);
		printf("%s\n",person[i].horoscope);
	}	
	//kullanıcıya çıkmak isteyene kadar sıralamak istediği listeyi soruyoruz 
    printf("\n\n\n");
    printf("1.Name\n");
    printf("2.Surname\n");
    printf("3.Birthdate\n");
    printf("4.Gender\n");
    printf("5.Id\n");
    printf("6.Horoscope\n");
    printf("7.exit\n");
    printf("press a number between 1-7\n");
    
    scanf("%d",&k);
    printf("\n\n");
	switch (k){
		case 1:listof(numbofPerson,name); break;
		case 2:listof(numbofPerson,surname);break;
		case 3:listof(numbofPerson,birthdate);break;
		case 4:listof(numbofPerson,gender);break;
		case 5:listof(numbofPerson,person);break;
		case 6:listof(numbofPerson,horoscope);break;
		case 7:exit(0);break; 
		default :printf("incorrect entry\n");
		
		}
	printf("PRESS ENTER TO NEW CHOICE\n");
	getch();
	system("CLS");	
	}
   
    
	 
   
   
	
	return 0 ;
}
