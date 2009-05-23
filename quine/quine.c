#include <stdio.h>

int
main(void) {
char* code[] = {
"#include <stdio.h>",
"",
"int",
"main(void) {",
"char* code[] = {",
"};",
"",
"const char line[] = {0x25, 0x73, 0x0a, 0x00};",
"const char quote[] = {0x22, 0x25, 0x73, 0x22, 0x2c, 0x0a, 0x00};",
"",
"int i;",
"for(i=0;i<5;i++){",
"printf(line, code[i]);",
"}",
"for(i=0;i<22;i++){",
"printf(quote, code[i]);",
"}",
"for(i=5;i<22;i++){",
"printf(line, code[i]);",
"}",
"return 0;",
"}",
};

const char line[] = {0x25, 0x73, 0x0a, 0x00};
const char quote[] = {0x22, 0x25, 0x73, 0x22, 0x2c, 0x0a, 0x00};

int i;
for(i=0;i<5;i++){
printf(line, code[i]);
}
for(i=0;i<22;i++){
printf(quote, code[i]);
}
for(i=5;i<22;i++){
printf(line, code[i]);
}
return 0;
}
