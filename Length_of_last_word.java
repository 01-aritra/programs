// Find the length of the last word in the string 
//eg - hellow world  length of the word """ world""" is 5

public class Length_of_last_word // program will run if the name of the class is changed to main
{
    public static void main(String[] args) {
        String s ="Aritra Mishra is";
        System.out.println(Length_of_last_word_(s));
    }

    static int Length_of_last_word_(String s)
    {
        String str = s.trim();
        int count = 0;
        for (int i = str.length()-1; i>= 0; i--) {
            if(str.charAt(i) != ' ')
            {
                count++;
            }
            else
            {
                break;
            }
        }
        return count;
    }
}