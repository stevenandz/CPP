![Overengineered by Design](https://img.shields.io/badge/Overengineered-💡%20by%20Design-brightgreen)

# Madlibs: Overengineered, Brain Melt Edition

## Preface
This is one of first projects that I made without any guidance!
It is a simple project that uses file streams to validate input.
While it does work for error handling (a word has to match a word in the file),
I found that simply adding nouns and all the like into a single document
will take ages...and is counter intuitive. Nonethlesss, I am very proud
of this project.

## How It Works
1. Enter a singular noun
2. Enter a plural noun
3. Enter a present tense verb

## Details
This project began with an urge to get better with file handling.
At that time, I had just learned about pointers, and I decided,
"Why not?" Then, the craziness began. After a few hours of 
experimenting, I managed to create my first program that uses
pointers! Along with that, I used a template class, for absolutely 
no reason. All for a Madlibs project. Yup.

## Running it
This is compiled through a G++ compiler.
1. g++ -o main main.cpp
2. ./main

## Output
Computers are small enough to fit into a Sietch Tabr.
Computers can add, multiply, divide, and swim.
People can swim too but computers do it better.
Computers have many dogs which gives them the advantage
over many computational tasks.
   
## Improvements
Seeing how there are many words out there for grammer that are
too big for a file, I pondered for a better solution. This is
outside my skill set (for now), but I hope to incorporate 
a dynamic AI agent that functions in the background.
It will function something like this...
1. Enter a word
2. AI agent will validate the word by putting it into a sentence.
   For example, if the user is prompted for a noun, once entered,
   the AI will put it inside a noun specific sentence!
