public class Test{
    public static void main(String[] args){
        int i=0;

        for(i=1; i<=5; i++){
            for(int j=5; j>i; j--){
                System.out.print(" ");
            }
            for(int k=0; k<i; k++){
                try{
                    Thread.sleep(200);
                }
                catch(InterruptedException a){
                    System.out.println("A Exception: "+a);
                }
                System.out.print("* ");
            }
            System.out.println("");
        }
        
    }
}