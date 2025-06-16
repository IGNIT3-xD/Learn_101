namespace Function;

class Program
{
    static void Main(string[] args)
    {
        SayHello();
        PlayerInfo("Ignit3", 77);
        Console.WriteLine(Sum(10, 5));
        Console.WriteLine(IsEven(41));
    }

    static void SayHello()
    {
        Console.WriteLine("Hello world!");
    }

    static void PlayerInfo(string name, int health)
    {
        Console.WriteLine($"Player : {name}\nHealth : {health}");
    }

    static int Sum(int x, int y)
    {
        return x + y;
    }

    static bool IsEven(int num)
    {
        if(num %2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    } 
}
