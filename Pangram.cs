using System;
using System.Linq;

class Program
{
    static void Main(string[] args)
    {
        string input = Console.ReadLine();

        int[] letterCount = new int[26];

        foreach (char c in input)
        {
            letterCount[c - 'a']++;
        }

        bool isPangram = letterCount.Count(count => count > 0) == 26;

        if (!isPangram)
        {
            Console.WriteLine("NIE");
            return;
        }

        int firstNonZeroCount = letterCount.First(count => count > 0);

        bool isPerfectPangram = letterCount.Where(count => count > 0).All(count => count == firstNonZeroCount);

        if (isPerfectPangram)
        {
            Console.WriteLine("PANGRAM PERFEKCYJNY");
        }
        else
        {
            Console.WriteLine("PANGRAM");
        }
    }
}
