// Function to convert any Base-10 number to 
// a number Base-2 (Bin) to Base-16 (Hex)

int convertNumber (int numberToConvert, int base);

    printf ("Number to be converted? ");
    scanf ("%ld", &numberToConvert);

    printf ("Base? ");
    scanf ("%i", &base);

    do {
        convertedNumber[index] = numberToConvert % base;
        ++ index;
        numberToConvert = numberToConvert / base;
        }
    while (numberToConvert != 0);

    // display the results in reverse order

    printf ("Converted Number = ");

    for (--index; index >= 0; --index) 
    {
        nextDigit = convertedNumber[index];
        printf ("%c", baseDigits[nextDigit]);
    }

    printf ("\n");