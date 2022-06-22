//223.3128.2327x204
#include<iostream>
#include<cmath>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
using namespace std;
class calc
{
int ch;
double i1,i2,res;
char a='Y';
public:
  void chse()
  {
    cout<<"Enter Your Choice"<<endl;
    cin>>ch;
  }
  void input()
  {
    cout<<"Enter Two Numbers"<<endl;
    cin>>i1;
    cin>>i2;
  }
  void invalid()
  {
    cout<<"Invalid Option.....Try Again"<<endl;
    for (int i=0;i<20;i++){
      system("color 9F");system("color F9");
    }
  }
  void display()
  {
    cout<<"The Result Of Your Operation Is  "<<res<<endl;
  }
  void base()
  {
    while (a=='Y')
    {
      try1:
      system("color F9");
      cout<<"     A Pretty Decent Scientific Calculator      "<<endl;
      cout<<" _________________________________________________________"<<endl;
      cout<<"|                                                         |"<<endl;
      cout<<"|                                                         |"<<endl;
      cout<<"|_________________________________________________________|"<<endl;
      cout<<" _______________      _______________      _______________"<<endl;
      cout<<"|   ARITHMETIC  |    | TRIGONOMETRIC |    |  LOGARITHMIC  |"<<endl;
      cout<<"|       1       |    |       2       |    |       3       |"<<endl;
      cout<<"|_______________|    |_______________|    |_______________|"<<endl;
      cout<<"           _______________      _______________"<<endl;
      cout<<"          |     POWER     |    |   FACTORIAL   |"<<endl;
      cout<<"          |       4       |    |       5       |"<<endl;
      cout<<"          |_______________|    |_______________|"<<endl;
      chse();
      switch (ch)
      {
        case 1:
          ari();
          break;
        case 2:
          tri();
          break;
        case 3:
          logi();
          break;
        case 4:
          po();
          break;
        case 5:
          fac();
          break;
        default:
          invalid();
          goto try1;
      }
      cout<<"Do You Want To Continue Y/N"<<endl;
      cin>>a;
      a=toupper(a);
    };
  }
  void ari()
  {
    try2:
    system("color F4");
    cout<<" _________________________________________________________"<<endl;
    cout<<"|                                                         |"<<endl;
    cout<<"|                                                         |"<<endl;
    cout<<"|_________________________________________________________|"<<endl;
    cout<<" _______________      ________________      ______________"<<endl;
    cout<<"|    ADDITION   |    |   SUBTRACTION  |    |MULTIPLICATION|"<<endl;
    cout<<"|       1       |    |       2        |    |       3      |"<<endl;
    cout<<"|_______________|    |________________|    |______________|"<<endl;
    cout<<" _______________      ________________      ______________"<<endl;
    cout<<"|    DIVISION   |    |   PERCENTAGE   |    |  RECIPROCAL  |"<<endl;
    cout<<"|       4       |    |       5        |    |      6       |"<<endl;
    cout<<"|_______________|    |________________|    |______________|"<<endl;
    chse();
    switch (ch)
    {
      case 1:
        input();
        res=i1+i2;
        break;
      case 2:
        input();
        res=i1-i2;
        break;
      case 3:
        input();
        res=i1*i2;
        break;
      case 4:
        input();
        res=i1/i2;
        break;
      case 5:
        cout<<"X% of Y....Enter X and Y Respectively"<<endl;
        cin>>i1;
        cin>>i2;
        res=(i1/i2)*100;
        break;
      case 6:
        cout<<"Enter a Number"<<endl;
        cin>>i1;
        res=1/i1;
        break;
      default:
        invalid();
        goto try2;
    }
    display();
  }
  void tri()
  {
      system("color F2");
    try3:
    cout<<" _______________________________"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|_______________________________|"<<endl;
    cout<<"   _____      _____      _____"<<endl;
    cout<<"  | Sin |    | Cos |    | Tan |"<<endl;
    cout<<"  |  1  |    |  2  |    |  3  |"<<endl;
    cout<<"  |_____|    |_____|    |_____|"<<endl;
    cout<<" ______      ______      ______"<<endl;
    cout<<"|Sin^-1|    |Cos^-1|    |Tan^-1|"<<endl;
    cout<<"|  4   |    |   5  |    |  6   |"<<endl;
    cout<<"|______|    |______|    |______|"<<endl;
    chse();
    cout<<"Enter A Number"<<endl;
    cin>>i1;
    switch (ch)
    {
      case 1:
        res=(sin(i1));
        break;
      case 2:
        res=(cos(i1));
        break;
      case 3:
        res=(tan(i1));
        break;
      case 4:
        res=pow(sin(i1),-1.0);
        break;
      case 5:
        res=pow(cos(i1),-1.0);
        break;
      case 6:
        res=pow(tan(i1),-1.0);
        break;
      default:
        invalid();
        goto try3;
    }
    display();
  }
  void po()
  {
      system("color F0");
    try4:
    cout<<" _______________________________"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|_______________________________|"<<endl;
    cout<<" _____      _____      ______"<<endl;
    cout<<"| X^2 |    | X^3 |    | X^1/2|"<<endl;
    cout<<"|  1  |    |  2  |    |  3   |"<<endl;
    cout<<"|_____|    |_____|    |______|"<<endl;
    cout<<" _____      ______     ______"<<endl;
    cout<<"|     |    |  X^n |   |      |"<<endl;
    cout<<"|     |    |   4  |   |      |"<<endl;
    cout<<"|_____|    |______|   |______|"<<endl;
    chse();
    switch(ch)
    {
      case 1:
        cout<<"Enter A Number"<<endl;
        cin>>i1;
        res=pow(i1,2.0);
        break;
      case 2:
        cout<<"Enter A Number"<<endl;
        cin>>i1;
        res=pow(i1,3.0);
        break;
      case 3:
        cout<<"Enter A Number"<<endl;
        cin>>i1;
        res=pow(i1,0.5);
        break;
      case 4:
        cout<<"Enter A Number"<<endl;
        cin>>i1;
        cout<<"Enter A Power"<<endl;
        cin>>i2;
        res=pow(i1,i2);
        break;
      default:
        invalid();
        goto try4;
    }
    display();
  }
  void logi()
  {
      system("color F3");
    try5:
    cout<<" _______________________________"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|_______________________________|"<<endl;
    cout<<" _____      _____      ______"<<endl;
    cout<<"| log |    |  ln |    |  e   |"<<endl;
    cout<<"|  1  |    |  2  |    |  3   |"<<endl;
    cout<<"|_____|    |_____|    |______|"<<endl;
    chse();
    switch(ch)
    {
      case 1:
        cout<<"Enter A Number"<<endl;
        cin>>i1;
        res=log10(i1);
        break;
      case 2:
        cout<<"Enter A Number"<<endl;
        cin>>i1;
        res=log(i1);
        break;
      case 3:
        cout<<"Enter A Number"<<endl;
        cin>>i1;
        res=exp(i1);
        break;
      default:
        invalid();
        goto try5;
    }
    display();
  }
  void fac()
  {
      system("color F5");
    cout<<"Enter A Number"<<endl;
    cin>>i1;
    res=1;
    for(int i=i1;i>=1;i--){
        res=res*i1;
        i1=i1-1;
    }
    display();
  }
};
int main()
{
  calc mid;
  mid.base();
  return 0;
}
