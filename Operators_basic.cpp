
//LARGEST OF TWO NUMBER
// #include<iostream>
// using namespace std;
// int main(){
//  int a,b;
//  cout<<"\n We find largest of two numbers";
//  cout<<"\nEnter the value of 1st Number : ";
//  cin>>a;
//  cout<<"\nEnter the value of 2nd Number : ";
//  cin>>b;
//  if(a>b){
//     cout<<endl;
//     cout<<a<<" is largest"<<endl;
//  }
//  else{
//     cout<<endl;
//     cout<<b<<" is largest"<<endl;
//  }

 
//     return 0;
// }




//EVEN OR ODD
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"\n Enter the Number : ";
// cin>>n;
// if(n==0)
// cout<<"Enter number is Zero\n";
// else if (n%2==0)
// {
//     cout<<n<<" is Even";

// }
// else{
//     cout<<n<<" is Odd\n";
// }


//     return 0;
// }




//INCOME CALCULATOR After TAX
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// long long income,updated_income;
// cout<<"\n Enter your Income : ";
// cin>>income;
// if(income<50000){ // 0% Tax
//     cout<<"\n0% Tax";
//     updated_income=income;
//     cout<<"\nYour Income After 0% Tax is "<<updated_income;
// }
// else if(50000<income && income<100000){ //20% Tax
//     updated_income=(income - (income*0.20));
//     cout<<"\nYour Income After 20% Tax is "<<updated_income;
// }
// else if(income>100000){ // 30% Tax
//     updated_income = (income - (income*0.30));
//     cout<<"\nYour Income After 30% Tax is "<<updated_income;
// }

//     return 0;
// }



// TERNARY OPERATOR
// #include<iostream>
// using namespace std;
// int main(){
// bool isadult;// 0 or 1
// int age;
// cout<<"\n Enter Age : ";
// cin>>age;
// // if(age>=18)
// // isadult=true;
// // else{
// //     isadult=false;
// // }
// isadult=age>=18?true:false;
// cout<<isadult;
// return 0;
// }


#include<iostream>
using namespace std;
int main(){

int a,b,c;
cout<<"\n Enter ";
cin>>a>>b>>c;

int largest;
largest=(a>b && a>c)?a:(b>a && b>c)?b:c;
cout<<largest;
return 0;
}

