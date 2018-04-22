import java.util.Scanner;
public class greatest {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int a,b,c;
        System.out.println("Enter the nos");
        a=in.nextInt();
        b=in.nextInt();
        c=in.nextInt();
        if (a > b){
            if (a > c) {
                System.out.println("Greatest is "+a);
            }
            else {
                System.out.println("Greatest is "+c);
            }
        }
        else {
            if (b > c) {
                System.out.println("Greatest is "+b);
            }
            else {
                System.out.println("Greatest is "+c);
            }
        }
    }
}
