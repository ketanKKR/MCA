public class minNum{
    public static void main(String[] args){
        int num[] = new int[3];
        num[0]=100;
        num[1]=300;
        num[2]=33;
        int i=0;

        for(i=0; i<3; i++){
            if(num[0]>num[i]){
            num[0]=num[i];
            }
        }

        System.out.println("Minimum Number is "+num[0]);
    }
}