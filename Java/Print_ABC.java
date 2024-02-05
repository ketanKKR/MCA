class print_A extends Thread{
    public void run(){
        for(int i=1; i<=20; i++){
            try{
                System.out.println("A Printed "+i + " Times");
                Thread.sleep(100);
            }
            catch(InterruptedException e){
                System.out.println("A Exception: "+e);
            }
        }
    }
}

class print_B extends Thread{
    public void run(){
        for(int i=1; i<=30; i++){
            try{
                System.out.println("B Printed "+i + " Times");
                Thread.sleep(100);
            }catch(InterruptedException e){
                System.out.println("A Exception: "+e);
            }
        }
    }
}

class print_C extends Thread{
    public void run(){
        for(int i=1; i<=15; i++){
             try{
                System.out.println("C Printed "+i + " Times");
                Thread.sleep(100);
            }catch(InterruptedException e){
                System.out.println("A Exception: "+e);
            }
        }
    }
}

public class Print_ABC{
    public static void main (String[] args){
        print_A at = new print_A();
        print_B bt = new print_B();
        print_C ct = new print_C();

        at.start();
        try{
            Thread.sleep(2100);
        }
        catch(InterruptedException a){
            System.out.println("A Exception: "+a);
        }
        bt.start();
        try{
            Thread.sleep(3300);
        }
        catch(InterruptedException b){
            System.out.println("A Exception: "+b);
        }
        ct.start();
    }
}