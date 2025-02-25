class check_fst_stng
{
    public static void main(String[] args) {
        System.out.println(strStr("sadbutsad", "but"));
    }
    static int strStr(String heystack, String needle) {
        for(int i = 0; i < heystack.length() -  needle.length() + 1; i++)
        {
            if (heystack.charAt(i) == needle.charAt(0)) {
                if (heystack.substring(i, i+needle.length()).equals(needle)) {
                    return i;
                }
            }

        }
        return -1;
    }
}