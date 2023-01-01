float getInput();
float convertToPhp(float);
void denominations(float*, int);

int main() {
    float usd = getInput(), php = convertToPhp(usd);
    denominations(&php, 1000);
    denominations(&php, 500);
    denominations(&php, 100);
    denominations(&php, 20);
    denominations(&php, 5);
    denominations(&php, 1);
    return 0;
}

float getInput() {
    float n;
    printf("Enter amount (USD): ");
    scanf("%f", &n);
    printf("Amount (USD): $%.2f", n);
    return n;
}

float convertToPhp(float usd) {
    float n = usd*49.2;
    printf("\nAmount (Peso): Php %.2f", n);
    return n;
}

void denominations(float* php, int bill) {
    int count = 0, n = (float)bill, amount;
    char* money_type = bill >= 20 ? "bill": "coin";
    while (*php >= bill) {
        *php -= bill;
        count++;
    }
    amount = bill*count; 
    printf("\nP%d %s = %d = Php %.2f", bill, money_type, count, (float)amount);
}