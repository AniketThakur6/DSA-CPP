#include <iostream>
#include <fstream>

using namespace std;

/**
 * write on file
 */

// int main(){

//   //File kom open karna
//   ofstream fout; // fout is object of ofstream
//   fout.open("zoom.txt"); // if file present than if not than create and read
//   // Write kar skta hu
//   fout<<"Hello india\n";

//   fout.close(); // release the resource which handing this file

// }

/**
 * read from file
 */

// int main()
// {
//   // open file
//   ifstream fin;
//   fin.open("zoom.txt");

//   // read file
//   char c;
//   // fin >> c; // but this ignore space in file
//   c = fin.get(); // it is used to read file with space

//   // loop to print file letter one by one
//   while (!fin.eof()) // eof is end of file function return 1 when file id end and else time return 0 that's why  we use ! to invert the value
//   {
//     cout << c;
//     // fin >> c;
//     c = fin.get();
//   }
//   fin.close();
// }

/**
 * write and read
 */

int main()
{

  //write
  ofstream fout;
  fout.open("z1.txt");
  fout << "Hello India\n";
  fout << "Hello Rohit\n";
  fout << "Hello Bhai\n";

  fout.close();

  // read
  ifstream fin;
  fin.open("z1.txt");

  string line;

  while(getline(fin,line)){
    cout<<line<<endl;
  }

  fin.close();
}