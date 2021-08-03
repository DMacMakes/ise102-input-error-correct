#include <iostream>
#include <string>
#include "include/ise102.h"
// There are two CONIO or console io libraries. Comment out the one you don't want.
// Use conio_linux.h on LINUX (including replit)
#include "conio_linux.h"
// Use conio.h on WINDOWS (Visual Studio Community, open the sln file)
// #include <conio.h>
using namespace std;

int getGuessFromUser()
{
  string error = "";
  int guess = -1;
  do
  {
    if (error != "") print(error);
    print("Enter a number betwixt 10 and 15 > ");
    cin >> guess;
    
    if(guess >=10 && guess <= 15)
    {
      error = "";
    } else
    {
      error = "Welp, you had one job. Try again.\n";
    }
  }
  while (error != "");
  return guess;
}

int main() {
  clearScreen();

  print("Welcome to guessy world!\n\n");


  int guess = getGuessFromUser();

  auto title_style = makeStyle( color::dark_violet,
                                color::powder_blue,
                                emphasis::bold ); 
  
  std::string name = "Damo";
  print(title_style, "So, {0}.. You're going with {1}, is that right?\n", name, guess);
  delay(500);
  print("Ok mate.\n\n");

  // Using fmt's print. 
  
  // Foreground and background colours plus, if you're on linus, emphasise with bold/underline etc.
/*  auto error_style = makeStyle( color::beige,
                                color::crimson,
                                emphasis::bold);
  */
}
