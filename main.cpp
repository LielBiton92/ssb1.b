#include "string"
#include <iostream>
#include "mat.hpp"
#include <stdexcept>
#include <vector>
using namespace ariel;
using namespace std;

int main(){
    string s;
    s= ariel::mat(1,15,'@','-');
    cout << s <<endl;
    
    // char n2 = 'b';
    // char n3 = 'a';
    // n2 = n3;
    // cout << n2 <<endl;
    // int rows = 7 ;
    // int colls = 5 ; 
    //  vector<vector<char>> rug (rows,vector<char>(colls,'$'));
    //  for(int i = 0; i<colls;i++){
    //     cout << endl;
    //     for(int j = 0 ; j <rows; j++){
    //         cout << rug[i][j] << " ";
    //     }
    // }
    // int i , k = 0;
    // int l = 0 ;
    // int r = 7;
    // char x = '@';
    // for(i=l;i<colls;++i){
    //     rug[k][i]=x;
    // }
    // cout<< endl;
    //    for(int i = 0; i<colls;i++){
    //     cout << endl;
    //     for(int j = 0 ; j <rows; j++){
    //         cout << rug[i][j] << " ";
    //     }
    // }
    // char n1 = '@';
    // char n2= '-';
    // char temp;
    // if(n1 != int(n2)){
    //      temp = n1;
    //      n1 = n2 ; 
    //      n2 = temp;     
    //  }
    //  cout << n1 << "n1"<<endl;
    //  cout << n2 << "n2"<<endl;



    // for(int i = 0; i<rug.size();i++){
    //     cout << rug.size()<<""<<i<<endl;
    //     cout << endl;
    //     for(int j = 0 ; j <rug[i].size(); j++){
    //         cout << rug[i][j] << " ";
    //     }
    // }


    


}
