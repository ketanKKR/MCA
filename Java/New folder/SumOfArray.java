import java.util.Scanner;

public class SumOfArray {
	public static void main(String[] args) {
		float sum[]= new float[5];
		float asw = 0.00f;
		
		try (Scanner sc = new Scanner(System.in)) {
			for(int i=0; i<5; i++){
				System.out.print("Enter Array: ");
				sum[i] = sc.nextInt();
				asw += sum[i];
			}
		}
        System.out.println("Sum Of Array Is: "+asw);
    }
}