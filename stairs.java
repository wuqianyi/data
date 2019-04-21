package abc;
import java.util.Scanner;
public class stairs {

	/**
	 * 动态规划  核心在于确定最后一步上一节台阶还是两节台阶
	 * f(n)=f(n-1)+f(n-2)
	 */
	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		java.util.Scanner input = new java.util.Scanner(System.in);
		System.out.print("请输入楼梯数n:");
		int n = input.nextInt();
		System.out.println("爬上楼梯的方法有"+ClimbStairs(n)+"种");
	}
	
	public static int ClimbStairs(int n) {
		int []N = new int[n+1];
		N[0]=0;N[1]=1;N[2]=2;
		int i;
		if(n==1)
			return 1;
		for(i=3;i<=n;i++)
			N[i]=N[i-1]+N[i-2];
		return N[n];		
	}

}
