#include <stdio.h>
#include <math.h>

struct Tacka {
	double x,y;
};
struct Kruznica {
	struct Tacka centar;
	double radijus;
};
struct Pravougaonik {
	struct Tacka dole_lijevo;
	double sirina, visina;
};
struct Trougao {
	struct Tacka A, B, C;
};

enum TipOblika { TACKA, KRUZNICA, PRAVOUGAONIK, TROUGAO };

double udaljenost(struct Tacka t1, struct Tacka t2){
    return sqrt(pow(t1.x - t2.x, 2) + pow(t1.y - t2.y, 2));
}

double povrsina_tr(struct Tacka t1, struct Tacka t2, struct Tacka t3){
    return fabs((t1.x * (t2.y - t3.y) + t2.x * (t3.y - t1.y) + t3.x * (t1.y - t2.y)) / 2.0);
}

double udaljenost_od_linije(struct Tacka t1, struct Tacka t2, struct Tacka t){
    double A = (t1.y - t2.y) / (t1.x - t2.x);
    double B = -1;
    double C = t1.y - A * t1.x;
    double d = fabs(A * t.x + B * t.y + C) / sqrt(pow(A, 2) + pow(B, 2));
    return d;
}

int jednake(struct Tacka t1, struct Tacka t2){
    if (fabs(t1.x - t2.x) < 0.001 && fabs(t1.y - t2.y) < 0.001) return 1;
    return 0;
}

int t_o_t(struct Tacka t1, struct Tacka t2){
    return jednake(t1, t2);
}

int k_o_t(struct Kruznica kr, struct Tacka t){
    if (udaljenost(t, kr.centar) - kr.radijus < 0.001) return 1;
    return 0;
}

int p_o_t(struct Pravougaonik p, struct Tacka t){
    if (t.x >= p.dole_lijevo.x && t.x <= p.dole_lijevo.x + p.visina && t.y >= p.dole_lijevo.y && t.y <= p.dole_lijevo.y + p.sirina) return 1;
    return 0;
}

int tr_o_t(struct Trougao tr, struct Tacka t){
    double P = povrsina_tr(tr.A, tr.B, tr.C);
    double P1 = povrsina_tr(tr.A, tr.B, t);
    double P2 = povrsina_tr(tr.A, tr.C, t);
    double P3 = povrsina_tr(tr.B, tr.C, t);
    if (fabs(P - P1 - P2 - P3) < 0.001) return 1;
    return 0;
}

int t_o_k(struct Tacka t, struct Kruznica kr){
    if (jednake(t, kr.centar) == 1 && kr.radijus == 0) return 1;
    return 0;
}

int k_o_k(struct Kruznica k1, struct Kruznica k2){
    if (udaljenost(k1.centar, k2.centar) <= k1.radijus - k2.radijus) return 1;
    return 0;
}

int p_o_k(struct Pravougaonik p, struct Kruznica k){
    if (p.dole_lijevo.x + k.radijus <= k.centar.x &&
        p.dole_lijevo.x + p.visina - k.radijus >= k.centar.x &&
        p.dole_lijevo.y + k.radijus <= k.centar.y &&
        p.dole_lijevo.y + p.sirina >= k.centar.y) return 1;
    return 0;
}

int tr_o_k(struct Trougao tr, struct Kruznica k){
    if (udaljenost_od_linije(tr.A, tr.B, k.centar) - 0.001 < k.radijus) return 0;
    if (udaljenost_od_linije(tr.B, tr.C, k.centar) - 0.001 < k.radijus) return 0;
    if (udaljenost_od_linije(tr.C, tr.A, k.centar) - 0.001 < k.radijus) return 0;
    return 1;
}

int t_o_p(struct Tacka t, struct Pravougaonik p){
    if (jednake(t, p.dole_lijevo) == 1 && fabs(p.sirina - p.visina) < 0.001) return 1;
    return 0;
}

