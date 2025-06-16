namespace Class___Object
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Player  myObj = new Player();   // Create an Object called myObj
            Player myObj2 = new Player();
            Console.WriteLine(myObj.GetHashCode() + " " + myObj2.GetHashCode());

            myObj.name = "First Object";
            Console.WriteLine(myObj.name);
            Console.WriteLine(myObj2.name);

            myObj.sayHello("Arigato");  // Access Function from class
        }
    }

    class Player
    {
        public string name = "Random";

        public void sayHello(string pName)
        {
            Console.WriteLine("Creating player " + pName);
        }
    }
}
