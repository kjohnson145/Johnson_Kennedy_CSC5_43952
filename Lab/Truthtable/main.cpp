/* 
 * File:   main.cpp
 * Author: Kennedy Johnson
 * Created on March 18, 2015, 9:35 AM
 * purpose: Determine if table created in class agrees with logic of the computer.
 */


#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare variables
    bool x,y;
    //heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X"
        <<"!(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
            //output the first row of the table
            x=true;y-true;
            cout<<(x?'T':'F')<<" ";
            cout<<(y?'T':'F')<<"  ";
            cout<<(!x?'T':'F')<<"  ";
            cout<<(!x?'T':'F')<<"   ";
            cout<<(x&&y?'T':'F')<<"    ";
            cout<<(x||y?'T':'F')<<"   ";
            cout<<(y^y?'T':'F')<<"    ";
            cout<<(x^y^y?'T':'F')<<"     ";
            cout<<(x^y^y?'T':'F')<<"      ";
            cout<<(!(x&&x)?'T':'F')<<"      ";
            cout<<(!x||!x?'T':'F')<<"      ";
            cout<<(!(x||y)?'T':'F')<<"       ";
            cout<<(!x&&!y?'T':'F')<<" ";
            cout<<endl;
            //Output the second row of the table
            y=false;
            cout<<(x?'T':'F')<<" ";
            cout<<(y?'T':'F')<<"  ";
            cout<<(!x?'T':'F')<<"  ";
            cout<<(!y?'T':'F')<<"   ";
            cout<<(x&&y?'T':'F')<<"    ";
            cout<<(x||y?'T':'F')<<"   ";
            cout<<(x^y?'T':'F')<<"    ";
            cout<<(x^y^y?'T':'F')<<"     ";
            cout<<(x^y^x?'T':'F')<<"      ";
            cout<<(!(x&&y)?'T':'F')<<"      ";
            cout<<(!x||!y?'T':'F')<<"      ";
            cout<<(!(x||y)?'T':'F')<<"       ";
            cout<<(!x&&!y?'T':'F')<<" ";
            //Output the third row of the table
            cout<<endl;
            cout<<(y?'T':'F')<<" ";
            cout<<(x?'T':'F')<<"  ";
            cout<<(!y?'T':'F')<<"  ";
            cout<<(!x?'T':'F')<<"   ";
            cout<<(x&&y?'T':'F')<<"    ";
            cout<<(x||y?'T':'F')<<"   ";
            cout<<(x^y?'T':'F')<<"    ";
            cout<<(x^x^y?'T':'F')<<"     ";
            cout<<(x^y^y?'T':'F')<<"      ";
            cout<<(!(x&&y)?'T':'F')<<"      ";
            cout<<(!x||!y?'T':'F')<<"      ";
            cout<<(!(x||y)?'T':'F')<<"       ";
            cout<<(!x&&!y?'T':'F')<<" ";
            cout<<endl;
            //Output the forth row of the table
            cout<<(y?'T':'F')<<" ";
            cout<<(y?'T':'F')<<"  ";
            cout<<(!y?'T':'F')<<"  ";
            cout<<(!y?'T':'F')<<"   ";
            cout<<(x&&y?'T':'F')<<"    ";
            cout<<(y||y?'T':'F')<<"   ";
            cout<<(x^x?'T':'F')<<"    ";
            cout<<(x^x^y?'T':'F')<<"     ";
            cout<<(x^y^x?'T':'F')<<"      ";
            cout<<(!(x&&y)?'T':'F')<<"      ";
            cout<<(!x||!y?'T':'F')<<"      ";
            cout<<(!(y||y)?'T':'F')<<"       ";
            cout<<(!y&&!y?'T':'F')<<" ";
            cout<<endl;
            //Exit stage right!
    return 0;
}

