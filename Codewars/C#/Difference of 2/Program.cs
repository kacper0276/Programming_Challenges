using System;
using System.Linq;
using System.Collections.Generic;

public class Kata
{
    public static (int, int)[] TwosDifference(int[] array)
    {
        Array.Sort(array);

        var result = new List<(int, int)>();

        foreach (var number in array)
        {
            if (Array.IndexOf(array, number + 2) != -1)
            {
                result.Add((number, number + 2));
            }
        }

        return result.ToArray();
    }

    public static void Main()
    {
        var res = TwosDifference([15, 5, 3, 2]);

        foreach (var number in res)
        {
            Console.WriteLine(number);
        }
    }
}