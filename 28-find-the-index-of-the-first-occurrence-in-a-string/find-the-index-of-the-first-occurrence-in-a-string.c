int strStr(char* haystack, char* needle) {
    for(int i=0;haystack[i]!='\0';i++){
        int j;
    for(j=0;needle[j]!='\0';j++){
    if(needle[j]!=haystack[j+i]){
        break;
    }
     
    }if (needle[j] == '\0')
        return i;
}
 
return -1;
    
}