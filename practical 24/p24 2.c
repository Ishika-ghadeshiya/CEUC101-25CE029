void main()
 {
  char s[100],Q[100];
  int i,L=0,a;
  printf("Enter note\n");
 gets(s);
  for(i=0;s[i]!='\0';i++)
  {
      L++;

  }
  for(i=0;s[i]!='\0';i++)
  {
      a=L-i-1;
      Q[a]=s[i];
      Q[L]='\0';
      printf("%s",Q);

  }


 }
