import java.util.Scanner;

public class mulTable {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int a;
        System.out.print("Enter number");
        a=in.nextInt();
        for(int i=0;i<=10;i++){
            System.out.println(a+"*"+i+"="+a*i);
        }
    }
}
