#include "Database.h"

#include <iostream> 
#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h> 
#include <string>

bool Database::checkConnection() {
    /*Checking connection function */

    rc = sqlite3_open("warehouse.db", &db);

    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return false;
    }
    else {
        return true;
    }
}

int Database::callback(void* data, int argc, char** argv, char** azColName) {
    int i;
    fprintf(stderr, "%s: ", (const char*)data);

    for (i = 0; i < argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }

    printf("\n");
    return 0;
}

/*void Database::createTable() {

    if(checkConnection()){


    sql = "CREATE TABLE EMPLOYERS("  \
        "ID INTEGER PRIMARY KEY     NOT NULL," \
        "NAME           TEXT    NOT NULL," \
        "SURNAME        TEXT    NOT NULL," \
        "PHONE			TEXT	NOT NULL," \
        "BIRTHDATE		DATE	NOT NULL"	\
        "PESEL          INTEGER     NOT NULL);";


    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }
    else {
        fprintf(stdout, "Table created successfully\n");
    }
    sqlite3_close(db);
    }
}
*/

void Database::addClientToDB(std::string name, std::string surname, std::string phone_number, std::string zip_code, std::string address) {
    if (checkConnection()) {
        sql_string = "INSERT INTO CLIENTS (NAME, SURNAME, PHONE_NUMBER, ZIP_CODE, ADDRESS) VALUES ('" + name + "', '" + surname + "', " + phone_number + ", '" + zip_code + "','" + address + "'); ";

        sql = sql_string.c_str();

        rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

        if (rc != SQLITE_OK) {
            fprintf(stderr, "SQL error: %s\n", zErrMsg);
            sqlite3_free(zErrMsg);
        }
        else {
            std::cout << "Records created successfully\n";
        }
        sqlite3_close(db);
    }
}

void Database::addEmployeeToDB(std::string name, std::string surname, std::string phone_number, std::string pesel, std::string birth_date, std::string password) {
    if (checkConnection()) {
        sql_string = "INSERT INTO EMPLOYERS (NAME, SURNAME, PHONE_NUMBER, PESEL, BIRTH_DATE, PASSWORD) VALUES ('" + name + "', '" + surname + "', " + phone_number + "," + pesel + ", '" + birth_date + "', '"+ password +"'); ";

        sql = sql_string.c_str();

        rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

        if (rc != SQLITE_OK) {
            fprintf(stderr, "SQL error: %s\n", zErrMsg);
            sqlite3_free(zErrMsg);
        }
        else {
            std::cout << "Records created successfully\n";
        }
        sqlite3_close(db);
    }
}

void Database::login(std::string user, std::string password) {

}