#include <iostream>
#include"sculptor.h"

using namespace std;

int main() {
     // Dimensões do escultor
  int nx = 22;
  int ny = 21;
  int nz = 22;

  // Criação de um objeto Sculptor
  Sculptor sculptor(nx, ny, nz);

  // Definição de algumas propriedades dos voxels
  float alpha = 1.0; // Opacidade
    
    sculptor.setColor(1, 0.9, 0.08, alpha);
    sculptor.putBox(0, 21, 0, 20, 0, 21);

    sculptor.cutBox(8, 13, 0, 1, 0, 21);// corte central perna
    sculptor.cutBox(7, 14, 0, 0, 0, 21);// segundo corte central perna
    sculptor.cutBox(5, 5, 0, 0, 0, 21);// primeiro corte perna lado esquerdo
    sculptor.cutBox(4, 4, 0, 1, 0, 21);
    sculptor.cutBox(3, 3, 0, 3, 0, 21);
    sculptor.cutBox(2, 2, 0, 8, 0, 21);
    sculptor.cutBox(1, 1, 0, 9, 0, 21);
    sculptor.cutBox(0, 0, 0, 10, 0, 21);

    sculptor.cutBox(16, 16, 0, 0, 0, 21);// primeiro corte perna lado direito
    sculptor.cutBox(17, 17, 0, 1, 0, 21);
    sculptor.cutBox(18, 18, 0, 3, 0, 21);
    sculptor.cutBox(19, 19, 0, 8, 0, 21);
    sculptor.cutBox(20, 20, 0, 9, 0, 21);
    sculptor.cutBox(21, 21, 0, 10, 0, 21);

    sculptor.cutBox(0, 0, 13, 20, 0, 21);// primeiro corte parte superior lado esquerdo
    sculptor.cutBox(1, 4, 14, 20, 0, 21);
    sculptor.cutBox(5, 5, 15, 20, 0, 21);
    sculptor.cutBox(6, 6, 17, 20, 0, 21);
    sculptor.cutBox(7, 7, 18, 18, 0, 21);
    sculptor.cutBox(7, 7, 20, 20, 0, 21);
    
    // primeiro corte parte superior lado direito
    sculptor.cutBox(11,12, 20, 20, 0, 21); //1
    sculptor.cutBox(13, 13, 19, 20, 0, 21); //2
    sculptor.cutBox(14, 14, 18, 20, 0, 21); //3
    sculptor.cutBox(15, 15, 17, 20, 0, 21); //4
    sculptor.cutBox(16, 16, 16, 20, 0, 21); //5
    sculptor.cutBox(17, 20, 14, 20, 0, 21); //6
    sculptor.cutBox(21, 21, 13, 20, 0, 21); //7

    // olho
    sculptor.setColor(0, 0, 0, alpha);
    sculptor.putBox(8, 9, 8, 11, 21, 21);
    sculptor.putBox(12, 13, 8, 11, 21, 21);
    // biloca do olho
    sculptor.setColor(1, 1, 1, alpha);
    sculptor.putVoxel(9, 11, 21);
    sculptor.putVoxel(13, 11, 21);

    sculptor.cutBox(0, 21, 0, 20, 0, 15);

   sculptor.writeOFF("TESTE.off");
  cout<<"Desenho em 3D concluido!";

  
  return 0;

}