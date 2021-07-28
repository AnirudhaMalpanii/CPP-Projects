#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<process.h>
#include<windows.h>
using namespace std;
void Password();
void Teacher();
void Student();
class STUDENT{  
private:
	char name[50],fname[50],mname[50],date[15],telno[15],div,sec_code[8],grade,branch[5];
    int sem,attend,total,usn;
    float imarks[9],emarks[9],tmarks[9];
  
	public:
		
      void enter()
      {
           cout<<"\t\t\t  -------------------------------"<<"\n";
           cout<<"\t\t\t     ENTER THE STUDENT DETAILS"<<"\n";
           cout<<"\t\t\t  -------------------------------"<<"\n\n";	
           cout<<"\t\tNAME OF THE STUDENT: ";
           cin.ignore();
           cin.getline(name,50);
           cout<<"\t\tFATHER'S NAME: ";
           cin.getline(fname,50);
           cout<<"\t\tMOTHER'S NAME: ";
           cin.getline(mname,50);
           cout<<"\t\tDATE OF BIRTH(DD/MM/YYYY):";
           cin.getline(date,15);
           cout<<"\t\tTELEPHONE NUMBER: ";
           cin.getline(telno,15);
           cout<<"\t\tSECURITY CODE: ";
           cin.getline(sec_code,8);
           cout<<"\t\tBRANCH(ISE): ";
           cin.getline(branch,5);
           cout<<"\t\tSEMESTER(6):";
           cin>>sem;
           cout<<"\t\tDIVISION: ";
           cin>>div; 
           cout<<"\t\tUSN: ";
           cin>>usn;
		   cout<<"\t\tDAYS PRESENT: ";
           cin>>attend;
        	
			
		   		cout<<"\t\t\t  -----------------------------"<<"\n";
              	cout<<"\t\t\t     ENTER THE INTERNAL MARKS"<<"\n";
              	cout<<"\t\t\t  -----------------------------"<<"\n\n";
              	cout<<"\t\t\t FILE  STRUCTURES(18IS61):";
				cin>>imarks[0];
				cout<<"\t\t\t SOFTWARE TESTING(18IS62):";
				cin>>imarks[1]; 	
				cout<<"\t\t\t WEB TECHNOLOGY AND ITS APPLICATIONS(18CS63):";
				cin>>imarks[2]; 	
				cout<<"\t\t\t DATA MINING AND DATA WAREHOUSE(18CS641) OR CLOUD COMPUTING AND ITS APPLICATIONS(18CS643):";
				cin>>imarks[3]; 	
				cout<<"\t\t\t ADVANCED LINEAR ALGEBRA(18MAT653) OR SUPPLY CHAIN MANAGEMENT(18ME653):";
				cin>>imarks[4]; 
			 	cout<<"\t\t\t SOFTWARE TESTING LABORATORY(18ISL66):";
				cin>>imarks[5]; 
				cout<<"\t\t\t FILE STRUCTURES LABORATORY WITH MINI PROJECT(18ISL67):";
				cin>>imarks[6]; 
				cout<<"\t\t\t MOBILE APPLICATION DEVELOPMENT(18CSMP68): ";
				cin>>imarks[7];  
				cout<<"\n\n";
				cout<<"\t\t\t  -----------------------------"<<"\n";
              	cout<<"\t\t\t     ENTER THE EXTERNAL MARKS"<<"\n";
              	cout<<"\t\t\t  -----------------------------"<<"\n\n";
              	cout<<"\t\t\t FILE  STRUCTURES(18IS61):";
				cin>>emarks[0];
				cout<<"\t\t\t SOFTWARE TESTING(18IS62):";
				cin>>emarks[1]; 	
				cout<<"\t\t\t WEB TECHNOLOGY AND ITS APPLICATIONS(18CS63):";
				cin>>emarks[2]; 	
				cout<<"\t\t\t DATA MINING AND DATA WAREHOUSE(18CS641) OR CLOUD COMPUTING AND ITS APPLICATIONS(18CS643):";
				cin>>emarks[3]; 	
				cout<<"\t\t\t ADVANCED LINEAR ALGEBRA(18MAT653) OR SUPPLY CHAIN MANAGEMENT(18ME653): ";
				cin>>emarks[4]; 
				cout<<"\t\t\t SOFTWARE TESTING LABORATORY(18ISL66):";
				cin>>emarks[5]; 
				cout<<"\t\t\t FILE STRUCTURES LABORATORY WITH MINI PROJECT(18ISL67):";
				cin>>emarks[6]; 
				cout<<"\t\t\t MOBILE APPLICATION DEVELOPMENT(18CSMP68): ";
				cin>>emarks[7]; 
				cout<<"\n\n";		
				total=((imarks[0]+emarks[0])+ (imarks[1]+emarks[1])+ (imarks[2]+emarks[2])+ (imarks[3]+emarks[3])+ (imarks[4]+emarks[4])+ (imarks[5]+emarks[5])+ (imarks[6]+emarks[6])+ (imarks[7]+emarks[7]));	
				
 			
		
		}
	
