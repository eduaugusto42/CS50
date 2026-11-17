DEFINING CUSTOM DATA TYPES

    typedef unsigned char byte;
    typedef char* string;

    struct car
    {
        int year;
        char model[10];
        char plate[7];
        int odometer;
        double engine_size;
    }
    cart_t;

    // variable declaration
    struct car mycar;

    // field accessing
    mycar.year = 2011;
    mycar.plate = "CS50";
    mycar.odometer = 50505;

