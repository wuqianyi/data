import java.util.Scanner;                                                                            0000644 0       0       2404        13452670745 13000   0                                                                                                    ustar 00nobody                          nobody                                                                                                                                                                                                                 package abc;
public class serach 
{
    public static void main( String[] args )
    {
    	java.util.Scanner input = new java.util.Scanner(System.in);
        int[] a = new int[16];
        System.out.print("请依次输入硬币的质量：");
        for(int i=0;i<16;i++) {
        	a[i]=input.nextInt();
        }
        
        System.out.println(SearchPosition(a,0,15));

    }


    public static int SearchPosition(int[] arry,int left,int right){

    	int position = -1;
    	int middle=(left+right-1)/2;
    	System.out.println("middle="+middle);
    	int sumleft=0;
    	int sumright=0;
    	
    	
   if(left+1!=right){	
    	for(int i=left;i<=middle;i++){
    		sumleft+=arry[i];
    		
    	}
    	System.out.println("sumleft="+sumleft);
    	for(int j=middle+1;j<=right;j++){
    		sumright+=arry[j];
    		
    	}
    	System.out.println("sumright="+sumright);
    	if(sumleft==sumright) {
    		return position; 
    	}     //不存在伪币 
    	else {
    		position=((sumleft<sumright)?SearchPosition(arry,left,middle):SearchPosition(arry,middle+1,right));
    }
            }else {
            	//只剩两个相邻硬币
                    position =  (arry[left]<arry[right])?left:right;
            }
    	return position;

}
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            