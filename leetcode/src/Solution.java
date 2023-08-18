public class Solution {

    public static String reverseEachWord(String str) {
        //Your code goes here

        int space=0;

        for(int j=0;j<str.length();j++)
        {
            if(str.charAt(j)==' ')
            {
                space++;
            }
        }
        String []arr=new String[space+2];
        int spaceIndex=str.length()-1;
        int k=0;
        for(int i=spaceIndex;i>0;i--)
        {
            String g="";
            if(str.charAt(i)!=' ')
            {
                g=g+str.charAt(i);
            }
            arr[k]=g;
            k++;
            if(str.charAt(i)==' ')
            {
                spaceIndex=i-1;
                continue;
            }

        }
        String g1="";
        for(int h=0;h<arr.length-1;h++)
        {
            g1=g1+arr[h]+' ';
        }
        g1=g1+arr[arr.length-1];
        return g1;
    }

}