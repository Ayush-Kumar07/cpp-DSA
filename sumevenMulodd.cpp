// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int n; //TAKING INPUT FROM THE USER
// // //     cin>>n;
// // //     int arr[n];
// // //     int sum = 0; //INITIALISING SUM AND MUL 
// // //     int mul = 1;
// // //     for(int i=0 ; i<n ; i++){
// // //         cin>>arr[i];
// // //     }
// // //     for(int i=0 ; i<n ; i++){
// // //         if(arr[i]%2==0){
// // //             sum = sum+arr[i];
// // //         }
// // //     }
// // //     for(int i=0 ; i<n ; i++){
// // //         if(arr[i]%2!=0){
// // //             mul = mul * arr[i];
// // //         }
// // //     }
// // //     cout<<"the no is: "<<sum<<endl;
// // //     cout<<"the no is: "<<mul<<endl;
// // // }
// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int n ;
// // //     cin>> n ;
// // //     int arr[n];
// // //     int sum = 0;
// // //     int mul = 1;
// // //     for(int i=0; i<n; i++){
// // //         cin>>arr[i];

// // // }
// // // for(int i=0; i<n; i++){
// // //     if(arr[i]%2==0){
// // //         sum=sum+arr[i];
// // //     }
// // // }
// // // for(int i=0; i<n; i++){
// // //     if(arr[i]%2!=0){
// // //         mul=mul*arr[i];
// // //     }
// // // }
// // // cout<<"The sum of array are: "<<sum<<endl;
// // // cout<<"the product of array are: "<<mul<<endl;
// // // }
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n ;
// //     cout<<"Enter the value";
// //     cin>>n;
// //    int mul =1;
// //    int arr[n];
// //     for(int i = 0; i < n; i++){
// //         cin>> arr[i];
// //     }
// //    for(int i=0; i<n; i++){
// //     mul = mul*arr[i];
// //    }
// //    cout<<"the no is: "<<mul;


// // }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[8]={7,4,8,10,89,90,33,45,};

//     int min = arr[0];
//     for(int i=1;i<8;i++){
//         if(min>arr[i]) min = arr[i];
    
//     }
//     cout<<min<<endl;

// }
#include<iostream>
using namespace std ;
int main(){
    int  n;
    cin>>n;
   int arr[n];
   int sum = 0;
   int mul = 1;
   for (int i=0 ; i<n ; i++){
    cin>>arr[i];
   }
   for(int i=0 ; i<n ; i++){
    if(arr[i]%2==0){
        sum = sum+arr[i];
    }
   }
   for(int i=0 ; i<n ; i++){
    if(arr[i]%2!=0){
        mul=mul*arr[i];
    }
   }
   cout<<"the value is :"<<sum<<endl;
   cout<<"the value is :"<<mul<<endl;

}