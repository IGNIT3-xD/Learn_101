using System.Runtime.CompilerServices;

namespace Array___List
{
    internal class Program
    {
        static void Main(string[] args)
        {
            array();
            list();
        }

        static void array()
        {
            int[] numArray = new int[] { 1, 2, 3 };
            Console.WriteLine(numArray[0]);
            Console.WriteLine(numArray[1]);
            Console.WriteLine(numArray[2]);

            Console.WriteLine("Length of the array : " + numArray.Length);

            //Add or Change value in array
            numArray[1] = 5;
            numArray[2] = 10;
            Console.WriteLine("After change the value");
            Console.WriteLine(numArray[1]);
            Console.WriteLine(numArray[2]);
        }

        static void list()
        { 
            List<int> number = new List<int>() {100, 200, 300, 400};
            Console.WriteLine(number[0]);
            Console.WriteLine(number[1]);

            Console.WriteLine("Lenght of the list : " + number.Count);

            // Add or Change the value
            number.Add(500);
            Console.WriteLine(number.Count);
            Console.WriteLine(number[4]);

            number[0] = 99;
            Console.WriteLine(number[0]);

            bool findElement = number.Contains(100);
            Console.WriteLine(findElement);
            
            Console.WriteLine(number.IndexOf(400));
        }
    }
}
