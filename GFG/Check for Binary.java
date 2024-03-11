class GfG
{
	boolean isBinary(String str)
	{
	    int flag = 1;
	    for (int i = 0; i<str.length(); i++) {
	        char ch = str.charAt(i);
	        if (ch != '0' && ch != '1') {
	            flag = 0;
	            break;
	        }
	    }
	    
	    return flag == 1;
	}
}
