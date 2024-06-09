public class RentalCar
{

    public static int RentalCarCost(int d)
    {
        int cost = d * 40;

        switch(d)
        {
            case >= 7:
                cost -= 50;
                break;
            case >= 3:
                cost -= 20;
                break;
            default:
                break;
        }

        return cost;
    }

    static void Main(String[] args)
    {
        Console.WriteLine(RentalCarCost(1));
        Console.WriteLine(RentalCarCost(3));
        Console.WriteLine(RentalCarCost(7));
    }
}