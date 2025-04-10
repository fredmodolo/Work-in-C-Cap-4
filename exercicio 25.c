int main() {
    int hora, minutos, total_minutos, total_segundos;
    printf("Digite a hora: ");
    scanf("%d", &hora);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    int hora_em_minutos = hora * 60;
    total_minutos = hora_em_minutos + minutos;
    total_segundos = total_minutos * 60;
    printf("\nA hora digitada em minutos: %d\n", hora_em_minutos);
    printf("Total de minutos: %d\n", total_minutos);
    printf("Total em segundos: %d\n", total_segundos);
    return 0;
}