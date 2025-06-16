namespace Loops
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //whileLoop();
            //doWhile();
            //differenceBetDoAndWhile();
            //forLoop();
            //example();
            forEachLoop();
        }

        static void whileLoop()
        {
            int i = 0;  // Initialization
            while (i < 3)   // Condition
            {
                Console.WriteLine("While Loop " + i);
                i++;    // Incrementation or Decremation
            }
        }

        static void doWhile()
        {
            int i = 0;  // Initialization
            do
            {
                Console.WriteLine("Do while loop " + i);
                i++;    // Incrementation or Decremation
            }
            while (i < 5);  // Condition
        }
        static void differenceBetDoAndWhile()
        {
            int i = 5;
            while (i < 3)
            {
                Console.WriteLine(i);   // Cann't shows the value. Because in initial i = 5 and in condition i < 5. So the condition it not true. Thast why it shows nothing
                i++;
            }

            do
            {
                Console.WriteLine(i);   // Shows the value. Because first it will print the vlaue then it will check the contion.
                i++;
            }
            while(i < 5);
        }

        static void forLoop()
        {
            for (int i = 0; i < 6; i++) // Initialization ; Condition; Incrementation or Decremation
            {
                Console.WriteLine("For Loop " + i);
            }
        }

        static void example()
        {
            List<string> cars = new List<string>() { "Volvo", "Bmw", "Ford", "Marcediz" };

            for(int i = 0; i < cars.Count; i++)
            {
                Console.WriteLine(cars[i]);
            }
        }

        static void forEachLoop()
        {
            List<string> teamName = new List<string>() { "Real Madrid", "Barcelona", "Liverpool", "Bayern" };

            foreach (string i in teamName)   // DataType variableName in arrayName
            {
                Console.WriteLine(i);
            }
        }

    }
}
