#include "iostream"
#include "lib.h"
#include <cstdio>
#include <string>


int main(){
    character test("testo");
    test.printstats();
    test.printitem(-1);
    test.changename("testo12345123451234512345");
    test.printstats();
    return 0;
}