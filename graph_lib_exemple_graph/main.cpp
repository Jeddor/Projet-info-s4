#include "grman/grman.h"
#include <iostream>
#include <fstream>
#include "graph.h"


int main()
{

   //// A appeler en 1er avant d'instancier des objets graphiques etc...
    grman::init();

    /// Le nom du répertoire où se trouvent les images à charger
    grman::set_pictures_path("pics");

    /// Un exemple de graphe
    Graph g;
    //g.make_example();

    g.load();

    /// Vous gardez la main sur la "boucle de jeu"
    /// ( contrairement à des frameworks plus avancés )
    while ( !key[KEY_ESC] )
    {
        /// Il faut appeler les méthodes d'update des objets qui comportent des widgets
        g.update();

        /// Mise à jour générale (clavier/souris/buffer etc...)
        grman::mettre_a_jour();
    }

    grman::fermer_allegro();



    return 0;
}
END_OF_MAIN();



/*return fichier;
}
    if(fichier)
    {
         while (getline(fichier, line))
         {
             if(i%5==0)
             {
                 fichier<<
             }
             ///modulo 5==1
             ///va lire la valeur

             ///modulo 5==2
             ///lire les position

             ///modulo 5==3
             ///lire les position

             ///modulo 5==4
             ///nom du sommet
             ///plus
         }
    }
    else
    {

    }
    return ;
}*/
