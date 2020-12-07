ENGINE UPDATES

- As of 12/6/2020, It Has been updated to the latest version 1.0.1, Get it from the new github repository. Here are some of the Updates.

  - Fixed Syntax

  - Added In-IDE Documents.

    ![image-20201206180747654](C:\Users\seymo\AppData\Roaming\Typora\typora-user-images\image-20201206180747654.png)

  - Fixed Some Grammar Issues

  - Added More Functions

    ![image-20201206181243674](C:\Users\seymo\AppData\Roaming\Typora\typora-user-images\image-20201206181243674.png)

  - Fixed Problems With Ball dropping.

  - Added Options to disable Before-Drop hesitation. (Delay)

  - Added Cached Valuing

    ![image-20201206183746216](C:\Users\seymo\AppData\Roaming\Typora\typora-user-images\image-20201206183746216.png)



# THIS ENGINE IS SUPPOSED TO BE USED WITH VISUAL STUDIO 2019 FOR RECOMPILING.



# Physics Engine Built With no 3D.

Physics is a Great thing. It defines most of the world's functionality, And there's one major issue. Its only 3D. 

But what if I wanted to Alter the physics dimension in 2D? What if, With no 2D At all.



# The Basics

This Project is a simple physics engine which defines the mass of a Ball, And a cube. Each with their own customizable masses.

While you are setting up, keep in mind that everything here is subject to change. By change I Mean change A LOT.

## Basics 1.1

What is a "Physic Engine" you may be asking, its a simulation that basically gives the feeling of gravitational force taking place. Take Blender for example. Blender is a 3D Animation Software that uses Physics For Some parts Using rigid bodies.

Now, 3D Engines are pretty cool, Now you're probably saying, what makes this project so cool? Now let me answer that for you right now. Its the fact that Somebody could take something so Complicated Like Physics, And turn it into 300 Lines of coding.

Unlike any other console-Based App, This one is User Defined, Meaning it will not work, unless you make it.

## Functions 1.0

Functions are a key to making a good simulation. If you have functions, you have a game.

Functions Work As so, You say this, define that, it'll do this.

Text Physics Works Similar. You say this, Define that, make this. Everything Happens in a virtual Environment with Session Values, And Path Variables.

Some Functions are `NewInstance()`, `PrintCurrentStorageIdentifierLENGTH();`, etc.

The `phys` Library contains All of the Physics functionalities of the Current Session. You can add multiple instances and use them by doing;

```c++
#include "Engine.h"

using namespace std;

int main()
{
	Ball t;
	t.NewInstance("ballstat", 3); // Add New Instance of 3 to ball stats Holder.
	t.NewInstance("ballstat", 1); // New Instance Of 1 Added to BallStats.
	t.PrintCurrentStorageIdentifierLENGTH(); // Print Length
	t.CurrentChildrenStored();
	return 0;
}
```

This Code will Generate the following.

![image-20201206184408807](C:\Users\seymo\AppData\Roaming\Typora\typora-user-images\image-20201206184408807.png)

These are all of the Values In the current Session.

```C++
t.PrintCurrentStorageIdentifierLENGTH(); // Print Length
	t.CurrentChildrenStored();
```

These are the two Main Functions of the Program.

Basically it gets the Current Length (4) And Then; Prints all the variables in the storage.

## How does it work?

Well, all variables are stored in what is called a cache.

And with the new update, You can store different variables to the Cache or, **Temporary Storage**, And use them later on.

To reach out to the Cache, Do the following

![image-20201206184905378](C:\Users\seymo\AppData\Roaming\Typora\typora-user-images\image-20201206184905378.png)

That is very easy. What it does is contact the Ball Statistic Cache, And allows you to add it using the functions shown above.

## Functions 1.5

Now, Some other functions like `t.flang()`, `t.GetMassRegOrientation`, And `GetCurrentChildrenStored()` all use the cache in some way, whether its to communcate, add data, read data, store data, anything else, they still work together.

### GetMassRegOrientation

The GMRO Function Gets the First Numerator of the Cache `BallStats`. 

The First number is an example of the Default Mass, Which is 10. You can add more Variables to the cache and assign them to the DMass which is crucial for good Simulations.

### Flang()

The Flang Function Simulates a Drop Between the amount of ticks in a given world, and the amount of mass the object possesses.

Every Object contains a flang() function for Simulations since it is the main part of building them.

### GetCurrentChildrenStored()

The Function, GetCurrentChildrenStored, For beginners stands for GCCS. The concept is very simple.

- Reach out to the current Cache
- Ask For Stored Variables
- Bring *back* stored variables
- Print them for user sight.

GCCS Is useful when creating Debugging diagnostics for your simulation.

## Functions 1.6 - 1.8

There is one simple function which you probably put to get to this point, the `help()` Function. 

There really isn't much explaining to do, if you need **help**, Use the `help()` Function.

# Final

For More engine use, Contact me on discord.



