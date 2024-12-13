#include <stdio.h>
#include <string.h>

//nguyen mau ham
void deleteCharC(char s[], char ch);

int main() {
    char string[] = "hello";
    char ch = 'l';
    deleteCharC(string, ch);
    //goi ham
    printf("%s\n", string);  // Output: "heo"
    return 0;
}

//logic ham xoa ky tu trong chuoi
void deleteCharC(char s[], char ch) {
	//chi so cua chuoi sau khi xoa
    int index = 0;
    int len = strlen(s);
    //duyet qua mang
    for (int i = 0; i < len; i++) {
    	//neu ky tu khong bi xoa thi them vao chuoi
        if (s[i] != ch) {
            s[index] = s[i];
            index = index+1;
        }
    }
    //them ky tu ket thuc vao chuoi sau khi xoa
    s[index] = '\0';
}

