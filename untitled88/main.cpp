struct Data {
    void activity();

    static int num;
};

int Data::num = 1;

void Data::activity() {
    num = 42;
}