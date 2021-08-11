    int minDistance(string word1, string word2) {
        int i=0,j=0,mins1=0,mins=0,k=0,point=0,l1=word1.length(),l2=word2.length();
        int L[l1+1][l2+1];
   for (i = 0; i <= l1; i++) 
        {
        for (j = 0; j <= l2; j++) 
        { 
        if (i == 0 || j == 0) 
            L[i][j] = 0; 
      
        else if (word1[i - 1] == word2[j - 1]) 
            L[i][j] = L[i - 1][j - 1] + 1; 
      
        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]); 
        } 
        } 
        
        point=L[l1][l2];
        return (l1+l2-2*point);
    }
