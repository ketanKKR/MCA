import java.util.Scanner;
import java.util.concurrent.ThreadLocalRandom;

public class RPS_Game {

    static int min = 1;
    static int max = 3;
    static int comChoice;
    static int myChoice;
    static int myScore;
    static int comScore;

    static Scanner sc = new Scanner(System.in);

    static void chooseMove() {
        System.out.print("\n1-> Rock\n2-> Paper\n3-> Scissors\nEnter your choice: ");
        myChoice = getUserChoice();
        comChoice = ThreadLocalRandom.current().nextInt(min, max + 1);
    }

    static int getUserChoice() {
        int choice;
        while (true) {
            if (sc.hasNextInt()) {
                choice = sc.nextInt();
                if (choice >= 1 && choice <= 3) {
                    break;
                } else {
                    System.out.println("Invalid choice. Enter 1, 2, or 3.");
                }
            } else {
                sc.next(); // Consume invalid input
                System.out.println("Invalid choice. Enter 1, 2, or 3.");
            }
        }
        return choice;
    }

    static void displayRoundResult() {
        System.out.print("You -> " + getMoveName(myChoice) + " ");
        System.out.println("Computer -> " + getMoveName(comChoice));

        if (myChoice == comChoice) {
            System.out.println("It's a tie!");
        } else if ((myChoice == 1 && comChoice == 3) || (myChoice == 2 && comChoice == 1) || (myChoice == 3 && comChoice == 2)) {
            myScore++;
            System.out.println("You win this round!");
        } else {
            comScore++;
            System.out.println("Computer wins this round!");
        }
    }

    static String getMoveName(int move) {
        switch (move) {
            case 1:
                return "Rock";
            case 2:
                return "Paper";
            case 3:
                return "Scissors";
            default:
                return "Invalid";
        }
    }

    public static void main(String[] args) {
        for (int i = 0; i < 5; i++) {
            chooseMove();
            displayRoundResult();
        }

        System.out.println("Your total score -> " + myScore);
        System.out.println("Computer total score -> " + comScore);

        if (myScore < comScore) {
            System.out.println("Game over!\nBetter luck next time!");
        } else {
            System.out.println("Congratulations! You win this game!");
        }
    }
}
