//Program to find the first occurance of string
//Input


public class first_occurance {
    public static void main(String[] args) {
        System.out.println(check_pres("sadbutsad", "sad"));
    }


    static int check_pres(String heystack, String needle)
    {
        for (int i = 0; i < heystack.length() - needle.length()+1;i++) {
            if (heystack.charAt(i) == needle.charAt(0)) {
                if (heystack.substring(i,needle.length()+i).equals(needle)) {
                    return i;
                }
            }
        }
        return -1;
    }
}
