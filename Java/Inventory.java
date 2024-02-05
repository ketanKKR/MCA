import java.util.Scanner;

public class Inventory{
    static byte[] id = new byte[100];
    static String[] name = new String[100];
    static float[] price = new float[100];
    static float[] total = new float[100];
    static byte i=0;

    static void input(){
        Scanner sc = new Scanner(System.in);
        i++;
        System.out.println(i);
        id[i] = i;
        System.out.print("Enter Name: ");
        name[i] = sc.nextLine();
        System.out.print("Enter Price: ");
        price[i] = sc.nextFloat();
    }

    static void display(){
        System.out.println("\nId              Name                Price");
        System.out.println("-----------------------------------------");

        for(int j=1; j<=i; j++){
            System.out.println(id[j]+"             "+name[j]+"                "+price[j]);
        }
    }

    static void search(){
        if(i==0){
            System.out.println("\nRecord is Empty!");
        }
        else{
            byte search;
            boolean found = false;

            System.out.print("\nEnter Id to Search: ");
            Scanner sc = new Scanner(System.in);
            search = sc.nextByte();

            for(int j=1; j<=i; j++){
                if(search==j){
                    found = true;
                    System.out.println("\nId              Name                Price");
                    System.out.println("-----------------------------------------");
                    System.out.println(id[search]+"             "+name[search]+"                "+price[search]);
                }
                else if(found==false){
                    System.out.println("\nThere is no record for following ID!");
                }
            }
        }
    }

    public static void main(String[] args){
        boolean exit = false;
        do{
            byte choice;
            System.out.println("\nPress 1 for Insert Data.");
            System.out.println("Press 2 for display Data.");
            System.out.println("Press 3 for search Record.");
            System.out.println("Press 4 for Exit.");
            System.out.print("\nEnter Your Option: ");

             Scanner sc = new Scanner(System.in);
            choice = sc.nextByte();

            switch(choice){
                case 1:
                    input();
                    break;
                case 2:
                    display();
                    break;
                case 3:
                    search();
                    break;
                case 4:
                    exit = true;
                    break;
                default:
                    System.out.println("Please Enter a valid Option");
            }
        }while(exit != true);
    }
}