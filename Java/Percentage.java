import java.util.Scanner;

public class Percentage {
	public static void main(String[] args) {
		int sub[]= new int[5];
		int i,total,k=1;
		float per;
		
		try (Scanner sc = new Scanner(System.in)) {
			for(i=0; i<5; i++, k++){
				System.out.print("Eneter Marks of Subject"+k);
				System.out.print(": ");
				sub[i] = sc.nextInt();
			}
		}
		
		total=sub[0]+sub[1]+sub[2]+sub[3]+sub[4];
		per=total/5;
		System.out.print("\nPercentage=" +per);
	}
}