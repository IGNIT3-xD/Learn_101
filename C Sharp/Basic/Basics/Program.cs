Console.WriteLine("Hello, World!");

// You can also output numbers and perform mathmatical calculations
Console.WriteLine(5 + 5);

// Write() method doesn't start a new line
Console.Write("This is C sharp ");
Console.WriteLine("This is in another line");


// Variables and Data type
int num = 7;
Console.WriteLine("This is integar no: " + num);

float num2 = 7.5f;
Console.WriteLine("This is float no: " + num2);

double num3 = 100.709D;
Console.WriteLine("This is double no: " + num3);

char ch =  'I';
Console.WriteLine("Character is : " + ch);

string text = "This is CS";
Console.WriteLine(text);

bool isCoding = true;
Console.WriteLine(isCoding);

string name = "Steve";
int age = 23;
Console.WriteLine("My name is " + name + " and I'm " +  age + " years old");
Console.WriteLine($"My name is {name} and I'm {age} years old");

Console.WriteLine("Numbers " + 5 + 6);
Console.WriteLine(5 + 6 + " Numbers");

// Type Casting
int health = 7;
int maxHealth = 100;
Console.WriteLine(health / maxHealth);
Console.WriteLine((float) health / maxHealth);

// User Input
Console.Write("Enter your name : ");
string userName = Console.ReadLine();
Console.WriteLine("Name is : " + userName);

Console.Write("Enter your age : ");
int UserAge = Convert.ToInt32(Console.ReadLine());   //Console.ReadLine() method returns a string. So, you need to type casting it for other data types
Console.WriteLine("Age is : " + UserAge);