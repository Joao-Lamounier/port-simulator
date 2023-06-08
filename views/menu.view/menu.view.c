#include "menu.view.h"

void home_menu() {
    color(5);
    printf("╔══════════════════════════════════════════════════════════════════════╗\n");
    printf("║");
    color(7);
    printf("                             Bem-vindo ao                             ");
    color(5);
    printf("║\n║");
    color(7);
    printf("                            Port-Simulator                            ");
    color(5);
    printf("║\n");
    printf("╚══════════════════════════════════════════════════════════════════════╝");
    printf("\n│");
    color(7);
    printf("* Para iniciar a simulação pressione 'enter';                         ");
    color(5);
    printf("│\n│");
    color(7);
    printf("* Para finalizar pressione qualquer tecla diferente de 'enter';       ");
    color(5);
    printf("│");
    printf("\n└──────────────────────────────────────────────────────────────────────┘\n");

    color(7);
}
