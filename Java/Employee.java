import java.util.Scanner;

public class Employee{
    static byte emp_no;
    static String emp_name;
    static double basic_salary;
    static double net_salary;
    static double gross_salary;
    static double HRA;
    static double DA;
    static double total_allowance;

    static void allowance(){
        HRA = basic_salary * 0.12;
        DA = basic_salary * 0.80;
        total_allowance = HRA+DA;
    }

    static void process(){
        gross_salary = basic_salary + (basic_salary * 0.12) + (basic_salary * 0.80);
        net_salary = gross_salary - (gross_salary * 0.10);
    }

    static void display(){
        System.out.println("Emp_no      Emp_Name        Basic_Salary        Net_Salary      HRA        DA      Total_Allowance(HRA+DA)");
        System.out.println("-------------------------------------------------------------------------------------------------------");
        System.out.println("  "+emp_no+"            "+emp_name+"           "+basic_salary+"            "+net_salary+"      "+HRA+"     "+DA+"          "+total_allowance);
    }

    public static void main (String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Emp_id: ");
        emp_no = sc.nextByte();
        sc.nextLine();

        System.out.print("Enter Employee Name: ");
        emp_name = sc.nextLine();

        System.out.print("Enter Basic Salary: ");
        basic_salary = sc.nextDouble();

        process();

        System.out.println("\nNet Salary: "+net_salary);

        allowance();
        display();
    }
}