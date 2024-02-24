import java.util.Scanner;

public class AreaOfCircle{
    public static void main(String[] args){
        float pi=3.14f,r,area;

        try(Scanner sc = new Scanner(System.in)){
            System.out.print("Enter Redius of Circle: ");
            r = sc.nextInt();
        }

        area = pi*r*r;

        System.out.println("Area of Circle is:" +area);
    }
}