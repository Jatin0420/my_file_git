//rectangle pattern//
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    // // pyramid
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //  //inverted pyamid 
    //  for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    //  }
     //hollow pyramid
    //  for(int i=0;i<n;i++){
    //     int totalcolumn=i+1;
    //     for(int j=0;j<totalcolumn;j++){
    //         if(i==0||i==n-1||j==0||i==j){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //      cout<<endl;
    //  }
     //inverted
     for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(i==0||i==n-1||j==0||(i+j==n-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
     }

 return 0;   
}
