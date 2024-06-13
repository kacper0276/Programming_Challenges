using System;
using System.Linq;

public class Kata
{
    public static int DivCon(Object[] objArray)
    {
        int sumInt = 0, sumString = 0;

        sumInt = objArray.Where(t => t is int).Sum(t => (int)t);
        sumString = objArray.Where(t => t is string).Sum(t => Convert.ToInt32(t));

        return sumInt - sumString;
    }

    public static void Main()
    {
        DivCon(new object[] { "5", "0", 9, 3, 2, 1, "9", 6, 7 });
    }
}