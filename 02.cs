using System;

class TestClass
{
    static void Main(string[] args)
    {
        int x = int.Parse(args[0]);
				x = x * x * x;
				Console.WriteLine(x+"\n");
    }
}
