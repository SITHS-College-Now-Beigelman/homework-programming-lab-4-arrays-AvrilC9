// Avril Cao 
// November 17, 2024
// Homework 4

#include <iostream>

// #include <iostrsam> is used to use cout and endl

using namespace std;

// using namespace std is used to avoid using std:: before every cout and endl

void filterEvens(int myArray[], int value)
{
  int i;
  cout << "Even numbers in array: "; 
  
  for (i = 0; i < value; i++) 
  {
    if (myArray[i] % 2 == 0)
    {
      cout << myArray[i] << " ";
    }
  }
  
  cout << endl;
}

// this is the function filterEvens used to find the even numbers in the array

string dna_to_rna(string dna)
{
  string rna = "";
  
  for (char sequence : dna)
  {
    if(sequence == 'A')
      rna += 'U';
  
    if(sequence == 'C')
      rna += 'G';
  
    if(sequence == 'G')
      rna += 'C';
  
    if(sequence == 'T')
      rna += 'A';
  }
  
  return rna;
}

// this function dna_to_rna is used to convert DNA to RNA

int main ()
{
  const int value = 8;
  int myArray[value];
  int i;

  cout << "Enter 8 integers: " << endl;

// this prompts the user to enter 8 integers
  
  for (i = 0; i < value; i++)
  {
    cin >> myArray[i];
  }

  filterEvens(myArray, value);

// this is the function call to filterEvens

  int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8}; 
  int carsSold = 0;
  int c; 
  int salespersonMost;
  int howMany = cars[0];
  
  
  for (c = 0; c < 10; c++)
  {
    carsSold = carsSold + cars[c];
  }

// this for loop finds the total number of cars sold

  for (c = 0; c < 10; c++)
  {
    if (cars[c] > howMany)
      howMany = cars[c];
    
    salespersonMost = cars[c];
  }

// this for loop finds the salesperson who sold the most cars and how many cars he sold

  cout << "Total cars sold: " << carsSold << endl;
  cout << "Salesperson who sold the most cars: " << salespersonMost << endl;
  cout << "Number of cars that salesperson sold: " << howMany << endl;

// this outputs the total number of cars sold, the salesperson who sold the most cars, and how many cars that salesperson sold

  cout << "ACGTTGCA from dna to rna is: " << dna_to_rna("ACGTTGCA") << endl;
  cout << "ACG TGCA from dna to rna is: " << dna_to_rna("ACG TGCA") << endl;
  cout << "GATTACA from dna to rna is: " << dna_to_rna("GATTACA") << endl; 
  cout << "A42% from dna to rna is: " << dna_to_rna("A42%") << endl;

// this outputs the DNA sequence converted to RNA sequence
    
  return 0;
}

/* Enter 8 integers:
6 2 9 1 4 6 8 3
Even numbers in array: 6 2 4 6 8 
Total cars sold: 58 
Salesperson who sold the most cars: 8
Number of cars that salesperson sold: 14 
ACGTTGCA from dna to rna is: UGCAACGU
ACG TGCA from dna to rna is: UGCACGU 
GATTACA from dna to rna is: CUAAUGU 
A42% from dna to rna is: U */ 
