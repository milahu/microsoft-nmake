
int32_t fun_40b110(void** ecx, void** a2, void** a3, void* a4, void** a5, int32_t a6, int32_t a7, int32_t a8);

void** fun_40add0(void** a1, void** a2, void** a3, ...);

void** g413a3c = reinterpret_cast<void**>(0);

void fun_401000(void** ecx, void** a2) {
    void** eax3;

    fun_40b110(ecx, 0x413aa0, 0x413a28, 0, 0, 0, 0, 0);
    eax3 = fun_40add0(0x413aa0, __return_address(), a2);
    g413a3c = eax3;
    return;
}

void** g4133d8 = reinterpret_cast<void**>(0);

uint32_t free = 0x15354;

void** fun_404cf0(void** a1);

void** g4133f4 = reinterpret_cast<void**>(0);

void** fun_4069d0(void** a1, signed char a2);

void** g4133f0 = reinterpret_cast<void**>(1);

void** g413a78 = reinterpret_cast<void**>(0);

void** g413a74 = reinterpret_cast<void**>(0);

void** fun_404f80();

void** fun_4050b0(void** a1, signed char* a2);

void** fun_403220(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, ...);

void** fun_405710() {
    void** v1;
    void** ecx2;
    void** v3;
    void** ebx4;
    void*** esp5;
    void** v6;
    void** esi7;
    uint32_t esi8;
    void** eax9;
    void** edx10;
    void** ecx11;
    int1_t zf12;
    void** eax13;
    int1_t zf14;
    void** eax15;
    void** eax16;
    void* esp17;
    unsigned char v18;
    void** eax19;
    void** v20;

    v1 = reinterpret_cast<void**>(__return_address());
    ecx2 = g4133d8;
    v3 = ebx4;
    esp5 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4);
    v6 = esi7;
    esi8 = free;
    while (1) {
        eax9 = fun_404cf0(ecx2);
        esp5 = esp5 - 4 - 4 + 4 + 4;
        edx10 = g4133d8;
        if (eax9 == 33) {
            addr_4057de_3:
            if (!reinterpret_cast<int1_t>(eax9 == 33)) 
                break;
        } else {
            do {
                if (eax9 == 0xffffffff) 
                    goto addr_4057de_3;
                ++g4133f4;
                while (1) {
                    if (reinterpret_cast<int1_t>(eax9 == 92)) {
                        eax9 = fun_4069d0(eax9, 1);
                        esp5 = esp5 - 4 - 4 - 4 + 8 + 4;
                        ecx11 = g4133f0;
                        edx10 = g4133d8;
                        if (!reinterpret_cast<int1_t>(eax9 == 33)) 
                            goto addr_40576c_8;
                        if (ecx11) 
                            break;
                        addr_40576c_8:
                        g4133f0 = reinterpret_cast<void**>(0);
                    }
                    if (eax9 == 35) 
                        goto addr_405798_11;
                    if (eax9 == 10) 
                        break;
                    if (eax9 == 0xffffffff) 
                        break;
                    eax9 = fun_404cf0(edx10);
                    esp5 = esp5 - 4 - 4 + 4 + 4;
                    edx10 = g4133d8;
                }
                if (!reinterpret_cast<int1_t>(eax9 == 35)) {
                    addr_4057bf_16:
                    if (eax9 == 0xffffffff) 
                        goto addr_4057de_3;
                } else {
                    addr_405798_11:
                    eax9 = fun_404cf0(edx10);
                    esp5 = esp5 - 4 - 4 + 4 + 4;
                    edx10 = g4133d8;
                    if (eax9 != 10) {
                        do {
                            if (eax9 == 0xffffffff) 
                                goto addr_4057de_3;
                            eax9 = fun_404cf0(edx10);
                            esp5 = esp5 - 4 - 4 + 4 + 4;
                            edx10 = g4133d8;
                        } while (!reinterpret_cast<int1_t>(eax9 == 10));
                        goto addr_4057bf_16;
                    }
                }
                if (eax9 == 33) 
                    break;
                eax9 = fun_404cf0(edx10);
                esp5 = esp5 - 4 - 4 + 4 + 4;
                edx10 = g4133d8;
            } while (!reinterpret_cast<int1_t>(eax9 == 33));
            goto addr_4057de_3;
        }
        zf12 = g413a78 == 0;
        if (!zf12 && (eax13 = g413a74, zf14 = g413a78 == eax13, !zf14)) {
            eax15 = g413a78;
            esi8(eax15);
            esp5 = esp5 - 4 - 4 + 4 + 4;
        }
        eax16 = fun_404f80();
        esp17 = reinterpret_cast<void*>(esp5 - 4 + 4);
        g413a78 = eax16;
        fun_4050b0(eax16, reinterpret_cast<int32_t>(esp17) + 11);
        esp5 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp17) - 4 - 4 - 4 + 8 + 4);
        eax9 = g4133f4;
        ecx2 = g4133d8;
        if (v18 <= 8) 
            goto addr_40584d_24;
        g4133f4 = eax9 + 1;
    }
    if (reinterpret_cast<int1_t>(eax9 == 0xffffffff)) {
        eax19 = g4133f4;
        eax9 = fun_403220(eax19, 0x3fc, v6, v3, v20, v1);
    }
    addr_40584d_24:
    return eax9;
}

int32_t fun_40ceb4(void** ecx, void** a2, void** a3, void** a4);

struct s0 {
    signed char f0;
    signed char f1;
};

int32_t _mbsinc = 0x1563c;

void** g413424 = reinterpret_cast<void**>(0);

struct s1 {
    signed char f0;
    signed char f1;
};

int32_t _mbschr = 0x1537e;

struct s1* fun_40b520(struct s1* a1, signed char* a2);

void** fun_40ad20(void** a1, void** a2, void** a3);

void** fun_407b70(void** a1);

int32_t _mbscmp = 0x1535c;

struct s1* fun_40b5d0(struct s1* a1);

int32_t fun_40b110(void** ecx, void** a2, void** a3, void* a4, void** a5, int32_t a6, int32_t a7, int32_t a8) {
    void** v9;
    void** ebx10;
    void** v11;
    void** esi12;
    void** v13;
    void** edi14;
    void*** esp15;
    void** v16;
    void** ebp17;
    uint32_t edi18;
    uint32_t v19;
    void** v20;
    uint32_t v21;
    void** ecx22;
    void*** v23;
    void** ecx24;
    void*** v25;
    struct s0* ebx26;
    struct s0* v27;
    int32_t v28;
    void*** v29;
    struct s0* eax30;
    unsigned char v31;
    void** eax32;
    struct s1* eax33;
    struct s1* ebx34;
    struct s1* eax35;
    int32_t eax36;
    unsigned char v37;
    void** v38;
    void** ecx39;
    int32_t v40;
    int32_t eax41;
    int32_t eax42;
    unsigned char v43;
    void** eax44;
    signed char al45;
    struct s1* eax46;
    int32_t eax47;
    int32_t v48;
    void* esp49;
    void** esi50;
    void** eax51;
    void** eax52;
    void** ebp53;
    int32_t v54;
    int32_t v55;
    int32_t eax56;
    unsigned char v57;
    void** ecx58;
    void** v59;
    void** eax60;
    int32_t ecx61;
    int32_t v62;
    int32_t v63;
    int32_t v64;
    void** eax65;
    int32_t v66;
    void** eax67;
    void** eax68;
    void** v69;
    void** v70;
    int32_t eax71;
    int32_t v72;
    int32_t v73;
    int32_t ecx74;
    int32_t v75;
    int32_t v76;
    signed char v77;
    int32_t* esp78;
    void** ecx79;
    void** v80;
    int32_t v81;
    struct s1* eax82;
    int32_t v83;
    int32_t v84;
    void*** v85;
    int32_t v86;
    void*** v87;
    int32_t v88;
    void*** v89;
    int32_t v90;
    void*** v91;

    fun_40ceb4(ecx, __return_address(), a2, a3);
    v9 = ebx10;
    v11 = esi12;
    v13 = edi14;
    esp15 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4 - 4 - 4 - 4);
    v16 = ebp17;
    edi18 = 0;
    if (!v19) {
        v20 = reinterpret_cast<void**>(0);
    } else {
        if (!v21) {
            ecx22 = *v23;
            v20 = ecx22;
            if (ecx22 && *reinterpret_cast<void***>(ecx22)) {
                do {
                    ecx24 = *reinterpret_cast<void***>(v20);
                    v20 = ecx24;
                } while (*reinterpret_cast<void***>(ecx24));
            }
        } else {
            v20 = *v25;
        }
    }
    ebx26 = v27;
    if (!ebx26->f0 || !ebx26->f0) {
        addr_40b481_9:
        if (v28) {
            *v29 = v20;
        }
    } else {
        while (1) {
            if (ebx26->f0 != 36) {
                if (ebx26->f0 == 34) {
                    edi18 = -(edi18 - (edi18 + reinterpret_cast<uint1_t>(edi18 < edi18 + reinterpret_cast<uint1_t>(edi18 < 1))));
                }
                if (!edi18 && (ebx26->f0 == 94 && (ebx26 = reinterpret_cast<struct s0*>(&ebx26->f1), ebx26->f0 == 34))) {
                    edi18 = -(edi18 - (edi18 + reinterpret_cast<uint1_t>(edi18 < edi18 + reinterpret_cast<uint1_t>(edi18 < 1))));
                }
                eax30 = reinterpret_cast<struct s0*>(_mbsinc(ebx26));
                esp15 = esp15 - 4 - 4 + 4 + 4;
                ebx26 = eax30;
                if (eax30->f0) 
                    continue;
            }
            if (!ebx26->f0) 
                goto addr_40b481_9;
            if (!ebx26->f1) {
                if (v31 & 4) 
                    goto addr_40b4aa_20;
                eax32 = g413424;
                fun_403220(eax32, 0x3ea, v16, v13, v11, v9);
                esp15 = esp15 - 4 - 4 - 4 + 4 + 8;
            }
            eax33 = reinterpret_cast<struct s1*>(_mbsinc(ebx26));
            esp15 = esp15 - 4 - 4 + 4 + 4;
            ebx34 = eax33;
            if (!edi18 && (ebx34->f0 == 94 && (eax35 = reinterpret_cast<struct s1*>(_mbsinc(ebx34)), esp15 = esp15 - 4 - 4 + 4 + 4, ebx34 = eax35, eax36 = 0, *reinterpret_cast<signed char*>(&eax36) = eax35->f0, !(*reinterpret_cast<unsigned char*>(eax36 + 0x4149c0) & 1)))) {
                if (v37 & 4) 
                    goto addr_40b4c5_24;
                v38 = reinterpret_cast<void**>(static_cast<int32_t>(eax35->f0));
                ecx39 = g413424;
                fun_403220(ecx39, 0x3e9, v38, v16, v13, v11, ecx39, 0x3e9, v38, v16, v13, v11);
                esp15 = esp15 - 4 - 4 - 4 - 4 + 4 + 12;
            }
            if (ebx34->f0 != 36) {
                if (ebx34->f0 != 40) {
                    v40 = ebx34->f0;
                    eax41 = reinterpret_cast<int32_t>(_mbschr("*@<?", v40));
                    esp15 = esp15 - 4 - 4 - 4 + 4 + 8;
                    if (eax41) {
                        addr_40b477_29:
                        ebx26 = reinterpret_cast<struct s0*>(&ebx34->f1);
                        if (ebx26->f0) 
                            continue; else 
                            goto addr_40b481_9;
                    } else {
                        eax42 = 0;
                        *reinterpret_cast<signed char*>(&eax42) = ebx34->f0;
                        if (!(*reinterpret_cast<unsigned char*>(eax42 + 0x4149c0) & 1)) {
                            if (v43 & 4) 
                                goto addr_40b4e0_32;
                            eax44 = g413424;
                            fun_403220(eax44, 0x3ea, v16, v13, v11, v9);
                            esp15 = esp15 - 4 - 4 - 4 + 4 + 8;
                        }
                        al45 = ebx34->f0;
                        *reinterpret_cast<signed char*>(&a4) = al45;
                    }
                } else {
                    eax46 = fun_40b520(&ebx34->f1, esp15 + 28);
                    ebx34 = eax46;
                    eax47 = reinterpret_cast<int32_t>(_mbschr("*@<?", static_cast<int32_t>(*reinterpret_cast<signed char*>(&a4))));
                    esp15 = esp15 - 4 - 4 - 4 + 8 + 4 - 4 - 4 - 4 + 4 + 8;
                    if (eax47) {
                        goto addr_40b477_29;
                    }
                }
                if (!v48) {
                    fun_40add0(" ", v16, v13);
                    esp49 = reinterpret_cast<void*>(esp15 - 4 - 4 + 4 + 4);
                    esi50 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp49) + 20);
                } else {
                    eax51 = fun_40ad20(v16, v13, v11);
                    esp49 = reinterpret_cast<void*>(esp15 - 4 + 4);
                    esi50 = eax51;
                }
                eax52 = fun_407b70(reinterpret_cast<int32_t>(esp49) + 28);
                esp15 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp49) - 4 - 4 + 4 + 4);
                ebp53 = eax52;
                if (ebp53) {
                    if (!v54 || (eax56 = reinterpret_cast<int32_t>(_mbscmp(v55, esp15 + 28)), esp15 = esp15 - 4 - 4 - 4 + 4 + 8, !!eax56)) {
                        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp53 + 12)) & 1)) {
                            *reinterpret_cast<void***>(esi50 + 4) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(ebp53 + 8) + 4);
                        } else {
                            if (v57 & 4) 
                                goto addr_40b4fb_45;
                            ecx58 = g413424;
                            v59 = reinterpret_cast<void**>(esp15 + 28);
                            fun_403220(ecx58, 0x42e, v59, v16, v13, v11, ecx58, 0x42e, v59, v16, v13, v11);
                            esp15 = esp15 - 4 - 4 - 4 - 4 + 4 + 12;
                        }
                    } else {
                        eax60 = *reinterpret_cast<void***>(ebp53 + 8);
                        ecx61 = v62;
                        if (v63 != ecx61) {
                            do {
                                if (!eax60) 
                                    goto addr_40b36f_49;
                                eax60 = *reinterpret_cast<void***>(eax60);
                                --ecx61;
                            } while (v64 != ecx61);
                        }
                        if (!eax60) {
                            addr_40b36f_49:
                            eax65 = fun_40add0(0x413060, v16, v13);
                            esp15 = esp15 - 4 - 4 + 4 + 4;
                            *reinterpret_cast<void***>(esi50 + 4) = eax65;
                        } else {
                            *reinterpret_cast<void***>(esi50 + 4) = *reinterpret_cast<void***>(eax60 + 4);
                        }
                    }
                }
                if (v66) {
                    if (!ebp53 || reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp53 + 12)) & 16) {
                        eax67 = fun_40add0(0x413060, v16, v13);
                        esp15 = esp15 - 4 - 4 + 4 + 4;
                        *reinterpret_cast<void***>(esi50 + 4) = eax67;
                    }
                    *reinterpret_cast<void***>(esi50) = reinterpret_cast<void**>(0);
                    if (!v20) {
                        eax68 = v69;
                    } else {
                        eax68 = v20;
                    }
                    *reinterpret_cast<void***>(eax68) = esi50;
                    v20 = esi50;
                }
                if (ebp53 && (v70 = *reinterpret_cast<void***>(esi50 + 4), eax71 = reinterpret_cast<int32_t>(_mbschr(v70, 36)), esp15 = esp15 - 4 - 4 - 4 + 4 + 8, !!eax71)) {
                    *reinterpret_cast<void***>(ebp53 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp53 + 12)) | 1);
                    if (!v72 || (eax71 = reinterpret_cast<int32_t>(_mbscmp(v73, esp15 + 28)), esp15 = esp15 - 4 - 4 - 4 + 4 + 8, eax71 == 0)) {
                        ecx74 = v75;
                    } else {
                        ecx74 = v76;
                    }
                    *reinterpret_cast<signed char*>(&eax71) = v77;
                    esp78 = reinterpret_cast<int32_t*>(esp15 - 4 - 4);
                    ecx79 = *reinterpret_cast<void***>(esi50 + 4);
                    fun_40b110(ecx79, ecx79, v80, esp78 + 6, esp78 + 9, v81 + 1, ecx74, eax71);
                    esp15 = reinterpret_cast<void***>(esp78 - 1 - 1 - 1 - 1 - 1 - 1 + 7 + 1);
                    *reinterpret_cast<void***>(ebp53 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp53 + 12)) & 0xfe);
                    goto addr_40b477_29;
                }
            } else {
                eax82 = fun_40b5d0(ebx34);
                esp15 = esp15 - 4 - 4 + 4 + 4;
                ebx34 = eax82;
                goto addr_40b477_29;
            }
        }
    }
    addr_40b49d_67:
    goto v83;
    addr_40b4fb_45:
    if (v84) {
        *v85 = v20;
    }
    goto addr_40b49d_67;
    addr_40b4e0_32:
    if (v86) {
        *v87 = v20;
    }
    goto addr_40b49d_67;
    addr_40b4c5_24:
    if (v88) {
        *v89 = v20;
    }
    goto addr_40b49d_67;
    addr_40b4aa_20:
    if (v90) {
        *v91 = v20;
    }
    goto addr_40b49d_67;
}

void** fun_40acc0(void** a1, void** a2);

void** fun_40add0(void** a1, void** a2, void** a3, ...) {
    int32_t ecx4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    void** esi8;
    void** v9;
    void** edi10;
    void** edi11;
    void** ecx12;
    void** ebx13;
    void** eax14;
    void** edi15;
    uint32_t ecx16;
    uint32_t ecx17;

    ecx4 = -1;
    eax5 = eax6 - eax7;
    esi8 = a1;
    v9 = edi10;
    edi11 = esi8;
    do {
        if (!ecx4) 
            break;
        --ecx4;
        ++edi11;
        ++esi8;
    } while (*reinterpret_cast<void***>(edi11) != *reinterpret_cast<void***>(&eax5));
    ecx12 = reinterpret_cast<void**>(~ecx4);
    ebx13 = ecx12;
    eax14 = fun_40acc0(ecx12, v9);
    edi15 = eax14;
    ecx16 = reinterpret_cast<unsigned char>(ebx13) >> 2;
    while (ecx16) {
        --ecx16;
        *reinterpret_cast<void***>(edi15) = *reinterpret_cast<void***>(esi8);
        edi15 = edi15 + 4;
        esi8 = esi8 + 4;
    }
    ecx17 = reinterpret_cast<unsigned char>(ebx13) & 3;
    while (ecx17) {
        --ecx17;
        *reinterpret_cast<void***>(edi15) = *reinterpret_cast<void***>(esi8);
        ++edi15;
        ++esi8;
    }
    return eax14;
}

void** g4133d0 = reinterpret_cast<void**>(0);

void** g413a44 = reinterpret_cast<void**>(0);

void** g413a28 = reinterpret_cast<void**>(0);

void** g413a38 = reinterpret_cast<void**>(0);

struct s2 {
    struct s2* f0;
    void** f4;
};

void** fun_4013d0(signed char* a1, void*** a2, struct s2** a3);

void** fun_40ada0(void** a1);

void** fun_40c3a0(void** a1);

unsigned char g413a48 = 0;

void** fun_401170(void** a1) {
    void** v2;
    void** v3;
    void** esi4;
    void** al5;
    void** eax6;
    void** ecx7;
    void** esi8;
    void** eax9;
    void** eax10;
    int1_t zf11;
    void** eax12;
    void** v13;
    int1_t zf14;
    void** eax15;
    void** ecx16;
    int1_t zf17;

    v2 = reinterpret_cast<void**>(__return_address());
    v3 = esi4;
    al5 = g4133d0;
    g413a44 = al5;
    eax6 = fun_40ad20(v3, v2, a1);
    ecx7 = g413a3c;
    *reinterpret_cast<void***>(eax6 + 4) = ecx7;
    esi8 = g413a28;
    g413a38 = eax6;
    fun_4013d0("$", 0x413a38, 0x413a28);
    eax9 = fun_4013d0("*?", 0x413a38, 0);
    g413a28 = esi8;
    if (esi8) {
        do {
            esi8 = *reinterpret_cast<void***>(esi8);
            eax10 = g413a28;
            eax9 = fun_40ada0(eax10);
            g413a28 = esi8;
        } while (esi8);
    }
    zf11 = g413a38 == 0;
    if (!zf11) {
        addr_40120f_4:
        eax12 = g413a38;
        v13 = *reinterpret_cast<void***>(eax12 + 4);
        eax9 = fun_40c3a0(v13);
        if (eax9) {
            g413a48 = reinterpret_cast<unsigned char>(g413a48 | 16);
        }
    } else {
        zf14 = (g413a48 & 32) == 0;
        if (zf14) {
            eax15 = g413a3c;
            ecx16 = g4133f4;
            eax9 = fun_403220(ecx16, 0x43b, eax15, v3, v2, a1);
        }
        zf17 = g413a38 == 0;
        if (!zf17) 
            goto addr_40120f_4;
    }
    return eax9;
}

int32_t _mbspbrk = 0x15372;

void** fun_40c3a0(void** a1) {
    void** v2;
    void** edx3;
    void** v4;
    void** ebx5;
    void** v6;
    void** esi7;
    void** v8;
    void** edi9;
    void** esi10;
    void** edi11;
    void** eax12;
    signed char* eax13;
    int32_t edi14;
    int32_t ebx15;
    int32_t eax16;
    int32_t eax17;
    int32_t eax18;
    void** eax19;
    void** edi20;
    void** edi21;
    void** edi22;
    int32_t ebx23;
    int32_t eax24;
    int32_t eax25;
    int32_t eax26;
    void** eax27;

    v2 = reinterpret_cast<void**>(__return_address());
    edx3 = a1;
    v4 = ebx5;
    v6 = esi7;
    v8 = edi9;
    esi10 = reinterpret_cast<void**>(0);
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx3) == 0x7b) || (++edx3, *reinterpret_cast<void***>(edx3) == 0)) {
        addr_40c3cb_2:
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx3) == 46)) 
            goto addr_40c503_3;
    } else {
        do {
            if (*reinterpret_cast<void***>(edx3) == 0x7d) 
                break;
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx3) == 94)) {
                ++edx3;
            }
            ++edx3;
        } while (*reinterpret_cast<void***>(edx3));
        if (!*reinterpret_cast<void***>(edx3)) 
            goto addr_40c3cb_2; else 
            goto addr_40c3ca_9;
    }
    edi11 = edx3;
    if (*reinterpret_cast<void***>(edx3)) {
        do {
            if (*reinterpret_cast<void***>(edi11) == 0x7b) 
                break;
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi11) == 94)) {
                ++edi11;
            }
            ++edi11;
        } while (*reinterpret_cast<void***>(edi11));
    }
    eax12 = edx3;
    if (reinterpret_cast<unsigned char>(edi11) > reinterpret_cast<unsigned char>(edx3)) {
        do {
            if (*reinterpret_cast<void***>(edx3) == 92) 
                break;
        } while (*reinterpret_cast<void***>(edx3) != 47 && (++edx3, reinterpret_cast<unsigned char>(edi11) > reinterpret_cast<unsigned char>(edx3)));
    }
    if (!*reinterpret_cast<void***>(edi11)) 
        goto addr_40c49d_19;
    if (edi11 == edx3) 
        goto addr_40c414_21;
    addr_40c49d_19:
    eax13 = reinterpret_cast<signed char*>(_mbspbrk(eax12 + 1, "./\\"));
    if (eax13 && (*eax13 == 46 && ((edi14 = reinterpret_cast<int32_t>(eax13 + 1), ebx15 = _mbschr, eax16 = reinterpret_cast<int32_t>(ebx15(edi14, 47)), !eax16) && (eax17 = reinterpret_cast<int32_t>(ebx15(edi14, 92)), !eax17)))) {
        eax18 = reinterpret_cast<int32_t>(ebx15(edi14, 46));
        if (!eax18) {
            esi10 = reinterpret_cast<void**>(1);
            goto addr_40c503_3;
        } else {
            eax19 = g413424;
            fun_403220(eax19, 0x444, v8, v6, v4, v2);
            return 0;
        }
    }
    addr_40c414_21:
    edi20 = edi11 + 1;
    if (!*reinterpret_cast<void***>(edi20)) {
        addr_40c503_3:
        return esi10;
    } else {
        do {
            if (*reinterpret_cast<void***>(edi20) == 0x7d) 
                break;
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi20) == 94)) {
                ++edi20;
            }
            ++edi20;
        } while (*reinterpret_cast<void***>(edi20));
        if (!*reinterpret_cast<void***>(edi20)) 
            goto addr_40c503_3;
        edi21 = edi20 + 1;
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi21) == 46)) 
            goto addr_40c503_3;
        edi22 = edi21 + 1;
        ebx23 = _mbschr;
        eax24 = reinterpret_cast<int32_t>(ebx23(edi22, 47));
        if (eax24) 
            goto addr_40c503_3;
        eax25 = reinterpret_cast<int32_t>(ebx23(edi22, 92));
        if (eax25) 
            goto addr_40c503_3;
    }
    eax26 = reinterpret_cast<int32_t>(ebx23(edi22, 46));
    if (!eax26) {
        return 1;
    } else {
        eax27 = g413424;
        fun_403220(eax27, 0x444, v8, v6, v4, v2);
        return 0;
    }
    addr_40c3ca_9:
    ++edx3;
    goto addr_40c3cb_2;
}

unsigned char g4133d4 = 0;

void fun_403420(void** a1, void** a2, void** a3, void** a4);

int32_t __p__iob = 0x153f2;

int32_t fprintf = 0x153e8;

void** g4133f8 = reinterpret_cast<void**>(0);

void** fun_403370(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

struct s3 {
    signed char f0;
    signed char f1;
};

struct s3* fun_403410(void** a1, void** a2);

int32_t vfprintf = 0x153dc;

int32_t putc = 0x153d4;

int32_t fflush = 0x153ca;

void fun_408a20();

int32_t exit = 0x153c2;

void** fun_403220(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, ...) {
    int1_t zf7;
    int32_t esi8;
    void** eax9;
    void** ebp10;
    void** edi11;
    void** esi12;
    void** ebx13;
    void* esp14;
    int32_t edi15;
    int32_t eax16;
    int32_t ebx17;
    void* esp18;
    void** eax19;
    int32_t eax20;
    uint32_t eax21;
    int32_t eax22;
    void** v23;
    struct s3* eax24;
    int32_t eax25;
    int32_t eax26;
    int32_t eax27;
    int32_t eax28;
    void*** esp29;
    void** v30;

    zf7 = (g4133d4 & 32) == 0;
    esi8 = 2;
    if (zf7 || (eax9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) / 0x3e8), eax9 != 4)) {
        fun_403420(ebp10, edi11, esi12, ebx13);
        esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 + 4);
        if (!a1) {
            edi15 = __p__iob;
            eax16 = reinterpret_cast<int32_t>(edi15("%s : ", "NMAKE"));
            ebx17 = fprintf;
            ebx17(eax16 + 64, "%s : ", "NMAKE");
            esp18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 - 4 - 4 + 4 - 4 - 4 + 4 + 12);
        } else {
            edi15 = __p__iob;
            eax19 = g4133f8;
            eax20 = reinterpret_cast<int32_t>(edi15("%s(%d) : ", eax19, a1));
            ebx17 = fprintf;
            ebx17(eax20 + 64, "%s(%d) : ", eax19, a1);
            esp18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4 + 16);
        }
        eax21 = reinterpret_cast<unsigned char>(a2) / 0x3e8;
        if (eax21 != 1) 
            goto addr_4032af_6;
    } else {
        addr_40335c_7:
        return eax9;
    }
    fun_403370(20, ebp10, edi11, esi12, ebx13, __return_address(), a1);
    esp18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp18) - 4 - 4 + 4 + 4);
    if (reinterpret_cast<int1_t>(a2 == 0x41b)) {
        esi8 = 4;
    }
    addr_4032e4_10:
    eax22 = reinterpret_cast<int32_t>(edi15(" U%04d: ", a2));
    ebx17(eax22 + 64, " U%04d: ", a2);
    v23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp18) - 4 - 4 - 4 + 4 - 4 - 4 + 4 + 40);
    eax24 = fun_403410(a2, v23);
    eax25 = reinterpret_cast<int32_t>(edi15(eax24, v23));
    vfprintf(eax25 + 64, eax24, v23);
    eax26 = reinterpret_cast<int32_t>(edi15());
    putc(10, eax26 + 64);
    eax27 = reinterpret_cast<int32_t>(edi15());
    eax9 = reinterpret_cast<void**>(fflush(eax27 + 64));
    if (eax21 == 1) {
        eax28 = reinterpret_cast<int32_t>(edi15("Stop.\n"));
        ebx17(eax28 + 64, "Stop.\n");
        fun_408a20();
        eax9 = reinterpret_cast<void**>(exit(esi8));
        goto addr_40335c_7;
    }
    addr_4032af_6:
    if (eax21 == 2) {
        esp29 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp18) - 4);
        v30 = reinterpret_cast<void**>(21);
    } else {
        if (eax21 == 4) {
            esp29 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp18) - 4);
            v30 = reinterpret_cast<void**>(22);
        } else {
            goto addr_4032e4_10;
        }
    }
    fun_403370(v30, ebp10, edi11, esi12, ebx13, __return_address(), a1);
    esp18 = reinterpret_cast<void*>(esp29 - 4 + 4 + 4);
    goto addr_4032e4_10;
}

void** fun_40cb30(void** ecx, void** a2);

void** fun_40b700(void** a1, struct s2** a2);

void** fun_40ae30(void** a1, void** a2, ...);

void** fun_401550(void*** a1);

void fun_40ae10(void*** a1, void** a2);

void** fun_4013d0(signed char* a1, void*** a2, struct s2** a3) {
    void** v4;
    void** v5;
    void** v6;
    void** esi7;
    void** v8;
    void** edi9;
    void** ebx10;
    void*** esi11;
    void*** esp12;
    void** v13;
    void** ebp14;
    void** edi15;
    void*** ebp16;
    void** ecx17;
    void** eax18;
    void** v19;
    void** v20;
    void** v21;
    void** ecx22;
    void** eax23;
    void** ecx24;
    void** eax25;
    void* esp26;
    void** v27;
    void** eax28;
    void* esp29;
    void** ebp30;
    void** eax31;
    void** eax32;
    void* esp33;
    void** eax34;

    v4 = reinterpret_cast<void**>(0);
    v5 = reinterpret_cast<void**>(0);
    v6 = esi7;
    v8 = edi9;
    ebx10 = reinterpret_cast<void**>(0);
    esi11 = a2;
    esp12 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16 - 4 - 4 - 4 - 4);
    v13 = ebp14;
    edi15 = *esi11;
    if (edi15) {
        do {
            ebp16 = reinterpret_cast<void***>(edi15 + 4);
            ecx17 = *ebp16;
            eax18 = reinterpret_cast<void**>(_mbspbrk(ecx17, a1));
            esp12 = esp12 - 4 - 4 - 4 + 4 + 8;
            if (eax18) {
                if (*a1 != 36) {
                    v19 = *ebp16;
                    eax18 = fun_40c3a0(v19);
                    esp12 = esp12 - 4 - 4 + 4 + 4;
                    if (eax18 || (v20 = *ebp16, eax18 = fun_40cb30(ecx17, v20), esp12 = esp12 - 4 - 4 + 4 + 4, v21 = eax18, eax18 == 0)) {
                        ebx10 = edi15;
                        edi15 = *reinterpret_cast<void***>(edi15);
                        continue;
                    } else {
                        v5 = *ebp16;
                    }
                } else {
                    ecx22 = *ebp16;
                    eax23 = fun_40b700(ecx22, a3);
                    ecx24 = *ebp16;
                    v4 = eax23;
                    free(ecx24);
                    esp12 = esp12 - 4 - 4 - 4 + 8 + 4 - 4 - 4 + 4 + 4;
                }
            } else {
                ebx10 = edi15;
                edi15 = *reinterpret_cast<void***>(edi15);
                continue;
            }
            eax25 = *reinterpret_cast<void***>(edi15);
            if (!ebx10) {
                *esi11 = eax25;
                fun_40ada0(edi15);
                esp26 = reinterpret_cast<void*>(esp12 - 4 - 4 + 4 + 4);
                edi15 = *esi11;
            } else {
                *reinterpret_cast<void***>(ebx10) = eax25;
                fun_40ada0(edi15);
                esp26 = reinterpret_cast<void*>(esp12 - 4 - 4 + 4 + 4);
                edi15 = *reinterpret_cast<void***>(ebx10);
            }
            if (*a1 != 36) {
                if (v21) {
                    if (!ebx10 && (ebx10 = v21, !!*reinterpret_cast<void***>(ebx10))) {
                        do {
                            ebx10 = *reinterpret_cast<void***>(ebx10);
                        } while (*reinterpret_cast<void***>(ebx10));
                    }
                    v27 = *esi11;
                    fun_40ae30(reinterpret_cast<int32_t>(esp26) + 16, v27);
                    esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4 - 4 + 8 + 4);
                    *esi11 = v21;
                }
                eax18 = reinterpret_cast<void**>(free(v5));
                esp12 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp26) - 4 - 4 + 4 + 4);
            } else {
                eax28 = fun_401550(reinterpret_cast<int32_t>(esp26) + 20);
                esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4 + 4 + 4);
                ebp30 = eax28;
                if (ebp30) {
                    do {
                        eax31 = fun_40ad20(v13, v8, v6);
                        v21 = eax31;
                        eax32 = fun_40add0(ebp30, v13, v8);
                        *reinterpret_cast<void***>(v21 + 4) = eax32;
                        fun_40ae10(esi11, v21);
                        esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) - 4 + 4 - 4 - 4 + 4 + 4 - 4 - 4 - 4 + 8 + 4);
                        if (!ebx10) {
                            ebx10 = v21;
                        }
                        eax34 = fun_401550(reinterpret_cast<int32_t>(esp33) + 20);
                        esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) - 4 - 4 + 4 + 4);
                        ebp30 = eax34;
                    } while (ebp30);
                }
                eax18 = reinterpret_cast<void**>(free(v4));
                esp12 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp29) - 4 - 4 + 4 + 4);
            }
        } while (edi15);
    }
    return eax18;
}

void** g40ee28;

void** fun_40ada0(void** a1) {
    int1_t zf2;
    void** ecx3;

    zf2 = g40ee28 == 0;
    if (!zf2) {
        ecx3 = g40ee28;
        *reinterpret_cast<void***>(a1) = ecx3;
        g40ee28 = a1;
        return a1;
    } else {
        *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
        g40ee28 = a1;
        return a1;
    }
}

void** fun_40ae30(void** a1, void** a2, ...) {
    void** eax3;

    eax3 = a1;
    if (*reinterpret_cast<void***>(eax3)) {
        do {
            eax3 = *reinterpret_cast<void***>(eax3);
        } while (*reinterpret_cast<void***>(eax3));
    }
    *reinterpret_cast<void***>(eax3) = a2;
    return eax3;
}

int32_t _mbsicmp = 0x15366;

void** fun_4086d0(signed char a1, int32_t a2);

int32_t fun_401310(void** a1) {
    int32_t esi2;
    int32_t edi3;
    int32_t eax4;
    unsigned char al5;
    int32_t eax6;
    int32_t edi7;
    int32_t eax8;
    int32_t eax9;
    unsigned char al10;
    unsigned char al11;
    unsigned char al12;

    esi2 = 0;
    edi3 = _mbsicmp;
    eax4 = reinterpret_cast<int32_t>(edi3(a1, ".SILENT"));
    if (!eax4) {
        al5 = g413a48;
        esi2 = 1;
        g413a48 = reinterpret_cast<unsigned char>(al5 | 2);
        fun_4086d0(0x73, 1);
    }
    eax6 = reinterpret_cast<int32_t>(edi3(a1, ".IGNORE"));
    if (eax6) {
        edi7 = _mbscmp;
        eax8 = reinterpret_cast<int32_t>(edi7(a1, ".SUFFIXES"));
        if (eax8) {
            eax9 = reinterpret_cast<int32_t>(edi7(a1, ".PRECIOUS"));
            if (!eax9) {
                al10 = g413a48;
                esi2 = 1;
                g413a48 = reinterpret_cast<unsigned char>(al10 | 8);
            }
            return esi2;
        } else {
            al11 = g413a48;
            g413a48 = reinterpret_cast<unsigned char>(al11 | 1);
            return 1;
        }
    } else {
        al12 = g413a48;
        g413a48 = reinterpret_cast<unsigned char>(al12 | 4);
        fun_4086d0(0x69, 1);
        return 1;
    }
}

int32_t _mbctoupper = 0x15476;

void** fun_408900(unsigned char* ecx, void** a2, void** a3);

int32_t g4133b8 = 0;

int32_t g4133cc = 0;

int32_t g4133a4 = 0;

void** g4133a8 = reinterpret_cast<void**>(0);

void** g4133e8 = reinterpret_cast<void**>(0);

void** g4133ec = reinterpret_cast<void**>(0);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0xe4);

int32_t _putenv = 0x1539c;

void** fun_4086d0(signed char a1, int32_t a2) {
    void** v3;
    void** ebx4;
    void** v5;
    void** esi6;
    void** ebx7;
    void** v8;
    void** edi9;
    unsigned char* edi10;
    signed char al11;
    void* esi12;
    void** eax13;
    int32_t ecx14;
    unsigned char bl15;
    unsigned char v16;
    int1_t zf17;
    void** eax18;
    void** v19;
    signed char* eax20;
    signed char* ecx21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** v25;
    unsigned char al26;
    void** eax27;
    int32_t esi28;
    void** v29;
    void** eax30;
    void** v31;
    signed char* eax32;
    void** eax33;
    void** eax34;
    void** eax35;
    void** v36;
    void** eax37;

    v3 = ebx4;
    v5 = esi6;
    ebx7 = reinterpret_cast<void**>(static_cast<int32_t>(a1));
    v8 = edi9;
    edi10 = reinterpret_cast<unsigned char*>(0x4133d0);
    al11 = reinterpret_cast<signed char>(_mbctoupper(ebx7));
    esi12 = reinterpret_cast<void*>(static_cast<int32_t>(al11));
    eax13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esi12) + 0xffffffe0);
    if (reinterpret_cast<unsigned char>(eax13) > reinterpret_cast<unsigned char>(52)) 
        goto addr_408708_2;
    ecx14 = 0;
    *reinterpret_cast<signed char*>(&ecx14) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax13) + reinterpret_cast<uint32_t>(fun_408900));
    switch (ecx14) {
        addr_4088b2_4:
    case 0:
        return eax13;
    case 1:
        bl15 = 16;
        goto addr_4087ae_6;
    case 2:
        g4133b8 = 1;
        return eax13;
    case 3:
        bl15 = 32;
        edi10 = reinterpret_cast<unsigned char*>(0x4133d4);
        g4133cc = 1;
        goto addr_4087ae_6;
    case 4:
        bl15 = 1;
        goto addr_4087ae_6;
    case 5:
        bl15 = 4;
        break;
    case 6:
        bl15 = 2;
        goto addr_4087ae_6;
    case 7:
        g4133a4 = 1;
        return eax13;
    case 8:
        bl15 = 0x80;
        edi10 = reinterpret_cast<unsigned char*>(0x4133d4);
        g4133cc = 1;
        goto addr_4087ae_6;
    case 9:
        bl15 = 4;
        goto addr_4087ae_6;
    case 10:
        g4133a8 = reinterpret_cast<void**>(1);
        return eax13;
    case 11:
        bl15 = 1;
        break;
    case 12:
        bl15 = 8;
        break;
    case 13:
        bl15 = 2;
        break;
    case 14:
        bl15 = 8;
        goto addr_4087ae_6;
    case 15:
        bl15 = 16;
        break;
        addr_408708_2:
    case 16:
        eax13 = fun_403220(0, 0x429, ebx7, v8, v5, v3);
        bl15 = v16;
        goto addr_4087ae_6;
    }
    edi10 = reinterpret_cast<unsigned char*>(0x4133d4);
    addr_4087ae_6:
    zf17 = g4133e8 == 0;
    if (zf17) {
        eax13 = fun_407b70("MAKEFLAGS");
        g4133e8 = eax13;
        g4133ec = *reinterpret_cast<void***>(eax13 + 8);
    }
    if (!a2) {
        if (reinterpret_cast<int1_t>(edi10 == 0x4133d0)) {
            *edi10 = reinterpret_cast<unsigned char>(*edi10 & reinterpret_cast<unsigned char>(~bl15));
            eax18 = g4133ec;
            v19 = *reinterpret_cast<void***>(eax18 + 4);
            eax20 = reinterpret_cast<signed char*>(_mbschr(v19, esi12));
            if (eax20) {
                do {
                    ecx21 = eax20 + 1;
                    *eax20 = *ecx21;
                    eax20 = ecx21;
                } while (*ecx21);
            }
            eax22 = image_base_;
            eax23 = fun_40add0(eax22, v8, v5);
            eax13 = reinterpret_cast<void**>(_putenv(eax23));
            if (reinterpret_cast<int1_t>(eax13 == 0xffffffff)) {
                eax24 = g4133f4;
                eax13 = fun_403220(eax24, 0x41f, v8, v5, v3, v25);
                goto addr_4088b2_4;
            }
        }
    } else {
        al26 = reinterpret_cast<unsigned char>(*edi10 | bl15);
        *edi10 = al26;
        if (al11 == 81) {
            *edi10 = reinterpret_cast<unsigned char>(al26 | 32);
        }
        eax27 = g4133ec;
        esi28 = _mbschr;
        v29 = *reinterpret_cast<void***>(eax27 + 4);
        eax13 = reinterpret_cast<void**>(esi28(v29, esi12));
        if (!eax13) {
            eax30 = g4133ec;
            v31 = *reinterpret_cast<void***>(eax30 + 4);
            eax32 = reinterpret_cast<signed char*>(esi28(v31, 32));
            if (eax32) {
                *eax32 = al11;
            }
            eax33 = image_base_;
            eax34 = fun_40add0(eax33, v8, v5);
            eax13 = reinterpret_cast<void**>(_putenv(eax34));
            if (reinterpret_cast<int1_t>(eax13 == 0xffffffff)) {
                eax35 = g4133f4;
                eax37 = fun_403220(eax35, 0x41f, v8, v5, v3, v36);
                return eax37;
            }
        }
    }
}

void fun_40bb00(void*** a1, void**** a2, void**** a3, void*** a4, void** a5);

void fun_40c060(void*** a1, void*** a2, void**** a3, void**** a4, void** a5, void*** a6, void** a7);

void fun_40bb90(void*** a1, void*** a2, void**** a3, void**** a4, void*** a5, int32_t a6, void** a7);

void** fun_40b700(void** a1, struct s2** a2) {
    void* esp3;
    void* eax4;
    void** v5;
    void** ebx6;
    void*** esp7;
    void** v8;
    void** esi9;
    uint32_t ebx10;
    void** v11;
    void** edi12;
    void*** esp13;
    void** v14;
    void** ebp15;
    int32_t ebp16;
    void* v17;
    void* v18;
    void* v19;
    struct s2** esi20;
    void*** esp21;
    void**** esp22;
    void*** esp23;
    void**** esp24;
    void** edi25;
    int32_t v26;
    int32_t eax27;
    void** edi28;
    int32_t v29;
    int32_t eax30;
    void* esp31;
    void** eax32;
    struct s2* eax33;
    void** v34;
    int32_t eax35;
    void* esp36;
    struct s2* eax37;
    void** edi38;
    struct s2* ecx39;
    void** v40;
    void** eax41;
    void*** esp42;
    void**** esp43;
    void***** esp44;
    void*** esp45;
    void***** esp46;
    void***** esp47;
    void*** esp48;
    void***** esp49;
    void***** esp50;
    void*** esp51;
    void***** esp52;
    void***** esp53;
    void*** esp54;
    void***** esp55;
    void***** esp56;
    void*** esp57;
    void***** esp58;
    void***** esp59;
    void*** esp60;
    void***** esp61;
    void***** esp62;
    void*** esp63;
    void***** esp64;
    void***** esp65;
    void*** esp66;
    void* v67;
    void** eax68;
    void** ebx69;
    void** eax70;
    void** edi71;
    void* eax72;
    uint32_t ecx73;
    void** v74;
    uint32_t ecx75;

    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x410);
    eax4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) + 16);
    v5 = ebx6;
    esp7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp3) - 4 - 4);
    v8 = esi9;
    ebx10 = 0;
    v11 = edi12;
    esp13 = esp7 - 4 - 4;
    v14 = ebp15;
    ebp16 = 0;
    v17 = eax4;
    v18 = reinterpret_cast<void*>(esp7 + 0x418);
    v19 = eax4;
    if (*reinterpret_cast<void***>(a1)) {
        esi20 = a2;
        do {
            if (*reinterpret_cast<void***>(a1)) {
                do {
                    if (*reinterpret_cast<void***>(a1) == 36) 
                        break;
                    if (v18 == v19) {
                        esp21 = esp13 - 4;
                        esp22 = reinterpret_cast<void****>(esp21 - 4);
                        fun_40bb00(esp22 + 8, esp21 + 20, esp13 + 20, esp13 + 28, esp13 + 32);
                        esp13 = reinterpret_cast<void***>(esp22 - 1 - 1 - 1 - 1 + 5 + 1);
                    }
                    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a1) == 34)) {
                        ebx10 = -(ebx10 - (ebx10 + reinterpret_cast<uint1_t>(ebx10 < ebx10 + reinterpret_cast<uint1_t>(ebx10 < 1))));
                    }
                    if (!ebx10 && (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a1) == 94) && (v19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v19) + 1), ++a1, reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a1) == 34)))) {
                        ebx10 = -(ebx10 - (ebx10 + reinterpret_cast<uint1_t>(ebx10 < ebx10 + reinterpret_cast<uint1_t>(ebx10 < 1))));
                    }
                    ++a1;
                    v19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v19) + 1);
                } while (*reinterpret_cast<void***>(a1));
            }
            if (v18 == v19) {
                esp23 = esp13 - 4;
                esp24 = reinterpret_cast<void****>(esp23 - 4);
                fun_40bb00(esp24 + 8, esp23 + 20, esp13 + 20, esp13 + 28, esp13 + 32);
                esp13 = reinterpret_cast<void***>(esp24 - 1 - 1 - 1 - 1 + 5 + 1);
            }
            if (!*reinterpret_cast<void***>(a1)) 
                break;
            edi25 = a1 + 1;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi25) == 40) || (v26 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi25 + 1)), eax27 = reinterpret_cast<int32_t>(_mbschr("*@<?", v26)), esp13 = esp13 - 4 - 4 - 4 + 4 + 8, eax27 == 0)) {
                edi28 = edi25 + 1;
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi25) == 36)) {
                    v29 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(a1 + 1));
                    eax30 = reinterpret_cast<int32_t>(_mbschr("*@<?", v29));
                    esp31 = reinterpret_cast<void*>(esp13 - 4 - 4 - 4 + 4 + 8);
                    if (!eax30) {
                        if (!*esi20) {
                            eax32 = g413424;
                            fun_403220(eax32, 0x410, v14, v11, v8, v5, eax32, 0x410, v14, v11, v8, v5);
                            esp31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp31) - 4 - 4 - 4 + 4 + 8);
                        }
                        eax33 = *esi20;
                        v34 = eax33->f4;
                        eax35 = reinterpret_cast<int32_t>(_mbschr(v34, 36));
                        esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp31) - 4 - 4 - 4 + 4 + 8);
                        eax37 = *esi20;
                        if (!eax35) {
                            edi38 = eax37->f4;
                            *esi20 = eax37->f0;
                        } else {
                            ecx39 = eax37->f0;
                            ebp16 = 1;
                            *esi20 = ecx39;
                            v40 = eax37->f4;
                            eax41 = fun_40b700(v40, esi20);
                            esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) - 4 - 4 - 4 + 8 + 4);
                            edi38 = eax41;
                        }
                        esp42 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp36) - 4);
                        esp43 = reinterpret_cast<void****>(esp42 - 4);
                        esp44 = reinterpret_cast<void*****>(esp43 - 1 - 1 - 1);
                        fun_40c060(esp44 + 11, esp43 + 0x10b, esp42 + 20, reinterpret_cast<int32_t>(esp36) + 20, edi38, reinterpret_cast<int32_t>(esp36) + 28, reinterpret_cast<int32_t>(esp36) + 32);
                        esp13 = reinterpret_cast<void***>(esp44 - 1 - 1 - 1 + 7 + 1);
                        if (ebp16) {
                            ebp16 = 0;
                            free(edi38);
                            esp13 = esp13 - 4 - 4 + 4 + 4;
                        }
                    } else {
                        esp45 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp31) - 4);
                        esp46 = reinterpret_cast<void*****>(esp45 - 4 - 4 - 4);
                        esp47 = esp46 - 1;
                        fun_40bb90(esp47 + 11, esp46 + 0x10d, esp45 + 20, reinterpret_cast<int32_t>(esp31) + 20, reinterpret_cast<int32_t>(esp31) + 28, 1, reinterpret_cast<int32_t>(esp31) + 32);
                        esp13 = reinterpret_cast<void***>(esp47 - 1 - 1 - 1 + 7 + 1);
                    }
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi28) == 94)) {
                        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi28) == 64)) {
                            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi28) == 40) || ((++edi28, !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi28 + 1) == 64)) || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi28 + 1) == 41))) {
                                if (*reinterpret_cast<void***>(edi28 + 1) != 70 && (*reinterpret_cast<void***>(edi28 + 1) != 68 && (*reinterpret_cast<void***>(edi28 + 1) != 66 && !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi28 + 1) == 82))) || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi28 + 1 + 1) == 41)) {
                                    esp48 = esp13 - 4;
                                    esp49 = reinterpret_cast<void*****>(esp48 - 4 - 4 - 4);
                                    esp50 = esp49 - 1;
                                    fun_40bb90(esp50 + 11, esp49 + 0x10d, esp48 + 20, esp13 + 20, esp13 + 28, 5, esp13 + 32);
                                    esp13 = reinterpret_cast<void***>(esp50 - 1 - 1 - 1 + 7 + 1);
                                } else {
                                    esp51 = esp13 - 4;
                                    esp52 = reinterpret_cast<void*****>(esp51 - 4 - 4 - 4);
                                    esp53 = esp52 - 1;
                                    fun_40bb90(esp53 + 11, esp52 + 0x10d, esp51 + 20, esp13 + 20, esp13 + 28, 4, esp13 + 32);
                                    esp13 = reinterpret_cast<void***>(esp53 - 1 - 1 - 1 + 7 + 1);
                                }
                            } else {
                                esp54 = esp13 - 4;
                                esp55 = reinterpret_cast<void*****>(esp54 - 4 - 4 - 4);
                                esp56 = esp55 - 1;
                                fun_40bb90(esp56 + 11, esp55 + 0x10d, esp54 + 20, esp13 + 20, esp13 + 28, 2, esp13 + 32);
                                esp13 = reinterpret_cast<void***>(esp56 - 1 - 1 - 1 + 7 + 1);
                            }
                        } else {
                            esp57 = esp13 - 4;
                            esp58 = reinterpret_cast<void*****>(esp57 - 4 - 4 - 4);
                            esp59 = esp58 - 1;
                            fun_40bb90(esp59 + 11, esp58 + 0x10d, esp57 + 20, esp13 + 20, esp13 + 28, 2, esp13 + 32);
                            esp13 = reinterpret_cast<void***>(esp59 - 1 - 1 - 1 + 7 + 1);
                        }
                    } else {
                        esp60 = esp13 - 4;
                        esp61 = reinterpret_cast<void*****>(esp60 - 4 - 4 - 4);
                        esp62 = esp61 - 1;
                        fun_40bb90(esp62 + 11, esp61 + 0x10d, esp60 + 20, esp13 + 20, esp13 + 28, 5, esp13 + 32);
                        esp13 = reinterpret_cast<void***>(esp62 - 1 - 1 - 1 + 7 + 1);
                    }
                }
            } else {
                esp63 = esp13 - 4;
                esp64 = reinterpret_cast<void*****>(esp63 - 4 - 4 - 4);
                esp65 = esp64 - 1;
                fun_40bb90(esp65 + 11, esp64 + 0x10d, esp63 + 20, esp13 + 20, esp13 + 28, 3, esp13 + 32);
                esp13 = reinterpret_cast<void***>(esp65 - 1 - 1 - 1 + 7 + 1);
            }
        } while (*reinterpret_cast<void***>(a1));
    }
    if (v18 == v19) {
        esp66 = esp13 - 4;
        fun_40bb00(esp66 - 4 + 32, esp66 + 20, esp13 + 20, esp13 + 28, esp13 + 32);
    }
    v67 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v19) + 1);
    eax68 = fun_40acc0(reinterpret_cast<uint32_t>(v67) - reinterpret_cast<uint32_t>(v17), v14);
    ebx69 = eax68;
    if (!ebx69) {
        eax70 = g413424;
        fun_403220(eax70, 0x419, v14, v11, v8, v5, eax70, 0x419, v14, v11, v8, v5);
    }
    edi71 = ebx69;
    eax72 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v67) - reinterpret_cast<uint32_t>(v17));
    ecx73 = reinterpret_cast<uint32_t>(eax72) >> 2;
    while (ecx73) {
        --ecx73;
        *reinterpret_cast<void***>(edi71) = v74;
        edi71 = edi71 + 4;
    }
    ecx75 = reinterpret_cast<uint32_t>(eax72) & 3;
    while (ecx75) {
        --ecx75;
        *reinterpret_cast<void***>(edi71) = reinterpret_cast<void**>(0);
        ++edi71;
    }
    return ebx69;
}

int32_t fun_40cd20(void** a1, int32_t* a2, int32_t* a3, void** a4, void** a5);

void** fun_40c340(void** a1, int32_t a2);

int32_t fun_404c90(int32_t* a1);

int32_t fun_40ce00(int32_t* a1, int32_t a2);

void** fun_40cb30(void** ecx, void** a2) {
    void* ebp3;
    void** v4;
    void** ebx5;
    void** v6;
    void** esi7;
    void** v8;
    void** edi9;
    void** esi10;
    int32_t eax11;
    void** eax12;
    void** v13;
    void** eax14;
    int32_t v15;
    int32_t eax16;
    void** eax17;
    void** eax18;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v4 = ebx5;
    v6 = esi7;
    v8 = edi9;
    fun_40ceb4(ecx, v8, v6, v4);
    esi10 = a2;
    eax11 = fun_40cd20(esi10, reinterpret_cast<int32_t>(ebp3) - 4, reinterpret_cast<int32_t>(ebp3) - 12, v8, v6);
    if (eax11) {
        eax12 = fun_40ad20(v8, v6, v4);
        v13 = eax12;
        eax14 = fun_40c340(esi10, eax11);
        *reinterpret_cast<void***>(v13 + 4) = eax14;
        while (fun_404c90(reinterpret_cast<int32_t>(ebp3) - 4), eax16 = fun_40ce00(reinterpret_cast<int32_t>(ebp3) - 4, v15), !!eax16) {
            eax17 = fun_40ad20(v8, v6, v4);
            eax18 = fun_40c340(esi10, eax16);
            *reinterpret_cast<void***>(eax17 + 4) = eax18;
            fun_40ae10(reinterpret_cast<int32_t>(ebp3) - 8, eax17);
        }
        return v13;
    } else {
        return 0;
    }
}

void** fun_401550(void*** a1) {
    void*** ecx2;
    void** edx3;
    void** eax4;

    ecx2 = a1;
    edx3 = *ecx2;
    while (*reinterpret_cast<void***>(edx3) == 32 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx3) == 9)) {
        ++edx3;
    }
    eax4 = edx3;
    if (!*reinterpret_cast<void***>(edx3)) {
        return 0;
    }
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx3) == 34)) {
        if (*reinterpret_cast<void***>(edx3)) {
            do {
                if (*reinterpret_cast<void***>(edx3) == 32) 
                    goto addr_4015a0_9;
            } while (*reinterpret_cast<void***>(edx3) != 9 && (++edx3, !!*reinterpret_cast<void***>(edx3)));
            goto addr_4015a0_9;
        }
    }
    ++edx3;
    if (!*reinterpret_cast<void***>(edx3)) {
        addr_4015a0_9:
        if (*reinterpret_cast<void***>(edx3) == 32 || *reinterpret_cast<void***>(edx3) == 9) {
            *reinterpret_cast<void***>(edx3) = reinterpret_cast<void**>(0);
        } else {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx3) == 34)) {
                if (!*reinterpret_cast<void***>(edx3)) {
                    *ecx2 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx3 - 1) + 1);
                    return eax4;
                }
            } else {
                *reinterpret_cast<void***>(edx3 + 1) = reinterpret_cast<void**>(0);
                *ecx2 = edx3 + 1 + 1;
                return eax4;
            }
        }
    } else {
        do {
            if (*reinterpret_cast<void***>(edx3) == 34) 
                goto addr_4015a0_9;
            ++edx3;
        } while (*reinterpret_cast<void***>(edx3));
        goto addr_401588_19;
    }
    *ecx2 = edx3 + 1;
    return eax4;
    addr_401588_19:
    goto addr_4015a0_9;
}

uint32_t g414bdc = 0;

int32_t malloc = 0x15632;

void** g414be0 = reinterpret_cast<void**>(0);

void** fun_40ad20(void** a1, void** a2, void** a3) {
    int1_t zf4;
    int1_t cf5;
    void** eax6;
    void** eax7;
    void** eax8;
    void** tmp32_9;

    zf4 = g40ee28 == 0;
    if (zf4) {
        cf5 = g414bdc < 8;
        if (cf5) {
            eax6 = reinterpret_cast<void**>(malloc(0x8000));
            g414be0 = eax6;
            if (!eax6) {
                eax7 = g413424;
                fun_403220(eax7, 0x41b, __return_address(), a1, a2, a3);
            }
            g414bdc = 0x8000;
        }
        g414bdc = g414bdc - 8;
        eax8 = g414be0;
        tmp32_9 = g414be0 + 8;
        g414be0 = tmp32_9;
    } else {
        eax8 = g40ee28;
        g40ee28 = *reinterpret_cast<void***>(eax8);
    }
    *reinterpret_cast<void***>(eax8) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax8 + 4) = reinterpret_cast<void**>(0);
    return eax8;
}

void fun_40ae10(void*** a1, void** a2) {
    *reinterpret_cast<void***>(a2) = *a1;
    *a1 = a2;
    return;
}

void** g413a2c = reinterpret_cast<void**>(0);

void** fun_401cc0() {
    void** edi1;
    uint32_t esi2;
    void** eax3;
    void** v4;
    void** eax5;

    edi1 = g413a2c;
    if (edi1) {
        esi2 = free;
        do {
            eax3 = g413a2c;
            g413a2c = *reinterpret_cast<void***>(eax3);
            v4 = *reinterpret_cast<void***>(edi1 + 4);
            esi2(v4);
            eax5 = fun_40ada0(edi1);
            edi1 = g413a2c;
        } while (edi1);
    }
    return eax5;
}

int32_t _mbstok = 0x15392;

void** fun_401d00(void** a1, void** a2) {
    void** v3;
    void** esi4;
    void** v5;
    void** edi6;
    void** v7;
    void** ebp8;
    void** edi9;
    void** esi10;
    void** v11;
    int32_t eax12;
    void** ebx13;
    void** v14;
    void** eax15;
    void** v16;
    int1_t zf17;
    void** ebp18;
    void** v19;
    int1_t zf20;
    void** eax21;
    void** ebp22;
    void** eax23;
    void** eax24;
    void** eax25;
    void** v26;
    void** ecx27;
    void** eax28;

    v3 = esi4;
    v5 = edi6;
    v7 = ebp8;
    edi9 = a2;
    if (edi9) {
        esi10 = a1;
        do {
            v11 = *reinterpret_cast<void***>(edi9 + 4);
            eax12 = reinterpret_cast<int32_t>(_mbschr(v11, 36));
            if (eax12) {
                ebx13 = g413a28;
                v14 = *reinterpret_cast<void***>(edi9 + 4);
                eax15 = fun_40b700(v14, 0x413a28);
                v16 = eax15;
                zf17 = g413a28 == ebx13;
                if (!zf17) {
                    do {
                        ebp18 = *reinterpret_cast<void***>(ebx13);
                        v19 = ebx13;
                        ebx13 = ebp18;
                        fun_40ada0(v19);
                        zf20 = g413a28 == ebp18;
                    } while (!zf20);
                }
                eax21 = reinterpret_cast<void**>(_mbstok(v16, " \t"));
                ebp22 = eax21;
                if (ebp22) {
                    do {
                        eax23 = fun_40ad20(v7, v5, v3);
                        eax24 = fun_40add0(ebp22, v7, v5);
                        *reinterpret_cast<void***>(eax23 + 4) = eax24;
                        fun_40ae30(esi10, eax23);
                        eax25 = reinterpret_cast<void**>(_mbstok(0, " \t"));
                        ebp22 = eax25;
                    } while (ebp22);
                }
                free(v16);
                v26 = *reinterpret_cast<void***>(edi9 + 4);
                free(v26);
                ecx27 = *reinterpret_cast<void***>(a2);
                a2 = ecx27;
                eax28 = fun_40ada0(edi9);
            } else {
                a2 = *reinterpret_cast<void***>(a2);
                *reinterpret_cast<void***>(edi9) = reinterpret_cast<void**>(0);
                eax28 = fun_40ae30(esi10, edi9);
            }
            edi9 = a2;
        } while (edi9);
    }
    return eax28;
}

void** fun_40b690(void** ecx, void** a2) {
    void** esi3;
    int32_t eax4;
    void* esp5;
    void** edi6;
    void** eax7;
    void** v8;

    esi3 = a2;
    eax4 = reinterpret_cast<int32_t>(_mbschr(esi3, 36));
    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 8);
    if (eax4 && (fun_40b110(ecx, esi3, reinterpret_cast<int32_t>(esp5) + 8, 0, 0, 0, 0, 0), edi6 = reinterpret_cast<void**>(0), eax7 = fun_40b700(esi3, reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 28 + 4 + 8), esi3 = eax7, v8 = reinterpret_cast<void**>(0), !1)) {
        do {
            edi6 = *reinterpret_cast<void***>(edi6);
            fun_40ada0(v8);
            v8 = edi6;
        } while (edi6);
    }
    return esi3;
}

struct s4 {
    signed char f0;
    void** f1;
};

int32_t fun_401e00(void** a1, void** a2) {
    int32_t ecx3;
    int32_t eax4;
    int32_t eax5;
    int32_t eax6;
    void** esi7;
    void** v8;
    void** ebp9;
    void** edi10;
    void** ebx11;
    int32_t eax12;
    void** edi13;
    void* edx14;
    int32_t ecx15;
    void** edi16;
    void** eax17;
    void** edx18;
    int32_t ecx19;
    void* eax20;
    uint32_t ecx21;
    uint32_t ebp22;
    uint32_t ecx23;
    void*** esi24;
    void** edi25;
    uint32_t ecx26;
    signed char* edi27;
    int32_t ecx28;
    void* eax29;
    uint32_t ecx30;
    uint32_t ebp31;
    signed char* esi32;
    int32_t ecx33;
    void** edi34;
    void* eax35;
    struct s4* edi36;
    uint32_t ecx37;
    uint32_t ecx38;
    void** edi39;
    int32_t ecx40;
    void* eax41;
    uint32_t ecx42;
    uint32_t ebx43;
    signed char* esi44;
    int32_t ecx45;
    void** edi46;
    void* eax47;
    struct s4* edi48;
    uint32_t ecx49;
    void** v50;
    uint32_t ecx51;
    int32_t eax52;

    ecx3 = -1;
    eax4 = eax5 - eax6;
    esi7 = a1;
    v8 = ebp9;
    edi10 = esi7;
    do {
        if (!ecx3) 
            break;
        --ecx3;
        ++edi10;
        ++esi7;
    } while (*reinterpret_cast<void***>(edi10) != *reinterpret_cast<void***>(&eax4));
    ebx11 = a2;
    eax12 = eax4 - eax4;
    edi13 = ebx11;
    edx14 = reinterpret_cast<void*>(~ecx3 - 1);
    ecx15 = -1;
    do {
        if (!ecx15) 
            break;
        --ecx15;
        ++edi13;
        ++esi7;
    } while (*reinterpret_cast<void***>(edi13) != *reinterpret_cast<void***>(&eax12));
    edi16 = esi7;
    eax17 = fun_40acc0(~ecx15 + reinterpret_cast<int32_t>(edx14) - 1 + 2, v8);
    edx18 = eax17;
    ecx19 = -1;
    eax20 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax17) - reinterpret_cast<unsigned char>(eax17));
    do {
        if (!ecx19) 
            break;
        --ecx19;
        ++edi16;
    } while (*reinterpret_cast<void***>(edi16) != *reinterpret_cast<void***>(&eax20));
    ecx21 = reinterpret_cast<uint32_t>(~ecx19);
    ebp22 = ecx21;
    ecx23 = ecx21 >> 2;
    esi24 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi16) - ecx21);
    edi25 = edx18;
    while (ecx23) {
        --ecx23;
        *reinterpret_cast<void***>(edi25) = *esi24;
        edi25 = edi25 + 4;
        esi24 = esi24 + 4;
    }
    ecx26 = ebp22 & 3;
    while (ecx26) {
        --ecx26;
        *reinterpret_cast<void***>(edi25) = *esi24;
        ++edi25;
        ++esi24;
    }
    edi27 = "=";
    ecx28 = -1;
    eax29 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax20) - reinterpret_cast<uint32_t>(eax20));
    do {
        if (!ecx28) 
            break;
        --ecx28;
        ++edi27;
    } while (*edi27 != *reinterpret_cast<signed char*>(&eax29));
    ecx30 = reinterpret_cast<uint32_t>(~ecx28);
    ebp31 = ecx30;
    esi32 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi27) - ecx30);
    ecx33 = -1;
    edi34 = edx18;
    eax35 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax29) - reinterpret_cast<uint32_t>(eax29));
    do {
        if (!ecx33) 
            break;
        --ecx33;
        ++edi34;
        ++esi32;
    } while (*reinterpret_cast<void***>(edi34) != *reinterpret_cast<void***>(&eax35));
    edi36 = reinterpret_cast<struct s4*>(edi34 - 1);
    ecx37 = ebp31 >> 2;
    while (ecx37) {
        --ecx37;
        edi36->f0 = *esi32;
        edi36 = edi36 + 2;
        esi32 = esi32 + 4;
    }
    ecx38 = ebp31 & 3;
    while (ecx38) {
        --ecx38;
        edi36->f0 = *esi32;
        edi36 = reinterpret_cast<struct s4*>(&edi36->f1);
        ++esi32;
    }
    edi39 = ebx11;
    ecx40 = -1;
    eax41 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax35) - reinterpret_cast<uint32_t>(eax35));
    do {
        if (!ecx40) 
            break;
        --ecx40;
        ++edi39;
    } while (*reinterpret_cast<void***>(edi39) != *reinterpret_cast<void***>(&eax41));
    ecx42 = reinterpret_cast<uint32_t>(~ecx40);
    ebx43 = ecx42;
    esi44 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edi39) - ecx42);
    ecx45 = -1;
    edi46 = edx18;
    eax47 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax41) - reinterpret_cast<uint32_t>(eax41));
    do {
        if (!ecx45) 
            break;
        --ecx45;
        ++edi46;
        ++esi44;
    } while (*reinterpret_cast<void***>(edi46) != *reinterpret_cast<void***>(&eax47));
    edi48 = reinterpret_cast<struct s4*>(edi46 - 1);
    ecx49 = ebx43 >> 2;
    while (ecx49) {
        --ecx49;
        edi48->f0 = *esi44;
        edi48 = edi48 + 2;
        esi44 = esi44 + 4;
    }
    v50 = edx18;
    ecx51 = ebx43 & 3;
    while (ecx51) {
        --ecx51;
        edi48->f0 = *esi44;
        edi48 = reinterpret_cast<struct s4*>(&edi48->f1);
        ++esi44;
    }
    eax52 = reinterpret_cast<int32_t>(_putenv(v50));
    return eax52;
}

void*** g413ff0 = reinterpret_cast<void***>(0);

void** fun_407b70(void** a1) {
    void** esi2;
    void** ecx3;
    uint32_t eax4;
    void*** ecx5;
    void** edi6;
    int32_t ebx7;
    void** v8;
    uint32_t eax9;

    esi2 = a1;
    ecx3 = esi2;
    if (!*reinterpret_cast<void***>(esi2)) {
        g413ff0 = reinterpret_cast<void***>(0x413428);
    } else {
        eax4 = 0;
        do {
            eax4 = eax4 + static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx3)));
            ++ecx3;
        } while (*reinterpret_cast<void***>(ecx3));
        ecx5 = reinterpret_cast<void***>((eax4 & 0xff) * 4 + 0x413428);
        g413ff0 = ecx5;
        edi6 = *ecx5;
        if (edi6) 
            goto addr_407ba4_6;
    }
    return 0;
    addr_407ba4_6:
    ebx7 = _mbscmp;
    do {
        v8 = *reinterpret_cast<void***>(edi6 + 4);
        eax9 = reinterpret_cast<uint32_t>(ebx7(v8, esi2));
        if (!eax9) 
            break;
        edi6 = *reinterpret_cast<void***>(edi6);
    } while (edi6);
    goto addr_407bbe_10;
    *reinterpret_cast<unsigned char*>(&eax9) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi6 + 12)) & 16);
    return eax9 - (eax9 + reinterpret_cast<uint1_t>(eax9 < eax9 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax9) < 1))) & reinterpret_cast<unsigned char>(edi6);
    addr_407bbe_10:
    return 0;
}

void** fun_40acf0(void** a1) {
    void** esi2;
    void** edi3;
    void** eax4;
    void** edi5;
    void** edx6;
    uint32_t ecx7;
    uint32_t ecx8;

    esi2 = a1;
    eax4 = fun_40acc0(esi2, edi3);
    edi5 = eax4;
    edx6 = eax4;
    ecx7 = reinterpret_cast<unsigned char>(esi2) >> 2;
    while (ecx7) {
        --ecx7;
        *reinterpret_cast<void***>(edi5) = reinterpret_cast<void**>(0);
        edi5 = edi5 + 4;
        esi2 = esi2 + 4;
    }
    ecx8 = reinterpret_cast<unsigned char>(esi2) & 3;
    while (ecx8) {
        --ecx8;
        *reinterpret_cast<void***>(edi5) = reinterpret_cast<void**>(0);
        ++edi5;
    }
    return edx6;
}

void fun_407bf0(void** a1) {
    void*** ecx2;

    ecx2 = g413ff0;
    fun_40ae10(ecx2, a1);
    g413ff0 = reinterpret_cast<void***>(0);
    return;
}

void** fun_40acc0(void** a1, void** a2) {
    void** eax3;
    void** eax4;
    void** esi5;

    eax3 = reinterpret_cast<void**>(malloc(a1));
    if (!eax3) {
        eax4 = g413424;
        fun_403220(eax4, 0x41b, esi5, __return_address(), a1, a2);
    }
    return eax3;
}

int32_t fun_40ceb4(void** ecx, void** a2, void** a3, void** a4) {
    int32_t v5;
    void* ecx6;
    uint32_t eax7;
    uint32_t* ecx8;

    v5 = reinterpret_cast<int32_t>(__return_address());
    ecx6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
    while (eax7 >= 0x1000) {
        ecx6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx6) - 0x1000);
        eax7 = eax7 - 0x1000;
    }
    ecx8 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ecx6) - eax7);
    *ecx8 = *ecx8;
    return v5;
}

uint32_t fun_40cc50(void** a1);

int32_t _findfirst = 0x1566a;

int32_t _findclose = 0x1565c;

void** fun_40ca30(void** a1);

int32_t fun_40cd20(void** a1, int32_t* a2, int32_t* a3, void** a4, void** a5) {
    void** esi6;
    uint32_t eax7;
    void* esp8;
    uint32_t ebx9;
    int32_t ebx10;
    int32_t ebx11;
    uint32_t ebx12;
    int32_t ebx13;
    int32_t ebp14;
    int32_t v15;
    int32_t eax16;
    int32_t ebx17;
    int32_t eax18;
    int32_t eax19;
    int32_t v20;
    int32_t eax21;
    void** edi22;
    int32_t ecx23;
    uint32_t eax24;
    void** eax25;

    esi6 = a1;
    eax7 = reinterpret_cast<uint32_t>(_mbspbrk(esi6, "\"*?^"));
    esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x104 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 8);
    ebx9 = ebx10 - (ebx11 + reinterpret_cast<uint1_t>(ebx12 < ebx13 + reinterpret_cast<uint1_t>(eax7 < 1))) + 1;
    if (!ebx9) {
        addr_40cd8c_2:
        fun_40cc50(esi6);
        ebp14 = _findfirst;
        v15 = *a2;
        eax16 = reinterpret_cast<int32_t>(ebp14(esi6, v15));
        *a3 = eax16;
        if (eax16 != -1) {
            if (!ebx9 || (ebx17 = _mbschr, eax18 = reinterpret_cast<int32_t>(ebx17(esi6, 42)), !eax18) && (eax19 = reinterpret_cast<int32_t>(ebx17(esi6, 63)), !eax19)) {
                v20 = *a3;
                _findclose(v20);
            }
            eax21 = *a2 + 20;
        } else {
            eax21 = 0;
        }
    } else {
        edi22 = esi6;
        ecx23 = -1;
        eax24 = eax7 - eax7;
        do {
            if (!ecx23) 
                break;
            --ecx23;
            ++edi22;
            ++esi6;
        } while (*reinterpret_cast<void***>(edi22) != *reinterpret_cast<void***>(&eax24));
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi6) == 34)) 
            goto addr_40cd6b_11;
        if (*reinterpret_cast<signed char*>(~ecx23 + reinterpret_cast<unsigned char>(esi6) - 2) != 34) 
            goto addr_40cd6b_11; else 
            goto addr_40cd63_13;
    }
    return eax21;
    addr_40cd6b_11:
    if (*reinterpret_cast<void***>(esi6)) {
        do {
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi6) == 94)) {
                ++esi6;
            }
            ++esi6;
        } while (*reinterpret_cast<void***>(esi6));
    }
    esi6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp8) + 16);
    goto addr_40cd8c_2;
    addr_40cd63_13:
    eax25 = fun_40ca30(esi6);
    esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 - 4 + 4 + 4);
    esi6 = eax25;
    goto addr_40cd6b_11;
}

int32_t _findnext = 0x15678;

int32_t fun_40ce00(int32_t* a1, int32_t a2) {
    int32_t v3;
    int32_t eax4;
    int32_t eax5;

    v3 = *a1;
    eax4 = reinterpret_cast<int32_t>(_findnext(a2, v3));
    if (!eax4) {
        eax5 = fun_404c90(a1);
        return eax5;
    } else {
        _findclose(a2);
        return 0;
    }
}

uint32_t fun_40ae50(void** a1, int32_t a2, void** a3, void** a4);

void** fun_402c70(void** a1, void** a2) {
    void** eax3;
    void** edi4;
    void** esi5;
    void** eax6;
    uint32_t eax7;

    eax3 = fun_40acf0(20);
    eax6 = fun_40add0(a1, edi4, esi5);
    *reinterpret_cast<void***>(eax3 + 4) = eax6;
    *reinterpret_cast<void***>(eax3 + 8) = a2;
    *reinterpret_cast<unsigned char*>(eax3 + 9) = 0;
    *reinterpret_cast<void***>(eax3 + 12) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax3 + 16) = reinterpret_cast<void**>(0);
    eax7 = fun_40ae50(a1, 0x80, 1, edi4);
    fun_40ae10(eax7 * 4 + 0x413828, eax3);
    return eax3;
}

void** g413a90 = reinterpret_cast<void**>(0);

void** g413a8c = reinterpret_cast<void**>(0);

struct s5 {
    unsigned char f0;
    signed char[3] pad4;
    void** f4;
    signed char[7] pad12;
    void** fc;
};

void** fun_404ca0(struct s5** a1, void** a2, void** a3);

void** g413a84 = reinterpret_cast<void**>(0);

void** g413a88 = reinterpret_cast<void**>(0);

void* g413010 = reinterpret_cast<void*>(0);

void** fun_408d10(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_40a500(void** ecx, void** a2, void** a3, void** a4, void** a5, void*** a6, void** a7, void*** a8, void*** a9, void** a10, void** a11);

void** g413a94 = reinterpret_cast<void**>(0);

void** g413a98 = reinterpret_cast<void**>(0);

signed char g414008 = 0;

void** fun_4036c0(void** a1, void** a2, void** a3, unsigned char a4, void** a5, void** a6, void** a7);

void fun_40cea0(void* a1, void** a2, void** a3);

int32_t g4133b0 = 1;

void** fun_402c40(void** a1, void** a2, void** a3);

uint32_t g413a50 = 0;

void** fun_402870(void** a1, void** a2, void** a3, void** a4);

void** g10;

void** fun_402080(void** a1, signed char a2, void*** a3, void** a4);

void** fun_40aec0(void** a1, int32_t a2, void*** a3, void** a4);

void** fun_4020e0(void** ecx, void** a2, unsigned char a3, void*** a4, void* a5, void** a6) {
    void** v7;
    void** v8;
    void** ebp9;
    void*** ebp10;
    void** v11;
    void** esi12;
    void** v13;
    void** edi14;
    void** v15;
    void** edi16;
    void** ebx17;
    void** eax18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;
    void** v25;
    void** v26;
    void** v27;
    void** edx28;
    void** v29;
    void** edx30;
    int32_t eax31;
    void** eax32;
    void** esi33;
    void** edx34;
    int32_t eax35;
    void** eax36;
    void** v37;
    void* eax38;
    void** v39;
    void** ecx40;
    void** v41;
    void** v42;
    void** eax43;
    void** ecx44;
    void** edx45;
    int1_t zf46;
    int1_t zf47;
    int1_t zf48;
    int1_t zf49;
    void** v50;
    signed char cl51;
    int1_t zf52;
    int1_t zf53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** eax59;
    void** eax60;
    void** v61;
    void** edx62;
    void** eax63;
    void** v64;
    void** v65;
    void** eax66;
    int1_t zf67;
    int1_t zf68;
    int1_t zf69;
    int1_t zf70;
    int1_t zf71;
    unsigned char al72;
    unsigned char al73;
    unsigned char al74;
    void** eax75;
    void** v76;
    void** v77;
    uint1_t cf78;
    void** v79;
    void** v80;
    void** esi81;
    void** ecx82;
    void** edx83;
    void** v84;
    void** v85;
    void** edx86;
    void** v87;
    void** eax88;
    void** v89;
    void** ebx90;
    void** eax91;
    void** v92;
    void** v93;
    void** v94;
    void** eax95;
    int1_t zf96;
    void** eax97;
    void** eax98;
    int32_t eax99;
    void** eax100;
    int1_t zf101;
    void** eax102;
    void** v103;
    void** eax104;
    void** eax105;
    void** v106;
    void** eax107;
    void** ebx108;
    void** v109;
    void** eax110;
    int1_t zf111;
    void** ecx112;
    int1_t zf113;
    signed char bl114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** eax119;
    void** edx120;
    int32_t eax121;
    void** eax122;
    int1_t zf123;
    void** eax124;
    void** ecx125;
    unsigned char al126;
    unsigned char al127;
    unsigned char al128;
    void** ecx129;
    void** ecx130;
    void** v131;
    void* eax132;
    void** eax133;

    v7 = reinterpret_cast<void**>(__return_address());
    v8 = ebp9;
    ebp10 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_40ceb4(ecx, v8, v7, a2);
    v11 = esi12;
    v13 = reinterpret_cast<void**>(0);
    edi14 = a2;
    if (edi14) {
        if (*reinterpret_cast<unsigned char*>(edi14 + 9) & 1) {
            v15 = *reinterpret_cast<void***>(edi14 + 4);
            fun_403220(0, 0x42f, v15, edi16, v11, ebx17);
        }
        if (*reinterpret_cast<unsigned char*>(edi14 + 9) & 2) 
            goto addr_40212d_5;
    } else {
        eax18 = reinterpret_cast<void**>(0);
        *a4 = reinterpret_cast<void**>(0);
        goto addr_402856_7;
    }
    fun_40ceb4(ecx, edi16, v11, ebx17);
    v19 = reinterpret_cast<void**>(0);
    v20 = reinterpret_cast<void**>(0);
    v21 = reinterpret_cast<void**>(0);
    v22 = reinterpret_cast<void**>(0);
    v23 = reinterpret_cast<void**>(0);
    eax24 = *reinterpret_cast<void***>(edi14 + 4);
    v25 = reinterpret_cast<void**>(0);
    v26 = reinterpret_cast<void**>(0);
    v27 = reinterpret_cast<void**>(0);
    *reinterpret_cast<unsigned char*>(edi14 + 9) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi14 + 9) | 1);
    g413a90 = eax24;
    g413a8c = eax24;
    edx28 = *reinterpret_cast<void***>(edi14 + 16);
    v29 = edx28;
    if (edx28 && (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(edx28 + 4) + 16)) & 32 && (edx30 = *reinterpret_cast<void***>(edi14 + 4), eax31 = fun_40cd20(edx30, ebp10 - 28, ebp10 - 40, 0, v11), !!eax31))) {
        eax32 = fun_404ca0(ebp10 - 28, 0, v11);
        v22 = eax32;
    }
    if (v29) 
        goto addr_4021de_11;
    addr_40251f_12:
    g413a84 = reinterpret_cast<void**>(0);
    g413a88 = reinterpret_cast<void**>(0);
    esi33 = *a4;
    if (!esi33) {
        if (!*reinterpret_cast<void***>(edi14 + 12)) {
            edx34 = *reinterpret_cast<void***>(edi14 + 4);
            eax35 = fun_40cd20(edx34, ebp10 - 28, ebp10 - 40, v25, v11);
            if (eax35) {
                eax36 = fun_404ca0(ebp10 - 28, v25, v11);
                esi33 = eax36;
            }
        } else {
            esi33 = *reinterpret_cast<void***>(edi14 + 12);
        }
    }
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi14 + 8)) & 1) {
        v37 = *reinterpret_cast<void***>(edi14 + 4);
        eax38 = g413010;
        fun_408d10(reinterpret_cast<uint32_t>(eax38) + reinterpret_cast<uint32_t>(eax38), v37, esi33, v25, v11, v22);
    }
    v39 = reinterpret_cast<void**>(ebp10 + 0xffffffdc);
    ecx40 = reinterpret_cast<void**>(ebp10 + 0xffffffe0);
    v41 = ecx40;
    v13 = esi33;
    v42 = reinterpret_cast<void**>(0x4025ce);
    eax43 = fun_40a500(ecx40, edi14, ebp10 + 0xfffffeb8, v13, v41, ebp10 - 24, v39, ebp10 - 52, ebp10 + 24, v25, v11);
    if (eax43 && !v21) {
        g413a88 = reinterpret_cast<void**>(ebp10 + 0xfffffeb8);
        v20 = *reinterpret_cast<void***>(eax43 + 12);
    }
    ecx44 = *reinterpret_cast<void***>(edi14 + 4);
    edx45 = v41;
    g413a90 = ecx44;
    g413a8c = ecx44;
    g413a94 = edx45;
    zf46 = g4133a4 == 0;
    g413a98 = v39;
    if ((zf46 || *reinterpret_cast<unsigned char*>(edi14 + 9) & 8) && v13 || reinterpret_cast<unsigned char>(v26) <= reinterpret_cast<unsigned char>(esi33) && (((zf47 = g4133b8 == 0, zf47) || v26 != esi33) && ((esi33 || v26) && !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi14 + 8)) & 16)))) {
        zf48 = (g4133d4 & 8) == 0;
        if (zf48 && ((zf49 = reinterpret_cast<int1_t>(g413010 == 1), zf49) && !(*reinterpret_cast<unsigned char*>(edi14 + 9) & 8))) {
            v50 = *reinterpret_cast<void***>(edi14 + 4);
            v39 = reinterpret_cast<void**>(0x402789);
            fun_403370(2, v50, v25, v11, v22, v8, v7);
        }
    } else {
        cl51 = g414008;
        g414008 = 1;
        *reinterpret_cast<signed char*>(&v22) = cl51;
        if (!v21) {
            if (!v20) {
                zf52 = (g4133d4 & 16) == 0;
                if (zf52) {
                    if (!a5 && !esi33) {
                        zf53 = g4133a4 == 0;
                        if (zf53) {
                            v54 = *reinterpret_cast<void***>(edi14 + 4);
                            v39 = reinterpret_cast<void**>(0);
                            fun_403220(0, 0x431, v54, v25, v11, v22);
                        } else {
                            v13 = reinterpret_cast<void**>(1);
                        }
                    }
                } else {
                    edx45 = v55;
                    v56 = edx45;
                    v39 = v57;
                    v41 = *reinterpret_cast<void***>(edi14 + 4);
                    eax59 = fun_4036c0(v41, v58, v39, *reinterpret_cast<unsigned char*>(&v56), a6, v25, v11);
                    v13 = eax59 + 0x4026e9;
                }
            } else {
                edx45 = *reinterpret_cast<void***>(edi14 + 8);
                eax60 = *reinterpret_cast<void***>(eax43 + 16);
                v61 = edx45;
                v39 = eax60;
                edx62 = *reinterpret_cast<void***>(edi14 + 4);
                v41 = edx62;
                eax63 = fun_4036c0(v41, v20, v39, *reinterpret_cast<unsigned char*>(&v61), a6, v25, v11);
                v13 = eax63 + 0x4026bf;
            }
        } else {
            if (!a6) {
                if (!v39) {
                    a6 = reinterpret_cast<void**>(0);
                } else {
                    a6 = v41;
                }
            }
            edx45 = *reinterpret_cast<void***>(v21 + 16);
            v64 = edx45;
            v39 = *reinterpret_cast<void***>(v21 + 12);
            v65 = *reinterpret_cast<void***>(v21 + 8);
            v41 = *reinterpret_cast<void***>(edi14 + 4);
            eax66 = fun_4036c0(v41, v65, v39, *reinterpret_cast<unsigned char*>(&v64), a6, v25, v11);
            v13 = eax66 + 0x40269b;
        }
        g414008 = *reinterpret_cast<signed char*>(&v22);
        if (v21 || (v20 || (zf67 = g413a98 == 0, zf67))) {
            fun_40cea0(ebp10 - 48, v25, v11);
            v42 = reinterpret_cast<void**>(0x4025d0);
        } else {
            v42 = v26;
        }
        if (v27 && v21) {
            *reinterpret_cast<void***>(v27) = v42;
        }
    }
    zf68 = g4133a4 == 0;
    if (zf68) 
        goto addr_4027d2_44;
    if (!v13) 
        goto addr_4027d2_44;
    g4133b0 = 0;
    if (!(*reinterpret_cast<unsigned char*>(edi14 + 9) & 8)) {
        zf69 = reinterpret_cast<int1_t>(g413010 == 1);
        if (!zf69) {
            addr_4027d2_44:
            zf70 = (g4133d4 & 8) == 0;
            if (zf70 || (zf71 = reinterpret_cast<int1_t>(g413010 == 1), !zf71)) {
                al72 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi14 + 9) & 0xfe);
                *reinterpret_cast<unsigned char*>(edi14 + 9) = al72;
                al73 = reinterpret_cast<unsigned char>(al72 | 2);
                *reinterpret_cast<unsigned char*>(edi14 + 9) = al73;
                if (reinterpret_cast<signed char>(v13) <= reinterpret_cast<signed char>(0)) {
                    al74 = reinterpret_cast<unsigned char>(al73 & 0xfb);
                } else {
                    al74 = reinterpret_cast<unsigned char>(al73 | 4);
                }
                *reinterpret_cast<unsigned char*>(edi14 + 9) = al74;
                eax75 = v42;
                if (reinterpret_cast<unsigned char>(eax75) <= reinterpret_cast<unsigned char>(esi33)) {
                    eax75 = esi33;
                }
                *reinterpret_cast<void***>(edi14 + 12) = eax75;
                *a4 = eax75;
                v76 = v39;
                if (v39 != v41) {
                    fun_402c40(v76, v25, v11);
                    v76 = v41;
                }
                fun_402c40(v76, v25, v11);
            } else {
                v77 = v39;
                if (v39 != v41) {
                    fun_402c40(v77, v25, v11);
                    v77 = v41;
                }
                fun_402c40(v77, v25, v11);
                cf78 = reinterpret_cast<uint1_t>(g413a50 < 1);
                eax18 = reinterpret_cast<void**>(1 - cf78);
                goto addr_402856_7;
            }
        } else {
            v79 = *reinterpret_cast<void***>(edi14 + 4);
            v80 = reinterpret_cast<void**>(0xfaa);
            goto addr_4027c8_60;
        }
    } else {
        v79 = *reinterpret_cast<void***>(edi14 + 4);
        v80 = reinterpret_cast<void**>(0xfab);
        goto addr_4027c8_60;
    }
    addr_402853_62:
    eax18 = v13;
    addr_402856_7:
    return eax18;
    addr_4027c8_60:
    v39 = reinterpret_cast<void**>(0);
    fun_403220(0, v80, v79, v25, v11, v22);
    goto addr_4027d2_44;
    do {
        addr_4021de_11:
        esi81 = reinterpret_cast<void**>(0);
        ecx82 = *reinterpret_cast<void***>(v29 + 4);
        edx83 = ecx82 + 20;
        v84 = edx83;
        if (!*reinterpret_cast<void***>(edx83)) {
            v85 = *reinterpret_cast<void***>(edi14 + 4);
            edx86 = v85;
            v27 = v84;
            v87 = reinterpret_cast<void**>(0x402219);
            eax88 = fun_402870(edx86, v85, v25, v11);
            v89 = eax88;
            ebx90 = eax88;
            if (ebx90) {
                do {
                    eax91 = *reinterpret_cast<void***>(ebx90 + 8);
                    v92 = reinterpret_cast<void**>(0);
                    v25 = eax91;
                    edx86 = g10;
                    v93 = edx86;
                    v94 = *reinterpret_cast<void***>(ebx90 + 4);
                    v19 = reinterpret_cast<void**>(0x402242);
                    eax95 = fun_402080(v94, *reinterpret_cast<signed char*>(&v93), ebp10 - 12, 0);
                    v13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v13) + reinterpret_cast<unsigned char>(eax95));
                    zf96 = g4133a4 == 0;
                    if (!zf96 && eax95) {
                        v92 = reinterpret_cast<void**>(1);
                        eax97 = *reinterpret_cast<void***>(ebx90 + 4);
                        v19 = reinterpret_cast<void**>(0x402267);
                        eax98 = fun_40aec0(eax97, 0x80, 0x413828, 1);
                        if (!(*reinterpret_cast<unsigned char*>(eax98 + 9) & 8)) {
                            g4133b0 = 0;
                            v92 = *reinterpret_cast<void***>(ebx90 + 4);
                            fun_403220(0, 0xfaa, v92, v25, v11, v22);
                        }
                        *reinterpret_cast<unsigned char*>(edi14 + 9) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi14 + 9) | 8);
                    }
                    if (reinterpret_cast<unsigned char>(esi81) <= reinterpret_cast<unsigned char>(v25)) {
                        esi81 = v25;
                    }
                    if (!v22 && (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v92 + 16)) & 32) && (edx86 = *reinterpret_cast<void***>(edi14 + 4), eax99 = fun_40cd20(edx86, ebp10 - 28, ebp10 - 40, v25, v11), !!eax99))) {
                        eax100 = fun_404ca0(ebp10 - 28, v25, v11);
                        v22 = eax100;
                        *reinterpret_cast<void***>(edi14 + 12) = eax100;
                    }
                    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi14 + 8)) & 16 || (reinterpret_cast<unsigned char>(v25) > reinterpret_cast<unsigned char>(v22) || (zf101 = g4133b8 == 0, !zf101) && v25 == v22)) {
                        eax102 = fun_40ad20(v25, v11, v22);
                        v11 = eax102;
                        v103 = *reinterpret_cast<void***>(ebx90 + 4);
                        eax104 = fun_40add0(v103, v25, v11);
                        *reinterpret_cast<void***>(v11 + 4) = eax104;
                        fun_40ae30(ebp10 + 0xffffffe0, v11);
                    }
                    eax105 = fun_40ad20(v25, v11, v22);
                    v11 = eax105;
                    v106 = *reinterpret_cast<void***>(ebx90 + 4);
                    eax107 = fun_40add0(v106, v25, v11);
                    v85 = v11;
                    *reinterpret_cast<void***>(v11 + 4) = eax107;
                    v89 = reinterpret_cast<void**>(ebp10 + 0xffffffe8);
                    v87 = reinterpret_cast<void**>(0x402328);
                    fun_40ae30(v89, v85);
                    ebx90 = *reinterpret_cast<void***>(ebx90);
                } while (ebx90);
            }
            ebx108 = v89;
            if (ebx108) {
                do {
                    v109 = *reinterpret_cast<void***>(ebx108 + 4);
                    free(v109, v25, v11);
                    v85 = ebx108;
                    free();
                    ebx108 = reinterpret_cast<void**>(0x402352);
                } while (1);
            }
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v85 + 16)) & 32)) {
                if (*reinterpret_cast<void***>(v85 + 8)) {
                    if (!v21) {
                        v21 = v85;
                    } else {
                        v85 = *reinterpret_cast<void***>(edi14 + 4);
                        fun_403220(0, 0xfa4, v85, v25, v11, v22);
                    }
                }
                eax110 = v26;
                if (reinterpret_cast<unsigned char>(eax110) <= reinterpret_cast<unsigned char>(esi81)) {
                    eax110 = esi81;
                }
                v26 = eax110;
            } else {
                if (*reinterpret_cast<void***>(v85 + 8)) {
                    g413a94 = v19;
                    zf111 = g4133a4 == 0;
                    ecx112 = *reinterpret_cast<void***>(edi14 + 4);
                    g413a90 = ecx112;
                    g413a8c = ecx112;
                    g413a84 = reinterpret_cast<void**>(0);
                    g413a88 = reinterpret_cast<void**>(0);
                    g413a98 = v87;
                    if ((!zf111 && !(*reinterpret_cast<unsigned char*>(edi14 + 9) & 8) || !v13) && reinterpret_cast<unsigned char>(esi81) > reinterpret_cast<unsigned char>(v22) || ((zf113 = g4133b8 == 0, !zf113) && esi81 == v22 || (!v22 && !esi81 || !*reinterpret_cast<void***>(v85)))) {
                        bl114 = g414008;
                        g414008 = 1;
                        if (!a6) {
                            if (0) {
                                a6 = reinterpret_cast<void**>(0);
                            } else {
                                a6 = *reinterpret_cast<void***>(v87 + 4);
                            }
                        }
                        edx86 = *reinterpret_cast<void***>(v85 + 16);
                        v115 = edx86;
                        v116 = *reinterpret_cast<void***>(v85 + 12);
                        v117 = *reinterpret_cast<void***>(v85 + 8);
                        v118 = *reinterpret_cast<void***>(edi14 + 4);
                        eax119 = fun_4036c0(v118, v117, v116, *reinterpret_cast<unsigned char*>(&v115), a6, v25, v11);
                        v13 = eax119 + 0x40242b;
                        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi14 + 8)) & 4 || (edx120 = *reinterpret_cast<void***>(edi14 + 4), v116 = edx120, eax121 = fun_40cd20(v116, ebp10 - 28, ebp10 - 40, v25, v11), eax121 == 0)) {
                            if (!v26) {
                                fun_40cea0(ebp10 - 48, v25, v11);
                            } else {
                                v23 = v26;
                            }
                        } else {
                            eax122 = fun_404ca0(ebp10 - 28, v25, v11);
                            v23 = eax122;
                        }
                        *reinterpret_cast<void***>(v84) = v23;
                        v85 = v116;
                        if (v116 != v118) {
                            fun_402c40(v85, v25, v11);
                            v85 = v118;
                        }
                        fun_402c40(v85, v25, v11);
                        v19 = reinterpret_cast<void**>(0);
                        g414008 = bl114;
                    }
                    zf123 = g4133a4 == 0;
                    if (!zf123 && *reinterpret_cast<unsigned char*>(edi14 + 9) & 8) {
                        v85 = *reinterpret_cast<void***>(edi14 + 4);
                        fun_403220(0, 0xfab, v85, v25, v11, v22);
                    }
                }
            }
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v85 + 16)) & 32)) 
                continue;
            if (!*reinterpret_cast<void***>(v29)) 
                break;
        } else {
            eax124 = v22;
            if (reinterpret_cast<unsigned char>(eax124) <= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx83))) {
                eax124 = *reinterpret_cast<void***>(edx83);
            }
            v22 = eax124;
        }
        ecx125 = *reinterpret_cast<void***>(v29);
        v29 = ecx125;
    } while (ecx125);
    goto addr_40251f_12;
    al126 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi14 + 9) & 0xfe);
    *reinterpret_cast<unsigned char*>(edi14 + 9) = al126;
    al127 = reinterpret_cast<unsigned char>(al126 | 2);
    *reinterpret_cast<unsigned char*>(edi14 + 9) = al127;
    if (reinterpret_cast<signed char>(v13) <= reinterpret_cast<signed char>(0)) {
        al128 = reinterpret_cast<unsigned char>(al127 & 0xfb);
    } else {
        al128 = reinterpret_cast<unsigned char>(al127 | 4);
    }
    ecx129 = v23;
    *reinterpret_cast<unsigned char*>(edi14 + 9) = al128;
    if (reinterpret_cast<unsigned char>(ecx129) <= reinterpret_cast<unsigned char>(v22)) {
        ecx129 = v22;
    }
    *reinterpret_cast<void***>(edi14 + 12) = ecx129;
    *a4 = ecx129;
    goto addr_402853_62;
    addr_40212d_5:
    if (a3 & 1) {
        ecx130 = *reinterpret_cast<void***>(edi14 + 4);
        v131 = *reinterpret_cast<void***>(edi14 + 12);
        eax132 = g413010;
        fun_408d10(reinterpret_cast<uint32_t>(eax132) + reinterpret_cast<uint32_t>(eax132), ecx130, v131, edi16, v11, ebx17);
    }
    eax133 = *reinterpret_cast<void***>(edi14 + 12);
    *a4 = eax133;
    *reinterpret_cast<unsigned char*>(&eax133) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi14 + 9) & 4);
    eax18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax133) - (reinterpret_cast<unsigned char>(eax133) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax133) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax133) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax133) < 1)))) + 1);
    goto addr_402856_7;
}

int32_t ctime = 0x155e2;

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(96);

void** fun_408d10(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** eax7;
    void** eax8;
    void** eax9;
    void** ecx10;
    void** v11;
    void** eax12;

    if (a3) {
        eax7 = reinterpret_cast<void**>(ctime(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, a3));
        *reinterpret_cast<signed char*>(eax7 + 24) = 0;
        eax8 = image_base_;
        eax9 = fun_403370(4, a1, eax8, a2, 40 - reinterpret_cast<unsigned char>(a1), eax7, a3);
        return eax9;
    } else {
        ecx10 = image_base_;
        eax12 = fun_403370(6, a1, ecx10, a2, v11, __return_address(), a1);
        return eax12;
    }
}

void** fun_404ca0(struct s5** a1, void** a2, void** a3) {
    void** eax4;

    if (!((*a1)->f0 & 16)) {
        eax4 = (*a1)->fc;
    } else {
        eax4 = (*a1)->f4;
        if (reinterpret_cast<int1_t>(eax4 == 0xffffffff)) {
            return (*a1)->fc;
        }
    }
    return eax4;
}

void** fun_402080(void** a1, signed char a2, void*** a3, void** a4) {
    void* edi5;
    void* tmp32_6;
    void** eax7;
    int32_t ebx8;
    int32_t v9;
    int32_t v10;
    void** eax11;

    edi5 = reinterpret_cast<void*>(1);
    tmp32_6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(g413010) + 1);
    g413010 = tmp32_6;
    eax7 = fun_40aec0(a1, 0x80, 0x413828, 1);
    *reinterpret_cast<signed char*>(&ebx8) = a2;
    if (!eax7) {
        v9 = ebx8;
        edi5 = reinterpret_cast<void*>(0);
        eax7 = fun_402c70(a1, *reinterpret_cast<void***>(&v9));
    }
    v10 = ebx8;
    eax11 = fun_4020e0(a4, eax7, *reinterpret_cast<unsigned char*>(&v10), a3, edi5, a4);
    g413010 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(g413010) - 1);
    return eax11;
}

void** fun_40c8d0(void** a1, void*** a2, uint32_t a3);

int32_t _mbsnbcmp = 0x15576;

void** g4149b8 = reinterpret_cast<void**>(46);

void** g4149ba = reinterpret_cast<void**>(0);

void** g414be4 = reinterpret_cast<void**>(34);

void** fun_40aec0(void** a1, int32_t a2, void*** a3, void** a4) {
    void** esi5;
    void** ebx6;
    void** v7;
    void** ebp8;
    uint32_t eax9;
    void** esi10;
    void** eax11;
    int32_t edi12;
    void** v13;
    uint32_t eax14;
    int32_t edi15;
    int32_t eax16;
    int32_t eax17;
    void** ebp18;
    void** edi19;
    int32_t ecx20;
    int32_t eax21;
    void** eax22;
    void** cx23;
    int32_t eax24;
    void** edi25;
    int32_t ecx26;
    int32_t eax27;
    uint32_t ecx28;
    uint32_t edx29;
    signed char* esi30;
    int32_t ecx31;
    void** edi32;
    int32_t eax33;
    struct s4* edi34;
    uint32_t ecx35;
    uint32_t ecx36;
    uint32_t eax37;
    void** eax38;
    uint32_t eax39;
    void** eax40;
    void** edi41;
    void** edi42;
    int32_t ecx43;
    void* eax44;
    void** edi45;
    void** eax46;
    void** ebp47;
    int32_t ecx48;
    void* eax49;
    uint32_t ecx50;
    uint32_t edx51;
    signed char* esi52;
    int32_t ecx53;
    void** edi54;
    void* eax55;
    struct s4* edi56;
    uint32_t ecx57;
    uint32_t ecx58;
    signed char* edi59;
    int32_t ecx60;
    void* eax61;
    uint32_t ecx62;
    uint32_t edx63;
    signed char* esi64;
    int32_t ecx65;
    void** edi66;
    void* eax67;
    struct s4* edi68;
    uint32_t ecx69;
    uint32_t ecx70;
    void** eax71;
    uint32_t eax72;
    void** eax73;

    esi5 = reinterpret_cast<void**>(0);
    ebx6 = a1;
    v7 = ebp8;
    if (!*reinterpret_cast<void***>(ebx6)) 
        goto addr_40b0f1_2;
    eax9 = fun_40ae50(ebx6, a2, a4, v7);
    if (!a4) {
        esi10 = a3[eax9 * 4];
        if (!esi10) {
            addr_40b0f1_2:
            eax11 = reinterpret_cast<void**>(0);
        } else {
            edi12 = _mbscmp;
            do {
                v13 = *reinterpret_cast<void***>(esi10 + 4);
                eax14 = reinterpret_cast<uint32_t>(edi12(v13, ebx6));
                if (!eax14) 
                    goto addr_40b0fa_7;
                esi10 = *reinterpret_cast<void***>(esi10);
            } while (esi10);
            goto addr_40b0f1_2;
        }
    } else {
        eax11 = fun_40c8d0(ebx6, a3, eax9);
        if (!eax11) {
            edi15 = _mbsnbcmp;
            eax16 = reinterpret_cast<int32_t>(edi15(ebx6, ".\\", 2));
            if (!eax16 || (eax17 = reinterpret_cast<int32_t>(edi15(ebx6, "./", 2)), eax17 == 0)) {
                ebp18 = ebx6 + 2;
            } else {
                edi19 = ebx6;
                ecx20 = -1;
                eax21 = eax17 - eax17;
                do {
                    if (!ecx20) 
                        break;
                    --ecx20;
                    ++edi19;
                } while (*reinterpret_cast<void***>(edi19) != *reinterpret_cast<void***>(&eax21));
                eax22 = fun_40acc0(~ecx20 + 2, v7);
                cx23 = g4149b8;
                ebp18 = eax22;
                *reinterpret_cast<void***>(ebp18) = cx23;
                eax24 = reinterpret_cast<int32_t>(".\\");
                edi25 = ebx6;
                ecx26 = -1;
                *reinterpret_cast<void***>(&eax24) = g4149ba;
                *reinterpret_cast<void***>(ebp18 + 2) = *reinterpret_cast<void***>(&eax24);
                eax27 = eax24 - eax24;
                do {
                    if (!ecx26) 
                        break;
                    --ecx26;
                    ++edi25;
                } while (*reinterpret_cast<void***>(edi25) != *reinterpret_cast<void***>(&eax27));
                ecx28 = reinterpret_cast<uint32_t>(~ecx26);
                edx29 = ecx28;
                esi30 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edi25) - ecx28);
                ecx31 = -1;
                edi32 = ebp18;
                eax33 = eax27 - eax27;
                do {
                    if (!ecx31) 
                        break;
                    --ecx31;
                    ++edi32;
                    ++esi30;
                } while (*reinterpret_cast<void***>(edi32) != *reinterpret_cast<void***>(&eax33));
                edi34 = reinterpret_cast<struct s4*>(edi32 - 1);
                ecx35 = edx29 >> 2;
                while (ecx35) {
                    --ecx35;
                    edi34->f0 = *esi30;
                    edi34 = edi34 + 2;
                    esi30 = esi30 + 4;
                }
                ecx36 = edx29 & 3;
                while (ecx36) {
                    --ecx36;
                    edi34->f0 = *esi30;
                    edi34 = reinterpret_cast<struct s4*>(&edi34->f1);
                    ++esi30;
                }
                esi5 = reinterpret_cast<void**>(1);
            }
            eax37 = fun_40ae50(ebp18, a2, a4, v7);
            eax38 = fun_40c8d0(ebp18, a3, eax37);
            if (!eax38) {
                if (reinterpret_cast<unsigned char>(ebx6) - reinterpret_cast<unsigned char>(ebp18) != 0xfffffffe) {
                    *reinterpret_cast<void***>(ebp18 + 1) = reinterpret_cast<void**>(47);
                }
                eax39 = fun_40ae50(ebp18, a2, a4, v7);
                eax40 = fun_40c8d0(ebp18, a3, eax39);
                edi41 = eax40;
                if (esi5) {
                    eax40 = reinterpret_cast<void**>(free(ebp18));
                }
                if (!edi41) {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx6) == 34)) {
                        edi42 = ebx6;
                        ecx43 = -1;
                        eax44 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax40) - reinterpret_cast<unsigned char>(eax40));
                        do {
                            if (!ecx43) 
                                break;
                            --ecx43;
                            ++edi42;
                        } while (*reinterpret_cast<void***>(edi42) != *reinterpret_cast<void***>(&eax44));
                        edi45 = ebx6;
                        eax46 = fun_40acf0(~ecx43 + 2);
                        ebp47 = eax46;
                        ecx48 = -1;
                        eax46 = g414be4;
                        *reinterpret_cast<void***>(ebp47) = eax46;
                        eax49 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax46) - reinterpret_cast<unsigned char>(eax46));
                        do {
                            if (!ecx48) 
                                break;
                            --ecx48;
                            ++edi45;
                        } while (*reinterpret_cast<void***>(edi45) != *reinterpret_cast<void***>(&eax49));
                        ecx50 = reinterpret_cast<uint32_t>(~ecx48);
                        edx51 = ecx50;
                        esi52 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edi45) - ecx50);
                        ecx53 = -1;
                        edi54 = ebp47;
                        eax55 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax49) - reinterpret_cast<uint32_t>(eax49));
                        do {
                            if (!ecx53) 
                                break;
                            --ecx53;
                            ++edi54;
                            ++esi52;
                        } while (*reinterpret_cast<void***>(edi54) != *reinterpret_cast<void***>(&eax55));
                        edi56 = reinterpret_cast<struct s4*>(edi54 - 1);
                        ecx57 = edx51 >> 2;
                        while (ecx57) {
                            --ecx57;
                            edi56->f0 = *esi52;
                            edi56 = edi56 + 2;
                            esi52 = esi52 + 4;
                        }
                        ecx58 = edx51 & 3;
                        while (ecx58) {
                            --ecx58;
                            edi56->f0 = *esi52;
                            edi56 = reinterpret_cast<struct s4*>(&edi56->f1);
                            ++esi52;
                        }
                        edi59 = "\"";
                        ecx60 = -1;
                        eax61 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax55) - reinterpret_cast<uint32_t>(eax55));
                        do {
                            if (!ecx60) 
                                break;
                            --ecx60;
                            ++edi59;
                        } while (*edi59 != *reinterpret_cast<signed char*>(&eax61));
                        ecx62 = reinterpret_cast<uint32_t>(~ecx60);
                        edx63 = ecx62;
                        esi64 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi59) - ecx62);
                        ecx65 = -1;
                        edi66 = ebp47;
                        eax67 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax61) - reinterpret_cast<uint32_t>(eax61));
                        do {
                            if (!ecx65) 
                                break;
                            --ecx65;
                            ++edi66;
                            ++esi64;
                        } while (*reinterpret_cast<void***>(edi66) != *reinterpret_cast<void***>(&eax67));
                        edi68 = reinterpret_cast<struct s4*>(edi66 - 1);
                        ecx69 = edx63 >> 2;
                        while (ecx69) {
                            --ecx69;
                            edi68->f0 = *esi64;
                            edi68 = edi68 + 2;
                            esi64 = esi64 + 4;
                        }
                        ecx70 = edx63 & 3;
                        while (ecx70) {
                            --ecx70;
                            edi68->f0 = *esi64;
                            edi68 = reinterpret_cast<struct s4*>(&edi68->f1);
                            ++esi64;
                        }
                    } else {
                        eax71 = fun_40ca30(ebx6);
                        ebp47 = eax71;
                    }
                    eax72 = fun_40ae50(ebp47, a2, a4, v7);
                    eax73 = fun_40c8d0(ebp47, a3, eax72);
                    free(ebp47);
                    return eax73;
                } else {
                    return edi41;
                }
            } else {
                if (esi5) {
                    free(ebp18);
                }
                return eax38;
            }
        }
    }
    return eax11;
    addr_40b0fa_7:
    *reinterpret_cast<unsigned char*>(&eax14) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi10 + 12)) & 16);
    return eax14 - (eax14 + reinterpret_cast<uint1_t>(eax14 < eax14 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax14) < 1))) & reinterpret_cast<unsigned char>(esi10);
}

void** fun_402c40(void** a1, void** a2, void** a3) {
    void** edi4;
    void** ebx5;
    uint32_t esi6;
    void** v7;
    void** eax8;

    edi4 = a1;
    ebx5 = edi4;
    if (edi4) {
        esi6 = free;
        do {
            edi4 = *reinterpret_cast<void***>(edi4);
            v7 = *reinterpret_cast<void***>(ebx5 + 4);
            esi6(v7);
            eax8 = fun_40ada0(ebx5);
            ebx5 = edi4;
        } while (edi4);
    }
    return eax8;
}

int32_t _mbsrchr = 0x1555c;

void** fun_409ef0(void** a1, void** a2, void** a3, void** a4);

void** fun_40a500(void** ecx, void** a2, void** a3, void** a4, void** a5, void*** a6, void** a7, void*** a8, void*** a9, void** a10, void** a11) {
    void* esp12;
    void* ebp13;
    void** v14;
    void** ebx15;
    void** v16;
    void** esi17;
    void** v18;
    void** edi19;
    void** v20;
    void** esi21;
    void** v22;
    void** eax23;
    void** edi24;
    void** v25;
    void** eax26;
    void** v27;
    void** eax28;
    void*** ecx29;
    void** v30;
    void** ebx31;
    void*** v32;
    void** eax33;
    int1_t zf34;
    void** eax35;
    void** eax36;
    void** v37;
    void** v38;
    int32_t eax39;
    void** ecx40;

    esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebp13 = esp12;
    v14 = ebx15;
    v16 = esi17;
    v18 = edi19;
    fun_40ceb4(ecx, v18, v16, v14);
    v20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp12) - 12 - 4 - 4 - 4 - 4 + 4);
    esi21 = a2;
    v22 = *reinterpret_cast<void***>(esi21 + 4);
    eax23 = reinterpret_cast<void**>(_mbsrchr(v22, 46));
    if (!eax23 || (edi24 = a3, v25 = *reinterpret_cast<void***>(esi21 + 4), eax26 = fun_409ef0(edi24, v25, eax23, v20), v27 = eax26, eax26 == 0)) {
        return 0;
    }
    eax28 = fun_404ca0(reinterpret_cast<int32_t>(ebp13) - 12, v18, v16);
    ecx29 = a6;
    v30 = eax28;
    *a9 = edi24;
    ebx31 = *ecx29;
    if (!ebx31) {
        addr_40a58d_4:
        *reinterpret_cast<void***>(&ecx29) = *reinterpret_cast<void***>(esi21 + 8);
        v32 = ecx29;
        eax33 = fun_402080(edi24, *reinterpret_cast<signed char*>(&v32), reinterpret_cast<int32_t>(ebp13) - 4, 0);
        *reinterpret_cast<void***>(a7) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a7)) + reinterpret_cast<unsigned char>(eax33));
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi21 + 8)) & 16 || (reinterpret_cast<unsigned char>(a4) < reinterpret_cast<unsigned char>(v30) || (zf34 = g4133b8 == 0, !zf34) && a4 == v30)) {
            if (!ebx31 && (eax35 = fun_40ad20(v18, v16, v14), eax36 = fun_40add0(edi24, v18, v16), *reinterpret_cast<void***>(eax35 + 4) = eax36, fun_40ae30(a5, eax35), !*a6)) {
                *a6 = *reinterpret_cast<void***>(a5);
            }
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi21 + 8)) & 1 && !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi21 + 8)) & 16)) {
                v37 = *reinterpret_cast<void***>(esi21 + 4);
                fun_403370(3, edi24, v37, v18, v16, v14, v20);
            }
        }
    } else {
        do {
            v38 = *reinterpret_cast<void***>(ebx31 + 4);
            eax39 = reinterpret_cast<int32_t>(_mbsicmp(v38, edi24));
            if (!eax39) 
                break;
            ebx31 = *reinterpret_cast<void***>(ebx31);
        } while (ebx31);
        if (!ebx31) 
            goto addr_40a58d_4; else 
            goto addr_40a589_12;
    }
    ecx40 = *a8;
    if (reinterpret_cast<unsigned char>(ecx40) <= reinterpret_cast<unsigned char>(v30)) {
        ecx40 = v30;
    }
    *a8 = ecx40;
    return v27;
    addr_40a589_12:
    *reinterpret_cast<void***>(esi21 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi21 + 8)) & 0xfe);
    goto addr_40a58d_4;
}

void fun_403400(int32_t a1, int32_t a2, void** a3);

void** fun_404c10(void** a1, void** a2);

int32_t _ismbcspace = 0x1542a;

int32_t fun_406020(void** a1, void*** a2, struct s2** a3);

void** g413a4c = reinterpret_cast<void**>(0);

void fun_403aac();

int32_t _ismbcdigit = 0x1541c;

int32_t strtol = 0x15412;

int32_t _errno = 0x15408;

int32_t fun_4048b0(void** a1, void** a2, unsigned char a3, unsigned char a4, void** a5, void*** a6);

void** fun_40c790(void** a1, void** a2, void** a3);

void** fun_403af0(void** ecx, void** a2, int32_t a3, void** a4, uint32_t a5, void*** a6);

void** fun_4036c0(void** a1, void** a2, void** a3, unsigned char a4, void** a5, void** a6, void** a7) {
    int1_t zf8;
    void** v9;
    void** v10;
    void** esi11;
    void** v12;
    void** edi13;
    void** v14;
    void** ebp15;
    void* esp16;
    int1_t zf17;
    uint32_t eax18;
    void** edi19;
    int1_t zf20;
    int32_t esi21;
    void** edx22;
    int32_t eax23;
    void* esp24;
    void** ecx25;
    void** v26;
    int32_t v27;
    unsigned char v28;
    void** v29;
    void** bl30;
    uint32_t eax31;
    int32_t ecx32;
    void** v33;
    int32_t v34;
    int32_t eax35;
    void* esp36;
    void** eax37;
    int32_t* eax38;
    void* esp39;
    void** ecx40;
    int32_t v41;
    int32_t eax42;
    int32_t v43;
    int32_t eax44;
    int1_t zf45;
    uint32_t eax46;
    void*** eax47;
    void*** v48;
    void** v49;
    void*** v50;
    int32_t eax51;
    void** ebp52;
    int32_t eax53;
    void** eax54;
    void* esp55;
    unsigned char al56;
    void** ecx57;
    int32_t edx58;
    void*** eax59;
    void*** v60;
    void** eax61;
    void* esp62;
    unsigned char bl63;
    void** eax64;
    int1_t zf65;
    void** v66;
    int32_t v67;
    int1_t zf68;
    void** eax69;
    void** ebx70;
    int32_t eax71;
    void** eax72;
    int1_t zf73;
    void** eax74;

    ++g413a50;
    zf8 = (g4133d4 & 8) == 0;
    v9 = reinterpret_cast<void**>(0);
    v10 = esi11;
    v12 = edi13;
    v14 = ebp15;
    if (!zf8) {
        return 0;
    }
    fun_403400(3, 15, a1);
    esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 24 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 12);
    zf17 = (g4133d4 & 16) == 0;
    if (!zf17) {
        *reinterpret_cast<unsigned char*>(&eax18) = a4;
        fun_404c10(a1, eax18 & 4);
        return 0;
    }
    edi19 = a2;
    if (edi19) 
        goto addr_40372a_6;
    addr_403a6d_7:
    if (a4 & 2 || (zf20 = g4133a4 == 0, zf20)) {
        return 0;
    } else {
        return v9;
    }
    addr_40372a_6:
    esi21 = _ismbcspace;
    do {
        edx22 = *reinterpret_cast<void***>(edi19 + 4);
        eax23 = fun_406020(edx22, reinterpret_cast<int32_t>(esp16) + 28, reinterpret_cast<int32_t>(esp16) + 52);
        esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 - 4 - 4 + 12 + 4);
        ecx25 = v26;
        v27 = eax23;
        v28 = 0;
        g413a4c = reinterpret_cast<void**>(0);
        v29 = ecx25;
        bl30 = *reinterpret_cast<void***>(ecx25);
        if (bl30) {
            do {
                if (*reinterpret_cast<void***>(ecx25) == 94 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx25) == 36)) {
                    ++ecx25;
                }
                ++ecx25;
            } while (*reinterpret_cast<void***>(ecx25));
        }
        while (bl30 == 33 || (bl30 == 45 || (bl30 == 64 || (bl30 == 94 || (bl30 == 32 || reinterpret_cast<int1_t>(bl30 == 9)))))) {
            eax31 = reinterpret_cast<uint32_t>(bl30 - 33);
            if (eax31 <= 61) {
                ecx32 = 0;
                *reinterpret_cast<signed char*>(&ecx32) = *reinterpret_cast<signed char*>(eax31 + reinterpret_cast<int32_t>(fun_403aac));
                switch (ecx32) {
                case 0:
                    v28 = reinterpret_cast<unsigned char>(v28 | 4);
                    break;
                case 1:
                    v33 = v29 + 1;
                    v28 = reinterpret_cast<unsigned char>(v28 | 2);
                    v34 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(v33));
                    eax35 = reinterpret_cast<int32_t>(_ismbcdigit(v34));
                    esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 - 4 + 4 + 4);
                    if (!eax35) {
                        g413a4c = reinterpret_cast<void**>(0xff);
                    } else {
                        esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4);
                        eax37 = reinterpret_cast<void**>(strtol(v33, reinterpret_cast<int32_t>(esp36) + 24, 10));
                        g413a4c = eax37;
                        eax38 = reinterpret_cast<int32_t*>(_errno());
                        esp39 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) - 4 - 4 - 4 + 4 + 12 - 4 + 4);
                        if (*eax38 == 34) {
                            *reinterpret_cast<void***>(v33) = reinterpret_cast<void**>(0);
                            ecx40 = g4133f4;
                            fun_403220(ecx40, 0x436, v33, v14, v12, v10);
                            esp39 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp39) - 4 - 4 - 4 - 4 + 4 + 12);
                        }
                        v41 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(v33));
                        eax42 = reinterpret_cast<int32_t>(esi21(v41));
                        esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp39) - 4 - 4 + 4 + 4);
                        if (eax42) 
                            goto addr_403833_23;
                    }
                    v29 = v33 - 1;
                    break;
                    do {
                        addr_403833_23:
                        ++v33;
                        v43 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(v33));
                        eax44 = reinterpret_cast<int32_t>(esi21(v43));
                        esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 - 4 + 4 + 4);
                    } while (eax44);
                    v29 = v33 - 1;
                    break;
                case 2:
                    zf45 = (reinterpret_cast<unsigned char>(g4133d0) & 4) == 0;
                    if (zf45) {
                        v28 = reinterpret_cast<unsigned char>(v28 | 1);
                        break;
                    }
                case 3:
                    ++v29;
                    if (*reinterpret_cast<void***>(v29) == 32 || (eax46 = 0, reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v29) == 9))) {
                        eax46 = 1;
                    }
                    bl30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(bl30) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(bl30) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(bl30) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(bl30) + reinterpret_cast<uint1_t>(eax46 < 1))))) & 62) + 32);
                case 4:
                    goto 0x403895;
                }
            }
            if (bl30 == 94) 
                break;
            ++v29;
            bl30 = *reinterpret_cast<void***>(v29);
        }
        if (!(v28 & 4) || (eax47 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp24) + 24), *reinterpret_cast<unsigned char*>(&edx22) = v28, v48 = eax47, *reinterpret_cast<unsigned char*>(&eax47) = a4, v49 = edx22, v50 = eax47, eax51 = fun_4048b0(v29, a3, *reinterpret_cast<unsigned char*>(&v50), *reinterpret_cast<unsigned char*>(&v49), a5, v48), esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 24 + 4), eax51 == 0)) {
            ebp52 = v29;
            if (!v27 && (eax53 = reinterpret_cast<int32_t>(_mbschr(v29, 36)), esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 - 4 - 4 + 4 + 8), !!eax53)) {
                eax54 = fun_40b700(v29, reinterpret_cast<int32_t>(esp24) + 52);
                esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 - 4 - 4 + 8 + 4);
                v29 = eax54;
            }
            fun_40c790(0x411250, v29, a5);
            esp55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 - 4 - 4 - 4 + 12 + 4);
            al56 = reinterpret_cast<unsigned char>(a4 & 4);
            if (!al56 || (ecx57 = reinterpret_cast<void**>(0), !1)) {
                ecx57 = reinterpret_cast<void**>(1);
            }
            if (al56 || !(a4 & 8) && !(v28 & 1)) {
                edx58 = 1;
            } else {
                edx58 = 0;
            }
            eax59 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp55) + 32);
            v60 = eax59;
            *reinterpret_cast<unsigned char*>(&eax59) = v28;
            eax61 = fun_403af0(ecx57, 0x411250, edx58, ecx57, reinterpret_cast<uint32_t>(eax59) & 2, v60);
            esp62 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp55) - 4 - 4 - 4 - 4 - 4 - 4 + 20 + 4);
            v9 = eax61;
            bl63 = reinterpret_cast<unsigned char>(a4 & 2);
            if (!bl63 && (eax61 && ((eax64 = g413a4c, reinterpret_cast<unsigned char>(v9) > reinterpret_cast<unsigned char>(eax64)) && (zf65 = g4133a4 == 0, zf65)))) {
                fun_403220(0, 0x435, v66, v9, v14, v12);
                esp62 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp62) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
            }
            if (ebp52 != v29) {
                free(v29);
                esp62 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp62) - 4 - 4 + 4 + 4);
            }
            free(v67);
            esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp62) - 4 - 4 + 4 + 4);
            if (bl63) 
                continue;
            zf68 = g4133a4 == 0;
            if (zf68) 
                continue;
            if (!v9) 
                continue;
            eax69 = g413a4c;
            if (reinterpret_cast<unsigned char>(v9) > reinterpret_cast<unsigned char>(eax69)) 
                goto addr_403a6d_7;
        } else {
            ebx70 = v29;
            eax71 = reinterpret_cast<int32_t>(_mbschr(v29, 36));
            esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 - 4 - 4 + 4 + 8);
            if (eax71) {
                eax72 = fun_40b700(v29, reinterpret_cast<int32_t>(esp16) + 52);
                esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 - 4 + 8 + 4);
                v29 = eax72;
            }
            if (ebx70 != v29) {
                free(v29);
                esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 + 4 + 4);
            }
            if (a4 & 2) 
                continue;
            zf73 = g4133a4 == 0;
            if (zf73) 
                continue;
            if (!v9) 
                continue;
            eax74 = g413a4c;
            if (reinterpret_cast<unsigned char>(v9) > reinterpret_cast<unsigned char>(eax74)) 
                break;
        }
        edi19 = *reinterpret_cast<void***>(edi19);
    } while (edi19);
    goto addr_403a6d_7;
    goto addr_403a6d_7;
}

void** fun_403370(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    int32_t esi8;
    void** eax9;
    int1_t zf10;
    uint32_t edi11;
    void** edi12;
    void** esi13;
    void* esp14;
    int32_t eax15;
    int32_t esi16;
    void** v17;
    struct s3* eax18;

    esi8 = __p__iob;
    eax9 = reinterpret_cast<void**>(esi8());
    zf10 = (g4133d4 & 32) == 0;
    edi11 = reinterpret_cast<uint32_t>(eax9 + 32);
    if (zf10) {
        fun_403420(edi12, esi13, __return_address(), a1);
        esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 + 4 - 4 + 4);
        if (reinterpret_cast<unsigned char>(a1) >= reinterpret_cast<unsigned char>(20) && reinterpret_cast<unsigned char>(a1) <= reinterpret_cast<unsigned char>(25)) {
            eax15 = reinterpret_cast<int32_t>(esi8());
            esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 + 4);
            edi11 = reinterpret_cast<uint32_t>(eax15 + 64);
        }
        if (!reinterpret_cast<int1_t>(a1 == 24)) {
            esi16 = putc;
        } else {
            esi16 = putc;
            esi16(10, edi11);
            esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 - 4 - 4 + 4 + 8);
        }
        v17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp14) + 16);
        eax18 = fun_403410(a1, v17);
        vfprintf(edi11, eax18, v17);
        if ((reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(10) || reinterpret_cast<unsigned char>(a1) > reinterpret_cast<unsigned char>(23)) && a1 != 0x78) {
            esi16(10, edi11);
        }
        eax9 = reinterpret_cast<void**>(fflush(edi11));
    }
    return eax9;
}

void** fun_405930(void** a1, void** a2, void** a3, int32_t* a4) {
    void* esp5;
    void** v6;
    void** edi7;
    void** v8;
    void** ebp9;
    int32_t eax10;
    void* esp11;
    void** eax12;
    void** ebx13;
    void*** ebp14;
    void** al15;
    int32_t eax16;
    void** edi17;
    int32_t ecx18;
    int32_t eax19;
    uint32_t ecx20;
    uint32_t eax21;
    uint32_t ecx22;
    void*** esi23;
    void*** edi24;
    uint32_t ecx25;
    int32_t eax26;
    void** eax27;

    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v6 = edi7;
    v8 = ebp9;
    eax10 = fun_40cd20(a2, reinterpret_cast<int32_t>(esp5) + 16, a4, v8, v6);
    esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 12 + 4);
    if (eax10) {
        eax12 = fun_40add0(a2, v8, v6);
        return eax12;
    }
    ebx13 = a1;
    if (!ebx13) {
        return 0;
    }
    do {
        addr_40596e_5:
        ebp14 = reinterpret_cast<void***>(0x413aa0);
        while (1) {
            al15 = *reinterpret_cast<void***>(ebx13);
            if (!al15 || (++ebx13, *ebp14 = al15, al15 == 59)) {
                if (!reinterpret_cast<int1_t>(ebp14 == 0x413aa0)) 
                    break;
                if (!*reinterpret_cast<void***>(ebx13)) 
                    goto addr_405991_9;
            } else {
                ++ebp14;
            }
        }
        if (*reinterpret_cast<signed char*>(ebp14 - 1) != 92 && *reinterpret_cast<signed char*>(ebp14 - 1) != 47) {
            *ebp14 = reinterpret_cast<void**>(92);
            ++ebp14;
        }
        *ebp14 = reinterpret_cast<void**>(0);
        eax16 = reinterpret_cast<int32_t>(_mbspbrk(0x413aa0, "*?"));
        esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) - 4 - 4 - 4 + 4 + 8);
        if (eax16) 
            goto addr_40596e_5;
        edi17 = a2;
        ecx18 = -1;
        eax19 = eax16 - eax16;
        do {
            if (!ecx18) 
                break;
            --ecx18;
            ++edi17;
        } while (*reinterpret_cast<void***>(edi17) != *reinterpret_cast<void***>(&eax19));
        ecx20 = reinterpret_cast<uint32_t>(~ecx18);
        eax21 = ecx20;
        ecx22 = ecx20 >> 2;
        esi23 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi17) - ecx20);
        edi24 = ebp14;
        while (ecx22) {
            --ecx22;
            *edi24 = *esi23;
            edi24 = edi24 + 4;
            esi23 = esi23 + 4;
        }
        ecx25 = eax21 & 3;
        while (ecx25) {
            --ecx25;
            *edi24 = *esi23;
            ++edi24;
            ++esi23;
        }
        eax26 = fun_40cd20(0x413aa0, reinterpret_cast<int32_t>(esp11) + 28, a4, v8, v6);
        esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) - 4 - 4 - 4 - 4 + 12 + 4);
    } while (!eax26);
    goto addr_405a04_24;
    addr_405991_9:
    return 0;
    addr_405a04_24:
    eax27 = fun_40add0(0x413aa0, v8, v6);
    return eax27;
}

int32_t fun_404c90(int32_t* a1) {
    return *a1 + 20;
}

int32_t _splitpath = 0x15490;

int32_t _makepath = 0x15484;

void** fun_40c340(void** a1, int32_t a2) {
    void* esp3;
    void* esp4;
    void* esp5;
    int32_t* esp6;
    void** v7;
    void** v8;
    void** eax9;

    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x208);
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4);
    _splitpath(a1, reinterpret_cast<int32_t>(esp4) + 4, reinterpret_cast<int32_t>(esp3) + 4, 0, 0);
    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 - 4 - 4 - 4 - 4 + 4);
    esp6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp5) + 20 - 4 - 4);
    _makepath(esp6 + 67, reinterpret_cast<int32_t>(esp5) + 20, reinterpret_cast<int32_t>(esp5) + 24, a2, 0);
    eax9 = fun_40add0(esp6 - 1 - 1 - 1 - 1 + 1 + 70, v7, v8);
    return eax9;
}

void fun_402ae0(void** a1, void** a2) {
    void** edi3;
    void** esi4;
    void** eax5;
    void** edx6;
    void** ecx7;

    edi3 = a2;
    esi4 = a1;
    eax5 = *reinterpret_cast<void***>(edi3 + 8);
    edx6 = *reinterpret_cast<void***>(esi4);
    ecx7 = edx6;
    if (edx6) {
        do {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx7 + 8)) < reinterpret_cast<unsigned char>(eax5)) 
                break;
            edx6 = ecx7;
            ecx7 = *reinterpret_cast<void***>(ecx7);
        } while (ecx7);
    }
    if (edx6 != ecx7) {
        *reinterpret_cast<void***>(edx6) = edi3;
        *reinterpret_cast<void***>(edi3) = ecx7;
        return;
    } else {
        *reinterpret_cast<void***>(esi4) = edi3;
        return;
    }
}

int32_t fun_402b20(void** a1, void*** a2) {
    void** v3;
    void** v4;
    void** esi5;
    void** v6;
    void** edi7;
    void** esi8;
    void** edi9;
    void** edi10;
    void** edi11;

    v3 = reinterpret_cast<void**>(__return_address());
    v4 = esi5;
    v6 = edi7;
    esi8 = a1;
    edi9 = *reinterpret_cast<void***>(esi8);
    if (*reinterpret_cast<void***>(edi9)) {
        do {
            if (*reinterpret_cast<void***>(edi9) == 32) 
                continue;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi9) == 9)) 
                break;
            ++edi9;
        } while (*reinterpret_cast<void***>(edi9));
    }
    *a2 = edi9;
    if (!*reinterpret_cast<void***>(edi9)) {
        return 0;
    }
    *a2 = edi9;
    if (*reinterpret_cast<void***>(edi9) == 34) {
        do {
            if (!*reinterpret_cast<void***>(edi9)) 
                goto addr_402c0e_9;
            ++edi9;
        } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi9) == 34));
        if (*reinterpret_cast<void***>(edi9)) {
            addr_402c1d_12:
            edi10 = edi9 + 1;
            if (*reinterpret_cast<void***>(edi10)) {
                *reinterpret_cast<void***>(edi10) = reinterpret_cast<void**>(0);
                ++edi10;
            }
        } else {
            addr_402c0e_9:
            fun_403220(0, 0x40e, v6, v4, v3, a1);
            goto addr_402c1d_12;
        }
        *reinterpret_cast<void***>(esi8) = edi10;
        return 1;
    }
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi9) == 0x7b)) {
        if (!*reinterpret_cast<void***>(edi9)) {
            addr_402bf2_17:
            *reinterpret_cast<void***>(esi8) = edi9;
            return 1;
        } else {
            do {
                if (*reinterpret_cast<void***>(edi9) == 32) 
                    break;
            } while (*reinterpret_cast<void***>(edi9) != 9 && (++edi9, !!*reinterpret_cast<void***>(edi9)));
            if (!*reinterpret_cast<void***>(edi9)) 
                goto addr_402bf2_17;
        }
    } else {
        if (!*reinterpret_cast<void***>(edi9)) {
            addr_402b85_22:
            if (!*reinterpret_cast<void***>(edi9)) {
                fun_403220(0, 0x423, v6, v4, v3, a1);
                goto addr_402b99_24;
            }
        } else {
            do {
                if (*reinterpret_cast<void***>(edi9) == 34) {
                    if (*reinterpret_cast<void***>(edi9)) {
                        do {
                            if (*reinterpret_cast<void***>(edi9) == 34) 
                                break;
                            ++edi9;
                        } while (*reinterpret_cast<void***>(edi9));
                    }
                } else {
                    ++edi9;
                    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi9) == 0x7d)) 
                        goto addr_402b6f_30;
                }
            } while (*reinterpret_cast<void***>(edi9));
            goto addr_402b85_22;
        }
    }
    *reinterpret_cast<void***>(edi9) = reinterpret_cast<void**>(0);
    ++edi9;
    goto addr_402bf2_17;
    addr_402b99_24:
    ++edi9;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi9) == 34)) {
        do {
            if (!*reinterpret_cast<void***>(edi9)) 
                goto addr_402baf_34;
            ++edi9;
        } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi9) == 34));
        if (*reinterpret_cast<void***>(edi9)) {
            addr_402bbe_37:
            edi11 = edi9 + 1;
            if (*reinterpret_cast<void***>(edi11)) {
                *reinterpret_cast<void***>(edi11) = reinterpret_cast<void**>(0);
                ++edi11;
            }
        } else {
            addr_402baf_34:
            fun_403220(0, 0x40e, v6, v4, v3, a1);
            goto addr_402bbe_37;
        }
        *reinterpret_cast<void***>(esi8) = edi11;
        return 1;
    }
    addr_402b6f_30:
    goto addr_402b85_22;
}

struct s6 {
    signed char f0;
    signed char f1;
};

void fun_4031b0(void** a1, uint32_t a2, void*** a3);

void** fun_403120(void** a1, uint32_t* a2, void*** a3) {
    void** v4;
    void** ebx5;
    void** v6;
    void** esi7;
    void** v8;
    void** edi9;
    struct s6* eax10;
    int32_t ebx11;
    void** eax12;
    uint32_t* esi13;
    void*** edi14;
    uint32_t v15;

    v4 = ebx5;
    v6 = esi7;
    v8 = edi9;
    eax10 = reinterpret_cast<struct s6*>(_mbschr(a1, 92));
    if (eax10 && ((*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax10) - 1) == 32 || *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax10) - 1) == 9) && eax10->f1 == 10)) {
        eax10->f0 = 0;
    }
    ebx11 = _mbstok;
    eax12 = reinterpret_cast<void**>(ebx11(a1, " \t\n"));
    if (!eax12) {
        addr_4031a2_4:
        return eax12;
    } else {
        esi13 = a2;
        edi14 = a3;
        do {
            if (*reinterpret_cast<void***>(eax12) == 64) 
                break;
            v15 = *esi13;
            fun_4031b0(eax12, v15, edi14);
            *esi13 = *esi13 + 1;
            eax12 = reinterpret_cast<void**>(ebx11(0, " \t\n"));
        } while (eax12);
        goto addr_40318b_8;
    }
    eax12 = fun_403220(0, 0xfa1, eax12 + 1, v8, v6, v4);
    goto addr_4031a2_4;
    addr_40318b_8:
    return eax12;
}

int32_t realloc = 0x153b8;

void fun_4031b0(void** a1, uint32_t a2, void*** a3) {
    void** eax4;
    uint32_t esi5;
    void** eax6;
    void** edi7;
    void** esi8;
    void** eax9;
    void** eax10;

    eax4 = *a3;
    if (eax4) {
        esi5 = a2;
        if (!(esi5 & 7) && (eax6 = reinterpret_cast<void**>(realloc(eax4, esi5 * 4 + 32)), *a3 = eax6, !eax6)) {
            fun_403220(0, 0x41b, edi7, esi8, __return_address(), a1);
        }
    } else {
        eax9 = fun_40acf0(32);
        esi5 = a2;
        *a3 = eax9;
    }
    eax10 = fun_40add0(a1, edi7, esi8);
    *reinterpret_cast<void***>(*a3 + esi5 * 4) = eax10;
    return;
}

void fun_403420(void** a1, void** a2, void** a3, void** a4) {
    int1_t zf5;
    int32_t eax6;

    zf5 = g4133cc == 0;
    if (zf5) {
        g4133cc = 1;
        fun_403400(1, 24, "1.50");
        fun_403400(2, 25, "1988-94");
        fun_403370(24, "1.50", __return_address(), a1, a2, a3, a4);
        fun_403370(25, "1988-94", __return_address(), a1, a2, a3, a4);
        eax6 = reinterpret_cast<int32_t>(__p__iob());
        fflush(eax6 + 64);
    }
    return;
}

int32_t _fcloseall = 0x155d4;

struct s7 {
    struct s7* f0;
    int32_t f4;
};

struct s7* g4133bc = reinterpret_cast<struct s7*>(0);

int32_t printf = 0x1545a;

int32_t _unlink = 0x155ca;

void fun_408a20() {
    struct s7* ebp1;
    int32_t esi2;
    int32_t edi3;
    int32_t ebx4;
    int32_t v5;
    int1_t zf6;
    int32_t v7;
    int32_t eax8;

    _fcloseall();
    ebp1 = g4133bc;
    if (ebp1) {
        esi2 = __p__iob;
        edi3 = printf;
        ebx4 = fflush;
        do {
            v5 = ebp1->f4;
            _unlink(v5);
            zf6 = (reinterpret_cast<unsigned char>(g4133d0) & 4) == 0;
            if (!zf6) {
                v7 = ebp1->f4;
                edi3("\tdel %s\n", v7);
                eax8 = reinterpret_cast<int32_t>(esi2());
                ebx4(eax8 + 32);
            }
            ebp1 = ebp1->f0;
        } while (ebp1);
    }
    return;
}

void fun_403400(int32_t a1, int32_t a2, void** a3) {
    return;
}

struct s3* fun_40a660(void** a1);

struct s3* fun_403410(void** a1, void** a2) {
    struct s3* eax3;

    eax3 = fun_40a660(a1);
    return eax3;
}

void** fun_40ca80(void** a1, int32_t a2);

int32_t _read = 0x15532;

int32_t _lseek = 0x15514;

int32_t _write = 0x15528;

int32_t _close = 0x1546c;

void** fun_404c10(void** a1, void** a2) {
    void** esi3;
    void** v4;
    void** eax5;
    void** esi6;
    void* esp7;
    int32_t eax8;

    eax5 = fun_403370(5, a1, esi3, v4, __return_address(), a1, a2);
    if (!a2 && (eax5 = fun_40ca80(a1, "r+b"), !!eax5)) {
        esi6 = *reinterpret_cast<void***>(eax5 + 16);
        esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 + 8 + 4 - 4);
        eax8 = reinterpret_cast<int32_t>(_read(esi6, reinterpret_cast<int32_t>(esp7) + 11, 1));
        if (!(reinterpret_cast<uint1_t>(eax8 < 0) | reinterpret_cast<uint1_t>(eax8 == 0))) {
            _lseek(esi6, 0, 0);
            _write(esi6, reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 + 4 + 12 - 4 - 4 - 4 - 4 + 4 + 19, 1);
        }
        eax5 = reinterpret_cast<void**>(_close(esi6));
    }
    return eax5;
}

struct s8 {
    signed char f0;
    void** f1;
};

void** fun_405f60(signed char** a1);

void fun_406430(void** a1);

int32_t getenv = 0x15388;

int32_t _mbsnbcpy = 0x1549e;

void** fun_407450(void** a1);

void fun_4062a0(void*** a1, signed char* a2);

void fun_4063b0(void** a1, uint32_t* a2);

int32_t _mbsnbicmp = 0x154f8;

int32_t fclose = 0x153a6;

int32_t fun_406020(void** a1, void*** a2, struct s2** a3) {
    void** v4;
    void** ebx5;
    void** v6;
    void** esi7;
    void** v8;
    void** edi9;
    void** v10;
    void** ebp11;
    struct s8* eax12;
    void** eax13;
    int32_t eax14;
    void** eax15;
    void* esp16;
    void*** esi17;
    void** v18;
    void** eax19;
    void** eax20;
    void* esp21;
    void** v22;
    void** v23;
    void** eax24;
    int32_t v25;
    void** eax26;
    void* esp27;
    void** ebp28;
    void** eax29;
    void* esp30;
    void** ebx31;
    void** v32;
    void* esp33;
    void** eax34;
    signed char* eax35;
    void* esp36;
    signed char** esp37;
    void** eax38;
    void* esp39;
    void** ecx40;
    void** v41;
    void* esp42;
    void** v43;
    void** eax44;
    int32_t eax45;
    void* esp46;
    void** edi47;
    int32_t ecx48;
    int32_t eax49;
    uint32_t edi50;
    int32_t eax51;
    int32_t eax52;
    void** eax53;
    void* esp54;
    void** eax55;
    void** eax56;

    v4 = ebx5;
    v6 = esi7;
    v8 = edi9;
    v10 = ebp11;
    eax12 = reinterpret_cast<struct s8*>(_mbschr(a1, 10));
    if (!eax12) {
        eax13 = fun_40add0(a1, v10, v8);
        *a2 = eax13;
        eax14 = 0;
    } else {
        eax12->f0 = 0;
        eax15 = fun_40b700(a1, a3);
        esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x118 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 + 8 + 4);
        esi17 = a2;
        *esi17 = eax15;
        v18 = reinterpret_cast<void**>(&eax12->f1);
        eax12->f0 = 10;
        if (*esi17 == a1) {
            eax19 = fun_40add0(a1, v10, v8);
            esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 + 4 + 4);
            *esi17 = eax19;
        }
        eax20 = fun_40b700(v18, a3);
        esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 - 4 + 8 + 4);
        v22 = eax20;
        v23 = eax20;
        while (eax24 = fun_405f60(reinterpret_cast<int32_t>(esp21) + 24), !!eax24) {
            v25 = 0;
            eax26 = fun_40add0(eax24, v10, v8, eax24, v10, v8);
            esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4 + 4 + 4 - 4 - 4 + 4 + 4);
            ebp28 = eax26;
            if (*reinterpret_cast<void***>(eax26)) {
                eax29 = fun_40ca80(ebp28, "w");
                esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 - 4 - 4 + 8 + 4);
                ebx31 = eax29;
                if (ebx31) {
                    v32 = *esi17;
                    fun_406430(v32);
                    esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 + 4 + 4);
                } else {
                    eax34 = g4133f4;
                    fun_403220(eax34, 0x41e, ebp28, v10, v8, v6, eax34, 0x41e, ebp28, v10, v8, v6);
                    esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 - 4 + 4 + 12);
                }
            } else {
                eax35 = reinterpret_cast<signed char*>(getenv("TMP"));
                esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 - 4 + 4 + 4);
                if (!(!eax35 || !*eax35)) {
                    esp37 = reinterpret_cast<signed char**>(reinterpret_cast<int32_t>(esp36) - 4 - 4);
                    _mbsnbcpy(esp37 + 11, eax35, 0x101);
                    esp36 = reinterpret_cast<void*>(esp37 - 1 - 1 + 1 + 3);
                }
                eax38 = fun_407450(reinterpret_cast<int32_t>(esp36) + 36);
                esp39 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) - 4 - 4 + 4 + 4);
                ebx31 = eax38;
                if (!ebx31) {
                    ecx40 = g4133f4;
                    v41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp39) + 36);
                    fun_403220(ecx40, 0x41e, v41, v10, v8, v6, ecx40, 0x41e, v41, v10, v8, v6);
                    esp39 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp39) - 4 - 4 - 4 - 4 + 4 + 12);
                }
                fun_4062a0(esi17, reinterpret_cast<int32_t>(esp39) + 36);
                free(ebp28);
                esp42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp39) - 4 - 4 - 4 + 8 + 4 - 4 - 4 + 4);
                v43 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp42) + 40);
                eax44 = fun_40add0(v43, v10, v8, v43, v10, v8);
                esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp42) + 4 - 4 - 4 + 4 + 4);
                ebp28 = eax44;
            }
            fun_4063b0(ebx31, reinterpret_cast<int32_t>(esp33) + 16);
            eax45 = reinterpret_cast<int32_t>(_mbschr(v23, 10));
            esp46 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) - 4 - 4 - 4 + 8 + 4 - 4 - 4 - 4 + 4 + 8);
            if (!eax45) {
                edi47 = v23;
                ecx48 = -1;
                eax49 = eax45 - eax45;
                do {
                    if (!ecx48) 
                        break;
                    --ecx48;
                    ++edi47;
                    ++esi17;
                } while (*reinterpret_cast<void***>(edi47) != *reinterpret_cast<void***>(&eax49));
                edi50 = ~ecx48 + 0xffffffff;
            } else {
                edi50 = eax45 - reinterpret_cast<unsigned char>(v23);
            }
            if (reinterpret_cast<int32_t>(edi50) <= reinterpret_cast<int32_t>(3) || (eax51 = reinterpret_cast<int32_t>(_mbsnbicmp(v23, "keep", 4)), esp46 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp46) - 4 - 4 - 4 - 4 + 4 + 12), !!eax51)) {
                if (reinterpret_cast<int32_t>(edi50) <= reinterpret_cast<int32_t>(5) || (eax52 = reinterpret_cast<int32_t>(_mbsnbicmp(v23, "nokeep", 6)), esp46 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp46) - 4 - 4 - 4 - 4 + 4 + 12), !!eax52)) {
                    if (edi50) {
                        eax53 = g4133f4;
                        fun_403220(eax53, 0x446, v10, v8, v6, v4);
                        esp46 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp46) - 4 - 4 - 4 + 4 + 8);
                    }
                } else {
                    v23 = v23 + 6;
                }
            } else {
                v23 = v23 + 4;
                v25 = 1;
            }
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v23) == 10)) {
                ++v23;
            }
            fclose(ebx31);
            esp54 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp46) - 4 - 4 + 4 + 4);
            if (!v25) {
                eax55 = fun_40ad20(v10, v8, v6);
                eax56 = fun_40add0(ebp28, v10, v8, ebp28, v10, v8);
                *reinterpret_cast<void***>(eax55 + 4) = eax56;
                fun_40ae30(0x4133bc, eax55, 0x4133bc, eax55);
                esp54 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) - 4 + 4 - 4 - 4 + 4 + 4 - 4 - 4 - 4 + 8 + 4);
            }
            free(ebp28);
            esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) - 4 - 4 + 4 + 4);
        }
        if (v22 != v18) {
            free(v22);
        }
        eax14 = 1;
    }
    return eax14;
}

int32_t fun_4048b0(void** a1, void** a2, unsigned char a3, unsigned char a4, void** a5, void*** a6) {
    void** v7;
    void** edi8;
    void** ebx9;
    void** esi10;
    void*** esp11;
    void** v12;
    void** ebp13;
    void** v14;
    int32_t ebp15;
    int32_t ecx16;
    void** eax17;
    void** edi18;
    int32_t v19;
    int32_t eax20;
    int32_t v21;
    int32_t eax22;
    void*** esi23;
    void** v24;
    void** v25;
    void** eax26;
    void** eax27;
    void* esp28;
    unsigned char al29;
    void** ecx30;
    int32_t edx31;
    void*** eax32;
    void*** v33;
    void** eax34;
    void* esp35;
    unsigned char al36;
    int1_t cf37;
    int1_t zf38;
    void** v39;
    void** v40;
    void** eax41;
    void** eax42;
    void** eax43;
    void** eax44;
    int1_t zf45;
    int1_t cf46;

    v7 = edi8;
    ebx9 = reinterpret_cast<void**>(0);
    esi10 = a1;
    esp11 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 20 - 4 - 4 - 4 - 4);
    v12 = ebp13;
    v14 = reinterpret_cast<void**>(0);
    if (!*reinterpret_cast<void***>(esi10)) {
        addr_404964_2:
        if (!*reinterpret_cast<void***>(esi10)) {
            return 0;
        }
    } else {
        ebp15 = _mbschr;
        do {
            ecx16 = 0;
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi10) == 36)) {
                eax17 = esi10 + 1;
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax17) == 40)) {
                    esi10 = eax17;
                    ecx16 = 1;
                }
                edi18 = esi10 + 1;
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi18) == 63)) {
                    esi10 = edi18;
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi18) == 42)) 
                        continue;
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi18 + 1) == 42)) 
                        continue;
                    if (!ecx16) 
                        goto addr_404959_12;
                    v19 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi18 + 2));
                    eax20 = reinterpret_cast<int32_t>(ebp15("DFBR", v19));
                    esp11 = esp11 - 4 - 4 - 4 + 4 + 8;
                    if (!eax20) 
                        goto addr_404947_14;
                    if (*reinterpret_cast<signed char*>(edi18 + 3) == 41) 
                        goto addr_404959_12;
                    addr_404947_14:
                    if (*reinterpret_cast<void***>(edi18 + 2) == 41) 
                        goto addr_404959_12;
                } else {
                    if (!ecx16) 
                        goto addr_404911_17;
                    v21 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi10 + 2));
                    eax22 = reinterpret_cast<int32_t>(ebp15("DFBR", v21));
                    esp11 = esp11 - 4 - 4 - 4 + 4 + 8;
                    if (!eax22) 
                        goto addr_40490b_19;
                    if (*reinterpret_cast<signed char*>(esi10 + 3) == 41) 
                        goto addr_404911_17;
                    addr_40490b_19:
                    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi10 + 2) == 41)) 
                        goto addr_404911_17;
                }
            }
            ++esi10;
        } while (*reinterpret_cast<void***>(esi10));
        goto addr_404957_22;
    }
    esi23 = a6;
    v24 = a1;
    v25 = ebx9;
    do {
        if (!ebx9) 
            break;
        g413a28 = a2;
        if (!reinterpret_cast<int1_t>(v14 == 42)) {
            eax26 = g413a94;
        } else {
            eax26 = g413a98;
        }
        ebx9 = *reinterpret_cast<void***>(eax26);
        *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(0);
        eax27 = fun_40b700(v24, 0x413a28);
        fun_40c790(0x411250, eax27, a5);
        esp28 = reinterpret_cast<void*>(esp11 - 4 - 4 - 4 + 8 + 4 - 4 - 4 - 4 - 4 + 12 + 4);
        al29 = reinterpret_cast<unsigned char>(a3 & 4);
        if (!al29 || (ecx30 = reinterpret_cast<void**>(0), !!(a4 & 8))) {
            ecx30 = reinterpret_cast<void**>(1);
        }
        if (al29 || !(a3 & 8) && !(a4 & 1)) {
            edx31 = 1;
        } else {
            edx31 = 0;
        }
        eax32 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp28) + 24);
        v33 = eax32;
        *reinterpret_cast<unsigned char*>(&eax32) = a4;
        eax34 = fun_403af0(ecx30, 0x411250, edx31, ecx30, reinterpret_cast<uint32_t>(eax32) & 2, v33);
        esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) - 4 - 4 - 4 - 4 - 4 - 4 + 20 + 4);
        *esi23 = eax34;
        al36 = reinterpret_cast<unsigned char>(a3 & 2);
        if (!al36 && (*esi23 && ((cf37 = reinterpret_cast<unsigned char>(g413a4c) < reinterpret_cast<unsigned char>(*esi23), cf37) && (zf38 = g4133a4 == 0, zf38)))) {
            v39 = *esi23;
            fun_403220(0, 0x435, v40, v39, v12, v7);
            esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
        }
        if (!reinterpret_cast<int1_t>(v14 == 42)) {
            eax41 = g413a94;
            *reinterpret_cast<void***>(eax41) = ebx9;
            eax42 = g413a94;
            g413a94 = *reinterpret_cast<void***>(eax42);
        } else {
            eax43 = g413a98;
            *reinterpret_cast<void***>(eax43) = ebx9;
            eax44 = g413a98;
            g413a98 = *reinterpret_cast<void***>(eax44);
        }
        free(eax27);
        esp11 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp35) - 4 - 4 + 4 + 4);
    } while (al36 || ((zf45 = g4133a4 == 0, zf45) || (!*esi23 || (cf46 = reinterpret_cast<unsigned char>(g413a4c) < reinterpret_cast<unsigned char>(*esi23), !cf46))));
    if (reinterpret_cast<int1_t>(v14 == 42)) 
        goto addr_404acd_40;
    g413a94 = v25;
    addr_404ad9_42:
    return 1;
    addr_404acd_40:
    g413a98 = v25;
    goto addr_404ad9_42;
    addr_404957_22:
    goto addr_404964_2;
    addr_404959_12:
    v14 = reinterpret_cast<void**>(42);
    ebx9 = g413a98;
    goto addr_404964_2;
    addr_404911_17:
    v14 = reinterpret_cast<void**>(63);
    ebx9 = g413a94;
    goto addr_404964_2;
}

void** fun_404830(void** ecx) {
    void*** esp2;
    void** edi3;
    void** esi4;
    void** v5;
    int32_t esi6;
    void** eax7;
    void** eax8;
    void** eax9;
    void** v10;
    void** ebp11;

    esp2 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_40ceb4(ecx, edi3, esi4, v5);
    esi6 = getenv;
    eax7 = reinterpret_cast<void**>(esi6("COMSPEC"));
    if (!eax7) {
        eax8 = reinterpret_cast<void**>(esi6("PATH"));
        if (!eax8) {
            eax8 = reinterpret_cast<void**>(0x413060);
        }
        eax9 = fun_405930(eax8, "CMD.EXE", esp2 - 4 - 4 - 4 - 4 + 4, esp2 - 4);
        if (!eax9) {
            fun_403220(0, 0x420, edi3, esi4, v10, ebp11);
        }
        eax7 = eax9;
    }
    return eax7;
}

void fun_404620();

struct s9 {
    signed char[16] pad16;
    int32_t f10;
};

int32_t _dup = 0x154b8;

void** fun_404af0(void** a1, int32_t a2);

struct s10 {
    signed char[48] pad48;
    int32_t f30;
};

struct s11 {
    signed char[48] pad48;
    int32_t f30;
};

int32_t _dup2 = 0x15464;

struct s12 {
    signed char[48] pad48;
    int32_t f30;
};

void** fun_4043a0(void** a1, void*** a2, void*** a3) {
    void** v4;
    void** ebx5;
    void** v6;
    void** esi7;
    void** v8;
    void** edi9;
    void** ebx10;
    void** v11;
    void** ebp12;
    int32_t ecx13;
    void** ebp14;
    int32_t eax15;
    int32_t eax16;
    int32_t eax17;
    void** edi18;
    void** v19;
    void** v20;
    void** v21;
    int32_t esi22;
    void** eax23;
    void** edi24;
    int32_t ecx25;
    void** eax26;
    void** edi27;
    struct s9* eax28;
    int32_t v29;
    void** eax30;
    void** edi31;
    int32_t v32;
    struct s10* eax33;
    int32_t v34;
    void** edi35;
    int32_t ecx36;
    void* eax37;
    uint32_t ecx38;
    uint32_t eax39;
    uint32_t ecx40;
    void*** esi41;
    void** edi42;
    uint32_t ecx43;
    void** esi44;
    struct s11* eax45;
    int32_t v46;
    int32_t eax47;
    void** v48;
    void** esi49;
    struct s12* eax50;
    int32_t v51;
    int32_t eax52;
    void** v53;

    v4 = ebx5;
    v6 = esi7;
    v8 = edi9;
    ebx10 = reinterpret_cast<void**>(0);
    v11 = ebp12;
    ecx13 = -1;
    ebp14 = a1;
    eax15 = eax16 - eax17;
    edi18 = ebp14;
    v19 = reinterpret_cast<void**>(0);
    v20 = reinterpret_cast<void**>(0);
    v21 = reinterpret_cast<void**>(0);
    do {
        if (!ecx13) 
            break;
        --ecx13;
        ++edi18;
    } while (*reinterpret_cast<void***>(edi18) != *reinterpret_cast<void***>(&eax15));
    esi22 = 1;
    if (reinterpret_cast<uint32_t>(~ecx13 - 1) < 0x7c) {
        esi22 = 0;
    }
    do {
        eax23 = reinterpret_cast<void**>(_mbspbrk(ebp14, "\"<>|"));
        edi24 = eax23;
        if (!edi24) 
            break;
        eax23 = *reinterpret_cast<void***>(edi24) - 34;
        if (reinterpret_cast<unsigned char>(eax23) > reinterpret_cast<unsigned char>(90)) 
            goto addr_404406_8;
        ecx25 = 0;
        *reinterpret_cast<signed char*>(&ecx25) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax23) + reinterpret_cast<uint32_t>(fun_404620));
        switch (ecx25) {
        case 0:
            eax23 = reinterpret_cast<void**>(_mbschr(edi24 + 1, 34));
            if (!eax23) {
                addr_40450b_11:
            case 3:
                ebx10 = reinterpret_cast<void**>(1);
                break;
            } else {
                ebp14 = eax23 + 1;
                break;
            }
        case 1:
            if (v19) 
                goto addr_40450b_11;
            if (!esi22) 
                goto addr_40450b_11;
            if (!v21) {
                eax26 = fun_40add0(ebp14, v11, v8);
                v21 = eax26;
            }
            *reinterpret_cast<void***>(edi24) = reinterpret_cast<void**>(32);
            edi27 = edi24 + 1;
            v19 = reinterpret_cast<void**>(1);
            ebp14 = edi27;
            eax28 = reinterpret_cast<struct s9*>(__p__iob());
            v29 = eax28->f10;
            eax23 = reinterpret_cast<void**>(_dup(v29));
            *a2 = eax23;
            if (eax23 == 0xffffffff) 
                goto addr_40450b_11;
            eax23 = fun_404af0(edi27, 4);
            if (!eax23) {
                goto addr_40450b_11;
            }
        case 2:
            if (v20) 
                goto addr_40450b_11;
            if (!esi22) 
                goto addr_40450b_11;
            if (!v21) {
                eax30 = fun_40add0(ebp14, v11, v8);
                v21 = eax30;
            }
            *reinterpret_cast<void***>(edi24) = reinterpret_cast<void**>(32);
            edi31 = edi24 + 1;
            v20 = reinterpret_cast<void**>(1);
            ebp14 = edi31;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi31) == 62)) {
                v32 = 2;
            } else {
                *reinterpret_cast<void***>(edi31) = reinterpret_cast<void**>(32);
                ++edi31;
                v32 = 3;
            }
            eax33 = reinterpret_cast<struct s10*>(__p__iob());
            v34 = eax33->f30;
            eax23 = reinterpret_cast<void**>(_dup(v34));
            *a3 = eax23;
            if (eax23 == 0xffffffff) 
                goto addr_40450b_11;
            eax23 = fun_404af0(edi31, v32);
            if (eax23) 
                break; else 
                goto addr_40450b_11;
            addr_404406_8:
        case 4:
            eax23 = fun_403220(0, 0x411, v11, v8, v6, v4);
        }
    } while (!ebx10);
    if (ebx10) {
        if (v21) {
            edi35 = v21;
            ecx36 = -1;
            eax37 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23) - reinterpret_cast<unsigned char>(eax23));
            do {
                if (!ecx36) 
                    break;
                --ecx36;
                ++edi35;
            } while (*reinterpret_cast<void***>(edi35) != *reinterpret_cast<void***>(&eax37));
            ecx38 = reinterpret_cast<uint32_t>(~ecx36);
            eax39 = ecx38;
            ecx40 = ecx38 >> 2;
            esi41 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi35) - ecx38);
            edi42 = ebp14;
            while (ecx40) {
                --ecx40;
                *reinterpret_cast<void***>(edi42) = *esi41;
                edi42 = edi42 + 4;
                esi41 = esi41 + 4;
            }
            ecx43 = eax39 & 3;
            while (ecx43) {
                --ecx43;
                *reinterpret_cast<void***>(edi42) = *esi41;
                ++edi42;
                ++esi41;
            }
            free(v21);
        }
        if (v19 && (esi44 = *a2, esi44 != 0xffffffff)) {
            eax45 = reinterpret_cast<struct s11*>(__p__iob());
            v46 = eax45->f30;
            eax47 = reinterpret_cast<int32_t>(_dup2(esi44, v46));
            if (eax47 == -1) {
                fun_403220(0, 0x411, v11, v8, v6, v4);
            }
            v48 = *a2;
            _close(v48);
            *a2 = reinterpret_cast<void**>(0xffffffff);
        }
        if (v20 && (esi49 = *a3, esi49 != 0xffffffff)) {
            eax50 = reinterpret_cast<struct s12*>(__p__iob());
            v51 = eax50->f30;
            eax52 = reinterpret_cast<int32_t>(_dup2(esi49, v51));
            if (eax52 == -1) {
                fun_403220(0, 0x411, v11, v8, v6, v4);
            }
            v53 = *a3;
            _close(v53);
            *a3 = reinterpret_cast<void**>(0xffffffff);
        }
    }
    return ebx10;
}

int32_t _ismbcalpha = 0x15506;

void fun_404bb0(uint32_t a1, void** a2);

int32_t __p___mb_cur_max = 0x154e4;

int32_t __p__pctype = 0x154ca;

int32_t _isctype = 0x154d8;

int32_t _chdir = 0x154c0;

void** fun_404180(void** ecx, void** a2, void** a3);

void fun_40cbd0(int32_t a1);

void** fun_404680(void** ecx, uint32_t a2, void** a3, int32_t* a4) {
    int32_t ebp5;
    void** ebx6;
    void** esi7;
    int32_t v8;
    int32_t eax9;
    int32_t eax10;
    int32_t ebp11;
    int32_t eax12;
    int32_t eax13;
    void** ebx14;
    void** v15;
    int32_t* eax16;
    int16_t** eax17;
    uint32_t eax18;
    uint32_t eax19;
    int32_t eax20;
    int32_t eax21;
    int32_t* esi22;
    void** ebp23;
    void** edi24;
    void** eax25;
    void** eax26;
    int32_t eax27;
    void** eax28;
    void** esi29;
    void** ebx30;
    int32_t v31;
    int32_t eax32;

    ebp5 = _ismbcalpha;
    ebx6 = *reinterpret_cast<void***>(a3);
    esi7 = *reinterpret_cast<void***>(a3 + 4);
    v8 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx6));
    eax9 = reinterpret_cast<int32_t>(ebp5(v8));
    if (!eax9 || (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx6 + 1) == 58) || *reinterpret_cast<void***>(ebx6 + 2))) {
        eax10 = reinterpret_cast<int32_t>(_mbsicmp(ebx6, "set"));
        if (eax10) {
            ebp11 = _mbsnbicmp;
            eax12 = reinterpret_cast<int32_t>(ebp11(ebx6, "cd", 2));
            if (eax12) {
                eax13 = reinterpret_cast<int32_t>(ebp11(ebx6, "chdir", 5));
                if (eax13) {
                    return 0;
                } else {
                    ebx14 = ebx6 + 5;
                }
            } else {
                ebx14 = ebx6 + 2;
            }
            fun_404bb0(a2, a3);
            if (reinterpret_cast<int32_t>(a2) <= reinterpret_cast<int32_t>(2)) {
                if (*reinterpret_cast<void***>(ebx14) || !esi7) {
                    if (*reinterpret_cast<void***>(ebx14) == 46 || (*reinterpret_cast<void***>(ebx14) == 92 || *reinterpret_cast<void***>(ebx14) == 47)) {
                        v15 = ebx14;
                    } else {
                        return 0;
                    }
                } else {
                    eax16 = reinterpret_cast<int32_t*>(__p___mb_cur_max());
                    if (*eax16 <= 1) {
                        eax17 = reinterpret_cast<int16_t**>(__p__pctype());
                        eax18 = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi7))));
                        *reinterpret_cast<int16_t*>(&eax18) = (*eax17)[eax18];
                        eax19 = eax18 & 0x103;
                    } else {
                        eax20 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi7));
                        eax19 = reinterpret_cast<uint32_t>(_isctype(eax20, 0x103));
                    }
                    if (!eax19 || (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi7 + 1) == 58) || *reinterpret_cast<void***>(esi7 + 2))) {
                        v15 = esi7;
                    } else {
                        return 0;
                    }
                }
                eax21 = reinterpret_cast<int32_t>(_chdir(v15));
                esi22 = a4;
                *esi22 = eax21;
            } else {
                return 0;
            }
        } else {
            if (a2 != 1) {
                eax25 = fun_404180(ecx, ebp23, edi24);
                if (*reinterpret_cast<void***>(eax25)) {
                    eax26 = fun_40add0(eax25, ebp23, edi24);
                    eax27 = reinterpret_cast<int32_t>(_putenv(eax26));
                    esi22 = a4;
                    *esi22 = eax27;
                    if (eax27 == -1) {
                        eax28 = g413424;
                        fun_403220(eax28, 0x41f, ebp23, edi24, esi29, ebx30);
                    }
                } else {
                    return 0;
                }
            } else {
                return 0;
            }
        }
        if (*esi22) {
            *esi22 = 1;
        }
        return 1;
    } else {
        v31 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx6));
        eax32 = reinterpret_cast<int32_t>(_mbctoupper(v31));
        fun_40cbd0(eax32 - 64);
        *a4 = 0;
        return 1;
    }
}

void** fun_405b20(void** a1, int32_t a2, int32_t a3, signed char* a4);

void** fun_405bc0(void** a1, signed char* a2) {
    void** eax3;
    void** eax4;

    eax3 = fun_405b20(a1, ".com", "PATH", a2);
    if (!eax3 && (eax3 = fun_405b20(a1, ".exe", "PATH", a2), !eax3)) {
        eax4 = fun_405b20(a1, ".bat", "PATH", a2);
        eax3 = reinterpret_cast<void**>(1 - reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax4) < reinterpret_cast<unsigned char>(1)) & reinterpret_cast<unsigned char>(eax4));
    }
    return eax3;
}

int32_t _strnicmp = 0x157be;

int32_t OpenFile = 0x15790;

int32_t _lread = 0x15786;

int32_t _memicmp = 0x157b2;

int32_t _llseek = 0x1577c;

int32_t _lclose = 0x15772;

int32_t fun_40ab40(int32_t a1, int32_t* a2) {
    void* esp3;
    void* esp4;
    int32_t ebp5;
    int32_t eax6;
    void* esp7;
    void* v8;
    int32_t eax9;
    void* v10;
    int32_t ebx11;
    void* esp12;
    int32_t edi13;
    int32_t eax14;
    int32_t ebp15;
    int32_t eax16;
    void* esp17;
    void* v18;
    int32_t eax19;
    uint32_t eax20;
    int32_t v21;
    int32_t eax22;
    void* esp23;
    int32_t* v24;
    int32_t* v25;
    int32_t* v26;
    int32_t eax27;
    void* v28;
    int32_t eax29;
    int32_t* v30;
    int32_t* v31;

    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x190);
    _splitpath(a1, 0, 0, 0, reinterpret_cast<int32_t>(esp3) + 0x90);
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    ebp5 = _strnicmp;
    eax6 = reinterpret_cast<int32_t>(ebp5(reinterpret_cast<int32_t>(esp4) + 0xb4, ".com", 3));
    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) + 20 - 4 - 4 - 4 - 4 + 4 + 12);
    if (!eax6) {
        addr_40aca0_2:
        *a2 = 1;
    } else {
        v8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) + 24);
        eax9 = reinterpret_cast<int32_t>(OpenFile(a1, v8, 64));
        esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 + 4);
        if (eax9 != -1) {
            v10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) + 18);
            ebx11 = _lread;
            ebx11(eax9, v10, 2, a1, v8, 64);
            esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 + 4);
            edi13 = _memicmp;
            eax14 = reinterpret_cast<int32_t>(edi13(reinterpret_cast<int32_t>(esp12) + 18, "MZ", 2, eax9, v10, 2, a1, v8, 64));
            if (!eax14) {
                ebp15 = _llseek;
                eax16 = reinterpret_cast<int32_t>(ebp15(eax9, 60));
                esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 - 4 - 4 + 4);
                if (eax16 == 60) {
                    v18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp17) + 20);
                    eax19 = reinterpret_cast<int32_t>(ebx11(eax9, v18));
                    eax20 = eax19 - 4;
                    if (!-(eax20 - (eax20 + (eax20 < eax20 + (eax20 < 1))))) {
                        v21 = eax9;
                        goto addr_40ac9a_8;
                    }
                    v21 = 0;
                    eax22 = reinterpret_cast<int32_t>(ebp15(eax9, 0, 0, eax9, v18));
                    esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp17) - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4);
                    if (eax22 == 4) 
                        goto addr_40ac5f_10; else 
                        goto addr_40ac49_11;
                } else {
                    _lclose(eax9, eax9, 60);
                    *v24 = 2;
                }
            } else {
                _lclose(eax9, eax9, v10, 2, a1, v8, 64);
                *v25 = 2;
            }
        } else {
            *v26 = 3;
        }
    }
    addr_40acad_15:
    eax27 = 0;
    addr_40acaf_16:
    return eax27;
    addr_40ac5f_10:
    v28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) + 18);
    ebx11(eax9, v28, 4, eax9, 0, 0, eax9, v18);
    eax29 = reinterpret_cast<int32_t>(edi13(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 - 4 + 4 + 18, "PE", 2, eax9, v28, 4, eax9, 0, 0, eax9, v18));
    if (eax29) {
        addr_40ac9a_8:
        _lclose(v21, eax9, v18);
        goto addr_40aca0_2;
    } else {
        _lclose(eax9, eax9, v28, 4, eax9, 0, 0, eax9, v18);
        *v30 = 0;
        eax27 = 1;
        goto addr_40acaf_16;
    }
    addr_40ac49_11:
    _lclose(eax9, eax9, 0, 0, eax9, v18);
    *v31 = 2;
    goto addr_40acad_15;
}

int32_t freopen = 0x1551e;

struct s13 {
    signed char[16] pad16;
    int32_t f10;
};

void** fun_404af0(void** a1, int32_t a2) {
    signed char v3;
    void** edi4;
    signed char* eax5;
    signed char* esi6;
    void* ebx7;
    int32_t eax8;
    int32_t eax9;
    struct s13* eax10;
    void** ebx11;
    int32_t eax12;
    int32_t ebp13;

    v3 = 0;
    edi4 = a1;
    while (*reinterpret_cast<void***>(edi4) == 32 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi4) == 9)) {
        ++edi4;
    }
    eax5 = reinterpret_cast<signed char*>(_mbspbrk(edi4, " \t<>\r"));
    esi6 = eax5;
    if (esi6) {
        v3 = *esi6;
        *esi6 = 0;
    }
    if (a2 != 4) {
        ebx7 = reinterpret_cast<void*>("w");
        eax8 = reinterpret_cast<int32_t>(__p__iob());
        eax9 = eax8 + 32;
        if (a2 != 2) {
            ebx7 = reinterpret_cast<void*>("a");
        }
    } else {
        ebx7 = reinterpret_cast<void*>("r");
        eax9 = reinterpret_cast<int32_t>(__p__iob());
    }
    eax10 = reinterpret_cast<struct s13*>(freopen(edi4, ebx7, eax9));
    ebx11 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx7) - (reinterpret_cast<uint32_t>(ebx7) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(ebx7) < reinterpret_cast<uint32_t>(ebx7) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax10) < 1))) + 1);
    if (ebx11 && a2 == 3) {
        eax12 = eax10->f10;
        ebp13 = _lseek;
        ebp13(eax12, 0, 2);
    }
    if (*reinterpret_cast<void***>(edi4)) {
        do {
            *reinterpret_cast<void***>(edi4) = reinterpret_cast<void**>(32);
            ++edi4;
        } while (*reinterpret_cast<void***>(edi4));
    }
    if (esi6) {
        *esi6 = v3;
    }
    return ebx11;
}

int32_t _chdrive = 0x15650;

void fun_40cbd0(int32_t a1) {
    _chdrive(a1);
    return;
}

int32_t _fsopen = 0x15646;

void** fun_40ca80(void** a1, int32_t a2) {
    void** ebx3;
    void** edi4;
    signed char* eax5;
    int32_t ecx6;
    int32_t eax7;
    uint32_t ecx8;
    uint32_t eax9;
    uint32_t ecx10;
    void*** esi11;
    void** edi12;
    uint32_t ecx13;
    void** eax14;

    ebx3 = a1;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx3) == 34)) {
        edi4 = ebx3 + 1;
        eax5 = reinterpret_cast<signed char*>(_mbsrchr(ebx3, 34));
        ecx6 = -1;
        *eax5 = 0;
        eax7 = reinterpret_cast<int32_t>(eax5) - reinterpret_cast<int32_t>(eax5);
        do {
            if (!ecx6) 
                break;
            --ecx6;
            ++edi4;
        } while (*reinterpret_cast<void***>(edi4) != *reinterpret_cast<void***>(&eax7));
        ecx8 = reinterpret_cast<uint32_t>(~ecx6);
        eax9 = ecx8;
        ecx10 = ecx8 >> 2;
        esi11 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi4) - ecx8);
        edi12 = ebx3;
        while (ecx10) {
            --ecx10;
            *reinterpret_cast<void***>(edi12) = *esi11;
            edi12 = edi12 + 4;
            esi11 = esi11 + 4;
        }
        ecx13 = eax9 & 3;
        while (ecx13) {
            --ecx13;
            *reinterpret_cast<void***>(edi12) = *esi11;
            ++edi12;
            ++esi11;
        }
    }
    eax14 = reinterpret_cast<void**>(_fsopen(ebx3, a2, 32));
    return eax14;
}

void** fun_406880(signed char a1);

void** fun_404d70(void** a1, void** a2);

struct s14 {
    signed char[1] pad1;
    void** f1;
};

struct s14* g413a7c = reinterpret_cast<struct s14*>(0);

void** fun_404f80() {
    void** v1;
    void** ebx2;
    void** v3;
    void** esi4;
    void** v5;
    void** edi6;
    void* esi7;
    void** v8;
    void** ebp9;
    void** eax10;
    void** eax11;
    void** eax12;
    int32_t edi13;
    void** eax14;
    void** eax15;
    void** eax16;
    void** ebx17;
    int1_t below_or_equal18;
    struct s14* tmp32_19;
    struct s14* eax20;
    int1_t zf21;
    void** ecx22;
    void** eax23;
    void** eax24;
    void** eax25;
    void** eax26;
    void** eax27;
    void** eax28;
    void** eax29;
    void** eax30;
    void** eax31;
    void** eax32;
    void** eax33;
    void** eax34;

    v1 = ebx2;
    v3 = esi4;
    v5 = edi6;
    esi7 = reinterpret_cast<void*>(0);
    v8 = ebp9;
    eax10 = fun_406880(1);
    if (eax10 == 10 || reinterpret_cast<int1_t>(eax10 == 0xffffffff)) {
        eax11 = g4133f4;
        fun_403220(eax11, 0x3fa, v8, v5, v3, v1);
    }
    eax12 = g4133d8;
    fun_404d70(eax10, eax12);
    edi13 = realloc;
    while ((eax14 = g4133d8, eax15 = fun_404cf0(eax14), eax16 = fun_4069d0(eax15, 1), ebx17 = eax16, eax16 != 35) && (ebx17 != 10 && ebx17 != 0xffffffff)) {
        below_or_equal18 = reinterpret_cast<uint32_t>(esi7) + 2 <= reinterpret_cast<uint32_t>(g413a7c);
        if (!below_or_equal18) {
            tmp32_19 = g413a7c + 0x200;
            g413a7c = tmp32_19;
            eax20 = g413a7c;
            zf21 = g413a74 == 0;
            if (!zf21) {
                ecx22 = g413a74;
                eax23 = reinterpret_cast<void**>(edi13(ecx22, &eax20->f1));
                g413a74 = eax23;
                if (!eax23) {
                    eax24 = g4133f4;
                    fun_403220(eax24, 0x419, v8, v5, v3, v1);
                }
            } else {
                eax25 = fun_40acf0(&eax20->f1);
                g413a74 = eax25;
            }
        }
        eax26 = g413a74;
        esi7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi7) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax26) + reinterpret_cast<uint32_t>(esi7) + 0xffffffff) = *reinterpret_cast<signed char*>(&ebx17);
    }
    eax27 = g413a74;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax27) + reinterpret_cast<uint32_t>(esi7)) = 0;
    if (reinterpret_cast<int1_t>(ebx17 == 35) && (eax28 = g4133d8, eax29 = fun_404cf0(eax28), ebx17 = eax29, eax29 != 10)) {
        do {
            if (ebx17 == 0xffffffff) 
                goto addr_405089_13;
            eax30 = g4133d8;
            eax31 = fun_404cf0(eax30);
            ebx17 = eax31;
        } while (!reinterpret_cast<int1_t>(eax31 == 10));
    }
    if (!reinterpret_cast<int1_t>(ebx17 == 0xffffffff)) {
        addr_405095_16:
        eax32 = g413a74;
        eax33 = fun_40b690(ecx22, eax32);
        return eax33;
    } else {
        addr_405089_13:
        eax34 = g4133d8;
        fun_404d70(ebx17, eax34);
        goto addr_405095_16;
    }
}

void** g413408 = reinterpret_cast<void**>(0);

void** fun_4051e0(void** a1) {
    void** v2;
    void** v3;
    void** ebx4;
    void** v5;
    void** esi6;
    void** ebx7;
    void** v8;
    void** edi9;
    int32_t esi10;
    int32_t edi11;
    void** eax12;
    int32_t ecx13;
    uint32_t eax14;
    int32_t eax15;
    int1_t zf16;
    int32_t v17;
    uint32_t eax18;
    int32_t eax19;
    void** eax20;
    int32_t v21;
    int32_t v22;
    void** eax23;
    uint32_t eax24;
    int32_t eax25;
    int1_t zf26;
    int32_t v27;
    uint32_t eax28;
    int32_t eax29;
    void** eax30;
    int32_t v31;
    int32_t v32;

    v2 = reinterpret_cast<void**>(__return_address());
    v3 = ebx4;
    v5 = esi6;
    ebx7 = a1;
    v8 = edi9;
    if (*reinterpret_cast<void***>(ebx7)) {
        esi10 = _mbctoupper;
        edi11 = _mbschr;
        while (1) {
            eax12 = *reinterpret_cast<void***>(ebx7);
            ecx13 = reinterpret_cast<signed char>(eax12);
            if (ecx13 == 43) {
                ++ebx7;
                if (!*reinterpret_cast<void***>(ebx7)) {
                    addr_405348_5:
                    if (!*reinterpret_cast<void***>(ebx7)) 
                        break;
                    ++ebx7;
                    if (*reinterpret_cast<void***>(ebx7)) 
                        continue; else 
                        break;
                } else {
                    do {
                        eax12 = *reinterpret_cast<void***>(ebx7);
                        if (eax12 == 45) 
                            break;
                        eax14 = reinterpret_cast<uint32_t>(esi10(static_cast<int32_t>(reinterpret_cast<signed char>(eax12))));
                        eax15 = reinterpret_cast<int32_t>(edi11("DINS", eax14 & 0xffff));
                        if (!eax15) {
                            zf16 = g413408 == 0;
                            if (zf16 || (v17 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx7)), eax18 = reinterpret_cast<uint32_t>(esi10(v17)), eax19 = reinterpret_cast<int32_t>(edi11("ABCEKLMPQRTV", eax18 & 0xffff)), eax19 == 0)) {
                                eax20 = g4133f4;
                                eax12 = fun_403220(eax20, 0x400, v8, v5, v3, v2);
                            } else {
                                *reinterpret_cast<void***>(&eax19) = *reinterpret_cast<void***>(ebx7);
                                v21 = eax19;
                                eax12 = fun_4086d0(*reinterpret_cast<signed char*>(&v21), 1);
                            }
                        } else {
                            *reinterpret_cast<void***>(&eax15) = *reinterpret_cast<void***>(ebx7);
                            v22 = eax15;
                            eax12 = fun_4086d0(*reinterpret_cast<signed char*>(&v22), 1);
                        }
                        ++ebx7;
                    } while (*reinterpret_cast<void***>(ebx7));
                    if (!*reinterpret_cast<void***>(ebx7)) 
                        break;
                }
            } else {
                if (ecx13 != 45) {
                    if (eax12 != 32 && eax12 != 9) {
                        eax23 = g4133f4;
                        eax12 = fun_403220(eax23, 0x400, v8, v5, v3, v2);
                        goto addr_405348_5;
                    }
                }
            }
            ++ebx7;
            if (!*reinterpret_cast<void***>(ebx7)) 
                break;
            do {
                eax12 = *reinterpret_cast<void***>(ebx7);
                if (eax12 == 43) 
                    goto addr_405348_5;
                eax24 = reinterpret_cast<uint32_t>(esi10(static_cast<int32_t>(reinterpret_cast<signed char>(eax12))));
                eax25 = reinterpret_cast<int32_t>(edi11("DINS", eax24 & 0xffff));
                if (!eax25) {
                    zf26 = g413408 == 0;
                    if (zf26 || (v27 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx7)), eax28 = reinterpret_cast<uint32_t>(esi10(v27)), eax29 = reinterpret_cast<int32_t>(edi11("ABCEKLMPQRTV", eax28 & 0xffff)), eax29 == 0)) {
                        eax30 = g4133f4;
                        eax12 = fun_403220(eax30, 0x400, v8, v5, v3, v2);
                    } else {
                        *reinterpret_cast<void***>(&eax29) = *reinterpret_cast<void***>(ebx7);
                        v31 = eax29;
                        eax12 = fun_4086d0(*reinterpret_cast<signed char*>(&v31), 0);
                    }
                } else {
                    *reinterpret_cast<void***>(&eax25) = *reinterpret_cast<void***>(ebx7);
                    v32 = eax25;
                    eax12 = fun_4086d0(*reinterpret_cast<signed char*>(&v32), 0);
                }
                ++ebx7;
            } while (*reinterpret_cast<void***>(ebx7));
            goto addr_405348_5;
        }
    }
    return eax12;
}

void** g413a80 = reinterpret_cast<void**>(0xff);

int32_t getc = 0x1554a;

int32_t __p__mbctype = 0x1553a;

void** fun_404cf0(void** a1) {
    int1_t zf2;
    int1_t zf3;
    void** ebx4;
    int32_t esi5;
    void** eax6;
    int32_t eax7;
    int32_t ecx8;
    uint32_t eax9;
    void** ecx10;

    zf2 = reinterpret_cast<int1_t>(g413a80 == 0xffffffff);
    if (!zf2) {
        zf3 = reinterpret_cast<int1_t>(g413a80 == 0x8140);
        ebx4 = reinterpret_cast<void**>(32);
        if (!zf3) {
            ebx4 = g413a80;
        }
        g413a80 = reinterpret_cast<void**>(0xffffffff);
    } else {
        esi5 = getc;
        eax6 = reinterpret_cast<void**>(esi5(a1));
        ebx4 = eax6;
        eax7 = reinterpret_cast<int32_t>(__p__mbctype());
        ecx8 = 0;
        *reinterpret_cast<signed char*>(&ecx8) = *reinterpret_cast<signed char*>(&ebx4);
        if (*reinterpret_cast<unsigned char*>(ecx8 + eax7 + 1) & 4 && (eax9 = reinterpret_cast<uint32_t>(esi5(a1)), ecx10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx4) << 8 | eax9), g413a80 = ecx10, reinterpret_cast<int1_t>(ecx10 == 0x8140))) {
            return 32;
        }
    }
    return ebx4;
}

int32_t ungetc = 0x15552;

void** fun_404d70(void** a1, void** a2) {
    void** eax3;
    int32_t esi4;
    void** eax5;
    void** eax6;

    eax3 = g413a80;
    if (!reinterpret_cast<int1_t>(eax3 == 0xffffffff)) {
        esi4 = ungetc;
        esi4(reinterpret_cast<unsigned char>(eax3) & 0xff, a2);
        eax5 = reinterpret_cast<void**>(esi4(a1, a2));
        g413a80 = reinterpret_cast<void**>(0xffffffff);
        return eax5;
    } else {
        if (reinterpret_cast<unsigned char>(a1) & 0xffffff00) {
            g413a80 = a1;
            return a1;
        } else {
            eax6 = reinterpret_cast<void**>(ungetc(a1, a2));
            return eax6;
        }
    }
}

void** fun_404de0();

void** fun_406940(signed char a1);

void** fun_4069d0(void** a1, signed char a2) {
    void** eax3;
    int32_t ebx4;
    void** eax5;
    void** eax6;
    void** ecx7;
    void** eax8;
    void** ecx9;
    int32_t v10;
    void** eax11;

    eax3 = a1;
    if (!reinterpret_cast<int1_t>(eax3 == 92)) {
        addr_406a6f_2:
        return eax3;
    } else {
        *reinterpret_cast<signed char*>(&ebx4) = a2;
        do {
            if (!*reinterpret_cast<signed char*>(&ebx4)) {
                eax5 = fun_404de0();
            } else {
                eax6 = g4133d8;
                eax5 = fun_404cf0(eax6);
            }
            ecx7 = g4133d8;
            if (!reinterpret_cast<int1_t>(eax5 == 10)) 
                break;
            g4133f0 = reinterpret_cast<void**>(1);
            ++g4133f4;
            if (!*reinterpret_cast<signed char*>(&ebx4)) {
                eax8 = fun_404de0();
            } else {
                eax8 = fun_404cf0(ecx7);
            }
            ecx9 = g413408;
            if (reinterpret_cast<int1_t>(eax8 == 59) && ecx9 || reinterpret_cast<int1_t>(eax8 == 35)) {
                v10 = ebx4;
                fun_406940(*reinterpret_cast<signed char*>(&v10));
                eax11 = g4133d8;
                ++g4133f4;
                if (!*reinterpret_cast<signed char*>(&ebx4)) {
                    eax8 = fun_404de0();
                } else {
                    eax8 = fun_404cf0(eax11);
                }
            }
        } while (eax8 == 92);
        goto addr_406a5f_16;
    }
    fun_404d70(eax5, ecx7);
    eax3 = reinterpret_cast<void**>(92);
    goto addr_406a6f_2;
    addr_406a5f_16:
    return eax8;
}

int32_t fgets = 0x153b0;

int16_t g413aa0 = 0;

int32_t fun_405a20(void** a1) {
    void** v2;
    void** ebx3;
    void** eax4;
    void** v5;
    void** esi6;
    void** v7;
    void** edi8;
    void** v9;
    void** ebp10;
    int32_t eax11;
    void** eax12;
    void** eax13;
    void** esi14;
    int32_t ebx15;
    int1_t zf16;
    signed char* ebp17;
    signed char* eax18;
    signed char* edx19;
    signed char* edi20;
    int32_t ecx21;
    void* eax22;
    signed char* eax23;
    int32_t eax24;
    void** eax25;
    int32_t eax26;

    v2 = ebx3;
    eax4 = g4133d8;
    g4133f4 = reinterpret_cast<void**>(0);
    v5 = esi6;
    v7 = edi8;
    v9 = ebp10;
    eax11 = reinterpret_cast<int32_t>(fgets(0x413aa0, 0x400, eax4));
    if (!eax11) {
        addr_405ae3_2:
        eax12 = g4133d8;
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax12 + 12)) & 16)) {
            eax13 = g4133f4;
            g413424 = eax13;
            fun_403220(0, 0x41d, v9, v7, v5, v2);
        }
    } else {
        esi14 = a1;
        ebx15 = _mbstok;
        do {
            zf16 = *reinterpret_cast<signed char*>(&g413aa0) == 91;
            if (zf16 && (ebp17 = reinterpret_cast<signed char*>(0), eax18 = reinterpret_cast<signed char*>(ebx15(0x413aa1, " \t\n")), edx19 = eax18, !!edx19)) {
                do {
                    if (ebp17) 
                        break;
                    edi20 = edx19;
                    ecx21 = -1;
                    eax22 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax18) - reinterpret_cast<uint32_t>(eax18));
                    do {
                        if (!ecx21) 
                            break;
                        --ecx21;
                        ++edi20;
                        ++esi14;
                    } while (*edi20 != *reinterpret_cast<signed char*>(&eax22));
                    eax23 = reinterpret_cast<signed char*>(~ecx21 + reinterpret_cast<uint32_t>(edx19) - 2);
                    if (*eax23 == 93) {
                        ebp17 = reinterpret_cast<signed char*>(1);
                        *eax23 = 0;
                    }
                    eax24 = reinterpret_cast<int32_t>(_mbsicmp(edx19, esi14));
                    if (!eax24) 
                        goto addr_405b10_13;
                    eax18 = reinterpret_cast<signed char*>(ebx15(0, " \t\n"));
                    edx19 = eax18;
                } while (edx19);
            }
            eax25 = g4133d8;
            ++g4133f4;
            eax26 = reinterpret_cast<int32_t>(fgets(0x413aa0, 0x400, eax25));
        } while (eax26);
        goto addr_405ae3_2;
    }
    return 0;
    addr_405b10_13:
    return 1;
}

int32_t _searchenv = 0x15568;

void** fun_405b20(void** a1, int32_t a2, int32_t a3, signed char* a4) {
    void* esp5;
    void* esp6;
    signed char* ebx7;
    int32_t eax8;
    signed char* edi9;
    int32_t ecx10;
    int32_t eax11;
    signed char v12;
    uint32_t ecx13;
    uint32_t eax14;
    uint32_t ecx15;
    signed char* esi16;
    signed char* edi17;
    uint32_t ecx18;
    void** eax19;

    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x104 - 4 - 4 - 4);
    _makepath(reinterpret_cast<int32_t>(esp5) + 12, 0, 0, a1, a2);
    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    ebx7 = a4;
    _searchenv(reinterpret_cast<int32_t>(esp6) + 32, a3, ebx7);
    if (*ebx7 && (eax8 = reinterpret_cast<int32_t>(_mbspbrk(a1, "/\\:")), !!eax8)) {
        edi9 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp6) + 20 - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 - 4 + 4 + 8 + 12);
        ecx10 = -1;
        eax11 = eax8 - eax8;
        do {
            if (!ecx10) 
                break;
            --ecx10;
            ++edi9;
        } while (v12 != *reinterpret_cast<signed char*>(&eax11));
        ecx13 = reinterpret_cast<uint32_t>(~ecx10);
        eax14 = ecx13;
        ecx15 = ecx13 >> 2;
        esi16 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi9) - ecx13);
        edi17 = ebx7;
        while (ecx15) {
            --ecx15;
            *edi17 = *esi16;
            edi17 = edi17 + 4;
            esi16 = esi16 + 4;
        }
        ecx18 = eax14 & 3;
        while (ecx18) {
            --ecx18;
            *edi17 = *esi16;
            ++edi17;
            ++esi16;
        }
    }
    eax19 = reinterpret_cast<void**>(_mbsrchr(ebx7, 46));
    return eax19;
}

void** fun_406490(void** a1, void* a2) {
    void** edi3;
    void** esi4;
    void** eax5;
    void** ecx6;

    edi3 = a1;
    esi4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(a2) + reinterpret_cast<unsigned char>(edi3));
    while (eax5 = fun_404de0(), !!eax5) {
        if (eax5 == 0xffffffff) 
            goto addr_4064f5_4;
        *reinterpret_cast<void***>(edi3) = eax5;
        ++edi3;
        if (esi4 == edi3) 
            goto addr_4064c1_6;
        if (eax5 == 10) 
            goto addr_4064da_8;
        g4133f0 = reinterpret_cast<void**>(0);
    }
    addr_4064fa_10:
    return eax5;
    addr_4064f5_4:
    eax5 = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(edi3) = reinterpret_cast<void**>(0);
    goto addr_4064fa_10;
    addr_4064c1_6:
    *reinterpret_cast<signed char*>(edi3 + 0xffffffff) = 0;
    ecx6 = g4133d8;
    fun_404d70(eax5, ecx6);
    return edi3;
    addr_4064da_8:
    ++g4133f4;
    g4133f0 = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(edi3) = reinterpret_cast<void**>(0);
    return edi3;
}

void fun_405f40(void** a1, void** a2) {
    void** eax3;

    eax3 = a1;
    if (*reinterpret_cast<void***>(eax3)) {
        do {
            eax3 = *reinterpret_cast<void***>(eax3);
        } while (*reinterpret_cast<void***>(eax3));
    }
    *reinterpret_cast<void***>(eax3) = a2;
    return;
}

struct s15 {
    signed char[1] pad1;
    signed char f1;
};

void** fun_405f60(signed char** a1) {
    signed char** esi2;
    signed char* edi3;
    signed char* eax4;
    int32_t ebp5;
    int32_t ebx6;
    struct s15* eax7;
    signed char* eax8;
    signed char* ecx9;

    esi2 = a1;
    edi3 = reinterpret_cast<signed char*>(0x410f40);
    eax4 = *esi2;
    ebp5 = 0;
    ebx6 = _mbschr;
    do {
        eax7 = reinterpret_cast<struct s15*>(ebx6(eax4, 60));
        if (!eax7) 
            break;
        eax4 = &eax7->f1;
        if (*eax4 == 60) {
            ebp5 = 1;
        }
    } while (!ebp5);
    goto addr_405f92_6;
    return 0;
    addr_405f92_6:
    eax8 = eax4 + 1;
    if (!*eax8) {
        addr_406001_8:
        *edi3 = 0;
        *esi2 = eax8;
        return 0x410f40;
    } else {
        do {
            if (*eax8 == 32) 
                goto addr_406001_8;
            if (*eax8 == 62) 
                goto addr_406001_8;
            if (*eax8 == 60) 
                goto addr_406001_8;
            if (*eax8 == 94) 
                goto addr_406001_8;
            if (*eax8 == 44) 
                goto addr_406001_8;
            if (*eax8 == 9) 
                goto addr_406001_8;
            if (*eax8 == 10) 
                goto addr_406001_8;
            if (*eax8 != 36 || (ecx9 = eax8 + 1, *ecx9 != 40)) {
                *edi3 = *eax8;
                ++edi3;
                ++eax8;
            } else {
                *edi3 = 36;
                ++edi3;
                eax8 = ecx9;
                *edi3 = 40;
                if (*ecx9 != 10) {
                    do {
                        if (*eax8 == 41) 
                            break;
                        ++eax8;
                        *edi3 = *eax8;
                        ++edi3;
                    } while (*eax8 != 10);
                }
                if (*eax8 == 10) 
                    break;
            }
        } while (*eax8);
        goto addr_406001_8;
    }
    goto addr_406001_8;
}

void fun_4062a0(void*** a1, signed char* a2) {
    void** v3;
    void** ebx4;
    void** v5;
    void** esi6;
    void*** esp7;
    void** v8;
    void** edi9;
    void*** ebx10;
    int32_t ecx11;
    int32_t eax12;
    int32_t eax13;
    int32_t eax14;
    void** edi15;
    signed char* edi16;
    int32_t eax17;
    int32_t ecx18;
    int32_t eax19;
    signed char* v20;
    void** edx21;
    signed char* edi22;
    int32_t ecx23;
    int32_t eax24;
    uint32_t v25;
    int32_t ecx26;
    int32_t eax27;
    uint32_t ecx28;
    uint32_t ecx29;
    void** edi30;
    int32_t ecx31;
    int32_t eax32;
    uint32_t edx33;
    int32_t ecx34;
    int32_t eax35;
    uint32_t ecx36;
    uint32_t ecx37;
    int32_t ecx38;
    int32_t eax39;
    void** v40;
    void** eax41;
    signed char* edi42;
    int32_t ecx43;
    void* eax44;
    uint32_t ecx45;
    uint32_t edx46;
    uint32_t ecx47;
    void*** esi48;
    void** edi49;
    uint32_t ecx50;

    v3 = ebx4;
    v5 = esi6;
    esp7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8 - 4 - 4 - 4);
    v8 = edi9;
    ebx10 = a1;
    ecx11 = -1;
    eax12 = eax13 - eax14;
    edi15 = *ebx10;
    do {
        if (!ecx11) 
            break;
        --ecx11;
        ++edi15;
    } while (*reinterpret_cast<void***>(edi15) != *reinterpret_cast<void***>(&eax12));
    edi16 = a2;
    eax17 = eax12 - eax12;
    ecx18 = -1;
    do {
        if (!ecx18) 
            break;
        --ecx18;
        ++edi16;
    } while (*edi16 != *reinterpret_cast<signed char*>(&eax17));
    eax19 = fun_40ceb4(~ecx18, v8, v5, v3);
    v20 = reinterpret_cast<signed char*>(esp7 - 4 + 4);
    edx21 = *ebx10;
    while (1) {
        *reinterpret_cast<void***>(&eax19) = *reinterpret_cast<void***>(edx21);
        if (*reinterpret_cast<void***>(&eax19) == 60) {
            if (*reinterpret_cast<void***>(edx21 + 1) == 60) 
                break;
            ++edx21;
        } else {
            ++edx21;
        }
    }
    edi22 = a2;
    ecx23 = -1;
    eax24 = eax19 - eax19;
    do {
        if (!ecx23) 
            break;
        --ecx23;
        ++edi22;
    } while (*edi22 != *reinterpret_cast<signed char*>(&eax24));
    v25 = reinterpret_cast<uint32_t>(~ecx23);
    ecx26 = -1;
    eax27 = eax24 - eax24;
    do {
        if (!ecx26) 
            break;
        --ecx26;
    } while (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&a1) + 1) != *reinterpret_cast<signed char*>(&eax27));
    ecx28 = v25 >> 2;
    while (ecx28) {
        --ecx28;
    }
    ecx29 = v25 & 3;
    while (ecx29) {
        --ecx29;
    }
    edi30 = edx21 + 2;
    ecx31 = -1;
    eax32 = eax27 - eax27;
    do {
        if (!ecx31) 
            break;
        --ecx31;
        ++edi30;
    } while (*reinterpret_cast<void***>(edi30) != *reinterpret_cast<void***>(&eax32));
    edx33 = reinterpret_cast<uint32_t>(~ecx31);
    ecx34 = -1;
    eax35 = eax32 - eax32;
    do {
        if (!ecx34) 
            break;
        --ecx34;
    } while (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&a1) + 1) != *reinterpret_cast<signed char*>(&eax35));
    ecx36 = edx33 >> 2;
    while (ecx36) {
        --ecx36;
    }
    ecx37 = edx33 & 3;
    while (ecx37) {
        --ecx37;
    }
    ecx38 = -1;
    eax39 = eax35 - eax35;
    do {
        if (!ecx38) 
            break;
        --ecx38;
    } while (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&a1) + 1) != *reinterpret_cast<signed char*>(&eax39));
    v40 = *ebx10;
    eax41 = reinterpret_cast<void**>(realloc(v40, ~ecx38));
    edi42 = v20;
    *ebx10 = eax41;
    ecx43 = -1;
    eax44 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax41) - reinterpret_cast<unsigned char>(eax41));
    do {
        if (!ecx43) 
            break;
        --ecx43;
        ++edi42;
    } while (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&a1) + 1) != *reinterpret_cast<signed char*>(&eax44));
    ecx45 = reinterpret_cast<uint32_t>(~ecx43);
    edx46 = ecx45;
    ecx47 = ecx45 >> 2;
    esi48 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(edi42) - ecx45);
    edi49 = *ebx10;
    while (ecx47) {
        --ecx47;
        *reinterpret_cast<void***>(edi49) = *esi48;
        edi49 = edi49 + 4;
        esi48 = esi48 + 4;
    }
    ecx50 = edx46 & 3;
    while (ecx50) {
        --ecx50;
        *reinterpret_cast<void***>(edi49) = *esi48;
        ++edi49;
        ++esi48;
    }
    return;
}

void** fun_405530(void** a1, void** a2);

void** fun_407680(void** ecx, void** a2);

void** fun_404de0() {
    void** eax1;
    void** v2;
    void** ebx3;
    void** v4;
    void** esi5;
    void** v6;
    void** edi7;
    void** v8;
    void** ebp9;
    void** eax10;
    void* esp11;
    int32_t ebx12;
    int1_t zf13;
    int1_t zf14;
    int1_t zf15;
    void** ecx16;
    void* esp17;
    void** esi18;
    void** eax19;
    void** eax20;
    void* esp21;
    void** edi22;
    signed char v23;
    signed char v24;
    signed char v25;
    signed char v26;
    int32_t eax27;
    void* esp28;
    void** v29;
    signed char v30;
    signed char v31;
    void** eax32;
    int32_t eax33;
    void* esp34;
    void** eax35;
    void** eax36;
    void** eax37;
    int1_t zf38;
    void** eax39;
    void** eax40;
    int1_t zf41;
    void** eax42;

    eax1 = g4133d8;
    v2 = ebx3;
    v4 = esi5;
    v6 = edi7;
    v8 = ebp9;
    eax10 = fun_404cf0(eax1);
    esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 4);
    ebx12 = _mbstok;
    while ((zf13 = g413a78 == 0, !zf13) || (zf14 = g4133f0 == 0, !zf14) && reinterpret_cast<int1_t>(eax10 == 33)) {
        g4133f0 = reinterpret_cast<void**>(0);
        zf15 = g413a78 == 0;
        if (!zf15) {
            ecx16 = g4133d8;
            fun_404d70(eax10, ecx16);
            esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) - 4 - 4 - 4 + 8 + 4);
            esi18 = g413a78;
            g413a78 = reinterpret_cast<void**>(0);
        } else {
            eax19 = fun_404f80();
            esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) - 4 + 4);
            esi18 = eax19;
        }
        eax20 = fun_4050b0(esi18, reinterpret_cast<int32_t>(esp17) + 19);
        esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp17) - 4 - 4 - 4 + 8 + 4);
        edi22 = eax20;
        if (v23 != 9) {
            if (v24 != 10) {
                if (v25 != 11) {
                    if (v26 == 12) {
                        eax27 = reinterpret_cast<int32_t>(_mbsnbicmp(edi22, "\\t", 2));
                        esp28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4 - 4 - 4 + 4 + 12);
                        if (!eax27) {
                            edi22 = edi22 + 2;
                            printf("\t");
                            esp28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) - 4 - 4 + 4 + 4);
                        }
                        fun_403370(13, edi22, v8, v6, v4, v2, v29);
                        esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) - 4 - 4 - 4 + 4 + 8);
                    } else {
                        if (v30 != 13) {
                            *reinterpret_cast<signed char*>(&eax20) = v31;
                            fun_405530(edi22, eax20);
                            esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4 - 4 + 8 + 4);
                        } else {
                            eax32 = reinterpret_cast<void**>(ebx12(edi22, " \t"));
                            eax33 = reinterpret_cast<int32_t>(ebx12(0, " \t"));
                            esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 + 4 + 8);
                            if (eax33) {
                                eax35 = g4133f4;
                                fun_403220(eax35, 0x409, eax32, v8, v6, v4);
                                esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp34) - 4 - 4 - 4 - 4 + 4 + 12);
                            }
                            eax36 = fun_407b70(eax32);
                            esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp34) - 4 - 4 + 4 + 4);
                            if (eax36) {
                                *reinterpret_cast<void***>(eax36 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax36 + 12)) | 16);
                            }
                        }
                    }
                } else {
                    eax37 = g4133f4;
                    fun_403220(eax37, 0x41a, edi22, v8, v6, v4);
                    esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4 - 4 - 4 + 4 + 12);
                }
            } else {
                fun_4051e0(edi22);
                esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4 + 4 + 4);
            }
        } else {
            zf38 = g413408 == 0;
            if (!zf38) {
                eax39 = g4133f4;
                fun_403220(eax39, 0x409, esi18, v8, v6, v4);
                esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4 - 4 - 4 + 4 + 12);
            }
            eax40 = fun_407680(ecx16, edi22);
            esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4 + 4 + 4);
            if (*reinterpret_cast<signed char*>(&eax40) == 18) 
                goto addr_404e7d_24;
        }
        g4133f0 = reinterpret_cast<void**>(1);
        zf41 = g413a74 == esi18;
        if (!zf41) {
            free(esi18);
            esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) - 4 - 4 + 4 + 4);
        }
        eax42 = g4133d8;
        ++g4133f4;
        eax10 = fun_404cf0(eax42);
        esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) - 4 - 4 + 4 + 4);
    }
    addr_404e82_28:
    return eax10;
    addr_404e7d_24:
    eax10 = reinterpret_cast<void**>(32);
    goto addr_404e82_28;
}

void fun_40681c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38, int32_t a39, int32_t a40, int32_t a41);

void** g413400 = reinterpret_cast<void**>(0);

void** g413a70 = reinterpret_cast<void**>(0xff);

void fun_407550(void** a1, void** a2);

void fun_407070(void** a1, void** a2);

void** fun_4075c0(void** a1);

void** fun_4065d0(void** a1, void** a2, void** a3) {
    void** v4;
    void** eax5;
    void** v6;
    void** ebx7;
    void** v8;
    void** esi9;
    void** v10;
    void** edi11;
    void** ecx12;
    int32_t edx13;
    void** eax14;
    void** eax15;
    int1_t zf16;
    int1_t less17;
    void** eax18;
    int1_t zf19;
    int1_t zf20;
    void** esi21;
    void** eax22;
    int1_t zf23;
    void** eax24;
    void** eax25;
    void** eax26;
    int1_t zf27;
    void** eax28;
    void** eax29;
    void** eax30;
    void** ecx31;
    void** eax32;
    int1_t zf33;
    int1_t zf34;
    void** ecx35;
    void** ecx36;
    void** eax37;

    v4 = reinterpret_cast<void**>(__return_address());
    eax5 = a1;
    v6 = ebx7;
    v8 = esi9;
    v10 = edi11;
    while (ecx12 = eax5 + 1, reinterpret_cast<unsigned char>(ecx12) <= reinterpret_cast<unsigned char>(95)) {
        edx13 = 0;
        *reinterpret_cast<signed char*>(&edx13) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx12) + reinterpret_cast<uint32_t>(fun_40681c));
        switch (edx13) {
        case 0:
            eax14 = g4133d8;
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax14 + 12)) & 16)) {
                eax15 = g4133f4;
                eax14 = fun_403220(eax15, 0x40e, v10, v8, v6, v4);
            }
            zf16 = g413400 == 0;
            if (zf16) {
                less17 = reinterpret_cast<signed char>(g413a70) < reinterpret_cast<signed char>(0);
                if (less17) 
                    goto addr_4066af_8;
                eax18 = g4133f4;
                fun_403220(eax18, 0x3fc, v10, v8, v6, v4);
            } else {
                fun_407550(v10, v8);
            }
        case 1:
            ++g4133f4;
            g4133f0 = reinterpret_cast<void**>(1);
            eax5 = fun_404de0();
            if (reinterpret_cast<int1_t>(eax5 == 59) && (zf19 = g413408 == 0, !zf19) || reinterpret_cast<int1_t>(eax5 == 35)) {
                fun_406940(0);
                ++g4133f4;
                g4133f0 = reinterpret_cast<void**>(1);
                eax5 = fun_404de0();
            }
            if (eax5 == 32 || (g4133f0 = reinterpret_cast<void**>(1), reinterpret_cast<int1_t>(eax5 == 9))) {
                g4133f0 = reinterpret_cast<void**>(0);
            }
            zf20 = g4133f0 == 0;
            if (zf20) 
                goto addr_406742_16;
            if (!reinterpret_cast<int1_t>(eax5 == 0xffffffff)) 
                goto addr_40672d_18;
        case 7:
            goto 0x40675e;
        case 6:
            goto 0x40674a;
        case 5:
            goto 0x406713;
        case 4:
            goto 0x406701;
        case 2:
            goto 0x4066b7;
        case 3:
            goto 0x4066ef;
        }
    }
    esi21 = a2;
    addr_406762_21:
    eax22 = a3;
    fun_407070(esi21, eax22);
    zf23 = g4133f0 == 0;
    if (zf23 || (eax22 = reinterpret_cast<void**>(_mbsicmp(0x413aa0, "include")), !!eax22)) {
        *reinterpret_cast<signed char*>(&eax22) = 16;
        g4133f0 = reinterpret_cast<void**>(0);
        return eax22;
    } else {
        g4133f0 = reinterpret_cast<void**>(0);
        eax24 = fun_406880(0);
        if (eax24 == 58 || eax24 == 61) {
            eax25 = g4133d8;
            eax26 = fun_404d70(eax24, eax25);
            *reinterpret_cast<signed char*>(&eax26) = 16;
            return eax26;
        } else {
            zf27 = g413408 == 0;
            if (!zf27) {
                eax28 = g4133f4;
                fun_403220(eax28, 0x409, esi21, v10, v8, v6);
            }
            eax29 = fun_4075c0(eax24);
            return eax29;
        }
    }
    g4133f0 = reinterpret_cast<void**>(0);
    eax30 = fun_404de0();
    if (!reinterpret_cast<int1_t>(eax30 == 58)) {
        ecx31 = g4133d8;
        eax32 = fun_404d70(eax30, ecx31);
        *reinterpret_cast<signed char*>(&eax32) = 20;
        return eax32;
    } else {
        *reinterpret_cast<void***>(a2) = eax30;
        eax30 = reinterpret_cast<void**>(21);
        *reinterpret_cast<void***>(a2 + 1) = reinterpret_cast<void**>(0);
        return eax30;
    }
    *reinterpret_cast<signed char*>(&eax5) = 19;
    g4133f0 = reinterpret_cast<void**>(0);
    return eax5;
    *reinterpret_cast<signed char*>(&eax5) = 22;
    g4133f0 = reinterpret_cast<void**>(0);
    return eax5;
    zf33 = g413408 == 0;
    if (!zf33 && (zf34 = g4133f0 == 0, !zf34)) {
        *reinterpret_cast<signed char*>(&eax5) = 23;
        return eax5;
    }
    ecx35 = g4133d8;
    fun_404d70(eax5, ecx35);
    esi21 = a2 - 1;
    goto addr_406762_21;
    addr_4066af_8:
    *reinterpret_cast<signed char*>(&eax14) = 23;
    return eax14;
    addr_406742_16:
    *reinterpret_cast<signed char*>(&eax5) = 18;
    return eax5;
    addr_40672d_18:
    ecx36 = g4133d8;
    eax37 = fun_404d70(eax5, ecx36);
    *reinterpret_cast<signed char*>(&eax37) = 17;
    return eax37;
}

void** fun_406880(signed char a1) {
    int32_t ebx2;
    void** eax3;
    void** ecx4;
    void** ecx5;
    int32_t v6;
    int1_t zf7;
    int1_t zf8;
    int32_t v9;
    void** ecx10;

    *reinterpret_cast<signed char*>(&ebx2) = a1;
    do {
        if (!*reinterpret_cast<signed char*>(&ebx2)) {
            eax3 = fun_404de0();
        } else {
            ecx4 = g4133d8;
            eax3 = fun_404cf0(ecx4);
        }
        if (eax3 == 32 || (eax3 == 9 || reinterpret_cast<int1_t>(eax3 == 94))) {
            if (reinterpret_cast<int1_t>(eax3 == 94)) {
                if (!*reinterpret_cast<signed char*>(&ebx2)) {
                    eax3 = fun_404de0();
                } else {
                    ecx5 = g4133d8;
                    eax3 = fun_404cf0(ecx5);
                }
                if (eax3 == 32) 
                    goto addr_4068d1_11;
                if (!reinterpret_cast<int1_t>(eax3 == 9)) 
                    goto addr_4068f3_13;
            }
            addr_4068d1_11:
            g4133f0 = reinterpret_cast<void**>(0);
        }
        if (reinterpret_cast<int1_t>(eax3 == 92)) {
            v6 = ebx2;
            eax3 = fun_4069d0(eax3, *reinterpret_cast<signed char*>(&v6));
        }
    } while (eax3 == 32 || eax3 == 9);
    addr_406905_18:
    if (reinterpret_cast<int1_t>(eax3 == 59) && ((zf7 = g4133f0 == 0, !zf7) && (zf8 = g413408 == 0, !zf8)) || reinterpret_cast<int1_t>(eax3 == 35)) {
        v9 = ebx2;
        fun_406940(*reinterpret_cast<signed char*>(&v9));
        g4133f0 = reinterpret_cast<void**>(1);
        eax3 = reinterpret_cast<void**>(10);
    }
    return eax3;
    addr_4068f3_13:
    ecx10 = g4133d8;
    fun_404d70(eax3, ecx10);
    eax3 = reinterpret_cast<void**>(94);
    goto addr_406905_18;
}

void fun_407550(void** a1, void** a2) {
    void** eax3;
    int32_t eax4;
    void** eax5;
    void** eax6;
    void** eax7;
    void*** edx8;
    uint32_t ecx9;

    eax3 = g4133d8;
    eax4 = reinterpret_cast<int32_t>(fclose(eax3));
    eax5 = g4133f8;
    if (eax4 == -1) {
        fun_403220(0, 0x424, eax5, __return_address(), a1, a2);
        eax5 = g4133f8;
    }
    free(eax5);
    eax6 = g413400;
    eax7 = eax6 - 1;
    g413400 = eax7;
    edx8 = reinterpret_cast<void***>(eax7 + reinterpret_cast<unsigned char>(eax7) * 2);
    ecx9 = reinterpret_cast<uint32_t>(edx8) * 4;
    g4133d8 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx8) * 4 + 0x411a58);
    g4133f8 = *reinterpret_cast<void***>(ecx9 + 0x411a54);
    g4133f4 = *reinterpret_cast<void***>(ecx9 + 0x411a50);
    return;
}

void** fun_406940(signed char a1) {
    void** edx2;
    signed char bl3;
    void** eax4;
    void** eax5;
    void** ecx6;

    edx2 = g4133d8;
    bl3 = a1;
    while (1) {
        g4133f0 = reinterpret_cast<void**>(0);
        do {
            if (!bl3) {
                eax4 = fun_404de0();
            } else {
                eax4 = fun_404cf0(edx2);
            }
            edx2 = g4133d8;
            if (eax4 == 0xffffffff) 
                goto addr_4069bf_7;
        } while (!reinterpret_cast<int1_t>(eax4 == 10));
        if (eax4 == 0xffffffff) 
            break;
        g4133f0 = reinterpret_cast<void**>(1);
        if (!bl3) {
            eax5 = fun_404de0();
        } else {
            eax5 = fun_404cf0(edx2);
        }
        ecx6 = g413408;
        edx2 = g4133d8;
        if (!reinterpret_cast<int1_t>(eax5 == 59)) 
            goto addr_4069ab_14;
        if (ecx6) 
            goto addr_4069b0_16;
        addr_4069ab_14:
        if (!reinterpret_cast<int1_t>(eax5 == 35)) 
            goto addr_4069b8_17;
        addr_4069b0_16:
        ++g4133f4;
    }
    addr_4069bf_7:
    return eax4;
    addr_4069b8_17:
    eax4 = fun_404d70(eax5, edx2);
    goto addr_4069bf_7;
}

int16_t g413fac = 0x3c3c;

signed char g413fae = 0;

void fun_405ef0(void* a1);

void** g413404 = reinterpret_cast<void**>(0);

void** fun_405c20(void** a1, void*** a2, void*** a3) {
    void** v4;
    void** ebx5;
    int16_t dx6;
    void** v7;
    void** esi8;
    void* v9;
    void** v10;
    void** edi11;
    void** v12;
    void** ebp13;
    void** esi14;
    signed char al15;
    void* esp16;
    void** v17;
    void** eax18;
    void* esp19;
    void** eax20;
    void** eax21;
    void** eax22;
    void* esp23;
    int1_t zf24;
    void** ebx25;
    void* edi26;
    signed char v27;
    void* ebp28;
    void** eax29;
    void** eax30;
    void** eax31;
    void** v32;
    signed char v33;
    void** eax34;
    void** eax35;
    void** eax36;
    void** eax37;
    void** eax38;
    void** eax39;
    void** ecx40;
    void** eax41;
    void** eax42;
    void** eax43;
    void** eax44;

    v4 = ebx5;
    dx6 = g413fac;
    v7 = esi8;
    *reinterpret_cast<int16_t*>(&v9) = dx6;
    v10 = edi11;
    v12 = ebp13;
    esi14 = reinterpret_cast<void**>(0);
    al15 = g413fae;
    esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x408 - 4 - 4 - 4 - 4 - 4);
    v17 = reinterpret_cast<void**>(0);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v9) + 2) = al15;
    eax18 = fun_406490(reinterpret_cast<int32_t>(esp16) + 30, 0x3fe);
    esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 + 8 + 4);
    if (!eax18) {
        eax20 = g4133d8;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax20 + 12)) & 16) {
            eax21 = g4133f4;
            fun_403220(eax21, 0x409, "EOF", v12, v10, v7);
            esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4 - 4 - 4 + 4 + 12);
        }
        eax22 = g4133f4;
        fun_403220(eax22, 0x41d, v12, v10, v7, v4);
        esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4 - 4 + 4 + 8);
    }
    fun_405ef0(reinterpret_cast<int32_t>(esp19) + 24);
    esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4 + 4 + 4);
    zf24 = g413404 == 0;
    if (zf24) {
        ebx25 = a1;
    } else {
        edi26 = v9;
        ebx25 = a1;
        while (1) {
            do {
                ++ebx25;
                *reinterpret_cast<signed char*>(ebx25 + 0xffffffff) = v27;
                if (*a3 == ebx25) {
                    if (esi14) {
                        ebp28 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi26) + 0x400);
                        if (reinterpret_cast<uint32_t>(edi26) > reinterpret_cast<uint32_t>(ebp28) || (eax29 = reinterpret_cast<void**>(realloc(esi14, ebp28)), esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 + 4 + 8), esi14 = eax29, !esi14)) {
                            eax30 = g4133f4;
                            fun_403220(eax30, 0x419, v12, v10, v7, v4);
                            esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 + 4 + 8);
                        }
                        ebx25 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi26) + reinterpret_cast<unsigned char>(esi14));
                        edi26 = ebp28;
                        *a3 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp28) + reinterpret_cast<unsigned char>(esi14));
                    } else {
                        edi26 = reinterpret_cast<void*>(0x800);
                        eax31 = fun_40acf0(0x800);
                        ebx25 = eax31 + 0x400;
                        esi14 = eax31;
                        v32 = *a2;
                        _mbsnbcpy(esi14, v32, 0x400);
                        esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 + 4 + 12);
                        *a3 = esi14 + 0x800;
                    }
                    *a2 = esi14;
                }
            } while (v33);
            if (v17 && (*reinterpret_cast<signed char*>(&v9) == 60 && *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v9) + 1) == 60)) {
                eax34 = g413404;
                if (*reinterpret_cast<void***>(eax34) && (eax35 = fun_406490(reinterpret_cast<int32_t>(esp23) + 24, 0x400), esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 + 8 + 4), !eax35)) {
                    eax36 = g4133d8;
                    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax36 + 12)) & 16) {
                        eax37 = g4133f4;
                        fun_403220(eax37, 0x409, "EOF", v12, v10, v7);
                        esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 - 4 + 4 + 12);
                    }
                    eax38 = g4133f4;
                    fun_403220(eax38, 0x41d, v12, v10, v7, v4);
                    esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 + 4 + 8);
                }
                eax39 = g413404;
                ecx40 = *reinterpret_cast<void***>(eax39);
                g413404 = ecx40;
                if (ecx40) 
                    continue; else 
                    break;
            }
            v17 = reinterpret_cast<void**>(1);
            eax41 = fun_406490(reinterpret_cast<int32_t>(esp23) + 24, 0x400);
            esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 + 8 + 4);
            if (eax41) 
                continue;
            eax42 = g4133d8;
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax42 + 12)) & 16) 
                goto addr_405dad_25;
            addr_405dc5_26:
            eax43 = g4133f4;
            fun_403220(eax43, 0x41d, v12, v10, v7, v4);
            esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 + 4 + 8);
            continue;
            addr_405dad_25:
            eax44 = g4133f4;
            fun_403220(eax44, 0x409, "EOF", v12, v10, v7);
            esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 - 4 + 4 + 12);
            goto addr_405dc5_26;
        }
    }
    *reinterpret_cast<void***>(ebx25) = reinterpret_cast<void**>(0);
    return ebx25;
}

void fun_408a90(void** a1) {
    int32_t ecx2;
    void** esi3;
    void** edi4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    void** eax8;
    int32_t ecx9;

    ecx2 = -1;
    esi3 = a1;
    edi4 = esi3;
    eax5 = eax6 - eax7;
    do {
        if (!ecx2) 
            break;
        --ecx2;
        ++edi4;
        ++esi3;
    } while (*reinterpret_cast<void***>(edi4) != *reinterpret_cast<void***>(&eax5));
    eax8 = reinterpret_cast<void**>(~ecx2 + reinterpret_cast<unsigned char>(esi3) + 0xfffffffe);
    ecx9 = 0;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi3) == 34) && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax8) == 34)) {
        --eax8;
        ecx9 = 1;
    }
    if (reinterpret_cast<unsigned char>(eax8) > reinterpret_cast<unsigned char>(esi3)) {
        do {
            if (*reinterpret_cast<void***>(eax8) == 32) 
                continue;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax8) == 46)) 
                break;
            --eax8;
        } while (reinterpret_cast<unsigned char>(eax8) > reinterpret_cast<unsigned char>(esi3));
    }
    if (ecx9) {
        *reinterpret_cast<void***>(eax8 + 1) = reinterpret_cast<void**>(34);
        ++eax8;
    }
    *reinterpret_cast<void***>(eax8 + 1) = reinterpret_cast<void**>(0);
    return;
}

void** fun_4075c0(void** a1) {
    void** ebx2;
    void** eax3;
    void** edi4;
    void** ebx5;
    void** eax6;
    void** eax7;
    void** eax8;
    void** eax9;
    void** eax10;
    signed char* edi11;
    int32_t ecx12;
    void* eax13;
    void** ecx14;
    void** eax15;
    void** eax16;

    ebx2 = a1;
    if (ebx2 == 10 || reinterpret_cast<int1_t>(ebx2 == 0xffffffff)) {
        eax3 = g4133f4;
        fun_403220(eax3, 0x407, edi4, ebx5, __return_address(), a1);
    }
    eax6 = g4133d8;
    *reinterpret_cast<signed char*>(&g413aa0) = *reinterpret_cast<signed char*>(&ebx2);
    eax7 = reinterpret_cast<void**>(fgets(0x413aa1, 0x3ff, eax6));
    if (!eax7) {
        eax8 = g4133d8;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax8 + 12)) & 16) {
            eax9 = g4133f4;
            fun_403220(eax9, 0x409, "EOF", edi4, ebx5, __return_address());
        }
        eax10 = g4133f4;
        eax7 = fun_403220(eax10, 0x41d, edi4, ebx5, __return_address(), a1);
    }
    edi11 = reinterpret_cast<signed char*>(0x413aa0);
    ecx12 = -1;
    eax13 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax7) - reinterpret_cast<unsigned char>(eax7));
    do {
        if (!ecx12) 
            break;
        --ecx12;
        ++edi11;
    } while (*edi11 != *reinterpret_cast<signed char*>(&eax13));
    ecx14 = reinterpret_cast<void**>(~ecx12 - 2);
    if (*reinterpret_cast<signed char*>(ecx14 + 0x413aa0) == 10) {
        *reinterpret_cast<signed char*>(ecx14 + 0x413aa0) = 0;
    }
    eax15 = reinterpret_cast<void**>(0x413aa0);
    while ((ecx14 = *reinterpret_cast<void***>(eax15), ecx14 == 32) || reinterpret_cast<int1_t>(ecx14 == 9)) {
        ++eax15;
    }
    eax16 = fun_407680(ecx14, eax15);
    return eax16;
}

int32_t fun_408140(int32_t a1, void*** a2) {
    void* esp3;
    void** edi4;
    void** v5;
    void** eax6;
    void** edi7;
    int32_t ecx8;
    void* eax9;

    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x100);
    _splitpath(a1, 0, 0, esp3, 0);
    eax6 = fun_40add0(reinterpret_cast<int32_t>(esp3) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 24, edi4, v5);
    edi7 = eax6;
    *a2 = eax6;
    ecx8 = -1;
    eax9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax6) - reinterpret_cast<unsigned char>(eax6));
    do {
        if (!ecx8) 
            break;
        --ecx8;
        ++edi7;
    } while (*reinterpret_cast<void***>(edi7) != *reinterpret_cast<void***>(&eax9));
    return ~ecx8 - 1;
}

void** g411b10;

void fun_401bc0(void** a1);

void** fun_401230(void** a1, void** a2, void** a3) {
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    void** eax7;
    int1_t zf8;
    void** eax9;
    void** v10;
    int32_t eax11;
    void** eax12;
    void** eax13;
    void** v14;
    void** ecx15;
    int1_t zf16;
    void** eax17;
    void** eax18;
    void** eax19;

    zf4 = g413a3c == 0;
    if (zf4) {
        g413a48 = reinterpret_cast<unsigned char>(g413a48 & 0xdf);
    } else {
        fun_401170(__return_address());
        g413a3c = reinterpret_cast<void**>(0);
    }
    zf5 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g413aa0) + 1) == 0;
    if (!zf5) {
        g413a44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(g413a44) | 32);
    }
    zf6 = g413a38 == 0;
    if (zf6) {
        eax7 = g413424;
        fun_403220(eax7, 0x40d, __return_address(), a1, a2, a3);
    }
    zf8 = (g413a48 & 16) == 0;
    if (zf8) {
        eax9 = g413a38;
        if (*reinterpret_cast<void***>(eax9) || (v10 = *reinterpret_cast<void***>(eax9 + 4), eax11 = fun_401310(v10), eax11 == 0)) {
            eax12 = g413a38;
            g411b10 = eax12;
        } else {
            eax13 = g413a38;
            v14 = *reinterpret_cast<void***>(eax13 + 4);
            free(v14);
            ecx15 = g413a38;
            eax12 = fun_40ada0(ecx15);
        }
    } else {
        zf16 = (reinterpret_cast<unsigned char>(g413a44) & 32) == 0;
        if (!zf16) {
            eax17 = g413424;
            fun_403220(eax17, 0x440, __return_address(), a1, a2, a3);
        }
        eax18 = g413a38;
        fun_401bc0(eax18);
        eax19 = g413a38;
        eax12 = fun_40ada0(eax19);
    }
    g413a38 = reinterpret_cast<void**>(0);
    g413a48 = reinterpret_cast<unsigned char>(g413a48 | 0x80);
    return eax12;
}

void** g4133fc = reinterpret_cast<void**>(0);

void** fun_401030(void** ecx, void** a2) {
    int1_t zf3;
    void*** esp4;
    void** esi5;
    int1_t zf6;
    void** eax7;
    int1_t zf8;
    void** eax9;
    void** v10;
    void** eax11;
    void** v12;
    void** v13;
    void** eax14;
    void* esp15;
    int1_t zf16;
    void** v17;
    void** eax18;
    void** eax19;
    int1_t zf20;
    void** v21;
    int1_t zf22;
    void** eax23;
    int1_t zf24;
    void** esi25;
    void* esp26;
    void** eax27;
    void** eax28;

    zf3 = g413a3c == 0;
    esp4 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    if (!zf3) {
        g413a48 = reinterpret_cast<unsigned char>(g413a48 | 32);
        fun_401170(esi5);
        esp4 = esp4 - 4 + 4;
        g413a3c = reinterpret_cast<void**>(0);
    }
    zf6 = (g413a48 & 32) == 0;
    if (!zf6 && (eax7 = fun_40c3a0(0x413aa0), esp4 = esp4 - 4 - 4 + 4 + 4, !!eax7)) {
        zf8 = (g413a48 & 16) == 0;
        if (!zf8) {
            eax9 = g413424;
            fun_403220(eax9, 0x444, esi5, v10, __return_address(), a2);
            esp4 = esp4 - 4 - 4 - 4 + 4 + 8;
        }
        eax11 = g413424;
        fun_403220(eax11, 0x43d, esi5, v12, __return_address(), a2);
        esp4 = esp4 - 4 - 4 - 4 + 4 + 8;
    }
    eax14 = fun_40ad20(esi5, v13, __return_address());
    esp15 = reinterpret_cast<void*>(esp4 - 4 + 4);
    zf16 = (g413a48 & 64) == 0;
    if (zf16) {
        eax18 = fun_40add0(0x413aa0, esi5, v17);
        esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp15) - 4 - 4 + 4 + 4);
        *reinterpret_cast<void***>(eax14 + 4) = eax18;
    } else {
        eax19 = g4133fc;
        *reinterpret_cast<void***>(eax14 + 4) = eax19;
        g4133fc = reinterpret_cast<void**>(0);
    }
    zf20 = (g413a48 & 16) == 0;
    v21 = eax14;
    if ((zf20 || (zf22 = (g413a48 & 32) == 0, !zf22)) && ((eax23 = *reinterpret_cast<void***>(eax14 + 4), fun_40b110(ecx, eax23, 0x413a28, 0, 0, 0, 0, 0), esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp15) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 28 + 4), zf24 = (g413a48 & 32) == 0, !zf24) && (esi25 = g413a28, esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp15) - 4), fun_4013d0("$", reinterpret_cast<int32_t>(esp26) + 8, 0x413a28), fun_4013d0("*?", reinterpret_cast<int32_t>(esp26) - 4 - 4 - 4 + 12 + 4 + 4, 0), g413a28 = esi25, !!esi25))) {
        do {
            esi25 = *reinterpret_cast<void***>(esi25);
            eax27 = g413a28;
            fun_40ada0(eax27);
            g413a28 = esi25;
        } while (esi25);
    }
    eax28 = fun_40ae30(0x413a38, v21);
    return eax28;
}

void** g413a40 = reinterpret_cast<void**>(0);

void fun_4015e0(void** a1, void** a2, void** a3) {
    void** eax4;
    int1_t zf5;
    int1_t zf6;
    unsigned char cl7;
    unsigned char cl8;
    int1_t zf9;
    int1_t zf10;
    int1_t zf11;
    void** eax12;
    int1_t zf13;
    int1_t zf14;
    void** eax15;
    void** eax16;
    void** ecx17;
    void** ecx18;
    void** edx19;
    int1_t zf20;
    void** eax21;
    int1_t zf22;
    void** eax23;
    int1_t zf24;
    void** eax25;

    eax4 = reinterpret_cast<void**>(0);
    zf5 = (g413a48 & 0x80) == 0;
    if (!zf5) {
        g413a48 = reinterpret_cast<unsigned char>(g413a48 & 0x7f);
    }
    zf6 = (g413a48 & 16) == 0;
    if (zf6) {
        cl7 = g413a48;
        cl8 = reinterpret_cast<unsigned char>(cl7 & 2);
        if (cl8 || (zf9 = (g413a48 & 4) == 0, !zf9)) {
            zf10 = g413a38 == 0;
            if (!zf10) {
                if (!cl8) {
                    zf11 = (g413a48 & 4) == 0;
                    if (!zf11) {
                        eax4 = reinterpret_cast<void**>(".IGNORE");
                    }
                } else {
                    eax4 = reinterpret_cast<void**>(".SILENT");
                }
                eax12 = g413424;
                fun_403220(eax12, 0x442, eax4, __return_address(), a1, a2);
            }
        } else {
            zf13 = (g413a48 & 1) == 0;
            if (zf13) {
                zf14 = (g413a48 & 8) == 0;
                if (zf14) {
                    eax15 = fun_40acf0(24);
                    g413a40 = eax15;
                    eax16 = g413a38;
                    ecx17 = g413a40;
                    *reinterpret_cast<void***>(ecx17) = eax16;
                    ecx18 = g413a40;
                    edx19 = g413a28;
                    *reinterpret_cast<void***>(ecx18 + 4) = edx19;
                } else {
                    zf20 = g413a38 == 0;
                    if (!zf20) {
                        eax21 = g413a38;
                        fun_401d00(0x413a30, eax21);
                    }
                }
            } else {
                zf22 = g413a38 == 0;
                if (!zf22) {
                    eax23 = g413a38;
                    fun_401d00(0x413a2c, eax23);
                } else {
                    fun_401cc0();
                }
            }
        }
    } else {
        zf24 = g413a38 == 0;
        if (!zf24) {
            eax25 = g413424;
            fun_403220(eax25, 0x43e, __return_address(), a1, a2, a3);
        }
    }
    g413a48 = reinterpret_cast<unsigned char>(g413a48 | 64);
    g413a38 = reinterpret_cast<void**>(0);
    g413a28 = reinterpret_cast<void**>(0);
    return;
}

void** fun_4019f0(void** ecx, void** a2, void** a3, unsigned char a4);

void** fun_401980(void** a1, void** a2, unsigned char a3) {
    void** v4;
    void** v5;
    void** ebx6;
    void** v7;
    void** esi8;
    void** esi9;
    void** eax10;
    void** ecx11;
    int32_t ebx12;
    void** v13;
    int32_t v14;
    void** eax15;

    v4 = reinterpret_cast<void**>(__return_address());
    v5 = ebx6;
    v7 = esi8;
    esi9 = a1;
    eax10 = esi9;
    if (*reinterpret_cast<void***>(esi9)) {
        do {
            ecx11 = reinterpret_cast<void**>(0);
            ecx11 = *reinterpret_cast<void***>(eax10);
            if (!(*reinterpret_cast<unsigned char*>(ecx11 + 0x4149c0) & 1)) 
                break;
            ++eax10;
        } while (*reinterpret_cast<void***>(eax10));
    }
    *reinterpret_cast<unsigned char*>(&ebx12) = a3;
    if (*reinterpret_cast<void***>(eax10)) {
        if (!(*reinterpret_cast<unsigned char*>(&ebx12) & 4)) {
            v13 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax10))));
            ecx11 = g413424;
            fun_403220(ecx11, 0x3e9, v13, v7, v5, v4);
        } else {
            return 0;
        }
    }
    v14 = ebx12;
    eax15 = fun_4019f0(ecx11, esi9, a2, *reinterpret_cast<unsigned char*>(&v14));
    return eax15;
}

struct s16 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** fun_403490();

int32_t g4133b4 = 0;

int32_t _mbsspn = 0x153fe;

void** fun_402cc0(void** a1);

int32_t fopen = 0x155b8;

struct s17 {
    signed char[16] pad16;
    int32_t f10;
};

struct s18 {
    signed char[80] pad80;
    int32_t f50;
};

struct s19 {
    signed char[80] pad80;
    int32_t f50;
};

struct s20 {
    signed char[48] pad48;
    int32_t f30;
};

void** fun_408320(int32_t a1, struct s16* a2) {
    int32_t v3;
    int32_t v4;
    void** v5;
    void** ebx6;
    void** v7;
    void** esi8;
    int32_t esi9;
    void** v10;
    void** edi11;
    void** v12;
    void** ebp13;
    void** eax14;
    void** eax15;
    struct s16* edi16;
    void** ebx17;
    void** ebx18;
    void** eax19;
    void** v20;
    void** eax21;
    void** v22;
    void** eax23;
    struct s4* ecx24;
    void** ebp25;
    void** ebx26;
    void* eax27;
    void** eax28;
    void* eax29;
    void** eax30;
    void** v31;
    void** v32;
    void** ebx33;
    void** eax34;
    void** eax35;
    void** ebx36;
    struct s17* eax37;
    struct s18* eax38;
    int32_t ecx39;
    int32_t v40;
    struct s19* eax41;
    int32_t v42;
    struct s20* eax43;
    int32_t v44;

    v3 = 0;
    v4 = 0;
    v5 = ebx6;
    v7 = esi8;
    esi9 = a1;
    v10 = edi11;
    v12 = ebp13;
    if (!esi9) {
        addr_4085a8_2:
        if (!v3) {
            if (v4) {
                fun_403490();
                eax14 = reinterpret_cast<void**>(exit(0));
            }
            return eax14;
        } else {
            fun_403490();
            eax15 = reinterpret_cast<void**>(exit(0));
            return eax15;
        }
    } else {
        edi16 = a2;
        do {
            ebx17 = edi16->f0;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx17) == 64)) {
                if (*reinterpret_cast<void***>(ebx17) == 45 || *reinterpret_cast<void***>(ebx17) == 47) {
                    ebx18 = ebx17 + 1;
                    eax14 = reinterpret_cast<void**>(_mbsicmp(ebx18, "help"));
                    if (!eax14) 
                        break;
                    if (!*reinterpret_cast<void***>(ebx18)) 
                        continue;
                } else {
                    eax19 = reinterpret_cast<void**>(_mbschr(ebx17, 61));
                    if (!eax19) {
                        v20 = edi16->f0;
                        fun_408a90(v20);
                        eax14 = edi16->f0;
                        if (*reinterpret_cast<void***>(eax14)) {
                            eax21 = fun_40ad20(v12, v10, v7);
                            v22 = edi16->f0;
                            eax23 = fun_40add0(v22, v12, v10);
                            *reinterpret_cast<void***>(eax21 + 4) = eax23;
                            eax14 = fun_40ae30(0x4133dc, eax21);
                        }
                        edi16->f0 = reinterpret_cast<void**>(0);
                        continue;
                    } else {
                        if (edi16->f0 == eax19) {
                            fun_403220(0, 0x427, v12, v10, v7, v5);
                        }
                        ecx24 = reinterpret_cast<struct s4*>(eax19 + 0xffffffff);
                        *reinterpret_cast<void***>(eax19) = reinterpret_cast<void**>(0);
                        ebp25 = eax19 + 1;
                        while (ecx24->f0 == 32 || ecx24->f0 == 9) {
                            ecx24 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(ecx24) - 1);
                        }
                        *reinterpret_cast<void***>(&ecx24->f1) = reinterpret_cast<void**>(0);
                        g4133b4 = 1;
                        ebx26 = edi16->f0;
                        eax27 = reinterpret_cast<void*>(_mbsspn(ebp25, " \t", 2));
                        eax28 = fun_40add0(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<unsigned char>(ebp25), 2, v12);
                        eax29 = reinterpret_cast<void*>(_mbsspn(ebx26, " \t", eax28, 2));
                        eax30 = fun_40add0(reinterpret_cast<int32_t>(eax29) + reinterpret_cast<unsigned char>(ebx26), eax28, 2);
                        eax14 = fun_401980(eax30, eax28, 2);
                        edi16->f0 = reinterpret_cast<void**>(0);
                        continue;
                    }
                }
            } else {
                eax14 = fun_402cc0(ebx17 + 1);
                continue;
            }
            do {
                eax14 = reinterpret_cast<void**>(_mbsicmp(ebx18, "nologo"));
                if (!eax14) 
                    break;
                eax14 = *reinterpret_cast<void***>(ebx18);
                if (eax14 == 63) 
                    goto addr_4084a3_25;
                if (eax14 == 0x66) 
                    goto addr_40854e_27;
                if (eax14 == 70) 
                    goto addr_40854e_27;
                if (eax14 == 0x78) 
                    goto addr_4084b0_30;
                if (eax14 == 88) 
                    goto addr_4084b0_30;
                ++ebx18;
                v31 = eax14;
                eax14 = fun_4086d0(*reinterpret_cast<signed char*>(&v31), 1);
            } while (*reinterpret_cast<void***>(ebx18));
            goto addr_40848e_33;
            eax14 = *reinterpret_cast<void***>(ebx18 + 2);
            v32 = eax14;
            eax14 = fun_4086d0(*reinterpret_cast<signed char*>(&v32), 1);
            continue;
            addr_4084a3_25:
            v4 = 1;
            continue;
            addr_40854e_27:
            ebx33 = ebx18 + 1;
            if (!*reinterpret_cast<void***>(ebx33) && ((--esi9, esi9 == 0) || ((edi16 = reinterpret_cast<struct s16*>(&edi16->f4), edi16->f4 == 0) || (ebx33 = edi16->f4, !*reinterpret_cast<void***>(edi16->f4))))) {
                fun_403220(0, 0x425, v12, v10, v7, v5);
            }
            eax34 = fun_40ad20(v12, v10, v7);
            eax35 = fun_40add0(ebx33, v12, v10);
            *reinterpret_cast<void***>(eax34 + 4) = eax35;
            eax14 = fun_40ae30(0x4133e0, eax34);
            continue;
            addr_4084b0_30:
            ebx36 = ebx18 + 1;
            if (!*reinterpret_cast<void***>(ebx36) && ((--esi9, esi9 == 0) || ((edi16 = reinterpret_cast<struct s16*>(&edi16->f4), edi16->f4 == 0) || (ebx36 = edi16->f4, !*reinterpret_cast<void***>(edi16->f4))))) {
                fun_403220(0, 0x426, v12, v10, v7, v5);
            }
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx36) == 45) || *reinterpret_cast<void***>(ebx36 + 1)) {
                eax37 = reinterpret_cast<struct s17*>(fopen(ebx36, "wt"));
                if (!eax37) {
                    fun_403220(0, 0x418, ebx36, v12, v10, v7);
                }
                eax38 = reinterpret_cast<struct s18*>(__p__iob());
                ecx39 = eax37->f10;
                v40 = eax38->f50;
                _dup2(ecx39, v40);
                eax14 = reinterpret_cast<void**>(fclose(eax37));
                continue;
            } else {
                eax41 = reinterpret_cast<struct s19*>(__p__iob());
                v42 = eax41->f50;
                eax43 = reinterpret_cast<struct s20*>(__p__iob(v42));
                v44 = eax43->f30;
                eax14 = reinterpret_cast<void**>(_dup2(v44, v42));
                continue;
            }
            addr_40848e_33:
            --esi9;
            edi16 = reinterpret_cast<struct s16*>(&edi16->f4);
        } while (esi9);
        goto addr_40859e_44;
    }
    v3 = 1;
    goto addr_4085a8_2;
    addr_40859e_44:
    goto addr_4085a8_2;
}

void** g413ff8 = reinterpret_cast<void**>(0);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(76);

int16_t g414478 = 58;

void fun_401710();

void fun_407d90() {
    void** v1;
    void** esi2;
    void** v3;
    void** edi4;
    void** v5;
    void** ebp6;
    void** eax7;
    void** eax8;
    void** eax9;
    void** eax10;
    void** eax11;
    void** eax12;
    void** eax13;
    void** eax14;
    void** eax15;
    void** eax16;
    void** eax17;
    void** eax18;
    void** eax19;
    void** eax20;
    void** eax21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** eax25;
    void** eax26;
    void** eax27;
    void** eax28;
    void*** v29;
    signed char*** ebx30;
    void** eax31;
    int16_t ax32;
    void** eax33;
    signed char** ebp34;
    signed char* edi35;
    int32_t ecx36;
    void* eax37;
    uint32_t ecx38;
    uint32_t eax39;
    uint32_t ecx40;
    void** esi41;
    void*** edi42;
    void** ecx43;

    v1 = esi2;
    v3 = edi4;
    v5 = ebp6;
    eax7 = fun_40add0("CC", v5, v3);
    eax8 = fun_40add0("cl", v5, v3);
    fun_401980(eax7, eax8, 0);
    eax9 = fun_40add0("CXX", v5, v3);
    eax10 = fun_40add0("cl", v5, v3);
    fun_401980(eax9, eax10, 0);
    eax11 = fun_40add0("CPP", v5, v3);
    eax12 = fun_40add0("cl", v5, v3);
    fun_401980(eax11, eax12, 0);
    eax13 = fun_40add0("AS", v5, v3);
    eax14 = fun_40add0("ml", v5, v3);
    fun_401980(eax13, eax14, 0);
    eax15 = fun_40add0("BC", v5, v3);
    eax16 = fun_40add0("bc", v5, v3);
    fun_401980(eax15, eax16, 0);
    eax17 = fun_40add0("COBOL", v5, v3);
    eax18 = fun_40add0("cobol", v5, v3);
    fun_401980(eax17, eax18, 0);
    eax19 = fun_40add0("FOR", v5, v3);
    eax20 = fun_40add0("fl", v5, v3);
    fun_401980(eax19, eax20, 0);
    eax21 = fun_40add0("PASCAL", v5, v3);
    eax22 = fun_40add0("pl", v5, v3);
    fun_401980(eax21, eax22, 0);
    eax23 = fun_40add0("RC", v5, v3);
    eax24 = fun_40add0("rc", v5, v3);
    fun_401980(eax23, eax24, 0);
    eax25 = fun_40add0("MAKE", v5, v3);
    eax26 = g413ff8;
    eax27 = fun_40add0(eax26, v5, v3);
    fun_401980(eax25, eax27, 12);
    eax28 = image_base_;
    if (eax28) {
        v29 = reinterpret_cast<void***>("LDA");
        ebx30 = reinterpret_cast<signed char***>("`@A");
        do {
            eax31 = fun_40add0(eax28, v5, v3);
            g413a3c = eax31;
            ax32 = g414478;
            g413aa0 = ax32;
            eax33 = fun_401230(v5, v3, v1);
            ebp34 = *ebx30;
            if (*ebp34) {
                do {
                    edi35 = *ebp34;
                    ecx36 = -1;
                    eax37 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax33) - reinterpret_cast<unsigned char>(eax33));
                    do {
                        if (!ecx36) 
                            break;
                        --ecx36;
                        ++edi35;
                    } while (*edi35 != *reinterpret_cast<signed char*>(&eax37));
                    ecx38 = reinterpret_cast<uint32_t>(~ecx36);
                    eax39 = ecx38;
                    ecx40 = ecx38 >> 2;
                    esi41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edi35) - ecx38);
                    edi42 = reinterpret_cast<void***>(0x413aa0);
                    ++ebp34;
                    while (ecx40) {
                        --ecx40;
                        *edi42 = *reinterpret_cast<void***>(esi41);
                        edi42 = edi42 + 4;
                        esi41 = esi41 + 4;
                    }
                    ecx43 = reinterpret_cast<void**>(eax39 & 3);
                    while (ecx43) {
                        --ecx43;
                        *edi42 = *reinterpret_cast<void***>(esi41);
                        ++edi42;
                        ++esi41;
                    }
                    eax33 = fun_401030(ecx43, v5);
                } while (*ebp34);
            }
            if (reinterpret_cast<int1_t>(ebx30 == "`@A")) {
                fun_4015e0(v5, v3, v1);
            }
            ++ebx30;
            fun_401710();
            v29 = v29 + 4;
            eax28 = *v29;
        } while (eax28);
    }
    return;
}

int32_t fun_405860(void** ecx, int32_t a2, void** a3, void** a4) {
    void*** esp5;
    void** esi6;
    void** v7;
    void** ebp8;
    int32_t* v9;
    void** eax10;
    void** eax11;
    void** eax12;
    void** v13;
    int32_t eax14;
    void** eax15;
    int32_t eax16;
    void** v17;

    esp5 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_40ceb4(ecx, esi6, v7, ebp8);
    v9 = reinterpret_cast<int32_t*>(esp5 - 4);
    eax10 = reinterpret_cast<void**>(getenv(a2, a3, esp5 - 4 - 4 - 4 + 4, v9));
    eax11 = fun_405930(eax10, a3, esp5 - 4 - 4 - 4 + 4, v9);
    if (eax11) {
        eax12 = fun_40ca80(eax11, "rt");
        g4133d8 = eax12;
        if (!eax12) {
            fun_403220(0, 0x41d, eax11, esi6, v13, ebp8);
        }
        free(eax11);
        eax14 = fun_405a20(a4);
        if (!eax14) {
            eax15 = g4133d8;
            eax16 = reinterpret_cast<int32_t>(fclose(eax15));
            if (eax16 == -1) {
                fun_403220(0, 0x424, eax11, esi6, v17, ebp8);
            }
            return 0;
        } else {
            return 1;
        }
    } else {
        return 0;
    }
}

int32_t g4133c8 = 0;

uint32_t g413420 = 0xffffffff;

struct s21 {
    signed char[4274848] pad4274848;
    void** f413aa0;
};

void** fun_406500(struct s21* a1, signed char a2);

struct s22 {
    signed char[1000] pad1000;
    void** f3e8;
};

void fun_408ae0() {
    unsigned char v1;
    void** v2;
    void** ebx3;
    void** v4;
    void** esi5;
    void** v6;
    void** edi7;
    uint32_t eax8;
    void** edx9;
    uint32_t eax10;
    void** eax11;
    uint32_t ecx12;
    unsigned char v13;
    int32_t ebx14;
    uint32_t eax15;
    void* edi16;
    void** eax17;
    struct s22* esi18;
    void** ecx19;
    int32_t v20;
    void* ecx21;
    signed char* eax22;
    int32_t ecx23;
    uint32_t edx24;
    uint32_t eax25;
    void** eax26;
    uint32_t eax27;
    uint32_t v28;
    void** eax29;
    int1_t zf30;
    unsigned char al31;
    void** eax32;
    uint32_t eax33;
    uint32_t eax34;

    g4133c8 = 1;
    v1 = 0;
    v2 = ebx3;
    v4 = esi5;
    ++g413420;
    v6 = edi7;
    eax8 = g413420;
    edx9 = g4133f4;
    ++g413420;
    *reinterpret_cast<unsigned char*>(eax8 + 0x413410) = 23;
    eax10 = g413420;
    g413424 = edx9;
    *reinterpret_cast<unsigned char*>(eax10 + 0x413410) = 0;
    eax11 = fun_406500(0x400, 0);
    ecx12 = g413420;
    v13 = *reinterpret_cast<unsigned char*>(&eax11);
    *reinterpret_cast<unsigned char*>(&ebx14) = *reinterpret_cast<unsigned char*>(ecx12 + 0x413410);
    if (*reinterpret_cast<unsigned char*>(&ebx14) != 23) {
        do {
            if (!(*reinterpret_cast<unsigned char*>(&ebx14) & 64)) {
                if (!(*reinterpret_cast<unsigned char*>(&ebx14) & 16)) {
                    eax15 = 0;
                    *reinterpret_cast<unsigned char*>(&eax15) = *reinterpret_cast<unsigned char*>(&ebx14);
                    edi16 = reinterpret_cast<void*>(eax15 * 8);
                    *reinterpret_cast<unsigned char*>(&eax15) = v13;
                    eax17 = reinterpret_cast<void**>(eax15 & 15);
                    esi18 = reinterpret_cast<struct s22*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi16) + reinterpret_cast<unsigned char>(eax17) + 0x4145d8)));
                    if (reinterpret_cast<uint32_t>(esi18) & 32) {
                        ecx19 = g413424;
                        eax17 = fun_403220(ecx19, &esi18->f3e8, 0x413aa0, v6, v4, v2);
                    }
                    --g413420;
                    if (reinterpret_cast<uint32_t>(esi18) & 0x80) {
                        if (!v1) {
                            v20 = ebx14;
                            eax17 = fun_406500(0x400, *reinterpret_cast<signed char*>(&v20));
                            v1 = *reinterpret_cast<unsigned char*>(&eax17);
                        }
                        *reinterpret_cast<unsigned char*>(&eax17) = v1;
                        ecx21 = reinterpret_cast<void*>(0);
                        *reinterpret_cast<signed char*>(&ecx21) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi16) + (reinterpret_cast<unsigned char>(eax17) & 15) + 0x414618);
                        esi18 = reinterpret_cast<struct s22*>((reinterpret_cast<uint32_t>(esi18) & 15) + reinterpret_cast<uint32_t>(ecx21));
                    }
                    eax22 = *reinterpret_cast<signed char**>("(EA" + reinterpret_cast<uint32_t>(esi18) * 4);
                    ecx23 = 0;
                    *reinterpret_cast<signed char*>(&ecx23) = *eax22;
                    if (ecx23) {
                        do {
                            ++g413420;
                            --ecx23;
                            edx24 = g413420;
                            *reinterpret_cast<unsigned char*>(edx24 + 0x413410) = *reinterpret_cast<unsigned char*>(ecx23 + reinterpret_cast<int32_t>(eax22) + 1);
                        } while (ecx23);
                    }
                } else {
                    if (v13 == *reinterpret_cast<unsigned char*>(&ebx14)) {
                        --g413420;
                        eax25 = g413420;
                        *reinterpret_cast<unsigned char*>(&eax25) = *reinterpret_cast<unsigned char*>(eax25 + 0x413410);
                        if (*reinterpret_cast<unsigned char*>(&eax25) & 64) {
                            --g413420;
                            *reinterpret_cast<int32_t*>((eax25 & 15) * 4 + 0x414630)();
                        }
                        eax26 = g4133f4;
                        g413424 = eax26;
                        if (!v1) {
                            eax27 = g413420;
                            *reinterpret_cast<unsigned char*>(&eax27) = *reinterpret_cast<unsigned char*>(eax27 + 0x413410);
                            v28 = eax27;
                            eax29 = fun_406500(0x400, *reinterpret_cast<signed char*>(&v28));
                            v13 = *reinterpret_cast<unsigned char*>(&eax29);
                        } else {
                            zf30 = *reinterpret_cast<signed char*>(&g413aa0) == 10;
                            if (zf30) {
                                g413424 = eax26 - 1;
                            }
                            al31 = v1;
                            v1 = 0;
                            v13 = al31;
                        }
                    } else {
                        eax32 = g413424;
                        fun_403220(eax32, 0x409, 0x413aa0, v6, v4, v2);
                    }
                }
            } else {
                eax33 = g413420;
                --g413420;
                *reinterpret_cast<unsigned char*>(&eax33) = *reinterpret_cast<unsigned char*>(eax33 + 0x413410);
                *reinterpret_cast<int32_t*>((eax33 & 15) * 4 + 0x414630)();
            }
            eax34 = g413420;
            *reinterpret_cast<unsigned char*>(&ebx14) = *reinterpret_cast<unsigned char*>(eax34 + 0x413410);
        } while (*reinterpret_cast<unsigned char*>(&ebx14) != 23);
    }
    --g413420;
    return;
}

int32_t _access = 0x155c0;

void** g4133dc = reinterpret_cast<void**>(0);

void** g4133e0 = reinterpret_cast<void**>(0);

void** fun_4085f0(void** ecx) {
    void* esp2;
    void** edi3;
    void** esi4;
    void** ebx5;
    int32_t ebx6;
    void** eax7;
    int1_t zf8;
    int1_t zf9;
    void** v10;
    void** eax11;
    void** esi12;
    void** ecx13;
    void** eax14;
    void** eax15;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_40ceb4(ecx, edi3, esi4, ebx5);
    ebx6 = _access;
    eax7 = reinterpret_cast<void**>(ebx6("makefile", 4));
    if (eax7) {
        zf8 = g4133dc == 0;
        if (zf8) {
            zf9 = (g4133d4 & 1) == 0;
            if (zf9) {
                eax7 = fun_403220(0, 0x428, edi3, esi4, ebx5, v10);
            }
        } else {
            eax11 = g4133dc;
            esi12 = *reinterpret_cast<void***>(eax11 + 4);
            eax7 = reinterpret_cast<void**>(ebx6(esi12, 4));
            if (!eax7 && ((eax7 = reinterpret_cast<void**>(_mbsrchr(esi12, 46)), eax7 == 0) || (eax7 = fun_409ef0(reinterpret_cast<int32_t>(esp2) + 0xfffffefc, esi12, eax7, reinterpret_cast<int32_t>(esp2) - 0x104 - 4 - 4 - 4 - 4 + 4), !eax7))) {
                ecx13 = g4133dc;
                g4133dc = *reinterpret_cast<void***>(ecx13);
                g4133e0 = ecx13;
                return eax7;
            }
        }
        return eax7;
    } else {
        eax14 = fun_40ad20(edi3, esi4, ebx5);
        eax15 = fun_40add0("makefile", edi3, esi4);
        *reinterpret_cast<void***>(eax14 + 4) = eax15;
        g4133e0 = eax14;
        return eax15;
    }
}

struct s25 {
    struct s25* f0;
    int32_t f4;
};

struct s24 {
    struct s25* f0;
    void** f4;
};

struct s23 {
    struct s23* f0;
    void** f4;
    signed char[3] pad8;
    struct s24* f8;
};

int32_t putchar = 0x155ea;

void fun_409000(void** a1) {
    void** v2;
    void** ebx3;
    void** v4;
    void** esi5;
    void** v6;
    void** edi7;
    struct s23** ebx8;
    void** v9;
    void** ebp10;
    int32_t edi11;
    struct s23* esi12;
    void** v13;
    void** v14;
    struct s25* ebp15;
    int32_t v16;
    int32_t eax17;

    v2 = ebx3;
    v4 = esi5;
    v6 = edi7;
    ebx8 = reinterpret_cast<struct s23**>(0x413428);
    v9 = ebp10;
    fun_403370(8, v9, v6, v4, v2, __return_address(), a1);
    edi11 = printf;
    do {
        esi12 = *ebx8;
        if (esi12) {
            do {
                if (esi12->f8 && (esi12->f8->f4 && (v13 = esi12->f8->f4, v14 = esi12->f4, fun_403370(14, v14, v13, v9, v6, v4, v2), ebp15 = esi12->f8->f0, !!ebp15))) {
                    do {
                        if (ebp15->f4) {
                            v16 = ebp15->f4;
                            edi11("\t\t%s\n", v16);
                        }
                        ebp15 = ebp15->f0;
                    } while (ebp15);
                }
                esi12 = esi12->f0;
            } while (esi12);
        }
        ++ebx8;
    } while (reinterpret_cast<uint32_t>(ebx8) < 0x413828);
    putchar(10);
    eax17 = reinterpret_cast<int32_t>(__p__iob());
    fflush(eax17 + 32);
    return;
}

void** g413a34 = reinterpret_cast<void**>(0);

void fun_4090a0(void** a1) {
    void** v2;
    void** v3;
    void** ebx4;
    void** v5;
    void** esi6;
    void** v7;
    void** edi8;
    void** v9;
    void** ebp10;
    void** ebx11;
    int32_t esi12;
    int32_t edi13;
    void** v14;
    void** ebp15;
    void** v16;
    void** ebp17;
    void** v18;
    void** ebx19;
    void** v20;
    int32_t eax21;

    v2 = reinterpret_cast<void**>(__return_address());
    v3 = ebx4;
    v5 = esi6;
    v7 = edi8;
    v9 = ebp10;
    fun_403370(7, v9, v7, v5, v3, v2, a1);
    ebx11 = g413a34;
    esi12 = printf;
    edi13 = putchar;
    if (ebx11) {
        do {
            v14 = *reinterpret_cast<void***>(ebx11 + 8);
            esi12("%s:", v14);
            fun_403370(10, v9, v7, v5, v3, v2, a1);
            ebp15 = *reinterpret_cast<void***>(ebx11 + 12);
            if (ebp15 && (v16 = *reinterpret_cast<void***>(ebp15 + 4), esi12("%s\n", v16), ebp17 = *reinterpret_cast<void***>(ebp15), !!ebp17)) {
                do {
                    v18 = *reinterpret_cast<void***>(ebp17 + 4);
                    esi12("\t\t\t%s\n", v18);
                    ebp17 = *reinterpret_cast<void***>(ebp17);
                } while (ebp17);
            }
            edi13(10);
            ebx11 = *reinterpret_cast<void***>(ebx11);
        } while (ebx11);
    }
    esi12("%s: ", ".SUFFIXES");
    ebx19 = g413a2c;
    if (ebx19) {
        do {
            v20 = *reinterpret_cast<void***>(ebx19 + 4);
            esi12("%s ", v20);
            ebx19 = *reinterpret_cast<void***>(ebx19);
        } while (ebx19);
    }
    edi13(10);
    eax21 = reinterpret_cast<int32_t>(__p__iob());
    fflush(eax21 + 32);
    return;
}

/* (image base) */
int32_t image_base_ = 0x414818;

void** fun_408d80(void** a1, void** a2);

void fun_409170() {
    void** v1;
    void** ebx2;
    void** v3;
    void** esi4;
    void** v5;
    void** edi6;
    void** v7;
    void** ebp8;
    void** v9;
    void** v10;
    void** v11;
    void** ecx12;
    void** v13;
    void** eax14;
    void** edx15;
    void** edx16;
    void** esi17;
    void** edi18;
    int32_t ebp19;
    uint32_t ebx20;
    int32_t eax21;
    int32_t v22;
    void** ecx23;
    void** v24;
    void** edi25;
    void** v26;
    void** edi27;
    void** v28;
    int32_t eax29;

    v1 = ebx2;
    v3 = esi4;
    v5 = edi6;
    v7 = ebp8;
    fun_403370(9, v7, v5, v3, v1, v9, v10);
    v11 = reinterpret_cast<void**>(0x413828);
    do {
        ecx12 = *reinterpret_cast<void***>(v11);
        v13 = ecx12;
        if (ecx12) {
            do {
                eax14 = v13;
                *reinterpret_cast<unsigned char*>(&eax14) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax14 + 16) + 4) + 16)) & 32);
                edx15 = *reinterpret_cast<void***>(v13 + 4);
                printf("%s:%c", edx15, (reinterpret_cast<unsigned char>(eax14) - (reinterpret_cast<unsigned char>(eax14) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax14) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax14) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax14) < 1)))) & 0xffffffe6) + 58);
                edx16 = *reinterpret_cast<void***>(v13 + 4);
                g413a84 = edx16;
                g413a90 = edx16;
                g413a8c = edx16;
                esi17 = *reinterpret_cast<void***>(v13 + 16);
                if (esi17) {
                    do {
                        edi18 = *reinterpret_cast<void***>(esi17 + 4);
                        ebp19 = 0;
                        fun_403370(11, v7, v5, v3, v1, v13, v11);
                        ebx20 = 1;
                        do {
                            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi18 + 16)) & *reinterpret_cast<unsigned char*>(&ebx20)) {
                                eax21 = image_base_;
                                v22 = *reinterpret_cast<signed char*>(eax21 + ebp19);
                                printf("-%c ", v22);
                            }
                            ++ebp19;
                            ebx20 = ebx20 + ebx20;
                        } while (ebx20 < 16);
                        ecx23 = *reinterpret_cast<void***>(edi18);
                        v24 = *reinterpret_cast<void***>(edi18 + 4);
                        fun_408d80(ecx23, v24);
                        fun_403370(10, v7, v5, v3, v1, v13, v11);
                        edi25 = *reinterpret_cast<void***>(edi18 + 8);
                        if (!edi25) {
                            putchar(10);
                        } else {
                            if (*reinterpret_cast<void***>(edi25 + 4)) {
                                v26 = *reinterpret_cast<void***>(edi25 + 4);
                                printf("%s\n", v26);
                            }
                            edi27 = *reinterpret_cast<void***>(edi25);
                            if (edi27) {
                                do {
                                    if (*reinterpret_cast<void***>(edi27 + 4)) {
                                        v28 = *reinterpret_cast<void***>(edi27 + 4);
                                        printf("\t\t\t%s\n", v28);
                                    }
                                    edi27 = *reinterpret_cast<void***>(edi27);
                                } while (edi27);
                            }
                        }
                        esi17 = *reinterpret_cast<void***>(esi17);
                    } while (esi17);
                }
                v13 = *reinterpret_cast<void***>(v13);
                putchar(10);
            } while (v13);
        }
        v11 = v11 + 4;
    } while (reinterpret_cast<unsigned char>(v11) < reinterpret_cast<unsigned char>(0x413a28));
    g413a84 = reinterpret_cast<void**>(0);
    g413a90 = reinterpret_cast<void**>(0);
    g413a8c = reinterpret_cast<void**>(0);
    putchar(10);
    eax29 = reinterpret_cast<int32_t>(__p__iob());
    fflush(eax29 + 32);
    return;
}

void** fun_408190() {
    void** v1;
    void** esi2;
    void** v3;
    void** edi4;
    void** v5;
    void** ebp6;
    void** ebp7;
    int32_t esi8;
    int32_t edi9;
    void** v10;
    void** eax11;
    void** eax12;
    void** eax13;
    void** eax14;
    void** eax15;
    void** eax16;
    int1_t zf17;
    void** eax18;
    int32_t eax19;
    void** eax20;
    void** eax21;
    void** eax22;

    v1 = esi2;
    v3 = edi4;
    v5 = ebp6;
    ebp7 = g4133e0;
    if (ebp7) {
        esi8 = __p__iob;
        edi9 = fclose;
        do {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ebp7 + 4)) == 45) || *reinterpret_cast<void***>(*reinterpret_cast<void***>(ebp7 + 4) + 1)) {
                v10 = *reinterpret_cast<void***>(ebp7 + 4);
                eax11 = fun_40add0(v10, v5, v3);
                g4133f8 = eax11;
                eax12 = fun_40ca80(eax11, "rt");
                g4133d8 = eax12;
                if (!eax12) {
                    eax13 = g4133f8;
                    fun_403220(0, 0x41c, eax13, v5, v3, v1);
                }
            } else {
                eax14 = fun_40add0("STDIN", v5, v3);
                g4133f8 = eax14;
                eax15 = reinterpret_cast<void**>(esi8());
                g4133d8 = eax15;
            }
            g4133f4 = reinterpret_cast<void**>(0);
            g413408 = reinterpret_cast<void**>(0);
            fun_408ae0();
            eax16 = reinterpret_cast<void**>(esi8());
            zf17 = eax16 == g4133d8;
            if (!zf17 && (eax18 = g4133d8, eax19 = reinterpret_cast<int32_t>(edi9(eax18)), eax19 == -1)) {
                eax20 = g4133f8;
                fun_403220(0, 0x424, eax20, v5, v3, v1);
            }
            ebp7 = *reinterpret_cast<void***>(ebp7);
        } while (ebp7);
    }
    eax21 = g4133e0;
    eax22 = fun_402c40(eax21, v5, v3);
    return eax22;
}

void fun_402e60(void*** a1, void** a2);

void** fun_402f60(void** a1, uint32_t* a2, void*** a3);

void** fun_402cc0(void** a1) {
    void** v2;
    void** esi3;
    void** v4;
    void** edi5;
    void** v6;
    void** ebp7;
    void** eax8;
    void* esp9;
    void** eax10;
    int32_t ebx11;
    int32_t eax12;
    void* esp13;
    uint32_t esi14;
    void** edi15;
    int32_t ecx16;
    int32_t eax17;
    int32_t ecx18;
    signed char* ecx19;
    signed char* eax20;
    void** eax21;
    void* esp22;
    void** v23;
    void* esp24;
    void** eax25;
    void** eax26;
    int32_t eax27;
    int32_t v28;
    int32_t v29;
    int32_t eax30;
    void** eax31;

    v2 = esi3;
    v4 = edi5;
    v6 = ebp7;
    eax8 = fun_40ca80(a1, "rt");
    esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 8 + 4);
    g4133d8 = eax8;
    if (!eax8) {
        fun_403220(0, 0x41c, a1, v6, v4, v2);
        esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp9) - 4 - 4 - 4 - 4 + 4 + 12);
    }
    eax10 = g4133d8;
    ebx11 = fgets;
    eax12 = reinterpret_cast<int32_t>(ebx11(0x413aa0, 0x400, eax10));
    esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp9) - 4 - 4 - 4 - 4 + 4 + 12);
    esi14 = free;
    if (eax12) {
        do {
            edi15 = reinterpret_cast<void**>(0x413aa0);
            ecx16 = -1;
            eax17 = eax12 - eax12;
            do {
                if (!ecx16) 
                    break;
                --ecx16;
                ++edi15;
                ++esi14;
            } while (*reinterpret_cast<void***>(edi15) != *reinterpret_cast<void***>(&eax17));
            ecx18 = ~ecx16 - 1;
            if (ecx18 == 0x3ff && (ecx19 = reinterpret_cast<signed char*>(ecx18 + 0x413a9f), *ecx19 != 10) || (ecx19 = reinterpret_cast<signed char*>(ecx18 + 0x413a9f), *ecx19 == 10) && *reinterpret_cast<signed char*>(ecx18 + 0x413a9e) == 92) {
                eax20 = reinterpret_cast<signed char*>(ecx18 + 0x413a9e);
                if (*eax20 == 92) {
                    *ecx19 = 0;
                    *eax20 = 32;
                }
                eax21 = fun_40add0(0x413aa0, v6, v4);
                esp22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) - 4 - 4 + 4 + 4);
                v23 = eax21;
                fun_402e60(reinterpret_cast<int32_t>(esp22) + 20, reinterpret_cast<int32_t>(esp22) + 16);
                esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp22) - 4 - 4 - 4 + 8 + 4);
            } else {
                v23 = reinterpret_cast<void**>(0x413aa0);
            }
            fun_402f60(v23, reinterpret_cast<int32_t>(esp13) + 24, reinterpret_cast<int32_t>(esp13) + 28);
            esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) - 4 - 4 - 4 - 4 + 12 + 4);
            if (v23 != 0x413aa0) {
                esi14(v23);
                esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 - 4 + 4 + 4);
            }
            eax25 = g4133d8;
            eax12 = reinterpret_cast<int32_t>(ebx11(0x413aa0, 0x400, eax25));
            esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 - 4 - 4 - 4 + 4 + 12);
        } while (eax12);
    }
    eax26 = g4133d8;
    eax27 = reinterpret_cast<int32_t>(fclose(eax26));
    if (eax27 == -1) {
        fun_403220(0, 0x424, a1, v6, v4, v2);
    }
    fun_408320(0, 0);
    v28 = -1;
    if (!1) {
        do {
            if (*reinterpret_cast<int32_t*>(v28 * 4)) {
                v29 = *reinterpret_cast<int32_t*>(v28 * 4);
                esi14(v29);
            }
            eax30 = v28;
            --v28;
        } while (eax30);
    }
    eax31 = reinterpret_cast<void**>(esi14(0));
    return eax31;
}

void** fun_403490() {
    void** v1;
    void** ebx2;
    void** v3;
    void** esi4;
    void** v5;
    void** edi6;
    void** esi7;
    void*** esp8;
    void** v9;
    void** ebp10;
    uint32_t ebp11;
    void** v12;
    void** v13;
    void** ebx14;
    void*** esp15;
    struct s3* eax16;
    void* esp17;
    struct s3* edi18;
    int32_t ecx19;
    int32_t eax20;
    uint32_t ecx21;
    uint32_t eax22;
    uint32_t ecx23;
    uint32_t ecx24;
    struct s3* eax25;
    struct s3* edi26;
    int32_t ecx27;
    int32_t eax28;
    uint32_t ecx29;
    uint32_t eax30;
    uint32_t ecx31;
    uint32_t ecx32;
    void** v33;
    void** v34;
    void** eax35;

    v1 = ebx2;
    v3 = esi4;
    v5 = edi6;
    esi7 = reinterpret_cast<void**>(100);
    esp8 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0xa0 - 4 - 4 - 4 - 4);
    v9 = ebp10;
    ebp11 = 0;
    do {
        v12 = esi7;
        ++esi7;
        fun_403370(v12, "NMAKE", v9, v5, v3, v1, v13);
        esp8 = esp8 - 4 - 4 - 4 + 4 + 8;
    } while (reinterpret_cast<unsigned char>(esi7) < reinterpret_cast<unsigned char>(0x67));
    ebx14 = reinterpret_cast<void**>(0x67);
    do {
        if (reinterpret_cast<int1_t>(ebx14 == 0x6f)) {
            ++ebx14;
        }
        if (reinterpret_cast<int1_t>(ebx14 == 0x77)) {
            ++ebx14;
        }
        if (ebx14 == 0x78) 
            break;
        esp15 = esp8 - 4;
        if (ebp11) {
            eax16 = fun_403410(ebx14, v9);
            esp17 = reinterpret_cast<void*>(esp15 - 4 + 4 + 4);
            edi18 = eax16;
            ecx19 = -1;
            eax20 = reinterpret_cast<int32_t>(eax16) - reinterpret_cast<int32_t>(eax16);
            do {
                if (!ecx19) 
                    break;
                --ecx19;
                edi18 = reinterpret_cast<struct s3*>(&edi18->f1);
            } while (edi18->f0 != *reinterpret_cast<signed char*>(&eax20));
            ecx21 = reinterpret_cast<uint32_t>(~ecx19);
            eax22 = ecx21;
            ecx23 = ecx21 >> 2;
            while (ecx23) {
                --ecx23;
            }
            ecx24 = eax22 & 3;
            while (ecx24) {
                --ecx24;
            }
            fun_403370(0x7d, reinterpret_cast<int32_t>(esp17) + 16, reinterpret_cast<int32_t>(esp17) + 96, v9, v5, v3, v1);
            esp8 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp17) - 4 - 4 - 4 - 4 + 4 + 12);
        } else {
            eax25 = fun_403410(ebx14, v9);
            esp8 = esp15 - 4 + 4 + 4;
            edi26 = eax25;
            ecx27 = -1;
            eax28 = reinterpret_cast<int32_t>(eax25) - reinterpret_cast<int32_t>(eax25);
            do {
                if (!ecx27) 
                    break;
                --ecx27;
                edi26 = reinterpret_cast<struct s3*>(&edi26->f1);
            } while (edi26->f0 != *reinterpret_cast<signed char*>(&eax28));
            ecx29 = reinterpret_cast<uint32_t>(~ecx27);
            eax30 = ecx29;
            ecx31 = ecx29 >> 2;
            while (ecx31) {
                --ecx31;
            }
            ecx32 = eax30 & 3;
            while (ecx32) {
                --ecx32;
            }
        }
        ++ebx14;
        ebp11 = -(ebp11 - (ebp11 + reinterpret_cast<uint1_t>(ebp11 < ebp11 + reinterpret_cast<uint1_t>(ebp11 < 1))));
    } while (reinterpret_cast<unsigned char>(ebx14) < reinterpret_cast<unsigned char>(0x78));
    if (ebp11) {
        fun_403370(0x7d, esp8 + 16, 0x413060, v9, v5, v3, v1);
    }
    eax35 = fun_403370(0x78, v9, v5, v3, v1, v33, v34);
    return eax35;
}

int32_t fun_40c980(void** a1, void** a2);

struct s26 {
    signed char[1] pad1;
    signed char f1;
};

int32_t fun_40cbf0(void** a1, int32_t* a2);

struct s27 {
    unsigned char f0;
    signed char[3] pad4;
    void** f4;
    signed char[7] pad12;
    void** fc;
};

void fun_404cc0(struct s27** a1, void** a2);

void** fun_409ef0(void** a1, void** a2, void** a3, void** a4) {
    void** eax5;
    void** v6;
    void** ebx7;
    void** v8;
    void** v9;
    void** esi10;
    void** v11;
    void** edi12;
    void*** esp13;
    void** v14;
    void** ebp15;
    void** ecx16;
    void** v17;
    void** eax18;
    void** v19;
    int32_t eax20;
    void** ebx21;
    void** edi22;
    void** esi23;
    uint32_t ebp24;
    void** v25;
    void* esi26;
    void* eax27;
    void** ecx28;
    void** eax29;
    void* esi30;
    void* ebx31;
    void* ebx32;
    void* esp33;
    void** v34;
    void** ebx35;
    void* ebx36;
    void* esp37;
    void** edx38;
    struct s26* eax39;
    struct s26* eax40;
    struct s26* edx41;
    void** edi42;
    int32_t ecx43;
    void* eax44;
    uint32_t ecx45;
    uint32_t eax46;
    uint32_t ecx47;
    signed char* esi48;
    signed char* edi49;
    uint32_t ecx50;
    signed char* edi51;
    int32_t ecx52;
    void* eax53;
    uint32_t ecx54;
    uint32_t eax55;
    uint32_t ecx56;
    signed char* esi57;
    signed char* edi58;
    uint32_t ecx59;
    void** al60;
    int32_t v61;
    int32_t eax62;
    int32_t eax63;
    void* esi64;
    void* eax65;
    void** eax66;
    int32_t eax67;
    void** v68;

    eax5 = g413a34;
    v6 = ebx7;
    v8 = eax5;
    v9 = esi10;
    v11 = edi12;
    esp13 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 20 - 4 - 4 - 4 - 4);
    v14 = ebp15;
    if (!eax5) {
        addr_40a272_2:
        return 0;
    } else {
        while (1) {
            ecx16 = *reinterpret_cast<void***>(v8 + 8);
            v17 = ecx16;
            eax18 = reinterpret_cast<void**>(_mbsrchr(ecx16, 46));
            v19 = eax18;
            eax20 = fun_40c980(eax18, a3);
            esp13 = esp13 - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 + 8 + 4;
            if (eax20) 
                goto addr_40a260_4;
            ebx21 = v17 + 1;
            *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
            if (*reinterpret_cast<void***>(ebx21)) {
                do {
                    if (*reinterpret_cast<void***>(ebx21) == 0x7b) 
                        break;
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx21) == 94)) {
                        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx21) == 34) && (++ebx21, *reinterpret_cast<void***>(ebx21) != 34)) {
                            do {
                                ++ebx21;
                            } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx21) == 34));
                        }
                    } else {
                        ++ebx21;
                    }
                    ++ebx21;
                } while (*reinterpret_cast<void***>(ebx21));
            }
            if (!*reinterpret_cast<void***>(ebx21)) 
                goto addr_40a048_13;
            edi22 = ebx21;
            do {
                if (*reinterpret_cast<void***>(edi22) == 0x7d) 
                    break;
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi22) == 94)) {
                    ++edi22;
                }
                ++edi22;
            } while (*reinterpret_cast<void***>(edi22));
            esi23 = a2;
            ebp24 = reinterpret_cast<unsigned char>(edi22) - reinterpret_cast<unsigned char>(ebx21) - 1;
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi23) == 34)) 
                goto addr_409f95_20;
            addr_409f96_21:
            v25 = ebx21 + 1;
            if (!ebp24) {
                addr_409ff6_22:
                if (ebp24 == 0xffffffff || ((esi26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a2) + (reinterpret_cast<unsigned char>(edi22) - reinterpret_cast<unsigned char>(ebx21))), v19 = ebx21, eax27 = reinterpret_cast<void*>(_mbschr(esi26, 92)), esp13 = esp13 - 4 - 4 - 4 + 4 + 8, !!eax27) || (eax27 = reinterpret_cast<void*>(_mbschr(esi26, 47)), esp13 = esp13 - 4 - 4 - 4 + 4 + 8, !!eax27)) && (eax27 != esi26 || (*reinterpret_cast<signed char*>(edi22 + 0xffffffff) == 92 || *reinterpret_cast<signed char*>(edi22 + 0xffffffff) == 47))) {
                    addr_40a260_4:
                    ecx28 = *reinterpret_cast<void***>(v8);
                    v8 = ecx28;
                    if (ecx28) 
                        continue; else 
                        goto addr_40a272_2;
                } else {
                    addr_40a048_13:
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v17) == 0x7b)) {
                        if (!*reinterpret_cast<void***>(ebx21)) {
                            eax29 = a2;
                        } else {
                            eax29 = reinterpret_cast<void**>(_mbsrchr(a2, 46));
                            esp13 = esp13 - 4 - 4 - 4 + 4 + 8;
                            if (*reinterpret_cast<void***>(eax29) != 58) {
                                do {
                                    if (*reinterpret_cast<void***>(eax29) == 92) 
                                        break;
                                } while (*reinterpret_cast<void***>(eax29) != 47 && (reinterpret_cast<unsigned char>(eax29) > reinterpret_cast<unsigned char>(a2) && (--eax29, !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax29) == 58))));
                            }
                            if (*reinterpret_cast<void***>(eax29) == 58 || (*reinterpret_cast<void***>(eax29) == 92 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax29) == 47))) {
                                ++eax29;
                            }
                        }
                        esi30 = reinterpret_cast<void*>(0);
                        ebx31 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(eax29));
                        if (eax29 != a2 && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a2) == 34)) {
                            esi30 = reinterpret_cast<void*>(1);
                            *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(34);
                        }
                        ebx32 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx31) + reinterpret_cast<uint32_t>(esi30));
                        _mbsnbcpy(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<uint32_t>(esi30), eax29, ebx31);
                        esp33 = reinterpret_cast<void*>(esp13 - 4 - 4 - 4 - 4 + 4 + 12);
                    } else {
                        v34 = v17 + 1;
                        ebx35 = v34;
                        if (*reinterpret_cast<void***>(ebx35)) {
                            do {
                                if (*reinterpret_cast<void***>(ebx35) == 0x7d) 
                                    break;
                                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx35) == 94)) {
                                    ++ebx35;
                                }
                                ++ebx35;
                            } while (*reinterpret_cast<void***>(ebx35));
                        }
                        ebx36 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx35) - reinterpret_cast<unsigned char>(v34));
                        if (!ebx36) {
                            ebx36 = reinterpret_cast<void*>(2);
                            _mbsnbcpy(a1, ".\\", 2);
                            v17 = v34 + 1;
                            esp37 = reinterpret_cast<void*>(esp13 - 4 - 4 - 4 - 4 + 4 + 12);
                        } else {
                            _mbsnbcpy(a1, v34, ebx36);
                            esp37 = reinterpret_cast<void*>(esp13 - 4 - 4 - 4 - 4 + 4 + 12);
                            edx38 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx36) + reinterpret_cast<unsigned char>(v34) + 1);
                            v17 = edx38;
                            if (*reinterpret_cast<signed char*>(edx38 + 0xfffffffe) != 92) {
                                ebx36 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx36) + 1);
                                *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx36) + reinterpret_cast<unsigned char>(a1) + 0xffffffff) = 92;
                            }
                        }
                        eax39 = reinterpret_cast<struct s26*>(_mbsrchr(a2, 92));
                        eax40 = reinterpret_cast<struct s26*>(_mbsrchr(a2, 47));
                        esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp37) - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 + 4 + 8);
                        if (reinterpret_cast<uint32_t>(eax40) <= reinterpret_cast<uint32_t>(eax39)) {
                            eax40 = eax39;
                        }
                        edx41 = eax40;
                        if (!edx41) {
                            edi42 = a2;
                            ecx43 = -1;
                            eax44 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax40) - reinterpret_cast<uint32_t>(eax40));
                            do {
                                if (!ecx43) 
                                    break;
                                --ecx43;
                                ++edi42;
                            } while (*reinterpret_cast<void***>(edi42) != *reinterpret_cast<void***>(&eax44));
                            ecx45 = reinterpret_cast<uint32_t>(~ecx43);
                            eax46 = ecx45;
                            ecx47 = ecx45 >> 2;
                            esi48 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edi42) - ecx45);
                            edi49 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<uint32_t>(ebx36));
                            while (ecx47) {
                                --ecx47;
                                *edi49 = *esi48;
                                edi49 = edi49 + 4;
                                esi48 = esi48 + 4;
                            }
                            ecx50 = eax46 & 3;
                            while (ecx50) {
                                --ecx50;
                                *edi49 = *esi48;
                                ++edi49;
                                ++esi48;
                            }
                            ebx32 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx36) - reinterpret_cast<unsigned char>(a2) + reinterpret_cast<unsigned char>(a3));
                        } else {
                            edi51 = &edx41->f1;
                            ecx52 = -1;
                            eax53 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax40) - reinterpret_cast<uint32_t>(eax40));
                            do {
                                if (!ecx52) 
                                    break;
                                --ecx52;
                                ++edi51;
                            } while (*edi51 != *reinterpret_cast<signed char*>(&eax53));
                            ecx54 = reinterpret_cast<uint32_t>(~ecx52);
                            eax55 = ecx54;
                            ecx56 = ecx54 >> 2;
                            esi57 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi51) - ecx54);
                            edi58 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<uint32_t>(ebx36));
                            while (ecx56) {
                                --ecx56;
                                *edi58 = *esi57;
                                edi58 = edi58 + 4;
                                esi57 = esi57 + 4;
                            }
                            ecx59 = eax55 & 3;
                            while (ecx59) {
                                --ecx59;
                                *edi58 = *esi57;
                                ++edi58;
                                ++esi57;
                            }
                            ebx32 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx36) + (reinterpret_cast<unsigned char>(a3) - reinterpret_cast<uint32_t>(edx41) - 1));
                        }
                    }
                }
            } else {
                do {
                    al60 = *reinterpret_cast<void***>(v25);
                    if (al60 == 92 || al60 == 47) {
                        if (*reinterpret_cast<void***>(esi23) == 92) 
                            continue;
                        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi23) == 47)) 
                            goto addr_409ff1_68;
                    } else {
                        v61 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi23));
                        eax62 = reinterpret_cast<int32_t>(_mbctoupper(v61));
                        eax63 = reinterpret_cast<int32_t>(_mbctoupper(static_cast<int32_t>(reinterpret_cast<signed char>(al60))));
                        esp13 = esp13 - 4 - 4 + 4 + 4 - 4 - 4 + 4 + 4;
                        if (eax62 != eax63) 
                            goto addr_409fd9_70;
                    }
                    --ebp24;
                    ++esi23;
                    ++v25;
                } while (ebp24);
                goto addr_409fef_72;
            }
            esi64 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v19) - reinterpret_cast<unsigned char>(v17));
            if (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(ebx32) + reinterpret_cast<uint32_t>(esi64)) > reinterpret_cast<int32_t>(0x101)) {
                fun_403220(0, 0x434, v14, v11, v9, v6);
                esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) - 4 - 4 - 4 + 4 + 8);
            }
            _mbsnbcpy(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<uint32_t>(ebx32), v17, esi64);
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a1) == 34)) {
                eax65 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi64) + reinterpret_cast<unsigned char>(a1));
                esi64 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi64) + 1);
                *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax65) + reinterpret_cast<uint32_t>(ebx32)) = 34;
            }
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<uint32_t>(esi64) + reinterpret_cast<uint32_t>(ebx32)) = 0;
            eax66 = fun_40aec0(a1, 0x80, 0x413828, 1);
            esp13 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp33) - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 - 4 - 4 - 4 + 16 + 4);
            if (eax66) 
                goto addr_40a282_78;
            eax67 = fun_40cbf0(a1, esp13 + 52);
            esp13 = esp13 - 4 - 4 - 4 + 8 + 4;
            if (eax67) 
                break; else 
                goto addr_40a260_4;
            addr_409ff1_68:
            ebp24 = 0xffffffff;
            goto addr_409ff6_22;
            addr_409fef_72:
            goto addr_409ff6_22;
            addr_409fd9_70:
            goto addr_409ff1_68;
            addr_409f95_20:
            ++esi23;
            goto addr_409f96_21;
        }
    }
    if (!eax66) {
        addr_40a290_81:
        return v8;
    } else {
        addr_40a282_78:
        v68 = *reinterpret_cast<void***>(eax66 + 12);
        fun_404cc0(esp13 + 52, v68);
        goto addr_40a290_81;
    }
}

struct s28 {
    struct s28* f0;
    int32_t f4;
};

struct s28* g413a30 = reinterpret_cast<struct s28*>(0);

signed char fun_4089e0(void** a1) {
    struct s28* edi2;
    void** esi3;
    int32_t ebx4;
    int32_t v5;
    int32_t eax6;

    edi2 = g413a30;
    if (!edi2) {
        addr_408a0b_2:
        return 0;
    } else {
        esi3 = a1;
        ebx4 = _mbsicmp;
        do {
            v5 = edi2->f4;
            eax6 = reinterpret_cast<int32_t>(ebx4(v5, esi3));
            if (!eax6) 
                break;
            edi2 = edi2->f0;
        } while (edi2);
        goto addr_408a0b_2;
    }
    return 1;
}

void fun_401870(void** a1) {
    void** v2;
    void** v3;
    void** esi4;
    void** eax5;
    void** v6;
    void** edi7;
    int32_t eax8;
    uint32_t esi9;
    void** esi10;
    void** eax11;
    void** eax12;
    void** edi13;
    void** eax14;
    void** eax15;
    void** eax16;
    void** ecx17;
    int32_t eax18;
    void** v19;
    void** ecx20;
    void** eax21;
    void** ecx22;
    void** eax23;
    void** eax24;
    void** eax25;

    v2 = reinterpret_cast<void**>(__return_address());
    v3 = esi4;
    eax5 = g413a3c;
    v6 = edi7;
    eax8 = reinterpret_cast<int32_t>(_mbschr(eax5, 36));
    if (!eax8) {
        esi9 = free;
    } else {
        esi10 = g413a28;
        eax11 = g413a3c;
        eax12 = fun_40b700(eax11, 0x413a28);
        edi13 = eax12;
        if (!*reinterpret_cast<void***>(eax12)) {
            eax14 = g413424;
            fun_403220(eax14, 0x3ec, v6, v3, v2, a1);
        }
        g413a28 = esi10;
        if (esi10) {
            do {
                esi10 = *reinterpret_cast<void***>(esi10);
                eax15 = g413a28;
                fun_40ada0(eax15);
                g413a28 = esi10;
            } while (esi10);
        }
        eax16 = g413a3c;
        esi9 = free;
        esi9(eax16);
        g413a3c = edi13;
    }
    ecx17 = g413a3c;
    if (*reinterpret_cast<void***>(ecx17)) {
        do {
            eax18 = 0;
            *reinterpret_cast<void***>(&eax18) = *reinterpret_cast<void***>(ecx17);
            if (!(*reinterpret_cast<unsigned char*>(eax18 + 0x4149c0) & 1)) 
                break;
            ++ecx17;
        } while (*reinterpret_cast<void***>(ecx17));
    }
    if (*reinterpret_cast<void***>(ecx17)) {
        v19 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx17))));
        ecx20 = g413424;
        fun_403220(ecx20, 0x3e9, v19, v6, v3, v2);
    }
    eax21 = g4133fc;
    ecx22 = g413a3c;
    g4133b4 = 1;
    eax23 = fun_4019f0(ecx22, ecx22, eax21, 0);
    if (!eax23) {
        eax24 = g413a3c;
        esi9(eax24);
        eax25 = g4133fc;
        esi9(eax25);
    }
    g4133fc = reinterpret_cast<void**>(0);
    g413a3c = reinterpret_cast<void**>(0);
    return;
}

void fun_401bf0(void** a1, int32_t a2, void*** a3);

void fun_401710() {
    void** v1;
    void** ebx2;
    void** eax3;
    int1_t zf4;
    void** v5;
    void** esi6;
    void** v7;
    void** edi8;
    void** v9;
    void** ebp10;
    int32_t esi11;
    int32_t edi12;
    unsigned char cl13;
    unsigned char cl14;
    int1_t zf15;
    int1_t zf16;
    int1_t zf17;
    int1_t zf18;
    int1_t zf19;
    void** eax20;
    void** eax21;
    void** ecx22;
    void** ecx23;
    void** edx24;
    void** ecx25;
    void** bl26;
    void** ebx27;
    void** v28;
    int32_t eax29;
    void** eax30;
    void** eax31;
    int1_t zf32;
    void** eax33;
    void** ecx34;

    v1 = ebx2;
    eax3 = reinterpret_cast<void**>(0);
    zf4 = (g413a48 & 16) == 0;
    v5 = esi6;
    v7 = edi8;
    v9 = ebp10;
    esi11 = 1;
    edi12 = 1;
    if (zf4) {
        cl13 = g413a48;
        cl14 = reinterpret_cast<unsigned char>(cl13 & 2);
        if (cl14 || (zf15 = (g413a48 & 13) == 0, !zf15)) {
            zf16 = g413a38 == 0;
            if (!zf16) {
                if (!cl14) {
                    zf17 = (g413a48 & 4) == 0;
                    if (zf17) {
                        zf18 = (g413a48 & 8) == 0;
                        if (zf18) {
                            zf19 = (g413a48 & 1) == 0;
                            if (!zf19) {
                                eax3 = reinterpret_cast<void**>(".SUFFIXES");
                            }
                        } else {
                            eax3 = reinterpret_cast<void**>(".PRECIOUS");
                        }
                    } else {
                        eax3 = reinterpret_cast<void**>(".IGNORE");
                    }
                } else {
                    eax3 = reinterpret_cast<void**>(".SILENT");
                }
                eax20 = g413424;
                fun_403220(eax20, 0x441, eax3, v9, v7, v5);
            }
        } else {
            eax21 = g413a38;
            ecx22 = g413a40;
            *reinterpret_cast<void***>(ecx22 + 8) = eax21;
            ecx23 = g413a40;
            edx24 = g413a28;
            *reinterpret_cast<void***>(ecx23 + 12) = edx24;
            ecx25 = g413a40;
            bl26 = g413a44;
            *reinterpret_cast<void***>(ecx25 + 16) = bl26;
            ebx27 = g411b10;
            if (ebx27) {
                do {
                    v28 = *reinterpret_cast<void***>(ebx27 + 4);
                    eax29 = fun_401310(v28);
                    if (eax29) {
                        eax30 = g413424;
                        fun_403220(eax30, 0x445, v9, v7, v5, v1);
                    }
                    eax31 = *reinterpret_cast<void***>(ebx27 + 4);
                    fun_401bf0(eax31, edi12, 0x413a40);
                    zf32 = g4133dc == 0;
                    if (zf32) {
                        esi11 = 0;
                        g4133dc = ebx27;
                    }
                    g411b10 = *reinterpret_cast<void***>(ebx27);
                    if (esi11) {
                        fun_40ada0(ebx27);
                    }
                    if (edi12) {
                        edi12 = 0;
                    }
                    ebx27 = g411b10;
                } while (ebx27);
            }
        }
    } else {
        eax33 = g413a38;
        ecx34 = g413a34;
        *reinterpret_cast<void***>(ecx34 + 12) = eax33;
    }
    g411b10 = reinterpret_cast<void**>(0);
    g413a38 = reinterpret_cast<void**>(0);
    g413a28 = reinterpret_cast<void**>(0);
    g413a40 = reinterpret_cast<void**>(0);
    g413a48 = 0;
    return;
}

void fun_406a80(signed char a1, void** a2, void** a3);

void** fun_406500(struct s21* a1, signed char a2) {
    void** esi3;
    int1_t zf4;
    int32_t ebx5;
    int32_t v6;
    void** eax7;
    void** eax8;
    void** eax9;
    void** eax10;
    int1_t zf11;
    void** ecx12;
    void** eax13;
    void** eax14;

    esi3 = reinterpret_cast<void**>(&a1->f413aa0);
    zf4 = g4133c8 == 0;
    if (zf4) {
        *reinterpret_cast<signed char*>(&ebx5) = a2;
        if (*reinterpret_cast<signed char*>(&ebx5) == 24 || *reinterpret_cast<signed char*>(&ebx5) == 25) {
            v6 = ebx5;
            fun_406a80(*reinterpret_cast<signed char*>(&v6), 0x413aa0, esi3);
            *reinterpret_cast<signed char*>(&eax7) = *reinterpret_cast<signed char*>(&ebx5);
            return eax7;
        } else {
            eax8 = fun_406880(0);
            *reinterpret_cast<signed char*>(&g413aa0) = *reinterpret_cast<signed char*>(&eax8);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g413aa0) + 1) = 0;
            eax9 = fun_4065d0(eax8, 0x413aa1, esi3);
            return eax9;
        }
    } else {
        g4133c8 = 0;
        ++g4133f4;
        eax10 = fun_404de0();
        if (eax10 == 32 || (g4133f0 = reinterpret_cast<void**>(1), reinterpret_cast<int1_t>(eax10 == 9))) {
            g4133f0 = reinterpret_cast<void**>(0);
        }
        zf11 = g4133f0 == 0;
        if (zf11) {
            *reinterpret_cast<signed char*>(&eax10) = 18;
            return eax10;
        } else {
            if (!reinterpret_cast<int1_t>(eax10 == 0xffffffff)) {
                ecx12 = g4133d8;
                eax13 = fun_404d70(eax10, ecx12);
                *reinterpret_cast<signed char*>(&eax13) = 17;
                return eax13;
            } else {
                eax14 = fun_4065d0(eax10, 0x413aa0, esi3);
                return eax14;
            }
        }
    }
}

void** fun_408cd0(void** a1, void** a2) {
    int32_t ecx3;
    void** edi4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    void** eax8;

    ecx3 = -1;
    edi4 = a2;
    eax5 = eax6 - eax7;
    do {
        if (!ecx3) 
            break;
        --ecx3;
        ++edi4;
    } while (*reinterpret_cast<void***>(edi4) != *reinterpret_cast<void***>(&eax5));
    eax8 = reinterpret_cast<void**>(~ecx3 + reinterpret_cast<unsigned char>(a1) + 0xffffffff);
    if (reinterpret_cast<unsigned char>(eax8) > reinterpret_cast<unsigned char>(40)) {
        printf("\n\t\t\t");
        eax8 = reinterpret_cast<void**>(0);
    }
    return eax8;
}

void** g413ee0 = reinterpret_cast<void**>(36);

void** fun_408d80(void** a1, void** a2) {
    void** eax3;
    void** v4;
    void** edi5;
    void** v6;
    void** ebp7;
    void** edi8;
    void** eax9;
    void** esi10;
    void** ebx11;
    void** v12;
    void** eax13;
    void* esp14;
    int32_t esi15;
    void** v16;
    int32_t eax17;
    void* esp18;
    void** v19;
    int32_t eax20;
    void* esp21;
    void** v22;
    void** v23;
    void** eax24;
    void** v25;
    int32_t eax26;
    int32_t eax27;
    void** v28;
    void** eax29;
    void** eax30;
    void* esp31;
    int32_t v32;
    int32_t eax33;
    int32_t eax34;
    void** v35;
    void** eax36;
    void** eax37;
    void* esp38;
    int32_t v39;
    int32_t eax40;
    void** v41;
    void** eax42;
    void** v43;
    void*** esp44;
    void** v45;
    void** eax46;
    void* esp47;
    void** ebx48;
    int32_t eax49;
    void* esp50;
    void** eax51;
    void* esp52;
    int32_t eax53;
    int32_t eax54;
    void** eax55;
    void** eax56;
    void* esp57;
    int32_t v58;
    int32_t eax59;
    int32_t eax60;
    void** eax61;
    void** eax62;
    void* esp63;
    int32_t v64;
    int32_t eax65;
    void** ecx66;

    eax3 = g413ee0;
    v4 = edi5;
    v6 = ebp7;
    edi8 = reinterpret_cast<void**>(0);
    eax9 = fun_40acf0(eax3);
    eax13 = fun_403370(12, v6, v4, esi10, ebx11, eax9, v12);
    esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 4 - 4 - 4 + 4 + 4);
    if (a1) {
        esi15 = printf;
        do {
            v16 = *reinterpret_cast<void***>(a1 + 4);
            eax17 = reinterpret_cast<int32_t>(_mbschr(v16, 36));
            esp18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 - 4 - 4 + 4 + 8);
            if (!eax17) {
                v19 = *reinterpret_cast<void***>(a1 + 4);
                eax20 = reinterpret_cast<int32_t>(_mbspbrk(v19, "*?"));
                esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp18) - 4 - 4 - 4 + 4 + 8);
                if (!eax20) {
                    v22 = *reinterpret_cast<void***>(a1 + 4);
                    esi15("%s ", v22);
                    v23 = *reinterpret_cast<void***>(a1 + 4);
                    eax24 = fun_408cd0(edi8, v23);
                    esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 + 8 + 4);
                    edi8 = eax24;
                } else {
                    v25 = *reinterpret_cast<void***>(a1 + 4);
                    eax26 = fun_40cd20(v25, reinterpret_cast<int32_t>(esp21) + 16, reinterpret_cast<int32_t>(esp21) + 20, v6, v4);
                    esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4 - 4 - 4 + 12 + 4);
                    if (eax26 && (eax27 = fun_404c90(reinterpret_cast<int32_t>(esp14) + 16), v28 = *reinterpret_cast<void***>(a1 + 4), eax29 = fun_40c340(v28, eax27), esi15("%s ", eax29), eax30 = fun_408cd0(edi8, eax29), edi8 = eax30, free(eax29), esp31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 - 4 + 4 + 4 - 4 - 4 - 4 + 8 + 4 - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 + 8 + 4 - 4 - 4 + 4), eax33 = fun_40ce00(reinterpret_cast<int32_t>(esp31) + 20, v32), esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp31) + 4 - 4 - 4 - 4 + 8 + 4), !!eax33)) {
                        do {
                            eax34 = fun_404c90(reinterpret_cast<int32_t>(esp14) + 16);
                            v35 = *reinterpret_cast<void***>(a1 + 4);
                            eax36 = fun_40c340(v35, eax34);
                            esi15("%s ", eax36);
                            eax37 = fun_408cd0(edi8, eax36);
                            edi8 = eax37;
                            free(eax36);
                            esp38 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 - 4 + 4 + 4 - 4 - 4 - 4 + 8 + 4 - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 + 8 + 4 - 4 - 4 + 4);
                            eax40 = fun_40ce00(reinterpret_cast<int32_t>(esp38) + 20, v39);
                            esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp38) + 4 - 4 - 4 - 4 + 8 + 4);
                        } while (eax40);
                    }
                }
            } else {
                v41 = *reinterpret_cast<void***>(a1 + 4);
                eax42 = fun_40b700(v41, reinterpret_cast<int32_t>(esp18) + 36);
                v43 = eax42;
                esp44 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp18) - 4 - 4 - 4 + 8 + 4 - 4 - 4);
                v45 = eax42;
                while (eax46 = reinterpret_cast<void**>(_mbstok(v45, " \t")), esp47 = reinterpret_cast<void*>(esp44 - 4 + 4 + 8), ebx48 = eax46, !!ebx48) {
                    eax49 = reinterpret_cast<int32_t>(_mbspbrk(ebx48, "*?"));
                    esp50 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp47) - 4 - 4 - 4 + 4 + 8);
                    if (!eax49) {
                        esi15("%s ", ebx48);
                        eax51 = fun_408cd0(edi8, ebx48);
                        esp52 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp50) - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 + 8 + 4);
                        edi8 = eax51;
                    } else {
                        eax53 = fun_40cd20(ebx48, reinterpret_cast<int32_t>(esp50) + 16, reinterpret_cast<int32_t>(esp50) + 20, v6, v4);
                        esp52 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp50) - 4 - 4 - 4 - 4 + 12 + 4);
                        if (eax53 && (eax54 = fun_404c90(reinterpret_cast<int32_t>(esp52) + 16), eax55 = fun_40c340(ebx48, eax54), esi15("%s ", eax55), eax56 = fun_408cd0(edi8, eax55), edi8 = eax56, free(eax55), esp57 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp52) - 4 - 4 + 4 + 4 - 4 - 4 - 4 + 8 + 4 - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 + 8 + 4 - 4 - 4 + 4), eax59 = fun_40ce00(reinterpret_cast<int32_t>(esp57) + 20, v58), esp52 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp57) + 4 - 4 - 4 - 4 + 8 + 4), !!eax59)) {
                            do {
                                eax60 = fun_404c90(reinterpret_cast<int32_t>(esp52) + 16);
                                eax61 = fun_40c340(ebx48, eax60);
                                esi15("%s ", eax61);
                                eax62 = fun_408cd0(edi8, eax61);
                                edi8 = eax62;
                                free(eax61);
                                esp63 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp52) - 4 - 4 + 4 + 4 - 4 - 4 - 4 + 8 + 4 - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 + 8 + 4 - 4 - 4 + 4);
                                eax65 = fun_40ce00(reinterpret_cast<int32_t>(esp63) + 20, v64);
                                esp52 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp63) + 4 - 4 - 4 - 4 + 8 + 4);
                            } while (eax65);
                        }
                    }
                    esp44 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp52) - 4 - 4);
                    v45 = reinterpret_cast<void**>(0);
                }
                free(v43);
                esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp47) - 4 - 4 + 4 + 4);
            }
            eax13 = a1;
            ecx66 = *reinterpret_cast<void***>(eax13);
            a1 = ecx66;
        } while (ecx66);
    }
    return eax13;
}

struct s29 {
    unsigned char f0;
    signed char[3] pad4;
    void** f4;
};

struct s29* g40ea24;

int32_t fun_4095c0(signed char a1) {
    struct s29* ecx2;
    struct s29* eax3;
    void*** ecx4;
    uint32_t eax5;

    ecx2 = g40ea24;
    eax3 = g40ea24;
    ecx4 = &ecx2->f4;
    if (eax3->f0 != 22) {
        return 0;
    } else {
        eax5 = 0;
        *reinterpret_cast<signed char*>(&eax5) = a1;
        if (eax5 == 19) {
            *ecx4 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(*ecx4));
            return 1;
        } else {
            if (eax5 == 20) {
                *ecx4 = reinterpret_cast<void**>(~reinterpret_cast<unsigned char>(*ecx4));
                return 1;
            } else {
                if (eax5 == 21) {
                    *ecx4 = reinterpret_cast<void**>(-(eax5 - (eax5 + reinterpret_cast<uint1_t>(eax5 < eax5 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*ecx4) < reinterpret_cast<unsigned char>(1))))));
                    return 1;
                } else {
                    return 0;
                }
            }
        }
    }
}

struct s30 {
    void** f0;
    signed char[4278719] pad4278720;
    unsigned char f4149c0;
};

void** g40ea18;

struct s30* fun_4097c0(struct s30* a1) {
    void** ecx2;
    struct s30* eax3;

    ecx2 = g40ea18;
    eax3 = a1;
    if (!eax3->f0) {
        addr_4097e1_2:
        *reinterpret_cast<signed char*>(&eax3) = 1;
        g40ea18 = ecx2;
        return eax3;
    } else {
        do {
            if (*reinterpret_cast<void***>(ecx2) != eax3->f0) 
                break;
            ++ecx2;
            eax3 = reinterpret_cast<struct s30*>(&eax3->pad4278720);
        } while (eax3->f0);
        if (!eax3->f0) 
            goto addr_4097e1_2;
    }
    *reinterpret_cast<signed char*>(&eax3) = 0;
    return eax3;
}

void** fun_409730(void** a1, void** a2);

signed char g40ea08;

unsigned char g40ea10;

void** g40ea14;

void** fun_409790(signed char a1, void** a2) {
    void** ebx3;
    void** ebx4;

    *reinterpret_cast<signed char*>(&ebx3) = a1;
    fun_409730(ebx3, ebx4);
    g40ea08 = *reinterpret_cast<signed char*>(&ebx3);
    *reinterpret_cast<signed char*>(&g40ea10) = *reinterpret_cast<signed char*>(&ebx3);
    g40ea14 = a2;
    return a2;
}

void** fun_409620(void** a1) {
    void** v2;
    void** v3;
    void** esi4;
    void** esi5;
    void** eax6;
    void** eax7;
    void** eax8;
    void** eax9;
    void** eax10;
    void** eax11;

    v2 = reinterpret_cast<void**>(__return_address());
    v3 = esi4;
    ++g40ea18;
    esi5 = g40ea18;
    if (*reinterpret_cast<void***>(esi5)) {
        do {
            eax6 = g40ea18;
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax6) == 34)) {
                eax7 = eax6 + 1;
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax7) == 34)) 
                    break;
                g40ea18 = eax7;
            }
            ++g40ea18;
            eax8 = g40ea18;
        } while (*reinterpret_cast<void***>(eax8));
    }
    eax9 = g40ea18;
    if (!*reinterpret_cast<void***>(eax9)) {
        eax10 = g4133f4;
        fun_403220(eax10, 0x3fe, 34, v3, v2, a1);
    }
    eax11 = g40ea18;
    *reinterpret_cast<void***>(eax11) = reinterpret_cast<void**>(0);
    ++g40ea18;
    return esi5;
}

int32_t memmove = 0x155f4;

void** fun_409690() {
    void** v1;
    void** ebx2;
    void** v3;
    void** esi4;
    void** v5;
    void** edi6;
    void** esi7;
    int32_t ebx8;
    void** eax9;
    void** edx10;
    void** edx11;
    void** edi12;
    int32_t ecx13;
    void* eax14;
    void** eax15;
    void** eax16;
    void** eax17;
    void** eax18;
    void** eax19;

    v1 = ebx2;
    ++g40ea18;
    v3 = esi4;
    v5 = edi6;
    esi7 = g40ea18;
    if (*reinterpret_cast<void***>(esi7)) {
        ebx8 = memmove;
        do {
            eax9 = g40ea18;
            eax9 = *reinterpret_cast<void***>(eax9);
            if (!reinterpret_cast<int1_t>(eax9 == 94) || (edx10 = g40ea18, edx11 = edx10 + 1, !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx11) == 93))) {
                if (eax9 == 93) 
                    break;
            } else {
                edi12 = edx11;
                ecx13 = -1;
                eax14 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax9) - reinterpret_cast<unsigned char>(eax9));
                do {
                    if (!ecx13) 
                        break;
                    --ecx13;
                    ++edi12;
                    ++esi7;
                } while (*reinterpret_cast<void***>(edi12) != *reinterpret_cast<void***>(&eax14));
                eax15 = g40ea18;
                ebx8(eax15, edx11, ~ecx13);
            }
            ++g40ea18;
            eax16 = g40ea18;
        } while (*reinterpret_cast<void***>(eax16));
    }
    eax17 = g40ea18;
    if (!*reinterpret_cast<void***>(eax17)) {
        eax18 = g4133f4;
        fun_403220(eax18, 0x3fe, 93, v5, v3, v1);
    }
    eax19 = g40ea18;
    *reinterpret_cast<void***>(eax19) = reinterpret_cast<void**>(0);
    ++g40ea18;
    return esi7;
}

void** g413a54 = reinterpret_cast<void**>(0);

void** g413a58 = reinterpret_cast<void**>(0);

signed char g41400c = 0;

unsigned char g414010 = 0;

void** g413a5c = reinterpret_cast<void**>(0);

void fun_403580(uint32_t* a1, void*** a2, void** a3);

int32_t __p__pgmptr = 0x154aa;

struct s31 {
    signed char[16] pad16;
    int32_t f10;
};

struct s32 {
    signed char[48] pad48;
    int32_t f30;
};

signed char g414014 = 0;

int32_t _strerror = 0x15438;

struct s33 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t _spawnvp = 0x15444;

int32_t system = 0x15450;

void** fun_403af0(void** ecx, void** a2, int32_t a3, void** a4, uint32_t a5, void*** a6) {
    void** v7;
    void** ebx8;
    void** v9;
    void** esi10;
    void** v11;
    void** edi12;
    void*** esp13;
    void** v14;
    void** ebp15;
    void** ebp16;
    int1_t zf17;
    void** eax18;
    int32_t eax19;
    int32_t v20;
    int32_t eax21;
    void* esp22;
    void** eax23;
    int32_t* eax24;
    void* esp25;
    int32_t esi26;
    int32_t v27;
    int32_t eax28;
    int32_t v29;
    int32_t eax30;
    void** edi31;
    int32_t ecx32;
    void* eax33;
    int32_t eax34;
    int1_t zf35;
    int1_t zf36;
    int1_t zf37;
    void** eax38;
    int32_t ebx39;
    void** eax40;
    void* esp41;
    void*** esp42;
    int32_t v43;
    int1_t zf44;
    void** eax45;
    int32_t v46;
    int32_t eax47;
    void*** eax48;
    void** v49;
    int32_t v50;
    void** eax51;
    void* esp52;
    void** ecx53;
    void* esp54;
    uint32_t edx55;
    uint32_t v56;
    int32_t* v57;
    void** eax58;
    void* esp59;
    int32_t edi60;
    int32_t esi61;
    struct s31* eax62;
    int32_t v63;
    int32_t eax64;
    void* esp65;
    void* esi66;
    void** eax67;
    void* ebp68;
    void* edi69;
    int32_t v70;
    void** eax71;
    void** eax72;
    int32_t v73;
    void** eax74;
    struct s32* eax75;
    int32_t v76;
    int32_t eax77;
    void* esp78;
    void** v79;
    int32_t eax80;
    int32_t ebp81;
    int1_t zf82;
    void** edi83;
    int32_t ecx84;
    void* eax85;
    uint32_t ecx86;
    uint32_t eax87;
    uint32_t ecx88;
    signed char* esi89;
    signed char* edi90;
    uint32_t ecx91;
    int32_t* eax92;
    int32_t* eax93;
    void** v94;
    void** v95;
    void** eax96;
    void** v97;
    void** eax98;
    void** eax99;
    void** eax100;
    int32_t v101;
    struct s33* ecx102;
    void** eax103;
    void** eax104;
    void** eax105;
    void** ecx106;
    void** ecx107;
    void** esi108;
    int32_t edi109;
    int32_t v110;
    signed char al111;
    int1_t zf112;
    void** esi113;
    int32_t eax114;
    void** edi115;
    int32_t ecx116;
    void* eax117;
    uint32_t ecx118;
    uint32_t eax119;
    uint32_t ecx120;
    signed char* esi121;
    signed char* edi122;
    uint32_t ecx123;

    v7 = ebx8;
    v9 = esi10;
    v11 = edi12;
    esp13 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x220 - 4 - 4 - 4 - 4);
    v14 = ebp15;
    ebp16 = reinterpret_cast<void**>(0);
    g413a54 = reinterpret_cast<void**>(0);
    zf17 = g413a58 == 0;
    if (zf17) {
        eax18 = fun_404830(ecx);
        esp13 = esp13 - 4 + 4;
        g413a58 = eax18;
    }
    eax19 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2));
    if (eax19 == 45) {
        a5 = 1;
        ++a2;
        v20 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2));
        eax21 = reinterpret_cast<int32_t>(_ismbcdigit(v20));
        esp13 = esp13 - 4 - 4 + 4 + 4;
        if (!eax21) {
            g413a4c = reinterpret_cast<void**>(0xff);
        } else {
            esp22 = reinterpret_cast<void*>(esp13 - 4);
            eax23 = reinterpret_cast<void**>(strtol(a2, reinterpret_cast<int32_t>(esp22) + 0x238, 10));
            g413a4c = eax23;
            eax24 = reinterpret_cast<int32_t*>(_errno());
            esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp22) - 4 - 4 - 4 + 4 + 12 - 4 + 4);
            if (*eax24 == 34) {
                *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
                fun_403220(0, 0x436, a2, v14, v11, v9);
                esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4 - 4 - 4 - 4 + 4 + 12);
            }
            esi26 = _ismbcspace;
            v27 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2));
            eax28 = reinterpret_cast<int32_t>(esi26(v27));
            esp13 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp25) - 4 - 4 + 4 + 4);
            if (eax28) {
                do {
                    ++a2;
                    v29 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2));
                    eax30 = reinterpret_cast<int32_t>(esi26(v29));
                    esp13 = esp13 - 4 - 4 + 4 + 4;
                } while (eax30);
            }
        }
    } else {
        if (eax19 == 64) {
            ++a2;
            if (a4) {
                a3 = 0;
            }
        }
    }
    if (!*reinterpret_cast<void***>(a2)) 
        goto addr_404166_16;
    edi31 = a2;
    ecx32 = -1;
    eax33 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(a2));
    do {
        if (!ecx32) 
            break;
        --ecx32;
        ++edi31;
    } while (*reinterpret_cast<void***>(edi31) != *reinterpret_cast<void***>(&eax33));
    if (reinterpret_cast<uint32_t>(~ecx32 - 1) < 0x800) 
        goto addr_403c42_21;
    fun_403220(0, 0x447, a2, v14, v11, v9);
    esp13 = esp13 - 4 - 4 - 4 - 4 + 4 + 12;
    addr_403c84_23:
    if (a3) {
        printf("\t%s\n", 0x40e108);
        eax34 = reinterpret_cast<int32_t>(__p__iob());
        fflush(eax34 + 32);
        esp13 = esp13 - 4 - 4 - 4 + 4 + 8 - 4 + 4 - 4 - 4 + 4 + 4;
    }
    zf35 = g41400c == 0;
    if (zf35 && (zf36 = g414010 == 0, zf36) || (zf37 = (reinterpret_cast<unsigned char>(g4133d0) & 4) == 0, zf37) && (eax38 = fun_4043a0(0x40e108, esp13 + 28, esp13 + 24), esp13 = esp13 - 4 - 4 - 4 - 4 + 12 + 4, !!eax38)) {
        ebx39 = 1;
    } else {
        ebx39 = 0;
    }
    eax40 = fun_40add0(0x40e108, v14, v11);
    esp41 = reinterpret_cast<void*>(esp13 - 4 - 4 + 4 + 4);
    esp42 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp41) - 4);
    g413a5c = eax40;
    fun_403580(esp42 + 24, reinterpret_cast<int32_t>(esp41) + 36, eax40);
    esp13 = esp42 - 4 - 4 - 4 + 12 + 4;
    if (v43 && ((zf44 = g413ff8 == 0, !zf44) && (eax45 = g413ff8, eax47 = reinterpret_cast<int32_t>(_mbsicmp(v46, eax45)), esp13 = esp13 - 4 - 4 - 4 + 4 + 8, !eax47))) {
        eax48 = reinterpret_cast<void***>(__p__pgmptr());
        esp13 = esp13 - 4 + 4;
        v49 = *eax48;
    }
    if (!v50) 
        goto addr_404166_16;
    eax51 = reinterpret_cast<void**>(_mbsnbcpy(0x4130f8, v49, 0x100));
    esp52 = reinterpret_cast<void*>(esp13 - 4 - 4 - 4 - 4 + 4);
    ecx53 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp52) + 48);
    esp54 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp52) + 12);
    g413a54 = eax51;
    edx55 = v56;
    v57 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp54) + 16);
    if (a4) {
        eax58 = fun_404680(ecx53, edx55, ecx53, v57);
        esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) - 4 - 4 - 4 - 4 + 12 + 4);
        if (eax58) {
            ebx39 = 0;
            goto addr_403f53_34;
        }
        if (ebx39) {
            addr_403f53_34:
            if (1) {
                edi60 = _close;
                esi61 = _dup2;
            } else {
                eax62 = reinterpret_cast<struct s31*>(__p__iob());
                v63 = eax62->f10;
                esi61 = _dup2;
                eax64 = reinterpret_cast<int32_t>(esi61(-1, v63));
                esp65 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp59) - 4 + 4 - 4 - 4 - 4 + 4 + 8);
                if (eax64 == -1) {
                    fun_403220(0, 0x411, v14, v11, v9, v7);
                    esp65 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp65) - 4 - 4 - 4 + 4 + 8);
                }
                edi60 = _close;
                eax58 = reinterpret_cast<void**>(edi60(-1));
                esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp65) - 4 - 4 + 4 + 4);
            }
        } else {
            esi66 = reinterpret_cast<void*>(0);
            eax67 = reinterpret_cast<void**>(_errno());
            esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp59) - 4 + 4);
            ebp68 = reinterpret_cast<void*>(35);
            edi69 = reinterpret_cast<void*>(17);
            *eax67 = reinterpret_cast<void*>(0);
            do {
                v70 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi69) * 4 + 0x413068);
                eax58 = reinterpret_cast<void**>(_mbsicmp(v49, v70));
                esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp59) - 4 - 4 - 4 + 4 + 8);
                if (!eax58) 
                    goto addr_403e20_42;
                if (reinterpret_cast<signed char>(eax58) >= reinterpret_cast<signed char>(0)) {
                    esi66 = edi69;
                } else {
                    ebp68 = edi69;
                }
                __asm__("cdq ");
                edi69 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(esi66) + reinterpret_cast<uint32_t>(ebp68) - edx55) >> 1);
                eax58 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp68) - reinterpret_cast<uint32_t>(esi66));
            } while (reinterpret_cast<signed char>(eax58) > reinterpret_cast<signed char>(1));
            goto addr_403e1e_47;
        }
    } else {
        eax71 = fun_404680(ecx53, edx55, ecx53, v57);
        if (!eax71) {
            addr_404166_16:
            eax72 = reinterpret_cast<void**>(0);
            goto addr_404168_49;
        } else {
            if (v73 && a6) {
                eax74 = fun_40add0(v49, v14, v11);
                *a6 = eax74;
                goto addr_404160_52;
            }
        }
    }
    if (!1) {
        eax75 = reinterpret_cast<struct s32*>(__p__iob());
        v76 = eax75->f30;
        eax77 = reinterpret_cast<int32_t>(esi61(-1, v76));
        esp78 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp59) - 4 + 4 - 4 - 4 - 4 + 4 + 8);
        if (eax77 == -1) {
            fun_403220(0, 0x411, v14, v11, v9, v7);
            esp78 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp78) - 4 - 4 - 4 + 4 + 8);
        }
        eax58 = reinterpret_cast<void**>(edi60(-1));
        esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp78) - 4 - 4 + 4 + 4);
    }
    if (!ebx39) {
        addr_40409b_58:
        if (reinterpret_cast<int1_t>(v79 == 0xc000004b)) {
            eax80 = reinterpret_cast<int32_t>(__p__iob("spawn returned 0xc000004b ... Benign\n"));
            ebp81 = fprintf;
            ebp81(eax80 + 64, "spawn returned 0xc000004b ... Benign\n");
            v79 = reinterpret_cast<void**>(0);
        }
    } else {
        zf82 = g414014 == 0;
        if (zf82) {
            edi83 = a2;
            ecx84 = -1;
            eax85 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax58) - reinterpret_cast<unsigned char>(eax58));
            do {
                if (!ecx84) 
                    break;
                --ecx84;
                ++edi83;
            } while (*reinterpret_cast<void***>(edi83) != *reinterpret_cast<void***>(&eax85));
            ecx86 = reinterpret_cast<uint32_t>(~ecx84);
            eax87 = ecx86;
            ecx88 = ecx86 >> 2;
            esi89 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edi83) - ecx86);
            edi90 = reinterpret_cast<signed char*>(0x40e108);
            while (ecx88) {
                --ecx88;
                *edi90 = *esi89;
                edi90 = edi90 + 4;
                esi89 = esi89 + 4;
            }
            ecx91 = eax87 & 3;
            while (ecx91) {
                --ecx91;
                *edi90 = *esi89;
                ++edi90;
                ++esi89;
            }
            if (!ebp16) 
                goto addr_404054_71; else 
                goto addr_404044_72;
        } else {
            printf("NMAKE : Cannot execute command;  see README.WRI\n");
            eax92 = reinterpret_cast<int32_t*>(_errno());
            *eax92 = 1;
            v79 = reinterpret_cast<void**>(0xffffffff);
            goto addr_40409b_58;
        }
    }
    if (reinterpret_cast<int1_t>(v79 == 0xffffffff)) {
        if (!a5) {
            eax93 = reinterpret_cast<int32_t*>(_errno());
            if (*eax93) {
                if (*eax93 == 2) {
                    v94 = v49;
                    v95 = reinterpret_cast<void**>(0x439);
                } else {
                    if (*eax93 == 12) {
                        eax96 = v97;
                        if (!ebx39) {
                            eax96 = v49;
                        }
                        v94 = eax96;
                        v95 = reinterpret_cast<void**>(0x43a);
                    } else {
                        eax98 = reinterpret_cast<void**>(_strerror(0));
                        v94 = eax98;
                        v95 = reinterpret_cast<void**>(0x415);
                    }
                }
                fun_403220(0, v95, v94, v14, v11, v9);
            }
        } else {
            v79 = reinterpret_cast<void**>(0);
        }
    }
    if (v79 && a6) {
        eax99 = fun_40add0(v49, v14, v11);
        *a6 = eax99;
    }
    eax100 = g413a5c;
    free(eax100);
    addr_404160_52:
    eax72 = v79;
    addr_404168_49:
    return eax72;
    addr_404054_71:
    if (v101 >= 0) {
        ecx102 = reinterpret_cast<struct s33*>(reinterpret_cast<int32_t>(esp59) + v101 * 4 + 44);
        do {
            ecx102 = reinterpret_cast<struct s33*>(reinterpret_cast<uint32_t>(ecx102) - 4);
            ecx102->f4 = *reinterpret_cast<int32_t*>(&(ecx102 - 1)->pad4);
        } while (reinterpret_cast<uint32_t>(ecx102) >= reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(esp59) + 44));
    }
    eax103 = g413a58;
    v49 = eax103;
    eax104 = reinterpret_cast<void**>(_spawnvp(0, v49, reinterpret_cast<int32_t>(esp59) + 36));
    addr_404097_92:
    v79 = eax104;
    goto addr_40409b_58;
    addr_404044_72:
    eax104 = reinterpret_cast<void**>(system(0x40e108));
    goto addr_404097_92;
    addr_403e20_42:
    ebx39 = 1;
    addr_403e25_93:
    ebp16 = reinterpret_cast<void**>(1);
    if (!ebx39) {
        eax105 = g413a54;
        _splitpath(eax105, 0x40e000, 0x40e908, 0x40e008, 0);
        ecx106 = g413a54;
        _makepath(ecx106, 0x40e000, 0x40e908, 0x40e008, 0);
        ecx107 = g413a54;
        eax58 = fun_405bc0(ecx107, 0x411050);
        esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp59) - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 20 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 20 - 4 - 4 - 4 + 8 + 4);
        if (eax58) {
            if (*reinterpret_cast<void***>(eax58 + 1) == 98 || (eax58 = reinterpret_cast<void**>(_mbsicmp(eax58, ".cmd")), esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp59) - 4 - 4 - 4 + 4 + 8), eax58 == 0)) {
                ebx39 = 1;
                goto addr_403f53_34;
            } else {
                esi108 = v49;
                if (*reinterpret_cast<void***>(esi108)) {
                    edi109 = _mbctoupper;
                    do {
                        v110 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi108));
                        ++esi108;
                        al111 = reinterpret_cast<signed char>(edi109(v110));
                        esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp59) - 4 - 4 + 4 + 4);
                        *reinterpret_cast<signed char*>(esi108 + 0xffffffff) = al111;
                    } while (*reinterpret_cast<void***>(esi108));
                }
                zf112 = g414014 == 0;
                esi113 = v49;
                v49 = reinterpret_cast<void**>(0x411050);
                if (zf112 || (eax114 = fun_40ab40(0x411050, reinterpret_cast<int32_t>(esp59) + 32), esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp59) - 4 - 4 - 4 + 8 + 4), !!eax114)) {
                    eax58 = reinterpret_cast<void**>(_spawnvp(0, 0x411050, reinterpret_cast<int32_t>(esp59) + 36));
                    v79 = eax58;
                    v49 = esi113;
                    esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp59) - 4 - 4 - 4 - 4 + 4 + 12);
                    goto addr_403f53_34;
                } else {
                    printf("NMAKE : Cannot execute command;  see README.WRI\n");
                    eax58 = reinterpret_cast<void**>(_errno());
                    esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp59) - 4 - 4 + 4 + 4 - 4 + 4);
                    *reinterpret_cast<void***>(eax58) = reinterpret_cast<void**>(1);
                    v79 = reinterpret_cast<void**>(0xffffffff);
                    goto addr_403f53_34;
                }
            }
        } else {
            eax58 = reinterpret_cast<void**>(_errno());
            esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp59) - 4 + 4);
            *reinterpret_cast<void***>(eax58) = reinterpret_cast<void**>(2);
            v79 = reinterpret_cast<void**>(0xffffffff);
            goto addr_403f53_34;
        }
    }
    addr_403e1e_47:
    goto addr_403e25_93;
    addr_403c42_21:
    edi115 = a2;
    ecx116 = -1;
    eax117 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax33) - reinterpret_cast<uint32_t>(eax33));
    do {
        if (!ecx116) 
            break;
        --ecx116;
        ++edi115;
    } while (*reinterpret_cast<void***>(edi115) != *reinterpret_cast<void***>(&eax117));
    ecx118 = reinterpret_cast<uint32_t>(~ecx116);
    eax119 = ecx118;
    ecx120 = ecx118 >> 2;
    esi121 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edi115) - ecx118);
    edi122 = reinterpret_cast<signed char*>(0x40e108);
    while (ecx120) {
        --ecx120;
        *edi122 = *esi121;
        edi122 = edi122 + 4;
        esi121 = esi121 + 4;
    }
    ecx123 = eax119 & 3;
    while (ecx123) {
        --ecx123;
        *edi122 = *esi121;
        ++edi122;
        ++esi121;
    }
    goto addr_403c84_23;
}

struct s34 {
    unsigned char f0;
    signed char[3] pad4;
    void** f4;
};

void fun_409a90(void** ecx, struct s34* a2) {
    struct s29* tmp32_3;
    struct s29* ecx4;
    void** eax5;
    void** eax6;
    void** eax7;
    struct s29* ecx8;
    struct s29* ecx9;

    tmp32_3 = reinterpret_cast<struct s29*>(reinterpret_cast<uint32_t>(g40ea24) + 8);
    g40ea24 = tmp32_3;
    if (a2->f0 != 24) {
        ecx4 = g40ea24;
        eax5 = a2->f4;
        ecx4->f0 = a2->f0;
        ecx4->f4 = eax5;
        return;
    } else {
        eax6 = a2->f4;
        eax7 = fun_403af0(ecx, eax6, 0, 1, 0, 0);
        ecx8 = g40ea24;
        ecx8->f4 = eax7;
        ecx9 = g40ea24;
        ecx9->f0 = 22;
        return;
    }
}

int32_t fun_409300(signed char a1) {
    struct s29* eax2;
    unsigned char cl3;
    struct s29* esi4;
    void*** edi5;
    void*** esi6;
    struct s29* eax7;
    struct s29* eax8;
    struct s29* eax9;
    void** edx10;
    void** v11;
    uint32_t eax12;
    int32_t eax13;
    int32_t eax14;
    uint32_t eax15;
    void* eax16;
    void* eax17;
    void** eax18;
    void** eax19;
    void** eax20;
    void** eax21;
    void** eax22;
    void** edi23;
    void** esi24;
    void** ebx25;
    void** eax26;

    eax2 = g40ea24;
    g40ea24 = reinterpret_cast<struct s29*>(reinterpret_cast<uint32_t>(g40ea24) - 8);
    cl3 = eax2->f0;
    esi4 = g40ea24;
    edi5 = &eax2->f4;
    esi6 = &esi4->f4;
    if (cl3 != 22 || (eax7 = g40ea24, eax7->f0 != 22)) {
        if (cl3 != 23 || ((eax8 = g40ea24, eax8->f0 != 23) || a1 != 7 && a1 != 6)) {
            return 0;
        } else {
            eax9 = g40ea24;
            eax9->f0 = 22;
            edx10 = *esi6;
            v11 = *edi5;
            eax12 = reinterpret_cast<uint32_t>(_mbscmp(edx10, v11));
            *esi6 = reinterpret_cast<void**>(-(eax12 - (eax12 + reinterpret_cast<uint1_t>(eax12 < eax12 + reinterpret_cast<uint1_t>(eax12 < 1)))));
            if (a1 == 6 && (eax13 = fun_4095c0(21), !eax13)) {
                return 0;
            }
        }
    } else {
        eax14 = 0;
        *reinterpret_cast<signed char*>(&eax14) = a1;
        eax15 = reinterpret_cast<uint32_t>(eax14 - 1);
        if (eax15 > 17) {
            return 0;
        }
        goto *reinterpret_cast<int32_t*>(eax15 * 4 + 0x409574);
    }
    addr_40935f_9:
    return 1;
    if (*esi6 || *edi5) {
        *esi6 = reinterpret_cast<void**>(1);
        return 1;
    } else {
        *esi6 = reinterpret_cast<void**>(0);
        goto addr_40935f_9;
    }
    if (!*esi6 || !*edi5) {
        *esi6 = reinterpret_cast<void**>(0);
        return 1;
    } else {
        *esi6 = reinterpret_cast<void**>(1);
        return 1;
    }
    *esi6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*esi6) | reinterpret_cast<unsigned char>(*edi5));
    return 1;
    *esi6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*esi6) ^ reinterpret_cast<unsigned char>(*edi5));
    return 1;
    *esi6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*esi6) & reinterpret_cast<unsigned char>(*edi5));
    return 1;
    eax16 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*edi5) - reinterpret_cast<unsigned char>(*esi6));
    *esi6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax16) - (reinterpret_cast<uint32_t>(eax16) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax16) < reinterpret_cast<uint32_t>(eax16) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax16) < 1))) + 1);
    return 1;
    eax17 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*edi5) - reinterpret_cast<unsigned char>(*esi6));
    *esi6 = reinterpret_cast<void**>(-(reinterpret_cast<uint32_t>(eax17) - (reinterpret_cast<uint32_t>(eax17) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax17) < reinterpret_cast<uint32_t>(eax17) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax17) < 1)))));
    return 1;
    eax18 = reinterpret_cast<void**>(1);
    if (reinterpret_cast<signed char>(*edi5) >= reinterpret_cast<signed char>(*esi6)) {
        eax18 = reinterpret_cast<void**>(0);
    }
    *esi6 = eax18;
    return 1;
    eax19 = reinterpret_cast<void**>(1);
    if (reinterpret_cast<signed char>(*edi5) <= reinterpret_cast<signed char>(*esi6)) {
        eax19 = reinterpret_cast<void**>(0);
    }
    *esi6 = eax19;
    return 1;
    eax20 = reinterpret_cast<void**>(1);
    if (reinterpret_cast<signed char>(*edi5) > reinterpret_cast<signed char>(*esi6)) {
        eax20 = reinterpret_cast<void**>(0);
    }
    *esi6 = eax20;
    return 1;
    eax21 = reinterpret_cast<void**>(1);
    if (reinterpret_cast<signed char>(*edi5) < reinterpret_cast<signed char>(*esi6)) {
        eax21 = reinterpret_cast<void**>(0);
    }
    *esi6 = eax21;
    return 1;
    *esi6 = reinterpret_cast<void**>(reinterpret_cast<signed char>(*esi6) >> reinterpret_cast<unsigned char>(*edi5));
    return 1;
    *esi6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*esi6) << reinterpret_cast<unsigned char>(*edi5));
    return 1;
    *esi6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*esi6) - reinterpret_cast<unsigned char>(*edi5));
    return 1;
    *esi6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*esi6) + reinterpret_cast<unsigned char>(*edi5));
    return 1;
    if (!*edi5) {
        eax22 = g4133f4;
        fun_403220(eax22, 0x437, edi23, esi24, ebx25, __return_address());
    }
    __asm__("cdq ");
    *esi6 = reinterpret_cast<void**>(reinterpret_cast<signed char>(*esi6) % reinterpret_cast<signed char>(*edi5));
    return 1;
    if (!*edi5) {
        eax26 = g4133f4;
        fun_403220(eax26, 0x437, edi23, esi24, ebx25, __return_address());
    }
    __asm__("cdq ");
    *esi6 = reinterpret_cast<void**>(reinterpret_cast<signed char>(*esi6) / reinterpret_cast<signed char>(*edi5));
    return 1;
    *esi6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*edi5) * reinterpret_cast<unsigned char>(*esi6));
    return 1;
}

struct s35 {
    struct s30* f0;
    void** f4;
};

/* (image base) */
int32_t image_base_ = 0x4149a4;

int32_t g40ea20;

int32_t _mbscspn = 0x155fe;

void** fun_409de0(void* a1);

struct s36 {
    signed char[1] pad1;
    void** f1;
};

void** fun_409d70(void** a1);

void** fun_409800() {
    void** v1;
    void** v2;
    void** ebx3;
    void** eax4;
    void** v5;
    void** esi6;
    void** v7;
    void** edi8;
    void** bl9;
    int32_t esi10;
    int32_t eax11;
    void** eax12;
    int32_t eax13;
    struct s30* eax14;
    struct s35* esi15;
    int1_t zf16;
    int32_t eax17;
    void** eax18;
    void** eax19;
    int32_t esi20;
    int32_t eax21;
    void** eax22;
    int32_t eax23;
    void** eax24;
    void** eax25;
    void** eax26;
    void* eax27;
    void** eax28;
    void* esi29;
    void* eax30;
    void** eax31;
    void** eax32;
    void** eax33;
    void** eax34;
    struct s36* eax35;
    void** eax36;
    void** esi37;
    void* eax38;
    void** eax39;
    void** eax40;
    void** eax41;
    void** ebx42;
    int32_t edi43;
    int32_t* eax44;
    void** eax45;
    void** eax46;
    int32_t* eax47;
    void** eax48;
    void** ecx49;
    void** eax50;
    int32_t v51;
    int32_t eax52;
    void** eax53;
    void** eax54;
    void** eax55;
    void** eax56;
    void** eax57;
    int1_t zf58;
    void** eax59;
    void** eax60;
    struct s30* v61;
    void** eax62;
    struct s30* v63;

    v1 = reinterpret_cast<void**>(__return_address());
    v2 = ebx3;
    eax4 = g40ea18;
    v5 = esi6;
    v7 = edi8;
    bl9 = *reinterpret_cast<void***>(eax4);
    if ((bl9 == 32 || reinterpret_cast<int1_t>(bl9 == 9)) && (esi10 = _ismbcspace, eax11 = reinterpret_cast<int32_t>(esi10(static_cast<int32_t>(reinterpret_cast<signed char>(bl9)))), !!eax11)) {
        do {
            ++g40ea18;
            eax12 = g40ea18;
            bl9 = *reinterpret_cast<void***>(eax12);
            eax13 = reinterpret_cast<int32_t>(esi10(static_cast<int32_t>(reinterpret_cast<signed char>(bl9))));
        } while (eax13);
    }
    eax14 = reinterpret_cast<struct s30*>(0);
    *reinterpret_cast<void***>(&eax14) = bl9;
    if (!(eax14->f4149c0 & 0x80)) {
        esi15 = reinterpret_cast<struct s35*>(0x414948);
        goto addr_409877_5;
    } else {
        zf16 = image_base_ == 0;
        esi15 = reinterpret_cast<struct s35*>(0x4148a0);
        if (zf16) {
            addr_409877_5:
            if (!esi15->f0) {
                if (!reinterpret_cast<int1_t>(bl9 == 45)) {
                    if (!reinterpret_cast<int1_t>(bl9 == 34)) {
                        if (!reinterpret_cast<int1_t>(bl9 == 91)) {
                            eax17 = reinterpret_cast<int32_t>(_ismbcdigit(static_cast<int32_t>(reinterpret_cast<signed char>(bl9))));
                            if (!eax17) {
                                if (!bl9) {
                                    g40ea20 = 1;
                                    eax18 = fun_409790(0, 0);
                                    return eax18;
                                } else {
                                    eax19 = g40ea18;
                                    esi20 = _mbsnbicmp;
                                    eax21 = reinterpret_cast<int32_t>(esi20(eax19, "DEFINED", 7));
                                    if (eax21) {
                                        eax22 = g40ea18;
                                        eax23 = reinterpret_cast<int32_t>(esi20(eax22, "EXIST", 5));
                                        if (eax23) {
                                            eax24 = g4133f4;
                                            eax25 = fun_403220(eax24, 0x3ff, v7, v5, v2, v1);
                                            return eax25;
                                        } else {
                                            eax26 = g40ea18;
                                            eax27 = reinterpret_cast<void*>(_mbschr(eax26, 40));
                                            if (!eax27) {
                                                eax28 = g4133f4;
                                                fun_403220(eax28, 0x3ff, v7, v5, v2, v1);
                                            }
                                            esi29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax27) + 1);
                                            eax30 = reinterpret_cast<void*>(_mbscspn(esi29, ")"));
                                            eax31 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax30) + reinterpret_cast<uint32_t>(esi29));
                                            g40ea18 = eax31;
                                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(0);
                                            ++g40ea18;
                                            eax32 = fun_409de0(esi29);
                                            eax33 = fun_409790(22, eax32);
                                            return eax33;
                                        }
                                    } else {
                                        eax34 = g40ea18;
                                        eax35 = reinterpret_cast<struct s36*>(_mbschr(eax34, 40));
                                        if (!eax35) {
                                            eax36 = g4133f4;
                                            fun_403220(eax36, 0x3ff, v7, v5, v2, v1);
                                        }
                                        esi37 = reinterpret_cast<void**>(&eax35->f1);
                                        eax38 = reinterpret_cast<void*>(_mbscspn(esi37, ")"));
                                        eax39 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax38) + reinterpret_cast<unsigned char>(esi37));
                                        g40ea18 = eax39;
                                        *reinterpret_cast<void***>(eax39) = reinterpret_cast<void**>(0);
                                        ++g40ea18;
                                        eax40 = fun_409d70(esi37);
                                        eax41 = fun_409790(22, eax40);
                                        return eax41;
                                    }
                                }
                            } else {
                                ebx42 = g40ea18;
                                edi43 = _errno;
                                eax44 = reinterpret_cast<int32_t*>(edi43());
                                *eax44 = 0;
                                eax45 = g40ea18;
                                eax46 = reinterpret_cast<void**>(strtol(eax45, 0x40ea18, 0));
                                eax47 = reinterpret_cast<int32_t*>(edi43());
                                if (*eax47 == 34) {
                                    eax48 = g40ea18;
                                    *reinterpret_cast<void***>(eax48) = reinterpret_cast<void**>(0);
                                    ecx49 = g4133f4;
                                    fun_403220(ecx49, 0x436, ebx42, v7, v5, v2);
                                }
                                eax50 = g40ea18;
                                v51 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax50));
                                eax52 = reinterpret_cast<int32_t>(_mbctoupper(v51));
                                if (eax52 == 76) {
                                    ++g40ea18;
                                }
                                eax53 = fun_409790(22, eax46);
                                return eax53;
                            }
                        } else {
                            eax54 = fun_409690();
                            eax55 = fun_409790(24, eax54);
                            return eax55;
                        }
                    } else {
                        eax56 = fun_409620(v7);
                        eax57 = fun_409790(23, eax56);
                        return eax57;
                    }
                } else {
                    ++g40ea18;
                    zf58 = g40ea08 == 22;
                    if (!zf58) {
                        eax59 = fun_409790(19, 0);
                        return eax59;
                    } else {
                        eax60 = fun_409790(14, 0);
                        return eax60;
                    }
                }
            } else {
                *reinterpret_cast<void***>(&eax14) = esi15->f4;
                v61 = eax14;
                eax62 = fun_409790(*reinterpret_cast<signed char*>(&v61), 0);
                return eax62;
            }
        } else {
            do {
                v63 = esi15->f0;
                eax14 = fun_4097c0(v63);
                if (*reinterpret_cast<void***>(&eax14)) 
                    goto addr_409877_5;
                esi15 = reinterpret_cast<struct s35*>(reinterpret_cast<int32_t>(esi15) + 8);
            } while (esi15->f0);
        }
        goto addr_409877_5;
    }
}

struct s34* g40ea0c;

/* (image base) */
struct s34* image_base_ = reinterpret_cast<struct s34*>(0x40fe28);

void fun_409b70(void** a1, void** a2, void** a3) {
    int1_t cf4;
    void** eax5;
    struct s34* eax6;
    int1_t cf7;
    void** eax8;
    struct s29* eax9;
    struct s34* ecx10;
    void** eax11;
    struct s34* tmp32_12;

    cf4 = reinterpret_cast<uint32_t>(g40ea24) < 0x40fe30;
    if (cf4) {
        eax5 = g4133f4;
        fun_403220(eax5, 0x3ff, __return_address(), a1, a2, a3);
    }
    eax6 = g40ea0c;
    cf7 = reinterpret_cast<uint32_t>(image_base_) < reinterpret_cast<uint32_t>(eax6);
    if (cf7) {
        eax8 = g4133f4;
        fun_403220(eax8, 0x412, __return_address(), a1, a2, a3);
    }
    eax9 = g40ea24;
    ecx10 = g40ea0c;
    eax11 = eax9->f4;
    ecx10->f0 = eax9->f0;
    ecx10->f4 = eax11;
    g40ea24 = reinterpret_cast<struct s29*>(reinterpret_cast<uint32_t>(g40ea24) - 8);
    tmp32_12 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(g40ea0c) + 8);
    g40ea0c = tmp32_12;
    return;
}

void** fun_40ca30(void** a1) {
    int32_t ecx2;
    void** esi3;
    void** v4;
    void** edi5;
    void** edi6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    void** eax10;
    void** ecx11;
    void** edx12;

    ecx2 = -1;
    esi3 = a1;
    v4 = edi5;
    edi6 = esi3;
    eax7 = eax8 - eax9;
    do {
        if (!ecx2) 
            break;
        --ecx2;
        ++edi6;
        ++esi3;
    } while (*reinterpret_cast<void***>(edi6) != *reinterpret_cast<void***>(&eax7));
    eax10 = fun_40acc0(~ecx2, v4);
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi3) == 34)) {
        ++esi3;
    }
    ecx11 = eax10;
    if (*reinterpret_cast<void***>(esi3)) {
        do {
            ++esi3;
            *reinterpret_cast<void***>(ecx11) = *reinterpret_cast<void***>(esi3);
            ++ecx11;
        } while (*reinterpret_cast<void***>(esi3));
    }
    edx12 = ecx11 + 0xffffffff;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx12) == 34)) {
        ecx11 = edx12;
    }
    *reinterpret_cast<void***>(ecx11) = reinterpret_cast<void**>(0);
    return eax10;
}

int32_t fun_40c980(void** a1, void** a2) {
    int32_t ecx3;
    int32_t eax4;
    int32_t eax5;
    int32_t eax6;
    void** v7;
    void** ebx8;
    void** v9;
    void** esi10;
    void*** esp11;
    void** v12;
    void** edi13;
    void** ebx14;
    void** edi15;
    int32_t eax16;
    void* esp17;
    void* v18;
    void** esi19;
    int32_t ecx20;
    void** edi21;
    int32_t eax22;
    void* edx23;
    int32_t eax24;

    ecx3 = -1;
    eax4 = eax5 - eax6;
    v7 = ebx8;
    v9 = esi10;
    esp11 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
    v12 = edi13;
    ebx14 = a1;
    edi15 = ebx14;
    do {
        if (!ecx3) 
            break;
        --ecx3;
        ++edi15;
    } while (*reinterpret_cast<void***>(edi15) != *reinterpret_cast<void***>(&eax4));
    eax16 = fun_40ceb4(~ecx3, v12, v9, v7);
    esp17 = reinterpret_cast<void*>(esp11 - 4 + 4);
    v18 = esp17;
    esi19 = a2;
    ecx20 = -1;
    edi21 = esi19;
    eax22 = eax16 - eax16;
    do {
        if (!ecx20) 
            break;
        --ecx20;
        ++edi21;
        ++esi19;
    } while (*reinterpret_cast<void***>(edi21) != *reinterpret_cast<void***>(&eax22));
    fun_40ceb4(~ecx20, v12, v9, v7);
    edx23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp17) - 4 + 4);
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx14) == 34)) {
        ++ebx14;
    }
    if (*reinterpret_cast<void***>(ebx14)) {
        do {
            ++ebx14;
        } while (*reinterpret_cast<void***>(ebx14));
    }
    if (*reinterpret_cast<signed char*>(&a2) == 34) {
    }
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi19) == 34)) {
        ++esi19;
    }
    if (*reinterpret_cast<void***>(esi19)) {
        do {
            ++esi19;
        } while (*reinterpret_cast<void***>(esi19));
    }
    if (*reinterpret_cast<signed char*>(&a2) == 34) {
    }
    eax24 = reinterpret_cast<int32_t>(_mbsicmp(v18, edx23));
    return eax24;
}

int32_t fun_40cbf0(void** a1, int32_t* a2) {
    void** edx3;
    int32_t ecx4;
    void** edi5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    void** eax9;
    int32_t v10;
    int32_t eax11;
    int32_t eax12;

    edx3 = a1;
    ecx4 = -1;
    edi5 = edx3;
    eax6 = eax7 - eax8;
    do {
        if (!ecx4) 
            break;
        --ecx4;
        ++edi5;
    } while (*reinterpret_cast<void***>(edi5) != *reinterpret_cast<void***>(&eax6));
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx3) == 34) && *reinterpret_cast<signed char*>(~ecx4 + reinterpret_cast<unsigned char>(edx3) - 2) == 34) {
        eax9 = fun_40ca30(edx3);
        edx3 = eax9;
    }
    v10 = *a2;
    eax11 = reinterpret_cast<int32_t>(_findfirst(edx3, v10));
    if (eax11 != -1) {
        _findclose(eax11);
        eax12 = fun_404c90(a2);
        return eax12;
    } else {
        return 0;
    }
}

void fun_404cc0(struct s27** a1, void** a2) {
    if (!((*a1)->f0 & 16)) {
        (*a1)->fc = a2;
        return;
    } else {
        (*a1)->f4 = a2;
        return;
    }
}

void** fun_40a390(void** a1) {
    void** eax2;
    void** ecx3;

    eax2 = a1;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax2) == 0x7b)) {
        if (*reinterpret_cast<void***>(eax2) != 0x7d) {
            do {
                ecx3 = eax2;
                ++eax2;
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx3) == 94)) {
                    ++eax2;
                }
            } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax2) == 0x7d));
        }
        ++eax2;
    }
    return eax2;
}

int32_t fun_40a310(void** a1, void** a2) {
    void** edi3;
    void** esi4;
    int32_t ebx5;
    void** ecx6;
    void** v7;
    int32_t eax8;
    uint32_t edi9;
    void** v10;
    void** ebx11;
    void** v12;

    edi3 = a2;
    if (!edi3) {
        addr_40a33c_2:
        return 0;
    } else {
        esi4 = a1;
        ebx5 = _mbsicmp;
        do {
            ecx6 = *reinterpret_cast<void***>(edi3 + 8);
            v7 = *reinterpret_cast<void***>(esi4 + 8);
            eax8 = reinterpret_cast<int32_t>(ebx5(ecx6, v7));
            if (!eax8) 
                break;
            edi3 = *reinterpret_cast<void***>(edi3);
        } while (edi3);
        goto addr_40a33c_2;
    }
    edi9 = free;
    v10 = *reinterpret_cast<void***>(esi4 + 8);
    edi9(v10);
    ebx11 = *reinterpret_cast<void***>(esi4 + 12);
    if (ebx11) {
        do {
            *reinterpret_cast<void***>(esi4 + 12) = *reinterpret_cast<void***>(ebx11);
            v12 = *reinterpret_cast<void***>(ebx11 + 4);
            edi9(v12);
            fun_40ada0(ebx11);
            ebx11 = *reinterpret_cast<void***>(esi4 + 12);
        } while (ebx11);
    }
    edi9(esi4);
    return 1;
}

void fun_40a2a0(void** a1, int32_t a2) {
    void** v3;
    void** esi4;
    void** ebx5;
    void** v6;
    void** edi7;
    void** v8;
    void** ebp9;
    void** esi10;
    uint32_t edi11;
    int32_t ebp12;
    int1_t zf13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;

    v3 = esi4;
    ebx5 = a1;
    v6 = edi7;
    v8 = ebp9;
    esi10 = ebx5;
    if (ebx5) {
        edi11 = free;
        ebp12 = a2;
        do {
            if (ebp12 && (zf13 = (g4133d4 & 1) == 0, !zf13)) {
                v14 = *reinterpret_cast<void***>(ebx5 + 8);
                fun_403220(0, 0xfa5, v14, v8, v6, v3);
            }
            v15 = *reinterpret_cast<void***>(ebx5 + 8);
            edi11(v15);
            v16 = *reinterpret_cast<void***>(ebx5 + 12);
            fun_402c40(v16, v8, v6);
            v17 = *reinterpret_cast<void***>(ebx5 + 16);
            fun_402c40(v17, v8, v6);
            ebx5 = *reinterpret_cast<void***>(ebx5);
            v18 = esi10;
            esi10 = ebx5;
            edi11(v18);
        } while (ebx5);
    }
    return;
}

uint32_t fun_40cee1(int32_t a1);

uint32_t fun_40cf7b(int32_t a1) {
    uint32_t eax2;

    eax2 = fun_40cee1(__return_address());
    return eax2 - (eax2 + reinterpret_cast<uint1_t>(eax2 < eax2 + reinterpret_cast<uint1_t>(eax2 < 1)));
}

int32_t fun_40aa70(void** a1, int32_t a2) {
    int32_t ecx3;
    int32_t ebx4;
    void* edi5;
    void* esi6;
    int32_t v7;

    ecx3 = 0;
    ebx4 = -1;
    edi5 = reinterpret_cast<void*>(0x7fff);
    do {
        if (!*reinterpret_cast<void***>(ecx3 * 8 + 0x414ac8)) 
            break;
        esi6 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a1) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx3 * 8 + 0x414ac8)));
        if (!esi6) 
            goto addr_40aac1_4;
        if (reinterpret_cast<signed char>(a1) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx3 * 8 + 0x414ac8)) && (reinterpret_cast<int32_t>(edi5) > reinterpret_cast<int32_t>(esi6) && (v7 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx3 * 8 + 0x414ac8)) / 0xfffffc18, v7 == reinterpret_cast<signed char>(a1) / 0xfffffc18))) {
            edi5 = esi6;
            ebx4 = ecx3;
        }
        ++ecx3;
    } while (ecx3 < 20);
    goto addr_40aabf_8;
    addr_40aac3_9:
    if (ebx4 < 0) {
        return 0;
    } else {
        return *reinterpret_cast<int32_t*>(ebx4 * 8 + 0x414acc);
    }
    addr_40aac1_4:
    ebx4 = ecx3;
    goto addr_40aac3_9;
    addr_40aabf_8:
    goto addr_40aac3_9;
}

int32_t g414ac0 = 0;

int32_t ftell = 0x15620;

struct s3* fun_40a820(struct s3* a1, int32_t* a2);

void fun_40aa20(int32_t a1, void** a2);

struct s3* fun_40a7a0(struct s3* a1);

struct s3* fun_40a6f0(void** a1, struct s3* a2, int32_t a3) {
    void** esi4;
    struct s3* edi5;
    void* esp6;
    int32_t ebx7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;
    void* esp12;
    struct s3* eax13;
    void** v14;
    int32_t v15;
    void** v16;
    int32_t v17;
    struct s3* eax18;

    esi4 = a1;
    edi5 = a2;
    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 4 - 4 - 4 - 4);
    ebx7 = a3;
    do {
        addr_40a703_2:
        eax8 = g414ac0;
        eax9 = reinterpret_cast<int32_t>(ftell(eax8));
        eax10 = g414ac0;
        eax11 = reinterpret_cast<int32_t>(fgets(edi5, ebx7, eax10));
        esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 + 4 + 12);
        if (!eax11) 
            break;
        eax13 = fun_40a820(edi5, reinterpret_cast<int32_t>(esp12) + 16);
        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 - 4 - 4 + 8 + 4);
        if (esi4 == v14) 
            goto addr_40a785_4;
        __asm__("cdq ");
        if (v15 % 0x3e8 != 0x3e7) 
            goto addr_40a703_2;
        if (esi4 == v16) 
            goto addr_40a785_4;
        __asm__("cdq ");
        __asm__("cdq ");
    } while (reinterpret_cast<signed char>(esi4) / 0xfffffc18 != v17 / 0xfffffc18);
    goto addr_40a774_8;
    return 0x413060;
    addr_40a785_4:
    fun_40aa20(eax9, esi4);
    addr_40a78c_10:
    eax18 = fun_40a7a0(eax13);
    return eax18;
    addr_40a774_8:
    goto addr_40a78c_10;
}

struct s3* fun_40a820(struct s3* a1, int32_t* a2) {
    int32_t ebx3;
    struct s3* edi4;
    int32_t esi5;
    int32_t ebp6;
    int32_t* eax7;
    int16_t** eax8;
    int16_t* eax9;
    uint32_t eax10;
    int32_t eax11;

    ebx3 = 0;
    edi4 = a1;
    if (edi4->f0) {
        esi5 = __p__pctype;
        ebp6 = _isctype;
        do {
            eax7 = reinterpret_cast<int32_t*>(__p___mb_cur_max());
            if (*eax7 <= 1) {
                eax8 = reinterpret_cast<int16_t**>(esi5());
                eax9 = *eax8;
                *reinterpret_cast<int16_t*>(&eax9) = eax9[edi4->f0];
                eax10 = reinterpret_cast<uint32_t>(eax9) & 4;
            } else {
                eax11 = edi4->f0;
                eax10 = reinterpret_cast<uint32_t>(ebp6(eax11, 4));
            }
        } while (eax10 && (edi4 = reinterpret_cast<struct s3*>(&edi4->f1), ebx3 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi4) - 1) + (ebx3 + ebx3 * 4) * 2 - 48, !!edi4->f0));
    }
    *a2 = ebx3;
    return edi4;
}

uint32_t fun_40ae50(void** a1, int32_t a2, void** a3, void** a4) {
    int32_t edi5;
    void** esi6;
    void** esi7;
    int32_t eax8;
    int32_t ebx9;
    int32_t eax10;

    if (!a3) {
        edi5 = 0;
        esi6 = a1;
        if (*reinterpret_cast<void***>(esi6)) {
            do {
                edi5 = edi5 + reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi6));
                ++esi6;
            } while (*reinterpret_cast<void***>(esi6));
        }
    } else {
        edi5 = 0;
        esi7 = a1;
        eax8 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi7));
        if (eax8) {
            ebx9 = _mbctoupper;
            do {
                if (eax8 != 47) {
                    eax10 = reinterpret_cast<int32_t>(ebx9(eax8));
                } else {
                    eax10 = 92;
                }
                edi5 = edi5 + eax10;
                ++esi7;
                eax8 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi7));
            } while (eax8);
        }
    }
    return edi5 % reinterpret_cast<uint32_t>(a2);
}

void** fun_40c8d0(void** a1, void*** a2, uint32_t a3) {
    void** edx4;
    void** v5;
    int32_t ebp6;
    void** esi7;
    void** edi8;
    void** bl9;
    int32_t v10;
    int32_t eax11;
    int32_t eax12;
    void** ecx13;

    edx4 = a2[a3 * 4];
    v5 = edx4;
    if (!edx4) {
        addr_40c957_2:
        return 0;
    } else {
        ebp6 = _mbctoupper;
        do {
            esi7 = a1;
            edi8 = *reinterpret_cast<void***>(v5 + 4);
            if (!*reinterpret_cast<void***>(esi7)) {
                addr_40c944_5:
                if (!*reinterpret_cast<void***>(edi8)) 
                    break;
            } else {
                do {
                    if (!*reinterpret_cast<void***>(edi8)) 
                        break;
                    bl9 = *reinterpret_cast<void***>(esi7);
                    if (bl9 == 92 || bl9 == 47) {
                        if (*reinterpret_cast<void***>(edi8) == 92) 
                            continue;
                        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi8) == 47)) 
                            break;
                    } else {
                        v10 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi8));
                        eax11 = reinterpret_cast<int32_t>(ebp6(v10));
                        eax12 = reinterpret_cast<int32_t>(ebp6(static_cast<int32_t>(reinterpret_cast<signed char>(bl9))));
                        if (eax11 != eax12) 
                            break;
                    }
                    ++esi7;
                    ++edi8;
                } while (*reinterpret_cast<void***>(esi7));
                if (!*reinterpret_cast<void***>(esi7)) 
                    goto addr_40c944_5;
            }
            ecx13 = *reinterpret_cast<void***>(v5);
            v5 = ecx13;
        } while (ecx13);
        goto addr_40c957_2;
    }
    return v5;
}

struct s1* fun_40b5d0(struct s1* a1) {
    struct s1* eax2;
    struct s1* edi3;
    struct s1* edi4;
    int32_t v5;
    int32_t eax6;
    struct s1* edi7;
    void** v8;
    void** ecx9;
    void** edi10;
    void** esi11;
    void** v12;
    void** ecx13;

    eax2 = reinterpret_cast<struct s1*>(&a1->f1);
    if (eax2->f0 == 94) {
        addr_40b61e_2:
        return eax2;
    } else {
        if (eax2->f0 != 40) {
            addr_40b61c_4:
            eax2 = a1;
            goto addr_40b61e_2;
        } else {
            edi3 = reinterpret_cast<struct s1*>(&eax2->f1);
            if (edi3->f0 == 94) {
                return edi3;
            }
            if (edi3->f0 == 64) 
                goto addr_40b5fb_8;
        }
    }
    if (eax2->f0 != 94) {
        return edi3;
    }
    addr_40b5fb_8:
    edi4 = reinterpret_cast<struct s1*>(&edi3->f1);
    if (edi3->f1 != 94) {
        if (edi3->f1 != 41) {
            v5 = edi3->f1;
            eax6 = reinterpret_cast<int32_t>(_mbschr("DFBR", v5));
            if (eax6) {
                edi7 = reinterpret_cast<struct s1*>(&edi4->f1);
                if (edi4->f1 != 94) {
                    if (edi4->f1 == 41) {
                        return edi7;
                    }
                } else {
                    v8 = reinterpret_cast<void**>(static_cast<int32_t>(edi7->f1));
                    ecx9 = g413424;
                    fun_403220(ecx9, 0x3e9, v8, edi10, esi11, __return_address());
                    return a1;
                }
            }
        } else {
            return edi4;
        }
    } else {
        v12 = reinterpret_cast<void**>(static_cast<int32_t>(edi4->f1));
        ecx13 = g413424;
        fun_403220(ecx13, 0x3e9, v12, edi10, esi11, __return_address());
        goto addr_40b61c_4;
    }
}

struct s1* fun_40b520(struct s1* a1, signed char* a2) {
    void** v3;
    void** ebx4;
    void** v5;
    void** esi6;
    struct s1* esi7;
    void** v8;
    void** edi9;
    void** v10;
    void** ebp11;
    signed char* ebp12;
    signed char* edi13;
    int32_t ecx14;
    void** v15;
    void** ecx16;
    void** eax17;
    void** eax18;

    v3 = ebx4;
    v5 = esi6;
    esi7 = a1;
    v8 = edi9;
    v10 = ebp11;
    ebp12 = a2;
    edi13 = ebp12;
    if (esi7->f0) {
        do {
            if (esi7->f0 == 41) 
                break;
            if (esi7->f0 == 58) 
                break;
            if (esi7->f0 == 94 && (esi7 = reinterpret_cast<struct s1*>(&esi7->f1), ecx14 = 0, *reinterpret_cast<signed char*>(&ecx14) = esi7->f1, !(*reinterpret_cast<unsigned char*>(ecx14 + 0x4149c0) & 1))) {
                v15 = reinterpret_cast<void**>(static_cast<int32_t>(esi7->f1));
                ecx16 = g413424;
                fun_403220(ecx16, 0x3e9, v15, v10, v8, v5);
            }
            esi7 = reinterpret_cast<struct s1*>(&esi7->f1);
            *edi13 = esi7->f0;
            ++edi13;
        } while (esi7->f0);
    }
    if (esi7->f0 == 41) {
        addr_40b5a7_9:
        *edi13 = 0;
        if (reinterpret_cast<int32_t>(edi13) - reinterpret_cast<int32_t>(ebp12) > 0x101) {
            eax17 = g413424;
            fun_403220(eax17, 0x434, v10, v8, v5, v3);
        }
    } else {
        do {
            if (esi7->f0 == 94) {
                esi7 = reinterpret_cast<struct s1*>(&esi7->f1);
            }
        } while (esi7->f0 && (esi7 = reinterpret_cast<struct s1*>(&esi7->f1), esi7->f0 != 41));
        if (esi7->f0 == 41) 
            goto addr_40b5a7_9; else 
            goto addr_40b594_15;
    }
    return esi7;
    addr_40b594_15:
    eax18 = g413424;
    fun_403220(eax18, 0x3e8, v10, v8, v5, v3);
    goto addr_40b5a7_9;
}

void fun_40bb00(void*** a1, void**** a2, void**** a3, void*** a4, void** a5) {
    void** v6;
    void** ebx7;
    void*** ebx8;
    void** v9;
    void** esi10;
    void** v11;
    void** edi12;
    void** v13;
    void** ebp14;
    void*** ebp15;
    void** v16;
    void** eax17;
    void** edx18;
    void** edi19;
    void** esi20;
    uint32_t ecx21;
    uint32_t ecx22;
    void** eax23;
    void** esi24;
    void** eax25;
    void** eax26;

    v6 = ebx7;
    ebx8 = a1;
    v9 = esi10;
    v11 = edi12;
    v13 = ebp14;
    ebp15 = a4;
    if (*ebx8 == a5) {
        v16 = *ebp15;
        eax17 = fun_40acc0(v16, v13);
        edx18 = *ebp15;
        edi19 = eax17;
        esi20 = *ebx8;
        ecx21 = reinterpret_cast<unsigned char>(edx18) >> 2;
        while (ecx21) {
            --ecx21;
            *reinterpret_cast<void***>(edi19) = *reinterpret_cast<void***>(esi20);
            edi19 = edi19 + 4;
            esi20 = esi20 + 4;
        }
        ecx22 = reinterpret_cast<unsigned char>(edx18) & 3;
        while (ecx22) {
            --ecx22;
            *reinterpret_cast<void***>(edi19) = *reinterpret_cast<void***>(esi20);
            ++edi19;
            ++esi20;
        }
        *ebx8 = eax17;
    }
    eax23 = *ebx8;
    esi24 = *ebp15 + 0x400;
    eax25 = reinterpret_cast<void**>(realloc(eax23, esi24));
    *ebx8 = eax25;
    if (!eax25) {
        eax26 = g413424;
        fun_403220(eax26, 0x419, v13, v11, v9, v6);
    }
    *a2 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*ebp15) + reinterpret_cast<unsigned char>(*ebx8));
    *ebp15 = esi24;
    *a3 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*ebx8) + reinterpret_cast<unsigned char>(esi24));
    return;
}

struct s37 {
    signed char f0;
    signed char f1;
};

void fun_40bf10();

void** fun_40bf30(signed char a1, void** a2, void** a3);

void fun_40bb90(void*** a1, void*** a2, void**** a3, void**** a4, void*** a5, int32_t a6, void** a7) {
    void** v8;
    void** esi9;
    void** v10;
    void** edi11;
    void** esi12;
    void*** esp13;
    void** v14;
    void** ebp15;
    void* edi16;
    void** v17;
    void** v18;
    void** v19;
    void*** ebp20;
    struct s37* ecx21;
    uint32_t eax22;
    void**** edx23;
    void** eax24;
    void** eax25;
    void** eax26;
    void** eax27;
    void** eax28;
    void** eax29;
    void** esi30;
    void** bl31;
    void** ecx32;
    void** v33;
    void** eax34;
    void** eax35;
    void** esi36;
    void** eax37;
    void** v38;
    void** v39;
    void** v40;
    void** ebx41;
    void**** v42;
    void** eax43;
    void* esp44;
    void**** esp45;
    void***** esp46;
    void* esp47;
    void**** esp48;
    void***** esp49;
    void* esp50;
    void**** esp51;
    void***** esp52;
    void** eax53;
    void** eax54;
    int1_t zf55;
    int1_t zf56;
    void** eax57;
    void** v58;
    void** edx59;
    void** v60;

    v8 = esi9;
    v10 = edi11;
    esi12 = reinterpret_cast<void**>(0);
    esp13 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x118 - 4 - 4 - 4 - 4);
    v14 = ebp15;
    edi16 = reinterpret_cast<void*>(1);
    v17 = reinterpret_cast<void**>(0);
    v18 = reinterpret_cast<void**>(0);
    v19 = reinterpret_cast<void**>(0);
    switch (a6 - 1) {
        addr_40beda_3:
    default:
        return;
        addr_40bbd2_4:
    case 0:
        ebp20 = a2;
        ecx21 = reinterpret_cast<struct s37*>(reinterpret_cast<unsigned char>(*ebp20) + reinterpret_cast<uint32_t>(edi16));
        eax22 = ecx21->f0 - 42;
        if (eax22 > 22) 
            goto addr_40be20_5;
        edx23 = reinterpret_cast<void****>(0);
        *reinterpret_cast<signed char*>(&edx23) = *reinterpret_cast<signed char*>(eax22 + reinterpret_cast<int32_t>(fun_40bf10));
        switch (edx23) {
        case 0:
            if (ecx21->f1 == 42) {
                eax24 = g413a98;
                esi12 = reinterpret_cast<void**>(1);
                v17 = eax24;
                edi16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi16) + reinterpret_cast<unsigned char>(1) + 1);
                goto addr_40bc19_9;
            } else {
                eax25 = g413a8c;
                edi16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi16) + 1);
                v19 = reinterpret_cast<void**>(1);
                v17 = eax25;
                goto addr_40bc19_9;
            }
        case 1:
            eax26 = g413a88;
            edi16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi16) + 1);
            v17 = eax26;
            goto addr_40bc19_9;
        case 2:
            eax27 = g413a94;
            esi12 = reinterpret_cast<void**>(1);
            edi16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi16) + 1);
            v17 = eax27;
            goto addr_40bc19_9;
        case 3:
            eax28 = g413a90;
            v17 = eax28;
            addr_40be20_5:
        case 4:
            edi16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi16) + 1);
            goto addr_40bc19_9;
        }
        addr_40bc09_14:
    case 1:
        eax29 = g413a84;
        ebp20 = a2;
        v17 = eax29;
        break;
    case 2:
        v18 = reinterpret_cast<void**>(1);
        edi16 = reinterpret_cast<void*>(2);
        goto addr_40bbd2_4;
    case 3:
        v18 = reinterpret_cast<void**>(1);
        edi16 = reinterpret_cast<void*>(4);
        goto addr_40bc09_14;
    case 4:
        if (*a4 == *a3) {
            fun_40bb00(a1, a3, a4, a5, a7);
        }
        **a3 = reinterpret_cast<void**>(36);
        *a3 = *a3 + 1;
        *a2 = *a2 + 2;
        goto addr_40beda_3;
    }
    addr_40bc19_9:
    if (!v17) {
        esi30 = *ebp20;
        if (*reinterpret_cast<void***>(esi30)) {
            do {
                if (*reinterpret_cast<void***>(esi30) == 32) 
                    break;
            } while (*reinterpret_cast<void***>(esi30) != 9 && (++esi30, !!*reinterpret_cast<void***>(esi30)));
        }
        bl31 = *reinterpret_cast<void***>(esi30);
        *reinterpret_cast<void***>(esi30) = reinterpret_cast<void**>(0);
        ecx32 = g413424;
        v33 = *ebp20;
        fun_403220(ecx32, 0xfa6, v33, v14, v10, v8);
        *reinterpret_cast<void***>(esi30) = bl31;
        esi12 = reinterpret_cast<void**>(0);
        eax34 = fun_40add0(0x413060, v14, v10);
        esp13 = esp13 - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 + 4 + 4;
        v17 = eax34;
    }
    if (!esi12) {
        if (v19) {
            eax35 = fun_40bf30(82, esp13 + 36, v17);
            esp13 = esp13 - 4 - 4 - 4 - 4 + 12 + 4;
            v17 = eax35;
        }
        if (v18) 
            goto addr_40be49_28;
    } else {
        esi36 = v17;
        eax37 = fun_40acf0(0x400);
        esp13 = esp13 - 4 - 4 + 4 + 4;
        v38 = eax37;
        v39 = eax37 + 0x400;
        v40 = v38;
        if (esi36) {
            do {
                ebx41 = *reinterpret_cast<void***>(esi36 + 4);
                if (v18) {
                    *reinterpret_cast<signed char*>(&edx23) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*ebp20) + reinterpret_cast<uint32_t>(edi16));
                    v42 = edx23;
                    eax43 = fun_40bf30(*reinterpret_cast<signed char*>(&v42), esp13 + 36, ebx41);
                    esp13 = esp13 - 4 - 4 - 4 - 4 + 12 + 4;
                    ebx41 = eax43;
                }
                if (*reinterpret_cast<void***>(ebx41)) {
                    do {
                        if (v40 == v39) {
                            esp44 = reinterpret_cast<void*>(esp13 - 4);
                            esp45 = reinterpret_cast<void****>(reinterpret_cast<int32_t>(esp44) - 4);
                            edx23 = esp45 + 6;
                            esp46 = reinterpret_cast<void*****>(esp45 - 1);
                            fun_40bb00(esp46 + 9, edx23, reinterpret_cast<int32_t>(esp44) + 24, esp13 + 32, 0);
                            esp13 = reinterpret_cast<void***>(esp46 - 1 - 1 - 1 + 5 + 1);
                        }
                        ++ebx41;
                        *reinterpret_cast<void***>(v40) = *reinterpret_cast<void***>(ebx41);
                        ++v40;
                    } while (*reinterpret_cast<void***>(ebx41));
                }
                if (v40 == v39) {
                    esp47 = reinterpret_cast<void*>(esp13 - 4);
                    esp48 = reinterpret_cast<void****>(reinterpret_cast<int32_t>(esp47) - 4);
                    edx23 = esp48 + 6;
                    esp49 = reinterpret_cast<void*****>(esp48 - 1);
                    fun_40bb00(esp49 + 9, edx23, reinterpret_cast<int32_t>(esp47) + 24, esp13 + 32, 0);
                    esp13 = reinterpret_cast<void***>(esp49 - 1 - 1 - 1 + 5 + 1);
                }
                *reinterpret_cast<void***>(v40) = reinterpret_cast<void**>(0);
                if (*reinterpret_cast<void***>(esi36)) {
                    *reinterpret_cast<void***>(v40) = reinterpret_cast<void**>(32);
                    ++v40;
                    if (v40 == v39) {
                        esp50 = reinterpret_cast<void*>(esp13 - 4);
                        esp51 = reinterpret_cast<void****>(reinterpret_cast<int32_t>(esp50) - 4);
                        edx23 = esp51 + 6;
                        esp52 = reinterpret_cast<void*****>(esp51 - 1);
                        fun_40bb00(esp52 + 9, edx23, reinterpret_cast<int32_t>(esp50) + 24, esp13 + 32, 0);
                        esp13 = reinterpret_cast<void***>(esp52 - 1 - 1 - 1 + 5 + 1);
                    }
                    *reinterpret_cast<void***>(v40) = reinterpret_cast<void**>(0);
                }
                esi36 = *reinterpret_cast<void***>(esi36);
            } while (esi36);
        }
        eax53 = v38;
        goto addr_40be5f_44;
    }
    addr_40be63_45:
    fun_40c060(a1, ebp20, a3, a4, v17, a5, a7);
    esp13 = esp13 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 28 + 4;
    eax54 = g413a90;
    if (v17 != eax54 && ((zf55 = g413a84 == v17, !zf55) && ((zf56 = g413a88 == v17, !zf56) && (reinterpret_cast<unsigned char>(v17) < reinterpret_cast<unsigned char>(esp13 + 36) || reinterpret_cast<unsigned char>(v17) >= reinterpret_cast<unsigned char>(esp13 + 0x125))))) {
        free(v17);
        goto addr_40beda_3;
    }
    addr_40be49_28:
    eax57 = v17;
    v58 = eax57;
    edx59 = *ebp20;
    *reinterpret_cast<signed char*>(&eax57) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edx59) + reinterpret_cast<uint32_t>(edi16));
    v60 = eax57;
    eax53 = fun_40bf30(*reinterpret_cast<signed char*>(&v60), esp13 + 36, v58);
    esp13 = esp13 - 4 - 4 - 4 - 4 + 12 + 4;
    addr_40be5f_44:
    v17 = eax53;
    goto addr_40be63_45;
}

void fun_40c040(int32_t ecx);

void** g413fe0 = reinterpret_cast<void**>(46);

struct s38 {
    signed char f0;
    signed char f1;
};

void** fun_40bf30(signed char a1, void** a2, void** a3) {
    void** edx4;
    int32_t ecx5;
    void** ebp6;
    void** edi7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;
    uint32_t ecx11;
    uint32_t eax12;
    uint32_t ecx13;
    void*** esi14;
    void** ebx15;
    void** edi16;
    uint32_t ecx17;
    void** edi18;
    int32_t ecx19;
    void* esi20;
    uint32_t eax21;
    void** ecx22;
    uint32_t eax23;
    int32_t ecx24;
    void** ax25;
    struct s38* eax26;

    edx4 = reinterpret_cast<void**>(0);
    ecx5 = -1;
    ebp6 = reinterpret_cast<void**>(0);
    edi7 = a3;
    eax8 = eax9 - eax10;
    do {
        if (!ecx5) 
            break;
        --ecx5;
        ++edi7;
    } while (*reinterpret_cast<void***>(edi7) != *reinterpret_cast<void***>(&eax8));
    ecx11 = reinterpret_cast<uint32_t>(~ecx5);
    eax12 = ecx11;
    ecx13 = ecx11 >> 2;
    esi14 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi7) - ecx11);
    ebx15 = a2;
    edi16 = ebx15;
    while (ecx13) {
        --ecx13;
        *reinterpret_cast<void***>(edi16) = *esi14;
        edi16 = edi16 + 4;
        esi14 = esi14 + 4;
    }
    ecx17 = eax12 & 3;
    while (ecx17) {
        --ecx17;
        *reinterpret_cast<void***>(edi16) = *esi14;
        ++edi16;
        ++esi14;
    }
    edi18 = ebx15;
    *reinterpret_cast<unsigned char*>(&eax12) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx15) - 34);
    ecx19 = -1;
    esi20 = reinterpret_cast<void*>(-(reinterpret_cast<uint32_t>(esi14) - (reinterpret_cast<uint32_t>(esi14) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(esi14) < reinterpret_cast<uint32_t>(esi14) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax12) < 1)))));
    eax21 = eax12 - eax12;
    do {
        if (!ecx19) 
            break;
        --ecx19;
        ++edi18;
        esi20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi20) + 1);
    } while (*reinterpret_cast<void***>(edi18) != *reinterpret_cast<void***>(&eax21));
    ecx22 = reinterpret_cast<void**>(~ecx19 + reinterpret_cast<unsigned char>(ebx15) + 0xfffffffe);
    if (reinterpret_cast<unsigned char>(ecx22) < reinterpret_cast<unsigned char>(ebx15)) {
        addr_40bf9b_14:
        eax23 = a1 - 66;
        if (eax23 <= 16) {
            ecx24 = 0;
            *reinterpret_cast<signed char*>(&ecx24) = *reinterpret_cast<signed char*>(eax23 + reinterpret_cast<int32_t>(fun_40c040));
            switch (ecx24) {
            case 0:
                if (ebp6) {
                    *reinterpret_cast<void***>(ebp6) = reinterpret_cast<void**>(0);
                }
            case 2:
                if (!edx4) {
                    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx15 + 1) == 58)) {
                        ebx15 = ebx15 + 2;
                        break;
                    }
                } else {
                    ebx15 = edx4 + 1;
                    break;
                }
            case 1:
                if (!edx4) {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx15 + 1) == 58)) {
                        ax25 = g413fe0;
                        *reinterpret_cast<void***>(ebx15) = ax25;
                        break;
                    } else {
                        *reinterpret_cast<void***>(ebx15 + 2) = reinterpret_cast<void**>(0);
                        break;
                    }
                } else {
                    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx15 + 1) == 58) && reinterpret_cast<unsigned char>(ebx15) - reinterpret_cast<unsigned char>(edx4) == 0xfffffffe) {
                        ++edx4;
                    }
                    *reinterpret_cast<void***>(edx4) = reinterpret_cast<void**>(0);
                    break;
                }
            case 3:
                if (ebp6) {
                    *reinterpret_cast<void***>(ebp6) = reinterpret_cast<void**>(0);
                }
            case 4:
                goto 0x40c00b;
            }
        }
    } else {
        do {
            if (*reinterpret_cast<void***>(ecx22) == 92) 
                goto addr_40bf99_32;
            if (*reinterpret_cast<void***>(ecx22) == 47) 
                goto addr_40bf99_32;
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx22) == 46) && !ebp6) {
                ebp6 = ecx22;
            }
            --ecx22;
        } while (reinterpret_cast<unsigned char>(ecx22) >= reinterpret_cast<unsigned char>(ebx15));
        goto addr_40bf97_37;
    }
    if (esi20) {
        eax26 = reinterpret_cast<struct s38*>(_mbschr(ebx15, 0));
        eax26->f0 = 34;
        eax26->f1 = 0;
    }
    return ebx15;
    addr_40bf99_32:
    edx4 = ecx22;
    goto addr_40bf9b_14;
    addr_40bf97_37:
    goto addr_40bf9b_14;
}

void fun_40c170(void*** a1, void**** a2, void**** a3, void**** a4, void** a5, void*** a6, void** a7) {
    void** v8;
    void** ebx9;
    void** v10;
    void** esi11;
    void** v12;
    void** edi13;
    void*** esi14;
    void** v15;
    void** ebp16;
    void*** esi17;
    void** eax18;
    void** eax19;
    void*** ebx20;
    void** eax21;
    void** v22;
    void** eax23;
    void** ecx24;
    void** v25;
    void*** ebp26;
    void** edi27;
    void* eax28;
    int32_t ecx29;
    void*** ebp30;
    void* v31;
    void** eax32;
    void** v33;
    void** ebp34;
    void**** esi35;
    void**** edi36;
    int32_t eax37;
    void** ebx38;
    uint32_t esi39;

    v8 = ebx9;
    v10 = esi11;
    v12 = edi13;
    esi14 = *a2;
    v15 = ebp16;
    esi17 = esi14 + 1;
    *a2 = esi17;
    if (*esi17) {
        do {
            if (*esi17 == 61) 
                break;
            if (reinterpret_cast<int1_t>(*esi17 == 94)) {
                ++esi17;
            }
            ++esi17;
        } while (*esi17);
    }
    if (*esi17 != 61) {
        eax18 = g4133f4;
        fun_403220(eax18, 0x3eb, v15, v12, v10, v8);
    }
    if (*a2 == esi17) {
        eax19 = g4133f4;
        fun_403220(eax19, 0x3ed, v15, v12, v10, v8);
    }
    ebx20 = esi17;
    if (*esi17) {
        do {
            if (*ebx20 == 41) 
                break;
            if (reinterpret_cast<int1_t>(*ebx20 == 94)) {
                ++ebx20;
            }
            ++ebx20;
        } while (*ebx20);
    }
    if (*ebx20 != 41) {
        eax21 = g4133f4;
        fun_403220(eax21, 0x3e8, v15, v12, v10, v8);
    }
    v22 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi17) - reinterpret_cast<uint32_t>(*a2) + 1);
    eax23 = fun_40acf0(v22);
    ecx24 = eax23;
    v25 = eax23;
    ebp26 = *a2;
    if (*ebp26 != 61) {
        do {
            if (reinterpret_cast<int1_t>(*ebp26 == 94)) {
                ++ebp26;
            }
            eax23 = *ebp26;
            ++ebp26;
            *reinterpret_cast<void***>(ecx24) = eax23;
            ++ecx24;
        } while (!reinterpret_cast<int1_t>(*ebp26 == 61));
    }
    edi27 = v25;
    eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23) - reinterpret_cast<unsigned char>(eax23));
    *reinterpret_cast<void***>(ecx24) = reinterpret_cast<void**>(0);
    ecx29 = -1;
    do {
        if (!ecx29) 
            break;
        --ecx29;
        ++edi27;
        ++esi17;
    } while (*reinterpret_cast<void***>(edi27) != *reinterpret_cast<void***>(&eax28));
    ebp30 = ebp26 + 1;
    v31 = reinterpret_cast<void*>(~ecx29 + 0xffffffff);
    eax32 = fun_40acf0(reinterpret_cast<uint32_t>(ebx20) - reinterpret_cast<uint32_t>(esi17));
    v33 = eax32;
    if (*ebp30 != 41) {
        do {
            if (reinterpret_cast<int1_t>(*ebp30 == 94)) {
                ++ebp30;
            }
            ++ebp30;
            *reinterpret_cast<void***>(eax32) = *ebp30;
            ++eax32;
        } while (!reinterpret_cast<int1_t>(*ebp30 == 41));
    }
    *reinterpret_cast<void***>(eax32) = reinterpret_cast<void**>(0);
    ebp34 = a5;
    *a2 = ebx20 + 1;
    if (*reinterpret_cast<void***>(ebp34)) {
        esi35 = a3;
        edi36 = a4;
        do {
            if (*reinterpret_cast<void***>(v25) != *reinterpret_cast<void***>(ebp34) || (eax37 = reinterpret_cast<int32_t>(_mbsnbcmp(ebp34, v25, v31)), !!eax37)) {
                if (*edi36 == *esi35) {
                    fun_40bb00(a1, esi35, edi36, a6, a7);
                }
                ++ebp34;
                **esi35 = *reinterpret_cast<void***>(ebp34);
                *esi35 = *esi35 + 1;
            } else {
                ebx38 = v33;
                if (*reinterpret_cast<void***>(ebx38)) {
                    do {
                        if (*edi36 == *esi35) {
                            fun_40bb00(a1, esi35, edi36, a6, a7);
                        }
                        ++ebx38;
                        **esi35 = *reinterpret_cast<void***>(ebx38);
                        *esi35 = *esi35 + 1;
                    } while (*reinterpret_cast<void***>(ebx38));
                }
                ebp34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp34) + reinterpret_cast<uint32_t>(v31));
            }
        } while (*reinterpret_cast<void***>(ebp34));
    }
    esi39 = free;
    esi39(v25);
    esi39(v33);
    return;
}

void** fun_40c7d0(void** a1, signed char* a2) {
    signed char* edi3;
    int32_t eax4;
    int32_t ecx5;
    int32_t eax6;
    void** eax7;

    edi3 = a2;
    eax4 = reinterpret_cast<int32_t>(_splitpath(a1, edi3, 0, 0, 0));
    ecx5 = -1;
    eax6 = eax4 - eax4;
    do {
        if (!ecx5) 
            break;
        --ecx5;
        ++edi3;
    } while (*edi3 != *reinterpret_cast<signed char*>(&eax6));
    eax7 = reinterpret_cast<void**>(1);
    if (!(~ecx5 - 1)) {
        eax7 = reinterpret_cast<void**>(0);
    }
    return eax7;
}

void** fun_40c890(void** a1, signed char* a2) {
    signed char* edi3;
    int32_t eax4;
    int32_t ecx5;
    int32_t eax6;
    void** eax7;

    edi3 = a2;
    eax4 = reinterpret_cast<int32_t>(_splitpath(a1, 0, edi3, 0, 0));
    ecx5 = -1;
    eax6 = eax4 - eax4;
    do {
        if (!ecx5) 
            break;
        --ecx5;
        ++edi3;
    } while (*edi3 != *reinterpret_cast<signed char*>(&eax6));
    eax7 = reinterpret_cast<void**>(1);
    if (!(~ecx5 - 1)) {
        eax7 = reinterpret_cast<void**>(0);
    }
    return eax7;
}

void** fun_40c850(void** a1, signed char* a2) {
    signed char* edi3;
    int32_t eax4;
    int32_t ecx5;
    int32_t eax6;
    void** eax7;

    edi3 = a2;
    eax4 = reinterpret_cast<int32_t>(_splitpath(a1, 0, 0, edi3, 0));
    ecx5 = -1;
    eax6 = eax4 - eax4;
    do {
        if (!ecx5) 
            break;
        --ecx5;
        ++edi3;
    } while (*edi3 != *reinterpret_cast<signed char*>(&eax6));
    eax7 = reinterpret_cast<void**>(1);
    if (!(~ecx5 - 1)) {
        eax7 = reinterpret_cast<void**>(0);
    }
    return eax7;
}

int32_t fun_40c810(void** a1, signed char* a2) {
    signed char* edi3;
    int32_t eax4;
    int32_t ecx5;
    int32_t eax6;
    int32_t eax7;

    edi3 = a2;
    eax4 = reinterpret_cast<int32_t>(_splitpath(a1, 0, 0, 0, edi3));
    ecx5 = -1;
    eax6 = eax4 - eax4;
    do {
        if (!ecx5) 
            break;
        --ecx5;
        ++edi3;
    } while (*edi3 != *reinterpret_cast<signed char*>(&eax6));
    eax7 = 1;
    if (!(~ecx5 - 1)) {
        eax7 = 0;
    }
    return eax7;
}

void fun_40c75c();

void** fun_40c510(void** a1, void* a2, void** a3, void** a4) {
    void** v5;
    void** ebx6;
    void** v7;
    void** esi8;
    void** ebx9;
    void** v10;
    void** edi11;
    void** esi12;
    void*** esp13;
    void** v14;
    void** ebp15;
    void** ebp16;
    void** al17;
    int32_t eax18;
    void** ecx19;
    void** ebx20;
    void** ecx21;
    int32_t edi22;
    int32_t v23;
    int32_t v24;
    int32_t v25;
    int32_t edx26;
    void** eax27;
    int32_t ecx28;
    void* eax29;
    int32_t ecx30;
    void* eax31;
    int32_t ecx32;
    void* eax33;
    signed char v34;
    void** eax35;

    v5 = ebx6;
    v7 = esi8;
    ebx9 = a1;
    v10 = edi11;
    esi12 = a3;
    esp13 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x10c - 4 - 4 - 4 - 4);
    v14 = ebp15;
    ebp16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx9) + reinterpret_cast<uint32_t>(a2));
    al17 = *reinterpret_cast<void***>(esi12);
    if (al17) {
        while (reinterpret_cast<unsigned char>(ebp16) > reinterpret_cast<unsigned char>(ebx9)) {
            if (al17 != 37) {
                *reinterpret_cast<void***>(ebx9) = al17;
                ++ebx9;
                goto addr_40c71a_5;
            }
            eax18 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi12 + 1));
            ++esi12;
            if (eax18 == 37) {
                *reinterpret_cast<void***>(ebx9) = reinterpret_cast<void**>(37);
                ++ebx9;
                goto addr_40c71a_5;
            }
            if (eax18 == 0x73) {
                ecx19 = a4;
                if (!*reinterpret_cast<void***>(ecx19)) {
                    addr_40c71a_5:
                    al17 = *reinterpret_cast<void***>(esi12 + 1);
                    ++esi12;
                    if (al17) 
                        continue; else 
                        goto addr_40c726_10;
                } else {
                    do {
                        if (reinterpret_cast<unsigned char>(ebp16) <= reinterpret_cast<unsigned char>(ebx9)) 
                            goto addr_40c71a_5;
                        ++ecx19;
                        *reinterpret_cast<void***>(ebx9) = *reinterpret_cast<void***>(ecx19);
                        ++ebx9;
                    } while (*reinterpret_cast<void***>(ecx19));
                }
                goto addr_40c71a_5;
            }
            if (eax18 != 0x7c) {
                *reinterpret_cast<void***>(ebx9) = reinterpret_cast<void**>(37);
                ebx20 = ebx9 + 1;
                if (ebp16 == ebx20) 
                    break;
                *reinterpret_cast<void***>(ebx20) = *reinterpret_cast<void***>(esi12);
                ebx9 = ebx20 + 1;
                goto addr_40c71a_5;
            }
            ecx21 = esi12 + 0xffffffff;
            edi22 = 0;
            v23 = 0;
            v24 = 0;
            v25 = 0;
            edx26 = 0;
            do {
                ++esi12;
                eax27 = *reinterpret_cast<void***>(esi12 + 1) - 70;
                if (reinterpret_cast<unsigned char>(eax27) > reinterpret_cast<unsigned char>(42)) 
                    goto addr_40c5ea_19;
                *reinterpret_cast<signed char*>(&eax27) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax27) + reinterpret_cast<uint32_t>(fun_40c75c));
                eax27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax27) & 0xff);
                switch (eax27) {
                case 0:
                    if (*reinterpret_cast<signed char*>(esi12 + 0xffffffff) == 0x7c) {
                        edi22 = 1;
                        v25 = 1;
                        v24 = 1;
                        v23 = 1;
                        break;
                    }
                case 1:
                    edi22 = 1;
                    break;
                case 2:
                    v23 = 1;
                    break;
                case 3:
                    v24 = 1;
                    break;
                case 4:
                    v25 = 1;
                    break;
                    addr_40c5ea_19:
                case 5:
                    edx26 = 1;
                }
                if (edx26) 
                    break;
            } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi12) == 70));
            goto addr_40c636_29;
            if (reinterpret_cast<unsigned char>(ecx21) > reinterpret_cast<unsigned char>(esi12)) 
                goto addr_40c71a_5;
            do {
                if (reinterpret_cast<unsigned char>(ebp16) <= reinterpret_cast<unsigned char>(ebx9)) 
                    goto addr_40c71a_5;
                ++ecx21;
                *reinterpret_cast<void***>(ebx9) = *reinterpret_cast<void***>(ecx21);
                ++ebx9;
            } while (reinterpret_cast<unsigned char>(ecx21) <= reinterpret_cast<unsigned char>(esi12));
            goto addr_40c71a_5;
            addr_40c636_29:
            if (!edx26) {
                if (!a4) {
                    eax27 = fun_403220(0, 0x449, v14, v10, v7, v5);
                    esp13 = esp13 - 4 - 4 - 4 + 4 + 8;
                }
                if (edi22) {
                    eax27 = fun_40c7d0(a4, esp13 + 28);
                    esp13 = esp13 - 4 - 4 - 4 + 8 + 4;
                }
                if (v25) {
                    ecx28 = -1;
                    eax29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax27) - reinterpret_cast<unsigned char>(eax27));
                    do {
                        if (!ecx28) 
                            break;
                        --ecx28;
                        ++esi12;
                    } while (*reinterpret_cast<signed char*>(&eax29));
                    eax27 = fun_40c890(a4, reinterpret_cast<int32_t>(esp13) + ~ecx28 + 27);
                    esp13 = esp13 - 4 - 4 - 4 + 8 + 4;
                }
                if (v24) {
                    ecx30 = -1;
                    eax31 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax27) - reinterpret_cast<unsigned char>(eax27));
                    do {
                        if (!ecx30) 
                            break;
                        --ecx30;
                        ++esi12;
                    } while (*reinterpret_cast<signed char*>(&eax31));
                    eax27 = fun_40c850(a4, reinterpret_cast<int32_t>(esp13) + ~ecx30 + 27);
                    esp13 = esp13 - 4 - 4 - 4 + 8 + 4;
                }
                if (v23) {
                    ecx32 = -1;
                    eax33 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax27) - reinterpret_cast<unsigned char>(eax27));
                    do {
                        if (!ecx32) 
                            break;
                        --ecx32;
                        ++esi12;
                    } while (*reinterpret_cast<signed char*>(&eax33));
                    fun_40c810(a4, reinterpret_cast<int32_t>(esp13) + ~ecx32 + 27);
                    esp13 = esp13 - 4 - 4 - 4 + 8 + 4;
                }
                if (!1) {
                    do {
                        if (reinterpret_cast<unsigned char>(ebp16) <= reinterpret_cast<unsigned char>(ebx9)) 
                            goto addr_40c71a_5;
                        *reinterpret_cast<void***>(ebx9) = reinterpret_cast<void**>(0);
                        ++ebx9;
                    } while (v34);
                    goto addr_40c71a_5;
                }
            }
        }
        goto addr_40c731_56;
    }
    addr_40c726_10:
    if (reinterpret_cast<unsigned char>(ebp16) <= reinterpret_cast<unsigned char>(ebx9)) {
        addr_40c731_56:
        eax35 = reinterpret_cast<void**>(1);
    } else {
        eax35 = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(ebx9) = reinterpret_cast<void**>(0);
    }
    return eax35;
}

uint32_t fun_40cae0(signed char* a1, uint32_t a2) {
    signed char* edi3;
    signed char* ebx4;
    uint32_t eax5;
    int32_t esi6;
    uint32_t ebp7;
    uint32_t eax8;
    int32_t ecx9;

    edi3 = a1;
    ebx4 = edi3;
    if (!*edi3) {
        addr_40cb27_2:
        return eax5;
    } else {
        esi6 = __p__mbctype;
        ebp7 = a2;
        do {
            eax8 = reinterpret_cast<uint32_t>(esi6());
            ecx9 = 0;
            *reinterpret_cast<signed char*>(&ecx9) = *ebx4;
            *reinterpret_cast<unsigned char*>(&eax8) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx9 + eax8 + 1) & 4);
            eax5 = eax8 - (eax8 + reinterpret_cast<uint1_t>(eax8 < eax8 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax8) < 1))) + 2;
            if (reinterpret_cast<uint32_t>(ebx4) - reinterpret_cast<uint32_t>(edi3) + eax5 > ebp7) 
                break;
            ebx4 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx4) + eax5);
        } while (*ebx4);
        goto addr_40cb1d_6;
    }
    *ebx4 = 0;
    goto addr_40cb27_2;
    addr_40cb1d_6:
    return eax5;
}

uint32_t g413ed8 = 8;

uint32_t g413ed4 = 4;

uint32_t fun_40cc50(void** a1) {
    void* esp2;
    void* esp3;
    void* esp4;
    int32_t esi5;
    void** esp6;
    void** ebx7;
    int32_t eax8;
    void* esp9;
    int32_t ecx10;
    int32_t eax11;
    signed char v12;
    uint32_t eax13;
    uint32_t* esp14;
    int32_t ecx15;
    uint32_t eax16;
    signed char v17;
    uint32_t eax18;
    uint32_t* esp19;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x304);
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4);
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 - 4);
    esi5 = 0;
    esp6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp4) - 4);
    ebx7 = a1;
    eax8 = reinterpret_cast<int32_t>(_splitpath(ebx7, esp6 + 4, reinterpret_cast<int32_t>(esp4) + 0x210, reinterpret_cast<int32_t>(esp3) + 8, reinterpret_cast<int32_t>(esp2) + 0x104));
    esp9 = reinterpret_cast<void*>(esp6 - 1 - 1 - 1 - 1 - 1 + 1 + 5);
    ecx10 = -1;
    eax11 = eax8 - eax8;
    do {
        if (!ecx10) 
            break;
        --ecx10;
        ++esi5;
    } while (v12 != *reinterpret_cast<signed char*>(&eax11));
    eax13 = g413ed8;
    if (reinterpret_cast<uint32_t>(~ecx10 - 1) > eax13) {
        esp14 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(esp9) - 4);
        esi5 = 1;
        eax13 = fun_40cae0(esp14 + 5, eax13);
        esp9 = reinterpret_cast<void*>(esp14 - 1 - 1 + 2 + 1);
    }
    ecx15 = -1;
    eax16 = eax13 - eax13;
    do {
        if (!ecx15) 
            break;
        --ecx15;
        ++esi5;
    } while (v17 != *reinterpret_cast<signed char*>(&eax16));
    eax18 = g413ed4;
    if (reinterpret_cast<uint32_t>(~ecx15 - 1) > eax18) {
        esp19 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(esp9) - 4);
        esi5 = 1;
        eax18 = fun_40cae0(esp19 + 69, eax18);
        esp9 = reinterpret_cast<void*>(esp19 - 1 - 1 + 2 + 1);
    }
    if (esi5) {
        eax18 = reinterpret_cast<uint32_t>(_makepath(ebx7, reinterpret_cast<int32_t>(esp9) - 4 + 16, reinterpret_cast<int32_t>(esp9) + 0x210, reinterpret_cast<int32_t>(esp9) + 16, reinterpret_cast<int32_t>(esp9) + 0x110));
    }
    return eax18;
}

void fun_401bc0(void** a1) {
    void** eax2;

    eax2 = fun_40acf0(20);
    *reinterpret_cast<void***>(eax2 + 8) = *reinterpret_cast<void***>(a1 + 4);
    fun_40ae10(0x413a34, eax2);
    if (*reinterpret_cast<void***>(eax2)) {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax2) + 4) = eax2;
    }
    return;
}

void** fun_401ed0(void** a1);

void fun_401bf0(void** a1, int32_t a2, void*** a3) {
    void** eax4;
    void** v5;
    void** eax6;
    void** edi7;
    void** eax8;
    void** eax9;
    void** eax10;
    void** cl11;
    uint32_t eax12;
    unsigned char al13;
    void** eax14;
    void** edi15;
    void** esi16;
    void** ebx17;

    if (!*a3) {
        eax4 = fun_40acf0(24);
        *a3 = eax4;
    }
    if (!a2) {
        v5 = *a3;
        eax6 = fun_401ed0(v5);
        edi7 = eax6;
    } else {
        eax8 = fun_40acf0(8);
        edi7 = eax8;
        *reinterpret_cast<void***>(edi7 + 4) = *a3;
    }
    eax9 = fun_40aec0(a1, 0x80, 0x413828, 1);
    if (!eax9) {
        *reinterpret_cast<void***>(edi7) = reinterpret_cast<void**>(0);
        eax10 = fun_40acf0(20);
        *reinterpret_cast<void***>(eax10 + 4) = a1;
        *reinterpret_cast<void***>(eax10 + 16) = edi7;
        cl11 = g413a44;
        *reinterpret_cast<void***>(eax10 + 8) = cl11;
        eax12 = fun_40ae50(a1, 0x80, 1, eax10);
        fun_40ae10(eax12 * 4 + 0x413828, eax10);
        return;
    } else {
        al13 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax9 + 8)) ^ reinterpret_cast<unsigned char>(g413a44));
        if (al13 & 32) {
            eax14 = g413424;
            fun_403220(eax14, 0x43f, edi15, esi16, ebx17, __return_address());
        }
        fun_40ae30(eax9 + 16, edi7);
        free(a1);
        return;
    }
}

void** fun_4019f0(void** ecx, void** a2, void** a3, unsigned char a4) {
    int32_t v5;
    int32_t v6;
    int1_t zf7;
    void** ebx8;
    void** ebp9;
    int1_t zf10;
    int32_t eax11;
    void** eax12;
    int1_t zf13;
    void** eax14;
    int32_t eax15;
    void** eax16;
    void** ebp17;
    void** edi18;
    void** esi19;
    void** ebx20;
    void** eax21;
    int32_t eax22;
    void** eax23;
    void** eax24;
    void** esi25;
    int1_t zf26;
    void** eax27;
    void** eax28;
    void** al29;
    int32_t eax30;
    int32_t eax31;

    v5 = 0;
    v6 = 1;
    if (!(a4 & 2)) {
        zf7 = g4133b4 == 0;
        if (zf7) {
            ebx8 = a2;
            ebp9 = a3;
        } else {
            zf10 = (g4133d4 & 4) == 0;
            ebx8 = a2;
            if (!zf10) {
                ebp9 = a3;
            } else {
                eax11 = reinterpret_cast<int32_t>(getenv(ebx8));
                if (!eax11) {
                    ebp9 = a3;
                } else {
                    eax12 = fun_407b70(ebx8);
                    if (!eax12 || !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax12 + 12)) & 2) && ((zf13 = (g4133d4 & 4) == 0, zf13) || !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax12 + 12)) & 4))) {
                        ebp9 = a3;
                        eax14 = fun_40b690(ecx, ebp9);
                        eax15 = fun_401e00(ebx8, eax14);
                        if (eax15 == -1) {
                            eax16 = g413424;
                            fun_403220(eax16, 0x41f, ebp17, edi18, esi19, ebx20);
                        }
                    } else {
                        return 0;
                    }
                }
            }
        }
    } else {
        ebp9 = a3;
        if (!*reinterpret_cast<void***>(ebp9)) {
            ebx8 = a2;
        } else {
            eax21 = fun_40b690(ecx, ebp9);
            ebx8 = a2;
            eax22 = fun_401e00(ebx8, eax21);
            if (eax22 == -1) {
                eax23 = g413424;
                fun_403220(eax23, 0x41f, ebp17, edi18, esi19, ebx20);
            }
        }
    }
    g4133b4 = 0;
    eax24 = fun_407b70(ebx8);
    esi25 = eax24;
    if (!esi25 || !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi25 + 12)) & 2) && ((zf26 = (g4133d4 & 4) == 0, zf26) || !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi25 + 12)) & 4))) {
        eax27 = fun_40ad20(ebp17, edi18, esi19);
        *reinterpret_cast<void***>(eax27 + 4) = ebp9;
        if (esi25) {
            v5 = 1;
        } else {
            eax28 = fun_40acf0(16);
            *reinterpret_cast<void***>(eax28 + 4) = ebx8;
            esi25 = eax28;
        }
        al29 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi25 + 12)) & 0xef);
        ecx = reinterpret_cast<void**>(a4 | reinterpret_cast<unsigned char>(al29));
        *reinterpret_cast<void***>(esi25 + 12) = al29;
        *reinterpret_cast<void***>(esi25 + 12) = ecx;
        fun_40ae10(esi25 + 8, eax27);
        if (!v5) {
            fun_407bf0(esi25);
        }
        eax30 = reinterpret_cast<int32_t>(_mbschr(ebp9, 36));
        if (eax30) {
            *reinterpret_cast<void***>(esi25 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi25 + 12)) | 1);
            *reinterpret_cast<unsigned char*>(&eax30) = a4;
            eax31 = fun_40b110(ecx, ebp9, 0, 0, ebx8, 1, 0, eax30);
            *reinterpret_cast<void***>(esi25 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi25 + 12)) & 0xfe);
            v6 = eax31;
        }
        if (v6) {
            return 1;
        } else {
            *reinterpret_cast<void***>(esi25 + 8) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(esi25 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi25 + 12)) & 16);
            return 0;
        }
    } else {
        return 0;
    }
}

void** fun_401ed0(void** a1) {
    void** eax2;
    void** eax3;

    eax2 = fun_40acf0(8);
    eax3 = fun_40acf0(24);
    *reinterpret_cast<void***>(eax3) = *reinterpret_cast<void***>(a1);
    *reinterpret_cast<void***>(eax3 + 4) = *reinterpret_cast<void***>(a1 + 4);
    *reinterpret_cast<void***>(eax3 + 8) = *reinterpret_cast<void***>(a1 + 8);
    *reinterpret_cast<void***>(eax3 + 12) = *reinterpret_cast<void***>(a1 + 12);
    *reinterpret_cast<void***>(eax3 + 16) = *reinterpret_cast<void***>(a1 + 16);
    *reinterpret_cast<void***>(eax3 + 20) = *reinterpret_cast<void***>(a1 + 20);
    *reinterpret_cast<void***>(eax2 + 4) = eax3;
    return eax2;
}

void** fun_402870(void** a1, void** a2, void** a3, void** a4) {
    void** eax5;
    void** v6;
    void** edi7;
    void** v8;
    void** ebp9;
    void** eax10;
    void* esp11;
    void** v12;
    void** edx13;
    void** v14;
    void** ecx15;
    void** eax16;
    void** v17;
    void** eax18;
    void* esp19;
    void** v20;
    void**** esp21;
    int32_t eax22;
    void* esp23;
    void** esi24;
    void** v25;
    void** v26;
    void** eax27;
    void** ebp28;
    int32_t eax29;
    void* esp30;
    void** eax31;
    void* esp32;
    int32_t eax33;
    void** eax34;
    void** eax35;
    void** eax36;
    void* esp37;
    int1_t zf38;
    int32_t eax39;
    void** eax40;
    void*** esp41;
    void** v42;
    int1_t zf43;
    void* esp44;
    int32_t eax45;
    int32_t v46;
    int32_t eax47;
    int32_t eax48;
    void** eax49;
    int32_t eax50;
    void** v51;
    void** eax52;
    void** eax53;

    eax5 = g413ee0;
    v6 = edi7;
    v8 = ebp9;
    eax10 = fun_40acf0(eax5);
    esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 40 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 4);
    v12 = eax10;
    edx13 = *reinterpret_cast<void***>(a1);
    v14 = edx13;
    if (edx13) {
        do {
            ecx15 = *reinterpret_cast<void***>(v14 + 4);
            eax16 = ecx15;
            if (!*reinterpret_cast<void***>(ecx15)) {
                addr_4028ee_3:
                v17 = ecx15;
            } else {
                do {
                    if (*reinterpret_cast<void***>(eax16) == 36) 
                        break;
                    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax16) == 94)) {
                        ++eax16;
                    }
                    ++eax16;
                } while (*reinterpret_cast<void***>(eax16));
                if (!*reinterpret_cast<void***>(eax16)) 
                    goto addr_4028ee_3; else 
                    goto addr_4028cd_9;
            }
            addr_4028f2_10:
            eax18 = fun_40add0(v17, v8, v6, v17, v8, v6);
            esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) - 4 - 4 + 4 + 4);
            v20 = eax18;
            esp21 = reinterpret_cast<void****>(reinterpret_cast<int32_t>(esp19) - 4);
            eax22 = fun_402b20(esp21 + 10, reinterpret_cast<int32_t>(esp19) + 28);
            esp23 = reinterpret_cast<void*>(esp21 - 1 - 1 + 2 + 1);
            if (eax22) {
                do {
                    esi24 = v25;
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v25) == 0x7b)) {
                        v25 = reinterpret_cast<void**>(0);
                    } else {
                        if (*reinterpret_cast<void***>(v25)) {
                            do {
                                if (*reinterpret_cast<void***>(esi24) == 0x7d) 
                                    break;
                                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi24) == 94)) {
                                    ++esi24;
                                }
                                ++esi24;
                            } while (*reinterpret_cast<void***>(esi24));
                        }
                        if (*reinterpret_cast<void***>(esi24)) {
                            *reinterpret_cast<void***>(esi24) = reinterpret_cast<void**>(0);
                            ++esi24;
                            ++v25;
                        }
                    }
                    v26 = reinterpret_cast<void**>(0);
                    fun_404cc0(reinterpret_cast<int32_t>(esp23) + 16, 0);
                    eax27 = fun_40add0(esi24, v8, v6, esi24, v8, v6);
                    ebp28 = eax27;
                    eax29 = reinterpret_cast<int32_t>(_mbspbrk(esi24, "*?"));
                    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 + 8 + 4 - 4 - 4 + 4 + 4 - 4 - 4 - 4 + 4 + 8);
                    if ((eax29 || v25) && (eax31 = fun_405930(v25, esi24, v12, reinterpret_cast<int32_t>(esp30) + 20), esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 - 4 - 4 + 16 + 4), !!eax31)) {
                        esi24 = eax31;
                        v26 = reinterpret_cast<void**>(1);
                        free(ebp28);
                        esp32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 + 4);
                        eax33 = fun_404c90(reinterpret_cast<int32_t>(esp32) + 20);
                        eax34 = fun_40c340(eax31, eax33);
                        esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp32) + 4 - 4 - 4 + 4 + 4 - 4 - 4 - 4 + 8 + 4);
                        ebp28 = eax34;
                    }
                    do {
                        eax35 = fun_40acf0(12);
                        eax36 = fun_40add0(ebp28, v8, v6, ebp28, v8, v6);
                        esp37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 + 4 + 4 - 4 - 4 + 4 + 4);
                        *reinterpret_cast<void***>(eax35 + 4) = eax36;
                        zf38 = g4133a8 == 0;
                        if (zf38 || (eax39 = fun_40cd20(ebp28, reinterpret_cast<int32_t>(esp37) + 16, reinterpret_cast<int32_t>(esp37) + 20, v8, v6), esp37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp37) - 4 - 4 - 4 - 4 + 12 + 4), !!eax39)) {
                            eax40 = fun_404ca0(reinterpret_cast<int32_t>(esp37) + 16, v8, v6);
                            esp37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp37) - 4 - 4 + 4 + 4);
                            *reinterpret_cast<void***>(eax35 + 8) = eax40;
                        } else {
                            *reinterpret_cast<void***>(eax35 + 8) = reinterpret_cast<void**>(0);
                        }
                        esp41 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp37) - 4 - 4);
                        v42 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp37) + 24);
                        zf43 = g4133a8 == 0;
                        if (zf43) {
                            fun_40ae30(v42, eax35, v42, eax35);
                            esp44 = reinterpret_cast<void*>(esp41 - 4 + 8 + 4);
                        } else {
                            fun_402ae0(v42, eax35);
                            esp44 = reinterpret_cast<void*>(esp41 - 4 + 8 + 4);
                        }
                        free(ebp28);
                        esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp44) - 4 - 4 + 4 + 4);
                    } while (v26 && ((eax45 = reinterpret_cast<int32_t>(_mbspbrk(esi24, "*?")), esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 + 4 + 8), !!eax45) && ((eax47 = fun_40ce00(reinterpret_cast<int32_t>(esp30) + 16, v46), esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 + 8 + 4), !!eax47) && (eax48 = fun_404c90(reinterpret_cast<int32_t>(esp30) + 16), eax49 = fun_40c340(esi24, eax48), esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 + 4 + 4 - 4 - 4 - 4 + 8 + 4), ebp28 = eax49, !!ebp28))));
                    eax50 = fun_402b20(reinterpret_cast<int32_t>(esp30) + 36, reinterpret_cast<int32_t>(esp30) + 28);
                    esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 + 8 + 4);
                } while (eax50);
            }
            if (*reinterpret_cast<void***>(v14 + 4) != v17) {
                free(v17);
                esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 + 4 + 4);
                continue;
            }
            addr_4028cd_9:
            g413a84 = a2;
            v51 = *reinterpret_cast<void***>(v14 + 4);
            eax52 = fun_40b700(v51, reinterpret_cast<int32_t>(esp11) + 52);
            esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) - 4 - 4 - 4 + 8 + 4);
            v17 = eax52;
            goto addr_4028f2_10;
            free(v20);
            esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 + 4 + 4);
            eax53 = *reinterpret_cast<void***>(v14);
            v14 = eax53;
        } while (eax53);
    }
    free(v12);
    return 0;
}

int32_t time = 0x1568e;

void fun_40cea0(void* a1, void** a2, void** a3) {
    time(a1);
    return;
}

void** fun_402f60(void** a1, uint32_t* a2, void*** a3) {
    void** v4;
    void** ebx5;
    void** v6;
    void** esi7;
    void** v8;
    void** edi9;
    void** ebx10;
    void** esi11;
    void** v12;
    void** ebp13;
    void** eax14;
    void* esp15;
    void** eax16;
    void** eax17;
    void** v18;
    void** edi19;
    int1_t zf20;
    void** edi21;
    int32_t ecx22;
    void** eax23;
    void** ebp24;
    void* v25;
    void** eax26;
    void** eax27;
    void** edi28;
    int32_t ecx29;
    void* eax30;
    void** ecx31;
    uint32_t ecx32;
    void** edi33;
    uint32_t ecx34;
    uint32_t v35;

    v4 = ebx5;
    v6 = esi7;
    v8 = edi9;
    ebx10 = reinterpret_cast<void**>(0);
    esi11 = a1;
    v12 = ebp13;
    eax14 = reinterpret_cast<void**>(_mbschr(esi11, 34));
    esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 8);
    if (!eax14) {
        eax16 = fun_403120(esi11, a2, a3);
        return eax16;
    }
    if (esi11 == eax14 || (eax17 = eax14, *reinterpret_cast<signed char*>(eax17 + 0xffffffff) != 61)) {
        *reinterpret_cast<void***>(eax14) = reinterpret_cast<void**>(0);
        v18 = eax14 + 1;
        eax17 = fun_403120(esi11, a2, a3);
        esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp15) - 4 - 4 - 4 - 4 + 12 + 4);
    } else {
        *reinterpret_cast<void***>(eax17) = reinterpret_cast<void**>(32);
        edi19 = eax14 - 1;
        zf20 = esi11 == edi19;
        if (reinterpret_cast<unsigned char>(esi11) < reinterpret_cast<unsigned char>(edi19)) {
            do {
                eax17 = *reinterpret_cast<void***>(edi19);
                if (eax17 == 32) 
                    break;
            } while (eax17 != 9 && (eax17 != 10 && (--edi19, reinterpret_cast<unsigned char>(esi11) < reinterpret_cast<unsigned char>(edi19))));
            zf20 = esi11 == edi19;
        }
        if (!zf20) {
            *reinterpret_cast<void***>(edi19) = reinterpret_cast<void**>(0);
            ++edi19;
            eax17 = fun_403120(esi11, a2, a3);
            esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp15) - 4 - 4 - 4 - 4 + 12 + 4);
        }
        v18 = edi19;
    }
    edi21 = v18;
    ecx22 = -1;
    eax23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax17) - reinterpret_cast<unsigned char>(eax17));
    ebp24 = v18;
    do {
        if (!ecx22) 
            break;
        --ecx22;
        ++edi21;
    } while (*reinterpret_cast<void***>(edi21) != *reinterpret_cast<void***>(&eax23));
    v25 = reinterpret_cast<void*>(~ecx22 - 1);
    if (*reinterpret_cast<void***>(ebp24)) 
        goto addr_403028_16;
    addr_4030e1_17:
    eax26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v25) + reinterpret_cast<unsigned char>(v18));
    if (eax26 == ebp24) {
        eax26 = fun_403220(0, 0x3ee, v12, v8, v6, v4);
    }
    if (ebx10) {
        eax26 = reinterpret_cast<void**>(free(v18));
    }
    return eax26;
    do {
        addr_403028_16:
        *reinterpret_cast<void***>(&eax23) = *reinterpret_cast<void***>(ebp24);
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax23) == 34)) {
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax23) == 92) && ((*reinterpret_cast<signed char*>(ebp24 + 0xffffffff) == 32 || *reinterpret_cast<signed char*>(ebp24 + 0xffffffff) == 9) && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebp24 + 1) == 10))) {
                *reinterpret_cast<void***>(ebp24) = reinterpret_cast<void**>(0);
                v25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v25) - 2);
                if (!ebx10) {
                    ebx10 = reinterpret_cast<void**>(1);
                    eax27 = fun_40add0(v18, v12, v8);
                    esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp15) - 4 - 4 + 4 + 4);
                    v18 = eax27;
                }
                eax23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp15) + 20);
                fun_402e60(reinterpret_cast<int32_t>(esp15) + 16, eax23);
                esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp15) - 4 - 4 - 4 + 8 + 4);
                ebp24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v25) + reinterpret_cast<unsigned char>(v18));
            }
        } else {
            edi28 = ebp24 + 1;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi28) == 34)) 
                goto addr_4030b1_27;
            ecx29 = -1;
            eax30 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax23) - reinterpret_cast<uint32_t>(eax23));
            do {
                if (!ecx29) 
                    break;
                --ecx29;
                ++edi28;
            } while (*reinterpret_cast<void***>(edi28) != *reinterpret_cast<void***>(&eax30));
            ecx31 = reinterpret_cast<void**>(~ecx29);
            eax23 = ecx31;
            ecx32 = reinterpret_cast<uint32_t>(ecx31) >> 2;
            esi11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi28) - reinterpret_cast<uint32_t>(ecx31));
            edi33 = ebp24;
            while (ecx32) {
                --ecx32;
                *reinterpret_cast<void***>(edi33) = *reinterpret_cast<void***>(esi11);
                edi33 = edi33 + 4;
                esi11 = esi11 + 4;
            }
            ecx34 = reinterpret_cast<uint32_t>(eax23) & 3;
            while (ecx34) {
                --ecx34;
                *reinterpret_cast<void***>(edi33) = *reinterpret_cast<void***>(esi11);
                ++edi33;
                ++esi11;
            }
        }
        ++ebp24;
    } while (*reinterpret_cast<void***>(ebp24));
    goto addr_4030e1_17;
    addr_4030b1_27:
    *reinterpret_cast<void***>(ebp24) = reinterpret_cast<void**>(0);
    ++ebp24;
    v35 = *a2;
    fun_4031b0(v18, v35, a3);
    *a2 = *a2 + 1;
    fun_402f60(ebp24 + 1, a2, a3);
    goto addr_4030e1_17;
}

void fun_402e60(void*** a1, void** a2) {
    void** v3;
    void** ebx4;
    void** v5;
    void** esi6;
    void*** ebx7;
    void** v8;
    void** edi9;
    void** v10;
    void** ebp11;
    void** ebp12;
    void** eax13;
    int32_t eax14;
    signed char* edi15;
    int32_t ecx16;
    int32_t eax17;
    int32_t ecx18;
    void* edx19;
    signed char* edi20;
    int32_t ecx21;
    int32_t eax22;
    void* v23;
    void* eax24;
    void** v25;
    void** eax26;
    void** eax27;
    signed char* edi28;
    int32_t ecx29;
    void* eax30;
    uint32_t ecx31;
    uint32_t eax32;
    uint32_t ecx33;
    signed char* esi34;
    signed char* edi35;
    uint32_t ecx36;

    v3 = ebx4;
    v5 = esi6;
    ebx7 = a1;
    v8 = edi9;
    v10 = ebp11;
    ebp12 = a2;
    if (*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(*ebp12) + reinterpret_cast<unsigned char>(*ebx7) - 1) != 10) {
        do {
            eax13 = g4133d8;
            eax14 = reinterpret_cast<int32_t>(fgets(0x413aa0, 0x400, eax13));
            if (!eax14) 
                break;
            edi15 = reinterpret_cast<signed char*>(0x413aa0);
            ecx16 = -1;
            eax17 = eax14 - eax14;
            do {
                if (!ecx16) 
                    break;
                --ecx16;
                ++edi15;
            } while (*edi15 != *reinterpret_cast<signed char*>(&eax17));
            ecx18 = ~ecx16 - 1;
            if (*reinterpret_cast<signed char*>(ecx18 + 0x413a9e) == 92 && *reinterpret_cast<signed char*>(ecx18 + 0x413a9f) == 10) {
                *reinterpret_cast<signed char*>(ecx18 + 0x413a9f) = 0;
                *reinterpret_cast<signed char*>(ecx18 + 0x413a9e) = 32;
            }
            edx19 = *ebp12;
            edi20 = reinterpret_cast<signed char*>(0x413aa0);
            ecx21 = -1;
            eax22 = eax17 - eax17;
            v23 = edx19;
            do {
                if (!ecx21) 
                    break;
                --ecx21;
                ++edi20;
            } while (*edi20 != *reinterpret_cast<signed char*>(&eax22));
            eax24 = reinterpret_cast<void*>(~ecx21 + reinterpret_cast<uint32_t>(edx19) - 1);
            *ebp12 = eax24;
            v25 = *ebx7;
            eax26 = reinterpret_cast<void**>(realloc(v25, reinterpret_cast<uint32_t>(eax24) + 1));
            *ebx7 = eax26;
            if (!eax26) {
                eax27 = g4133f4;
                eax26 = fun_403220(eax27, 0x419, v10, v8, v5, v3);
            }
            edi28 = reinterpret_cast<signed char*>(0x413aa0);
            ecx29 = -1;
            eax30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26) - reinterpret_cast<unsigned char>(eax26));
            do {
                if (!ecx29) 
                    break;
                --ecx29;
                ++edi28;
            } while (*edi28 != *reinterpret_cast<signed char*>(&eax30));
            ecx31 = reinterpret_cast<uint32_t>(~ecx29);
            eax32 = ecx31;
            ecx33 = ecx31 >> 2;
            esi34 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi28) - ecx31);
            edi35 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*ebx7) + reinterpret_cast<uint32_t>(v23));
            while (ecx33) {
                --ecx33;
                *edi35 = *esi34;
                edi35 = edi35 + 4;
                esi34 = esi34 + 4;
            }
            ecx36 = eax32 & 3;
            while (ecx36) {
                --ecx36;
                *edi35 = *esi34;
                ++edi35;
                ++esi34;
            }
        } while (*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(*ebp12) + reinterpret_cast<unsigned char>(*ebx7) - 1) != 10);
    }
    return;
}

int32_t g414ac4 = 0;

void fun_40a9f0();

int32_t fseek = 0x15618;

struct s3* fun_40a660(void** a1) {
    int32_t esi2;
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;
    struct s3* eax6;

    esi2 = g414ac0;
    if (esi2) {
        if (esi2 == -1) {
            return 0x413060;
        }
    } else {
        eax3 = g414ac4;
        if (!eax3 || (eax4 = reinterpret_cast<int32_t>(fopen(eax3, "r")), g414ac0 = eax4, eax4 == 0)) {
            g414ac0 = -1;
            return 0x413060;
        } else {
            fun_40cf7b(fun_40a9f0);
            esi2 = g414ac0;
        }
    }
    eax5 = fun_40aa70(a1, 0);
    fseek(esi2, eax5, 0);
    eax6 = fun_40a6f0(a1, 0x40ea28, 0x400);
    return eax6;
}

void** fun_40c790(void** a1, void** a2, void** a3) {
    void** eax4;
    void** esi5;

    eax4 = fun_40c510(a1, 0x800, a2, a3);
    if (eax4) {
        eax4 = fun_403220(0, 0x447, a2, esi5, __return_address(), a1);
    }
    return eax4;
}

void fun_403580(uint32_t* a1, void*** a2, void** a3) {
    void** v4;
    void** edi5;
    int32_t ebx6;
    void** edi7;
    void** v8;
    void** ebp9;
    void** esi10;
    void*** ebp11;
    void* eax12;
    void** esi13;
    void** eax14;
    void** esi15;
    void** v16;
    void** eax17;
    void** eax18;
    uint32_t eax19;
    void** eax20;
    void** esi21;
    void** eax22;

    v4 = edi5;
    ebx6 = 1;
    edi7 = a3;
    v8 = ebp9;
    esi10 = edi7;
    if (*reinterpret_cast<void***>(edi7)) {
        do {
            ++edi7;
        } while (*reinterpret_cast<void***>(edi7));
    }
    ebp11 = a2;
    *a1 = 0;
    while (reinterpret_cast<unsigned char>(edi7) > reinterpret_cast<unsigned char>(esi10) && (eax12 = reinterpret_cast<void*>(_mbsspn(esi10, " \t")), esi13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi10) + reinterpret_cast<uint32_t>(eax12)), reinterpret_cast<unsigned char>(edi7) > reinterpret_cast<unsigned char>(esi13))) {
        *ebp11 = esi13;
        ebp11 = ebp11 + 4;
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi13) == 34)) {
            eax14 = reinterpret_cast<void**>(_mbspbrk(esi13, " \t\"/"));
            esi15 = eax14;
            if (!esi15) {
                addr_40366f_7:
                if (ebx6) {
                    ebx6 = 0;
                    if (!esi15) 
                        goto addr_403695_9;
                    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi15) == 47)) {
                        *reinterpret_cast<void***>(esi15) = reinterpret_cast<void**>(0);
                        --esi15;
                        v16 = *(ebp11 - 4);
                        eax17 = fun_40add0(v16, v8, v4);
                        *(ebp11 - 4) = eax17;
                        *reinterpret_cast<void***>(esi15 + 1) = reinterpret_cast<void**>(47);
                    }
                }
            } else {
                do {
                    if (reinterpret_cast<unsigned char>(edi7) <= reinterpret_cast<unsigned char>(esi15)) 
                        break;
                } while (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi15) == 47) && (!ebx6 && (eax18 = reinterpret_cast<void**>(_mbspbrk(esi15 + 1, " \t\"/")), esi15 = eax18, !!esi15)));
                if (!esi15) 
                    goto addr_40366f_7;
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi15) == 34)) 
                    goto addr_40366f_7; else 
                    goto addr_40364f_16;
            }
        } else {
            esi10 = esi13 + 1;
            if (reinterpret_cast<unsigned char>(edi7) <= reinterpret_cast<unsigned char>(esi10)) {
                addr_40369b_18:
                eax19 = *a1 + 1;
                *a1 = eax19;
                if (eax19 < 0x7f) 
                    continue; else 
                    break;
            } else {
                do {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi10) == 92)) {
                        if (*reinterpret_cast<void***>(esi10) == 34) 
                            break;
                    } else {
                        ++esi10;
                    }
                    ++esi10;
                } while (reinterpret_cast<unsigned char>(edi7) > reinterpret_cast<unsigned char>(esi10));
                if (reinterpret_cast<unsigned char>(edi7) <= reinterpret_cast<unsigned char>(esi10)) 
                    goto addr_40369b_18;
            }
            eax20 = reinterpret_cast<void**>(_mbspbrk(esi10 + 1, " \t"));
            esi15 = eax20;
        }
        if (esi15) {
            addr_403697_26:
            *reinterpret_cast<void***>(esi15) = reinterpret_cast<void**>(0);
            esi10 = esi15 + 1;
            goto addr_40369b_18;
        } else {
            addr_403695_9:
            esi15 = edi7;
            goto addr_403697_26;
        }
        addr_40364f_16:
        esi21 = esi15 + 1;
        if (reinterpret_cast<unsigned char>(edi7) > reinterpret_cast<unsigned char>(esi21)) {
            do {
                if (*reinterpret_cast<void***>(esi21) == 34) 
                    break;
                ++esi21;
            } while (reinterpret_cast<unsigned char>(edi7) > reinterpret_cast<unsigned char>(esi21));
        }
        eax22 = reinterpret_cast<void**>(_mbspbrk(esi21, " \t"));
        esi15 = eax22;
        goto addr_40366f_7;
    }
    *ebp11 = reinterpret_cast<void**>(0);
    return;
}

struct s39 {
    signed char f0;
    signed char f1;
};

struct s40 {
    signed char f0;
    signed char f1;
};

void** fun_404180(void** ecx, void** a2, void** a3) {
    void* esp4;
    signed char* ebx5;
    void* esp6;
    struct s39* ebp7;
    signed char* eax8;
    void* esp9;
    int32_t v10;
    struct s40* ebp11;
    int32_t v12;
    signed char* edi13;
    int32_t ecx14;
    void* eax15;
    uint32_t edx16;
    int32_t ecx17;
    void* eax18;
    uint32_t ecx19;
    uint32_t ecx20;
    int32_t ecx21;
    void* eax22;
    uint32_t edx23;
    int32_t ecx24;
    void* eax25;
    signed char v26;
    uint32_t ecx27;
    uint32_t ecx28;
    int32_t ecx29;
    int32_t ecx30;
    void* eax31;
    uint32_t edx32;
    int32_t ecx33;
    void* eax34;
    signed char v35;
    uint32_t ecx36;
    uint32_t ecx37;
    int32_t ecx38;
    signed char* edi39;
    int32_t ecx40;
    void* eax41;
    signed char v42;
    uint32_t ecx43;
    uint32_t eax44;
    uint32_t ecx45;
    signed char* esi46;
    signed char* edi47;
    uint32_t ecx48;
    uint32_t eax49;
    int32_t ecx50;
    signed char v51;
    int32_t v52;
    int32_t v53;

    fun_40ceb4(ecx, __return_address(), a2, a3);
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4);
    ebx5 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp4) + 0x90f);
    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 - 4 - 4);
    ebp7 = reinterpret_cast<struct s39*>(0x40e10b);
    while (ebp7->f0 == 32 || ebp7->f0 == 9) {
        ++ebx5;
        ebp7 = reinterpret_cast<struct s39*>(&ebp7->f1);
    }
    eax8 = reinterpret_cast<signed char*>(_mbschr(ebp7, 61));
    esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 - 4 + 4 + 8);
    if (eax8) {
        if (ebp7->f0 != 61) {
            do {
                ++ebx5;
                ebp7 = reinterpret_cast<struct s39*>(&ebp7->f1);
                v10 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp7) - 1);
                eax8 = reinterpret_cast<signed char*>(_mbctoupper(v10));
                esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp9) - 4 - 4 + 4 + 4);
            } while (ebp7->f0 != 61);
        }
        if (ebp7->f0) {
            do {
                *reinterpret_cast<signed char*>(&eax8) = ebp7->f0;
                if (*reinterpret_cast<signed char*>(&eax8) != 37) {
                    *ebx5 = *reinterpret_cast<signed char*>(&eax8);
                    ebp7 = reinterpret_cast<struct s39*>(&ebp7->f1);
                    ++ebx5;
                } else {
                    ebp11 = reinterpret_cast<struct s40*>(&ebp7->f1);
                    if (ebp11->f0 != 37) {
                        do {
                            if (!ebp11->f0) 
                                break;
                            ebp11 = reinterpret_cast<struct s40*>(&ebp11->f1);
                            v12 = ebp11->f0;
                            _mbctoupper(v12);
                            esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp9) - 4 - 4 + 4 + 4);
                        } while (ebp11->f0 != 37);
                    }
                    ebp7 = reinterpret_cast<struct s39*>(&ebp11->f1);
                    if (ebp11->f0) {
                        eax8 = reinterpret_cast<signed char*>(getenv(reinterpret_cast<int32_t>(esp9) + 20));
                        esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp9) - 4 - 4 + 4 + 4);
                        if (eax8) {
                            edi13 = eax8;
                            ecx14 = -1;
                            eax15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax8) - reinterpret_cast<int32_t>(eax8));
                            do {
                                if (!ecx14) 
                                    break;
                                --ecx14;
                                ++edi13;
                            } while (*edi13 != *reinterpret_cast<signed char*>(&eax15));
                            edx16 = reinterpret_cast<uint32_t>(~ecx14);
                            ecx17 = -1;
                            eax18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax15) - reinterpret_cast<int32_t>(eax15));
                            do {
                                if (!ecx17) 
                                    break;
                                --ecx17;
                            } while (*reinterpret_cast<signed char*>(&eax18));
                            ecx19 = edx16 >> 2;
                            while (ecx19) {
                                --ecx19;
                            }
                            ecx20 = edx16 & 3;
                            while (ecx20) {
                                --ecx20;
                            }
                            ecx21 = -1;
                            eax22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax18) - reinterpret_cast<int32_t>(eax18));
                            *ebx5 = 0;
                            do {
                                if (!ecx21) 
                                    break;
                                --ecx21;
                            } while (*reinterpret_cast<signed char*>(&eax22));
                            edx23 = reinterpret_cast<uint32_t>(~ecx21);
                            ecx24 = -1;
                            eax25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax22) - reinterpret_cast<int32_t>(eax22));
                            do {
                                if (!ecx24) 
                                    break;
                                --ecx24;
                            } while (v26 != *reinterpret_cast<signed char*>(&eax25));
                            ecx27 = edx23 >> 2;
                            while (ecx27) {
                                --ecx27;
                            }
                            ecx28 = edx23 & 3;
                            while (ecx28) {
                                --ecx28;
                            }
                            ecx29 = -1;
                            eax8 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) - reinterpret_cast<int32_t>(eax25));
                            do {
                                if (!ecx29) 
                                    break;
                                --ecx29;
                            } while (*reinterpret_cast<signed char*>(&eax8));
                            ebx5 = reinterpret_cast<signed char*>(~ecx29 + reinterpret_cast<int32_t>(ebx5) - 1);
                        }
                    } else {
                        ecx30 = -1;
                        eax31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp11) - reinterpret_cast<int32_t>(ebp11));
                        *ebx5 = 0;
                        do {
                            if (!ecx30) 
                                break;
                            --ecx30;
                        } while (*reinterpret_cast<signed char*>(&eax31));
                        edx32 = reinterpret_cast<uint32_t>(~ecx30);
                        ecx33 = -1;
                        eax34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax31) - reinterpret_cast<int32_t>(eax31));
                        do {
                            if (!ecx33) 
                                break;
                            --ecx33;
                        } while (v35 != *reinterpret_cast<signed char*>(&eax34));
                        ecx36 = edx32 >> 2;
                        while (ecx36) {
                            --ecx36;
                        }
                        ecx37 = edx32 & 3;
                        while (ecx37) {
                            --ecx37;
                        }
                        ecx38 = -1;
                        eax8 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax34) - reinterpret_cast<int32_t>(eax34));
                        do {
                            if (!ecx38) 
                                break;
                            --ecx38;
                        } while (*reinterpret_cast<signed char*>(&eax8));
                        ebx5 = reinterpret_cast<signed char*>(~ecx38 + reinterpret_cast<int32_t>(ebx5) - 1);
                    }
                }
            } while (ebp7->f0);
        }
        edi39 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp9) + 0x918);
        ecx40 = -1;
        eax41 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax8) - reinterpret_cast<int32_t>(eax8));
        *ebx5 = 0;
        do {
            if (!ecx40) 
                break;
            --ecx40;
            ++edi39;
        } while (v42 != *reinterpret_cast<signed char*>(&eax41));
        ecx43 = reinterpret_cast<uint32_t>(~ecx40);
        eax44 = ecx43;
        ecx45 = ecx43 >> 2;
        esi46 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi39) - ecx43);
        edi47 = reinterpret_cast<signed char*>(0x40e108);
        while (ecx45) {
            --ecx45;
            *edi47 = *esi46;
            edi47 = edi47 + 4;
            esi46 = esi46 + 4;
        }
        ecx48 = eax44 & 3;
        while (ecx48) {
            --ecx48;
            *edi47 = *esi46;
            ++edi47;
            ++esi46;
        }
        eax49 = eax44 - eax44;
        ecx50 = -1;
        do {
            if (!ecx50) 
                break;
            --ecx50;
        } while (v51 != *reinterpret_cast<signed char*>(&eax49));
        goto v52;
    } else {
        goto v53;
    }
}

void fun_404bb0(uint32_t a1, void** a2) {
    uint32_t esi3;
    void** edx4;
    void** edi5;
    void** eax6;
    void** ecx7;
    uint32_t eax8;

    esi3 = a1 - 1;
    if (a1) {
        edx4 = a2;
        do {
            edi5 = *reinterpret_cast<void***>(edx4);
            eax6 = edi5;
            if (*reinterpret_cast<void***>(edi5)) {
                do {
                    if (*reinterpret_cast<void***>(eax6) == 92 || *reinterpret_cast<void***>(eax6) == 94) {
                        ecx7 = eax6 + 1;
                        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx7) == 34)) {
                            *reinterpret_cast<void***>(edi5) = *reinterpret_cast<void***>(eax6);
                            eax6 = ecx7;
                            ++edi5;
                        }
                        *reinterpret_cast<void***>(edi5) = *reinterpret_cast<void***>(eax6);
                    } else {
                        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax6) == 34)) {
                            *reinterpret_cast<void***>(edi5) = *reinterpret_cast<void***>(eax6);
                        } else {
                            ++eax6;
                            continue;
                        }
                    }
                    ++eax6;
                    ++edi5;
                } while (*reinterpret_cast<void***>(eax6));
            }
            edx4 = edx4 + 4;
            eax8 = esi3;
            --esi3;
            *reinterpret_cast<void***>(edi5) = reinterpret_cast<void**>(0);
        } while (eax8);
    }
    return;
}

signed char fun_405360(void** a1, void* a2, signed char** a3);

void** fun_4050b0(void** a1, signed char* a2) {
    void** v3;
    void** esi4;
    void** esi5;
    void** v6;
    void** edi7;
    signed char* edi8;
    void*** esp9;
    void** v10;
    void** ebp11;
    void** v12;
    void* ebx13;
    int32_t ebp14;
    int32_t eax15;
    int32_t eax16;
    int32_t eax17;
    int32_t eax18;
    int32_t eax19;
    signed char al20;
    void** eax21;
    void** ecx22;

    v3 = esi4;
    esi5 = a1;
    v6 = edi7;
    edi8 = a2;
    esp9 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
    v10 = ebp11;
    v12 = esi5;
    *edi8 = 0;
    if (*reinterpret_cast<void***>(esi5)) {
        do {
            if (*reinterpret_cast<void***>(v12) == 32) 
                break;
        } while (*reinterpret_cast<void***>(v12) != 9 && (++v12, !!*reinterpret_cast<void***>(v12)));
    }
    ebx13 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v12) - reinterpret_cast<unsigned char>(esi5));
    if (*reinterpret_cast<void***>(v12)) {
        do {
            if (*reinterpret_cast<void***>(v12) == 32) 
                continue;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v12) == 9)) 
                break;
            ++v12;
        } while (*reinterpret_cast<void***>(v12));
    }
    ebp14 = _mbsnbicmp;
    eax15 = reinterpret_cast<int32_t>(ebp14(esi5, "INCLUDE", 7));
    if (eax15 || !reinterpret_cast<int1_t>(ebx13 == 7)) {
        eax16 = reinterpret_cast<int32_t>(ebp14(esi5, "CMDSWITCHES", 11));
        if (eax16 || !reinterpret_cast<int1_t>(ebx13 == 11)) {
            eax17 = reinterpret_cast<int32_t>(ebp14(esi5, "ERROR", 5));
            if (eax17 || !reinterpret_cast<int1_t>(ebx13 == 5)) {
                eax18 = reinterpret_cast<int32_t>(ebp14(esi5, "MESSAGE", 7));
                if (eax18 || !reinterpret_cast<int1_t>(ebx13 == 7)) {
                    eax19 = reinterpret_cast<int32_t>(ebp14(esi5, "UNDEF", 5));
                    if (eax19 || !reinterpret_cast<int1_t>(ebx13 == 5)) {
                        al20 = fun_405360(esi5, ebx13, esp9 - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 - 4 - 4 + 4 + 12 + 16);
                        *edi8 = al20;
                    } else {
                        *edi8 = 13;
                    }
                } else {
                    *edi8 = 12;
                }
            } else {
                *edi8 = 11;
            }
        } else {
            *edi8 = 10;
        }
    } else {
        *edi8 = 9;
    }
    if (!*edi8) {
        eax21 = g413a74;
        ecx22 = g4133f4;
        fun_403220(ecx22, 0x3f9, eax21, v10, v6, v3);
    }
    return v12;
}

struct s41 {
    signed char f0;
    void** f1;
};

void** fun_407ad0(void** a1);

void** fun_407680(void** ecx, void** a2) {
    void* esp3;
    void* ebp4;
    void** v5;
    void** ebx6;
    void** v7;
    void** esi8;
    void** v9;
    void** edi10;
    int32_t edi11;
    void** ebx12;
    void** v13;
    void** eax14;
    void** v15;
    struct s41* eax16;
    struct s41* esi17;
    void** edi18;
    int32_t ecx19;
    void* eax20;
    void** edi21;
    signed char* eax22;
    void** ebx23;
    void** eax24;
    void** esi25;
    void** eax26;
    void** eax27;
    void** eax28;
    void** edi29;
    void** eax30;
    void** eax31;
    void** eax32;
    void** eax33;
    void** eax34;
    void** v35;
    void** eax36;
    int32_t eax37;
    int32_t eax38;
    void** ecx39;
    void** v40;
    void** v41;
    void** eax42;
    void** v43;
    void** edi44;
    int1_t less_or_equal45;
    int32_t* esi46;
    int32_t v47;
    int32_t eax48;
    void** eax49;
    int1_t less_or_equal50;
    void** eax51;
    void*** v52;
    int1_t zf53;
    void** eax54;
    void** eax55;
    void** v56;
    void** edi57;
    int32_t ecx58;
    void* eax59;
    void** edi60;
    void* eax61;
    void* edx62;
    int32_t ecx63;
    void** eax64;
    void** edi65;
    int32_t ecx66;
    void** v67;
    void* eax68;
    uint32_t ecx69;
    uint32_t edx70;
    uint32_t ecx71;
    void*** esi72;
    void** edi73;
    uint32_t ecx74;
    signed char* edi75;
    int32_t ecx76;
    void* eax77;
    uint32_t ecx78;
    uint32_t edx79;
    signed char* esi80;
    int32_t ecx81;
    void** edi82;
    void* eax83;
    struct s4* edi84;
    uint32_t ecx85;
    uint32_t ecx86;
    void** edi87;
    int32_t ecx88;
    void* eax89;
    uint32_t ecx90;
    uint32_t edx91;
    int32_t ecx92;
    void** edi93;
    void* eax94;
    struct s4* edi95;
    uint32_t ecx96;
    uint32_t ecx97;
    int32_t eax98;
    void** eax99;
    void** esi100;
    void*** edx101;
    void** eax102;
    uint32_t ecx103;
    void** edx104;
    void** eax105;
    void** eax106;
    void** eax107;
    void** eax108;
    int1_t zf109;
    void** ecx110;
    void** eax111;
    void** eax112;

    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebp4 = esp3;
    v5 = ebx6;
    v7 = esi8;
    v9 = edi10;
    edi11 = 0;
    fun_40ceb4(ecx, v9, v7, v5);
    ebx12 = a2;
    v13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp3) - 28 - 4 - 4 - 4 - 4 + 4);
    if (!*reinterpret_cast<void***>(ebx12) || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx12) == 35)) {
        eax14 = g4133f4;
        fun_403220(eax14, 0x407, v9, v7, v5, v15);
    }
    eax16 = reinterpret_cast<struct s41*>(_mbspbrk(ebx12, " \t#"));
    esi17 = eax16;
    if (!esi17) {
        edi18 = ebx12;
        ecx19 = -1;
        eax20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax16) - reinterpret_cast<uint32_t>(eax16));
        do {
            if (!ecx19) 
                break;
            --ecx19;
            ++edi18;
        } while (*reinterpret_cast<void***>(edi18) != *reinterpret_cast<void***>(&eax20));
        ecx = reinterpret_cast<void**>(~ecx19);
        esi17 = reinterpret_cast<struct s41*>(reinterpret_cast<unsigned char>(ecx) + reinterpret_cast<unsigned char>(ebx12) + 0xffffffff);
    } else {
        if (esi17->f0 == 35) {
            edi11 = esi17->f0;
        }
        esi17->f0 = 0;
        if (edi11) 
            goto addr_407726_11;
        edi21 = reinterpret_cast<void**>(&esi17->f1);
        if (*reinterpret_cast<void***>(edi21)) 
            goto addr_4076eb_13;
    }
    addr_407726_11:
    ecx = *reinterpret_cast<void***>(ebx12);
    if (reinterpret_cast<int1_t>(ecx == 60) && (eax22 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi17) + 0xffffffff), *eax22 == 62)) {
        ebx23 = ebx12 + 1;
        *eax22 = 0;
        eax24 = fun_40b690(ecx, ebx23);
        esi25 = eax24;
        if (eax24 == ebx23) {
            eax26 = fun_40add0(ebx23, v9, v7);
            esi25 = eax26;
        }
        eax27 = fun_407b70("INCLUDE");
        if (!eax27) {
            eax28 = reinterpret_cast<void**>(0);
        } else {
            eax28 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax27 + 8) + 4);
        }
        if (!eax28) {
            edi29 = reinterpret_cast<void**>(0);
        } else {
            eax30 = fun_40add0(eax28, v9, v7);
            eax31 = fun_40b690(ecx, eax30);
            edi29 = eax31;
            if (eax31 != eax30) {
                free(eax30);
            }
        }
        eax32 = fun_405930(edi29, esi25, v13, reinterpret_cast<int32_t>(ebp4) - 28);
        ebx12 = eax32;
        if (!ebx12) {
            eax33 = g4133f4;
            fun_403220(eax33, 0x41c, esi25, v9, v7, v5);
        }
        if (edi29) {
            free(edi29);
        }
        free(esi25);
        goto addr_4079b6_28;
    }
    if (reinterpret_cast<int1_t>(ecx == 34) && (esi17 = reinterpret_cast<struct s41*>(reinterpret_cast<uint32_t>(esi17) - 1), esi17->f0 == 34)) {
        ++ebx12;
        esi17->f0 = 0;
    }
    eax34 = fun_40b690(ecx, ebx12);
    v35 = eax34;
    if (eax34 == ebx12) {
        eax36 = fun_40add0(ebx12, v9, v7);
        v35 = eax36;
    }
    eax37 = fun_40cd20(v35, reinterpret_cast<int32_t>(ebp4) - 24, reinterpret_cast<int32_t>(ebp4) - 28, v9, v7);
    if (eax37) 
        goto addr_4079b6_28;
    eax38 = reinterpret_cast<int32_t>(_mbspbrk(v35, "\\/:"));
    if (!eax38) 
        goto addr_407831_35;
    ecx39 = g4133f4;
    v40 = v35;
    v41 = ecx39;
    addr_4079ae_37:
    fun_403220(v41, 0x41c, v40, v9, v7, v5);
    goto addr_4079b6_28;
    addr_407831_35:
    eax42 = g413400;
    v43 = eax42;
    if (reinterpret_cast<signed char>(eax42) < reinterpret_cast<signed char>(0)) {
        addr_40797d_38:
        free(v35);
        if (reinterpret_cast<signed char>(v43) >= reinterpret_cast<signed char>(0)) {
            addr_4079b6_28:
            edi44 = reinterpret_cast<void**>(0);
            less_or_equal45 = reinterpret_cast<signed char>(g413400) <= reinterpret_cast<signed char>(0);
            if (!less_or_equal45) {
                esi46 = reinterpret_cast<int32_t*>(0x411a54);
                do {
                    v47 = *esi46;
                    eax48 = reinterpret_cast<int32_t>(_mbsicmp(ebx12, v47));
                    if (!eax48) {
                        eax49 = g4133f4;
                        fun_403220(eax49, 0x430, ebx12, v9, v7, v5);
                    }
                    esi46 = esi46 + 3;
                    ++edi44;
                    less_or_equal50 = reinterpret_cast<signed char>(g413400) <= reinterpret_cast<signed char>(edi44);
                } while (!less_or_equal50);
            }
        } else {
            v40 = ebx12;
            eax51 = g4133f4;
            v41 = eax51;
            goto addr_4079ae_37;
        }
    } else {
        v52 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax42 + reinterpret_cast<unsigned char>(eax42) * 2) * 4 + 0x411a54);
        do {
            zf53 = g413400 == v43;
            if (!zf53) {
                eax54 = *v52;
            } else {
                eax54 = g4133f8;
            }
            eax55 = fun_407ad0(eax54);
            v56 = eax55;
            if (eax55) {
                edi57 = v35;
                ecx58 = -1;
                eax59 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax55) - reinterpret_cast<unsigned char>(eax55));
                do {
                    if (!ecx58) 
                        break;
                    --ecx58;
                    ++edi57;
                } while (*reinterpret_cast<void***>(edi57) != *reinterpret_cast<void***>(&eax59));
                edi60 = v56;
                eax61 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax59) - reinterpret_cast<uint32_t>(eax59));
                edx62 = reinterpret_cast<void*>(~ecx58 - 1);
                ecx63 = -1;
                do {
                    if (!ecx63) 
                        break;
                    --ecx63;
                    ++edi60;
                } while (*reinterpret_cast<void***>(edi60) != *reinterpret_cast<void***>(&eax61));
                eax64 = fun_40acf0(~ecx63 + reinterpret_cast<int32_t>(edx62) - 1 + 2);
                edi65 = v56;
                ecx66 = -1;
                v67 = eax64;
                eax68 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax64) - reinterpret_cast<unsigned char>(eax64));
                do {
                    if (!ecx66) 
                        break;
                    --ecx66;
                    ++edi65;
                } while (*reinterpret_cast<void***>(edi65) != *reinterpret_cast<void***>(&eax68));
                ecx69 = reinterpret_cast<uint32_t>(~ecx66);
                edx70 = ecx69;
                ecx71 = ecx69 >> 2;
                esi72 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi65) - ecx69);
                edi73 = v67;
                while (ecx71) {
                    --ecx71;
                    *reinterpret_cast<void***>(edi73) = *esi72;
                    edi73 = edi73 + 4;
                    esi72 = esi72 + 4;
                }
                ecx74 = edx70 & 3;
                while (ecx74) {
                    --ecx74;
                    *reinterpret_cast<void***>(edi73) = *esi72;
                    ++edi73;
                    ++esi72;
                }
                edi75 = "\\";
                ecx76 = -1;
                eax77 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax68) - reinterpret_cast<uint32_t>(eax68));
                do {
                    if (!ecx76) 
                        break;
                    --ecx76;
                    ++edi75;
                } while (*edi75 != *reinterpret_cast<signed char*>(&eax77));
                ecx78 = reinterpret_cast<uint32_t>(~ecx76);
                edx79 = ecx78;
                esi80 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi75) - ecx78);
                ecx81 = -1;
                edi82 = v67;
                eax83 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax77) - reinterpret_cast<uint32_t>(eax77));
                do {
                    if (!ecx81) 
                        break;
                    --ecx81;
                    ++edi82;
                    ++esi80;
                } while (*reinterpret_cast<void***>(edi82) != *reinterpret_cast<void***>(&eax83));
                edi84 = reinterpret_cast<struct s4*>(edi82 - 1);
                ecx85 = edx79 >> 2;
                while (ecx85) {
                    --ecx85;
                    edi84->f0 = *esi80;
                    edi84 = edi84 + 2;
                    esi80 = esi80 + 4;
                }
                ecx86 = edx79 & 3;
                while (ecx86) {
                    --ecx86;
                    edi84->f0 = *esi80;
                    edi84 = reinterpret_cast<struct s4*>(&edi84->f1);
                    ++esi80;
                }
                edi87 = v35;
                ecx88 = -1;
                eax89 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax83) - reinterpret_cast<uint32_t>(eax83));
                do {
                    if (!ecx88) 
                        break;
                    --ecx88;
                    ++edi87;
                } while (*reinterpret_cast<void***>(edi87) != *reinterpret_cast<void***>(&eax89));
                ecx90 = reinterpret_cast<uint32_t>(~ecx88);
                edx91 = ecx90;
                esi17 = reinterpret_cast<struct s41*>(reinterpret_cast<unsigned char>(edi87) - ecx90);
                ecx92 = -1;
                edi93 = v67;
                eax94 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax89) - reinterpret_cast<uint32_t>(eax89));
                do {
                    if (!ecx92) 
                        break;
                    --ecx92;
                    ++edi93;
                    esi17 = reinterpret_cast<struct s41*>(&esi17->f1);
                } while (*reinterpret_cast<void***>(edi93) != *reinterpret_cast<void***>(&eax94));
                edi95 = reinterpret_cast<struct s4*>(edi93 - 1);
                ecx96 = edx91 >> 2;
                while (ecx96) {
                    --ecx96;
                    edi95->f0 = esi17->f0;
                    edi95 = edi95 + 2;
                    esi17 = esi17 + 2;
                }
                ecx97 = edx91 & 3;
                while (ecx97) {
                    --ecx97;
                    edi95->f0 = esi17->f0;
                    edi95 = reinterpret_cast<struct s4*>(&edi95->f1);
                    esi17 = reinterpret_cast<struct s41*>(&esi17->f1);
                }
                eax98 = fun_40cd20(v67, reinterpret_cast<int32_t>(ebp4) - 24, reinterpret_cast<int32_t>(ebp4) - 28, v9, v7);
                if (eax98) 
                    goto addr_40796d_89;
                free(v56);
                free(v67);
            }
            v52 = v52 - 12;
            --v43;
        } while (reinterpret_cast<uint32_t>(v52) >= 0x411a54);
        goto addr_40796b_92;
    }
    eax99 = g413400;
    esi100 = g4133f8;
    edx101 = reinterpret_cast<void***>(eax99 + reinterpret_cast<unsigned char>(eax99) * 2);
    eax102 = g4133d8;
    g413424 = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx101) * 4 + 0x411a58) = eax102;
    ecx103 = reinterpret_cast<uint32_t>(edx101) * 4;
    edx104 = g4133f4;
    *reinterpret_cast<void***>(ecx103 + 0x411a50) = edx104;
    *reinterpret_cast<void***>(ecx103 + 0x411a54) = esi100;
    ++g413400;
    eax105 = fun_40ca80(ebx12, "rt");
    g4133d8 = eax105;
    if (!eax105) {
        eax106 = g4133f4;
        fun_403220(eax106, 0x41c, ebx12, v9, v7, v5);
    }
    eax107 = fun_40add0(ebx12, v9, v7);
    g4133f8 = eax107;
    g4133f4 = reinterpret_cast<void**>(1);
    g4133f0 = reinterpret_cast<void**>(1);
    eax108 = fun_404de0();
    if (eax108 == 32 || (g4133f0 = reinterpret_cast<void**>(1), reinterpret_cast<int1_t>(eax108 == 9))) {
        g4133f0 = reinterpret_cast<void**>(0);
    }
    zf109 = g4133f0 == 0;
    if (zf109) {
        *reinterpret_cast<signed char*>(&eax108) = 18;
        return eax108;
    } else {
        ecx110 = g4133d8;
        eax111 = fun_404d70(eax108, ecx110);
        *reinterpret_cast<signed char*>(&eax111) = 17;
        return eax111;
    }
    addr_40796b_92:
    goto addr_40797d_38;
    addr_40796d_89:
    ebx12 = v67;
    free(v56);
    goto addr_40797d_38;
    do {
        addr_4076eb_13:
        if (*reinterpret_cast<void***>(edi21) == 35) 
            goto addr_407726_11;
        if (*reinterpret_cast<void***>(edi21) != 32 && *reinterpret_cast<void***>(edi21) != 9) {
            eax112 = g4133f4;
            fun_403220(eax112, 0x409, edi21, v9, v7, v5);
        }
        ++edi21;
    } while (*reinterpret_cast<void***>(edi21));
    goto addr_407726_11;
}

void** fun_409e80(void** a1, void** a2);

void** fun_405530(void** a1, void** a2) {
    void* eax3;
    void** ebx4;
    void** eax5;
    void** eax6;
    void** eax7;
    void** ebx8;
    void** eax9;
    void** eax10;
    void** eax11;
    void** eax12;
    void** eax13;
    void** eax14;
    void** eax15;
    void** cl16;
    void** cl17;
    void** cl18;
    void** eax19;
    void** eax20;
    void** eax21;
    void** eax22;
    unsigned char* eax23;
    unsigned char cl24;
    unsigned char cl25;
    void** eax26;
    void** eax27;
    void** eax28;
    unsigned char cl29;
    void** eax30;
    void** eax31;
    void** eax32;
    void** eax33;

    eax3 = reinterpret_cast<void*>(0);
    *reinterpret_cast<signed char*>(&ebx4) = *reinterpret_cast<signed char*>(&a2);
    *reinterpret_cast<signed char*>(&eax3) = *reinterpret_cast<signed char*>(&ebx4);
    eax5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax3) - 1);
    switch (eax5) {
    case 0:
    case 5:
    case 6:
        eax6 = g413a70;
        if (reinterpret_cast<int1_t>(eax6 == 15)) {
            eax7 = g4133f4;
            fun_403220(eax7, 0x3fb, ebx8, __return_address(), a1, a2);
            eax6 = g413a70;
        }
        *reinterpret_cast<signed char*>(eax6 + 0x413a61) = 1;
        eax9 = eax6 + 1;
        g413a70 = eax9;
        if (!eax9 || *reinterpret_cast<unsigned char*>(eax9 + 0x413a5f) & 2) {
            eax10 = fun_409e80(a1, ebx4);
            if (!eax10) {
                eax11 = fun_405710();
                return eax11;
            } else {
                eax12 = g413a70;
                *reinterpret_cast<unsigned char*>(eax12 + 0x413a60) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax12 + 0x413a60) | 2);
                return eax12;
            }
        } else {
            *reinterpret_cast<unsigned char*>(eax9 + 0x413a60) = 5;
            eax13 = fun_405710();
            return eax13;
        }
    case 1:
        eax14 = g413a70;
        if (reinterpret_cast<signed char>(eax14) < reinterpret_cast<signed char>(0) || !(*reinterpret_cast<unsigned char*>(eax14 + 0x413a60) & 9)) {
            eax15 = g4133f4;
            fun_403220(eax15, 0x3fd, ebx8, __return_address(), a1, a2);
            eax14 = g413a70;
        }
        eax5 = eax14 + 0x413a60;
        cl16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5)) & 0xfe);
        *reinterpret_cast<void***>(eax5) = cl16;
        cl17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(cl16) & 0xf7);
        *reinterpret_cast<void***>(eax5) = cl17;
        if (!(reinterpret_cast<unsigned char>(cl17) & 4)) {
            if (!(reinterpret_cast<unsigned char>(cl17) & 2)) {
                cl18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(cl17) | 2);
            } else {
                cl18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(cl17) & 0xfd);
            }
            *reinterpret_cast<void***>(eax5) = cl18;
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5)) & 2)) {
                eax19 = fun_405710();
                return eax19;
            }
        } else {
            eax20 = fun_405710();
            return eax20;
        }
    case 2:
    case 3:
    case 4:
        eax21 = g413a70;
        if (reinterpret_cast<signed char>(eax21) < reinterpret_cast<signed char>(0) || !(*reinterpret_cast<unsigned char*>(eax21 + 0x413a60) & 9)) {
            eax22 = g4133f4;
            fun_403220(eax22, 0x3fd, ebx8, __return_address(), a1, a2);
            eax21 = g413a70;
        }
        eax23 = reinterpret_cast<unsigned char*>(eax21 + 0x413a60);
        cl24 = reinterpret_cast<unsigned char>(*eax23 & 0xfe);
        *eax23 = cl24;
        cl25 = reinterpret_cast<unsigned char>(cl24 | 8);
        *eax23 = cl25;
        if (!(cl25 & 4)) {
            if (!(cl25 & 2)) {
                eax26 = fun_409e80(a1, ebx4);
                if (!eax26) {
                    eax27 = fun_405710();
                    return eax27;
                } else {
                    eax28 = g413a70;
                    *reinterpret_cast<unsigned char*>(eax28 + 0x413a60) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax28 + 0x413a60) | 2);
                    return eax28;
                }
            } else {
                cl29 = reinterpret_cast<unsigned char>(cl25 | 4);
                *eax23 = cl29;
                *eax23 = reinterpret_cast<unsigned char>(cl29 & 0xfd);
                eax30 = fun_405710();
                return eax30;
            }
        } else {
            eax31 = fun_405710();
            return eax31;
        }
    case 7:
        eax32 = g413a70;
        if (reinterpret_cast<signed char>(eax32) < reinterpret_cast<signed char>(0)) {
            eax33 = g4133f4;
            fun_403220(eax33, 0x3fd, ebx8, __return_address(), a1, a2);
            eax32 = g413a70;
        }
        eax5 = eax32 - 1;
        g413a70 = eax5;
        if (reinterpret_cast<signed char>(eax5) >= reinterpret_cast<signed char>(0) && !(*reinterpret_cast<unsigned char*>(eax5 + 0x413a60) & 2)) {
            eax5 = fun_405710();
        }
    }
    return eax5;
}

signed char fun_405360(void** a1, void* a2, signed char** a3) {
    signed char bl4;
    int32_t esi5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    int32_t eax13;
    signed char** edx14;
    signed char* ecx15;
    signed char* edi16;
    int32_t ebp17;
    int32_t eax18;
    int32_t eax19;
    int32_t eax20;

    bl4 = 0;
    esi5 = _mbsnbicmp;
    eax6 = reinterpret_cast<int32_t>(esi5(a1, "IF", 2));
    if (eax6 || !reinterpret_cast<int1_t>(a2 == 2)) {
        eax7 = reinterpret_cast<int32_t>(esi5(a1, "IFDEF", 5));
        if (eax7 || !reinterpret_cast<int1_t>(a2 == 5)) {
            eax8 = reinterpret_cast<int32_t>(esi5(a1, "IFNDEF", 6));
            if (eax8 || !reinterpret_cast<int1_t>(a2 == 6)) {
                eax9 = reinterpret_cast<int32_t>(esi5(a1, "ELSE", 4));
                if (eax9 || !reinterpret_cast<int1_t>(a2 == 4)) {
                    eax10 = reinterpret_cast<int32_t>(esi5(a1, "ELSEIF", 6));
                    if (eax10 || !reinterpret_cast<int1_t>(a2 == 6)) {
                        eax11 = reinterpret_cast<int32_t>(esi5(a1, "ELSEIFDEF", 9));
                        if (eax11 || !reinterpret_cast<int1_t>(a2 == 9)) {
                            eax12 = reinterpret_cast<int32_t>(esi5(a1, "ELSEIFNDEF", 10));
                            if (eax12 || !reinterpret_cast<int1_t>(a2 == 10)) {
                                eax13 = reinterpret_cast<int32_t>(esi5(a1, "ENDIF", 5));
                                if (!eax13 && reinterpret_cast<int1_t>(a2 == 5)) {
                                    bl4 = 8;
                                }
                            } else {
                                return 5;
                            }
                        } else {
                            return 4;
                        }
                    } else {
                        return 3;
                    }
                } else {
                    edx14 = a3;
                    ecx15 = *edx14;
                    if (*ecx15) {
                        edi16 = ecx15;
                        if (*ecx15) {
                            do {
                                if (*ecx15 == 32) 
                                    break;
                            } while (*ecx15 != 9 && (++ecx15, !!*ecx15));
                        }
                        ebp17 = reinterpret_cast<int32_t>(ecx15) - reinterpret_cast<int32_t>(edi16);
                        if (*ecx15) {
                            do {
                                if (*ecx15 == 32) 
                                    continue;
                                if (*ecx15 != 9) 
                                    break;
                                ++ecx15;
                            } while (*ecx15);
                        }
                        *edx14 = ecx15;
                        eax18 = reinterpret_cast<int32_t>(esi5(edi16, "IF", 2));
                        if (eax18 || ebp17 != 2) {
                            eax19 = reinterpret_cast<int32_t>(esi5(edi16, "IFDEF", 5));
                            if (eax19 || ebp17 != 5) {
                                eax20 = reinterpret_cast<int32_t>(esi5(edi16, "IFNDEF", 6));
                                if (!eax20 && ebp17 == 6) {
                                    return 5;
                                }
                            } else {
                                return 4;
                            }
                        } else {
                            return 3;
                        }
                    } else {
                        return 2;
                    }
                }
                return bl4;
            } else {
                return 7;
            }
        } else {
            return 6;
        }
    } else {
        return 1;
    }
}

void** fun_409be0();

void** fun_409e80(void** a1, void** a2) {
    void** eax3;
    void** esi4;
    int32_t eax5;
    uint32_t eax6;
    void** eax7;
    void** eax8;
    void** eax9;

    if (!*reinterpret_cast<void***>(a1)) {
        eax3 = g4133f4;
        fun_403220(eax3, 0x3fa, esi4, __return_address(), a1, a2);
    }
    eax5 = 0;
    *reinterpret_cast<signed char*>(&eax5) = *reinterpret_cast<signed char*>(&a2);
    eax6 = reinterpret_cast<uint32_t>(eax5 - 4);
    if (eax6 > 3) {
        g40ea18 = a1;
        eax7 = fun_409be0();
        return eax7;
    }
    switch (eax6) {
    case 0:
    case 2:
        eax8 = fun_409d70(a1);
        return eax8;
    case 1:
    case 3:
        eax9 = fun_409d70(a1);
        return -(reinterpret_cast<unsigned char>(eax9) - (reinterpret_cast<unsigned char>(eax9) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax9) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax9) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax9) < reinterpret_cast<unsigned char>(1))))));
    }
}

void fun_405e60(void* a1);

void fun_405ef0(void* a1) {
    void** v2;
    void** esi3;
    void** v4;
    void** edi5;
    void* esp6;
    void** eax7;
    void* esp8;
    void** edi9;
    void** eax10;
    void** eax11;
    void* esp12;
    void** eax13;

    v2 = esi3;
    v4 = edi5;
    fun_405e60(a1);
    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 + 4 + 4);
    eax7 = fun_405f60(reinterpret_cast<int32_t>(esp6) + 12);
    esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 + 4 + 4);
    edi9 = eax7;
    if (edi9) {
        do {
            eax10 = fun_40acf0(12);
            eax11 = fun_40add0(edi9, v4, v2);
            *reinterpret_cast<void***>(eax10 + 4) = eax11;
            fun_405f40(0x413404, eax10);
            esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 - 4 + 4 + 4 - 4 - 4 + 4 + 4 - 4 - 4 - 4 + 8 + 4);
            eax13 = fun_405f60(reinterpret_cast<int32_t>(esp12) + 12);
            esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 - 4 + 4 + 4);
            edi9 = eax13;
        } while (edi9);
    }
    return;
}

void fun_405e60(void* a1) {
    void** v2;
    void** ebx3;
    void** v4;
    void** esi5;
    void** v6;
    void** edi7;
    int32_t ebx8;
    void** v9;
    void** ebp10;
    int32_t edi11;
    void* ebp12;
    void* esi13;
    void* eax14;
    void** eax15;
    int32_t eax16;
    void** eax17;
    void** eax18;
    void** eax19;

    v2 = ebx3;
    v4 = esi5;
    v6 = edi7;
    ebx8 = _mbschr;
    v9 = ebp10;
    edi11 = fgets;
    ebp12 = a1;
    esi13 = ebp12;
    while ((eax14 = reinterpret_cast<void*>(ebx8(esi13, 10)), !!eax14) && *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax14) - 1) == 94) {
        esi13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax14) + 1);
        eax15 = g4133d8;
        eax16 = reinterpret_cast<int32_t>(edi11(esi13, reinterpret_cast<int32_t>(ebp12) - reinterpret_cast<int32_t>(esi13) + 0x400, eax15));
        if (!eax16) {
            eax17 = g4133d8;
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax17 + 12)) & 16) {
                eax18 = g4133f4;
                fun_403220(eax18, 0x409, "EOF", v9, v6, v4);
            }
            eax19 = g4133f4;
            fun_403220(eax19, 0x41d, v9, v6, v4, v2);
        }
        ++g4133f4;
    }
    return;
}

int32_t _mktemp = 0x1558a;

signed char g413fc9 = 0x6d;

void** fun_407450(void** a1) {
    void** ebx2;
    void* esp3;
    void** edi4;
    int32_t ecx5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    uint32_t ecx9;
    uint32_t eax10;
    uint32_t ecx11;
    uint32_t ecx12;
    int32_t esi13;
    int32_t edi14;
    void** eax15;
    signed char* edi16;
    int32_t ecx17;
    void* eax18;
    int1_t zf19;
    int32_t eax20;
    uint32_t ecx21;
    uint32_t edx22;
    signed char* esi23;
    int32_t ecx24;
    void** edi25;
    void* eax26;
    struct s4* edi27;
    uint32_t ecx28;
    uint32_t ecx29;
    void** v30;

    ebx2 = a1;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x104 - 4 - 4 - 4);
    if (!(!ebx2 || !*reinterpret_cast<void***>(ebx2))) {
        edi4 = ebx2;
        ecx5 = -1;
        eax6 = eax7 - eax8;
        do {
            if (!ecx5) 
                break;
            --ecx5;
            ++edi4;
        } while (*reinterpret_cast<void***>(edi4) != *reinterpret_cast<void***>(&eax6));
        ecx9 = reinterpret_cast<uint32_t>(~ecx5);
        eax10 = ecx9;
        ecx11 = ecx9 >> 2;
        while (ecx11) {
            --ecx11;
        }
        ecx12 = eax10 & 3;
        while (ecx12) {
            --ecx12;
        }
    }
    esi13 = _makepath;
    esi13(ebx2, 0, reinterpret_cast<int32_t>(esp3) + 12, "nmXXXXXX", 0);
    edi14 = _mktemp;
    eax15 = reinterpret_cast<void**>(edi14(ebx2));
    if (eax15) {
        addr_4074fe_14:
        edi16 = ".";
        ecx17 = -1;
        eax18 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax15) - reinterpret_cast<unsigned char>(eax15));
    } else {
        zf19 = g413fc9 == 0x7a;
        if (!zf19) {
            g413fc9 = reinterpret_cast<signed char>(g413fc9 + 1);
        } else {
            g413fc9 = 97;
        }
        esi13(ebx2, 0, reinterpret_cast<int32_t>(esp3) - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 20 - 4 - 4 + 4 + 4 + 12, "nmXXXXXX", 0);
        eax20 = reinterpret_cast<int32_t>(edi14(ebx2));
        eax15 = reinterpret_cast<void**>(0);
        if (!eax20) 
            goto addr_407539_19; else 
            goto addr_4074fe_14;
    }
    do {
        if (!ecx17) 
            break;
        --ecx17;
        ++edi16;
    } while (*edi16 != *reinterpret_cast<signed char*>(&eax18));
    ecx21 = reinterpret_cast<uint32_t>(~ecx17);
    edx22 = ecx21;
    esi23 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi16) - ecx21);
    ecx24 = -1;
    edi25 = ebx2;
    eax26 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax18) - reinterpret_cast<uint32_t>(eax18));
    do {
        if (!ecx24) 
            break;
        --ecx24;
        ++edi25;
        ++esi23;
    } while (*reinterpret_cast<void***>(edi25) != *reinterpret_cast<void***>(&eax26));
    edi27 = reinterpret_cast<struct s4*>(edi25 - 1);
    ecx28 = edx22 >> 2;
    while (ecx28) {
        --ecx28;
        edi27->f0 = *esi23;
        edi27 = edi27 + 2;
        esi23 = esi23 + 4;
    }
    ecx29 = edx22 & 3;
    v30 = ebx2;
    while (ecx29) {
        --ecx29;
        edi27->f0 = *esi23;
        edi27 = reinterpret_cast<struct s4*>(&edi27->f1);
        ++esi23;
    }
    eax15 = fun_40ca80(v30, "w");
    addr_407539_19:
    return eax15;
}

int32_t fputc = 0x15582;

void fun_4063b0(void** a1, uint32_t* a2) {
    uint32_t* esi3;
    void** edi4;
    uint32_t v5;
    uint32_t eax6;
    uint32_t ebx7;
    uint32_t eax8;
    int32_t eax9;
    uint32_t ebp10;
    int32_t v11;
    uint32_t eax12;
    int32_t eax13;

    esi3 = a2;
    edi4 = a1;
    while (v5 = *esi3, eax6 = reinterpret_cast<uint32_t>(_mbschr(v5, 10)), ebx7 = eax6, !!ebx7) {
        eax8 = *esi3;
        eax9 = reinterpret_cast<int32_t>(_mbsnbcmp(eax8, "<<", 2));
        if (!eax9) 
            goto addr_406405_4;
        ebp10 = *esi3;
        if (ebp10 <= ebx7) {
            do {
                ++ebp10;
                v11 = *reinterpret_cast<signed char*>(ebp10 - 1);
                fputc(v11, edi4);
            } while (ebp10 <= ebx7);
        }
        *esi3 = ebp10;
    }
    goto addr_40640c_8;
    addr_406405_4:
    *esi3 = *esi3 + 2;
    if (ebx7) {
        addr_406426_9:
        return;
    } else {
        addr_40640c_8:
        eax12 = *esi3;
        eax13 = reinterpret_cast<int32_t>(_mbsnbcmp(eax12, "<<", 2));
        if (!eax13) {
            *esi3 = *esi3 + 2;
            goto addr_406426_9;
        }
    }
}

struct s42 {
    signed char f0;
    signed char f1;
    signed char f2;
};

void fun_406430(void** a1) {
    int32_t esi2;
    struct s42* eax3;
    struct s42* edx4;
    signed char* edi5;
    int32_t ecx6;
    int32_t eax7;
    uint32_t ecx8;
    uint32_t eax9;
    uint32_t ecx10;
    signed char* esi11;
    struct s42* edi12;
    uint32_t ecx13;

    esi2 = _mbschr;
    eax3 = reinterpret_cast<struct s42*>(esi2(a1, 60));
    edx4 = eax3;
    if (eax3->f1 != 60) {
        do {
            eax3 = reinterpret_cast<struct s42*>(esi2(&edx4->f1, 60));
            edx4 = eax3;
        } while (eax3->f1 != 60);
    }
    edi5 = &edx4->f2;
    ecx6 = -1;
    eax7 = reinterpret_cast<int32_t>(eax3) - reinterpret_cast<int32_t>(eax3);
    do {
        if (!ecx6) 
            break;
        --ecx6;
        ++edi5;
    } while (*edi5 != *reinterpret_cast<signed char*>(&eax7));
    ecx8 = reinterpret_cast<uint32_t>(~ecx6);
    eax9 = ecx8;
    ecx10 = ecx8 >> 2;
    esi11 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi5) - ecx8);
    edi12 = edx4;
    while (ecx10) {
        --ecx10;
        edi12->f0 = *esi11;
        edi12 = reinterpret_cast<struct s42*>(reinterpret_cast<int32_t>(edi12) + 4);
        esi11 = esi11 + 4;
    }
    ecx13 = eax9 & 3;
    while (ecx13) {
        --ecx13;
        edi12->f0 = *esi11;
        edi12 = reinterpret_cast<struct s42*>(&edi12->f1);
        ++esi11;
    }
    return;
}

void fun_406f4c(uint32_t ecx);

void fun_406a80(signed char a1, void** a2, void** a3) {
    void* v4;
    void** v5;
    void** ebx6;
    void** v7;
    void** esi8;
    void** esi9;
    void** v10;
    void** edi11;
    void** v12;
    void** v13;
    void** ebp14;
    void** eax15;
    void* esp16;
    void** v17;
    unsigned char v18;
    unsigned char bl19;
    void* edi20;
    int32_t ebp21;
    void** eax22;
    void** ecx23;
    void** eax24;
    uint32_t eax25;
    int32_t ecx26;
    void** eax27;
    int32_t ecx28;
    int1_t zf29;
    int32_t eax30;
    void** eax31;
    void* esp32;
    void** ecx33;
    void** eax34;
    int32_t ecx35;
    int32_t eax36;
    void** eax37;
    void** ecx38;
    void** v39;
    int1_t zf40;
    void* ebp41;
    void** eax42;
    void** eax43;
    void** eax44;
    void** esi45;
    void** eax46;
    void** eax47;
    void** eax48;
    void** ecx49;
    void** esi50;
    void** eax51;
    void** eax52;
    void* esp53;
    void** ecx54;
    int1_t zf55;
    void* ebx56;
    void** eax57;
    void** eax58;
    void** eax59;
    void** esi60;
    void** eax61;
    void** eax62;
    void** eax63;
    void** ecx64;
    void** esi65;
    void** eax66;
    void** eax67;
    void** eax68;
    int32_t ebx69;
    void** edi70;
    int32_t v71;
    int32_t eax72;
    int1_t zf73;
    void** eax74;
    void* esi75;
    void** eax76;
    void** eax77;
    void** eax78;
    void** ecx79;

    v4 = reinterpret_cast<void*>(0);
    v5 = ebx6;
    v7 = esi8;
    esi9 = a2;
    v10 = edi11;
    v12 = esi9;
    v13 = ebp14;
    eax15 = fun_404de0();
    esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16 - 4 - 4 - 4 - 4 - 4 + 4);
    v17 = eax15;
    if (a1 != 24) {
        if (v17 == 32) 
            goto addr_406af0_3;
        if (v17 == 9) 
            goto addr_406af0_3;
        if (reinterpret_cast<int1_t>(v17 == 94)) 
            goto addr_406ac3_6;
    } else {
        v18 = 2;
        goto addr_406b00_8;
    }
    v18 = 1;
    addr_406b00_8:
    bl19 = 0;
    edi20 = reinterpret_cast<void*>(0);
    while (1) {
        if (reinterpret_cast<int1_t>(v17 == 34)) {
            v4 = reinterpret_cast<void*>(-(reinterpret_cast<unsigned char>(eax15) - (reinterpret_cast<unsigned char>(eax15) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax15) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax15) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(v4) < 1))))));
        }
        ebp21 = 1;
        if (!reinterpret_cast<int1_t>(v17 == 94)) 
            goto addr_406c3b_13;
        if (v4 || a1 != 25) {
            if (reinterpret_cast<int1_t>(v17 == 94)) {
                eax22 = fun_404de0();
                ecx23 = g4133d8;
                fun_404d70(eax22, ecx23);
                esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 + 4 - 4 - 4 - 4 + 8 + 4);
                v17 = reinterpret_cast<void**>(94);
                goto addr_406c3b_13;
            }
        } else {
            eax24 = fun_404de0();
            esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 + 4);
            v17 = eax24;
            eax25 = reinterpret_cast<uint32_t>(eax24 - 10);
            if (eax25 > 0x73) 
                goto addr_406c3b_13;
            ecx26 = 0;
            *reinterpret_cast<signed char*>(&ecx26) = *reinterpret_cast<signed char*>(eax25 + reinterpret_cast<int32_t>(fun_406f4c));
            switch (ecx26) {
                addr_406c14_19:
            case 0:
            case 2:
            case 7:
                bl19 = 0;
                ebp21 = 0;
                addr_406c3b_13:
            case 11:
                if (ebp21) {
                    eax27 = v17 + 1;
                    if (reinterpret_cast<unsigned char>(eax27) > reinterpret_cast<unsigned char>(93)) 
                        goto addr_406c58_21;
                    ecx28 = 0;
                    *reinterpret_cast<signed char*>(&ecx28) = *reinterpret_cast<signed char*>(eax27 + 0x407010);
                    switch (ecx28) {
                    case 0:
                    case 2:
                        bl19 = 6;
                        break;
                    case 1:
                    case 3:
                        bl19 = 5;
                        break;
                    case 4:
                        bl19 = 1;
                        break;
                    case 5:
                        bl19 = 7;
                        break;
                    case 6:
                        bl19 = 8;
                        break;
                    case 7:
                        bl19 = 9;
                        break;
                    case 8:
                        bl19 = 11;
                        break;
                    case 9:
                        bl19 = 4;
                        break;
                    case 10:
                        if (v18 || (zf29 = g413408 == 0, zf29)) {
                            bl19 = 0;
                            break;
                        } else {
                            bl19 = 1;
                            break;
                        }
                    case 11:
                    case 13:
                        bl19 = 12;
                        break;
                    case 12:
                        bl19 = 2;
                        break;
                    case 14:
                    case 15:
                    case 16:
                    case 17:
                        bl19 = 13;
                        break;
                    case 18:
                        bl19 = 3;
                        break;
                        addr_406c58_21:
                    case 19:
                        eax30 = 0;
                        *reinterpret_cast<void***>(&eax30) = v17;
                        bl19 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(1 - reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax30 + 0x4149c0) & 1) < 1)) & 10);
                    }
                }
                if (bl19 == 12 && (a1 == 24 && reinterpret_cast<int1_t>(v17 == 60))) {
                    eax31 = fun_404de0();
                    esp32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 + 4);
                    if (!reinterpret_cast<int1_t>(eax31 == 60)) {
                        ecx33 = g4133d8;
                        fun_404d70(eax31, ecx33);
                        esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp32) - 4 - 4 - 4 + 8 + 4);
                        goto addr_406d36_41;
                    } else {
                        bl19 = 6;
                        eax34 = fun_405c20(esi9, reinterpret_cast<int32_t>(esp32) + 24, reinterpret_cast<int32_t>(esp32) + 44);
                        esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp32) - 4 - 4 - 4 - 4 + 12 + 4);
                        v17 = reinterpret_cast<void**>(10);
                        esi9 = eax34;
                        goto addr_406d36_41;
                    }
                }
                if (bl19 != 1) 
                    goto addr_406d36_41;
                if (!v18) 
                    goto addr_406d0e_45;
                if (a1 != 25) {
                    addr_406d36_41:
                    ecx35 = 0;
                    *reinterpret_cast<unsigned char*>(&ecx35) = v18;
                    eax36 = 0;
                    *reinterpret_cast<unsigned char*>(&eax36) = bl19;
                    v18 = *reinterpret_cast<unsigned char*>(eax36 + ((ecx35 << 3) - ecx35) * 2 + 0x414648);
                } else {
                    v18 = 64;
                }
                if (v18 == 64) 
                    goto addr_406e99_49;
                if (v18 & 32) {
                    eax37 = v17;
                    ecx38 = g4133f4;
                    v39 = eax37;
                    *reinterpret_cast<unsigned char*>(&eax37) = v18;
                    fun_403220(ecx38, (reinterpret_cast<unsigned char>(eax37) & 0xdf) + 0x3e8, v39, v13, v10, v7);
                    esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 - 4 - 4 + 4 + 12);
                }
                if (v18) {
                    *reinterpret_cast<void***>(esi9) = v17;
                    ++esi9;
                    if (a3 == esi9) {
                        zf40 = g4133fc == 0;
                        if (!zf40) {
                            ebp41 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi20) + 0x400);
                            if (reinterpret_cast<uint32_t>(edi20) > reinterpret_cast<uint32_t>(ebp41) || (eax42 = g4133fc, eax43 = reinterpret_cast<void**>(realloc(eax42, ebp41)), esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 - 4 + 4 + 8), g4133fc = eax43, !eax43)) {
                                eax44 = g4133f4;
                                fun_403220(eax44, 0x419, v13, v10, v7, v5);
                                esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 - 4 + 4 + 8);
                            }
                            esi45 = g4133fc;
                            eax46 = g4133fc;
                            esi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi45) + reinterpret_cast<uint32_t>(edi20));
                            eax47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax46) + reinterpret_cast<uint32_t>(ebp41));
                            edi20 = ebp41;
                        } else {
                            eax48 = fun_40acf0(0x800);
                            g4133fc = eax48;
                            ecx49 = g4133fc;
                            edi20 = reinterpret_cast<void*>(0x800);
                            _mbsnbcpy(ecx49, v12, 0x400);
                            esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 + 4 + 12);
                            esi50 = g4133fc;
                            esi9 = esi50 + 0x400;
                            eax51 = g4133fc;
                            eax47 = eax51 + 0x800;
                        }
                        a3 = eax47;
                    }
                } else {
                    *reinterpret_cast<signed char*>(esi9 + 0xffffffff) = 32;
                    esi9 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi9 - 1) + 1);
                    ++g4133f4;
                    g4133f0 = reinterpret_cast<void**>(1);
                    eax52 = fun_404de0();
                    esp53 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 + 4);
                    g4133f0 = reinterpret_cast<void**>(0);
                    if (eax52 == 32 || reinterpret_cast<int1_t>(eax52 == 9)) {
                        v18 = 2;
                        addr_406dc2_62:
                        eax52 = fun_404de0();
                        esp53 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp53) - 4 + 4);
                        if (eax52 == 32) 
                            goto addr_406dc2_62;
                        if (eax52 == 9) 
                            goto addr_406dc2_62;
                    }
                    ecx54 = g4133d8;
                    fun_404d70(eax52, ecx54);
                    esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp53) - 4 - 4 - 4 + 8 + 4);
                }
                addr_406e8b_65:
                eax15 = fun_404de0();
                esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 + 4);
                v17 = eax15;
                break;
                addr_406d0e_45:
                v4 = reinterpret_cast<void*>(0);
                fun_406940(0);
                esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 + 4 + 4);
                ++g4133f4;
                goto addr_406e8b_65;
            case 1:
            case 3:
            case 4:
            case 5:
            case 6:
            case 8:
            case 9:
            case 10:
                *reinterpret_cast<void***>(esi9) = reinterpret_cast<void**>(94);
                ++esi9;
                if (a3 == esi9) {
                    zf55 = g4133fc == 0;
                    if (!zf55) {
                        ebx56 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi20) + 0x400);
                        if (reinterpret_cast<uint32_t>(edi20) > reinterpret_cast<uint32_t>(ebx56) || (eax57 = g4133fc, eax58 = reinterpret_cast<void**>(realloc(eax57, ebx56)), esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 - 4 + 4 + 8), g4133fc = eax58, !eax58)) {
                            eax59 = g4133f4;
                            fun_403220(eax59, 0x419, v13, v10, v7, v5);
                            esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 - 4 + 4 + 8);
                        }
                        esi60 = g4133fc;
                        eax61 = g4133fc;
                        esi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi60) + reinterpret_cast<uint32_t>(edi20));
                        eax62 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax61) + reinterpret_cast<uint32_t>(ebx56));
                        edi20 = ebx56;
                    } else {
                        eax63 = fun_40acf0(0x800);
                        g4133fc = eax63;
                        ecx64 = g4133fc;
                        edi20 = reinterpret_cast<void*>(0x800);
                        _mbsnbcpy(ecx64, v12, 0x400);
                        esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 + 4 + 12);
                        esi65 = g4133fc;
                        esi9 = esi65 + 0x400;
                        eax66 = g4133fc;
                        eax62 = eax66 + 0x800;
                    }
                    a3 = eax62;
                    eax67 = g4133fc;
                    v12 = eax67;
                    goto addr_406c14_19;
                }
            }
        }
    }
    addr_406e99_49:
    eax68 = g4133d8;
    fun_404d70(v17, eax68);
    if (reinterpret_cast<unsigned char>(v12) < reinterpret_cast<unsigned char>(esi9)) {
        ebx69 = _ismbcspace;
        do {
            edi70 = esi9 + 0xffffffff;
            v71 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi70));
            eax72 = reinterpret_cast<int32_t>(ebx69(v71));
            if (!eax72) 
                break;
            esi9 = edi70;
        } while (reinterpret_cast<unsigned char>(v12) < reinterpret_cast<unsigned char>(edi70));
    }
    *reinterpret_cast<void***>(esi9) = reinterpret_cast<void**>(0);
    zf73 = g4133fc == 0;
    if (zf73) {
        eax74 = fun_40add0(v12, v13, v10);
        g4133fc = eax74;
    } else {
        esi75 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi9) - reinterpret_cast<unsigned char>(g4133fc));
        eax76 = g4133fc;
        eax77 = reinterpret_cast<void**>(realloc(eax76, reinterpret_cast<uint32_t>(esi75) + 1));
        if (eax77) {
            g4133fc = eax77;
            return;
        }
    }
    return;
    addr_406ac3_6:
    eax78 = fun_404de0();
    esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 + 4);
    if (eax78 == 32 || eax78 == 9) {
        addr_406af0_3:
        v18 = 2;
        eax15 = fun_406880(0);
        esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 + 4 + 4);
        v17 = eax15;
        goto addr_406b00_8;
    } else {
        ecx79 = g4133d8;
        eax15 = fun_404d70(eax78, ecx79);
        esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 - 4 + 8 + 4);
        v17 = reinterpret_cast<void**>(94);
        goto addr_406b00_8;
    }
}

void** fun_407ad0(void** a1) {
    void* esp2;
    void* esp3;
    void** v4;
    void** edi5;
    int32_t eax6;
    void* esp7;
    int32_t ecx8;
    int32_t eax9;
    signed char v10;
    int32_t eax11;
    void* edx12;
    int32_t ecx13;
    signed char v14;
    void** eax15;
    void** esi16;
    void* esp17;
    void** edi18;
    int32_t eax19;
    int32_t ecx20;
    int32_t eax21;
    signed char* eax22;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x104);
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4);
    v4 = edi5;
    eax6 = reinterpret_cast<int32_t>(_splitpath(a1, reinterpret_cast<int32_t>(esp3) + 4, reinterpret_cast<int32_t>(esp2) + 4, 0, 0));
    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 20);
    ecx8 = -1;
    eax9 = eax6 - eax6;
    do {
        if (!ecx8) 
            break;
        --ecx8;
    } while (v10 != *reinterpret_cast<signed char*>(&eax9));
    eax11 = eax9 - eax9;
    edx12 = reinterpret_cast<void*>(~ecx8 - 1);
    ecx13 = -1;
    do {
        if (!ecx13) 
            break;
        --ecx13;
    } while (v14 != *reinterpret_cast<signed char*>(&eax11));
    eax15 = fun_40acc0(~ecx13 + reinterpret_cast<int32_t>(edx12) - 1 + 1, v4);
    esi16 = eax15;
    esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 4 - 4);
    edi18 = esi16;
    eax19 = reinterpret_cast<int32_t>(_makepath(esi16, reinterpret_cast<int32_t>(esp17) - 4 + 16, reinterpret_cast<int32_t>(esp17) + 16, 0, 0));
    ecx20 = -1;
    eax21 = eax19 - eax19;
    do {
        if (!ecx20) 
            break;
        --ecx20;
        ++edi18;
        ++esi16;
    } while (*reinterpret_cast<void***>(edi18) != *reinterpret_cast<void***>(&eax21));
    eax22 = reinterpret_cast<signed char*>(~ecx20 + reinterpret_cast<unsigned char>(esi16) - 2);
    if (*eax22 == 92 || *eax22 == 47) {
        *eax22 = 0;
    }
    return esi16;
}

void fun_407d80() {
    return;
}

int32_t GetModuleHandleA = 0x15750;

int32_t GetProcAddress = 0x1573e;

signed char fun_40aaf0(signed char cl) {
    int32_t eax2;

    eax2 = reinterpret_cast<int32_t>(GetModuleHandleA());
    if (eax2) {
        GetProcAddress();
        goto eax2;
    } else {
        goto "kernel32.dll";
    }
}

int32_t GetVersion = 0x15764;

unsigned char fun_40ab20() {
    uint32_t eax1;

    eax1 = reinterpret_cast<uint32_t>(GetVersion());
    if (!(eax1 & 0x80000000)) {
        return 0;
    } else {
        return reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax1) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax1) < 4))))) + 1;
    }
}

int32_t _ismbcalnum = 0x1560a;

void fun_40a630() {
    int32_t ebx1;
    int32_t esi2;
    int32_t eax3;
    int32_t eax4;

    ebx1 = 0;
    esi2 = _ismbcalnum;
    do {
        eax3 = reinterpret_cast<int32_t>(esi2(ebx1));
        if (eax3) {
            eax4 = 0;
            *reinterpret_cast<signed char*>(&eax4) = *reinterpret_cast<signed char*>(&ebx1);
            *reinterpret_cast<unsigned char*>(eax4 + 0x4149c0) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax4 + 0x4149c0) | 1);
        }
        ++ebx1;
    } while (ebx1 <= 0x7f);
    return;
}

void fun_407c10(int32_t* a1) {
    int32_t* edi2;
    int32_t ecx3;

    edi2 = a1;
    ecx3 = 0x100;
    while (ecx3) {
        --ecx3;
        *edi2 = 0;
        ++edi2;
    }
    return;
}

int32_t _strdup = 0x15628;

int32_t fun_40a890(int32_t a1, int32_t a2, int32_t a3) {
    void* esp4;
    void* esp5;
    int32_t edi6;
    void* esp7;
    void* esp8;
    void** esp9;
    void** esp10;
    int32_t edi11;
    void* esp12;
    int32_t ebx13;
    int32_t eax14;
    void* esp15;
    void* esp16;
    int32_t eax17;
    int32_t eax18;
    int32_t eax19;
    int32_t eax20;
    int32_t eax21;
    int32_t eax22;
    int32_t eax23;

    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x408 - 4 - 4 - 4 - 4);
    if (a3) {
        esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4);
        edi6 = _splitpath;
        edi6(a2, reinterpret_cast<int32_t>(esp5) + 20, reinterpret_cast<int32_t>(esp4) + 0x214, 0, 0);
        esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 + 4);
        edi6(a1, 0, 0, reinterpret_cast<int32_t>(esp7) + 36, reinterpret_cast<int32_t>(esp7) + 0x124);
        esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) + 20 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
        esp9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp8) + 20 - 4 - 4);
        esp10 = esp9 - 1;
        edi11 = _makepath;
        edi11(esp10 + 0xc7, esp9 + 5, reinterpret_cast<int32_t>(esp8) + 0x224, reinterpret_cast<int32_t>(esp8) + 36, reinterpret_cast<int32_t>(esp8) + 0x124);
        esp12 = reinterpret_cast<void*>(esp10 - 1 - 1 - 1 + 1);
        ebx13 = _access;
        eax14 = reinterpret_cast<int32_t>(ebx13(reinterpret_cast<int32_t>(esp12) + 0x324, 0));
        esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) + 20 - 4 - 4 - 4 + 4 + 8);
        if (eax14) {
            edi11(reinterpret_cast<int32_t>(esp15) + 0x310, 0, 0, reinterpret_cast<int32_t>(esp15) + 16, reinterpret_cast<int32_t>(esp15) + 0x110);
            esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp15) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            eax17 = reinterpret_cast<int32_t>(ebx13(reinterpret_cast<int32_t>(esp16) + 0x324, 0));
            if (eax17) {
                eax18 = reinterpret_cast<int32_t>(__p__iob("WARNING:  missing %s; displaying error numbers without messages.\n", a1));
                fprintf(eax18 + 64, "WARNING:  missing %s; displaying error numbers without messages.\n", a1);
                goto addr_40a9d8_5;
            } else {
                eax19 = reinterpret_cast<int32_t>(_strdup(reinterpret_cast<int32_t>(esp16) + 20 - 4 - 4 - 4 + 4 + 8 + 0x310));
                g414ac4 = eax19;
                eax20 = 0;
            }
        } else {
            eax21 = reinterpret_cast<int32_t>(_strdup(reinterpret_cast<int32_t>(esp15) + 0x310));
            g414ac4 = eax21;
            eax20 = 0;
        }
    } else {
        eax22 = reinterpret_cast<int32_t>(_access(a1, 0));
        if (eax22) {
            addr_40a9d8_5:
            eax20 = 1;
        } else {
            eax23 = reinterpret_cast<int32_t>(_strdup(a1));
            g414ac4 = eax23;
            eax20 = 0;
        }
    }
    return eax20;
}

struct s43 {
    signed char[4] pad4;
    void** f4;
};

int32_t g4133c0 = 0;

void** fun_40ce40();

void fun_408270();

void fun_40a3c0();

int32_t fun_401f10();

int32_t fun_407f70(int32_t a1, struct s43* a2, int32_t a3) {
    void** v4;
    void** v5;
    void** ebx6;
    void** v7;
    void** esi8;
    void** v9;
    void** edi10;
    void** eax11;
    void** eax12;
    void** esi13;
    signed char* eax14;
    signed char* ebx15;
    void** edi16;
    int32_t ecx17;
    signed char* edi18;
    int32_t eax19;
    void** ecx20;
    void** eax21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** eax25;
    void** v26;
    int1_t zf27;
    int1_t zf28;
    void** eax29;
    int32_t eax30;
    void** eax31;
    int32_t eax32;
    void** eax33;
    void** eax34;
    void** eax35;
    int32_t eax36;
    int1_t zf37;
    int1_t zf38;
    int1_t zf39;
    void** eax40;
    int32_t eax41;

    v4 = reinterpret_cast<void**>(__return_address());
    g4133c0 = 0;
    v5 = ebx6;
    v7 = esi8;
    v9 = edi10;
    eax11 = fun_40add0("MAKEDIR", v9, v7);
    eax12 = fun_40ce40();
    esi13 = eax12;
    fun_401980(eax11, esi13, 0);
    eax14 = reinterpret_cast<signed char*>(getenv("MAKEFLAGS"));
    ebx15 = eax14;
    if (ebx15) {
        edi16 = image_base_;
        ecx17 = -1;
        edi18 = reinterpret_cast<signed char*>(edi16 + 10);
        eax19 = reinterpret_cast<int32_t>(eax14) - reinterpret_cast<int32_t>(eax14);
        do {
            if (!ecx17) 
                break;
            --ecx17;
            ++edi18;
            ++esi13;
        } while (*edi18 != *reinterpret_cast<signed char*>(&eax19));
        ecx20 = reinterpret_cast<void**>(~ecx17 - 1);
        eax21 = image_base_;
        _mbsnbcpy(eax21 + 10, ebx15, ecx20);
    }
    eax22 = image_base_;
    g4133b4 = 1;
    eax23 = fun_40add0(eax22 + 10, 6, v9);
    eax24 = fun_40add0("MAKEFLAGS", eax23, 6);
    eax25 = fun_401980(eax24, eax23, 6);
    if (ebx15) {
        do {
            *reinterpret_cast<signed char*>(&eax25) = *ebx15;
            if (!*reinterpret_cast<signed char*>(&eax25)) 
                break;
            v26 = eax25;
            eax25 = fun_4086d0(*reinterpret_cast<signed char*>(&v26), 1);
            ++ebx15;
        } while (ebx15);
    }
    fun_408320(a1 - 1, &a2->f4);
    zf27 = g4133cc == 0;
    if (zf27) {
        fun_403420(v9, v7, v5, v4);
    }
    zf28 = (g4133d4 & 2) == 0;
    if (zf28 && ((fun_407d90(), g4133f8 = reinterpret_cast<void**>("tools.ini"), eax29 = g413ff8, eax30 = fun_405860(ecx20, "INIT", "tools.ini", eax29), !!eax30) && (g413408 = reinterpret_cast<void**>(1), ++g4133f4, fun_408ae0(), eax31 = g4133d8, eax32 = reinterpret_cast<int32_t>(fclose(eax31)), eax32 == -1))) {
        eax33 = g4133f8;
        fun_403220(0, 0x424, eax33, v9, v7, v5);
    }
    eax34 = image_base_;
    eax35 = fun_40add0(eax34, v9, v7);
    eax36 = reinterpret_cast<int32_t>(_putenv(eax35));
    if (eax36 == -1) {
        fun_403220(0, 0x41f, v9, v7, v5, v4);
    }
    zf37 = g4133e0 == 0;
    if (zf37) {
        fun_4085f0(ecx20);
    }
    fun_408270();
    fun_408190();
    g413424 = reinterpret_cast<void**>(0);
    fun_40a3c0();
    zf38 = (g4133d4 & 1) == 0;
    if (!zf38) {
        fun_409000(v9);
        fun_4090a0(v9);
        fun_409170();
    }
    zf39 = g413a74 == 0;
    if (!zf39) {
        eax40 = g413a74;
        free(eax40);
    }
    eax41 = fun_401f10();
    _chdir(esi13);
    return eax41;
}

int32_t __p__environ = 0x155a8;

struct s44 {
    signed char f0;
    void** f1;
};

int32_t _mbsupr = 0x1559e;

void fun_408270() {
    void** v1;
    void** edi2;
    void** v3;
    void** ebp4;
    void**** eax5;
    void*** esi6;
    void** v7;
    struct s44* eax8;
    void** eax9;
    int32_t eax10;
    void** v11;
    void** eax12;
    void** eax13;
    void** eax14;
    void** eax15;

    v1 = edi2;
    v3 = ebp4;
    eax5 = reinterpret_cast<void****>(__p__environ());
    esi6 = *eax5;
    if (*esi6) {
        do {
            v7 = *esi6;
            eax8 = reinterpret_cast<struct s44*>(_mbschr(v7, 61));
            if (eax8 && ((eax9 = *esi6, eax10 = reinterpret_cast<int32_t>(_mbsnbicmp(eax9, "MAKEFLAGS", 8)), !!eax10) && ((eax8->f0 = 0, !!*reinterpret_cast<void***>(*esi6)) && (v11 = *esi6, eax12 = fun_40add0(v11, v3, v1), eax13 = reinterpret_cast<void**>(_mbsupr(eax12)), eax14 = fun_40add0(&eax8->f1, v3, v1), eax8->f0 = 61, g4133b4 = 0, eax15 = fun_401980(eax13, eax14, 4), !eax15)))) {
                free(eax13);
                free(eax14);
            }
            esi6 = esi6 + 4;
        } while (*esi6);
    }
    return;
}

void fun_40a3c0() {
    void** eax1;
    void** ecx2;
    void** v3;
    void** v4;
    void* esp5;
    void* eax6;
    void** edi7;
    void** v8;
    int32_t ecx9;
    void** edi10;
    void* esi11;
    void** v12;
    void** eax13;
    int32_t eax14;
    void** ebx15;
    void** eax16;
    int32_t eax17;
    void** ebp18;
    void** ecx19;
    void** ecx20;

    eax1 = g413a34;
    g413a34 = reinterpret_cast<void**>(0);
    ecx2 = g413a2c;
    v3 = eax1;
    v4 = ecx2;
    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16 - 4 - 4 - 4 - 4);
    if (ecx2) {
        do {
            eax6 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v4) - reinterpret_cast<unsigned char>(v4));
            edi7 = *reinterpret_cast<void***>(v4 + 4);
            v8 = *reinterpret_cast<void***>(v4 + 4);
            ecx9 = -1;
            do {
                if (!ecx9) 
                    break;
                --ecx9;
                ++edi7;
            } while (*reinterpret_cast<void***>(edi7) != *reinterpret_cast<void***>(&eax6));
            edi10 = v3;
            esi11 = reinterpret_cast<void*>(~ecx9 - 1);
            if (edi10) {
                do {
                    v12 = *reinterpret_cast<void***>(edi10 + 8);
                    eax13 = fun_40a390(v12);
                    eax14 = reinterpret_cast<int32_t>(_mbsnbicmp(v8, eax13, esi11));
                    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 + 4 + 12);
                    if (eax14 || *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax13) + reinterpret_cast<uint32_t>(esi11)) != 46 && *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax13) + reinterpret_cast<uint32_t>(esi11)) != 0x7b) {
                        edi10 = *reinterpret_cast<void***>(edi10);
                    } else {
                        ebx15 = edi10;
                        if (!*reinterpret_cast<void***>(edi10 + 4)) {
                            v3 = *reinterpret_cast<void***>(edi10);
                        } else {
                            *reinterpret_cast<void***>(*reinterpret_cast<void***>(edi10 + 4)) = *reinterpret_cast<void***>(edi10);
                        }
                        if (*reinterpret_cast<void***>(edi10)) {
                            *reinterpret_cast<void***>(*reinterpret_cast<void***>(edi10) + 4) = *reinterpret_cast<void***>(edi10 + 4);
                        }
                        edi10 = *reinterpret_cast<void***>(edi10);
                        *reinterpret_cast<void***>(ebx15) = reinterpret_cast<void**>(0);
                        eax16 = g413a34;
                        eax17 = fun_40a310(ebx15, eax16);
                        esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 + 8 + 4);
                        if (!eax17) {
                            ebp18 = *reinterpret_cast<void***>(ebx15 + 12);
                            if (ebp18) {
                                do {
                                    ecx19 = *reinterpret_cast<void***>(ebp18 + 4);
                                    fun_40b110(ecx19, ecx19, reinterpret_cast<int32_t>(esp5) + 16, 0, 0, 0, 0, 0);
                                    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 28 + 4);
                                    ebp18 = *reinterpret_cast<void***>(ebp18);
                                } while (ebp18);
                            }
                            *reinterpret_cast<void***>(ebx15 + 16) = reinterpret_cast<void**>(0);
                            fun_40ae30(0x413a34, ebx15);
                            esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 + 8 + 4);
                        }
                    }
                } while (edi10);
            }
            ecx20 = *reinterpret_cast<void***>(v4);
            v4 = ecx20;
        } while (ecx20);
    }
    if (v3) {
        fun_40a2a0(v3, 1);
    }
    return;
}

int32_t fun_401f10() {
    void* ebp1;
    void** v2;
    void** ebx3;
    void** v4;
    void** esi5;
    void** v6;
    void** edi7;
    void** esi8;
    void** eax9;
    void** ecx10;
    int32_t eax11;
    void** v12;
    void** edx13;
    void** v14;
    void** eax15;
    int1_t zf16;
    void** edx17;
    void** v18;
    int32_t eax19;
    int32_t eax20;
    void** eax21;
    void** v22;
    void** eax23;
    struct s5** ecx24;
    struct s5** v25;
    void** eax26;
    int1_t zf27;
    int32_t v28;
    int32_t eax29;
    void** eax30;
    void** v31;
    void** eax32;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v2 = ebx3;
    v4 = esi5;
    v6 = edi7;
    esi8 = g4133dc;
    if (!esi8) {
        addr_402041_2:
        return 0;
    } else {
        do {
            eax9 = g4133dc;
            ecx10 = *reinterpret_cast<void***>(eax9 + 4);
            eax11 = reinterpret_cast<int32_t>(_mbspbrk(ecx10, "*?"));
            if (!eax11) {
                ecx10 = g4133d0;
                v12 = ecx10;
                edx13 = g4133dc;
                v14 = *reinterpret_cast<void***>(edx13 + 4);
                eax15 = fun_402080(v14, *reinterpret_cast<signed char*>(&v12), reinterpret_cast<int32_t>(ebp1) - 8, 0);
                if (reinterpret_cast<signed char>(eax15) >= reinterpret_cast<signed char>(0)) 
                    continue;
                zf16 = (g4133d4 & 8) == 0;
                if (!zf16) 
                    break;
            } else {
                fun_40ceb4(ecx10, v6, v4, v2);
                edx17 = g4133dc;
                v18 = *reinterpret_cast<void***>(edx17 + 4);
                eax19 = fun_40cd20(v18, reinterpret_cast<int32_t>(ebp1) - 4, reinterpret_cast<int32_t>(ebp1) - 12, v6, v4);
                if (eax19) {
                    do {
                        eax20 = fun_404c90(reinterpret_cast<int32_t>(ebp1) - 4);
                        eax21 = g4133dc;
                        v22 = *reinterpret_cast<void***>(eax21 + 4);
                        eax23 = fun_40c340(v22, eax20);
                        ecx24 = reinterpret_cast<struct s5**>(reinterpret_cast<int32_t>(ebp1) - 4);
                        fun_404ca0(ecx24, v6, v4);
                        *reinterpret_cast<void***>(&ecx24) = g4133d0;
                        v25 = ecx24;
                        eax26 = fun_402080(eax23, *reinterpret_cast<signed char*>(&v25), reinterpret_cast<int32_t>(ebp1) - 8, 0);
                        free(eax23);
                        if (reinterpret_cast<signed char>(eax26) >= reinterpret_cast<signed char>(0)) 
                            continue;
                        zf27 = (g4133d4 & 8) == 0;
                        if (!zf27) 
                            goto addr_40204d_9;
                        eax29 = fun_40ce00(reinterpret_cast<int32_t>(ebp1) - 4, v28);
                    } while (eax29);
                } else {
                    eax30 = g4133dc;
                    v31 = *reinterpret_cast<void***>(eax30 + 4);
                    fun_403220(0, 0x42d, v31, v6, v4, v2);
                }
            }
            eax32 = *reinterpret_cast<void***>(esi8);
            g4133dc = eax32;
            fun_40ada0(esi8);
            esi8 = g4133dc;
        } while (esi8);
        goto addr_402041_2;
    }
    fun_402c40(esi8, v6, v4);
    return 0xff;
    addr_40204d_9:
    fun_402c40(esi8, v6, v4);
    return -1;
}

unsigned char g40ea1c;

void** fun_409730(void** a1, void** a2) {
    unsigned char bl3;
    void** eax4;
    void* ecx5;
    void** eax6;
    void** ebx7;

    if (*reinterpret_cast<unsigned char*>(&a1) != 25) {
        if (*reinterpret_cast<unsigned char*>(&a1)) {
            bl3 = 0;
            if (*reinterpret_cast<unsigned char*>(&a1) <= 21) {
                bl3 = reinterpret_cast<unsigned char>(1 + reinterpret_cast<uint1_t>(18 < *reinterpret_cast<unsigned char*>(&a1)));
            }
        } else {
            bl3 = 4;
        }
    } else {
        bl3 = 3;
    }
    eax4 = reinterpret_cast<void**>(0);
    ecx5 = reinterpret_cast<void*>(0);
    *reinterpret_cast<unsigned char*>(&eax4) = g40ea1c;
    *reinterpret_cast<unsigned char*>(&ecx5) = bl3;
    if (!*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax4 + reinterpret_cast<unsigned char>(eax4) * 4) + reinterpret_cast<int32_t>(ecx5) + 0x414880)) {
        eax6 = g4133f4;
        eax4 = fun_403220(eax6, 0x3ff, ebx7, __return_address(), a1, a2);
    }
    g40ea1c = bl3;
    return eax4;
}

void** fun_409d70(void** a1) {
    int32_t esi2;
    void** eax3;
    int32_t eax4;
    void** eax5;
    void** edi6;
    void** esi7;
    void** eax8;
    void** eax9;

    esi2 = _mbstok;
    eax3 = reinterpret_cast<void**>(esi2(a1, " \t"));
    eax4 = reinterpret_cast<int32_t>(esi2(0, " \t"));
    if (eax4) {
        eax5 = g4133f4;
        fun_403220(eax5, 0x409, eax3, edi6, esi7, __return_address());
    }
    eax8 = g4133f4;
    if (!eax3) {
        fun_403220(eax8, 0x417, edi6, esi7, __return_address(), a1);
    }
    eax9 = fun_407b70(eax3);
    return reinterpret_cast<unsigned char>(eax9) - (reinterpret_cast<unsigned char>(eax9) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax9) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax9) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax9) < reinterpret_cast<unsigned char>(1))))) + 1;
}

void** fun_409de0(void* a1) {
    void** esi2;
    int32_t edi3;
    void** eax4;
    int32_t eax5;
    void** eax6;
    void** edi7;
    void** esi8;
    void** ebx9;
    void** edi10;
    void** v11;
    void** eax12;
    int32_t eax13;
    void** eax14;
    void** v15;

    esi2 = reinterpret_cast<void**>(0);
    edi3 = _mbstok;
    eax4 = reinterpret_cast<void**>(edi3(a1, " \t"));
    eax5 = reinterpret_cast<int32_t>(edi3(0, " \t"));
    if (eax5) {
        eax6 = g4133f4;
        fun_403220(eax6, 0x409, eax4, edi7, esi8, ebx9);
    }
    if (!eax4) {
        edi10 = v11;
    } else {
        eax12 = fun_40ca30(eax4);
        edi10 = eax12;
        if (edi10) {
            addr_409e4b_6:
            eax13 = reinterpret_cast<int32_t>(_access(edi10, 0));
            if (!eax13) {
                esi2 = reinterpret_cast<void**>(1);
                goto addr_409e60_8;
            }
        }
    }
    eax14 = g4133f4;
    fun_403220(eax14, 0x417, edi7, esi8, ebx9, v15);
    goto addr_409e4b_6;
    addr_409e60_8:
    free(edi10);
    return esi2;
}

void** fun_409ae0(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** esi5;
    struct s34* esi6;
    int1_t below_or_equal7;
    void** ecx8;
    int32_t eax9;
    int32_t eax10;
    void** eax11;
    int1_t cf12;
    int1_t zf13;
    struct s29* eax14;
    void** eax15;
    void** eax16;

    v3 = reinterpret_cast<void**>(__return_address());
    v4 = esi5;
    esi6 = reinterpret_cast<struct s34*>(0x40ee30);
    below_or_equal7 = reinterpret_cast<uint32_t>(g40ea0c) <= 0x40ee30;
    if (!below_or_equal7) {
        do {
            *reinterpret_cast<unsigned char*>(&ecx8) = esi6->f0;
            if (*reinterpret_cast<unsigned char*>(&ecx8) <= 21) {
                eax9 = reinterpret_cast<int32_t>(fun_4095c0);
                if (*reinterpret_cast<unsigned char*>(&ecx8) <= 18) {
                    eax9 = reinterpret_cast<int32_t>(fun_409300);
                }
                eax10 = reinterpret_cast<int32_t>(eax9(ecx8));
                if (!eax10) {
                    eax11 = g4133f4;
                    fun_403220(eax11, 0x438, v4, v3, a1, a2);
                }
            } else {
                fun_409a90(ecx8, esi6);
            }
            esi6 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esi6) + 8);
            cf12 = reinterpret_cast<uint32_t>(esi6) < reinterpret_cast<uint32_t>(g40ea0c);
        } while (cf12);
    }
    zf13 = reinterpret_cast<int1_t>(g40ea24 == 0x40fe30);
    if (!zf13 || (eax14 = g40ea24, eax14->f0 != 22)) {
        eax15 = g4133f4;
        eax16 = fun_403220(eax15, 0x3ff, v4, v3, a1, a2);
        return eax16;
    } else {
        return reinterpret_cast<uint32_t>(eax14) - (reinterpret_cast<uint32_t>(eax14) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax14) < reinterpret_cast<uint32_t>(eax14) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax14->f4) < reinterpret_cast<unsigned char>(1)))) + 1;
    }
}

/* (image base) */
struct s29* image_base_ = reinterpret_cast<struct s29*>(0x410e28);

void** fun_409be0() {
    void** v1;
    void** ebx2;
    void** v3;
    void** esi4;
    void** v5;
    void** edi6;
    void** v7;
    void** ebp8;
    struct s29* edx9;
    unsigned char eax10;
    void** ecx11;
    int1_t zf12;
    int32_t esi13;
    int1_t zf14;
    struct s29* eax15;
    int32_t ecx16;
    int32_t edx17;
    struct s29* eax18;
    int1_t zf19;
    struct s29* tmp32_20;
    struct s29* edx21;
    unsigned char eax22;
    void** ecx23;
    void** eax24;
    int32_t eax25;
    struct s29* eax26;
    struct s29* eax27;
    int1_t cf28;
    void** eax29;
    struct s29* eax30;
    int32_t ecx31;
    int32_t edx32;
    struct s29* tmp32_33;
    int1_t zf34;
    int1_t zf35;
    void** eax36;
    void** eax37;

    g40ea24 = reinterpret_cast<struct s29*>(0x40fe30);
    g40ea0c = reinterpret_cast<struct s34*>(0x40ee30);
    g40ea1c = 3;
    g40ea08 = 25;
    v1 = ebx2;
    v3 = esi4;
    v5 = edi6;
    v7 = ebp8;
    g40ea20 = 0;
    fun_409790(25, 0);
    edx9 = g40ea24;
    eax10 = g40ea10;
    ecx11 = g40ea14;
    edx9->f0 = eax10;
    edx9->f4 = ecx11;
    zf12 = g40ea20 == 0;
    if (zf12) {
        do {
            esi13 = 0;
            fun_409800();
            zf14 = *reinterpret_cast<signed char*>(&g40ea10) == 25;
            if (zf14 || (eax15 = g40ea24, ecx16 = 0, edx17 = 0, *reinterpret_cast<unsigned char*>(&ecx16) = eax15->f0, *reinterpret_cast<signed char*>(&edx17) = *reinterpret_cast<signed char*>(&g40ea10), *reinterpret_cast<unsigned char*>(ecx16 + 0x414860) < *reinterpret_cast<unsigned char*>(edx17 + 0x414860))) {
                addr_409ceb_4:
                if (!esi13) {
                    eax18 = g40ea24;
                    zf19 = image_base_ == eax18;
                    if (!zf19) {
                        tmp32_20 = reinterpret_cast<struct s29*>(reinterpret_cast<uint32_t>(g40ea24) + 8);
                        g40ea24 = tmp32_20;
                        edx21 = g40ea24;
                        eax22 = g40ea10;
                        ecx23 = g40ea14;
                        edx21->f0 = eax22;
                        edx21->f4 = ecx23;
                        continue;
                    } else {
                        eax24 = g4133f4;
                        fun_403220(eax24, 0x412, v7, v5, v3, v1);
                        continue;
                    }
                }
            } else {
                do {
                    eax25 = 0;
                    *reinterpret_cast<signed char*>(&eax25) = *reinterpret_cast<signed char*>(&g40ea10);
                    if (!*reinterpret_cast<signed char*>(eax25 + 0x414860)) {
                        eax26 = g40ea24;
                        if (eax26->f0 != 25) {
                            do {
                                fun_409b70(v7, v5, v3);
                                eax27 = g40ea24;
                            } while (eax27->f0 != 25);
                        }
                        esi13 = 1;
                        cf28 = reinterpret_cast<uint32_t>(g40ea24) < 0x40fe30;
                        if (!cf28) 
                            break;
                        eax29 = g4133f4;
                        fun_403220(eax29, 0x3ff, v7, v5, v3, v1);
                    } else {
                        fun_409b70(v7, v5, v3);
                    }
                    eax30 = g40ea24;
                    ecx31 = 0;
                    edx32 = 0;
                    *reinterpret_cast<unsigned char*>(&ecx31) = eax30->f0;
                    *reinterpret_cast<signed char*>(&edx32) = *reinterpret_cast<signed char*>(&g40ea10);
                } while (*reinterpret_cast<unsigned char*>(ecx31 + 0x414860) >= *reinterpret_cast<unsigned char*>(edx32 + 0x414860));
                goto addr_409ce3_16;
            }
            tmp32_33 = reinterpret_cast<struct s29*>(reinterpret_cast<uint32_t>(g40ea24) + 0xfffffff8);
            g40ea24 = tmp32_33;
            goto addr_409ceb_4;
            addr_409ce3_16:
            goto addr_409ceb_4;
            zf34 = g40ea20 == 0;
        } while (zf34);
    }
    zf35 = reinterpret_cast<int1_t>(g40ea24 == 0x40fe28);
    if (!zf35) {
        eax36 = g4133f4;
        fun_403220(eax36, 0x3ff, v7, v5, v3, v1);
    }
    eax37 = fun_409ae0(v7, v5);
    return eax37;
}

int32_t g414bfc = 0;

int32_t g414c00 = 0;

int32_t Sleep = 0x1579c;

int32_t g411b18;

uint32_t fun_40d09c(int32_t a1, int32_t a2, int32_t a3);

int32_t _onexit = 0x156b2;

uint32_t fun_40cee1(int32_t a1) {
    int32_t v2;
    int32_t ecx3;
    uint32_t eax4;
    int32_t ecx5;
    int32_t eax6;
    int32_t esi7;
    int1_t zf8;
    uint32_t eax9;
    int1_t less_or_equal10;

    v2 = reinterpret_cast<int32_t>(__return_address());
    ecx3 = g414bfc;
    if (!ecx3) {
        eax4 = reinterpret_cast<uint32_t>(GetVersion());
        ecx5 = g414bfc;
        if ((eax4 & 0xff) != 3 || !(eax4 & 0x80000000)) {
            ecx3 = ecx5 - 1;
        } else {
            ecx3 = ecx5 + 1;
        }
    }
    g414bfc = ecx3;
    if (!(reinterpret_cast<uint1_t>(ecx3 < 0) | reinterpret_cast<uint1_t>(ecx3 == 0))) {
        eax6 = g414c00;
        if (!(reinterpret_cast<uint1_t>(eax6 < 0) | reinterpret_cast<uint1_t>(eax6 == 0))) {
            esi7 = Sleep;
            do {
                esi7(0);
                eax6 = g414c00;
            } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax6 < 0) | reinterpret_cast<uint1_t>(eax6 == 0)));
        }
        g414c00 = eax6 + 1;
    }
    zf8 = g411b18 == -1;
    if (!zf8) {
        eax9 = fun_40d09c(v2, 0x411b18, 0x411b14);
    } else {
        eax9 = reinterpret_cast<uint32_t>(_onexit(v2));
    }
    less_or_equal10 = g414bfc <= 0;
    if (!less_or_equal10) {
        --g414c00;
    }
    return eax9;
}

void fun_40aa20(int32_t a1, void** a2) {
    int32_t eax3;
    void*** edx4;
    void** esi5;

    eax3 = 0;
    edx4 = reinterpret_cast<void***>(0x414ac8);
    esi5 = a2;
    do {
        if (!*edx4) 
            break;
        if (esi5 == *edx4) 
            goto addr_40aa5f_4;
        edx4 = edx4 + 8;
        ++eax3;
    } while (reinterpret_cast<uint32_t>(edx4) < reinterpret_cast<uint32_t>("WARNING:  missing %s; displaying error numbers without messages.\n"));
    if (eax3 < 20) {
        *reinterpret_cast<void***>(eax3 * 8 + 0x414ac8) = esi5;
        *reinterpret_cast<int32_t*>(eax3 * 8 + 0x414acc) = a1;
    }
    addr_40aa5f_4:
    return;
}

struct s3* fun_40a7a0(struct s3* a1) {
    struct s3* edi2;
    struct s3* eax3;
    struct s3* ebx4;
    struct s3* ebp5;
    int32_t esi6;
    int32_t eax7;
    int32_t ecx8;

    edi2 = a1;
    do {
        eax3 = edi2;
        edi2 = reinterpret_cast<struct s3*>(&edi2->f1);
    } while (eax3->f0 != 34);
    ebx4 = edi2;
    ebp5 = edi2;
    if (edi2->f0 != 34) {
        esi6 = __p__mbctype;
        while (1) {
            eax7 = reinterpret_cast<int32_t>(esi6());
            ecx8 = 0;
            *reinterpret_cast<signed char*>(&ecx8) = edi2->f0;
            if (!(*reinterpret_cast<unsigned char*>(ecx8 + eax7 + 1) & 4)) {
                if (edi2->f0 != 92) {
                    addr_40a7fb_7:
                    edi2 = reinterpret_cast<struct s3*>(&edi2->f1);
                    ebx4->f0 = edi2->f0;
                    ebx4 = reinterpret_cast<struct s3*>(&ebx4->f1);
                    if (edi2->f0 != 34) 
                        continue; else 
                        break;
                } else {
                    edi2 = reinterpret_cast<struct s3*>(&edi2->f1);
                    if (edi2->f1 != 0x6e) {
                        if (edi2->f1 != 0x74) {
                            if (edi2->f1 != 34) {
                                ebx4->f0 = 92;
                            } else {
                                edi2->f0 = 34;
                                goto addr_40a7fb_7;
                            }
                        } else {
                            edi2->f0 = 9;
                            goto addr_40a7fb_7;
                        }
                    } else {
                        edi2->f0 = 10;
                        goto addr_40a7fb_7;
                    }
                }
            } else {
                edi2 = reinterpret_cast<struct s3*>(&edi2->f1);
                ebx4->f0 = edi2->f0;
            }
            ebx4 = reinterpret_cast<struct s3*>(&ebx4->f1);
            goto addr_40a7fb_7;
        }
    }
    ebx4->f0 = 0;
    return ebp5;
}

void fun_40c060(void*** a1, void*** a2, void**** a3, void**** a4, void** a5, void*** a6, void** a7) {
    void*** esi8;
    void** eax9;
    void** v10;
    void** eax11;
    void** v12;
    void* esp13;
    void** eax14;
    void** dl15;
    void** ebx16;
    void**** edi17;
    void**** ebp18;
    void** eax19;
    void** eax20;

    esi8 = a2;
    eax9 = *esi8 + 1;
    *esi8 = eax9;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax9) == 94)) {
        *esi8 = eax9 + 1;
    }
    v10 = *esi8;
    eax11 = reinterpret_cast<void**>(_mbschr(v10, 58));
    v12 = eax11;
    esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 8);
    eax14 = *esi8;
    dl15 = *reinterpret_cast<void***>(eax14);
    if (dl15) {
        do {
            if (*reinterpret_cast<void***>(eax14) == 41) 
                break;
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax14) == 94)) {
                ++eax14;
            }
            ++eax14;
        } while (*reinterpret_cast<void***>(eax14));
    }
    if (!reinterpret_cast<int1_t>(dl15 == 40) || (!v12 || reinterpret_cast<unsigned char>(v12) >= reinterpret_cast<unsigned char>(eax14))) {
        ebx16 = a5;
        if (*reinterpret_cast<void***>(ebx16)) {
            edi17 = a3;
            ebp18 = a4;
            do {
                if (*ebp18 == *edi17) {
                    fun_40bb00(a1, edi17, ebp18, a6, a7);
                }
                ++ebx16;
                **edi17 = *reinterpret_cast<void***>(ebx16);
                *edi17 = *edi17 + 1;
            } while (*reinterpret_cast<void***>(ebx16));
        }
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*esi8) == 36)) {
            *esi8 = *esi8 + 1;
        }
        if (*reinterpret_cast<void***>(*esi8) == 40) {
            do {
                eax19 = *esi8 + 1;
                *esi8 = eax19;
            } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax19) == 41));
        } else {
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*esi8) == 42) && (eax20 = *esi8 + 1, reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax20) == 42))) {
                *esi8 = eax20;
            }
        }
        *esi8 = *esi8 + 1;
        return;
    } else {
        fun_40c170(a1, reinterpret_cast<int32_t>(esp13) - 4 - 4 - 4 + 28, a3, a4, a5, a6, a7);
        *esi8 = v12;
        return;
    }
}

int32_t __dllonexit = 0x156a4;

uint32_t fun_40d09c(int32_t a1, int32_t a2, int32_t a3) {
    goto __dllonexit;
}

void fun_407314(unsigned char* ecx);

void fun_4073c8(signed char cl);

void fun_407070(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** ebx5;
    void** v6;
    void** v7;
    void** esi8;
    void** esi9;
    void** eax10;
    void** v11;
    int32_t eax12;
    void** v13;
    void** eax14;
    void** ebx15;
    int32_t v16;
    void** eax17;
    uint32_t eax18;
    int32_t ecx19;
    void** eax20;
    int32_t ecx21;
    int1_t zf22;
    int32_t eax23;
    int32_t eax24;
    void** eax25;
    void*** ecx26;
    void* ecx27;
    unsigned char al28;
    void** eax29;
    void** ecx30;
    void** eax31;
    void** eax32;

    v3 = reinterpret_cast<void**>(0);
    v4 = ebx5;
    v6 = reinterpret_cast<void**>(0);
    v7 = esi8;
    esi9 = a1;
    eax10 = esi9 + 0xffffffff;
    v11 = eax10;
    eax12 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax10));
    if (eax12 == 34) {
        v6 = reinterpret_cast<void**>(1);
        *reinterpret_cast<unsigned char*>(&v13 + 3) = 16;
    } else {
        if (eax12 == 36) {
            *reinterpret_cast<unsigned char*>(&v13 + 3) = 2;
        } else {
            if (eax12 == 0x7b) {
                *reinterpret_cast<unsigned char*>(&v13 + 3) = 8;
            } else {
                *reinterpret_cast<unsigned char*>(&v13 + 3) = 0;
            }
        }
    }
    while (1) {
        eax14 = fun_404de0();
        ebx15 = eax14;
        v16 = 1;
        if (!reinterpret_cast<int1_t>(eax14 == 94)) 
            goto addr_407100_9;
        eax17 = fun_404de0();
        ebx15 = eax17;
        eax18 = reinterpret_cast<uint32_t>(eax17 - 10);
        if (eax18 > 0x73) 
            goto addr_407100_9;
        ecx19 = 0;
        *reinterpret_cast<signed char*>(&ecx19) = *reinterpret_cast<signed char*>(eax18 + reinterpret_cast<int32_t>(fun_407314));
        switch (ecx19) {
            addr_4070f3_12:
        case 0:
        case 1:
        case 4:
            *reinterpret_cast<unsigned char*>(&v13 + 2) = 0;
            v16 = 0;
            addr_407100_9:
        case 8:
            if (v16) {
                eax20 = ebx15 + 1;
                if (reinterpret_cast<unsigned char>(eax20) > reinterpret_cast<unsigned char>(0x7e)) 
                    goto addr_407122_14;
                ecx21 = 0;
                *reinterpret_cast<signed char*>(&ecx21) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax20) + reinterpret_cast<uint32_t>(fun_4073c8));
                switch (ecx21) {
                case 0:
                case 2:
                    *reinterpret_cast<unsigned char*>(&v13 + 2) = 6;
                    break;
                case 1:
                case 3:
                    *reinterpret_cast<unsigned char*>(&v13 + 2) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax20) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax20) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax20) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax20) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(v6) < reinterpret_cast<unsigned char>(1)))))) & 5);
                    break;
                case 4:
                    *reinterpret_cast<unsigned char*>(&v13 + 2) = 14;
                    break;
                case 5:
                    *reinterpret_cast<unsigned char*>(&v13 + 2) = 1;
                    break;
                case 6:
                    *reinterpret_cast<unsigned char*>(&v13 + 2) = 7;
                    break;
                case 7:
                    *reinterpret_cast<unsigned char*>(&v13 + 2) = 8;
                    break;
                case 8:
                    *reinterpret_cast<unsigned char*>(&v13 + 2) = 9;
                    break;
                case 9:
                    *reinterpret_cast<unsigned char*>(&v13 + 2) = 4;
                    break;
                case 10:
                    *reinterpret_cast<unsigned char*>(&v13 + 2) = 3;
                    break;
                case 11:
                    *reinterpret_cast<unsigned char*>(&v13 + 2) = 2;
                    break;
                case 12:
                    *reinterpret_cast<unsigned char*>(&v13 + 2) = 13;
                    break;
                case 13:
                    *reinterpret_cast<unsigned char*>(&v13 + 2) = 11;
                    break;
                case 14:
                    *reinterpret_cast<unsigned char*>(&v13 + 2) = 12;
                    break;
                    addr_407122_14:
                case 15:
                    zf22 = (g413a48 & 0x80) == 0;
                    if (zf22) {
                        eax23 = 0;
                        *reinterpret_cast<void***>(&eax23) = ebx15;
                        *reinterpret_cast<unsigned char*>(&v13 + 2) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(1 - reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax23 + 0x4149c0) & 1) < 1)) & 10);
                    } else {
                        eax24 = 0;
                        *reinterpret_cast<void***>(&eax24) = ebx15;
                        if (*reinterpret_cast<unsigned char*>(eax24 + 0x4149c0) & 1 || (ebx15 == 42 || ebx15 == 64)) {
                            *reinterpret_cast<unsigned char*>(&v13 + 2) = 10;
                        } else {
                            *reinterpret_cast<unsigned char*>(&v13 + 2) = 0;
                        }
                    }
                }
            }
            eax25 = reinterpret_cast<void**>(0);
            *reinterpret_cast<unsigned char*>(&eax25) = *reinterpret_cast<unsigned char*>(&v13 + 3);
            ecx26 = reinterpret_cast<void***>(eax25 + reinterpret_cast<unsigned char>(eax25) * 2);
            ecx27 = reinterpret_cast<void*>(0);
            *reinterpret_cast<unsigned char*>(&ecx27) = *reinterpret_cast<unsigned char*>(&v13 + 2);
            al28 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx26 + reinterpret_cast<uint32_t>(ecx26) * 4) + reinterpret_cast<int32_t>(ecx27) + 0x414700);
            *reinterpret_cast<unsigned char*>(&v13 + 3) = al28;
            if (v6 && al28 == 1) {
                *reinterpret_cast<unsigned char*>(&v13 + 3) = 16;
            }
            if (v3) {
                if (*reinterpret_cast<unsigned char*>(&v13 + 2) != 6) {
                    *reinterpret_cast<void***>(esi9) = reinterpret_cast<void**>(92);
                    ++esi9;
                } else {
                    g4133f0 = reinterpret_cast<void**>(1);
                    ++g4133f4;
                    eax29 = fun_404de0();
                    ebx15 = eax29;
                    g4133f0 = reinterpret_cast<void**>(0);
                    if (eax29 == 32 || ebx15 == 9) {
                        *reinterpret_cast<unsigned char*>(&v13 + 3) = 64;
                        addr_40724d_40:
                        eax25 = fun_404de0();
                        ebx15 = eax25;
                        if (eax25 == 32) 
                            goto addr_40724d_40;
                        if (ebx15 == 9) 
                            goto addr_40724d_40;
                    } else {
                        eax25 = esi9 - 0x413aa1;
                        *reinterpret_cast<unsigned char*>(&v13 + 3) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax25) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax25) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax25) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax25) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax25) < reinterpret_cast<unsigned char>(1)))))) + 1);
                    }
                }
            }
            v3 = reinterpret_cast<void**>(0);
            if (*reinterpret_cast<unsigned char*>(&v13 + 3) == 64) 
                goto addr_4072b5_45;
            if (*reinterpret_cast<unsigned char*>(&v13 + 3) & 32) {
                *reinterpret_cast<unsigned char*>(&eax25) = *reinterpret_cast<unsigned char*>(&v13 + 3);
                ecx30 = g4133f4;
                fun_403220(ecx30, (reinterpret_cast<unsigned char>(eax25) & 0xdf) + 0x3e8, ebx15, v7, v4, v13);
            }
            if (*reinterpret_cast<unsigned char*>(&v13 + 3) != 15) {
                *reinterpret_cast<void***>(esi9) = ebx15;
                ++esi9;
                break;
            } else {
                v3 = reinterpret_cast<void**>(1);
                break;
            }
        case 2:
        case 3:
        case 5:
        case 6:
        case 7:
            *reinterpret_cast<void***>(esi9) = reinterpret_cast<void**>(94);
            ++esi9;
            goto addr_4070f3_12;
        }
    }
    addr_4072b5_45:
    if (reinterpret_cast<unsigned char>(esi9) >= reinterpret_cast<unsigned char>(a2)) {
        eax31 = g4133f4;
        fun_403220(eax31, 0x434, v7, v4, v13, 0);
    }
    eax32 = g4133d8;
    fun_404d70(ebx15, eax32);
    *reinterpret_cast<void***>(esi9) = reinterpret_cast<void**>(0);
    fun_408a90(v11);
    return;
}

int32_t _getcwd = 0x15684;

void** fun_40ce40() {
    void* esp1;
    void** v2;
    void** edi3;
    signed char* eax4;
    void* esp5;
    signed char* edi6;
    int32_t ecx7;
    int32_t eax8;
    void** eax9;
    void** edx10;
    signed char* edi11;
    int32_t ecx12;
    void* eax13;
    signed char v14;
    uint32_t ecx15;
    uint32_t eax16;
    uint32_t ecx17;
    void*** esi18;
    void** edi19;
    uint32_t ecx20;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x104);
    v2 = edi3;
    eax4 = reinterpret_cast<signed char*>(_getcwd(esp1, 0x101));
    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp1) - 4 - 4 - 4 - 4 - 4 + 4 + 8);
    edi6 = eax4;
    ecx7 = -1;
    eax8 = reinterpret_cast<int32_t>(eax4) - reinterpret_cast<int32_t>(eax4);
    do {
        if (!ecx7) 
            break;
        --ecx7;
        ++edi6;
    } while (*edi6 != *reinterpret_cast<signed char*>(&eax8));
    eax9 = fun_40acc0(~ecx7, v2);
    edx10 = eax9;
    edi11 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 4 + 8);
    ecx12 = -1;
    eax13 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax9) - reinterpret_cast<unsigned char>(eax9));
    do {
        if (!ecx12) 
            break;
        --ecx12;
        ++edi11;
    } while (v14 != *reinterpret_cast<signed char*>(&eax13));
    ecx15 = reinterpret_cast<uint32_t>(~ecx12);
    eax16 = ecx15;
    ecx17 = ecx15 >> 2;
    esi18 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(edi11) - ecx15);
    edi19 = edx10;
    while (ecx17) {
        --ecx17;
        *reinterpret_cast<void***>(edi19) = *esi18;
        edi19 = edi19 + 4;
        esi18 = esi18 + 4;
    }
    ecx20 = eax16 & 3;
    while (ecx20) {
        --ecx20;
        *reinterpret_cast<void***>(edi19) = *esi18;
        ++edi19;
        ++esi18;
    }
    return edx10;
}

void fun_40d0c1() {
    return;
}

void fun_40d0c8(int32_t a1, int32_t a2);

void fun_40d0ae() {
    fun_40d0c8(0x10000, 0x30000);
    return;
}

int32_t _initterm = 0x156e2;

void fun_40d0a8(int32_t a1, int32_t a2) {
    goto _initterm;
}

int32_t g413edc = 13;

int32_t g414004 = 0;

int32_t signal = 0x15594;

int32_t fun_407c30(signed char cl, int32_t a2, struct s43* a3, int32_t a4) {
    void** v5;
    void** edi6;
    signed char al7;
    unsigned char al8;
    signed char* eax9;
    int1_t zf10;
    int32_t ebx11;
    int1_t zf12;
    int32_t* eax13;
    int32_t v14;
    int32_t esi15;
    int32_t eax16;
    int32_t esi17;
    int1_t zf18;
    signed char** eax19;
    signed char* edi20;
    int32_t ecx21;
    int32_t eax22;
    uint32_t ecx23;
    uint32_t eax24;
    uint32_t ecx25;
    signed char* esi26;
    signed char* edi27;
    uint32_t ecx28;
    int32_t eax29;
    signed char* edi30;
    int32_t ecx31;
    signed char* esi32;
    int32_t eax33;

    v5 = edi6;
    fun_407d80();
    al7 = fun_40aaf0(cl);
    g41400c = al7;
    al8 = fun_40ab20();
    g414010 = al8;
    if (!al8 || (eax9 = reinterpret_cast<signed char*>(getenv("vc20chicspwn")), zf10 = eax9 == 0, zf10)) {
        addr_407c79_2:
        fun_40a630();
        fun_407c10(0x413428);
        g413ee0 = reinterpret_cast<void**>(0x118);
        g413edc = 0x104;
        ebx11 = __p__pgmptr;
        zf12 = g413ff8 == 0;
        g414004 = a4;
        g413ed4 = 0x100;
        g413ed8 = 0x100;
        if (!zf12) {
            addr_407d06_3:
            eax13 = reinterpret_cast<int32_t*>(ebx11(1));
            v14 = *eax13;
            fun_40a890("nmake.err", v14, 1);
            esi15 = signal;
            esi15(2, 0x408940);
            esi15(15, 0x408940);
            fun_403400(0, 0, v5);
            eax16 = fun_407f70(a2, a3, 0);
            esi17 = eax16;
            fun_408a20();
            zf18 = g4133b0 == 0;
            if (zf18) {
                esi17 = 1;
            }
        } else {
            eax19 = reinterpret_cast<signed char**>(ebx11());
            edi20 = *eax19;
            ecx21 = -1;
            eax22 = reinterpret_cast<int32_t>(eax19) - reinterpret_cast<int32_t>(eax19);
            do {
                if (!ecx21) 
                    break;
                --ecx21;
                ++edi20;
            } while (*edi20 != *reinterpret_cast<signed char*>(&eax22));
            ecx23 = reinterpret_cast<uint32_t>(~ecx21);
            eax24 = ecx23;
            ecx25 = ecx23 >> 2;
            esi26 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi20) - ecx23);
            edi27 = reinterpret_cast<signed char*>(0x410e30);
            while (ecx25) {
                --ecx25;
                *edi27 = *esi26;
                edi27 = edi27 + 4;
                esi26 = esi26 + 4;
            }
            ecx28 = eax24 & 3;
            while (ecx28) {
                --ecx28;
                *edi27 = *esi26;
                ++edi27;
                ++esi26;
            }
            eax29 = fun_408140(0x410e30, 0x413ff8);
            if (eax29) 
                goto addr_407d06_3; else 
                goto addr_407cfc_15;
        }
    } else {
        edi30 = "1";
        ecx31 = 2;
        esi32 = eax9;
        do {
            if (!ecx31) 
                break;
            --ecx31;
            zf10 = *esi32 == *edi30;
            ++edi30;
            ++esi32;
        } while (zf10);
        if (!zf10) 
            goto addr_407c79_2; else 
            goto addr_407c72_20;
    }
    eax33 = reinterpret_cast<int32_t>(exit(esi17));
    return eax33;
    addr_407cfc_15:
    g413ff8 = reinterpret_cast<void**>("NMAKE");
    goto addr_407d06_3;
    addr_407c72_20:
    g414014 = 1;
    goto addr_407c79_2;
}

int32_t _XcptFilter = 0x156c4;

void fun_40d0a2(int32_t a1, int32_t a2) {
    goto _XcptFilter;
}

int32_t _controlfp = 0x15730;

void fun_40d0c8(int32_t a1, int32_t a2) {
    goto _controlfp;
}

void fun_403aac() {
    int32_t eax1;
    int32_t eax2;
    signed char al3;

    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax2) + al3);
}

void fun_404620() {
    int32_t eax1;
    int32_t eax2;
    signed char al3;

    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax2) + al3);
}

void fun_40681c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38, int32_t a39, int32_t a40, int32_t a41) {
    signed char* edi42;
    signed char* edi43;
    signed char al44;
    int32_t* edi45;
    int32_t* edi46;
    int32_t eax47;

    *edi42 = reinterpret_cast<signed char>(*edi43 + al44);
    *edi45 = *edi46 + eax47;
}

uint32_t gb0b0b0b;

struct s45 {
    signed char[108] pad108;
    unsigned char f6c;
};

struct s46 {
    signed char[108] pad108;
    unsigned char f6c;
};

struct s47 {
    signed char[108] pad108;
    unsigned char f6c;
};

struct s48 {
    signed char[108] pad108;
    signed char f6c;
};

struct s49 {
    signed char[108] pad108;
    unsigned char f6c;
};

struct s50 {
    signed char[108] pad108;
    signed char f6c;
};

struct s51 {
    signed char[108] pad108;
    signed char f6c;
};

struct s52 {
    signed char[108] pad108;
    signed char f6c;
};

void fun_406f4c(uint32_t ecx) {
    signed char* ebx2;
    signed char* ebx3;
    uint32_t* ecx4;
    uint32_t* ebx5;
    uint32_t* ebx6;
    uint32_t* ebx7;
    uint32_t* ebx8;
    uint32_t* ebx9;
    uint32_t* ebx10;
    uint32_t* ebx11;
    uint32_t* ebx12;
    uint32_t* ebx13;
    uint32_t* ebx14;
    uint32_t eax15;
    uint32_t eax16;
    signed char* edx17;
    uint32_t eax18;
    uint32_t ecx19;
    void** ebx20;
    uint32_t* ebx21;
    uint32_t* ebx22;
    uint32_t* ebx23;
    uint32_t* ebx24;
    uint32_t* ebx25;
    uint32_t* ebx26;
    uint32_t* ebx27;
    uint32_t* ebx28;
    uint32_t* ebx29;
    uint32_t* eax30;
    uint32_t* edi31;
    uint32_t ecx32;
    uint32_t* ebx33;
    uint32_t* ebx34;
    uint32_t* ebx35;
    uint32_t* ebx36;
    uint32_t* ebx37;
    uint32_t* ebx38;
    uint32_t* ebx39;
    uint32_t* ebx40;
    uint32_t* ebx41;
    uint32_t* ebx42;
    uint32_t* ebx43;
    uint32_t* ebx44;
    uint32_t* ebx45;
    uint32_t* ebx46;
    uint32_t* ebx47;
    uint32_t* ebx48;
    uint32_t* ebx49;
    uint32_t* ebx50;
    uint32_t* ebx51;
    uint32_t* ebx52;
    uint32_t* ebx53;
    uint32_t* ebx54;
    uint32_t* ebx55;
    uint32_t* ebx56;
    uint32_t* ebx57;
    uint32_t* ebx58;
    uint32_t* ebx59;
    uint32_t* ebx60;
    uint32_t* ebx61;
    struct s45* edx62;
    unsigned char dh63;
    struct s46* edx64;
    struct s47* esi65;
    struct s48* esi66;
    struct s49* esi67;
    struct s50* esi68;
    signed char bh69;
    struct s51* esi70;
    struct s52* esi71;
    signed char bh72;
    void* eax73;
    signed char dl74;
    int32_t esi75;
    int32_t esi76;
    int32_t esi77;
    int32_t esi78;
    unsigned char* eax79;
    unsigned char tmp8_80;
    uint1_t cf81;
    struct s45* tmp32_82;
    void** ebx83;
    struct s45* tmp32_84;
    void** ebx85;
    struct s45* tmp32_86;
    void** ebx87;
    uint32_t edx88;
    int32_t* ebx89;
    unsigned char tmp8_90;
    signed char* ebx91;
    uint1_t cf92;
    uint32_t tmp32_93;
    int32_t* ebx94;
    uint32_t tmp32_95;
    int32_t* ebx96;
    uint32_t tmp32_97;
    int32_t* ebx98;
    uint32_t tmp32_99;
    int32_t* ebx100;
    uint32_t tmp32_101;
    int32_t* ebx102;
    uint32_t tmp32_103;
    int32_t* ebx104;
    uint32_t tmp32_105;
    int32_t* ebx106;
    uint32_t tmp32_107;
    int32_t* ebx108;
    uint32_t tmp32_109;
    int32_t* ebx110;
    uint32_t edx111;
    int32_t* ebx112;
    int32_t* ebx113;
    unsigned char* ebx114;
    unsigned char* ebx115;
    uint32_t tmp32_116;
    int32_t* ebx117;
    uint32_t tmp32_118;
    int32_t* ebx119;
    uint32_t tmp32_120;
    int32_t* ebx121;
    uint32_t tmp32_122;
    int32_t* ebx123;
    uint32_t tmp32_124;
    int32_t* ebx125;
    uint32_t tmp32_126;
    int32_t* ebx127;
    uint32_t* edx128;
    int32_t* ebx129;

    *ebx2 = reinterpret_cast<signed char>(*ebx3 + *reinterpret_cast<signed char*>(&ecx));
    ecx4 = reinterpret_cast<uint32_t*>(ecx | *ebx5 | *ebx6 | *ebx7 | *ebx8 | *ebx9 | *ebx10 | *ebx11 | *ebx12 | *ebx13 | *ebx14);
    eax15 = eax16 | *ecx4;
    *reinterpret_cast<signed char*>(&eax15) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax15) + *edx17) + 4);
    eax18 = eax15 | gb0b0b0b;
    ecx19 = reinterpret_cast<uint32_t>(ecx4) + reinterpret_cast<int32_t>(*ebx20) | *ebx21 | *ebx22 | *ebx23 | *ebx24 | *ebx25 | *ebx26 | *ebx27 | *ebx28 | *ebx29;
    eax30 = reinterpret_cast<uint32_t*>(eax18 | *edi31);
    ecx32 = ecx19 | *ebx33 | *ebx34 | *ebx35 | *ebx36 | *ebx37 | *ebx38 | *ebx39 | *ebx40 | *ebx41 | *ebx42 | *ebx43 | *ebx44 | *ebx45 | *eax30 | *ebx46 | *ebx47 | *ebx48 | *ebx49 | *ebx50 | *ebx51 | *ebx52 | *ebx53 | *ebx54 | *ebx55 | *ebx56 | *ebx57 | *ebx58 | *ebx59;
    *ebx60 = *ebx61 | ecx32;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx62) + 1) = reinterpret_cast<unsigned char>(dh63 | edx64->f6c);
    esi65->f6c = reinterpret_cast<unsigned char>(esi66->f6c + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx62) + 1));
    edx62->f6c = reinterpret_cast<unsigned char>(edx62->f6c + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx62) + 1));
    esi67->f6c = reinterpret_cast<unsigned char>(esi68->f6c + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx62) + 1));
    edx62->f6c = reinterpret_cast<unsigned char>(edx62->f6c + bh69);
    esi70->f6c = reinterpret_cast<signed char>(esi71->f6c + bh72);
    eax73 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax30) + 1 + 1 + 1 + 1 + 1 + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx62) - 0x79ffbf94) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx62) - 0x79ffbf94) + *reinterpret_cast<signed char*>(&eax73));
    __asm__("insb ");
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx62) - 0x71ffbf94) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx62) - 0x71ffbf94) + *reinterpret_cast<signed char*>(&ecx32));
    __asm__("insb ");
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx62) - 0x55ffbf94) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx62) - 0x55ffbf94) + dl74);
    __asm__("insb ");
    *reinterpret_cast<signed char*>(esi75 - 0x55ffbf94) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(esi76 - 0x55ffbf94) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx32) + 1));
    __asm__("insb ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx62) - 0x4dffbf94) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx62) - 0x4dffbf94) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx62) + 1));
    __asm__("insb ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx62) - 0x4dffbf94) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx62) - 0x4dffbf94) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx62) + 1));
    __asm__("insb ");
    *reinterpret_cast<unsigned char*>(esi77 + 0x5800406c) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(esi78 + 0x5800406c) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx62) + 1));
    __asm__("insb ");
    eax79 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax73) + 1 + 1 + 1 + 1 + 1 + 1 + 1);
    tmp8_80 = reinterpret_cast<unsigned char>(*eax79 + *reinterpret_cast<signed char*>(&eax79));
    cf81 = reinterpret_cast<uint1_t>(tmp8_80 < *eax79);
    *eax79 = tmp8_80;
    tmp32_82 = reinterpret_cast<struct s45*>(reinterpret_cast<uint32_t>(edx62) + reinterpret_cast<int32_t>(*ebx83) + cf81);
    tmp32_84 = reinterpret_cast<struct s45*>(reinterpret_cast<uint32_t>(tmp32_82) + reinterpret_cast<int32_t>(*ebx85) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_82) < reinterpret_cast<uint32_t>(edx62)));
    tmp32_86 = reinterpret_cast<struct s45*>(reinterpret_cast<uint32_t>(tmp32_84) + reinterpret_cast<int32_t>(*ebx87) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_84) < reinterpret_cast<uint32_t>(tmp32_82)));
    edx88 = reinterpret_cast<uint32_t>(tmp32_86) + *ebx89 + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_86) < reinterpret_cast<uint32_t>(tmp32_84));
    tmp8_90 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx88) + *ebx91);
    cf92 = reinterpret_cast<uint1_t>(tmp8_90 < *reinterpret_cast<unsigned char*>(&edx88));
    *reinterpret_cast<unsigned char*>(&edx88) = tmp8_90;
    tmp32_93 = edx88 + *ebx94 + cf92;
    tmp32_95 = tmp32_93 + *ebx96 + reinterpret_cast<uint1_t>(tmp32_93 < edx88);
    tmp32_97 = tmp32_95 + *ebx98 + reinterpret_cast<uint1_t>(tmp32_95 < tmp32_93);
    tmp32_99 = tmp32_97 + *ebx100 + reinterpret_cast<uint1_t>(tmp32_97 < tmp32_95);
    tmp32_101 = tmp32_99 + *ebx102 + reinterpret_cast<uint1_t>(tmp32_99 < tmp32_97);
    tmp32_103 = tmp32_101 + *ebx104 + reinterpret_cast<uint1_t>(tmp32_101 < tmp32_99);
    tmp32_105 = tmp32_103 + *ebx106 + reinterpret_cast<uint1_t>(tmp32_103 < tmp32_101);
    tmp32_107 = tmp32_105 + *ebx108 + reinterpret_cast<uint1_t>(tmp32_105 < tmp32_103);
    tmp32_109 = tmp32_107 + *ebx110 + reinterpret_cast<uint1_t>(tmp32_107 < tmp32_105);
    edx111 = tmp32_109 + *ebx112 + reinterpret_cast<uint1_t>(tmp32_109 < tmp32_107) + *ebx113;
    *ebx114 = reinterpret_cast<unsigned char>(*ebx115 | *reinterpret_cast<unsigned char*>(&edx111));
    tmp32_116 = edx111 + *ebx117;
    tmp32_118 = tmp32_116 + *ebx119 + reinterpret_cast<uint1_t>(tmp32_116 < edx111);
    tmp32_120 = tmp32_118 + *ebx121 + reinterpret_cast<uint1_t>(tmp32_118 < tmp32_116);
    tmp32_122 = tmp32_120 + *ebx123 + reinterpret_cast<uint1_t>(tmp32_120 < tmp32_118);
    tmp32_124 = tmp32_122 + *ebx125 + reinterpret_cast<uint1_t>(tmp32_122 < tmp32_120);
    tmp32_126 = tmp32_124 + *ebx127 + reinterpret_cast<uint1_t>(tmp32_124 < tmp32_122);
    edx128 = reinterpret_cast<uint32_t*>(tmp32_126 + *ebx129 + reinterpret_cast<uint1_t>(tmp32_126 < tmp32_124));
    *edx128 = *edx128 | ecx32;
    __asm__("movlps [eax], xmm2");
}

struct s53 {
    unsigned char f0;
    signed char[134744071] pad134744072;
    unsigned char f8080808;
};

void fun_407314(unsigned char* ecx) {
    unsigned char* eax2;
    signed char* eax3;
    unsigned char* eax4;
    unsigned char* eax5;
    unsigned char* eax6;
    unsigned char* eax7;
    unsigned char* eax8;
    unsigned char* eax9;
    unsigned char* eax10;
    unsigned char* eax11;
    unsigned char* eax12;
    unsigned char* eax13;
    unsigned char* eax14;
    unsigned char* eax15;
    unsigned char* eax16;
    unsigned char* eax17;
    unsigned char* eax18;
    unsigned char* eax19;
    unsigned char* eax20;
    unsigned char* eax21;
    unsigned char* eax22;
    unsigned char* eax23;
    unsigned char* eax24;
    unsigned char* eax25;
    unsigned char al26;
    unsigned char cl27;
    signed char* eax28;
    unsigned char* eax29;
    unsigned char* eax30;
    struct s53* eax31;
    int32_t eax32;
    int32_t* ebx33;
    unsigned char* eax34;
    unsigned char* edi35;
    unsigned char* edi36;

    *eax2 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&ecx));
    *eax4 = reinterpret_cast<unsigned char>(*eax5 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax6 = reinterpret_cast<unsigned char>(*eax7 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax8 = reinterpret_cast<unsigned char>(*eax9 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax10 = reinterpret_cast<unsigned char>(*eax11 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax12 = reinterpret_cast<unsigned char>(*eax13 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax14 = reinterpret_cast<unsigned char>(*eax15 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax16 = reinterpret_cast<unsigned char>(*eax17 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax18 = reinterpret_cast<unsigned char>(*eax19 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax20 = reinterpret_cast<unsigned char>(*eax21 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax22 = reinterpret_cast<unsigned char>(*eax23 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax24 = reinterpret_cast<unsigned char>(*eax25 | *reinterpret_cast<unsigned char*>(&ecx));
    *ecx = reinterpret_cast<unsigned char>(*ecx | al26);
    cl27 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) + *eax28);
    *eax29 = reinterpret_cast<unsigned char>(*eax30 | cl27);
    eax31 = reinterpret_cast<struct s53*>(eax32 + *ebx33);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    eax31->f0 = reinterpret_cast<unsigned char>(eax31->f0 | cl27);
    *reinterpret_cast<signed char*>(&eax31) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax31) + 8);
    eax34 = &eax31->f8080808;
    *eax34 = reinterpret_cast<unsigned char>(*eax34 | cl27);
    *eax34 = reinterpret_cast<unsigned char>(*eax34 | cl27);
    *eax34 = reinterpret_cast<unsigned char>(*eax34 | cl27);
    *eax34 = reinterpret_cast<unsigned char>(*eax34 | cl27);
    *eax34 = reinterpret_cast<unsigned char>(*eax34 | cl27);
    *eax34 = reinterpret_cast<unsigned char>(*eax34 | cl27);
    *eax34 = reinterpret_cast<unsigned char>(*eax34 | cl27);
    *eax34 = reinterpret_cast<unsigned char>(*eax34 | cl27);
    *eax34 = reinterpret_cast<unsigned char>(*eax34 | cl27);
    *eax34 = reinterpret_cast<unsigned char>(*eax34 | cl27);
    *eax34 = reinterpret_cast<unsigned char>(*eax34 | cl27);
    *eax34 = reinterpret_cast<unsigned char>(*eax34 | cl27);
    *edi35 = reinterpret_cast<unsigned char>(*edi36 | *reinterpret_cast<unsigned char*>(&eax34));
}

void fun_4073c8(signed char cl) {
    signed char* edi2;
    signed char* edi3;

    *edi2 = reinterpret_cast<signed char>(*edi3 + cl);
}

void fun_4073d1() {
    __asm__("sgdt [edx]");
}

void fun_4073e8() {
    __asm__("lsl ecx, word [edi]");
}

void fun_4073f0(unsigned char cl) {
    unsigned char* edi2;
    unsigned char* edi3;

    __asm__("sysret ");
    *edi2 = reinterpret_cast<unsigned char>(*edi3 | cl);
}

void fun_407402(signed char cl) {
    __asm__("wbinvd ");
}

void fun_407422() {
    __asm__("pi2fw mm1, [edi]");
}

void fun_407441() {
    __asm__("pi2fd mm1, [edi]");
    __asm__("femms ");
}

void** fun_408900(unsigned char* ecx, void** a2, void** a3) {
    unsigned char tmp8_4;
    signed char* eax5;
    signed char dl6;
    uint1_t cf7;
    unsigned char* eax8;
    unsigned char* eax9;
    unsigned char tmp8_10;
    signed char* eax11;
    signed char dl12;
    uint1_t cf13;
    unsigned char* eax14;
    unsigned char* eax15;
    unsigned char tmp8_16;
    signed char* eax17;
    signed char dl18;
    uint1_t cf19;
    unsigned char* eax20;
    unsigned char* eax21;
    unsigned char tmp8_22;
    signed char* eax23;
    signed char dl24;
    uint1_t cf25;
    unsigned char* eax26;
    unsigned char* eax27;
    unsigned char tmp8_28;
    signed char* eax29;
    signed char dl30;
    uint1_t cf31;
    unsigned char* eax32;
    unsigned char* eax33;
    unsigned char tmp8_34;
    signed char* eax35;
    signed char dl36;
    uint1_t cf37;
    unsigned char* eax38;
    unsigned char* eax39;
    unsigned char tmp8_40;
    signed char* eax41;
    signed char dl42;
    uint1_t cf43;
    unsigned char* eax44;
    unsigned char* eax45;
    unsigned char tmp8_46;
    signed char* eax47;
    signed char dl48;
    uint1_t cf49;
    unsigned char* eax50;
    unsigned char* eax51;
    unsigned char tmp8_52;
    signed char* eax53;
    signed char dl54;
    uint1_t cf55;
    unsigned char* eax56;
    unsigned char* eax57;
    unsigned char tmp8_58;
    signed char* eax59;
    signed char dl60;
    uint1_t cf61;
    unsigned char* eax62;
    unsigned char* eax63;
    unsigned char tmp8_64;
    signed char* eax65;
    signed char dl66;
    uint1_t cf67;
    unsigned char* eax68;
    unsigned char* eax69;
    unsigned char tmp8_70;
    signed char* eax71;
    signed char dl72;
    uint1_t cf73;
    unsigned char* eax74;
    unsigned char* eax75;
    unsigned char tmp8_76;
    signed char* eax77;
    signed char dl78;
    uint1_t cf79;
    unsigned char* eax80;
    unsigned char* eax81;
    unsigned char tmp8_82;
    signed char* eax83;
    signed char dl84;
    uint1_t cf85;
    unsigned char* eax86;
    unsigned char* eax87;
    unsigned char tmp8_88;
    signed char* eax89;
    signed char dl90;
    uint1_t cf91;
    unsigned char* eax92;
    unsigned char* eax93;
    unsigned char tmp8_94;
    signed char* eax95;
    signed char dl96;
    uint1_t cf97;
    unsigned char* eax98;
    unsigned char* eax99;
    signed char al100;
    unsigned char al101;
    signed char al102;
    signed char* ebx103;
    unsigned char tmp8_104;
    unsigned char* eax105;
    unsigned char tmp8_106;
    signed char dl107;
    uint1_t cf108;
    unsigned char tmp8_109;
    signed char* esi110;
    uint1_t cf111;
    unsigned char* esi112;
    unsigned char* esi113;
    unsigned char* edi114;
    signed char* edi115;
    unsigned char dl116;
    uint32_t* edx117;
    uint32_t* edx118;
    int32_t esi119;
    int1_t zf120;
    int1_t zf121;
    int1_t zf122;
    void** eax123;
    int32_t eax124;
    void** eax125;
    signed char al126;
    void** eax127;
    int32_t eax128;
    void** eax129;
    void** ecx130;
    void** esi131;
    void** eax132;

    tmp8_4 = reinterpret_cast<unsigned char>(*eax5 + dl6);
    cf7 = reinterpret_cast<uint1_t>(tmp8_4 < *eax8);
    *eax9 = tmp8_4;
    tmp8_10 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax11 + dl12) + cf7);
    cf13 = reinterpret_cast<uint1_t>(tmp8_10 < *eax14);
    *eax15 = tmp8_10;
    tmp8_16 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax17 + dl18) + cf13);
    cf19 = reinterpret_cast<uint1_t>(tmp8_16 < *eax20);
    *eax21 = tmp8_16;
    tmp8_22 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax23 + dl24) + cf19);
    cf25 = reinterpret_cast<uint1_t>(tmp8_22 < *eax26);
    *eax27 = tmp8_22;
    tmp8_28 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax29 + dl30) + cf25);
    cf31 = reinterpret_cast<uint1_t>(tmp8_28 < *eax32);
    *eax33 = tmp8_28;
    tmp8_34 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax35 + dl36) + cf31);
    cf37 = reinterpret_cast<uint1_t>(tmp8_34 < *eax38);
    *eax39 = tmp8_34;
    tmp8_40 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax41 + dl42) + cf37);
    cf43 = reinterpret_cast<uint1_t>(tmp8_40 < *eax44);
    *eax45 = tmp8_40;
    tmp8_46 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax47 + dl48) + cf43);
    cf49 = reinterpret_cast<uint1_t>(tmp8_46 < *eax50);
    *eax51 = tmp8_46;
    tmp8_52 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax53 + dl54) + cf49);
    cf55 = reinterpret_cast<uint1_t>(tmp8_52 < *eax56);
    *eax57 = tmp8_52;
    tmp8_58 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax59 + dl60) + cf55);
    cf61 = reinterpret_cast<uint1_t>(tmp8_58 < *eax62);
    *eax63 = tmp8_58;
    tmp8_64 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax65 + dl66) + cf61);
    cf67 = reinterpret_cast<uint1_t>(tmp8_64 < *eax68);
    *eax69 = tmp8_64;
    tmp8_70 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax71 + dl72) + cf67);
    cf73 = reinterpret_cast<uint1_t>(tmp8_70 < *eax74);
    *eax75 = tmp8_70;
    tmp8_76 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax77 + dl78) + cf73);
    cf79 = reinterpret_cast<uint1_t>(tmp8_76 < *eax80);
    *eax81 = tmp8_76;
    tmp8_82 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax83 + dl84) + cf79);
    cf85 = reinterpret_cast<uint1_t>(tmp8_82 < *eax86);
    *eax87 = tmp8_82;
    tmp8_88 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax89 + dl90) + cf85);
    cf91 = reinterpret_cast<uint1_t>(tmp8_88 < *eax92);
    *eax93 = tmp8_88;
    tmp8_94 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax95 + dl96) + cf91);
    cf97 = reinterpret_cast<uint1_t>(tmp8_94 < *eax98);
    *eax99 = tmp8_94;
    *ecx = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*ecx + al100) + cf97);
    al101 = reinterpret_cast<unsigned char>(al102 + *ebx103);
    tmp8_104 = reinterpret_cast<unsigned char>(al101 + 5);
    *reinterpret_cast<unsigned char*>(&eax105) = tmp8_104;
    tmp8_106 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax105 + dl107) + reinterpret_cast<uint1_t>(tmp8_104 < al101));
    cf108 = reinterpret_cast<uint1_t>(tmp8_106 < *eax105);
    *eax105 = tmp8_106;
    tmp8_109 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*esi110 + *reinterpret_cast<unsigned char*>(&eax105)) + cf108);
    cf111 = reinterpret_cast<uint1_t>(tmp8_109 < *esi112);
    *esi113 = tmp8_109;
    *edi114 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*edi115 + *reinterpret_cast<unsigned char*>(&eax105)) + cf111);
    *eax105 = reinterpret_cast<unsigned char>(*eax105 | dl116);
    *edx117 = *edx118 | reinterpret_cast<uint32_t>(ecx);
    esi119 = signal;
    esi119(2, 1);
    esi119(15, 1);
    fun_408a20();
    zf120 = g414008 == 0;
    if (!zf120 && ((zf121 = (reinterpret_cast<unsigned char>(g4133d0) & 4) == 0, zf121) && ((zf122 = (g4133d4 & 16) == 0, zf122) && ((eax123 = g413a90, !!eax123) && ((eax124 = reinterpret_cast<int32_t>(_access(eax123, 0)), !!eax124) && ((eax125 = g413a90, al126 = fun_4089e0(eax125), !al126) && (eax127 = g413a90, eax128 = reinterpret_cast<int32_t>(_unlink(eax127)), !eax128))))))) {
        eax129 = g413a90;
        ecx130 = g4133f4;
        fun_403220(ecx130, 0xfa8, eax129, esi131, __return_address(), a2);
    }
    eax132 = fun_403220(0, 0x422, esi131, __return_address(), a2, a3);
    return eax132;
}

void fun_40bf10() {
    int32_t eax1;
    int32_t eax2;
    signed char al3;

    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax2) + al3);
}

void fun_40c040(int32_t ecx) {
    int32_t eax2;
    int32_t eax3;
    signed char al4;

    *reinterpret_cast<signed char*>(ecx + eax2) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ecx + eax3) + al4);
}

signed char g5050505;

void fun_40c75c() {
    signed char tmp8_1;
    signed char al2;

    tmp8_1 = reinterpret_cast<signed char>(g5050505 + al2);
    g5050505 = tmp8_1;
}

void fun_4056ee() {
}

void fun_4067f9(int32_t ecx) {
}

void fun_409572() {
}

void** g0;

int32_t g411b14;

int32_t __p__fmode = 0x1570e;

int32_t g414c10 = 0;

int32_t __p__commode = 0x156fe;

int32_t g414c0c = 0;

int32_t g414c08 = 0;

int32_t g414c04 = 0;

int32_t __getmainargs = 0x156ee;

int32_t __p___initenv = 0x156d2;

void fun_40cf8d() {
    void** eax1;
    void* esp2;
    int32_t eax3;
    int32_t* eax4;
    int32_t ecx5;
    int32_t* eax6;
    int32_t ecx7;
    int32_t eax8;
    int32_t eax9;
    int32_t* eax10;
    int32_t ecx11;
    int32_t v12;
    int32_t v13;
    struct s43* v14;
    int32_t v15;
    int32_t eax16;

    eax1 = g0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    g0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 - 4);
    g411b14 = -1;
    eax3 = g411b14;
    g411b18 = eax3;
    eax4 = reinterpret_cast<int32_t*>(__p__fmode());
    ecx5 = g414c10;
    *eax4 = ecx5;
    eax6 = reinterpret_cast<int32_t*>(__p__commode());
    ecx7 = g414c0c;
    *eax6 = ecx7;
    fun_40d0c1();
    fun_40d0ae();
    fun_40d0a8(0x414c1c, 0x414c20);
    eax8 = g414c08;
    eax9 = g414c04;
    __getmainargs(reinterpret_cast<int32_t>(esp2) - 36, reinterpret_cast<int32_t>(esp2) - 40, reinterpret_cast<int32_t>(esp2) - 32, eax9, eax8);
    fun_40d0a8(0x414c14, 0x414c18);
    eax10 = reinterpret_cast<int32_t*>(__p___initenv());
    ecx11 = v12;
    *eax10 = ecx11;
    eax16 = fun_407c30(*reinterpret_cast<signed char*>(&ecx11), v13, v14, v15);
    exit(eax16);
    g0 = eax1;
    return;
}

void fun_40a9f0() {
    int32_t eax1;
    int32_t eax2;

    eax1 = g414ac0;
    if (eax1) {
        fclose(eax1);
    }
    eax2 = g414ac4;
    if (eax2) {
        free(eax2);
    }
    return;
}

void fun_40d05e() {
    int32_t eax1;
    int32_t ebp2;
    int32_t ebp3;
    int32_t v4;
    int32_t ebp5;

    eax1 = ***reinterpret_cast<int32_t***>(ebp2 - 20);
    *reinterpret_cast<int32_t*>(ebp3 - 28) = eax1;
    v4 = *reinterpret_cast<int32_t*>(ebp5 - 20);
    fun_40d0a2(eax1, v4);
    return;
}

int32_t _except_handler3 = 0x1571c;

void fun_40d0c2() {
    goto _except_handler3;
}

int32_t _exit = 0x156bc;

void fun_40d075() {
    int32_t* esp1;
    int32_t ebp2;
    int32_t ebp3;

    esp1 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp2 - 24)) - 4);
    *esp1 = *reinterpret_cast<int32_t*>(ebp3 - 28);
    *(esp1 - 1) = 0x40d081;
    _exit();
}

void fun_40d0ce() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    signed char* eax22;
    signed char* eax23;
    signed char al24;
    signed char* eax25;
    signed char* eax26;
    signed char al27;
    signed char* eax28;
    signed char* eax29;
    signed char al30;
    signed char* eax31;
    signed char* eax32;
    signed char al33;
    signed char* eax34;
    signed char* eax35;
    signed char al36;
    signed char* eax37;
    signed char* eax38;
    signed char al39;
    signed char* eax40;
    signed char* eax41;
    signed char al42;
    signed char* eax43;
    signed char* eax44;
    signed char al45;
    signed char* eax46;
    signed char* eax47;
    signed char al48;
    signed char* eax49;
    signed char* eax50;
    signed char al51;
    signed char* eax52;
    signed char* eax53;
    signed char al54;
    signed char* eax55;
    signed char* eax56;
    signed char al57;
    signed char* eax58;
    signed char* eax59;
    signed char al60;
    signed char* eax61;
    signed char* eax62;
    signed char al63;
    signed char* eax64;
    signed char* eax65;
    signed char al66;
    signed char* eax67;
    signed char* eax68;
    signed char al69;
    signed char* eax70;
    signed char* eax71;
    signed char al72;
    signed char* eax73;
    signed char* eax74;
    signed char al75;
    signed char* eax76;
    signed char* eax77;
    signed char al78;
    signed char* eax79;
    signed char* eax80;
    signed char al81;
    signed char* eax82;
    signed char* eax83;
    signed char al84;
    signed char* eax85;
    signed char* eax86;
    signed char al87;
    signed char* eax88;
    signed char* eax89;
    signed char al90;
    signed char* eax91;
    signed char* eax92;
    signed char al93;
    signed char* eax94;
    signed char* eax95;
    signed char al96;
    signed char* eax97;
    signed char* eax98;
    signed char al99;
    signed char* eax100;
    signed char* eax101;
    signed char al102;
    signed char* eax103;
    signed char* eax104;
    signed char al105;
    signed char* eax106;
    signed char* eax107;
    signed char al108;
    signed char* eax109;
    signed char* eax110;
    signed char al111;
    signed char* eax112;
    signed char* eax113;
    signed char al114;
    signed char* eax115;
    signed char* eax116;
    signed char al117;
    signed char* eax118;
    signed char* eax119;
    signed char al120;
    signed char* eax121;
    signed char* eax122;
    signed char al123;
    signed char* eax124;
    signed char* eax125;
    signed char al126;
    signed char* eax127;
    signed char* eax128;
    signed char al129;
    signed char* eax130;
    signed char* eax131;
    signed char al132;
    signed char* eax133;
    signed char* eax134;
    signed char al135;
    signed char* eax136;
    signed char* eax137;
    signed char al138;
    signed char* eax139;
    signed char* eax140;
    signed char al141;
    signed char* eax142;
    signed char* eax143;
    signed char al144;
    signed char* eax145;
    signed char* eax146;
    signed char al147;
    signed char* eax148;
    signed char* eax149;
    signed char al150;
    signed char* eax151;
    signed char* eax152;
    signed char al153;
    signed char* eax154;
    signed char* eax155;
    signed char al156;
    signed char* eax157;
    signed char* eax158;
    signed char al159;
    signed char* eax160;
    signed char* eax161;
    signed char al162;
    signed char* eax163;
    signed char* eax164;
    signed char al165;
    signed char* eax166;
    signed char* eax167;
    signed char al168;
    signed char* eax169;
    signed char* eax170;
    signed char al171;
    signed char* eax172;
    signed char* eax173;
    signed char al174;
    signed char* eax175;
    signed char* eax176;
    signed char al177;
    signed char* eax178;
    signed char* eax179;
    signed char al180;
    signed char* eax181;
    signed char* eax182;
    signed char al183;
    signed char* eax184;
    signed char* eax185;
    signed char al186;
    signed char* eax187;
    signed char* eax188;
    signed char al189;
    signed char* eax190;
    signed char* eax191;
    signed char al192;
    signed char* eax193;
    signed char* eax194;
    signed char al195;
    signed char* eax196;
    signed char* eax197;
    signed char al198;
    signed char* eax199;
    signed char* eax200;
    signed char al201;
    signed char* eax202;
    signed char* eax203;
    signed char al204;
    signed char* eax205;
    signed char* eax206;
    signed char al207;
    signed char* eax208;
    signed char* eax209;
    signed char al210;
    signed char* eax211;
    signed char* eax212;
    signed char al213;
    signed char* eax214;
    signed char* eax215;
    signed char al216;
    signed char* eax217;
    signed char* eax218;
    signed char al219;
    signed char* eax220;
    signed char* eax221;
    signed char al222;
    signed char* eax223;
    signed char* eax224;
    signed char al225;
    signed char* eax226;
    signed char* eax227;
    signed char al228;
    signed char* eax229;
    signed char* eax230;
    signed char al231;
    signed char* eax232;
    signed char* eax233;
    signed char al234;
    signed char* eax235;
    signed char* eax236;
    signed char al237;
    signed char* eax238;
    signed char* eax239;
    signed char al240;
    signed char* eax241;
    signed char* eax242;
    signed char al243;
    signed char* eax244;
    signed char* eax245;
    signed char al246;
    signed char* eax247;
    signed char* eax248;
    signed char al249;
    signed char* eax250;
    signed char* eax251;
    signed char al252;
    signed char* eax253;
    signed char* eax254;
    signed char al255;
    signed char* eax256;
    signed char* eax257;
    signed char al258;
    signed char* eax259;
    signed char* eax260;
    signed char al261;
    signed char* eax262;
    signed char* eax263;
    signed char al264;
    signed char* eax265;
    signed char* eax266;
    signed char al267;
    signed char* eax268;
    signed char* eax269;
    signed char al270;
    signed char* eax271;
    signed char* eax272;
    signed char al273;
    signed char* eax274;
    signed char* eax275;
    signed char al276;
    signed char* eax277;
    signed char* eax278;
    signed char al279;
    signed char* eax280;
    signed char* eax281;
    signed char al282;
    signed char* eax283;
    signed char* eax284;
    signed char al285;
    signed char* eax286;
    signed char* eax287;
    signed char al288;
    signed char* eax289;
    signed char* eax290;
    signed char al291;
    signed char* eax292;
    signed char* eax293;
    signed char al294;
    signed char* eax295;
    signed char* eax296;
    signed char al297;
    signed char* eax298;
    signed char* eax299;
    signed char al300;
    signed char* eax301;
    signed char* eax302;
    signed char al303;
    signed char* eax304;
    signed char* eax305;
    signed char al306;
    signed char* eax307;
    signed char* eax308;
    signed char al309;
    signed char* eax310;
    signed char* eax311;
    signed char al312;
    signed char* eax313;
    signed char* eax314;
    signed char al315;
    signed char* eax316;
    signed char* eax317;
    signed char al318;
    signed char* eax319;
    signed char* eax320;
    signed char al321;
    signed char* eax322;
    signed char* eax323;
    signed char al324;
    signed char* eax325;
    signed char* eax326;
    signed char al327;
    signed char* eax328;
    signed char* eax329;
    signed char al330;
    signed char* eax331;
    signed char* eax332;
    signed char al333;
    signed char* eax334;
    signed char* eax335;
    signed char al336;
    signed char* eax337;
    signed char* eax338;
    signed char al339;
    signed char* eax340;
    signed char* eax341;
    signed char al342;
    signed char* eax343;
    signed char* eax344;
    signed char al345;
    signed char* eax346;
    signed char* eax347;
    signed char al348;
    signed char* eax349;
    signed char* eax350;
    signed char al351;
    signed char* eax352;
    signed char* eax353;
    signed char al354;
    signed char* eax355;
    signed char* eax356;
    signed char al357;
    signed char* eax358;
    signed char* eax359;
    signed char al360;
    signed char* eax361;
    signed char* eax362;
    signed char al363;
    signed char* eax364;
    signed char* eax365;
    signed char al366;
    signed char* eax367;
    signed char* eax368;
    signed char al369;
    signed char* eax370;
    signed char* eax371;
    signed char al372;
    signed char* eax373;
    signed char* eax374;
    signed char al375;
    signed char* eax376;
    signed char* eax377;
    signed char al378;
    signed char* eax379;
    signed char* eax380;
    signed char al381;
    signed char* eax382;
    signed char* eax383;
    signed char al384;
    signed char* eax385;
    signed char* eax386;
    signed char al387;
    signed char* eax388;
    signed char* eax389;
    signed char al390;
    signed char* eax391;
    signed char* eax392;
    signed char al393;
    signed char* eax394;
    signed char* eax395;
    signed char al396;
    signed char* eax397;
    signed char* eax398;
    signed char al399;
    signed char* eax400;
    signed char* eax401;
    signed char al402;
    signed char* eax403;
    signed char* eax404;
    signed char al405;
    signed char* eax406;
    signed char* eax407;
    signed char al408;
    signed char* eax409;
    signed char* eax410;
    signed char al411;
    signed char* eax412;
    signed char* eax413;
    signed char al414;
    signed char* eax415;
    signed char* eax416;
    signed char al417;
    signed char* eax418;
    signed char* eax419;
    signed char al420;
    signed char* eax421;
    signed char* eax422;
    signed char al423;
    signed char* eax424;
    signed char* eax425;
    signed char al426;
    signed char* eax427;
    signed char* eax428;
    signed char al429;
    signed char* eax430;
    signed char* eax431;
    signed char al432;
    signed char* eax433;
    signed char* eax434;
    signed char al435;
    signed char* eax436;
    signed char* eax437;
    signed char al438;
    signed char* eax439;
    signed char* eax440;
    signed char al441;
    signed char* eax442;
    signed char* eax443;
    signed char al444;
    signed char* eax445;
    signed char* eax446;
    signed char al447;
    signed char* eax448;
    signed char* eax449;
    signed char al450;
    signed char* eax451;
    signed char* eax452;
    signed char al453;
    signed char* eax454;
    signed char* eax455;
    signed char al456;
    signed char* eax457;
    signed char* eax458;
    signed char al459;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
    *eax22 = reinterpret_cast<signed char>(*eax23 + al24);
    *eax25 = reinterpret_cast<signed char>(*eax26 + al27);
    *eax28 = reinterpret_cast<signed char>(*eax29 + al30);
    *eax31 = reinterpret_cast<signed char>(*eax32 + al33);
    *eax34 = reinterpret_cast<signed char>(*eax35 + al36);
    *eax37 = reinterpret_cast<signed char>(*eax38 + al39);
    *eax40 = reinterpret_cast<signed char>(*eax41 + al42);
    *eax43 = reinterpret_cast<signed char>(*eax44 + al45);
    *eax46 = reinterpret_cast<signed char>(*eax47 + al48);
    *eax49 = reinterpret_cast<signed char>(*eax50 + al51);
    *eax52 = reinterpret_cast<signed char>(*eax53 + al54);
    *eax55 = reinterpret_cast<signed char>(*eax56 + al57);
    *eax58 = reinterpret_cast<signed char>(*eax59 + al60);
    *eax61 = reinterpret_cast<signed char>(*eax62 + al63);
    *eax64 = reinterpret_cast<signed char>(*eax65 + al66);
    *eax67 = reinterpret_cast<signed char>(*eax68 + al69);
    *eax70 = reinterpret_cast<signed char>(*eax71 + al72);
    *eax73 = reinterpret_cast<signed char>(*eax74 + al75);
    *eax76 = reinterpret_cast<signed char>(*eax77 + al78);
    *eax79 = reinterpret_cast<signed char>(*eax80 + al81);
    *eax82 = reinterpret_cast<signed char>(*eax83 + al84);
    *eax85 = reinterpret_cast<signed char>(*eax86 + al87);
    *eax88 = reinterpret_cast<signed char>(*eax89 + al90);
    *eax91 = reinterpret_cast<signed char>(*eax92 + al93);
    *eax94 = reinterpret_cast<signed char>(*eax95 + al96);
    *eax97 = reinterpret_cast<signed char>(*eax98 + al99);
    *eax100 = reinterpret_cast<signed char>(*eax101 + al102);
    *eax103 = reinterpret_cast<signed char>(*eax104 + al105);
    *eax106 = reinterpret_cast<signed char>(*eax107 + al108);
    *eax109 = reinterpret_cast<signed char>(*eax110 + al111);
    *eax112 = reinterpret_cast<signed char>(*eax113 + al114);
    *eax115 = reinterpret_cast<signed char>(*eax116 + al117);
    *eax118 = reinterpret_cast<signed char>(*eax119 + al120);
    *eax121 = reinterpret_cast<signed char>(*eax122 + al123);
    *eax124 = reinterpret_cast<signed char>(*eax125 + al126);
    *eax127 = reinterpret_cast<signed char>(*eax128 + al129);
    *eax130 = reinterpret_cast<signed char>(*eax131 + al132);
    *eax133 = reinterpret_cast<signed char>(*eax134 + al135);
    *eax136 = reinterpret_cast<signed char>(*eax137 + al138);
    *eax139 = reinterpret_cast<signed char>(*eax140 + al141);
    *eax142 = reinterpret_cast<signed char>(*eax143 + al144);
    *eax145 = reinterpret_cast<signed char>(*eax146 + al147);
    *eax148 = reinterpret_cast<signed char>(*eax149 + al150);
    *eax151 = reinterpret_cast<signed char>(*eax152 + al153);
    *eax154 = reinterpret_cast<signed char>(*eax155 + al156);
    *eax157 = reinterpret_cast<signed char>(*eax158 + al159);
    *eax160 = reinterpret_cast<signed char>(*eax161 + al162);
    *eax163 = reinterpret_cast<signed char>(*eax164 + al165);
    *eax166 = reinterpret_cast<signed char>(*eax167 + al168);
    *eax169 = reinterpret_cast<signed char>(*eax170 + al171);
    *eax172 = reinterpret_cast<signed char>(*eax173 + al174);
    *eax175 = reinterpret_cast<signed char>(*eax176 + al177);
    *eax178 = reinterpret_cast<signed char>(*eax179 + al180);
    *eax181 = reinterpret_cast<signed char>(*eax182 + al183);
    *eax184 = reinterpret_cast<signed char>(*eax185 + al186);
    *eax187 = reinterpret_cast<signed char>(*eax188 + al189);
    *eax190 = reinterpret_cast<signed char>(*eax191 + al192);
    *eax193 = reinterpret_cast<signed char>(*eax194 + al195);
    *eax196 = reinterpret_cast<signed char>(*eax197 + al198);
    *eax199 = reinterpret_cast<signed char>(*eax200 + al201);
    *eax202 = reinterpret_cast<signed char>(*eax203 + al204);
    *eax205 = reinterpret_cast<signed char>(*eax206 + al207);
    *eax208 = reinterpret_cast<signed char>(*eax209 + al210);
    *eax211 = reinterpret_cast<signed char>(*eax212 + al213);
    *eax214 = reinterpret_cast<signed char>(*eax215 + al216);
    *eax217 = reinterpret_cast<signed char>(*eax218 + al219);
    *eax220 = reinterpret_cast<signed char>(*eax221 + al222);
    *eax223 = reinterpret_cast<signed char>(*eax224 + al225);
    *eax226 = reinterpret_cast<signed char>(*eax227 + al228);
    *eax229 = reinterpret_cast<signed char>(*eax230 + al231);
    *eax232 = reinterpret_cast<signed char>(*eax233 + al234);
    *eax235 = reinterpret_cast<signed char>(*eax236 + al237);
    *eax238 = reinterpret_cast<signed char>(*eax239 + al240);
    *eax241 = reinterpret_cast<signed char>(*eax242 + al243);
    *eax244 = reinterpret_cast<signed char>(*eax245 + al246);
    *eax247 = reinterpret_cast<signed char>(*eax248 + al249);
    *eax250 = reinterpret_cast<signed char>(*eax251 + al252);
    *eax253 = reinterpret_cast<signed char>(*eax254 + al255);
    *eax256 = reinterpret_cast<signed char>(*eax257 + al258);
    *eax259 = reinterpret_cast<signed char>(*eax260 + al261);
    *eax262 = reinterpret_cast<signed char>(*eax263 + al264);
    *eax265 = reinterpret_cast<signed char>(*eax266 + al267);
    *eax268 = reinterpret_cast<signed char>(*eax269 + al270);
    *eax271 = reinterpret_cast<signed char>(*eax272 + al273);
    *eax274 = reinterpret_cast<signed char>(*eax275 + al276);
    *eax277 = reinterpret_cast<signed char>(*eax278 + al279);
    *eax280 = reinterpret_cast<signed char>(*eax281 + al282);
    *eax283 = reinterpret_cast<signed char>(*eax284 + al285);
    *eax286 = reinterpret_cast<signed char>(*eax287 + al288);
    *eax289 = reinterpret_cast<signed char>(*eax290 + al291);
    *eax292 = reinterpret_cast<signed char>(*eax293 + al294);
    *eax295 = reinterpret_cast<signed char>(*eax296 + al297);
    *eax298 = reinterpret_cast<signed char>(*eax299 + al300);
    *eax301 = reinterpret_cast<signed char>(*eax302 + al303);
    *eax304 = reinterpret_cast<signed char>(*eax305 + al306);
    *eax307 = reinterpret_cast<signed char>(*eax308 + al309);
    *eax310 = reinterpret_cast<signed char>(*eax311 + al312);
    *eax313 = reinterpret_cast<signed char>(*eax314 + al315);
    *eax316 = reinterpret_cast<signed char>(*eax317 + al318);
    *eax319 = reinterpret_cast<signed char>(*eax320 + al321);
    *eax322 = reinterpret_cast<signed char>(*eax323 + al324);
    *eax325 = reinterpret_cast<signed char>(*eax326 + al327);
    *eax328 = reinterpret_cast<signed char>(*eax329 + al330);
    *eax331 = reinterpret_cast<signed char>(*eax332 + al333);
    *eax334 = reinterpret_cast<signed char>(*eax335 + al336);
    *eax337 = reinterpret_cast<signed char>(*eax338 + al339);
    *eax340 = reinterpret_cast<signed char>(*eax341 + al342);
    *eax343 = reinterpret_cast<signed char>(*eax344 + al345);
    *eax346 = reinterpret_cast<signed char>(*eax347 + al348);
    *eax349 = reinterpret_cast<signed char>(*eax350 + al351);
    *eax352 = reinterpret_cast<signed char>(*eax353 + al354);
    *eax355 = reinterpret_cast<signed char>(*eax356 + al357);
    *eax358 = reinterpret_cast<signed char>(*eax359 + al360);
    *eax361 = reinterpret_cast<signed char>(*eax362 + al363);
    *eax364 = reinterpret_cast<signed char>(*eax365 + al366);
    *eax367 = reinterpret_cast<signed char>(*eax368 + al369);
    *eax370 = reinterpret_cast<signed char>(*eax371 + al372);
    *eax373 = reinterpret_cast<signed char>(*eax374 + al375);
    *eax376 = reinterpret_cast<signed char>(*eax377 + al378);
    *eax379 = reinterpret_cast<signed char>(*eax380 + al381);
    *eax382 = reinterpret_cast<signed char>(*eax383 + al384);
    *eax385 = reinterpret_cast<signed char>(*eax386 + al387);
    *eax388 = reinterpret_cast<signed char>(*eax389 + al390);
    *eax391 = reinterpret_cast<signed char>(*eax392 + al393);
    *eax394 = reinterpret_cast<signed char>(*eax395 + al396);
    *eax397 = reinterpret_cast<signed char>(*eax398 + al399);
    *eax400 = reinterpret_cast<signed char>(*eax401 + al402);
    *eax403 = reinterpret_cast<signed char>(*eax404 + al405);
    *eax406 = reinterpret_cast<signed char>(*eax407 + al408);
    *eax409 = reinterpret_cast<signed char>(*eax410 + al411);
    *eax412 = reinterpret_cast<signed char>(*eax413 + al414);
    *eax415 = reinterpret_cast<signed char>(*eax416 + al417);
    *eax418 = reinterpret_cast<signed char>(*eax419 + al420);
    *eax421 = reinterpret_cast<signed char>(*eax422 + al423);
    *eax424 = reinterpret_cast<signed char>(*eax425 + al426);
    *eax427 = reinterpret_cast<signed char>(*eax428 + al429);
    *eax430 = reinterpret_cast<signed char>(*eax431 + al432);
    *eax433 = reinterpret_cast<signed char>(*eax434 + al435);
    *eax436 = reinterpret_cast<signed char>(*eax437 + al438);
    *eax439 = reinterpret_cast<signed char>(*eax440 + al441);
    *eax442 = reinterpret_cast<signed char>(*eax443 + al444);
    *eax445 = reinterpret_cast<signed char>(*eax446 + al447);
    *eax448 = reinterpret_cast<signed char>(*eax449 + al450);
    *eax451 = reinterpret_cast<signed char>(*eax452 + al453);
    *eax454 = reinterpret_cast<signed char>(*eax455 + al456);
    *eax457 = reinterpret_cast<signed char>(*eax458 + al459);
}
