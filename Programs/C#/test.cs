using system

namespace Test{

    enum level{
        Low,
        Medium,
        High
    }

    class Program{

        stattic void main(string args[])
        {
            level myLev=level.Low;
            Console.WriteLine(myLev);
        }
    }
}