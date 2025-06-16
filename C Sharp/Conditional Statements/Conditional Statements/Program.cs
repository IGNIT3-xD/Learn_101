// If Else
int userAge;
Console.Write("Enyer your age : ");
userAge = Convert.ToInt32(Console.ReadLine());

if (userAge >= 18)
{
    Console.WriteLine("Eligible for vote");
}
else if (userAge <= 18 && userAge >= 0)
{
    Console.WriteLine("Your are not eligible for vote");
}
else
{
    Console.WriteLine("Invalid age");
}

bool isPlayer = true;
//bool isPlayer = Convert.ToBoolean(Console.ReadLine());

if(isPlayer)
{
    Console.WriteLine("Inside if");
}
else
{
    Console.WriteLine("Outside if / Else");
}

// Switch
string name = Console.ReadLine();
switch (name)
{
	case "Jonas":
		Console.WriteLine(name + " Welcome Mr. Dark");
		break;
	case "Levi":
		Console.WriteLine(name + " Welcome Scout Regiment");
		break;
	default:
		Console.WriteLine(name + " Welcome Sir");
		break;
}