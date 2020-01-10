#include <iostream>
namespace SpaceMonstre
{

//Constantes de couleur
/*!
 * \brief Alias remetant la couleur du texte du terminal à sa valeur par défaut.
 */
const std::string KReset   ("0");

/*!
 * \brief Alias mettant en noir la couleur du texte du terminal.
 */
const std::string KNoir    ("30");
/*!
 * \brief Alias mettant en rouge la couleur du texte du terminal.
 */
const std::string KRouge   ("31");

/*!
 * \brief Alias mettant en vert la couleur du texte du terminal.
 */
const std::string KVert    ("32");

/*!
 * \brief Alias mettant en jaune la couleur du texte du terminal.
 */
const std::string KJaune   ("33");

/*!
 * \brief Alias mettant en bleu la couleur du texte du terminal.
 */
const std::string KBleu    ("34");

/*!
 * \brief Alias mettant en mangenta la couleur du texte du terminal.
 */
const std::string KMAgenta ("35");

/*!
 * \brief Alias mettant en cyan la couleur du texte du terminal.
 */
const std::string KCyan    ("36");



// Constantes pour les touches
/*!
 * \brief Alias vers la touche servant à se déplacer à droite.
 */
const char KRight               = 'd';  // Déplacement vers la droite

/*!
 * \brief Alias vers la touche servant à se déplacer à gauche.
 */
const char KLeft                = 'q';  // Déplacement vers la gauche

/*!
 * \brief Alias vers la touche servant à lancer une torpille.
 */
const char KShoot               = 'z';  // Tirer

//  Constantes liées aux Monstres
/*!
 * \brief Couleur des monstres.
 */
const std::string KInvadersColor (KJaune);  // Couleur des monstres

/*!
 * \brief Caractèrere formant les monstres.
 */
const char KInsideInvader       = 'W';  // Caractèrere formant les monstres

/*!
 * \brief Caractèrere formant les tirs des monstres.
 */
const char KMissile             = 'T';  // Tir des monstres

/*!
 * \brief Nombre de caractères qui forment les monstres.
 */
const unsigned KInvadersSize    =  8;   // Taille des monstres

/*!
 * \brief Nombre de fois où les monstres tire un missile par rapport à son déplacement.
 */
const unsigned KMissileRatio = 2; // Ratio déplacement/tir des monstres


// Constantes liées au joueur
/*!
 * \brief Couleur liée à mes objets (vaisseaux et tropilles).
 */
const std::string KMyColor (KVert); // Couleur du joueur

/*!
 * \brief Caractèrere formant mon vaisseau.
 */
const char KInsideMe            = 'A'; // Caractèrere du joueur

/*!
 * \brief Caractèrere formant ma torpille.
 */
const char KTorpedo             = '|'; // Caractère des tirs du joueur

/*!
 * \brief Nombre de caractères qui forment mon vaisseau.
 */
const unsigned KMySize          = 3; //  Taille du joueur

/*!
 * \brief Nombre de fois où c'est le tour du joueur pour un tour des monstres.
 */
const unsigned KRatioMeInvaders = 4;    // Nombre de fois où c'est le tour du joueur pour un tour des monstres


// Constantes liées l'écran
/*!
 * \brief Alias vers une case vide à l'écran.
 */
const char KEmpty               = ' ';  // Case vide de l'écran
/*!
 * \brief Nombre de lignes de l'écran (de l'espace).
 */
const unsigned KSizeLine   = 20;   // Nombre de lignes de l'écran

/*!
 * \brief Nombre de colonnes de l'écran (de l'espace).
 */
const unsigned KSizeSpace  = 20;   // Nombre de colonnes de l'écran

/*!
 * \brief Numéro de colonne où commence les monstres.
 */
const unsigned KBegInvader = 0;    // Numéro de colonne où commence les monstres

/*!
 * \brief Numéro de colonne où commence le joueur.
 */
const unsigned KBegMe      = KSizeLine / 2;  // Numéro de colonne où commence le joueur

/*!
 * \brief Alias vers une ligne vide de l'esapce.
 */

const std::string KEmptyLine (KSizeLine, KEmpty);  // Une ligne vide de la matrice
}
