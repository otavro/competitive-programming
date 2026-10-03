import java.io.IOException;
import java.util.Scanner;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class beecrowd_3493 {
 
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);

        int a, b;

        a = input.nextInt();
        b = input.nextInt();

        if(a < b){
            System.out.println("ok");
        }
        else{
            System.out.println("no");
        }
 
    }
 
}