import java.util.Scanner;
import java.util.concurrent.ThreadLocalRandom;

public class RPS_Game {

    static int min=1;
    static int max=3;
    static int comChoice;
    static int myChoice;
    static int myScore;
    static int comScore;

    static void choice(){
        comChoice = ThreadLocalRandom.current().nextInt(min, max + 1);

        Scanner sc = new Scanner(System.in);
            System.out.print("\n1-> Rock \n2-> Paper \n3-> Scissors \nEnter your choice: ");
            myChoice= sc.nextInt();
        
    }

    static void result(){
        if(comChoice==1 && myChoice==2){
            myScore++;
            System.out.print("You->Paper ");
            System.out.println("Computer->Rock");
            System.out.println("You win this round!");
        }
        else if(comChoice==1 && myChoice==3){
            comScore++;
            System.out.print("You->Scissors ");
            System.out.println("Computer->Rock");
            System.out.println("Computer win this round!");
        }
        else if(comChoice==2 && myChoice==1){
            comScore++;
            System.out.print("You->Rock ");
            System.out.println("Computer->Paper");
            System.out.println("Computer win this round!");
        }
        else if(comChoice==2 && myChoice==3){
            myScore++;
            System.out.print("You->Scissors ");
            System.out.println("Computer->Paper");
            System.out.println("You win this round!");
        }
        else if(comChoice==3 && myChoice==1){
            myScore++;
            System.out.print("You->Rock ");
            System.out.println("Computer->Scissors");
            System.out.println("You win this round!");
        }
        else(comChoice==3 && myChoice==2){
            comScore++;
            System.out.print("You->Paper ");
            System.out.println("Computer->Scissors");
            System.out.println("Computer win this round!");
        }
    }

    public static void main(String[] args) {
        for(int i=0; i<5; i++){
            choice();
            System.out.flush(); 
            result();
            
            while(comChoice==myChoice){
                System.out.println("Tie");
                choice();
                System.out.flush(); 
                result();
            }
        }

        System.out.println("Your total score->"+myScore);
        System.out.println("Computer total score->"+comScore);

        if(myScore<comScore){
            System.out.println("Game over!\nBetter luck next time!");
        }
        else{
            System.out.println("Congratulations you win this Game!");
        }
    }  
}