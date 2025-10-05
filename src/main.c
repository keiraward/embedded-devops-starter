#include <stdio.h>
#include "app.h"

int main(void) {
    setvbuf(stdout, NULL, _IONBF, 0); // برای اینکه خروجی حتماً چاپ شود

    printf("Hello, Week1!\n");
    app_init();

    getchar(); // موقت: تا با دابل‌کلیک هم پنجره بسته نشود
    return 0;
}
