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

    For example all fish, reptiles, frogs, and birds
    will print out as a generic model of their type.
    

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

➁ As you play, the program takes in your input, runs it throught
 a ton of == operators and if/else if statements to determine which pointer to assign it to,
the pointer goes back into a function to print a coordinating .txt ascii art file,
 and gives you a score while keeping track on animal type and building a
temporary database for not-found animals. 
  
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
    (animal == "beef") || (animal == "freemartin") || (animal == "dogie") || (animal == "maverick"))
    

➂ At the end it has little animations that tell you how you did, and the diagnostic on your entries. The original version on Windows was in an endless While Loop
that could only be stopped with CTRL -Z and then would end the game. The Mac version is a limit of 15 animals in a set for loop. 

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------

➩ NOTE :  Animations run on sleep, /b, flush in Windows using the library<windows.h>. 
The Mac version uses usleep, and other libraries to accomplish this. 
There are two versions of this program, one for  MAC and one for ⊞ Windows. 


------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
