using System;
using System.IO;

namespace TestConsoleApp
{
    enum Level{
        Low,
        Medium,
        High
    }
    class Program
    {
        static void Main(string[] args)
        {
            Level lvl=Level.Medium;
            Console.WriteLine((int)lvl);
        }
    }
}
