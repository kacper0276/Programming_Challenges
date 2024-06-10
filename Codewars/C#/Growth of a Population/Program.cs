class Arge
{
    public static int NbYear(int p0, double percent, int aug, int p)
    {
        int year;

        for (year = 0; p0 < p; year++)
        {
            p0 += (int)(p0 * percent / 100) + aug;
        }

        return year;
    }

    static void Main()
    {
        Console.WriteLine(NbYear(1500, 5, 100, 5000));
        Console.WriteLine(NbYear(1500000, 2.5, 10000, 2000000));
        Console.WriteLine(NbYear(1500000, 0.25, 1000, 2000000));
    }
}