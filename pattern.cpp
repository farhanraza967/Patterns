#include<iostream>
using namespace std;
int main(){
// int m;
// cout<<"Enter number of rows: "; 
// cin>> m;
// cout<<"Enter number of columns: ";
// int n;
// cin>> n;
// for(int i=1; i<=m; i++){     NUMBER OF LINES
//     for(int i=1; i<=n; i++){ NUMBER OF COLUMNS
//     cout<<"* ";              PRINTED
//     }
//     cout<<endl;
// }


// int m;
// cout<<"Enter number of sides: ";
// cin>> m;
// for(int i=1; i<=m; i++){
//     for(int j=1; j<=m; j++){
//     cout<<j;
//     }
//     cout<<endl;
// }


// for(int i= 1; i<=4; i++){
//     for(int j=1; j<=4; j++){
//     cout<<j;
// }
// cout<<endl;
// }
// 
// int m;
// cin>>m;
// for(int i=0; i<=m; i++){
//     for (int j=1; j<=i+1 ; j++){
//         cout<<"*";


//     }
//     cout<<endl;
// }
// for(int i=0; i<=3; i++){ 
//     for(int j=0; j<=i; j++){
//     cout<<i+1; 
// }
// cout<<endl;
// }


// for(int i=0; i <=4; i++){
//     for (int j=1; j<=i+1; j++){
//         cout<<j;
//     }
//     cout<<endl;
// }


 int n;
 cout<< "Enter the height of F: "; 
    cin >> n;
    for (int i=1; i<=n;i++){
        if (i==1 || i==n/2+1){ 
            for (int j=1; j<=n*3/4; j++){
                cout << "*";
            }
        } 
        else{ 
            cout<< "*";
        }
        cout<<endl;
    }


// for(int i=0; i<=4; i++){
//     for(int j=i; j>0; j--){
//         cout<<j;
//     }
//     cout<<endl;
// }


}



