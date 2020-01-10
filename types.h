#include <vector>
#include <utility> //pair
#include <array> //array

namespace SpaceMonstre
{
    /*!
     * \typedef CVString
     * \brief   Alias vers le type de l'écran (l'espace, la matrice).
     */
    typedef std::vector <std::string> CVString;    // Type de l'écran (l'espace, la matrice)


    /*!
     * \typedef CPosition
     * \brief Alias vers une coordonnée de la matrice. Le premier élément de la paire désigne une ordonnée (axe Y),
     *          le second une abscisse (axe X).
     */
    typedef std::pair <unsigned, unsigned> CPosition; // Coordonnée dans la matrice

    /*!
     * \typedef CVPosition
     * \brief Alias vers un vecteur de coordonnees.
     */
    typedef std::vector<CPosition> CVPosition; // Vecteur de coordonnées

    /*!
     * \typedef CAObject
     * \brief Alias vers un tableau de 4 vecteurs de coordonnees.
     * <ul>
     *  <li>indice 0 : Les positions des monstres
     *  <li>indice 1 : Les positions des tirs des monstres
     *  <li>indice 2 : Les positions du joueurs
     *  <li>indice 3 : Les positions des tirs du joueur
     * </ul>
     */
    typedef std::array <CVPosition, 4> CAObject;     // Tableau de 4 vecteurs de coordonnées
                                                     // Indice 0 : Les positions des monstres
                                                     // Indice 1 : Les positions des tirs des monstres
                                                     // Indice 2 : Les posotions du joueur
                                                     // Indice 3 : Les positions des tirs du joueur
}
