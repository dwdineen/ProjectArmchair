# Project Armchair

## Visual Studio Setup

1. Install git. Ensure that if you open powershell and type "git" something happens. 
   If not, install again and make sure that you and add git to path.
2. Install Visual Studio 2019. You may already have 2015 or 2017 but it will be easiest if we
   are all on the same version.
3. Find a place with you want Project Armchair to live. Clone this repo by doing
   
   `git clone https://github.com/dwdineen/ProjectArmchair.git`.
4. Open up Visual Studio.
5. Click "Open a local folder" and navigate to ProjectArmchair folder.
6. Try pressing the green run button at the top, if it does not work, click on
   CMakeLists.txt on the side and click the green button again. It should run
   and produce a simple text output.

### Setup SFML with Visual Studio 19

1. Download Visual C++ 15 (2017) 64 bit from https://www.sfml-dev.org/download/sfml/2.5.1/.
2. Right click on zip file and click extract all.
3. Create an ext folder in Project Armchair root directory.
4. Copy SFML-2.5.1-windows-vc15-64-bit folder into the ext folder.

## Naming conventions

Using Google's C++ style guide with small modifications.

### Class names

Camel case, starting with capital: class MyClassThing;

### Function names

Camel case, starting with capital: void MyFunction();

### Normal variables

Snake, starting with lowercase: int my\_integer;

### Class member variables

Snake, starting with lowercase, ending with underscore: int my\_member\_integer\_;

### File Names

Snake, starting with lowercase: my\_class\_thing.h
