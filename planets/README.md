# Planets: A Polymorphic View

## Preface
I really like this project becuse it is one where I dreamed about doing. I 
had just learned about polymorphism, and thus, seeing how it was really cool, 
I decided to try my hand at it! Here, this project comes in two parts

1. The input file
2. The reading file
   
The reason being was to create a kind of system that allows user to input planets
and to find the weight of that respective planet. Really cool, I think.

## How it works
1. Enter eight planets
2. Enter weight to find your weight in that planets

## Details
Continuing my journey into pointers, I wanted to deeply understand polymorphism and 
templates, and that is why I chose to have one basic Planet class and the rest to derive 
from that. Sure, it probably is overkill, but curiosity knows no bounds!

## Running it
This is compiled using g++
1. g++ -o input input.cpp

   ./input

2. g++ -o main main.cpp

   ./main

## Output
Enter a planet to find your weight: jupiter 

Enter weight in pounds: 170

The surface gravity of Jupiter is: 24.79

Your weight on Jupiter is: 430.03

## Improvments
With there being predetermined classes, I found that it doesn't really allow for 
user freedom, which is why, as an improvment, there could perhaps be one child class
that is made by user input. For example, the surface area of planet could be entered
as well as the planet itself as in the input file.





