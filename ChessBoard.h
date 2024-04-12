#pragma once

#include "ChessPiece.h"

using namespace std;

struct Coord
{
    Coord(float x, float y) : row(x), col(y) {};
    float row;
    float col;
};

class Chessboard 
{
public:
    vector<vector<ChessPiece*>> board; // tablica zawierajaca plansze
    vector<Coord> coords; // tablica zawierajaca mozliwe ruchy
    bool playerTurn;
    bool endGame = false;

    Chessboard(); // konstruktor
    void initializeBoard(); // inicjalizacja
    void initializeWhitePieces(); // inicjalizcja bia�ych pionk�w
    void initializeBlackPieces(); // inicjalizcja czarnych pionk�w
    void displayBoard(); // wy�wietlanie planszy oraz aktualnych pionk�w
    bool isValidMove(int fromRow, int fromCol, int toRow, int toCol); // sprawdzanie ruchu dla konkretnej figury
    bool select(int fromRow, int fromCol); // pod�wietlenie wybranego pionka
    void showMoves(int fromRow, int fromCol); // generowanie mo�liwych ruch�w dla figur
    void displayMoves(); // wi�witlanie mo�liwych ruch�w figur
    void makeMove(int fromRow, int fromCol, int toRow, int toCol); // zmiana pozycji pionka
    void clear(); // czysczenie zaznaczenia
    bool isKingInCheck(); // sprawdzanie czy kt�ry� z kr�l�w jest w szachu
    void startTurn();
    void displayMessage(std::string str);
    void gameEnd();
    ~Chessboard(); // destruktor
};

