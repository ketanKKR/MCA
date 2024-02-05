class oneTo100 extends Thread{
    public void run(){
        for(int i = 1; i<=100; i++){
            try{
                System.out.println("Sequance1: "+i);
                Thread.sleep(50);
            }
            catch(InterruptedException e){
                System.out.println(e);
            }
        }
    }
}

class Sequanc extends Thread{
    public void run(){
        for(int i=1; i<=100; i++){
            try{
                System.out.println("Sequance2: "+i*i);
                Thread.sleep(50);
            }
            catch(InterruptedException e){
                System.out.println(e);
            }
        }
    }
}

public class Sequance{
    public static void main(String[] args){
        oneTo100 at = new oneTo100();
        Sequanc sq = new Sequanc();

        at.start();
        try{
           Thread.sleep(6200);
        }catch(InterruptedException e){};
        sq.start();
    }
}