public class Piramid{
    public static void main(String[] args){
        int i=0;

        for(i=0; i<=5; i++){
            for(int k=0; k<i; k++){
                try{
                    Thread.sleep(300);
                }
                catch(InterruptedException a){
                    System.out.println("A Exception: "+a);
                }
                 System.out.print("*");
            }
           
            System.out.println("");
        }
        
    }
}