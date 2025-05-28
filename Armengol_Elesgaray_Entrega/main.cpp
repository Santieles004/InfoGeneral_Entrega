// Elesgaray Lopez Santiago
// Armengol Claudio
// Aquino Milu
// Aguirre Lucía
// Basado en: Clase De Defensa Personal - "Sos Inimputable, Hermano.. En 10 Días Salís" https://www.youtube.com/watch?v=EnSV7h6Lx4g
#include <iostream>
#include <cstdlib> // Para system()
using namespace std;

// Función para leer una opción válida
int leerOpcion() {

    int opcion;
    cin >> opcion;

    while (cin.fail()) {
    
        cin.clear(); // Limpia el estado de error
        cin.ignore(1000, '\n'); // Descarta lo que haya en el buffer
        cout << "Entrada inválida. Ingresá un número: ";
        cin >> opcion;
    }

    return opcion;
}

int main() 
{
    int opcionMenu;
    bool seguirJugando = true;

    while (seguirJugando) 
    {
        // Título y menú principal
        cout << "\n=== SOS INIMPUTABLE, HERMANO ===" << endl;
        cout << "                                 .lloddoll.                                    " << endl;
        cout << "        lk                     llodxdoooooooo                    .00K           " << endl;
        cout << "        ;x                    cxxxxdddddddollxd                   ...           " << endl;
        cout << "        ;x.                  kxdxdddddddoollllc;                 ,. ''          " << endl;
        cout << "        ;x.                 .koooooddolc::::;;,l;                ,   ,          " << endl;
        cout << "        k00W0                xllcloo:;,..'co,...'               Kc . oK         " << endl;
        cout << "      ;0:x;lx0kl             olclll:;,;',codd;'';             .l       o        " << endl;
        cout << "      ;klkdoO,.,            ;:clllloolloocoooc;;c             ,  ..:.. ..       " << endl;
        cout << "      ;d d.XKo              .c:coolllooc;:;'''',c             ,.::,;;;:.        " << endl;
        cout << "           .'.d0XXx          .oollclllc;cc;,'.'',             '.:.,c,.:'        " << endl;
        cout << "              .'..;             ,ccccc;;,'.....'.             ' ;.....;.        " << endl;
        cout << "                                .c;:c:;::;,''''.              '        .        " << endl;
        cout << "                                  ccc;;:c::;;,.                                  " << endl;
        cout << "                                                                                " << endl;
        cout << "                                                                                " << endl;
        cout << "                                                                                " << endl;
        cout << "  M; .0l   N. KN  Nl   .kK  lxkkk. ;N.  'N. OKK00x  ;Xd    cxkkd'  0c    ;MMMMk " << endl;
        cout << "  M, .MMx  W. MM  MMK  XMM' O0,,xO ,M.  lM  ..Kx    OXNO   k0,,kM. Mo    ;M...  " << endl;
        cout << "  M: .WoNx,M. 0M  KxxXkKlW. OK;:x; ,M.  ,M    0d   'W.,W   kXddOo  M:    ;Mxdd  " << endl;
        cout << "  M,  K. OKW  NM  Xo XM; W. Oo     'M.  cW    0d  .N0ddX0  kx  .M; M:    ;M     " << endl;
        cout << "  k'  0,  ;O  KN  0: 'd  N. o.      ;kxxx'    dc  lx   .O; okddxl  Oxddd '0ddd: " << endl;


        cout << "1. Jugar" << endl;
        cout << "2. Salir" << endl;
        cout << "Elegí una opción: ";
        opcionMenu = leerOpcion();
        system("clear");

        switch (opcionMenu) 
        {
            case 1: {
                int opcion1, opcion2, opcion3;
                int balas = 0;
                int tragos = 0;
                float alcohol = 0.0;
                bool cocainaEnSangre = false;
                bool zapatearYMear = false;
                bool seEntrego = false;

                // Nivel 1
                cout << ".''.                                          " << endl;
                cout << "                                          :,.  .;,               ,;d.                     " << endl;
                cout << "                                 .      :,'''''''o.            .c l                       " << endl;
                cout << "                           '''''..''',. :;,'''''..o            o  l                       " << endl;
                cout << "                         ;,        ..'cc';k' .d..l.            ;' .:.                     " << endl;
                cout << "                       .:       ,,'.   .::XN0ddxO,              ';. .,;l'                 " << endl;
                cout << "                       c     .,'         c,kN0o,                  .'''.                   " << endl;
                cout << "                      .,   .;.   :     .  '..'...                                         " << endl;
                cout << "                       :. ,,    .:    l    .    .;'.      ...                             " << endl;
                cout << "                        .oc     c    :. .,,.,,.    ..',c'.,,;x                            " << endl;
                cout << "                        .,.,'''.o    d';l'''' .,''''''c:.''ool                            " << endl;
                cout << "                        c       :.   c.      ',           .;                              " << endl;
                cout << "                        .c      .c.   l       c                                           " << endl;
                cout << "                         .:      c,,  .x''c   .;                                          " << endl;
                cout << "                 ;,'','.'''o,    ;. ,l..'':'   l                                          " << endl;
                cout << "                :.   c            c  .c''::o.  l    ';:.   .c;,    :;,    ::;    ,;:      " << endl;
                cout << "               ;'  ,::.          ;.   l.:ddk ..o   .:  o   o  ,.  l  ',  c  .c  ,'  l     " << endl;
                cout << "              .: ';   ..'''''''''     l  :.;;..:'. .;  l   l  '.  c  .,  l   l  ;.  l     " << endl;
                cout << "               ,'.                    l  :..;    ..'c  l'''o  ':.'o  .c''d   d''l.  o''''." << endl;
                cout << "                                      l  ;. l'''''';l  l'''o  ':''o  .c''d   d''l.  o'''''" << endl;
                cout << "                                      l  ;.        .;  l   c  '.  l  .;  l   l  ;.  l      " << endl;
                cout << "                                      l  ;.        .;  l   c  '.  l  .,  l   l  ;.  c      " << endl;
                cout << "                                      l  ;.        .;  l   l  '.  l  .,  c   l  ;.  l      " << endl;
                cout << "                                      l  ;.        .:  l...l  ',..o  .:..l   o..:.  o....." << endl;
                cout << "     .  .. .......   . . ..... .  ....l  ;.        .;  l...l  ';..o  .c..o   o..c.  o....." << endl;
                cout << "    ..................................,  ..         '  ,   ,  ..  ,  ..  ,   ,  ..  ,     " << endl;


                cout << "\nNivel 1: Entra el chorro. ¿Qué hacés?" << endl;
                cout << "1. Amasijarlo en el patio." << endl;
                cout << "2. Llevarlo al lugar más recóndito de tu casa, al sótano." << endl;
                cout << "Elegí una opción: ";
                opcion1 = leerOpcion();
                system("clear");

                if (opcion1 == 1) 
                {
                    cout << ".;                                                  " << endl;
                    cout << "                                 l.   xO.    c                .:loddo:.                   " << endl;
                    cout << "                             '.   :, .0xc   l0;             :OXKXKXKXXKk'                  " << endl;
                    cout << "              .'.'''          .,;. . .:'.   Odd           .OKKKkOXKKOkXXK,                 " << endl;
                    cout << "           .,.      ':..    .,'. ..  .0Kc   ::;.          o0xxx00KK0lXKkxo                 " << endl;
                    cout << "          ''    .''''...:      .  k.  ok,   cKl          :old:doxdlx;o;xxO.                " << endl;
                    cout << "          c .'''.   .';c;        lOk .:xc   ;kl.        ,K::lx;:K0:XX0KklK.                " << endl;
                    cout << "          o'.   .;:c:'. ;.       :;o   kc   ,o:.         ':xXk::ddKXKXK0x'                 " << endl;
                    cout << "         .;  ..'. ;lc. ::'       :xo.  ,O   'O.           c:doxxodXKKKkxo                  " << endl;
                    cout << "          ,c:,    .,,l0Kkld      .Kd    xck:,.            .oxOK0xdxXKxdKxddcc,.            " << endl;
                    cout << "          ;Kox0kdddOKKKx:kk      ,ol; oloxx.',.             ,OK0kxxOdd0okK:KXXKOc.         " << endl;
                    cout << "     .: ,  .;loKKKKK0,  .cx.''.    lcl; ;dlx0kK,             ;dk,doooldKKcOXXXXXXKd.       " << endl;
                    cout << "    c;0;0      .dKKK0lxKK0'   .''.      ox:x:lKK;.        .l0KXXcOo,ldOOl0Xx0XXXXKKO.      " << endl;
                    cout << "   'K:0:k  .. .',ddddddo,        .,,.   .xxl,xxKxd0';.  .oKXKXoX0oKoKKxxKXdkXXXXXKKKk      " << endl;
                    cout << "   'K:dd0,.K:;.  ;dkkd;             ',.   'cd:cclKxoKK0xddKKKKcKKKKKKKKKKxdXXXXKKKKKK;     " << endl;
                    cout << "    xKKKOl0K.          ..   .,        ',    cxc.xodKKKKKK0KKKKOlKKKKKKKKOoXKKKXXKK:KKk     " << endl;
                    cout << "     dKK0KKl  .     :ldxd0d'  ',   ..   ;.  .lk:..:xKKKKKKKKx;. OKKKKKKOcKKKKKKKKc0KKK.    " << endl;
                    cout << "     .lddd;    c    cldxdOKKx'.';...     :  .kKkdlx' ':odc'     'KKKOxd'ddKXKKKKl0KKKK:    " << endl;
                    cout << "    .;....:    .:    l,  '0KKK.          :..dxxxxc.          ...:dxxOKKKdKKKKKOlKKKKKKd    " << endl;
                    cout << "    c    .:   .;';        .:lc'..   ...''.  ...      .okxdoodoKxoKKKKKKKKKKKKddKKKKKKKO    " << endl;
                    cout << "    c    .. .,.  .:            ......l.             .OcOOKKKKxdKc0KKKKKKK0kdoOKKKKKKKKK    " << endl;
                    cout << "    ,'    .'.     .:                  c             ':xcOd0Okl;o':lxxxddxxOKKKKKKKKKKK0    " << endl;
                    cout << "     .'...         .:                 .,             ' ..d:.      ;KKKKKKKKKKKKKKKKKKKk    " << endl;
                    cout << "                    .;                 c                           lok0KKKKKKKKKKKOxl,     " << endl;
                    cout << "                     '                                            :.    .........          " << endl;
                    cout << "                                                                  .                       " << endl;
                    cout << "\nLo amasijaste en el patio." << endl;
                    cout << "Presiona Enter para continuar..." << endl;
                    cin.ignore();
                    cin.get();
                    cout << "                                                .ckXWMNO,                                 " << endl;
                    cout << "                                               oWMMMMMMMMd                                " << endl;
                    cout << "                                              .NNMMMXXdkWM                                " << endl;
                    cout << "                                              .XOWMNXMcxXX                                " << endl;
                    cout << "                                              :0ONMKMX:XX0kX.                             " << endl;
                    cout << "                                               lXNMMMdc0XWKKO;                            " << endl;
                    cout << "                                               kMMMO'cNN00WMMMK. .oddxkOOol:.             " << endl;
                    cout << "                                                ''.'KX0XMXNMMMMN. cMMMMMdNMMK             " << endl;
                    cout << "                                                .dkXOXM0OWMMMMMMd .MMMMxNMMMl             " << endl;
                    cout << "                                               'k0OKMMk0MMMMMMMW0  WMMNkMMMW              " << endl;
                    cout << "                                              :oOKMMM0KMMMMMMMNXO  MMMdWMMMx              " << endl;
                    cout << "                                          'lOOlKMWNNxXN0NMMMMMxMc 'MMKOMMMM.              " << endl;
                    cout << "                                  'ckOOkkkOK0lKKKKNXKKONKWMMWlNK  oMMoMMMMK               " << endl;
                    cout << "                         .cooc::.cdxx0XXXoMMXXMMMMMMNMMNMMMX,k0.  O0kXMMMMc               " << endl;
                    cout << "                        xMXOKWMMMMMWWNKOo.kK0OxdxdokOk0K0kdOKXXNNWWMMMMMMW                " << endl;
                    cout << "                       xMKOMMMMMMMMMMMMMNkMMXkNWMMMMMNK0OKMMMMMMMMMMMMMMMk                " << endl;
                    cout << "                      lMWxMMXMNMXOKMMMMMOXMMdMMMMMMMMMMMMMMMMMMMMMMMMMMMM;                " << endl;
                    cout << "                     :MMdWMMKM00MMXOO0KNkNMMdM  INIMPUTABLE HERMANO  MMMM                 " << endl;
                    cout << "                    .XMkKMMM0MMd0MMMMN0k;WMMxMMMMMMMMMMMMMMMMMMMMMMMMMMM0                 " << endl;
                    cout << "                      .kMMMMNXMMOWMMk;WMdMMMxMMMMMMMMMMMMMMMMMMMMMMMMMMMo                 " << endl;
                    cout << "                       ookNMMWMMMMMO 0WMxMMMxMMMMMMMMMMMMMMMMMMMMMMMMMMM'                 " << endl;
                    cout << "                      'MW:dkxkNMMMO .KOOlMMMxMMMMMMMMMMMMMMMMMMMMMMMMMMW                  " << endl;
                    cout << "                     .NMNdMMMO..,;  :ONMxMMMxMMMMMMMMMMMMMMMMMMWXK0Okkx:                  " << endl;
                    cout << "                   .'XMKxWMMMW.        ..:dOoNK0Okxdolc:;,...       .WK                   " << endl;
                    cout << "               .;oKNkxOKOKMMMW              kO                       dW                   " << endl;
                    cout << "              oOOx0XMMMMMXk0XK.             WK                        d.                  " << endl;
                    cout << "                 .;ccllc:;,,'.              No                        " << endl;
                    
                    cout << "Ahora dicen que se cayó de la medianera. Felicidades, el chorro no entró a robarte." << endl;
                    cout << "Presiona Enter para continuar..." << endl;
                    cin.ignore();
                   
                    system ("clear");
                    break;
                }
                else if (opcion1 == 2)
                {
                    cout << "                                                    ,cc,                                  " << endl;
                    cout << "                                                  ,0O0KK0,                                " << endl;
                    cout << "                                              'lo.kxOkKKKk                                " << endl;
                    cout << "                                           .l0KKK0O0kKK0O.                                " << endl;
                    cout << "                                          .0KKKOKKd'KK0:,                                 " << endl;
                    cout << "                                         .0KKKKKOKO 'd:                                   " << endl;
                    cout << "                                         k0KKKKKOKK                                       " << endl;
                    cout << "                                        :KkKKKKkKKK.                                      " << endl;
                    cout << ",,,,,,.                                 00kKKKKkKKK.                                      " << endl;
                    cout << "KKKKKK;                                ,Kk0KKKKkKKK'                                      " << endl;
                    cout << "KKKKKK;                                oKOOKKKKkKKK;                                      " << endl;
                    cout << "KKKKKK;                                kKKkKKKK00KKo                                      " << endl;
                    cout << "KKKKKKKKKKKKKKKK:                      OKKkK0OkOxKKK.                                     " << endl;
                    cout << " ,d0KKKKKKKKKKKK:                      KKK0OO0kK0OKKO.                                    " << endl;
                    cout << "    'lOKKKKKKKKK:                      KKKKKKKk00OKKKO.                                   " << endl;
                    cout << "       .ckKKKKKK0OOOOOOOOOo           .KKKKKKKkxk0KKKKO                                   " << endl;
                    cout << "          .:xKKKKKKKKKKKKKx           ;KKKKKKKKKKKKKKKK:                                  " << endl;
                    cout << "             .;dKKKKKKKKKKx           xKKKKKKKKKKKKKOKKd                                  " << endl;
                    cout << "                 ,oOKKKKKK0ddddooooc .KKKKKKKKKKKKKO0KKk                                  " << endl;
                    cout << "                    .ckKKKKKKKKKKKKk dKKKKKKKKKKK0OKKKKO                                  " << endl;
                    cout << "                       .:xKKKKKKKKKk   'kO0x0KKK0KKKKKKK                                  " << endl;
                    cout << "                          .;dKKKKKKk   lO0Oc.';cdxkkO00o                                  " << endl;
                    cout << "                              ,o0KK0dddddxkOOkd.    ,KK.                                  " << endl;
                    cout << "                                 .ckKKKKKKKKKKK'    :KKx.                                 " << endl;
                    cout << "                                    .:xKKKKKKKK'    cdkkOd:.                              " << endl;
                    cout << "                                       .;d0KKKKOxxxxxxkOO'.'                              " << endl;
                    cout << "                                           ,o0KKKKKKKKKKK.                                " << endl;
                    cout << "                                              cKKKKKKKKKK.                                " << endl;


                    cout << "\nLo estás llevando al sótano..." << endl;
                    cout << "Presiona Enter para continuar..." << endl;
                    cin.ignore(); 
                    cin.get();  // Presionar Enter  
                    system("clear");
                }
                // Nivel 2
                cout <<                 "'XNNNNNNNNNNXo                                                             " << endl;
                cout << "                 'KNNNNNNNNNNXl                                                            " << endl;
                cout << "                  .kNNNNNNNNNNXKo,.                                                        " << endl;
                cout << "                    lNNNNNNNNNNNNNX0xc,.                                                   " << endl;
                cout << "                     :XNNNNNNNNNNNNNNXXNKkdc.                                              " << endl;
                cout << "                      cNNNNNNNNNNNNNNNXNNXNNX;                                             " << endl;
                cout << "                       lXNNNNNNNNNXXXXXXXXXNNXc                                            " << endl;
                cout << "                        ,0XXNXNXXXXXXdXkKXXXXXXk.                                          " << endl;
                cout << "                          ,kX0XXXXXXx;.,xxolXXXXK:                                         " << endl;
                cout << "                             .lXXXXXK.  dXxkokKXXX;                                        " << endl;
                cout << "                                lXXXXX;  KXlKX:KXX;                                        " << endl;
                cout << "                                 'KKKXXo'XX'XXcXXX,                                        " << endl;
                cout << "                                  .OXXX0Okc,KK;kKK.                                        " << endl;
                cout << "                               .cc. l00XOlccc;;:::;0O'::::::::::::::::dKc:.                " << endl;
                cout << "                                 'xXoco0x'KOXKOO0l.XKcO00000000000000000K0.                " << endl;
                cout << "                                  .KlXxl.:XXx,:cc'.0O,;::cc:;;:c.                          " << endl;
                cout << "                                  :kXXX0,'K0X00KKo'0d                                      " << endl;
                cout << "                            .,',,cKXOKXXl.clo,',,.:X;                                      " << endl;
                cout << "                          .,'..''.,XO0XXXXKOK0OOOxxd.                                      " << endl;
                cout << "                         ;........:0kkxlxk,. .lK,                                          " << endl;
                cout << "                       .;....  .'.  'k'  k     c                                           " << endl;
                cout << "                      .; .;'.  :     .:  .'  .,.                                           " << endl;
                cout << "                     .:  .o:  :        .......                                             " << endl;
                cout << "                     : ...... c                                                            " << endl;
                cout << "                    ;. ...... :                                                            " << endl;
                cout << "                   .c',;;::;'.:                                                            " << endl;


                cout << "\nNivel 2: Estás en el sótano y agarraste tu arma. ¿Qué hacés ahora?" << endl;
                cout << "1. Pegarle un tiro." << endl;
                cout << "2. Vaciarle todo el cargador." << endl;
                cout << "3. Tirarle todos los tiros, zapatearlo arriba y mearlo." << endl;
                cout << "4. Elegís tenerle piedad al chorro y decidis amordazarlo con una soga. Te das vuelta para agarrar la soga y..." << endl;
                cin >> opcion2;
                system("clear");

                if (opcion2 == 1) 
                {
                    cout << "....                 " << endl;
                    cout << "                                                        ..'       .';'  .'.               " << endl;
                    cout << "                   .lkOkd;                             ;lox .     ;.......;               " << endl;
                    cout << "                  d00x0X0O:                            .OOxk'    .:,'o'...:               " << endl;
                    cout << "                 'kkxo0XOox                             ;Od:     kx0kc',c,.               " << endl;
                    cout << "               'cxckdKXX0xk;                             ',.;    d; dXXK;      '.         " << endl;
                    cout << "            ,xKXxOkkOOXOdk.                 . .'          ; ,.... 'col;..'  c.xcc,        " << endl;
                    cout << "          .xXXXXXkkxOxlcl,         ........ OOK,.         ;. .  '         ;.x0xxk;.       " << endl;
                    cout << "         .0XXXXXXXKk:dd           ;d;.....'.KKK;......D    ,...c.          ,:dOx.         " << endl;
                    cout << "         0XXKk0XXXXXKkll::clcc;dx0Xll:..    ; '.               ;        ;. ;..c           " << endl;
                    cout << "        :XXXOOdkOXXXXXxXXXXXdXlxodl'c                         :         :,',  c           " << endl;
                    cout << "        oXXXXXXXKkkx0XXXXXXXdXd.                             ';        :  c..,.,          " << endl;
                    cout << "        xkk0XXXXXXOxO..',;;:':.                     ...........'...   '. .,    ,.         " << endl;
                    cout << "       ,XXX0OOOOOO:do                              '.              ..':  :,......,        " << endl;
                    cout << "       cXXXXXXXXdKloX0;                           ;.   .......;     .;  .,;      .,       " << endl;
                    cout << "       cXXXXXXXOkXo0xXXO'                       .;   .,      ;     '.   ,.        :       " << endl;
                    cout << "       ,XXXXXX0OXXoXdXXXXo                ...  .,   '.      .'    ,.     :       ;.       " << endl;
                    cout << "        KXXXXXXXXOkXx0XXXXO               .' .:,'..;.       c    ,.       '......         " << endl;
                    cout << "        xXXXXXXXXdXXKxXXXXX;                ...  ..        .;   .:                        " << endl;
                    cout << "       :kXXXXXXXXKXXXdXXXXXx                   ...          .,    ,.                      " << endl;
                    cout << "       KXXXXXXXXXXXXXoXXXXKk                                  ,.   .,                     " << endl;
                    cout << "      'kk0XXXXXXXXXX0,:;dkk'                                   .,.  ''.                   " << endl;
                    cout << "      kX0. ........     ;XX:                                     .,'  '.                  " << endl;
                    cout << "     xXXd               .XXO;.                                   .c. '.                   " << endl;
                    cout << "    :OOkdK0x,           :kkkkxoko                               :...'.                   " << endl;
                    cout << "    ........            .........               " << endl;

                    cout << "\nLe pegaste un solo tiro." << endl;
                    cout << "Presiona Enter para continuar..." << endl;
                    cin.ignore();
                    cin.get();
                    cout << "                    ................................................                      " << endl;
                    cout << "                    ookKooooooo0OoooooooooooooooooooO0oooooooKkooooo                      " << endl;
                    cout << "                      cO       xl       .;clc,.     ox       kc                            " << endl;
                    cout << "                      cO       xl     'kXXXXXX0x.   ox       kc                            " << endl;
                    cout << "                      cO       xl    'X0OO0XXXdXO   ox       kc                            " << endl;
                    cout << "                      cO       xl    :KOXO00KXKdko. ox       kc                            " << endl;
                    cout << "                      cO       xl    .x:KXkk0XXXXK. ox       kc                            " << endl;
                    cout << "                      cO       xl     koK0x0XXXxo.  ox       kc                            " << endl;
                    cout << "                      cO       xl     .ddkOkkXKoXl0oox       kc                            " << endl;
                    cout << "                      cO       xl     .kXXXKKkxXkOXXox0Oo,   kc                            " << endl;
                    cout << "                      cO       xl   .xXOkxOxoOXkkXXxox0XXX0, kc                            " << endl;
                    cout << "                      cO       xl  'XXXXXlXlXKxkXXkOox0XXXXX,kc                            " << endl;
                    cout << "                      cO       xl  kXkXXXd0KddOXXxOXox0XxXXXkkc                            " << endl;
                    cout << "                      cO       xl .XXlXXXXoXd0XXd0XXox0XlXXXkkc                            " << endl;
                    cout << "                      cO     .:xo.:KXoXXXXKcKX0dXXXXox0XlXXXkkl.                           " << endl;
                    cout << "                      cO    .X0OOcXoXoXXXXoXXkkXXXXXox0XoXXXkkok                           " << endl;
                    cout << "                      cO    .X0xx:dkXoXXXoXXx0XXXXXXox0XoXXKdkoXl                          " << endl;
                    cout << "                      cO     c0doockkd0XdKXdKXXXXXKkloxOxdkOxkoXX                          " << endl;
                    cout << "                      cO      dxoXoXXKd0xXoXXXXXXOcOO0X0d0XXkkoX0                          " << endl;
                    cout << "                      cO      OxlodXXXllXdXXXXXXXkckO0XXXoXXkkox.                          " << endl;
                    cout << "                      cO      ,xl:XXXo.dxddOoOOOOOxck0XXO:XXkkc                            " << endl;
                    cout << "                      cO       xl','. :OdoOX;dOOOOOOclxl0l0l.kc                            " << endl;
                    cout << "                      cO       xl     xd0dKKdoXXXXXXox0XOk:  kc                            " << endl;
                    cout << "                      cO       xl     0oXoX0xoXXXXXXox0XXXd  kc                            " << endl;
                    cout << "                    ookKooooooo0OoooooXoXOXX0OXXXXXXO0KXXX0ooKkooooo                       " << endl;
                    cout << "\nSos hábil tirador, te comiste un garrón de la gran flauta. Cadena perpetua." << endl;
                     
                    break;
                } else if (opcion2 == 2) 
                {
                    cout << ";:.   .:lol:.             " << endl;
                    cout << "          'dKNNXOl.                                          .;'    .kNNNNWNNk.           " << endl;
                    cout << "        .l0OXWWWWWNd                                 ...      ..   kkdc:,,,,,,           " << endl;
                    cout << "       'NWWNkOWWKOO0c                         ...    ''.      ,,.   .   .cxl .o.          " << endl;
                    cout << "       lKkOdxcOkkkxdx.                   ...  ...       .''.      OkOl'.,c:;:,.          " << endl;
                    cout << "        ,Nx0ONX:NkO':O                   ...      .;;.  ..        .kONNNKKN0Ox;          " << endl;
                    cout << "       ;ccO0NNNKko:N0.                   ... ;;;D    ..  .lkKXXXKko,,kkNWWo. ;X           " << endl;
                    cout << "    c0XlNokkNNNKd00o,.              '.,  ...   .;;'D.,,l0NNNWWNKkkOOkdcoON0KKO'   '.      " << endl;
                    cout << "  :XNNNkkNdoxNNkOOO.    .'o::;;;;;c;KN0c,  ;:,D    .'';NNNNNNOxONNNNNNxc  ...    lxcdl.   " << endl;
                    cout << " dNNNNNXxONdc;c:kOc     .kkkxxOOkOO:dXd;      ':;.D .lONNNNOxKNWNNWNNNN.c d     'Xkcoo0.  " << endl;
                    cout << "oNNNNNNXdddOxxo       'ONNKkd'o.     '   .::.D    ;;,dNNNNd0NNNNNNOkONd0Kx;x.   .d0kNk:   " << endl;
                    cout << "NNX0NNNNNxkNoNX    ;ocNNNNXkl.        .::,   ';;.D   0NNNlNNNNOkxcxOklNNNOdxK. :XN0k;     " << endl;
                    cout << "NNNOxNNNNNKd;Ok:dKXlNkONNNKx.              ,,'   .''..0NNcNNNNNNNNNNOkNN0od0NoKNNNX;      " << endl;
                    cout << "NNNNXdONNNXxKNNNNNN0d0..'...               ..    ...   'lolkkk0KXXXKOcOl ;XNNNNNNk.       " << endl;
                    cout << "NNNNNN0xKNNNNNNNNXk:                                     cNNNNK00000KNk    ckKKx'         " << endl;
                    cout << "NNNNNNNNOxkKXKxc.                                        dkONNNNNNNNNk                    " << endl;
                    cout << "NNNNNNNNNNNddK,                              cc.        .NNXOOOOOOOko                     " << endl;
                    cout << "NNNNNNNNNNNoNN.                            ,KNNdo,      .d0NNNNNNNNNNKkc'                 " << endl;
                    cout << "NNNNNNNNNNNlNN                           .kNN0dNNNKl.  'XN0kkk0NNNNNNNNNNNx.              " << endl;
                    cout << "NNNNNNNNNNNlNK                          ;NO:. oXNNNNNk:NNNNNX,  .;lx0NNNNNNX,             " << endl;
                    cout << "..,:clloool.,.                          ,.      :ONNNNNNNNNx.         .kNNNNN:            " << endl;
                    cout << "                                                  .cONNNNx.             cNNNNNo   .cd     " << endl;
                    cout << "                                                      ..                 .KNNNkldONO.     " << endl;
                    cout << "                                                                           odkXNNx'       " << endl;
                    cout << "                                                                             dO:          " << endl;
                    cout << "\nLe vaciaste todo el cargador" << endl;
                    cout << "Presiona Enter para continuar..." << endl;
                    cin.ignore();
                    cin.get();
                    balas = 10;
                    cout << "                    ................................................                      " << endl;
                    cout << "                    ookKooooooo0OoooooooooooooooooooO0oooooooKkooooo                      " << endl;
                    cout << "                      cO       xl       .;clc,.     ox       kc                            " << endl;
                    cout << "                      cO       xl     'kXXXXXX0x.   ox       kc                            " << endl;
                    cout << "                      cO       xl    'X0OO0XXXdXO   ox       kc                            " << endl;
                    cout << "                      cO       xl    :KOXO00KXKdko. ox       kc                            " << endl;
                    cout << "                      cO       xl    .x:KXkk0XXXXK. ox       kc                            " << endl;
                    cout << "                      cO       xl     koK0x0XXXxo.  ox       kc                            " << endl;
                    cout << "                      cO       xl     .ddkOkkXKoXl0oox       kc                            " << endl;
                    cout << "                      cO       xl     .kXXXKKkxXkOXXox0Oo,   kc                            " << endl;
                    cout << "                      cO       xl   .xXOkxOxoOXkkXXxox0XXX0, kc                            " << endl;
                    cout << "                      cO       xl  'XXXXXlXlXKxkXXkOox0XXXXX,kc                            " << endl;
                    cout << "                      cO       xl  kXkXXXd0KddOXXxOXox0XxXXXkkc                            " << endl;
                    cout << "                      cO       xl .XXlXXXXoXd0XXd0XXox0XlXXXkkc                            " << endl;
                    cout << "                      cO     .:xo.:KXoXXXXKcKX0dXXXXox0XlXXXkkl.                           " << endl;
                    cout << "                      cO    .X0OOcXoXoXXXXoXXkkXXXXXox0XoXXXkkok                           " << endl;
                    cout << "                      cO    .X0xx:dkXoXXXoXXx0XXXXXXox0XoXXKdkoXl                          " << endl;
                    cout << "                      cO     c0doockkd0XdKXdKXXXXXKkloxOxdkOxkoXX                          " << endl;
                    cout << "                      cO      dxoXoXXKd0xXoXXXXXXOcOO0X0d0XXkkoX0                          " << endl;
                    cout << "                      cO      OxlodXXXllXdXXXXXXXkckO0XXXoXXkkox.                          " << endl;
                    cout << "                      cO      ,xl:XXXo.dxddOoOOOOOxck0XXO:XXkkc                            " << endl;
                    cout << "                      cO       xl','. :OdoOX;dOOOOOOclxl0l0l.kc                            " << endl;
                    cout << "                      cO       xl     xd0dKKdoXXXXXXox0XOk:  kc                            " << endl;
                    cout << "                      cO       xl     0oXoX0xoXXXXXXox0XXXd  kc                            " << endl;
                    cout << "                    ookKooooooo0OoooooXoXOXX0OXXXXXXO0KXXX0ooKkooooo                       " << endl;
                    cout << "\nNo demostraste tu estado de locura y de inconsciencia temporal, sos imputable. Cadena perpetua." << endl;
                    cout << "\nPresiona Enter para continuar..." << endl;
                    cin.ignore();
                    cin.get();
                    system("clear");

                    break;
                } else if (opcion2 == 3) 
                {
                    balas = 10;
                    zapatearYMear = true;
                   
                    cout << "     ;:.   .:lol:.             " << endl;
                    cout << "          'dKNNXOl.                                          .;'    .kNNNNWNNk.           " << endl;
                    cout << "        .l0OXWWWWWNd                                 ...       ..   kkdc:,,,,,,           " << endl;
                    cout << "       'NWWNkOWWKOO0c                         ...    ''.      ,,.   .   .cxl .o.          " << endl;
                    cout << "       lKkOdxcOkkkxdx.                   ...  ...       .''.       OkOl'.,c:;:,.          " << endl;
                    cout << "        ,Nx0ONX:NkO':O                   ...      .;;.   ..        .kONNNKKN0Ox;          " << endl;
                    cout << "       ;ccO0NNNKko:N0.                   ... ;;;     ..  .lkKXXXKko,,kkNWWo. ;X           " << endl;
                    cout << "    c0XlNokkNNNKd00o,.              '.,  ...   .;;' .,,l0NNNWWNKkkOOkdcoON0KKO'   '.      " << endl;
                    cout << "  :XNNNkkNdoxNNkOOO.    .'o::;;;;;c;KN0c,  ;:,     .'';NNNNNNOxONNNNNNxc  ...    lxcdl.   " << endl;
                    cout << " dNNNNNXxONdc;c:kOc     .kkkxxOOkOO:dXd;      ':;.  .lONNNNOxKNWNNWNNNN.c d     'Xkcoo0.  " << endl;
                    cout << "oNNNNNNXdddOxxo       'ONNKkd'o.     '   .::.     ;;,dNNNNd0NNNNNNOkONd0Kx;x.   .d0kNk:   " << endl;
                    cout << "NNX0NNNNNxkNoNX    ;ocNNNNXkl.        .::,   ';;.    0NNNlNNNNOkxcxOklNNNOdxK. :XN0k;     " << endl;
                    cout << "NNNOxNNNNNKd;Ok:dKXlNkONNNKx.              ,,'   .''..0NNcNNNNNNNNNNOkNN0od0NoKNNNX;      " << endl;
                    cout << "NNNNXdONNNXxKNNNNNN0d0..'...               ..    ...   'lolkkk0KXXXKOcOl ;XNNNNNNk.       " << endl;
                    cout << "NNNNNN0xKNNNNNNNNXk:                                     cNNNNK00000KNk    ckKKx'         " << endl;
                    cout << "NNNNNNNNOxkKXKxc.                                        dkONNNNNNNNNk                    " << endl;
                    cout << "NNNNNNNNNNNddK,                              cc.        .NNXOOOOOOOko                     " << endl;
                    cout << "NNNNNNNNNNNoNN.                            ,KNNdo,      .d0NNNNNNNNNNKkc'                 " << endl;
                    cout << "NNNNNNNNNNNlNN                           .kNN0dNNNKl.  'XN0kkk0NNNNNNNNNNNx.              " << endl;
                    cout << "NNNNNNNNNNNlNK                          ;NO:. oXNNNNNk:NNNNNX,  .;lx0NNNNNNX,             " << endl;
                    cout << "..,:clloool.,.                          ,.      :ONNNNNNNNNx.         .kNNNNN:            " << endl;
                    cout << "                                                  .cONNNNx.             cNNNNNo   .cd     " << endl;
                    cout << "                                                      ..                 .KNNNkldONO.     " << endl;
                    cout << "                                                                           odkXNNx'       " << endl;
                    cout << "                                                                             dO:          " << endl;
                    cout << "\nPresiona Enter para continuar..." << endl;
                    cin.ignore(); 
                    cin.get(); //Presiona Enter   
                    system("clear");

                    cout << "                                     .,lxxdl'                                             " << endl;
                    cout << "                                   .oNWWWWWkWK;                                           " << endl;
                    cout << "                                   KNKXWWWWoWWK.                                          " << endl;
                    cout << "                                  .WNKKN0KWOkd0x                                          " << endl;
                    cout << "                                   dxoOod0WWNWOkk0kdc'                                    " << endl;
                    cout << "                                   'xoWNkKWWWKxcWWWWWWNkc.                                " << endl;
                    cout << "                                    ;kkoOdOWNoXxWWWWWWWWWWk;                              " << endl;
                    cout << "                                     ckNWNXxlOOWWWWWKXWWWWWW0.                            " << endl;
                    cout << "                                       .cOKWWWWWWWWWWKOkXWWWWN.                           " << endl;
                    cout << "                                        cXkWWWWWWWWWWWWW.:WWWWd                           " << endl;
                    cout << "                               ;Ol00c:oo0WdNWWWWWWWWWWWWc xWWWX                           " << endl;
                    cout << "                               ,dl,KXxWWWWOKWWWWWWWWWWWWx 'WWWW.                          " << endl;
                    cout << "                                ;:ck;dxxdl'NWWWWWWWWWWWWx .0000;                          " << endl;
                    cout << "                                        'lO0000000000000. K0WWW0                          " << endl;
                    cout << "                                    .:xXWWWWWNNWWWWWWWWo  ,x00l;                          " << endl;
                    cout << "                                   .KWWWWWWWNO;0WWWWWWx                                   " << endl;
                    cout << "                                   0WWWWWOo,. :WWWWWWk                                    " << endl;
                    cout << "                                  kWWWWWc     XWWWWWO                                     " << endl;
                    cout << "                          .kk0d' lWWWWWc      XWWWWWc                                     " << endl;
                    cout << "                       .'  oNk0W0xOkNWl       .XWWWWW;                                    " << endl;
                    cout << "                        .;, :KKxKWWWxc         .KWWWWN,                                   " << endl;
                    cout << "                           ,  'odd0Wx   ',      .0WWWWK.                                  " << endl;
                    cout << "                        .''''.  .ox: .,'.        .k00OKX.                                 " << endl;
                    cout << "                             ..      .'''.    .cx0ONWWN0x                                 " << endl;
                    cout << "                         .'''..', : .''.     .00000Oo'.,.                                 " << endl;
                    cout << "                               .   .           ....                                       " << endl;
                    cout << "\nDemostraste tu estado de locura e inconsciencia temporal" << endl;
                    cout << "Presiona Enter para continuar..." << endl;
                    cin.ignore(); 
                     
                   

                }
                else if (opcion2 == 4)
                {
                    cout << "                                                                                          " << endl;
                    cout << "                          ...                       '''.''.                               " << endl;
                    cout << "                       .dKNNNNKo.                 ;'      .;.                              " << endl;
                    cout << "                      ,XNNNNNNXOx.               l      ... c                              " << endl;
                    cout << "                      0NNNXOKKxKXK'             ::'''''..  .,;                             " << endl;
                    cout << "                     .XNNNk0:XKx:K;             :''''',c''.'l.                             " << endl;
                    cout << "                     oONNNNXdNKk:'               ;l; okk  :XNl                             " << endl;
                    cout << "                       KNNNNNN0Kkloc',.           ,'xlccdKNN; ''''''                       " << endl;
                    cout << "                       .dxdONNKlO0co:cdkd.        ,dkkO0NNNl        ',.                    " << endl;
                    cout << "                           ',ocXodNNNXdoXX;..   .,.,0xOkXO;           ';                   " << endl;
                    cout << "                          .X,,Kc0NNNNNN0cNO .'''.    ,:;.               c                  " << endl;
                    cout << "                    .     OK:klXNNNNNNNNO.     :.    .           ;       c.                " << endl;
                    cout << "                 .:kkOd. .X:odNNNKcNNNNNN:.'   ,XO:   :.          :.      c.               " << endl;
                    cout << "                 .l.,KNNodc;ONNNNN;NNNNNNK  .'''.dXXd. ;.          :,'     l               " << endl;
                    cout << "                      ,c'O,XNNNNNNcKNNNNNN'       .lKNO;..     .'''.       l               " << endl;
                    cout << "                        .:XNNNNN0xlokNNNNN;          ;dlc:XX0xl.         .;.               " << endl;
                    cout << "                        .:K0ddxxOXNNNNNNNX.            o0kNNNNNc    .''''.,                " << endl;
                    cout << "                     'okOOO00:XNNNNNNNNXxl              ,dkXXNk..''..     .:               " << endl;
                    cout << "                  ,:oo0ONNNXd;cNNNNKxxdxKN'               .','            .l               " << endl;
                    cout << "                 ;X..',0:ocxX0.xxxxkXNNNNNc               ;.  .'''.''''''' ,               " << endl;
                    cout << "                 xx     ldONNNXXNNNNNNNNNNx             ';                 .;              " << endl;
                    cout << "                 X:     XNNNNNNNNNNNNNNNNNK            :.       .:          c              " << endl;
                    cout << "                'N.    .NNNNNNNNNNNNNNNNNNN          .;         .;:.         c             " << endl;
                    cout << "                oO     ,NNNNNNNNNNNNNNNNNNN.        ',        .,.  .;        ;.            " << endl;
                    cout << "                Kl     lNNNNNNNNNNNNNNNNNNN,        c       .;.     .:        l            " << endl;
                    cout << "               .N.     xNNNNNNNNNNNNNNNNNNN:       .;      .:         :.       ',          " << endl;
                    cout << "               cK      0NNNNNNNNNNNNNNNNNNNl        c       l          ';        ',.       " << endl;
                    cout << "               Od      XNNNNNNNNNNNNNNNNNNNo        l       l            ,,        .,.     " << endl;
                    cout << "               X;      NNNNNNNNNNNNNNNNNNNNd        l       l              o.        ,c    " << endl;
                    cout << "\nEl chorro te apuñaló por la espalda. Eso te pasa por tenerle piedad al chorro hijo de p#ta" << endl;  
                    cout << "Presiona Enter para continuar..." << endl;
                    cin.ignore(); 
                    cin.get(); //Presiona Enter   
                    system("clear");

                    cout << "                                                                                          " << endl;
                    cout << "                                                                                          " << endl;
                    cout << "                                                                                          " << endl;
                    cout << "                                                                                          " << endl;
                    cout << "                                        .,'',,,'..                                        " << endl;
                    cout << "                                    .;,'.     .';l:''                                     " << endl;
                    cout << "                                  .:,             ,c.,;                                   " << endl;
                    cout << "                                 .l                 l. c.                                 " << endl;
                    cout << "                                 d                   d  l                                 " << endl;
                    cout << "                                ';                   c. ;.                                " << endl;
                    cout << "                                ,,   RRRR  I  PPPP   :' ;.                                " << endl;
                    cout << "                                ,,   R  R  I  P PP   :' ;.                                " << endl;
                    cout << "                                ,,   RRRR  I  PPP    :. ;.                                " << endl;
                    cout << "                                ,,   R  RR I  P      :' ;.                                " << endl;
                    cout << "                                ,,                   :' ;.                                " << endl;
                    cout << "                                ,,                   :' ;.                                " << endl;
                    cout << "                                ,,                   :' ;.                                " << endl;
                    cout << "                                ,,                   :' ;.                                " << endl;
                    cout << "                                ,,                   :' ;.                                " << endl;
                    cout << "                               .c:...................l:':,'.                               " << endl;
                    cout << "                            .oc,',,,,,,,,,,,,,,,,,,,,,';,'',c                              " << endl;
                    cout << "                            .c                         ,.  .c                              " << endl;
                    cout << "                            .c                         ;'.'''                              " << endl;
                    cout << "                             '''''''''''''''''''''''''''.                                 " << endl;
                    cout << "                                                                                          " << endl;
                    cout << "                                                                                          " << endl;
                    cout << "                                                                                          " << endl;
                    cout << "\n Fallesiste a tus tempranos 82 años de edad" << endl;
                    cout << "Presiona Enter para continuar..." << endl;
                    cin.ignore(); 
                     
                
                    break;
                    
                    
                }

                // Nivel 3
                cout << "                                                      ','..                             " << endl;
                cout << "                                                     ;'c,.                                " << endl;
                cout << "                                                    ;:.   ....                            " << endl;
                cout << "                                                   . .::,,'  ....                         " << endl;
                cout << "                       ..                         ;o.;x,  ';;;.                           " << endl;
                cout << "                     .oxk0kc.  '.  .              OXOl,o,.:x'.;:                          " << endl;
                cout << "                    'dxk0XXX: :Xc ,Xo ,Oc 'd'.lc' kXKxdOKo';.,lkc                         " << endl;
                cout << "                    .;'.;kXK. kX. kX. kX. kk ..;dOcd0kdxXKKXKdko.                         " << endl;
                cout << "                       'c;'   .'. ;l. d0  l,kOo;. .,;oddxdl;.                             " << endl;
                cout << "                                        .:'. 'cxKkl' .,oOOl.                              " << endl;
                cout << "                                        ,lkKkc' .,o0Kd;. 'oc.                             " << endl;
                cout << "                                     :0xc' .,oOKx:. .lOKd. ,dKl                           " << endl;
                cout << "                                  .;,..;o0Kx:. .ckKk:. 'o,OKl. .'                         " << endl;
                cout << "                               .;dKXXKOo,..ckKkc. .cOKd'  :. :OKx.                        " << endl;
                cout << "                             ,dKXXXXXXXXXKxc..:kKk:. 'l.    :K:..;o,                      " << endl;
                cout << "                          .o0XXXXXXKKxclOXXXXkc..l0Kc        ..oKkc,                      " << endl;
                cout << "            .co;       .:OXXXXKXKKd;.   ;KXXXXXKx' ;.         .l' 'lxx,                   " << endl;
                cout << "            ,XXXO'   'dKXXXXKXKx;.     ;KXXXXKXKd.               lKKKKKKo.                " << endl;
                cout << "             dXXXKc .kXXXKKKk:.       cKKKKKKK0,                 OKo0Kx0oO,               " << endl;
                cout << "              :0XXXd  oXXKo.         lXKKKKKKd.                  ;K..xO:K'.               " << endl;
                cout << "               .cdxOk. l:.          dXKKKKK0;                        .o...                " << endl;
                cout << "                 'kKK;            .kKK0O0Kx.                                              " << endl;
                cout << "                   .             .llddxxd:                                                " << endl;
                cout << "                                .;oKXXKKKo                                                " << endl;
                cout << "                               cKkoKKKKx;                                                 " << endl;
                cout << "                               .ldl.'.                                                    " << endl;
                cout << "\nNivel 3: Ya mataste al chorro, lo zapateaste arriba y lo measte. ¿Qué hacés ahora?" << endl;
                cout << "1. Llamar a la policía y entregarte" << endl;
                cout << "2. Tomarte media botella de Chivas Regal y agarrar un sobre de cocaína y papotearte" << endl;
                cout << "3. Elegis enterrar al chorro en el patio" << endl;
                cout << "Elegí una opción: ";
                opcion3 = leerOpcion();
                system("clear");

                if (opcion3 == 1) 
                {
                    seEntrego = true;
                    cout << "                    ................................................                      " << endl;
                    cout << "                    ookKooooooo0OoooooooooooooooooooO0oooooooKkooooo                      " << endl;
                    cout << "                      cO       xl       .;clc,.     ox       kc                            " << endl;
                    cout << "                      cO       xl     'kXXXXXX0x.   ox       kc                            " << endl;
                    cout << "                      cO       xl    'X0OO0XXXdXO   ox       kc                            " << endl;
                    cout << "                      cO       xl    :KOXO00KXKdko. ox       kc                            " << endl;
                    cout << "                      cO       xl    .x:KXkk0XXXXK. ox       kc                            " << endl;
                    cout << "                      cO       xl     koK0x0XXXxo.  ox       kc                            " << endl;
                    cout << "                      cO       xl     .ddkOkkXKoXl0oox       kc                            " << endl;
                    cout << "                      cO       xl     .kXXXKKkxXkOXXox0Oo,   kc                            " << endl;
                    cout << "                      cO       xl   .xXOkxOxoOXkkXXxox0XXX0, kc                            " << endl;
                    cout << "                      cO       xl  'XXXXXlXlXKxkXXkOox0XXXXX,kc                            " << endl;
                    cout << "                      cO       xl  kXkXXXd0KddOXXxOXox0XxXXXkkc                            " << endl;
                    cout << "                      cO       xl .XXlXXXXoXd0XXd0XXox0XlXXXkkc                            " << endl;
                    cout << "                      cO     .:xo.:KXoXXXXKcKX0dXXXXox0XlXXXkkl.                           " << endl;
                    cout << "                      cO    .X0OOcXoXoXXXXoXXkkXXXXXox0XoXXXkkok                           " << endl;
                    cout << "                      cO    .X0xx:dkXoXXXoXXx0XXXXXXox0XoXXKdkoXl                          " << endl;
                    cout << "                      cO     c0doockkd0XdKXdKXXXXXKkloxOxdkOxkoXX                          " << endl;
                    cout << "                      cO      dxoXoXXKd0xXoXXXXXXOcOO0X0d0XXkkoX0                          " << endl;
                    cout << "                      cO      OxlodXXXllXdXXXXXXXkckO0XXXoXXkkox.                          " << endl;
                    cout << "                      cO      ,xl:XXXo.dxddOoOOOOOxck0XXO:XXkkc                            " << endl;
                    cout << "                      cO       xl','. :OdoOX;dOOOOOOclxl0l0l.kc                            " << endl;
                    cout << "                      cO       xl     xd0dKKdoXXXXXXox0XOk:  kc                            " << endl;
                    cout << "                      cO       xl     0oXoX0xoXXXXXXox0XXXd  kc                            " << endl;
                    cout << "                    ookKooooooo0OoooooXoXOXX0OXXXXXXO0KXXX0ooKkooooo                       " << endl;
                    
                    cout << "\nTe entregaste. Fuiste condenado a cadena perpetua por homicidio." << endl;
                    cin.ignore(); 
                    cin.get(); //Presiona Enter   
                    system("clear");
                } else if (opcion3 == 2) 
                {
                    for (int i = 0; i < 10; i++) 
                    {
                        tragos++;
                    }
                    alcohol = 1.0;
                    cocainaEnSangre = true;
                }
                else if (opcion3 == 3) 
                {

                    cout << "                                                                                          " << endl;
                    cout << "                                                                                          " << endl;
                    cout << "                                                            .dol:,.                       " << endl;
                    cout << "                                                            c'  .,0.                      " << endl;
                    cout << "                                                            .o  ;l.                       " << endl;
                    cout << "                                                             Ol:                          " << endl;
                    cout << "                                                            .O.                           " << endl;
                    cout << "                                                            0l                            " << endl;
                    cout << "                                                           o0                             " << endl;
                    cout << "                                                          .X.                             " << endl;
                    cout << "                   0x .Ko .Kc .K: .K: 'K, 'K;             Ol                               " << endl;
                    cout << "                 ..XK ,XO ;Xx cXd.cXd.lXl cXo            c0                                " << endl;
                    cout << "                 ,,XK.:XO':Xx,lXd,lXd,oXl,lXd,          .O.                                " << endl;
                    cout << "                  .XK 'XO ,Xx :Xd cXd lXc :k:           kc                                 " << endl;
                    cout << "                  .XK 'XO ,Xx :Xd cXd l0::xKkc'.   .Kkl:O.                                 " << endl;
                    cout << "                 :;XK,:XO,cXx;lXd:lXl'lkKXKO    .  OXX00:XXO.                              " << endl;
                    cout << "                  .0O .0x '0d ;0l ,lkXXXXKo         :XXxXXXc                               " << endl;
                    cout << "                                .;xXXXX0Oc.          .:kXXo.                               " << endl;
                    cout << "                 ......'',,;::,oKXKXKXX.                .:,c:;;,'.......                   " << endl;
                    cout << "               ...';;:looxdloxO00d,.;..                     ;codolc:;,....                 " << endl;
                    cout << "             ....,;:loxxxdxOo,.                                    ..                     " << endl;
                    cout << "               ....';::lldxxxkooddkoodd::::,,,''''''''.'''''........                      " << endl;
                    cout << "                   ......'',,;;::c::ccccc::;;;;,,,,''''.........                           " << endl;
                    cout << "                              ..............                                               " << endl;
                    cout << "                                                                                " << endl;
                    cout << "\nEn medio de la noche, sin que tus vecinos lo noten, arrastras el cadaver al patio, agarras una pala y lo enterras en un pozo poco profundo." << endl;
                    cout << "\nPresiona Enter para continuar..." << endl;
                        cin.ignore(); 
                        cin.get();   // Presiona Enter 
                        system("clear");

                    cout << "                                                  ldkOOOOkxo:.                            " << endl;
                    cout << "                                             .lx0WWWWWWWWWWWWWWNxcc,                      " << endl;
                    cout << "                                            :KcXWWWWWWWWWWWWWWW0lWWWK;                    " << endl;
                    cout << "                                          .ON,NN0WWWWWWWXWWWWWWWcoWWWWXo.                 " << endl;
                    cout << "                                         .NWlO;,.WWWWWW0oloKWWWWK'WWWWWWWk                " << endl;
                    cout << "                                         cWW;Kd.xWWWWWWK, .,NWWW0,WWWWWWWWo               " << endl;
                    cout << "                                  .       dWcld0WWWWWWWWWWWWWWWWcdWWWWWWWX.               " << endl;
                    cout << "                               .OWWWO.    .K,c:,;cxWWWWWWWWWWWWW,0WWWWWNl                 " << endl;
                    cout << "                               oWWWWWXc'.. 'K .    dWWWWWWWWWWWWolWWWWl                   " << endl;
                    cout << "                               .dWWWWWWWWWdoWo   .:NWWWWWK:cKX0dxdxdo;                    " << endl;
                    cout << "                               XNWWWWXKXNWN,0WK.kNWWWWWO:dXK0O0WWWWWk,.                   " << endl;
                    cout << "                               cXWWK;     ..  c   .l:;cxWWWWWWWWWWW0:k0.                  " << endl;
                    cout << "                                 .           .;,'',o  ;l.:dddkWWWWXd'WWNo                 " << endl;
                    cout << "                                              codddddo'lXWWWWOcNWWWO:WWWWx                " << endl;
                    cout << "                                               x lookK0;KWWWWWNxxxdOWWWWWN                " << endl;
                    cout << "                                              ,WdcWWWWWWWWWWWWWWWWWWWWWWWW0x.             " << endl;
                    cout << "                                              OWWOKWWWWWWWWWWWWWWWWWWWWWWWWWWo            " << endl;
                    cout << "                                              WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWX,          " << endl;
                    cout << "                                              WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWo         " << endl;
                    cout << "                                             .WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWO        " << endl;
                    cout << "                                             .WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWK.      " << endl;
                    cout << "                                              OWWWWWWWWWWWWWWWWWWWWWWWWWWWdKWWWWWWWK.     " << endl;
                    cout << "                                              .NWWWWWWWWWWWWWWWWWWWWWWWWWX'WWWWWWWWW0     " << endl;
                    cout << "                                               ;WWWxWWWWWWWWWWWWWWWWWWWWW,0WWWWWWWWWWo    " << endl;
                    cout << "                                                NWWX:0WWWWWWWWWokWWWWWWWW.KWWWWWWWWWWW.   " << endl;
                    cout << "                                                KWWWN.XWWWWWWWWW.NWWWWWWW.0WWWWWWWWWWWo   " << endl;

                    cout << "\nSemanas después el perro del vecino encontró los huesos del chorro..." << endl;
                    
                    cout << "\nPresiona Enter para continuar..." << endl;
                        cin.ignore(); 
                        
                        system("clear");

                    cout << "                    ................................................                      " << endl;
                    cout << "                    ookKooooooo0OoooooooooooooooooooO0oooooooKkooooo                      " << endl;
                    cout << "                      cO       xl       .;clc,.     ox       kc                            " << endl;
                    cout << "                      cO       xl     'kXXXXXX0x.   ox       kc                            " << endl;
                    cout << "                      cO       xl    'X0OO0XXXdXO   ox       kc                            " << endl;
                    cout << "                      cO       xl    :KOXO00KXKdko. ox       kc                            " << endl;
                    cout << "                      cO       xl    .x:KXkk0XXXXK. ox       kc                            " << endl;
                    cout << "                      cO       xl     koK0x0XXXxo.  ox       kc                            " << endl;
                    cout << "                      cO       xl     .ddkOkkXKoXl0oox       kc                            " << endl;
                    cout << "                      cO       xl     .kXXXKKkxXkOXXox0Oo,   kc                            " << endl;
                    cout << "                      cO       xl   .xXOkxOxoOXkkXXxox0XXX0, kc                            " << endl;
                    cout << "                      cO       xl  'XXXXXlXlXKxkXXkOox0XXXXX,kc                            " << endl;
                    cout << "                      cO       xl  kXkXXXd0KddOXXxOXox0XxXXXkkc                            " << endl;
                    cout << "                      cO       xl .XXlXXXXoXd0XXd0XXox0XlXXXkkc                            " << endl;
                    cout << "                      cO     .:xo.:KXoXXXXKcKX0dXXXXox0XlXXXkkl.                           " << endl;
                    cout << "                      cO    .X0OOcXoXoXXXXoXXkkXXXXXox0XoXXXkkok                           " << endl;
                    cout << "                      cO    .X0xx:dkXoXXXoXXx0XXXXXXox0XoXXKdkoXl                          " << endl;
                    cout << "                      cO     c0doockkd0XdKXdKXXXXXKkloxOxdkOxkoXX                          " << endl;
                    cout << "                      cO      dxoXoXXKd0xXoXXXXXXOcOO0X0d0XXkkoX0                          " << endl;
                    cout << "                      cO      OxlodXXXllXdXXXXXXXkckO0XXXoXXkkox.                          " << endl;
                    cout << "                      cO      ,xl:XXXo.dxddOoOOOOOxck0XXO:XXkkc                            " << endl;
                    cout << "                      cO       xl','. :OdoOX;dOOOOOOclxl0l0l.kc                            " << endl;
                    cout << "                      cO       xl     xd0dKKdoXXXXXXox0XOk:  kc                            " << endl;
                    cout << "                      cO       xl     0oXoX0xoXXXXXXox0XXXd  kc                            " << endl;
                    cout << "                    ookKooooooo0OoooooXoXOXX0OXXXXXXO0KXXX0ooKkooooo                       " << endl;
                    
                    cout << "\nTe descubrieron. Fuiste condenado a cadena perpetua por homicidio." << endl;
                    
                        cin.ignore(); 
                       
                     
                    break;
                }
            
                // Evaluación final (solo si NO se entregó)
                if (!seEntrego) 
                {
                    if (cocainaEnSangre || zapatearYMear) 
                    {
                        cout << "           'kxc,.                                                                          " << endl;
                        cout << "         ;WWWWWWXkl,.                                                                     " << endl;
                        cout << "         KWWWWWWWWWWWWXOxolc::;;,,,.                   :....;                             " << endl;
                        cout << "         ':lkKWWWWWWWWWWWWWWWWWWWWWWNkc'               c    '.                            " << endl;
                        cout << "               .,cd0WWWWWWWWWWWWXOKKKKNWW0:            l''''l                             " << endl;
                        cout << "                    .lKWWWWWWWd..lN0xXXl'dNK:          l    c                             " << endl;
                        cout << "                       .:dkKNWWO, .KO oWd  ;OXc       'c'...,c                            " << endl;
                        cout << "                             'oKWXl.Nc ,Wx    .       l      o                            " << endl;
                        cout << "                                ,xNX'l  ,K;           l      l                            " << endl;
                        cout << "                                   .                .':  ''. ,,.                          " << endl;
                        cout << "                                                  .;'          .;.                        " << endl;
                        cout << "                                                 .;              ',                       " << endl;
                        cout << "                                                 l       ...      l                       " << endl;
                        cout << "                                                 c   ','.co.';,   l                       " << endl;
                        cout << "                                                 l  ol:,';:';;lo. l                       " << endl;
                        cout << "                                 lx0OOkl         l.c'c;;::'l:;,;,'l                       " << endl;
                        cout << "                                 .kxKxx.         l ;::.,;cl;;.;:c c                       " << endl;
                        cout << "                                 .dolcdc,,       l :;'...;c.'.';: l                       " << endl;
                        cout << "                                dWKWXNkXl'       l .c..........c. l                       " << endl;
                        cout << "                               kWWWWWWWWW;       l  :.,''..','';. l                       " << endl;
                        cout << "                              .WWWWWWWWWWX       c      ....      l                       " << endl;
                        cout << "                               kWWWWWWWWWd       :.               l                       " << endl;
                        cout << "           .''''''''''''''''''''.',;;,,'.''''''''';'''''''''''''','''''''''''.            " << endl;
                        cout << "\nTe tomaste media botella y te papoteaste." << endl;
                        cout << "Presiona Enter para continuar..." << endl;
                        cin.ignore(); 
                        cin.get();   // Presiona Enter 
                        system("clear");
                        cout <<"                                   .lloddoll.                                    " << endl;
                        cout << "        lk                     llodxdoooooooo                    .00K           " << endl;
                        cout << "        ;x                    cxxxxdddddddollxd                   ...           " << endl;
                        cout << "        ;x.                  kxdxdddddddoollllc;                 ,. ''          " << endl;
                        cout << "        ;x.                 .koooooddolc::::;;,l;                ,   ,          " << endl;
                        cout << "        k00W0                xllcloo:;,..'co,...'               Kc . oK         " << endl;
                        cout << "      ;0:x;lx0kl             olclll:;,;',codd;'';             .l       o        " << endl;
                        cout << "      ;klkdoO,.,            ;:clllloolloocoooc;;c             ,  ..:.. ..       " << endl;
                        cout << "      ;d d.XKo              .c:coolllooc;:;'''',c             ,.::,;;;:.        " << endl;
                        cout << "           .'.d0XXx          .oollclllc;cc;,'.'',             '.:.,c,.:'        " << endl;
                        cout << "              .'..;             ,ccccc;;,'.....'.             ' ;.....;.        " << endl;
                        cout << "                                .c;:c:;::;,''''.              '        .        " << endl;
                        cout << "                                  ccc;;:c::;;,.                                  " << endl;
                        cout << "                                                                                " << endl;
                        cout << "                                                                                " << endl;
                        cout << "                                                                                " << endl;
                        cout << "  M; .0l   N. KN  Nl   .kK  lxkkk. ;N.  'N. OKK00x  ;Xd    cxkkd'  0c    ;MMMMk " << endl;
                        cout << "  M, .MMx  W. MM  MMK  XMM' O0,,xO ,M.  lM  ..Kx    OXNO   k0,,kM. Mo    ;M...  " << endl;
                        cout << "  M: .WoNx,M. 0M  KxxXkKlW. OK;:x; ,M.  ,M    0d   'W.,W   kXddOo  M:    ;Mxdd  " << endl;
                        cout << "  M,  K. OKW  NM  Xo XM; W. Oo     'M.  cW    0d  .N0ddX0  kx  .M; M:    ;M     " << endl;
                        cout << "  k'  0,  ;O  KN  0: 'd  N. o.      ;kxxx'    dc  lx   .O; okddxl  Oxddd '0ddd: " << endl;

                        cout << "\nSos inimputable hermano!!" << endl;
                    } else 
                    {
                        cout << "................................................                      " << endl;
                        cout << "                    ookKooooooo0OoooooooooooooooooooO0oooooooKkooooo                      " << endl;
                        cout << "                      cO       xl       .;clc,.     ox       kc                            " << endl;
                        cout << "                      cO       xl     'kXXXXXX0x.   ox       kc                            " << endl;
                        cout << "                      cO       xl    'X0OO0XXXdXO   ox       kc                            " << endl;
                        cout << "                      cO       xl    :KOXO00KXKdko. ox       kc                            " << endl;
                        cout << "                      cO       xl    .x:KXkk0XXXXK. ox       kc                            " << endl;
                        cout << "                      cO       xl     koK0x0XXXxo.  ox       kc                            " << endl;
                        cout << "                      cO       xl     .ddkOkkXKoXl0oox       kc                            " << endl;
                        cout << "                      cO       xl     .kXXXKKkxXkOXXox0Oo,   kc                            " << endl;
                        cout << "                      cO       xl   .xXOkxOxoOXkkXXxox0XXX0, kc                            " << endl;
                        cout << "                      cO       xl  'XXXXXlXlXKxkXXkOox0XXXXX,kc                            " << endl;
                        cout << "                      cO       xl  kXkXXXd0KddOXXxOXox0XxXXXkkc                            " << endl;
                        cout << "                      cO       xl .XXlXXXXoXd0XXd0XXox0XlXXXkkc                            " << endl;
                        cout << "                      cO     .:xo.:KXoXXXXKcKX0dXXXXox0XlXXXkkl.                           " << endl;
                        cout << "                      cO    .X0OOcXoXoXXXXoXXkkXXXXXox0XoXXXkkok                           " << endl;
                        cout << "                      cO    .X0xx:dkXoXXXoXXx0XXXXXXox0XoXXKdkoXl                          " << endl;
                        cout << "                      cO     c0doockkd0XdKXdKXXXXXKkloxOxdkOxkoXX                          " << endl;
                        cout << "                      cO      dxoXoXXKd0xXoXXXXXXOcOO0X0d0XXkkoX0                          " << endl;
                        cout << "                      cO      OxlodXXXllXdXXXXXXXkckO0XXXoXXkkox.                          " << endl;
                        cout << "                      cO      ,xl:XXXo.dxddOoOOOOOxck0XXO:XXkkc                            " << endl;
                        cout << "                      cO       xl','. :OdoOX;dOOOOOOclxl0l0l.kc                            " << endl;
                        cout << "                      cO       xl     xd0dKKdoXXXXXXox0XOk:  kc                            " << endl;
                        cout << "                      cO       xl     0oXoX0xoXXXXXXox0XXXd  kc                            " << endl;
                        cout << "                    ookKooooooo0OoooooXoXOXX0OXXXXXXO0KXXX0ooKkooooo                       " << endl;
                        
                        cout << "\nNo te papoteaste y ahora sos imputable, te sentenciaron a cadena perpetua." << endl;
                    }
                }

                break;
            }

            case 2:
                seguirJugando = false;
                cout << "Chau, hermano." << endl;
                break;

            default:
                cout << "Opción inválida. Ingresa un número del 1 al 2" << endl;
                break;
        }
    }

    return 0;
}
