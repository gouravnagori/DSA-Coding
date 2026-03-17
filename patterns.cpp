//WAP TO PRINT PATTERN LIKE THIS AND TAKE INPUT FOR ROWS FROM USER
//  1 1 1 1 1
//  2 2 2 2 2
//  3 3 3 3 3
//  4 4 4 4 4
//  5 5 5 5 5 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows : ";
//     cin>>n;
// for(int i = 1 ; i<=n ; i++){
//    for(int j = 1; j<=n ; j++){
//     cout<<" "<<i;
//    }
//     cout<<endl;
// }
//     return 0;
// }



//WAP TO PRINT PATTERN for n
// *
// * *
// * * *
// * * * *
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n = 5;
//     for(int i = 1 ; i <= n ; i++){
//         for(int j = 1 ; j <= i ; j++){
//             cout<<" *";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//WAP TO PRINT PATTERN for n
// * * * *
// * * *
// * * 
// * 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int i = 1 ; i <= n ; i++){
//         for(int j = i ; j <= n ; j++){
//             cout<<" *";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//WAP TO PRINT THIS PATTERN
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n = 8;
//     for(int i = 1 ; i <= n ; i++){
//         for(int j = 1 ; j <= i ; j++){
//             cout<<" "<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//WAP TO PRINT THIS PATTERN
// A
// B C
// D E F
// G H I J
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n = 5;
//    char ch = 'A';
//     for(int i = 1 ; i <= n ; i++){
//         for(int j = 1 ; j <= i ;j++){
//             cout<<" "<<ch;
//             ch++;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


//WAP TO PRINT HOLLOW REACTANGLE PATTERN
//  *  *  *  *  * 
//  *           *
//  *           *
//  *  *  *  *  *
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n = 6;
//     for(int i = 1 ; i <= n ; i++){
//         cout<<" *";
//            for (int j = 1; j <= n-1; j++)
//            {
//             if(i == 1 || i == n){
//                 cout<<"  *";
//             }
//             else{
//                 cout<<"   ";
//             }
//            }
           
//         cout<<"  *";
//         cout<<"\n";
//     }
    
//     return 0;
// }


        
//WAP TO PRINT INVERTED AND ROATTED HALF-PYRAMID PATTERN
//       *
//     * *
//   * * * 
// * * * * 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n = 10;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j <= n-i; j++)
//         {
//             cout<<"  ";
//         }

//         for (int j = 1; j <= i; j++)
//         {
//             cout<<" *";
//         }

//         cout<<"\n";
//     }
    
//     return 0;
// }


//PROGRAM TO PRINT FLOYD'S TRIANGLE
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n = 5;
//     int no = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<" "<<no;
//             no++;
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }



//WAP TO PRINT DIMOND PATTERN  
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n = 4;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i ; j++)
//         {
//             cout<<"  ";
//         }
//         for (int j = 1; j <= (2*i)-1; j++)
//         {
//             cout<<" *";
//         }
        
//         cout<<endl;
//     }
    
//     for (int i = n; i >= 1; i--)
//     {
//       for (int j = 1; j <= n-i; j++)
//       {
//         cout<<"  ";
//       }
      
//       for (int j = 1; j <= 2*i - 1; j++)
//       {
//         cout<<" *";
//       }
      
       
//         cout<<endl;
//     }
    
//     return 0;
// }




//WAP TO PRINT BUTTERFLY PATTERN 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<" *";
        }
        for (int j = 1 ;j <= 2*(n - i); j++)
        {
            cout<<"  ";
        }
       for (int j = 1; j <= i; j++)
        {
            cout<<" *";
        }
        
      
        cout<<endl;
    }
    
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout<<" *";
        }
        for (int j = 1 ;j <= 2*(n-i); j++)
        {
            cout<<"  ";
        }
       for (int j = 1; j <= i; j++)
        {
            cout<<" *";
        }
        
      
        cout<<endl;
    }

    return 0;
}