int k_o_p(struct Kruznica k, struct Pravougaonik p){
    struct Tacka t = p.dole_lijevo;
    if (k_o_t(k, t) == 0) return 0;
    t.x += p.visina;
    if (k_o_t(k, t) == 0) return 0;
    t.y += p.sirina;
    if (k_o_t(k, t) == 0) return 0;
    t.x -= p.visina;
    if (k_o_t(k, t) == 0) return 0;
    return 1;
}

int p_o_p(struct Pravougaonik pv, struct Pravougaonik p){
    if (p.dole_lijevo.x < pv.dole_lijevo.x) return 0;
    if (p.dole_lijevo.y < pv.dole_lijevo.y) return 0;
    if (p.dole_lijevo.x + p.visina > pv.dole_lijevo.x + pv.visina) return 0;
    if (p.dole_lijevo.y + p.sirina > pv.dole_lijevo.y + pv.sirina) return 0;
    return 1;
}

int tr_o_p(struct Trougao tr, struct Pravougaonik p){
    struct Tacka t = p.dole_lijevo;
    if (tr_o_t(tr, t) == 0) return 0;
    t.x += p.visina;
    if (tr_o_t(tr, t) == 0) return 0;
    t.y += p.sirina;
    if (tr_o_t(tr, t) == 0) return 0;
    t.x -= p.visina;
    if (tr_o_t(tr, t) == 0) return 0;
    return 1;
}

int t_o_tr(struct Tacka t, struct Trougao tr){
    if (jednake(t, tr.A) == 0) return 0;
    if (jednake(t, tr.B) == 0) return 0;
    if (jednake(t, tr.C) == 0) return 0;
    return 1;
}

int k_o_tr(struct Kruznica k, struct Trougao tr){
    if (k_o_t(k, tr.A) == 0) return 0;
    if (k_o_t(k, tr.A) == 0) return 0;
    if (k_o_t(k, tr.A) == 0) return 0;
    return 1;
}

int p_o_tr(struct Pravougaonik p, struct Trougao tr){
    if (p_o_t(p, tr.A) == 0) return 0;
    if (p_o_t(p, tr.B) == 0) return 0;
    if (p_o_t(p, tr.C) == 0) return 0;
    return 1;
}

int tr_o_tr(struct Trougao tr, struct Trougao tr2){
    if (tr_o_t(tr, tr2.A) == 0) return 0;
    if (tr_o_t(tr, tr2.B) == 0) return 0;
    if (tr_o_t(tr, tr2.C) == 0) return 0;
    return 1;
}

int obuhvata(void* oblik1, enum TipOblika to1, void* oblik2, enum TipOblika to2){
    if (to2 == TACKA){
        struct Tacka *o2 = oblik2;
        if (to1 == TACKA){
            struct Tacka *o1 = oblik1;
            return t_o_t(*o1, *o2);
        }
        else if (to1 == KRUZNICA){
            struct Kruznica *o1 = oblik1;
            return k_o_t(*o1, *o2);
        }
        else if (to1 == PRAVOUGAONIK){
            struct Pravougaonik *o1 = oblik1;   
            return p_o_t(*o1, *o2);
        }
        else{
            struct Trougao *o1 = oblik1;   
            return tr_o_t(*o1, *o2);
        }
    }

    else if (to2 == KRUZNICA){
        struct Kruznica *o2 = oblik2;
        if (to1 == TACKA){
            struct Tacka *o1 = oblik1;
            return t_o_k(*o1, *o2);
        }
        else if (to1 == KRUZNICA){
            struct Kruznica *o1 = oblik1;
            return k_o_k(*o1, *o2);
        }
        else if (to1 == PRAVOUGAONIK){
            struct Pravougaonik *o1 = oblik1;   
            return p_o_k(*o1, *o2);
        }
        else{
            struct Trougao *o1 = oblik1;   
            return tr_o_k(*o1, *o2);
        }
    }

    else if (to2 == PRAVOUGAONIK){
        struct Pravougaonik *o2 = oblik2;
        if (to1 == TACKA){
            struct Tacka *o1 = oblik1;
            return t_o_p(*o1, *o2);
        }
        else if (to1 == KRUZNICA){
            struct Kruznica *o1 = oblik1;
            return k_o_p(*o1, *o2);
        }
        else if (to1 == PRAVOUGAONIK){
            struct Pravougaonik *o1 = oblik1;   
            return p_o_p(*o1, *o2);
        }
        else{
            struct Trougao *o1 = oblik1;   
            return tr_o_p(*o1, *o2);
        }
    }

    else{
        struct Trougao *o2 = oblik2;
        if (to1 == TACKA){
            struct Tacka *o1 = oblik1;
            return t_o_tr(*o1, *o2);
        }
        else if (to1 == KRUZNICA){
            struct Kruznica *o1 = oblik1;
            return k_o_tr(*o1, *o2);
        }
        else if (to1 == PRAVOUGAONIK){
            struct Pravougaonik *o1 = oblik1;   
            return p_o_tr(*o1, *o2);
        }
        else{
            struct Trougao *o1 = oblik1;   
            return tr_o_tr(*o1, *o2);
        }
    }

    return 0;
}

