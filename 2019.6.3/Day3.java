package everyday_test;

import java.util.Scanner;

public class Day3 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int temp1 = 0;
        int temp2 = 0;
        while (scanner.hasNext()){
            temp1 = scanner.nextInt();
            temp2 = scanner.nextInt();
        }
        if(temp1%temp2==0) {
            System.out.println(temp1);
        }
        int out = getMaxMult(temp1,temp2);//求出最大公因数(辗转相除法)
        System.out.println(out);
    }
    public static int getMaxMult(int a,int b){//求出最大公因数
        int m = a%b;
        while (m!=0){
            a = b;
            b = m;
            m = a%b;
        }
        return b;
    }
}
