# Animal-Game-C-
------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
          
          This animal game was my first project 
          I did for fun in C++ , and it works.

          Yes, it is very sloppy and could use 
          a major overhaul! 

          However, it does still shine as a great
          repository of animals and ascii art!
          
          ⬆⬇ So check it out! 

------------------------------------------------------------------------------------------------------------------------------------------------------

➀ To maximize the least need for creation of art, all animals will print out as a generic animal model unless the animal is specifically
special enough to have its own image. 

    For example all fish, lizards, frogs, and birds
    will print out as a generic model of their type.
    Worms and snakes use the same image.

However, mammals and bugs are more tricky and they needed a lot more attention to detail. 

    The two largest groupings are a generic mammal shape 
    that looks like a marsupial mouse, and a generic bug
    that has six legs.

    These animals will have a generic model given by their
    features (long neck, four leg mammals might include 
    giraffe,llamma, alpaca etc). Four legged Equidae animals 
    include zebras, horses, donkeys, deer, antelope, and so on. 

    Then there are really special animals that need an image
    entirely to themselves like elephants rhinos.

➁ As you play, the program takes in your input, runs it throught a ton of == operators and if/else if statements to determine whice pointer to assign it to,
the pointer goes back into a function to print a coordinating .txt ascii art file, and gives you a score while keeping track on animal type and building a
temporary database for not-found animals. 

    This program contains almost every animal known to the 
    internet, and was compiled from wikipedia animal lists.
    It contains many exotic animals and scientific names.  
------------------------------------
   Example of the database a cow:  
-------------------------------------
    
    ((animal == "cow") || (animal == "COW") || (animal == "cOW") || (animal == "coW") || (animal == "cOw") || 
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

➂ At the end it has little animations that tell you how you did, and the diagnostic on your entries. The original version on Windows was in an endless While Loop
that could only be stopped with CTRL -Z and then would end the game. The Mac version is a limit of 15 animals in a set for loop. 

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------

➩ NOTE : In this (unfortunately sloppy) version, I was practicing the use of functions and pointers and learning how to use sleep, /b, flush, and other techniques to make animations in Windows on my Dell computer. I sent it over to my mac, and the operations of <windows.h> no longer ran, and I commented
out and changed it around. I still have both versions, one for  MAC and one for ⊞ Windows.  I use a ton of or operators instead of arrays, and the code will not accept any input. It only accepts clean input in lowercase without space. 


➩ NOTE : This is unfortunately a unfisnished version of its cross over to mac, and I will have to pull out my old Dell Toshiba 2014 computer to get the 
original, but better working version on here for Windows. However, it is still a beautiful collection of ascii art- all a maximum of 11 lines, and it 
prints evenly and beautifully in a terminal. 

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
