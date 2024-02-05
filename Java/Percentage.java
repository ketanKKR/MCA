import java.util.Scanner;

public class Percentage {
	public static void main(String[] args) {
		int sub[]= new int[5];
		int i,total=0,k=1;
		float per;
		
		try (Scanner sc = new Scanner(System.in)) {
			for(i=0; i<5; i++, k++){
				System.out.print("Eneter Marks of Subject"+k);
				System.out.print(": ");
				sub[i] = sc.nextInt();
				total += sub[i];
			}
		}
		
		//total=sub[0]+sub[1]+sub[2]+sub[3]+sub[4];
		System.out.println("\nTotal= " +total);
		per=total/5;
		System.out.println("\nPercentage= " +per);
		System.out.println("");

		if(per>=90){
			System.out.println("Grade: A+");
		}
		else if(per>=85){
			System.out.println("Grade: A");
		}
		else if(per>=80){
			System.out.println("Grade: A-");
		}
		else if(per>=75){
			System.out.println("Grade: B+");
		}
		else if(per>=70){
			System.out.println("Grade: B");
		}
		else if(per>=65){
			System.out.println("Grade: C+");
		}
		else if(per>=60){
			System.out.println("Grade: C");
		}
		else if(per>=55){
			System.out.println("Grade: D+");
		}
		else if(per>=50){
			System.out.println("Grade: D");
		}
		else if(per>=40){
			System.out.println("Grade: E");
		}
		else if(per>=0){
			System.out.println("Grade: F");
		}
	}
}