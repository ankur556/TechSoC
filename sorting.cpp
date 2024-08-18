#include<iostream>
using namespace std;
double factorial(int n){
  double b=1;
if(n==0){return 1;}
if(n==1){return 1;}
else {
  for (int i=1; i<=n; i++){
    b*=i;
  }
}
return b;
}
double pow(double num,int pow ){
  double pro=1;
  for (int i=0; i<pow;i++){
    pro*=num;
  }
  return pro;
}
double sin(double n){
  int sign=1;
  double sum=0;
  for (int i=1; i<500; i+=2){
    sum+= sign*pow(n,i)/factorial(i);
    sign*=-1;
  }
  return sum;
}
double cos(double n){
  int sign=1;
  double sum=0;
  for (int i = 0; i <500; i+=2)
  {
    sum+=sign*pow(n,i)/factorial(i);
    sign*=-1;
  }
  return sum;
}


int main(){
    cout<<"welcome to my calculator"<<endl;
  cout<<"please select the action u want to perform using an intiger"<<endl<<"1.addition"<<endl<<"2.multiplication"<<endl<<"3.subtraction"<<endl<<"4.division"<<endl<<"5.power fungtion"<<endl<<"6.factorial"<<endl<<"7.sin fxn"<<"8.cos fxn"<<endl;
  int a;

  cin>>a;

  if(a==1){
  cout<<"please enter the first num u want to add"<<endl;
  double b;
  cin>>b;
  cout<<"please enter the second num"<<endl;
  double c;
  cin>>c;
  cout<<b+c;}
  else if(a==2)
  {cout<<"please enter the first number you want to multiply"<<endl;
    double d;
    cin>>d;
    cout<<"please enter the second no ";
    double e;
    cin>>e;
    cout<<d*e;
}
  else if(a==3){
   double f,g;
   cout<<"please enter the first number "<<endl;
   cin>>f;
   cout<<"please enter the second number"<<endl;
   cin>>g; //NOt completed
  }
  else if(a==4){
    double h,i;
    cout<<"plese enter the first number"<<endl;
    cin>>h;
    cout<<"please enter the second number"<<endl;
    cout<<h/i;
  }else if(a==5){int k;float j,t;
    cout<<"please enter the number on which power is applied"<<endl;
    cin>>j;
    cout<<"please enter the power applied"<<endl;
    cin>>k;
    int i=0;
    t=j;
    while (k-1>i)
    {
      /* code */
      
      t=t*j;
      i++;
      //cout<<i;
    }
    cout<<t;
  }else if(a==6){ int t=1;int k=1;int b=1;int n;
  cout<<"enter the number you want the factorial of";
  cin>>n;
if(n==0){return 1;}
if(n==1){return 1;}
else{while(k-1<n){
b=b*k;
k++;}  
cout<<b;}
}else  if (a==7){cout<<"do you want to enter the andle in 2 for deg or 1 for rad"<<endl;
int b;
cin>>b;
if(b==1){

  double t;
  double a;
  cout<<"please enter the radians you want the sine of: "
  ;
  cin>>a;
   t= sin (a);
cout<<t;}
else if(b==2){ int n ;double t;
cout<<"please enter the angle value you want the sine value of";
cin>>n;
t=n%360;
if(t==90)cout<<1;
else if (t==180)cout<<0;
else if (t==270)cout<<-1;
else if (t==0)cout<<0;
else{double j;
j=sin(t/57.295779513);
  cout<<j;
}
}


}
else if(a==8){int g;float t;
  cout<<"do you want the value in 1 for radians 2 for degree"<<endl;
  cin>>g;
  if(g==1){
    cout<<"please give the number you need the cosine value of(in radians)"<<endl;
    cin>>t;
    t=cos(t);
    cout<<t;
  }
  else if(g==2){float f,l;int k;
    cout<<"please give me the value of the number you want the cosine of(in degrees)(only intigers)"<<endl;
    cin>>k;
  f=k%360;
  if(f==90){cout<<0;}
  else if(f==180){cout<<-1;}
  else if(f==270){cout<<0;}
  else if(f==0){cout<<1;}
   l=cos(f/57.295779513);
  cout<<l;
  }
}


 else{ cout<<"you have selected the wrong number";
  return 0;
}}
      