      	void display_report()
      	{
           
           cout<<"          ----------------------------------------------------------------------------------------------------------------------------------\n\n";
           cout<<"                                			GLOBAL ACADEMY OF TECHNOLOGY\n\n";
           cout<<"          ----------------------------------------------------------------------------------------------------------------------------------\n";
           cout<<"                        					 ------------------------\n";
           cout<<"                            					    PERSONAL DETAILS\n";
           cout<<"                        					 ------------------------\n\n";
           cout<<"\t\tNAME: "<<name<<"\t\t";
           cout<<"USN: "<<usn<<"\t\t";
           cout<<"Branch: "<<branch<<"\t\t";
          cout<<"SEMESTER: "<<6<<"\t";
		   
           cout<<"DATE OF BIRTH: "<<date<<"\t";
           cout<<"TELEPHONE NUMBER: "<<telno<<"\n\n";
           cout<<"\t\tFATHERS NAME: "<<fname<<"\t\t\t";
           cout<<"MOTHERS NAME: "<<mname<<"\n\n";
		    cout<<"                        					----------------------------\n";
           cout<<"                            					    ACADEMIC PERFORMANCE\n";
           cout<<"                        					----------------------------\n\n";
           cout<<"                 					    ---------------------------------------\n";
           cout<<"                                                			   MARKS\n";
           cout<<"                 					    ---------------------------------------\n\n";
           cout<<"              	SUBJECT					 INTERNAL\t\t\tEXTERNAL\n\n";
		   
           		cout<<"\t\t\t FILE STRUCTURES(18IS61)\t"<<imarks[0]<<"\t\t\t"<<emarks[0]<<"\n";
           		cout<<"\t\t\t SOFTWARE TESTING(18IS62)\t"<<imarks[1]<<"\t\t\t"<<emarks[1]<<"\n";
           		cout<<"\t\t\t WEB TECHNOLOGY AND ITS APPLICATIONS(18CS63)\t"<<imarks[2]<<"\t\t\t"<<emarks[2]<<"\n";
           		cout<<"\t\t\t DATA MINING AND DATA WAREHOUSE(18CS641) OR CLOUD COMPUTING AND ITS APPLICATIONS(18CS643)\t"<<imarks[3]<<"\t\t\t"<<emarks[3]<<"\n";
           		cout<<"\t\t\t ADVANCED LINEAR ALGEBRA(18MAT653) OR SUPPLY CHAIN MANAGEMENT(18ME653)\t"<<imarks[4]<<"\t\t\t"<<emarks[4]<<"\n";
           		cout<<"\t\t\t SOFTWARE TESTING LABORATORY(18ISL66)\t"<<imarks[5]<<"\t\t\t"<<emarks[5]<<"\n";
           		cout<<"\t\t\t FILE STRUCTURES LABORATORY WITH MINI PROJECT(18ISL67)\t"<<imarks[6]<<"\t\t\t"<<emarks[6]<<"\n";
           		cout<<"\t\t\t MOBILE APPLICATION DEVELOPMENT(18CSMP68)\t"<<imarks[7]<<"\t\t\t"<<emarks[7]<<"\n";
			   	cout<<"TOTAL MARKS: "<<total<<"\n";
				
			   	
		   
	}
			void display_all()
      		{
      			cout<<"\t\tNAME: "<<name<<"\t\t\t"<<"USN: "<<usn<<"\t\t\t\t"<<"SEMESTER:"<<sem<<" "<<div<<"\t\t\tBRANCH: "<<branch<<"\n";
           		cout<<"\t\tFATHER NAME: "<<fname<<"\t\t"<<"MOTHER NAME: "<<mname<<"\t\tSECURE CODE: "<<sec_code<<"\n";
				cout<<"\t\tTELEPHONE NO: "<<telno<<"\n\n";
			
				cout<<"          ----------------------------------------------------------------------------------------------------------------------------------\n";
				cout<<"\t\t                    		                            MARKS"<<"\n";
				cout<<"          ----------------------------------------------------------------------------------------------------------------------------------\n";
				cout<<"          ----------------------------------------------------------------------------------------------------------------------------------\n";
				cout<<"\t\t   SUBJECT                                                                             INTERNALS\t\tEXTERNALS  "<<"\n";
				cout<<"          ----------------------------------------------------------------------------------------------------------------------------------\n";
				
				
					cout<<"\t   FILE STRUCTURES(18IS61)"<<"\t\t\t\t\t\t\t\t\t "<<imarks[0]<<"\t\t\t  "<<emarks[0]<<"\n";
	           		cout<<"\t   SOFTWARE TESTING(18IS62)"<<"\t\t\t\t\t\t\t\t\t "<<imarks[1]<<"\t\t\t  "<<emarks[1]<<"\n";
	           		cout<<"\t   WEB TECHNOLOGY AND ITS APPLICATIONS(18CS63)"<<"\t\t\t\t\t\t\t "<<imarks[2]<<"\t\t\t  "<<emarks[2]<<"\n";
	           		cout<<"\t   DATA MINING AND DATA WAREHOUSE(18CS641) OR CLOUD COMPUTING AND ITS APPLICATIONS(18CS643)"<<"\t "<<imarks[3]<<"\t\t\t  "<<emarks[3]<<"\n";
	           		cout<<"\t   ADVANCED LINEAR ALGEBRA(18MAT653) OR SUPPLY CHAIN MANAGEMENT(18ME653)"<<"\t\t\t "<<imarks[4]<<"\t\t\t  "<<emarks[4]<<"\n";
	           		cout<<"\t   SOFTWARE TESTING LABORATORY(18ISL66)"<<"\t\t\t\t\t\t\t\t "<<imarks[5]<<"\t\t\t  "<<emarks[5]<<"\n";
	           		cout<<"\t   FILE STRUCTURES LABORATORY WITH MINI PROJECT(18ISL67)"<<"\t\t\t\t\t "<<imarks[6]<<"\t\t\t  "<<emarks[6]<<"\n";
	           		cout<<"\t   MOBILE APPLICATION DEVELOPMENT(18CSMP68)"<<"\t\t\t\t\t\t\t "<<imarks[7]<<"\t\t\t  "<<emarks[7]<<"\n\n";
				   	cout<<"\t   TOTAL MARKS: "<<total<<"\n";
				   	cout<<"\t   ATTENDANCE: "<<attend<<"\n\n";
				   	if(total>680)
				   	{
				   		cout<<"          							**********DISTINCTION**********\n\n";
					}
					else if(total>600 && total>680)
					{
						cout<<"         							**********FIRST CLASS**********\n\n";
					}
				   	else{
				   		cout<<"          							**********SECOND CLASS**********\n\n";
					   }
				   	
			}
      friend void del();
      friend void modify();
      friend void search();
      friend void search_student();
      friend void sort();
      friend void sortmark();
      
};
void add()
{
    STUDENT s;
    ofstream f("Record.dat",ios::binary|ios::app);//write out
    s.enter();
     f.write((char*)&s,sizeof(s));
    f.close();
}
void dispall()
{
     STUDENT s;
    ifstream f("Record.dat");
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
     	
         cout<<"\t\t\t                ---------------------------"<<"\n";
         cout<<"\t\t\t                   LIST OF CLASS RECORDS"<<"\n";
         cout<<"\t\t\t                ---------------------------"<<"\n\n";
         while(f.read((char*)&s,sizeof(s)))
         {
             s.display_all();
            
            cout<<"          **********************************************************************************************************************************\n\n";
         }
     }
     f.close();
}
void del()
{
     STUDENT s;
      ifstream f1("Record.dat");
     ofstream f2("Temp.dat",ios::binary);


     int flag=0,n;
     if(!f1)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
         cout<<"ENTER THE USN OF THE STUDENT:";
         cin>>n;
         system("cls");
         while(f1.read((char*)&s,sizeof(s)))
         {
             if(n!=s.usn)
             {
                 f2.write((char*)&s,sizeof(s));
                 flag=1;
             }
         }
         if(flag==0)
         {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!";
             cout<<"\n\n\n\n\n\n\n\n";
         }
         else
         {
              cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
              cout<<"THE RECORD WAS DELETED SUCCESSFULLY";
              cout<<"\n\n\n\n\n\n\n\n";
         }
     }
     f1.close();
     f2.close();
     remove("Record.dat");
     rename("Temp.dat","Record.dat");
}
void modify()
{
     STUDENT s;
     ifstream f1("Record.dat");//read
     ofstream f2("Temp.dat",ios::binary);

     int flag=0,n;
     if(!f1)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
         cout<<"ENTER THE ROLL NUMBER OF THE STUDENT: ";
         cin>>n;
         system("cls");
         while(f1.read((char*)&s,sizeof(s)))
         {
             if(n==s.usn)
             {
                 cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
                 cout<<"ENTER THE MODIFIED DETAILS OF THE STUDENT";
                 Sleep(3000);
                 system("cls");
                 s.enter();

                 f2.write((char*)&s,sizeof(s));
                 flag=1;
             }
             else
             {
                 f2.write((char*)&s,sizeof(s));
             }
         }
         if(flag==0)
         {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!";
             cout<<"\n\n\n\n\n\n\n\n";
         }
     }
     f1.close();
     f2.close();
     remove("Record.dat");
      rename("Temp.dat","Record.dat");
}
void search()
{
     STUDENT s;
    ifstream f("Record.dat");
     int flag=0,n;
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
         cout<<"ENTER THE USN OF THE STUDENT: ";
         cin>>n;
         system("cls");
         while(f.read((char*)&s,sizeof(s)))
         {
             if(n==s.usn)
             {
                 flag=1;
                 s.display_report();
             }
         }
         if(flag==0)
         {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!";
             cout<<"\n\n\n\n\n\n\n\n";
         }
     }
     f.close();
}
void search_student()
{
     STUDENT s;
 ifstream f("Record.dat");
     int flag=0,n;
     char a[8];
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         cout<<"\n\n\n\n\n\n\n\n\n\t\t\t";
         cout<<"ENTER YOUR USN: ";
         cin>>n;
         cout<<"\n\t\t\t";
         cout<<"ENTER YOUR SECURE CODE: ";
         cin.ignore();
         cin.getline(a,8);
         system("cls");
         while(f.read((char*)&s,sizeof(s)))
         {
             if((n==s.usn)&&(strcmp(a,s.sec_code)==0))
             {
                 flag=1;
                 s.display_report();
             }
         }
         if(flag==0)
         {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!";
             cout<<"\n\n\n\n\n\n\n\n";
         }
     }
     f.close();
}

    
   
