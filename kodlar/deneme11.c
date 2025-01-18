using System;

class Program
{
    static void Main()
    {
        
        int number = 10;
        do
        {
            Console.WriteLine(number);
            number--;
        } while (number >= 1);  
        
        
        number = 100;
        while (number > 0) 
        {
            Console.WriteLine(number);
            number--;
        }


        for (int i = 100; i >= 0; i -= 2)
        {
            Console.WriteLine(i);
        }

        Console.WriteLine("Finished!");
        Console.ReadLine();  
    }
}
