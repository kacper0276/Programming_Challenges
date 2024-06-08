public class LargestTwo
{
    public static int[] TwoOldestAges(int[] ages) => ages.OrderBy(x => x).TakeLast(2).ToArray();

    static void Main()
    {
        int[] res = TwoOldestAges([1, 2]);

        Console.WriteLine("{0} {1}", res[0], res[1]);
    }
}