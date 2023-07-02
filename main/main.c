/* test wifi depuis esp 32 */
/* objectif  mettre l esp32 dans le reseau local et lui faire envoyer des requetes http à un serveur de ce reseau */
/* 02/07/2023 */
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void app_main(void)
{
    while (true) {
        printf("Hello from app_main!\n");
        sleep(1);
    }
}
