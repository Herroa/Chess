

class Piece
{
private:
    int x, y;
    // int Figure; // (-6;6)
public:
    Piece(int x, int y) : x(x), y(y)
    {
    }
    ~Piece() {}
    void capture()
    {
    }
};

class Pawn : public Piece
{
public:
    void move()
    {
    }
};

class Board
{
private:
    int **matrix;
    Piece *Pieces;

public:
    Board()
    {
        matrix = new int *[8];
        for (int k = 0; k < 8; k++)
        {
            matrix[k] = new int[8];
        }
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                matrix[i][j] = 0;
            }
        }
        // for(int i = 0;i<8;i++){
        //     for(int j = 0;j<8;j++){
        //         std::cout << matrix[i][j];
        //     }
        //     std::cout << std:: endl;
        // }
    }
    ~Board() {}
    void start(){
        for(int i = 0;i<8;i++){
            matrix[1][i]= -1;
        }
        for(int i = 0;i<8;i++){
            matrix[1][i]= 1;
        }
    }
};

