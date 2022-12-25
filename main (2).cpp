#include <iostream>
using namespace std;

int main ()
{
  double heelmonster=100;
  string Attack,run;
  string I;
  int inventorey[9]={0,0,0,0,0,0,0,0,0};
  string c;
  char crafting;
  string c1;
  string c2;
  string c3;
  string c4;
  string c5;
  string c6;
  string c7;
  string c8;
  string c9;
  double huunger = 100;
  double stamena = 100;
  double heel = 100;
  string nl;
  for (int i = 3; i != 10;)
    {

      cout << "right or left" << endl;
      cin >> nl;
      if(nl=="right")
      {
         if(i==0)
         {

         }
         if(i==1)
         {

         }
         if(i==2)
         {

         }
         if(i==3)
         {
         cout<<"chicken monster😈!(AttacK or run)"<<endl;
         cin>>Attack,run;
         if(Attack,run=="AttacK"){
         cout<<heelmonster-10<<endl;
         }
             
         }
         if(i==4)
         {
             
         }
         if(i==5)
         {

         }
         if(i==6)
         {

         }
         if(i==7)
         {

         }
         if(i==8)
         {

         }
         if(i==9)
         {

       }
      }
       if(nl=="left")
         {
         if(i==0)
         {

         }
         if(i==1)
         {

         }
         if(i==2)
         {

         }
         if(i==3)
         {

         }
         if(i==4)
         {

         }

         if(i==5)
         {

         }
         if(i==6)
         {

         }
         if(i==7)
         {

         }
         if(i==8)
         {

         }
         if(i==9)
         {

       }    
       }
      cout << "heel:" << "%" << heel << endl << "huunger:" << "%" << huunger<< endl << "stamena:" << "%" << stamena << endl;
     cout<<"Do you want to see the bag?(Yes or no)"<<endl; 
     cin>>I; 
	 if(I == "Yes")
	 {   
	 cout<<"woods:"<<inventorey[0]<<"\t";   
	 cout<<"stick:"<<inventorey[1]<<"\t";   
	 cout<<"stone:"<<inventorey[2]<<endl;   
	 cout<<"gold:"<<inventorey[3]<<"\t";
	 cout<<"irone:"<<inventorey[4]<<"\t";
	 cout<<"coal:"<<inventorey[5]<<endl;
	 cout<<"sand:"<<inventorey[6]<<"\t";
	 cout<<"glass:"<<inventorey[7]<<"\t";
	 cout<<"food:"<<inventorey[8]<<endl;
	 }
      cout << "Do you want to use Crafteng? (Yes or No)" << endl;
      cin >> c;
      //woods,stone,stik,gold,irone,sand
      if (c == "Yes")
	{
    cout<<"[";    
    cin>>c1;    
    cout<<"\n["<<c1<<"][";    
    cin>>c2;    
    cout<<"\n["<<c1<<"]["<<c2<<"][";    
    cin>>c3;    
    cout<<"\n["<<c1<<"]["<<c2<<"]["<<c3<<"]";    
    cout<<"\n[";    
    cin>>c4;    
    cout<<"\n"<<"["<<c1<<"]["<<c2<<"]["<<c3<<"]\n["<<c4<<"][";    
    cin>>c5;    
    cout<<"\n["<<c1<<"]["<<c2<<"]["<<c3<<"]"<<"\n["<<c4<<"]["<<c5<<"][";    
    cin>>c6;    
    cout<<"\n["<<c1<<"]["<<c2<<"]["<<c3<<"]"<<"\n["<<c4<<"]["<<c5<<"]["<<c6<<"]"<<"\n[";
    cin>>c7;    
    cout<<"\n["<<c1<<"]["<<c2<<"]["<<c3<<"]"<<"\n["<<c4<<"]["<<c5<<"]["<<c6<<"]"<<"\n["<<c7<<"][";    
    cin>>c8;    
    cout<<"\n["<<c1<<"]["<<c2<<"]["<<c3<<"]"<<"\n["<<c4<<"]["<<c5<<"]["<<c6<<"]"<<"\n["<<c7<<"]["<<c8<<"][";    
    cin>>c9;    
    cout<<endl<<"["<<c1<<"]["<<c2<<"]["<<c3<<"]"<<endl<<"["<<c4<<"]["<<c5<<"]["<<c6<<"]"<<endl<<"["<<c7<<"]["<<c8<<"]["<<c9<<"]"<<endl;
    
	}
    if(i==10)
    {
    i=-1;    
    }



    }

  return 0;
}
