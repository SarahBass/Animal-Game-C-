 /*     _     _                (_)               | |                             
  ___ _| |_ _| |_    __ _ _ __  _ _ __ ___   __ _| |   __ _  __ _ _ __ ___   ___ 
 / __|_   _|_   _|  / _` | '_ \| | '_ ` _ \ / _` | |  / _` |/ _` | '_ ` _ \ / _ \
| (__  |_|   |_|   | (_| | | | | | | | | | | (_| | | | (_| | (_| | | | | | |  __/
 \___|              \__,_|_| |_|_|_| |_| |_|\__,_|_|  \__, |\__,_|_| |_| |_|\___|
                                                       __/ |                     
                                                      |___/                      
******************************************************************************
Sarah Bass
Student ID: 715560
Currently enrolled on C++ 6PM-9PM
Professor Zhen Zhai
C++ Pointer open file test
*******************************************************************************/
#include <stdio.h>
#include <iostream> //cout and cin
#include <string> 
#include <stdlib.h> // for function of Sleep
#include <fstream> // to open files
#include <unistd.h>
#include <chrono> // no clue what this does

#include <iomanip> //set precision
//#include <curses.h>

using namespace std; 

struct notfoundlog {
    //store words that are not found
    string notfoundwords; 
    
};
//------------------------------------------------------------------ANIMAL TXT FILES
//NOT IN ALPHABETICAL ORDER - IN ORDER OF COMMON TO LEAST COMMON
//1.DOG
//2.CRABSPIDER
//3.FISH
//4.LIZARD
//5.FLY
//6.BIRD
//7.WORMSNAKE
//8.BUTTERFLY
//9.BUG
//10.MOUSE
//11.CAT
//12.NOT FOUND - RED
//13.COW
//14.BEAR
//15.WHALE
//16.RHINO
//17.SHARK
//18.ELEPHANT
//19.HORSE
//20.GIRAFFE
//21.PIG
//22.SHEEP
//23.MONKEY
//24.HEDGEHOG
//25.RACCOON OR RACOON
//26. FROG
//27.TURTLE
//28.BUNNY
//29.BAT
//MISTAKEDOG - RED - NEGATIVE POINT
//MISTAKEBUG - RED - NEGATIVE POINT

void dog()
{string line;

  ifstream myfile ("dog.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02"); 
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c; }

void squid()
{string line;

  ifstream myfile ("squid.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02"); 
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c; }

void crabspider()
{string line;

  ifstream myfile ("crabspider.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02"); 
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c; }

void fish()
{string line;

  ifstream myfile ("fish.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02"); 
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c; }

void lizard()
{string line;

  ifstream myfile ("lizard.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02"); 
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c; }

void fly()
{string line;

  ifstream myfile ("fly.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02"); 
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c; }

void bird()
{string line;

  ifstream myfile ("bird.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02"); 
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c; }

void wormsnake()
{string line;

  ifstream myfile ("wormsnake.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02"); 
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c; }


void butterfly()
{string line;

  ifstream myfile ("butterfly.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02"); 
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c; }

void bug()
{string line;

  ifstream myfile ("bug.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02"); 
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c; }

void mouse()
{string line;

  ifstream myfile ("mouse.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02"); 
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c; }

