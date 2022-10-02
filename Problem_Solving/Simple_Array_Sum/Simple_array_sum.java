import java.util.*;

public class Solution
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        int sum = 0;
        for(int i = 0 ; i<n ; i++)
        {
            a[i] = in.nextInt();
            sum+=a[i];
        }
        System.out.println(sum);
    }
}
