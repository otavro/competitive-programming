import java.io.IOException;
import java.util.Scanner;

public class beecrowd_3303 {
    public static void main(String[] args) throws IOException {
 
        Scanner in = new Scanner(System.in);
        String ans = in.nextLine();

        if(ans.length() >= 10)
            System.out.println("palavrao");
        else
            System.out.println("palavrinha");
 
    }
 
}
