import java.lang.StringBuilder;
import java.util.Scanner;
public class abc {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("请输入字符串:");
        String s = input.next();
        System.out.println(MAX(s));
    }

    public static int MAX(String s) {
        int str[] = new int [9999];//临时数组，用于标记字符是否重复,0为未重复，1为重复   数组默认值0
        int i=0,j=0,max=0;
        while (i<s.length()&&j<s.length()){
            if(str[s.charAt(j)]==0){
                str[s.charAt(j)]=1;   //标记改变
                j++;
                if(j-i>max) max=j-i;
            }else{
                str[s.charAt(i)]=0;   //重置标记,改前面重复的标记
                i++;    //从i位置为起始位置重新开始查找后续
            }
        }
        return max;
    }
}
