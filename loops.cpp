//BASIC PROGRAM OF CPP ON LOOP
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int i;
//     for(i = 1;i<=5;i++){
//     cout<<"\nHello World!";
// }
// cout<<"\n";
// cout<<"\nHello World! prints "<<i-1<<" on your screen";
// return 0;
// }
 

//PRINT THE VALUE OF 1 TO N
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"\nEnter the number : ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<i<<" ";
//     }

//     return 0;
// }


//PRINT SUM OF 1ST N NATURAL NUMBER
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n,sum = 0;
// cout<<"\nEnter the value of N : ";
// cin>>n;
// for(int i=0 ; i<=n ; i++){
//     sum = sum+i;
// }
// cout<<"\nsum is "<<sum;
//     return 0;
// }


//WHILE LOOP
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int i = 10;
// while (i<=20)
// {
// cout<<i<<" ";
// i++;
// }

//     return 0;
// }


//PRINT THE SQUARE PATTERN USING FOR LOOP
//  ****
//  ****
//  ****
//  ****
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// for(int i = 1 ; i<=4;i++){
//     cout<<"* * * *\n";
// }

// return 0;
// }

//method - 2
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// for(int i = 1 ; i<=4;i++){
//     for (int j = 1; j <= 4; j++)
//     {
//         cout<<" * ";
//     }
//     cout<<"\n";
// }
// return 0;
// } 



//PRINT NUMBER FROM N TO 1 USING FOR LOOP
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of N : ";
//     cin>>n;
//     for(int i = n ; i>=1;i--){
//     cout<<i<<" ";
// }

// return 0;
// }


//PRINT THE SUM OF DIGIT OF A NUMBER USING WHILE LOOP
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,digitSum = 0;
//     cout<<"Enter the digit : ";
//     cin>>n;
//     while (n>0)
//     {
//     int lastDigit = n%10;
//         digitSum = digitSum + lastDigit;
//         n=n/10;

//     }
//     cout<<"\nDigit sum = "<<digitSum;
// return 0;
// }


//PRINT THE SUM OF ODD DIGIT OF A NUMBER USING WHILE LOOP
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,digitSum = 0;
//     cout<<"Enter the digit : ";
//     cin>>n;
//     while (n>0)
//     {
//         int lastDigit = n%10;
//         if(lastDigit%2 != 0)
//         digitSum = digitSum + lastDigit;
//         n=n/10;     
//     }
//     cout<<"\nDigit sum of ODD Numbers = "<<digitSum;

// return 0;
// }


//PRINT REVERSE OF A NUMBER
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the digit : ";
//     cin>>n;
//     while (n>0)
//     {
//     int lastDigit = n%10;
//         cout<<lastDigit;
//         n=n/10;

//     }
   
// return 0;
// }
//M-2
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,result=0;
//     cout<<"Enter the digit : ";
//     cin>>n;
//     while (n>0)
//     {
//     int lastDigit = n%10;
//         result = result*10 + lastDigit;
//         n=n/10;

//     }
//     cout<<result; 
   
// return 0;
// }


//DO-WHILE LOOP
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int i = 5;
// do
// {
//     cout<<"\nHello World by Do-while loop";
// } while (i>5);

// while(i>5){
//     cout<<"\nHello World by While loop";
// }

//     return 0;
// }


//BREAK STATEMENT
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//  int i = 1;
//  while(i<10){
//     if(i==6){
//         break;
//     }
//     cout<<" "<<i;
//     i++;
//  }
//     return 0;
// }


//WAP WHERE USER CAN ENTER MULTIPLE NUMBER UNTIL THE NUMBER IS MULTIPLE OF 10
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
 
//     int n;
//     for(int i=1; ;i++){
//         if(n%10==0){
//             break;
//         }
//         cout<<"\nEnter Number : ";
//         cin>>n;
        


//     }
//     cout<<"\n You just entered "<<n<<" which is multiple of 10  ";
//     return 0;
// }


// CONTINUE STATEMENT
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//  int i = 1;
//  while(i<10){
//     if(i==2){
//         i++;
//     continue;
//     }
//     cout<<i<<" ";
//     i++;
//  }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// for(int i = 1; i<=10;i++){
//     if(i==5){
//         continue;
//     }
//     cout<<i<<endl;
// }
//     return 0;
// }
