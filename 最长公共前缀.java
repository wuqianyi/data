import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("请输入数组个数：");
        int N = Integer.parseInt(input.nextLine());
        String A[] = new String[N];
        for (int i = 0; i < A.length; i++) {
            A[i] = input.nextLine();
        }
        System.out.println(Common(A));
    }
    public static String Common(String A[]) {
        String s = "";
        if (A.length == 0) return s;
        for (int i = 0; i < A[0].length(); i++) {
            char ch1 = A[0].charAt(i);   //选择第一个数组元素，依次取这个字符串的字符，然后与后面字符对应位置依次比较
            for (int j = 1; j < A.length; j++) {
                char ch2 = A[j].charAt(i);
                if (i >= A[j].length()) {//                    防止溢出
                    break;
                }
                if (ch1 != ch2) {  //                只要存在一个不匹配，直接退出
                    break;
                } else {
                    if (j == A.length - 1) {  //当所有字符比较完全部相等才给s赋值
                        s = s + ch1;
//                        System.out.println(s);

                    }
                }
            }
        }
        return s;
    }
}