void cat()
{string line;
  ifstream myfile ("cat.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
     // system("color 02"); 
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;}

void notfound()
{string line;
  ifstream myfile ("nothere.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 04"); 
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;}

void cow()
{string line;
  ifstream myfile ("cow.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02");   
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;}

void bear()
{string line;
  ifstream myfile ("bear.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02");   
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;}

void whale()
{string line;
  ifstream myfile ("whaledolphin.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02");   
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;}

void rhino()
{string line;
  ifstream myfile ("rhino.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02");   
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;}

void shark()
{string line;
  ifstream myfile ("shark.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02");   
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;}

void elephant()
{string line;
  ifstream myfile ("elephant.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02");   
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;}

void horse()
{string line;
  ifstream myfile ("horse.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02");   
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;}

void giraffe()
{string line;
  ifstream myfile ("giraffe.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02");   
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;}

void pig()
{string line;
  ifstream myfile ("pig.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02");   
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;}

void sheep()
{string line;
  ifstream myfile ("sheep.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02");   
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;}
void monkey()
{string line;
  ifstream myfile ("monkey.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
   // system("color 02");   
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;}

void hedgehog()
{string line;
  ifstream myfile ("hedgehog.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02");   
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;}

void racoon()
{string line;
  ifstream myfile ("raccoon.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02");   
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;}

void frog()
{string line;
  ifstream myfile ("frog.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02");   
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;}

void turtle()
{string line;
  ifstream myfile ("turtle.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02");   
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;}

void bunny()
{string line;
  ifstream myfile ("bunny.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02");   
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;}

void bat()
{string line;
  ifstream myfile ("bat.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 02");   
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;}

void mistakedog()
{string line;

  ifstream myfile ("mistakedog.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 04"); 
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c; }

void mistakebug()
{string line;

  ifstream myfile ("mistakebug.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 04"); 
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c; }

void highscoresave()
{string line;

  ifstream myfile ("highscoresave.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //system("color 04"); 
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c; }

//-----------------------------------------------------------------MAIN PROGRAM----------
int main()
{
  //************************ARRAY FOR NOT FOUND STORAGE*******************************
  notfoundlog words[20]; //will store 20 words not found
  string notfoundwords; 
  //***********************************************************************************
  int score = 0;
  int mistakes = 0;
  int birdcount = 0;
  int catcount = 0;
  int butterflycount = 0;
  int dogcount = 0;
  int mammalcount = 0;
  int reptilecount = 0;
  int fishcount = 0;
  int insectcount = 0;
  int arachnidcount = 0;
  int userCount = 0; //determined by notfound
  string highscorename;
  int highscore;
    void (*j)(); // assigns location of open file for animal picture
//--------------------------ANIMATION LOADING----------------------------------------------
    string animal;
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading   " << std::flush;
        usleep(100000);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLOading   " << std::flush;
        usleep(100000);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoAding   " << std::flush;
        usleep(100000);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoaDing   " << std::flush;
        usleep(100000);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadIng   " << std::flush;
        usleep(100000);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadiNg   " << std::flush;
        usleep(100000);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadinG   " << std::flush;
        usleep(100000);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading.  " << std::flush;
        usleep(100000);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading.." << std::flush;
        usleep(100000);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading..." << std::flush;
        usleep(100000);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading   " << std::flush;
        usleep(100000);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLOading   " << std::flush;
        usleep(100000);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoAding   " << std::flush;
        usleep(100000);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoaDing   " << std::flush;
        usleep(100000);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadIng   " << std::flush;
        usleep(100000);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadiNg   " << std::flush;
        usleep(100000);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadinG   " << std::flush;
        usleep(100000);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading.  " << std::flush;
        usleep(100000);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading.." << std::flush;
        usleep(100000);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading..." << std::flush;
        usleep(100000);
        for (int i = 0; i<20; i++) {
        printf("\n");
        usleep(50000);
        }
//--------------------------START SCREEN ANIMATION--------------------------------------------------------
    //system("color 02");
    
    cout << "\nWelcome to C++ Animals" << endl;
    usleep (800000);
    cout << "***Enter Ctrl - Z to quit***" << endl;
    usleep (800000);
    //--------------------------USER INPUT IF STATEMENTS TO FEED INTO J FOR ANIMAL PICTURE--------------
    cout << "Enter an animal: " << endl;
    for (int r = 0; r < 15; r++)
    { (cin >> animal);
    {
    if ((animal == "dog") || (animal == "DOG") || (animal == "dOG") || (animal == "doG") || (animal == "dOg") || (animal == "Dog") ||
    (animal == "poodle") || (animal == "pomeranian") || (animal == "frenchie") || (animal == "pug") || (animal == "puppy") 
    || (animal == "pup") || (animal == "canine") || (animal == "husky") || (animal == "shiba") || (animal == "pom") || (animal == "lab")
    || (animal == "hound") || (animal == "crunchy") || (animal == "mako") || (animal == "butter") || (animal == "koonchki") || 
    (animal == "pooch") || (animal == "mutt") || (animal == "woof") || (animal == "labrador") || (animal == "retriever")
    || (animal == "german") || (animal == "shepherd") || (animal == "bulldog") || (animal == "beagle") || (animal == "rottweiler")
    || (animal == "corgi") || (animal == "dachshunds") || (animal == "terrier") || (animal == "dane") || (animal == "spaniel")
    ||(animal == "schnauzer") || (animal == "boxer") || (animal == "havanese") || (animal == "collie") ||
    (animal == "sheepdog") || (animal == "ridgeback") || (animal == "akita") || (animal == "bloodhound")
    || (animal == "papillon") || (animal == "dalmatian") || (animal == "basenji") || (animal == "spitz")
    || (animal == "shihtzu") || (animal == "samoyed") || (animal == "rescue") ||
    (animal == "Poodle") || (animal == "Pomeranian") || (animal == "Frenchie") || (animal == "Pug") || (animal == "Puppy") 
    || (animal == "Pup") || (animal == "Canine") || (animal == "Husky") || (animal == "Shiba") || (animal == "Pom") || (animal == "Lab")
    || (animal == "Hound") || (animal == "Crunchy") || (animal == "Mako") || (animal == "Butter") || (animal == "Koonchki") || 
    (animal == "Pooch") || (animal == "Mutt") || (animal == "Woof") || (animal == "Labrador") || (animal == "Retriever")
    || (animal == "German") || (animal == "Shepherd") || (animal == "Bulldog") || (animal == "Beagle") || (animal == "Rottweiler")
    || (animal == "Corgi") || (animal == "Dachshunds") || (animal == "Terrier") || (animal == "Dane") || (animal == "Spaniel")
    ||(animal == "Schnauzer") || (animal == "Boxer") || (animal == "Havanese") || (animal == "Collie") ||
    (animal == "Sheepdog") || (animal == "Ridgeback") || (animal == "Akita") || (animal == "Bloodhound")
    || (animal == "Papillon") || (animal == "Dalmatian") || (animal == "Basenji") || (animal == "Spitz")
    || (animal == "Shihtzu") || (animal == "Samoyed") || (animal == "Rescue") || (animal == "doggy") || (animal == "doggie") || 
    (animal == "doge") || (animal == "Doge") || (animal == "wolf") || (animal == "fox") || (animal == "wolverine") || (animal == "coyote")
    || (animal == "hyena") || (animal == "jackal") || (animal == "dingo") || (animal == "hyena") || (animal == "Wolf") || (animal == "Fox") || (animal == "Wolverine") || (animal == "Coyote")
    || (animal == "Hyena") || (animal == "Jackal") || (animal == "Dingo") || (animal == "Hyena"))
    {
        j = dog;
        score ++;
        mammalcount++;
        dogcount++;
    }else if ((animal == "bug") || (animal == "BUG") || (animal == "Bug") || (animal == "bUG") || (animal == "buG") || (animal == "bUg")||
    (animal == "insect") || (animal == "ant") || (animal == "beetle") || (animal == "termite") || (animal == "stinkbug") ||
    (animal == "weevil") || (animal == "cockroach") || (animal == "bug") || (animal == "grasshopper") || (animal == "cicada") ||
    (animal == "cricket") || (animal == "mantis") || (animal == "mantids")
     ||
    (animal == "ladybug")  || (animal == "wasp") ||
    (animal == "stickbug") || (animal == "earwig") || (animal == "pillbug") ||
    (animal == "rollypolly") || (animal == "rolliepollie") || (animal == "borer") || (animal == "silverfish")||
    (animal == "Insect") || (animal == "Ant") || (animal == "Beetle") || (animal == "termite") || (animal == "stinkbug") ||
    (animal == "Weevil") || (animal == "Cockroach") || (animal == "Bug") || (animal == "Grasshopper") || (animal == "Cicada") ||
    (animal == "Cricket") || (animal == "Mantis") || (animal == "Mantids")  ||
    (animal == "Ladybug")  || (animal == "Wasp") ||
    (animal == "Stickbug") || (animal == "Earwig") || (animal == "Pillbug") ||
    (animal == "Rollypolly") || (animal == "Rolliepollie") || (animal == "Borer") || (animal == "Silverfish") || (animal == "Volkswagen"))
    {
      j = bug;
      score ++;
      score = score + insectcount;
      insectcount++;
    }else if ((animal == "cat") || (animal == "kitten") || (animal == "kitty") ||
    (animal == "kiffa") || (animal == "feline") || (animal == "persian") || (animal == "meow") ||
    (animal == "siamese") || (animal == "tabby") || (animal == "furball") || (animal == "bobcat")
    || (animal == "ocelot") || (animal == "serval") || (animal == "lynx") || (animal == "ragdoll")
    || (animal == "tomcat") || (animal == "Cat") || (animal == "CAT") || (animal == "purr") || (animal == "cAT") || 
    (animal == "caT") || (animal == "cAt") || (animal == "Kitten") || (animal == "Kitty") ||
    (animal == "Kiffa") || (animal == "Feline") || (animal == "Persian") || (animal == "Meow") ||
    (animal == "Siamese") || (animal == "Tabby") || (animal == "Furball") || (animal == "Bobcat")
    || (animal == "Ocelot") || (animal == "Serval") || (animal == "Lynx") || (animal == "Ragdoll")
    || (animal == "Tomcat") || (animal == "KITTEN") || (animal == "KITTY") ||
    (animal == "KIFFA") || (animal == "FELINE") || (animal == "PERSIAN") || (animal == "MEOW") ||
    (animal == "SIAMESE") || (animal == "TABBY") || (animal == "FURBALL") || (animal == "BOBCAT")
    || (animal == "OCELOT") || (animal == "SERVAL") || (animal == "LYNX") || (animal == "RAGDOLL")
    || (animal == "TOMCAT") || (animal == "lion") || (animal == "cheetah") || (animal == "jaguar")
    || (animal == "cougar") || (animal == "cub") || (animal == "tiger") || (animal == "panther") ||
    (animal == "leopard") || (animal == "puma") || (animal == "mountianlion") || (animal == "Lion") 
    || (animal == "Cheetah") || (animal == "Jaguar")
    || (animal == "Cougar") || (animal == "Tiger") || (animal == "Panther") ||
    (animal == "Leopard") || (animal == "Puma") || (animal == "Mountianlion")) 
    {
        j = cat;
        score ++;
        catcount++;
        mammalcount++;
    }else if ((animal == "cow") || (animal == "COW") || (animal == "cOW") || (animal == "coW") || (animal == "cOw") || 
    (animal == "calf") || (animal == "heifer") || (animal == "bovine") || (animal == "ox") || (animal == "bull") ||
    (animal == "bison") || (animal == "livestock") || (animal == "oxen") || (animal == "moo")||
    (animal == "cattle") || (animal == "buffalo") || (animal == "yak") || (animal == "gaur") ||
    (animal == "bovidae") || (animal == "gnew") || (animal == "zebu") || (animal == "banteng") ||
    (animal == "wisent") || (animal == "gayal") || (animal == "monique") || (animal == "taurine") ||
    (animal == "veal") || (animal == "hamburger") || (animal == "milk") || (animal == "steak") || (animal == "steer") ||
    (animal == "beef") || (animal == "freemartin") || (animal == "dogie") || (animal == "maverick") ||
    (animal == "Calf") || (animal == "Heifer") || (animal == "Bovine") || (animal == "Ox") || (animal == "Bull") ||
    (animal == "Bison") || (animal == "Livestock") || (animal == "Oxen") || (animal == "Moo")||
    (animal == "Cattle") || (animal == "Buffalo") || (animal == "Yak") || (animal == "Gaur") ||
    (animal == "Bovidae") || (animal == "Gnew") || (animal == "Zebu") || (animal == "Banteng") ||
    (animal == "Wisent") || (animal == "Gayal") || (animal == "Monique") || (animal == "Taurine") ||
    (animal == "Veal") || (animal == "Hamburger") || (animal == "Milk") || (animal == "Steak") || (animal == "Steer") ||
    (animal == "Beef") || (animal == "Freemartin") || (animal == "Dogie") || (animal == "Maverick"))
    {
        j = cow;
        score ++;
        mammalcount++;
    }else if ((animal == "butterfly") || (animal == "moth") || (animal == "swallowtail") || (animal == " kaleidoscope") || (animal == "flutter") ||
    (animal == "monarch") || (animal == "skipper") || (animal == "caterpillar") || (animal == "blue") || (animal == "atlas")||
    (animal == "hawkmoth") || (animal == "luna") || (animal == "gypsy") || (animal == "pupa") ||
    (animal == "Butterfly") || (animal == "Moth") || (animal == "Swallowtail") || (animal == " Kaleidoscope") || (animal == "Flutter") ||
    (animal == "Monarch") || (animal == "Skipper") || (animal == "Caterpillar") || (animal == "Blue") || (animal == "Atlas")||
    (animal == "Hawkmoth") || (animal == "Luna") || (animal == "Gypsy") || (animal == "pupa"))
    {
      j = butterfly;
      score ++;
      score = score + insectcount;
      butterflycount++;
      insectcount++;
    }else if ((animal == "bird") || (animal == "BIRD") || (animal == "Bird") || (animal == "bIrd") || (animal == "bIRD") || (animal == "BirD") ||
    (animal == "chick") || (animal == "chicken") || (animal == "egg") || (animal == "feather") || (animal == "duck") || (animal == "penguin") || 
    (animal == "turkey") || (animal == "robin") || (animal == "seagull") || (animal == "crow") || (animal == "raven") || (animal == "flock") ||
    (animal == "ostrich") || (animal == "duckling") || (animal == "owl") || (animal == "goose") || (animal == "geese") || (animal == "goosling") ||
    (animal == "hummingbird") || (animal == "bluejay") || (animal == "flamingo") || (animal == "woodpecker") || (animal == "pigeon") ||
    (animal == "fowl") || (animal == "poultry") || (animal == "egret") || (animal == "parrot") ||
    (animal == "parakeet") || (animal == "canary") || (animal == "peacock") || (animal == "blackbird") ||
    (animal == "starling") || (animal == "albatross") || (animal == "finch") ||
    (animal == "sparrow") || (animal == "condor") || (animal == "eagle") || (animal == "falcon") ||
    (animal == "osprey") || (animal == "hawk") || (animal == "vulture") || (animal == "albatross") || (animal == "songbird") ||
    (animal == "tern") || (animal == "heron") || (animal == "buzzard") || (animal == "wren") ||
    (animal == "warble") || (animal == "moa") || (animal == "kiwi") || (animal == "rhea") ||
    (animal == "jacana") || (animal == "pheasant") || (animal == "toucan") || (animal == "hornbill") ||
    (animal == "swift") || (animal == "loon") || (animal == "mallard") || (animal == "hen") || (animal == "poult") ||
    (animal == "cock") || (animal == "rooster") || (animal == "drake") || (animal == "raptor") || (animal == "fledgling") ||
    (animal == "passerine") || (animal == "nestling") || (animal == "nest") || (animal == "feather") ||
    (animal == "beak") || (animal == "game") || (animal == "dinosaur") || (animal == "coot") || (animal == "bitterns") ||
    (animal == "rail") || (animal == "ibis") || (animal == "egret") || (animal == "quail") || (animal == "jay") ||
    (animal == "sandpiper") ||  (animal == "partridge") || (animal == "squab") || (animal == "cockatoo") ||
    (animal == "birdofparadise") || (animal == "paradise") || (animal == "kingfisher") ||
     (animal == "bushtit") || (animal == "tit") || (animal == "dove") || (animal == "cuckoo") ||
     (animal == "teal") || (animal == "waxbill") || (animal == "parakeet") ||
     (animal == "crake") || (animal == "flycatcher") || (animal == "trogon") ||
     (animal == "weaver") || (animal == "sapphire") || (animal == "sunbird") ||
     (animal == "booby") || (animal == "boobie") || (animal == "mockingbird") ||
     (animal == "kookaburra") || (animal == "broadbill") || (animal == "baldeagle") ||
     (animal == "goldeneagle") || (animal == "lark") || (animal == "umbrellabird")
    || (animal == "magpie") || (animal == "martin") || (animal == "dodo") ||
    (animal == "Chick") || (animal == "Chicken") || (animal == "Egg") || (animal == "Feather") || (animal == "Duck") || (animal == "Penguin") || 
    (animal == "Turkey") || (animal == "Robin") || (animal == "Seagull") || (animal == "Crow") || (animal == "Raven") || (animal == "Flock") ||
    (animal == "Ostrich") || (animal == "Duckling") || (animal == "Owl") || (animal == "Goose") || (animal == "Geese") || (animal == "Goosling") ||
    (animal == "Hummingbird") || (animal == "Bluejay") || (animal == "Flamingo") || (animal == "Woodpecker") || (animal == "Pigeon") ||
    (animal == "Fowl") || (animal == "Poultry") || (animal == "Egret") || (animal == "Parrot") ||
    (animal == "Parakeet") || (animal == "Canary") || (animal == "Peacock") || (animal == "Blackbird") ||
    (animal == "Starling") || (animal == "Albatross") || (animal == "Finch") ||
    (animal == "Sparrow") || (animal == "Condor") || (animal == "Eagle") || (animal == "Falcon") ||
    (animal == "Osprey") || (animal == "Hawk") || (animal == "Vulture") || (animal == "Albatross") || (animal == "Songbird") ||
    (animal == "Tern") || (animal == "Heron") || (animal == "Buzzard") || (animal == "Wren") ||
    (animal == "Warble") || (animal == "Moa") || (animal == "Kiwi") || (animal == "Rhea") ||
    (animal == "Jacana") || (animal == "Pheasant") || (animal == "Toucan") || (animal == "Hornbill") ||
    (animal == "Swift") || (animal == "Loon") || (animal == "Mallard") || (animal == "Hen") || (animal == "Poult") ||
    (animal == "Cock") || (animal == "Rooster") || (animal == "Drake") || (animal == "Raptor") || (animal == "Fledgling") ||
    (animal == "Passerine") || (animal == "Nestling") || (animal == "Nest") || (animal == "Feather") ||
    (animal == "Beak") || (animal == "Game") || (animal == "Dinosaur") || (animal == "Coot") || (animal == "Bittern") ||
    (animal == "Rail") || (animal == "Ibis") || (animal == "Egret") || (animal == "Quail") || (animal == "Jay") ||
    (animal == "Sandpiper") ||  (animal == "Partridge") || (animal == "Squab") || (animal == "Cockatoo") ||
    (animal == "Birdofparadise") || (animal == "Paradise") || (animal == "Kingfisher") ||
     (animal == "Bushtit") || (animal == "Tit") || (animal == "Dove") || (animal == "Cuckoo") ||
     (animal == "Teal") || (animal == "Waxbill") || (animal == "Parakeet") ||
     (animal == "Crake") || (animal == "Flycatcher") || (animal == "Trogon") ||
     (animal == "Weaver") || (animal == "Sapphire") || (animal == "Sunbird") ||
     (animal == "Booby") || (animal == "Boobie") || (animal == "Mockingbird") ||
     (animal == "Kookaburra") || (animal == "Broadbill") || (animal == "Baldeagle") ||
     (animal == "Goldeneagle") || (animal == "Lark") || (animal == "Umbrellabird")
    || (animal == "Magpie") || (animal == "Martin") || (animal == "Dodo"))
    {
      j = bird;
      score ++;
      birdcount++;
    }else if ((animal == "fish") || (animal == "Fish") || (animal == "FISH") || (animal == "FisH") || (animal == "fisH") ||
    (animal == "shark") || (animal == "flounder") || (animal == "mermaid") || (animal == "jellyfish") || (animal == "seahorse") ||
    (animal == "swordfish") || (animal == "bass") || (animal == "salmon") || (animal == "goldfish") ||
    (animal == "koi") || (animal == "angelfish") || (animal == "molly") || (animal == "zebrafish") ||
    (animal == "tetra") || (animal == "guppy") || (animal == "beta") || (animal == "betta") ||
    (animal == "clownfish") || (animal == "clown") || (animal == "star") || (animal == "starfish") ||
    (animal == "guppi") || (animal == "oscar") || (animal == "catfish") || (animal == "glofish") ||
    (animal == "glowfish") || (animal == "killifish") || (animal == "minnow") ||
    (animal == "loach") || (animal == "rockfish") || (animal == "swordtail") ||
    (animal == "pleco") || (animal == "danio") || (animal == "gourami") || (animal == "cichlid") ||
    (animal == "barb") || (animal == "discus") || (animal == "rainbowfish") || (animal == "rasboras") ||
    (animal == "hatchetfish") || (animal == "dragonfish") || (animal == "tang") ||
    (animal == "beauty") || (animal == "wrasse") || (animal == "cardinalfish") || (animal == "damselfish") ||
    (animal == "pufferfish") || (animal == "perch") || (animal == "bluegill") || (animal == "trout") ||
    (animal == "sunfish") || (animal == "panfish") ||(animal == "rainbowtrout") || (animal == "walleye") ||
    (animal == "sauger") || (animal == "herring") || (animal == "anchoy") || (animal == "lunge") ||
    (animal == "pickerel") || (animal == "mackerel") || (animal == "carp") || (animal == "sturgeon") ||
    (animal == "garibaldi") ||(animal == "grouper") || (animal == "butterflyfish") ||
    (animal == "goby") || (animal == "wrasse") || (animal == "dolphinfish") || (animal == "anglerfish") ||
    (animal == "fangtooth") || (animal == "barracuda") || (animal == "mahi") || (animal == "oarfish") ||
    (animal == "halibut") || (animal == "orangeroughy") || (animal == "parrotfish") ||
    (animal == "lionfish") || (animal == "sailfish") || (animal == "frogfish") ||
    (animal == "sawfish") || (animal == "scorpionfish") || (animal == "stonefish") ||
    (animal == "flyingfish") || (animal == "tuna") || (animal == "fingerling") || (animal == "albacore")
    || (animal == "Shark") || (animal == "Flounder") || (animal == "Mermaid") || (animal == "Jellyfish") || (animal == "Seahorse") ||
    (animal == "Swordfish") || (animal == "Bass") || (animal == "Salmon") || (animal == "Goldfish") ||
    (animal == "Koi") || (animal == "Angelfish") || (animal == "Molly") || (animal == "Zebrafish") ||
    (animal == "Tetra") || (animal == "Guppy") || (animal == "Beta") || (animal == "Betta") ||
    (animal == "Clownfish") || (animal == "Clown") || (animal == "Star") || (animal == "Starfish") ||
    (animal == "Guppi") || (animal == "Oscar") || (animal == "Catfish") || (animal == "Glofish") ||
    (animal == "Glowfish") || (animal == "Killifish") || (animal == "Minnow") ||
    (animal == "Loach") || (animal == "Rockfish") || (animal == "Swordtail") ||
    (animal == "Pleco") || (animal == "Danio") || (animal == "Gourami") || (animal == "Cichlid") ||
    (animal == "Barb") || (animal == "Discus") || (animal == "Rainbowfish") || (animal == "Rasboras") ||
    (animal == "Hatchetfish") || (animal == "Dragonfish") || (animal == "Tang") ||
    (animal == "Beauty") || (animal == "Wrasse") || (animal == "Cardinalfish") || (animal == "Damselfish") ||
    (animal == "Pufferfish") || (animal == "Perch") || (animal == "Bluegill") || (animal == "Trout") ||
    (animal == "Sunfish") || (animal == "Panfish") ||(animal == "Rainbowtrout") || (animal == "Walleye") ||
    (animal == "Sauger") || (animal == "Herring") || (animal == "Anchoy") || (animal == "Lunge") ||
    (animal == "Pickerel") || (animal == "Mackerel") || (animal == "Carp") || (animal == "Sturgeon") ||
    (animal == "Garibaldi") ||(animal == "Grouper") || (animal == "Butterflyfish") ||
    (animal == "Goby") || (animal == "Wrasse") || (animal == "Dolphinfish") || (animal == "Anglerfish") ||
    (animal == "Fangtooth") || (animal == "Barracuda") || (animal == "Mahi") || (animal == "Oarfish") ||
    (animal == "Halibut") || (animal == "Orangeroughy") || (animal == "Parrotfish") ||
    (animal == "Lionfish") || (animal == "Sailfish") || (animal == "Frogfish") ||
    (animal == "Sawfish") || (animal == "Scorpionfish") || (animal == "Stonefish") ||
    (animal == "Flyingfish") || (animal == "Tuna") || (animal == "Fingerling") || (animal == "Albacore"))
    {
      j = fish;
      score++;
      fishcount++;
    }else if ((animal == "Snake") || (animal == "snake") || (animal == "SNAKE") || (animal == "worm") || (animal == "WORM") || (animal == "Worm") ||
    (animal == "eel") || (animal == "rattlesnake") || (animal == "boa") || (animal == "constrictor") || (animal == "cornsnake") || (animal == "cobra") ||
    (animal == "earthworm") || (animal == "mealworm") || (animal == "glowworm") || (animal == "hookworm") || (animal == "tapeworm") ||
    (animal == "pinworm") || (animal == "fluke") || (animal == "nightcrawler") || (animal == "maggot") ||
    (animal == "larvae") || (animal == "python") || (animal == "viper") || (animal == "anaconda") ||
    (animal == "mamba") || (animal == "gartersnake") || (animal == "copperhead") || (animal == "sidewinder") ||
    (animal == "racer") || (animal == "kingsnake") || (animal == "cottonmouth") ||
    (animal == "milksnake") || (animal == "coralsnake") || (animal == "brownsnake") || (animal == "greensnake") ||
    (animal == "adder") || (animal == "millipede") || (animal == "centipede") || 
    (animal == "slug") || 
    (animal == "Eel") || (animal == "Rattlesnake") || (animal == "Boa") || (animal == "Constrictor") || (animal == "Cornsnake") || (animal == "Cobra") ||
    (animal == "Earthworm") || (animal == "Mealworm") || (animal == "Glowworm") || (animal == "Hookworm") || (animal == "Tapeworm") ||
    (animal == "Pinworm") || (animal == "Fluke") || (animal == "Nightcrawler") || (animal == "Maggot") ||
    (animal == "Larvae") || (animal == "Python") || (animal == "Viper") || (animal == "Anaconda") ||
    (animal == "Mamba") || (animal == "Gartersnake") || (animal == "Copperhead") || (animal == "Sidewinder") ||
    (animal == "Racer") || (animal == "Kingsnake") || (animal == "Cottonmouth") ||
    (animal == "Milksnake") || (animal == "Coralsnake") || (animal == "Brownsnake") || (animal == "Greensnake") ||
    (animal == "Adder") || (animal == "Millipede") || (animal == "Centipede") || 
    (animal == "Slug"))
    {
      j = wormsnake;
      score++;
      

    }else if ((animal == "lizard") || (animal == "Lizard") || (animal == "LIZARD") ||
    (animal == "reptile") || (animal == "gecko") || (animal == "salamander") || (animal == "newt") ||
    (animal == "iguana") || (animal == "basilisk") || (animal == "skink") || (animal == "monitor") ||
    (animal == "chameleon") || (animal == "dragon") || (animal == "anole") || (animal == "beardeddragon") ||
    (animal == "aligator") || (animal == "crocodile") || (animal == "hornedlizard") ||
    (animal == "Reptile") || (animal == "Gecko") || (animal == "Salamander") || (animal == "Newt") ||
    (animal == "Iguana") || (animal == "Basilisk") || (animal == "Skink") || (animal == "Monitor") ||
    (animal == "Chameleon") || (animal == "Dragon") || (animal == "Anole") || (animal == "Beardeddragon") ||
    (animal == "Aligator") || (animal == "Crocodile") || (animal == "Hornedlizard"))
    {
      j = lizard;
      score++;
      reptilecount++;
    }else if ((animal == "spider") || (animal == "Spider") || (animal == "SPIDER") || (animal == "arachnid") || (animal == "tarantula") || (animal == "blackwidow") 
    || (animal == "mite") || (animal == "bedbug") || (animal == "lice") || (animal == "mites") || (animal == "louse") || (animal == "crab") || (animal == "hermitcrab") || (animal == "widow")
    || (animal == "tick") || (animal == "scorpion") || (animal == "harvestmen") || (animal == "acarid") || (animal == "sunspider") || (animal == "schizomid") ||
    (animal == "Arachnid") || (animal == "Tarantula") || (animal == "Blackwidow") || (animal == "Mite") || (animal == "Bedbug") || (animal == "Lice") || (animal == "Mites") || (animal == "Louse") || (animal == "Crab") || (animal == "Hermitcrab") || (animal == "Widow")
    || (animal == "Tick") || (animal == "Scorpion") || (animal == "Harvestmen") || (animal == "Acarid") || (animal == "Sunspider") || (animal == "Schizomid") || (animal == "flea") || (animal == "Flea") || (animal == "aphid") ||
    (animal == "Aphid"))
    
    {
      j = crabspider;
      score++;
    }else if ((animal == "mouse") || (animal == "Mouse") || (animal == "MOUSE") || (animal == "mice") || (animal == "Mice") || (animal == "MICE") || (animal == "RAT") ||
    (animal == "hamster") || (animal == "gerbel") || (animal == "rodent") || (animal == "chinchilla") ||
     (animal == "squirrel") || (animal == "rat") || (animal == "gopher") || (animal == "guineapig")
     || (animal == "guinea") || (animal == "pikachu") || (animal == "viscacha") ||
     (animal == "degu") || (animal == "paca") || (animal == "nutria") || (animal == "lemming") || (animal == "opossum") ||
     (animal == "vole") || (animal == "woodrat") || (animal == "jerboa") | (animal == "shrew") ||
     (animal == "mole") || (animal == "zokor") || (animal == "dormouse") || (animal == "groundhog") ||
     (animal == "marmot") || (animal == "prariedog") || (animal == "pika") || (animal == "muskrat") 
     || (animal == "wombat") || (animal == "wallaby") || (animal == "kangaroo") ||
     (animal == "marsupial") || (animal == "bilby") || (animal == "tarseir") ||
     (animal == "tamarin") || (animal == "howler") || (animal == "marmoset") ||
     (animal == "aye") || (animal == "ayeaye") || (animal == "tasmaniandevil") || (animal == "devil") ||
     (animal == "tasmainian") || (animal == "numbat") || (animal == "glider") || (animal == "wallaroo") ||
     (animal == "cuscus") || (animal == "bandicoot") || (animal == "armadillo") || (animal == "sloth") ||
     (animal == "pangolin") || (animal == "aardvark") || (animal == "tamandua") || (animal == "chipmunk") || 
     (animal == "mongoose") || (animal == "meerkat") || (animal == "meercat") || (animal == "civet") || (animal == "genet") ||
     (animal == "prarie") || (animal == "prariedog") || (animal == "ferret") || (animal == "stoat") ||
     (animal == "weasel") || (animal == "badger")|| (animal == "otter") || (animal == "mink") || (animal == "martin") ||
     (animal == "polecat") || (animal == "skunk") || (animal == "mustelid") || (animal == "zorilla") || (animal == "capybara") || (animal == "coati") || (animal =="anteater") )
    {
      j = mouse;
      score ++;
      mammalcount++;
    } else if ((animal == "bear") || (animal == "Bear") ||(animal == "BEAR") || 
    (animal == "panda") || (animal == "pandabear") || (animal == "papa") || (animal == "koala") ||
    (animal == "polar") || (animal == "polarbear") || (animal == "grizzly") || (animal == "grizzlybear") ||
    (animal == "redpanda") || (animal == "blackbear") || (animal == "pizzly") || (animal == "giantpanda") ||
    (animal == "giantpandabear") || (animal == "ursid") || (animal == "brownbear") || (animal == "sunbear")||
    (animal == "slothbear") || (animal == "gay") || (animal == "cub"))
    {
      j = bear;
      mammalcount++;
      score++;
    }else if ((animal == "whale") || (animal == "dolphin") || (animal == "killer") ||
    (animal == "baleen") || (animal == "killerwhale") || (animal == "baleenwhale") ||
    (animal == "humpback") || (animal == "humpbackwhale") || (animal == "greywhale") ||
    (animal == "graywhale") || (animal == "bowhead") || (animal == "bowheadwhale") ||
    (animal == "cetacean") || (animal == "porpoise") || (animal == "manatee") ||
    (animal == "seal") || (animal == "sealion") || (animal == "bottlenose") ||
    (animal == "bottlenosedolphin") || (animal == "vaquita") | (animal == "bluewhale") || (animal == "sperm") ||
    (animal == "spermwhale") || (animal == "baleen") || (animal == "baleenwhale") ||
    (animal == "beakedwhale") || (animal == "leopardseal"))
    {
      j = whale;
      score++;
      mammalcount++;

    }else if((animal == "fly") || (animal == "bee") || (animal == "mosquito") || (animal == "gnat") || (animal == "housefly") ||
    (animal == "wasp") || (animal == "whitefly") || (animal == "dragonfly") || (animal == "horsefly") || (animal == "botfly") ||
    (animal == "tsetsefly") || (animal == "cranefly") || (animal == "fruitfly") ||
    (animal == "cicada") || (animal == "firefly") || (animal == "hornet"))
    {
      j = fly;
      score++;
      insectcount++;
    }else if ((animal == "elephant") || (animal == "Elephant") || (animal == "ELEPHANT") || (animal == "mammoth") || (animal == "woolymammoth") ||
    (animal == "tapir") || (animal == "mastodon"))
    {
      j = elephant;
      score++;
      mammalcount++;
    }else if ((animal == "shark") || (animal == "greatwhiteshark") || (animal == "Shark") || (animal == "SHARK") || (animal == "baskingshark") || (animal == "whaleshark") ||(animal == "leopardshark") ||
    (animal == "hammerheadshark") ||(animal == "ray") || (animal == "mantaray") ||(animal == "stingray"))
    {
      j = shark;
      score++;
      fishcount++;
    }else if ((animal == "Horse") || (animal == "horse") || (animal == "pony") || (animal == "stallion") || (animal == "colt") || (animal == "mare") ||(animal == "zebra") ||
    (animal == "gazelle") ||(animal == "antelope") || (animal == "deer") ||(animal == "reindeer")|| (animal == "caribou") || (animal == "elk") || (animal == "moose") || (animal == "impala")
    || (animal == "gerenuk")|| (animal == "buck")|| (animal == "donkey")|| (animal == "mule")|| (animal == "saiga")|| (animal == "blackbuck"))
    {
      j = horse;
      score++;
      mammalcount++;
    }else if ((animal == "giraffe") || (animal == "Giraffe") || (animal == "camel") || (animal == "llama") || (animal == "alpaca") || (animal == "okapi"))
    {
      j = giraffe;
      score++;
      mammalcount++;
    }else if ((animal == "pig") || (animal == "Pig") || (animal == "piglet") || (animal == "boar") || (animal == "sow") || (animal == "hippo")|| (animal == "hippopotamus")|| (animal == "hog")
    || (animal == "pork")|| (animal == "warthog") || (animal == "javelina")||(animal == "swine")||(animal == "oink")||(animal == "trump")||(animal == "Trump"))
    {
      j = pig;
      score++;
      mammalcount++;
    }else if ((animal == "sheep") || (animal == "lamb") || (animal == "goat") || (animal == "mountaingoat") || (animal == "doe") || (animal == "Fawn")|| (animal == "kid")|| (animal == "bighorn")
    || (animal == "bighornsheep")|| (animal == "fawn"))
    {
      j = sheep;
      score++;
      mammalcount++;
    }else if ((animal == "monkey") || (animal == "ape") || (animal == "human") || (animal == "gorilla") || (animal == "howlermonkey") || (animal == "primate")|| (animal == "baboon")|| (animal == "bighorn")
    || (animal == "chimp")|| (animal == "chimpanzee")|| (animal == "langur") || (animal == "orangutan")||(animal == "capuchin")||
    (animal == "lemur")||(animal == "macaque")|| (animal == "gibbon")|| (animal == "tarsier")||(animal == "colobus")||
    (animal == "sunrili")||(animal == "sifaka")||(animal == "gelada")||(animal == "howler")||(animal == "spidermonkey")||(animal == "squirrelmonkey"))
    {
      j = monkey;
      score++;
      mammalcount++;
    }else if ((animal == "bunny") || (animal == "rabbit") || (animal == "hare") || (animal == "capon") || (animal == "cony") || (animal == "cuniculus")|| (animal == "jackrabbit")|| (animal == "lop")
    || (animal == "hop")|| (animal == "easter")||(animal == "easterbunny")||(animal == "cottontail"))
    {
      j = bunny;
      score++;
      mammalcount++;
    }else if ((animal == "bat") || (animal == "Bat") || (animal == "BAT") || (animal == "flyingfox") || (animal == "vampire") || (animal == "vampirebat")|| (animal == "fruit")|| (animal == "fruitbat")
    || (animal == "microbat")|| (animal == "megabat")||(animal == "hoarybaty")||(animal == "pteropus"))
    {
      j = bat;
      score++;
      mammalcount++;
    }else if ((animal == "racoon") || (animal == "raccoon") || (animal == "platypus") || (animal == "beaver") || (animal == "woodchuck") || (animal == "coatis")|| (animal == "ringtail")|| (animal == "lop")
    || (animal == "vermin") || (animal == "trashpanda") || (animal == "coon") )
    {
      j = racoon;
      score++;
      mammalcount++;
    }else if ((animal == "hedgehog") || (animal == "hedge") || (animal == "porcupine") || (animal == "exhidna") )
       {
      j = hedgehog;
      score++;
      mammalcount++;
    }
    else if ((animal == "rhino") || (animal == "Rhino") || (animal == "unicorn") || (animal == "rhinoceros"))
    {
      j = rhino;
      score++;
      mammalcount++;
    }else if ((animal == "turtle") || (animal == "seaturtle") || (animal == "tortoise") || (animal == "galapagos"))
    {
      j = turtle;
      score++;
      reptilecount++;
    }else if ((animal == "frog") || (animal == "Frog") || (animal == "toad") || (animal == "amphibian")
    || (animal == "tadpole") || (animal == "polywog")|| (animal == "salamander")|| (animal == "newt")
    || (animal == "waterdog")|| (animal == "waterdragon")|| (animal == "caecilian")|| (animal == "treefrog")
    ||(animal == "poisondartfrog")|| (animal == "poison")||(animal == "canetoad")|| (animal == "spadefoot"))
    {
      j = frog;
      score++;
      
    }else if ((animal == "squid") || (animal == "Squid") || (animal == "octopus") || (animal == "Octopus")
    || (animal == "ammonite") || (animal == "nautilidae")|| (animal == "vampiresquid")|| (animal == "cuttlefish")
    || (animal == "giantsquid")|| (animal == "cephalopod")|| (animal == "nautiloid")|| (animal == "japaneseflyingsquid")
    ||(animal == "dumbooctopus")|| (animal == "umbrellasquid")||(animal == "blueringedoctopus")|| (animal == "flyingsquid"))
    {
      j = squid;
      score++;
    }else if ((animal == "doj") || (animal == "dag") || (animal == "god")
     || (animal == "deg") || (animal == "dig") || (animal == "dg") || 
     (animal == "dj") || (animal == "dod") || (animal == "pog") || (animal == "gd"))
    {
      j = mistakedog;
      mistakes ++;

    }else if ((animal == "dug") || (animal == "bog") || (animal == "bag") 
    || (animal == "bg") || (animal == "gb") || (animal == "vug") || (animal == "vog"))
    {
      j = mistakebug;
      mistakes ++;
    }
    else //***********************************NOT FOUND INPUT AND STORAGE INTO ARRAY
    {
        j = notfound;
        notfoundlog user;
        user.notfoundwords = animal;
        words[userCount] = user;
        userCount++;
        
    }//********************************************************************************
    j(); // THE EXTREMELY IMPORTANT J EVERYTHING IS LINKED TO
    cout << "\nScore: " << score <<endl; //SCORE CONSTANTLY UPDATED HERE
    }
    }
//--------------------------END SCREEN ANIMATIONS--------------------------------------------------------

//system("color 02");

string line;
  ifstream myfile ("finalscore.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
      usleep(5000);
    }
    myfile.close();
  }

  else cout << "Unable to open file";

char c;

cout << "--------------------" << endl;   
cout << "Hi Score: " << score << endl;
cout << "MISTAKES: " << mistakes <<endl;
cout << "--------------------" << endl;  
for (int i = 0; i<4; i++){
//system("color 0A");
usleep(200000);
//system("color 0B"); 
usleep(200000);
//system("color 0E");
usleep(200000);
//system("color 06");
usleep(200000);
//system("color 0A");
usleep(200000);
//system("color 02");
}

for (int i = 0; i<12; i++) {
    printf("\n");
    usleep(500);
}

cout << "----------------------------------" << endl;   
cout << "INSECT BONUS: " << insectcount << endl;
cout << "----------------------------------" << endl;    
cout << "---ANIMAL PERFORMANCE STATISTICS---" << endl;
cout << "\tMAMMALS LISTED: " << mammalcount << endl;
cout << "\tREPTILES LISTED: " << reptilecount << endl;
cout << "\tFISH LISTED: " << fishcount << endl;
cout << "\tBIRDS LISTED: " << birdcount << endl;
cout << "\tDOGS LISTED: " << dogcount << endl;
cout << "\tCATS LISTED: " << catcount << endl;
cout << "----------------------------------" << endl;  
cout << "***Snakes|amphibians|worms|arachnids are not counted***" <<endl;

usleep (6000000);

/*
for (int i = 0; i<7; i++){
system("color 0A");
Sleep(200);
system("color 0B"); 
Sleep(200);
system("color 0E");
Sleep(200);
system("color 06");
Sleep(200);
system("color 0A");
Sleep(200);
system("color 02");
}
*/
for (int i = 0; i<12; i++) {
    printf("\n");
    usleep(500);
}

cout << "--------------------" << endl;   
cout << "NOT FOUND IN DATABASE" << endl;   
cout << "--------------------" << endl;   
for (int i = 0; i < userCount; i++)
{
    cout << "Not Found: " << words[i].notfoundwords << endl;
}
cout << "--------------------" << endl;  
/*for (int i = 0; i<7; i++){
system("color 0A");
Sleep(200);
system("color 0B"); 
Sleep(200);
system("color 0E");
Sleep(200);
system("color 06");
Sleep(200);
system("color 0A");
Sleep(200);
system("color 02");
}
*/
usleep (6000000);
for (int i = 0; i<20; i++) {
    printf("\n");

}
    

    cout << "\aThank you for using C++ Animals" << endl;

    usleep (800);
    for (int i = 0; i<30; i++) {
    printf(">");
    usleep(500000);    
}



cout << "\nEND OF PROGRAM" <<  endl;
    usleep(10500);
for (int i = 0; i<20; i++) {
    printf("\n");
    usleep(500); }

 //system("color 07");   
  
    return 0;
}