int main() {
    struct Tacka nizt[100];
    struct Kruznica nizk[100];
    struct Pravougaonik nizp[100];
    struct Trougao niztr[100];
    void *p1, *p2;
    void *niz[100];
    enum TipOblika tipovi[100];
    int i, j, n, tip;
    int t_i = 0, k_i = 0, p_i = 0, tr_i = 0;
    double a, b, c, d, e, f;
    printf("Unesite broj oblika: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        while (1){
            printf("Odaberite tip %d. oblika (1 - tacka, 2 - kruznica, 3 - pravougaonik, 4 - trougao): ", i + 1);
            scanf("%d", &tip);
            if (tip > 0 && tip < 5) break;
            else printf("Nepoznat tip oblika %d!", tip);
        }
        if (tip == 1){
            printf("Unesite tacku: koordinate x,y: ");
            scanf("%lf,%lf", &a, &b);
            nizt[t_i].x = a;
            nizt[t_i].y = b;
            niz[i] = &nizt[t_i];
            t_i++;
            tipovi[i] = TACKA;
        }
        else if (tip == 2){
            printf("Unesite centar kruznice: koordinate x,y: ");
            scanf("%lf,%lf", &a, &b);
            printf("Unesite poluprecnik kruznice: ");
            scanf("%lf", &c);
            nizk[k_i].centar.x = a;
            nizk[k_i].centar.y = b;
            nizk[k_i].radijus = c;
            niz[i] = &nizk[k_i];
            k_i++;
            tipovi[i] = KRUZNICA;
        }
        else if (tip == 3){
            printf("Unesite donji lijevi ugao: koordinate x,y: ");
            scanf("%lf,%lf", &a, &b);
            printf("Unesite sirinu: ");
            scanf("%lf", &c);
            printf("Unesite visinu: ");
            scanf("%lf", &d);
            nizp[p_i].dole_lijevo.x = a;
            nizp[p_i].dole_lijevo.y = b;
            nizp[p_i].sirina = c;
            nizp[p_i].visina = d;
            niz[i] = &nizp[p_i];
            p_i++;
            tipovi[i] = PRAVOUGAONIK;
        }
        else{
            printf("Unesite prvi vrh: koordinate x,y: ");
            scanf("%lf,%lf", &a, &b);
            printf("Unesite drugi vrh: koordinate x,y: ");
            scanf("%lf,%lf", &c, &d);
            printf("Unesite treci vrh: koordinate x,y: ");
            scanf("%lf,%lf", &e, &f);
            niztr[tr_i].A.x = a;
            niztr[tr_i].A.y = b;
            niztr[tr_i].B.x = c;
            niztr[tr_i].B.y = d;
            niztr[tr_i].C.x = e;
            niztr[tr_i].C.y = e;
            niz[i] = &niztr[tr_i];
            tr_i++;
            tipovi[i] = TROUGAO;
        }
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (i == j) continue;
            if (obuhvata(niz[i], tipovi[i], niz[j], tipovi[j]) == 1) printf("\nOblik %d obuhvata oblik %d.", i + 1, j + 1);
        }
    }
	return 0;
}