void sortmark()
{
     STUDENT s,t[100],temp;
   ifstream f("Record.dat");
     int x,y,n=0;
     char ch[25];
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         {
             while(f.read((char*)&s,sizeof(s)))
             {
                 t[n++]=s;
             }
         }
         f.close();
         
         
     		cout<<"\n\n\n\n\n\n";
	        cout<<"\t\t\t  -----------------------------------------------------------------------"<<"\n";
	        cout<<"\t\t\t     				SELECT A SUBJECT"<<"\n";
	        cout<<"\t\t\t  -----------------------------------------------------------------------"<<"\n";
	        cout<<"\t\t\t       1. FILE STRUCTURES(18IS61)"<<"\n";
	        cout<<"\t\t\t       2. SOFTWARE TESTING(18IS62)"<<"\n";
	        cout<<"\t\t\t       3. WEB TECHNOLOGY AND ITS APPLICATIONS(18CS63)"<<"\n";
	        cout<<"\t\t\t       4. DATA MINING AND DATA WAREHOUSE(18CS641) OR CLOUD COMPUTING AND ITS APPLICATIONS(18CS643)"<<"\n";
	        cout<<"\t\t\t       5. ADVANCED LINEAR ALGEBRA(18MAT653) OR SUPPLY CHAIN MANAGEMENT(18ME653)"<<"\n";
	        cout<<"\t\t\t       6. SOFTWARE TESTING LABORATORY(18ISL66)"<<"\n";
	        cout<<"\t\t\t       7. FILE STRUCTURES LABORATORY WITH MINI PROJECT(18ISL67)"<<"\n";
	    	cout<<"\t\t\t       8. MOBILE APPLICATION DEVELOPMENT(18CSMP68)"<<"\n\n";
	        cout<<"\t\t\t     ENTER YOUR OPTION: ";
	        cin>>y;
		 	system("cls");
         	cout<<endl;
         	if(y>8)
	         {
	             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!";
	             cout<<"\n\n\n\n\n\n\n\n";
	         }
	         else
	         x=y-1;
	
	         for(int i=0;i<n;i++)
	         {
	             for(int j=0;j<n-1;j++)
	             {
	                 if(t[j].imarks[x]<t[j+1].imarks[x])
	                 {
	                     temp=t[j];
	                     t[j]=t[j+1];
	                     t[j+1]=temp;
	                 }
	             }
	         }
		         cout<<"\n\n\n\n\n\n";
         cout<<"\t\t\t"<<"-------------------------------"<<"\n";
         cout<<"\t\t\t"<<"   SL. NO:"<<"\t"<<"MARKS"<<"\t"<<"NAME"<<"\n";
         cout<<"\t\t\t"<<"-------------------------------"<<"\n\n";
		for(int i=0;i<8;++i)
         {
             cout<<"\t\t\t   ";
             cout<<i+1<<". "<<"\t\t";
             cout<<t[i].imarks[x]<<"\t"<<t[i].name;
             cout<<endl;
         }
         cout<<"\n\n\n";
     	}
	
}
void statistics()
{
     int n;
     cout<<"\n\n\n\n\n\n\n";
     cout<<"\t\t              ----------------"<<"\n";
     cout<<"\t\t                 STATISTICS"<<"\n";
     cout<<"\t\t              ----------------"<<"\n";
     cout<<"\t\t   1. VIEW ALL THE RECORDS"<<"\n";
     cout<<"\t\t   2. VIEW TOP FIVE MARKS IN EACH SUBJECT"<<"\n\n";
     cout<<"\t\t           ENTER YOUR OPTION: ";
     cin>>n;
     system("cls");
     switch(n)
     {
            
              case 1: dispall();
                      break;
              case 2: sortmark();
              		  break;
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!";
                      cout<<"\n\n\n\n\n\n\n\n";
     }
}
void Intro()
{
	   
     for(int i=1;i<=100;++i)
     {
     	 Sleep(5);
         system("cls");
         
         cout<<"\n\n\n\n\n\n\n\n\n\n\t\tLOADING "<<i<<"%";
         if(i==100)
         {
             Sleep(1000);
         }
     }
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\tREPORT CARD MANAGEMENT SYSTEM";
	cout<<"\n\n\n\n\n\n\t\tBy:\tANIRUDHA MALPANI(1GA18IS003)\n\t\t\tSAADHVI HOSMANE(1GA18IS044)";
    Sleep(1000);
    system("cls");
	
}
void Segregation()
{
     int n;
     start:
     system("cls");
     cout<<"\n\n\n\n\n";
     cout<<"\t\t\t          ---------------"<<"\n";
     cout<<"\t\t\t             MAIN MENU"<<"\n";
     cout<<"\t\t\t          ---------------"<<"\n\n\n";
     cout<<"\t\t\t        SELECT DESIGNATION"<<"\n\n";
     cout<<"\t\t	----------------------------------------"<<"\n";
     cout<<"\t\t	      1. TEACHER\t2. STUDENT\t"<<"\n";
     cout<<"\t\t	----------------------------------------"<<"\n";
     cout<<"\t\t              (PRESS 3 TO EXIT)"<<"\n\n\n";
     cout<<"\t\t            ENTER AN OPTION: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1: system("cls");
                      Password();
                      break;
              case 2: Student();
                      break;
             
              case 3: exit(0);
                      break;
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!";
                      cout<<"\n\n\n\n\n\n\n\n";
                      system("PAUSE");
     }
     goto start;
}
void Teacher()
{
     int n;
     start:
     system("cls");
     cout<<"\n\n\n\n\n\n";
     cout<<"\t\t\t\t  ------------"<<"\n";
     cout<<"\t\t\t\t      MENU"<<"\n";
     cout<<"\t\t\t\t  ------------"<<"\n";
     cout<<"\t\t\t     1. ADD A NEW RECORD"<<"\n";
     cout<<"\t\t\t     2. SEARCH FOR A RECORD"<<"\n";
     cout<<"\t\t\t     3. MODIFY A RECORD"<<"\n";
     cout<<"\t\t\t     4. DELETE A RECORD"<<"\n";
     cout<<"\t\t\t     5. DISPLAY ALL THE RECORDS"<<"\n";
     cout<<"\t\t\t     6. CLASS STATISTICS"<<"\n";
     cout<<"\t\t\t     7. GO TO MAIN MENU"<<"\n\n";
     cout<<"\t\t\t     ENTER YOUR OPTION: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1: add();
                      break;
              case 2: search();
                      break;
              case 3: modify();
                      break;
              case 4: del();
                      break;
              case 5: dispall();
                      break;
              case 6: statistics();
                      break;
              case 7: Segregation();
                      break;
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!";
                      cout<<"\n\n\n\n\n\n\n\n";
     }
     system("PAUSE");
     goto start;
}
void Student()
{
     int n;
     start:
     system("cls");
     cout<<"\n\n\n\n\n\n\n";
     cout<<"\t\t\t\t ------------"<<"\n";
     cout<<"\t\t\t\t     MENU"<<"\n";
     cout<<"\t\t\t\t ------------"<<"\n";
     cout<<"\t\t\t   1. SEARCH FOR YOUR RECORD"<<"\n";
     cout<<"\t\t\t   2. VIEW CLASS STATISTICS"<<"\n";
     cout<<"\t\t\t   3. GO TO MAIN MENU"<<"\n\n";
     cout<<"\t\t\t   ENTER YOUR OPTION: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1:search_student();
                     break;
              case 2:statistics();
                     break;
              case 3:Segregation();
                     break;
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!!";
                      cout<<"\n\n\n\n\n\n\n\n";
     }
     system("PAUSE");
     goto start;
}
void Password()
{
     char pass[7];
     pass[6]='\0';
     int t=0;
     start:
     cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\tENTER THE PASSWORD: ";
     for(int i=0;i<6;++i)
     {
             pass[i]=getch();
             cout<<"*";
     }
     cout<<"\n\n";
     if(strcmp(pass,"global")==0)
     {
         cout<<"\t\t\t               *****ACCESS GRANTED*****";
         Sleep(1000);
         system("cls");
         Teacher();
     }
     else
     {
         if(t==2)
         {
             cout<<"\t\t\t      *****ACCESS DENIED*****"<<"\n\n\n\n\n\n\n\n";
             system("PAUSE");
             system("cls");
             Segregation();
         }
         cout<<"\t\t\t\t\t       TRY AGAIN!!!!";
         ++t;
         Sleep(3000);
         system("cls");
         goto start;
     }
}
void SEQUENCE()
{
     Intro();
     Segregation();
}

int main()
{
     system("title REPORT CARD MANAGEMENT SYSTEM");
    
     SEQUENCE();
     getch();
     return 0;
     
   
}
