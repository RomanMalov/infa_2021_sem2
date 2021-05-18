//
// Created by rmnmlv on 27.02.2021.
//
#include <iostream>;
#include <fstream>;
#include <string>;

struct Point{
    int x, y;
};
class Maze{
    int sx, sy;
    int *map;
 /*   int& operator[] (int x, int y){
        
        return map[y+sx*x];
    }
    
    int& operator() (Point p){
        
        return map[p.y+sx*p.x];
    } */
    
public: Maze(){
        sx = sy = 1;
        map = nullptr;
    };
     void read(std::string filename){
        std::ifstream fin(filename);
         fin >> sx >> sy;

        map = new int[sx*sy];
        for(int y = 0; y<=sy; y++){
            std::string str;
            getline(fin, str);
            for(int x = 0; x<sx; x++ ){
                if(str[x] == '#'){
                    map[y*sx+x] = -1;
                }
                if(str[x] == ' '){
                    map[y*sx+x] = -2;
                }
                if(str[x] == 'I'){
                    map[y*sx+x] = -3;
                }
                if(str[x] == 'E'){
                    map[y*sx+x] = -4;
                }
            }
        }
    }
    
     void save(std::string filename){
        std::ofstream fout(filename);
        fout << sx << ' '<< sy;
        for(int y = 0; y<=sy; y++){
            std::string str;
            for(int x = 0; x<sx; x++){
                if(map[y*sx+x] == -1){
                    str+="#";
                }
                if(map[y*sx+x] == -2){
                    str+=" ";
                }
                if(map[y*sx+x] == -3){
                    str+="I";
                }
                if(map[y*sx+x] == -4){
                    str+="E";
                }

            }
            fout << str<< '\n';
        }
    }
    void show(){
        std::cout<<sx<<" "<<sy;
        for(int y = 0; y<=sy; y++){
            for(int x = 0; x<sx; x++){
                    if(map[y*sx+x] == -1){
                        std::cout<<"#";
                    }
                    if(map[y*sx+x] == -2){
                        std::cout<<" ";
                    }
                    if(map[y*sx+x] == -3){
                        std::cout<<"I";
                    }
                    if(map[y*sx+x] == -4){
                        std::cout<<"E";
                    }

                }
            std::cout<<'\n';
            }
        }
    };
int main() {
    Maze maze;
    maze.read("first.txt");
    maze.show();
    maze.save("second.txt");
    return 0;
}
