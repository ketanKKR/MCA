class Odd extends Thread{
    public void run(){
        try{
            for(int i=1; i<100; i+=2){
                System.out.println("Odd: "+i);
                Thread.sleep(1000);
            }
        }
        catch(InterruptedException e){
            System.out.println("Odd Exception: "+e);
        }
    }
}

class Even extends Thread{
    public void run(){
        try{
            for(int j=2; j<=101; j+=2){
                System.out.println("Even: "+j);
                Thread.sleep(1010);
            }
        }
        catch(InterruptedException e){
            System.out.println("Even Exception: "+e);
        }
    }
}

class Alpha extends Thread{
    public void run(){
        try{
            for(int z=65; z<91; z++){
                char c = (char) z;
                System.out.println("Alpha: "+c);
                System.out.println("");
                Thread.sleep(1020);
            }
        }
        catch(InterruptedException ea){
            System.out.println("Alpha Exception: "+ea);
        }
    }
}

public class oe_alpha{
    public static void main(String[] args){
        Odd ot = new Odd();
        Even et = new Even();
        Alpha at = new Alpha();
        
        ot.start();
        et.start();
        at.start();
    }
}