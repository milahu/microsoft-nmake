
struct s0 {
    signed char[32] pad32;
    int32_t f20;
    signed char[4] pad40;
    int32_t f28;
    signed char[4] pad48;
    signed char f30;
};

uint64_t g140015008 = 0x2b992ddfa232;

uint32_t g140025c24;

void** fun_140003898(void** rcx, void** edx, void** r8, void** r9, ...);

int64_t iswspace = 0x1489c;

int64_t wcschr = 0x147de;

void** g14003d110;

unsigned char g1400157ec;

void** g14003d118;

void** fun_14000dcc4(void** rcx, ...);

void** fun_14000dc58();

void** fun_14000918c(void** rcx, ...);

uint64_t fun_140010df0();

struct s1 {
    signed char[64] pad64;
    void** f40;
};

int64_t fun_14000bd88(void** rcx, uint64_t rdx, int64_t r8, void** r9);

void** fun_140010130(uint64_t rcx, void** rdx, void** r8, ...);

void** fun_14000dfd0(void** rcx, void** rdx, void** r8, void** r9) {
    struct s0* rsp5;
    void** rbp6;
    uint64_t rax7;
    uint64_t v8;
    void** v9;
    void** rdi10;
    void** v11;
    void** rbx12;
    void** rsi13;
    void** v14;
    void** v15;
    void** rax16;
    void** rdx17;
    uint32_t eax18;
    void** v19;
    void** rdi20;
    unsigned char v21;
    void** rcx22;
    int64_t* rsp23;
    int64_t rcx24;
    int64_t* rsp25;
    int32_t eax26;
    unsigned char cl27;
    int64_t rax28;
    void** r8_29;
    void** rcx30;
    int64_t* rsp31;
    int64_t* rsp32;
    int64_t rax33;
    int64_t rcx34;
    int64_t* rsp35;
    int32_t eax36;
    unsigned char cl37;
    int64_t rax38;
    int1_t zf39;
    int1_t zf40;
    uint32_t eax41;
    void** r9_42;
    int64_t* rsp43;
    void* rbx44;
    uint32_t eax45;
    int64_t rcx46;
    int64_t* rsp47;
    int32_t eax48;
    unsigned char cl49;
    int64_t rax50;
    void** rcx51;
    int64_t* rsp52;
    uint32_t eax53;
    void** rcx54;
    int64_t* rsp55;
    void** rax56;
    void** rbx57;
    void** rcx58;
    int64_t* rsp59;
    uint32_t eax60;
    uint16_t v61;
    int64_t* rsp62;
    int64_t rax63;
    int64_t* rsp64;
    struct s0* rsp65;
    void** rbx66;
    int64_t* rsp67;
    void** rax68;
    int1_t zf69;
    int1_t zf70;
    uint64_t rdx71;
    uint64_t rdx72;
    uint64_t rax73;
    uint64_t rcx74;
    void** rcx75;
    int64_t* rsp76;
    void** rax77;
    void** rsi78;
    void** rcx79;
    int64_t* rsp80;
    void** rax81;
    int64_t* rsp82;
    void** rax83;
    unsigned char v84;
    void** rcx85;
    int64_t* rsp86;
    void** rcx87;
    uint32_t eax88;
    void** rcx89;
    int64_t* rsp90;
    int64_t rax91;
    void** rax92;
    int32_t ecx93;
    int32_t v94;
    int32_t eax95;
    int32_t v96;
    void* r8_97;
    uint32_t ecx98;
    uint32_t edx99;
    signed char v100;
    void** rcx101;
    int64_t* rsp102;
    int32_t v103;
    int32_t ecx104;
    int32_t v105;
    void** rax106;
    int32_t v107;
    int32_t v108;
    int64_t* rsp109;
    struct s1* rsp110;
    void** rbx111;
    int64_t* rsp112;
    void** r9_113;
    int64_t* rsp114;
    void** rcx115;
    int64_t* rsp116;
    int64_t rdx117;
    int64_t* rsp118;
    int64_t rax119;
    void** r8_120;
    void** rcx121;
    int64_t* rsp122;
    void** rax123;

    rsp5 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 0x2a0);
    rbp6 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp5) + 64);
    rax7 = g140015008;
    v8 = rax7 ^ reinterpret_cast<unsigned char>(rbp6);
    v9 = r9;
    rdi10 = rcx;
    v11 = rdx;
    rcx = reinterpret_cast<void**>(0);
    rbx12 = r8;
    rsi13 = rdx;
    v14 = rbx12;
    if (!rdx) {
        v15 = reinterpret_cast<void**>(0);
    } else {
        if (!rbx12) {
            rax16 = *reinterpret_cast<void***>(rdx);
            v15 = rax16;
            if (rax16) {
                while (*reinterpret_cast<void***>(rax16)) {
                    rax16 = *reinterpret_cast<void***>(v15);
                    v15 = rax16;
                }
            }
        } else {
            v15 = *reinterpret_cast<void***>(r8);
        }
    }
    rdx17 = reinterpret_cast<void**>(1);
    *reinterpret_cast<int32_t*>(&rdx17 + 4) = 0;
    if (!*reinterpret_cast<void***>(rdi10)) {
        addr_14000e674_11:
        if (rbx12) {
            *reinterpret_cast<void***>(rbx12) = v15;
        }
    } else {
        *reinterpret_cast<uint32_t*>(&r8) = 36;
        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
        while (eax18 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi10)), !!*reinterpret_cast<void***>(&eax18)) {
            do {
                if (*reinterpret_cast<void***>(&eax18) == 36) 
                    break;
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax18) == 34)) {
                    rcx = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(rcx == 0)));
                }
                if (!rcx && (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax18) == 94) && (rdi10 = rdi10 + 2, rcx = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(rcx))), *reinterpret_cast<void***>(rdi10) == 34))) {
                    rcx = reinterpret_cast<void**>(1);
                }
                rdi10 = rdi10 + 2;
                eax18 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi10));
            } while (*reinterpret_cast<void***>(&eax18));
            v19 = rcx;
            if (!*reinterpret_cast<void***>(rdi10)) 
                break;
            rdi20 = rdi10 + 2;
            if (!*reinterpret_cast<void***>(rdi20)) {
                if (v21 & 4) 
                    goto addr_14000e64a_24;
                *reinterpret_cast<uint32_t*>(&rcx22) = g140025c24;
                *reinterpret_cast<int32_t*>(&rcx22 + 4) = 0;
                rsp23 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
                *rsp23 = 0x14000e0e4;
                fun_140003898(rcx22, 0x3ea, 36, 0);
                rsp5 = reinterpret_cast<struct s0*>(rsp23 + 1);
                rcx = v19;
                rdx17 = reinterpret_cast<void**>(1);
                *reinterpret_cast<int32_t*>(&rdx17 + 4) = 0;
                *reinterpret_cast<uint32_t*>(&r8) = 36;
                *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
            }
            if (!rcx && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi20) == 94)) {
                rdi20 = rdi20 + 2;
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi20)) >= reinterpret_cast<unsigned char>(0x80)) {
                    *reinterpret_cast<uint32_t*>(&rcx24) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi20));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = 0;
                    rsp25 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
                    *rsp25 = 0x14000e125;
                    eax26 = reinterpret_cast<int32_t>(iswspace(rcx24));
                    rsp5 = reinterpret_cast<struct s0*>(rsp25 + 1);
                    cl27 = reinterpret_cast<uint1_t>(eax26 == 0);
                } else {
                    *reinterpret_cast<uint32_t*>(&rax28) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi20));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = 0;
                    cl27 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rax28 + 0x140011640) & 1);
                }
                if (cl27) 
                    goto addr_14000e137_31;
                if (v21 & 4) 
                    goto addr_14000e64a_24;
                addr_14000e137_31:
                *reinterpret_cast<uint32_t*>(&r8_29) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi20));
                *reinterpret_cast<int32_t*>(&r8_29 + 4) = 0;
                rdx17 = reinterpret_cast<void**>(0x3e9);
                *reinterpret_cast<int32_t*>(&rdx17 + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rcx30) = g140025c24;
                *reinterpret_cast<int32_t*>(&rcx30 + 4) = 0;
                rsp31 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
                *rsp31 = 0x14000e14b;
                fun_140003898(rcx30, 0x3e9, r8_29, 0);
                rsp5 = reinterpret_cast<struct s0*>(rsp31 + 1);
                *reinterpret_cast<uint32_t*>(&r8) = 36;
                *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
            }
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi20) == 36)) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi20) == 40)) {
                    rdx17 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi20))));
                    *reinterpret_cast<int32_t*>(&rdx17 + 4) = 0;
                    rsp32 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
                    *rsp32 = 0x14000e3b4;
                    rax33 = reinterpret_cast<int64_t>(wcschr("*", rdx17));
                    rsp5 = reinterpret_cast<struct s0*>(rsp32 + 1);
                    if (!rax33) {
                        addr_14000e40e_36:
                        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi20)) >= reinterpret_cast<unsigned char>(0x80)) {
                            *reinterpret_cast<uint32_t*>(&rcx34) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi20));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = 0;
                            rsp35 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
                            *rsp35 = 0x14000e433;
                            eax36 = reinterpret_cast<int32_t>(iswspace(rcx34, rdx17, r8));
                            rsp5 = reinterpret_cast<struct s0*>(rsp35 + 1);
                            cl37 = reinterpret_cast<uint1_t>(eax36 == 0);
                        } else {
                            *reinterpret_cast<uint32_t*>(&rax38) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi20));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax38) + 4) = 0;
                            cl37 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rax38 + 0x140011640) & 1);
                        }
                    } else {
                        zf39 = g14003d110 == 0;
                        if (zf39 || ((zf40 = (g1400157ec & 64) == 0, !zf40) || (eax41 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi20)), *reinterpret_cast<int16_t*>(&eax41) == 60))) {
                            addr_14000e62d_40:
                            *reinterpret_cast<uint32_t*>(&r8) = 36;
                            *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                            goto addr_14000e633_41;
                        } else {
                            r9_42 = g14003d118;
                            r8 = rbp6 + 56;
                            rdx17 = reinterpret_cast<void**>(0x44c);
                            *reinterpret_cast<int32_t*>(&rdx17 + 4) = 0;
                            rsp43 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
                            *rsp43 = 0x14000e40b;
                            fun_140003898(0, 0x44c, r8, r9_42);
                            rsp5 = reinterpret_cast<struct s0*>(rsp43 + 1);
                            goto addr_14000e40e_36;
                        }
                    }
                } else {
                    rbx44 = reinterpret_cast<void*>(rbp6 + 64);
                    while (rdi20 = rdi20 + 2, eax45 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi20)), !!*reinterpret_cast<int16_t*>(&eax45)) {
                        if (*reinterpret_cast<int16_t*>(&eax45) == 41) 
                            goto addr_14000e2d3_46;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 58) 
                            break;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 94) {
                            rdi20 = rdi20 + 2;
                            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi20)) >= reinterpret_cast<unsigned char>(0x80)) {
                                *reinterpret_cast<uint32_t*>(&rcx46) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi20));
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx46) + 4) = 0;
                                rsp47 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
                                *rsp47 = 0x14000e25b;
                                eax48 = reinterpret_cast<int32_t>(iswspace(rcx46, rdx17, r8));
                                rsp5 = reinterpret_cast<struct s0*>(rsp47 + 1);
                                cl49 = reinterpret_cast<uint1_t>(eax48 == 0);
                            } else {
                                *reinterpret_cast<uint32_t*>(&rax50) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi20));
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax50) + 4) = 0;
                                cl49 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rax50 + 0x140011640) & 1);
                            }
                            if (!cl49) {
                                *reinterpret_cast<uint32_t*>(&r8) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi20));
                                *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                                rdx17 = reinterpret_cast<void**>(0x3e9);
                                *reinterpret_cast<int32_t*>(&rdx17 + 4) = 0;
                                *reinterpret_cast<uint32_t*>(&rcx51) = g140025c24;
                                *reinterpret_cast<int32_t*>(&rcx51 + 4) = 0;
                                rsp52 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
                                *rsp52 = 0x14000e27b;
                                fun_140003898(rcx51, 0x3e9, r8, 0);
                                rsp5 = reinterpret_cast<struct s0*>(rsp52 + 1);
                            }
                        }
                        rbx44 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx44) + 2);
                    }
                    eax53 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi20));
                    if (*reinterpret_cast<int16_t*>(&eax53) == 41) {
                        addr_14000e2d3_46:
                        if (reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(rbx44) - reinterpret_cast<uint64_t>(rbp6 + 64) & 0xfffffffffffffffe) > reinterpret_cast<int64_t>(0x202)) {
                            *reinterpret_cast<uint32_t*>(&rcx54) = g140025c24;
                            *reinterpret_cast<int32_t*>(&rcx54 + 4) = 0;
                            rsp55 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
                            *rsp55 = 0x14000e2fb;
                            fun_140003898(rcx54, 0x434, r8, 0);
                            rsp5 = reinterpret_cast<struct s0*>(rsp55 + 1);
                            goto addr_14000e2fb_57;
                        }
                    } else {
                        do {
                            if (*reinterpret_cast<int16_t*>(&eax53) == 94) {
                                rdi20 = rdi20 + 2;
                            }
                        } while (*reinterpret_cast<void***>(rdi20) && (rdi20 = rdi20 + 2, eax53 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi20)), *reinterpret_cast<int16_t*>(&eax53) != 41));
                        if (*reinterpret_cast<void***>(rdi20) == 41) 
                            goto addr_14000e2d3_46; else 
                            goto addr_14000e2c0_62;
                    }
                }
            } else {
                rax56 = rdi20 + 2;
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rax56) == 94)) {
                    rdi20 = rax56;
                    goto addr_14000e633_41;
                }
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rax56) == 40)) 
                    goto addr_14000e633_41;
                rbx57 = rax56 + 2;
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx57) == 94)) 
                    goto addr_14000e185_67;
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx57) == 64)) {
                    rdi20 = rax56;
                    if (*reinterpret_cast<void***>(rax56) != 94) {
                        rdi20 = rdi20 + 2;
                        goto addr_14000e633_41;
                    }
                }
                rbx57 = rbx57 + 2;
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx57) == 94)) 
                    goto addr_14000e1ba_72; else 
                    goto addr_14000e19d_73;
            }
            if (!cl37) {
                if (v21 & 4) 
                    goto addr_14000e64a_24;
                *reinterpret_cast<uint32_t*>(&rcx58) = g140025c24;
                *reinterpret_cast<int32_t*>(&rcx58 + 4) = 0;
                rdx17 = reinterpret_cast<void**>(0x3ea);
                *reinterpret_cast<int32_t*>(&rdx17 + 4) = 0;
                rsp59 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
                *rsp59 = 0x14000e458;
                fun_140003898(rcx58, 0x3ea, r8, 0);
                rsp5 = reinterpret_cast<struct s0*>(rsp59 + 1);
            }
            eax60 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi20));
            v61 = *reinterpret_cast<uint16_t*>(&eax60);
            goto addr_14000e467_78;
            addr_14000e2fb_57:
            rdx17 = reinterpret_cast<void**>(static_cast<uint32_t>(v61));
            *reinterpret_cast<int32_t*>(&rdx17 + 4) = 0;
            rsp62 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
            *rsp62 = 0x14000e30c;
            rax63 = reinterpret_cast<int64_t>(wcschr("*"));
            rsp5 = reinterpret_cast<struct s0*>(rsp62 + 1);
            if (!rax63) {
                addr_14000e467_78:
                if (!rsi13) {
                    rsp64 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
                    *rsp64 = 0x14000e486;
                    fun_14000dcc4(" ", " ");
                    rsp65 = reinterpret_cast<struct s0*>(rsp64 + 1);
                    rbx66 = rbp6 + 40;
                } else {
                    rsp67 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
                    *rsp67 = 0x14000e471;
                    rax68 = fun_14000dc58();
                    rsp65 = reinterpret_cast<struct s0*>(rsp67 + 1);
                    rbx66 = rax68;
                }
            } else {
                zf69 = g14003d110 == 0;
                if (zf69) 
                    goto addr_14000e62d_40;
                zf70 = (g1400157ec & 64) == 0;
                if (!zf70) 
                    goto addr_14000e62d_40;
                rdx71 = 0xffffffffffffffff;
                do {
                    ++rdx71;
                } while (0);
                rdx72 = rdx71 + 4;
                rax73 = rdx72 + rdx72;
                rcx74 = rax73 + 15;
                if (rcx74 > rax73) 
                    goto addr_14000e35f_86; else 
                    goto addr_14000e355_87;
            }
            rcx75 = rbp6 + 64;
            rsp76 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp65) - 8);
            *rsp76 = 0x14000e497;
            rax77 = fun_14000918c(rcx75, rcx75);
            rsp5 = reinterpret_cast<struct s0*>(rsp76 + 1);
            rsi78 = rax77;
            if (!rax77) {
                addr_14000e54b_89:
                rcx79 = v11;
                if (rcx79) {
                    if (!rsi78 || reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi78 + 24)) & 16) {
                        rsp80 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
                        *rsp80 = 0x14000e56e;
                        rax81 = fun_14000dcc4(0x140011dec, 0x140011dec);
                        rsp5 = reinterpret_cast<struct s0*>(rsp80 + 1);
                        rcx79 = v11;
                        *reinterpret_cast<void***>(rbx66 + 8) = rax81;
                    }
                    *reinterpret_cast<void***>(rbx66) = reinterpret_cast<void**>(0);
                    if (!v15) {
                        *reinterpret_cast<void***>(rcx79) = rbx66;
                    } else {
                        *reinterpret_cast<void***>(v15) = rbx66;
                    }
                    v15 = rbx66;
                }
            } else {
                if (!v9) {
                    addr_14000e4ff_97:
                    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi78 + 24)) & 1)) {
                        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi78 + 24)) & 16)) {
                            *reinterpret_cast<void***>(rbx66 + 8) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi78 + 16) + 8);
                            goto addr_14000e54b_89;
                        } else {
                            addr_14000e52d_100:
                            rsp82 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
                            *rsp82 = 0x14000e539;
                            rax83 = fun_14000dcc4(0x140011dec, 0x140011dec);
                            rsp5 = reinterpret_cast<struct s0*>(rsp82 + 1);
                            goto addr_14000e539_101;
                        }
                    } else {
                        if (v84 & 4) 
                            goto addr_14000e65e_103;
                        *reinterpret_cast<uint32_t*>(&rcx85) = g140025c24;
                        *reinterpret_cast<int32_t*>(&rcx85 + 4) = 0;
                        r8 = rbp6 + 64;
                        rsp86 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
                        *rsp86 = 0x14000e527;
                        fun_140003898(rcx85, 0x42e, r8, 0);
                        rsp5 = reinterpret_cast<struct s0*>(rsp86 + 1);
                        goto addr_14000e54b_89;
                    }
                } else {
                    rcx87 = v9;
                    r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rbp6 + 64) - reinterpret_cast<unsigned char>(v9));
                    do {
                        eax88 = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(rcx87) + reinterpret_cast<unsigned char>(r8));
                        rdx17 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx87)) - eax88);
                        *reinterpret_cast<int32_t*>(&rdx17 + 4) = 0;
                        if (rdx17) 
                            break;
                        rcx87 = rcx87 + 2;
                    } while (eax88);
                    if (rdx17) 
                        goto addr_14000e4ff_97; else 
                        goto addr_14000e4ce_109;
                }
            }
            if (!rsi78 || (rcx89 = *reinterpret_cast<void***>(rbx66 + 8), rsp90 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8), *rsp90 = 0x14000e5a9, rax91 = reinterpret_cast<int64_t>(wcschr(rcx89, 36, r8)), rsp5 = reinterpret_cast<struct s0*>(rsp90 + 1), rax91 == 0)) {
                rsi13 = v11;
                goto addr_14000e62d_40;
            } else {
                *reinterpret_cast<void***>(rsi78 + 24) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi78 + 24)) | 1);
                rax92 = v9;
                if (!rax92) {
                    addr_14000e5e7_113:
                    ecx93 = v94;
                    eax95 = v96;
                } else {
                    r8_97 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbp6 + 64) - reinterpret_cast<unsigned char>(rax92));
                    do {
                        ecx98 = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(rax92) + reinterpret_cast<uint64_t>(r8_97));
                        edx99 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax92)) - ecx98;
                        if (edx99) 
                            break;
                        rax92 = rax92 + 2;
                    } while (ecx98);
                    if (!edx99) 
                        goto addr_14000e5e7_113; else 
                        goto addr_14000e5dd_118;
                }
            }
            addr_14000e5f3_119:
            rsp5->f30 = v100;
            rsp5->f28 = ecx93;
            rcx101 = *reinterpret_cast<void***>(rbx66 + 8);
            rsp5->f20 = eax95 + 1;
            rsp102 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
            *rsp102 = 0x14000e61c;
            fun_14000dfd0(rcx101, v11, rbp6, rbp6 + 64);
            rsp5 = reinterpret_cast<struct s0*>(rsp102 + 1);
            *reinterpret_cast<void***>(rsi78 + 24) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi78 + 24)) & 0xfe);
            rsi13 = v11;
            addr_14000e1b2_120:
            goto addr_14000e62d_40;
            addr_14000e5dd_118:
            eax95 = v103;
            ecx93 = eax95;
            goto addr_14000e5f3_119;
            addr_14000e539_101:
            *reinterpret_cast<void***>(rbx66 + 8) = rax83;
            goto addr_14000e54b_89;
            addr_14000e4ce_109:
            ecx104 = v105;
            rax106 = *reinterpret_cast<void***>(rsi78 + 16);
            if (v105 != v107) {
                do {
                    if (!rax106) 
                        goto addr_14000e52d_100;
                    rax106 = *reinterpret_cast<void***>(rax106);
                    --ecx104;
                } while (ecx104 != v108);
            }
            if (!rax106) 
                goto addr_14000e52d_100;
            rax83 = *reinterpret_cast<void***>(rax106 + 8);
            goto addr_14000e539_101;
            addr_14000e35f_86:
            rsp109 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
            *rsp109 = 0x14000e36b;
            fun_140010df0();
            rsp110 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rsp109 + 1) - (rcx74 & 0xfffffffffffffff0));
            rbx111 = reinterpret_cast<void**>(&rsp110->f40);
            rsp112 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp110) - 8);
            *rsp112 = 0x14000e386;
            fun_14000bd88(rbx111, rdx72, "$", rbp6 + 64);
            r9_113 = g14003d118;
            r8 = rbx111;
            rdx17 = reinterpret_cast<void**>(0x44c);
            *reinterpret_cast<int32_t*>(&rdx17 + 4) = 0;
            rsp114 = rsp112 + 1 - 1;
            *rsp114 = 0x14000e39c;
            fun_140003898(0, 0x44c, r8, r9_113);
            rsp5 = reinterpret_cast<struct s0*>(rsp114 + 1);
            goto addr_14000e467_78;
            addr_14000e355_87:
            rcx74 = 0xffffffffffffff0;
            goto addr_14000e35f_86;
            addr_14000e2c0_62:
            *reinterpret_cast<uint32_t*>(&rcx115) = g140025c24;
            *reinterpret_cast<int32_t*>(&rcx115 + 4) = 0;
            rsp116 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
            *rsp116 = 0x14000e2d0;
            fun_140003898(rcx115, 0x3e8, r8, 0);
            rsp5 = reinterpret_cast<struct s0*>(rsp116 + 1);
            goto addr_14000e2d3_46;
            addr_14000e1ba_72:
            if (*reinterpret_cast<void***>(rbx57) == 41) {
                addr_14000e185_67:
                rdi20 = rbx57;
                goto addr_14000e633_41;
            } else {
                *reinterpret_cast<uint32_t*>(&rdx117) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx57));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx117) + 4) = 0;
                rsp118 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
                *rsp118 = 0x14000e1d0;
                rax119 = reinterpret_cast<int64_t>(wcschr("D", rdx117));
                rsp5 = reinterpret_cast<struct s0*>(rsp118 + 1);
                if (!rax119) 
                    goto addr_14000e62d_40;
                rbx57 = rbx57 + 2;
                if (*reinterpret_cast<void***>(rbx57) != 94) 
                    goto addr_14000e1e6_127;
            }
            addr_14000e19d_73:
            *reinterpret_cast<uint32_t*>(&r8_120) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx57 + 2));
            *reinterpret_cast<int32_t*>(&r8_120 + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rcx121) = g140025c24;
            *reinterpret_cast<int32_t*>(&rcx121 + 4) = 0;
            rsp122 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
            *rsp122 = 0x14000e1b2;
            fun_140003898(rcx121, 0x3e9, r8_120, 0);
            rsp5 = reinterpret_cast<struct s0*>(rsp122 + 1);
            goto addr_14000e1b2_120;
            addr_14000e1e6_127:
            *reinterpret_cast<uint32_t*>(&r8) = 36;
            *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx57) == 41)) {
                addr_14000e633_41:
                rdi10 = rdi20 + 2;
                rdx17 = reinterpret_cast<void**>(1);
                *reinterpret_cast<int32_t*>(&rdx17 + 4) = 0;
                if (!*reinterpret_cast<void***>(rdi10)) 
                    break;
            } else {
                goto addr_14000e185_67;
            }
            rcx = v19;
        }
        goto addr_14000e670_130;
    }
    addr_14000e682_132:
    *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8) = 0x14000e691;
    rax123 = fun_140010130(v8 ^ reinterpret_cast<unsigned char>(rbp6), rdx17, r8);
    return rax123;
    addr_14000e670_130:
    rbx12 = v14;
    goto addr_14000e674_11;
    addr_14000e65e_103:
    if (v14) {
        *reinterpret_cast<void***>(v14) = v15;
    }
    addr_14000e65a_134:
    goto addr_14000e682_132;
    addr_14000e64a_24:
    if (v14) {
        *reinterpret_cast<void***>(v14) = v15;
        goto addr_14000e65a_134;
    }
}

void** fun_140009214(void** rcx, void** rdx, void** r8, void** r9, ...);

void fun_140010e42(void** rcx, void** rdx, void** r8, void** r9);

void** fun_14000dcc4(void** rcx, ...) {
    void** rsi2;
    void** rdi3;
    void* rdi4;
    void** rax5;
    void** r8_6;
    void** r9_7;
    void** rax8;
    void** r9_9;

    rsi2 = rcx;
    rdi3 = reinterpret_cast<void**>(0xffffffffffffffff);
    do {
        ++rdi3;
    } while (*reinterpret_cast<void***>(rsi2 + reinterpret_cast<unsigned char>(rdi3) * 2));
    rdi4 = reinterpret_cast<void*>(rdi3 + 1);
    rax5 = reinterpret_cast<void**>(2 * reinterpret_cast<uint64_t>(rdi4));
    if (__intrinsic()) {
        rax5 = reinterpret_cast<void**>(0xffffffffffffffff);
    }
    rax8 = fun_140009214(rax5, __intrinsic(), r8_6, r9_7);
    fun_140010e42(rax8, rsi2, reinterpret_cast<uint64_t>(rdi4) + reinterpret_cast<uint64_t>(rdi4), r9_9);
    return rax8;
}

void** g1400157ee;

void** g1400157ef;

void** g140025c40;

void** g140025c48;

void** g140025c28;

void fun_140001474(void** rcx, void** rdx, void** r8, void** r9);

void** g14003d0e0;

void** g140025c38;

uint32_t g140025c20;

void** fun_14000f614(void** rcx, void** rdx, void** r8, void** r9);

void** fun_1400011b8() {
    void** al1;
    void** rax2;
    void** rcx3;
    void** rbx4;
    void** r9_5;
    void** r8_6;
    void** rdx7;
    void** r9_8;
    void** rax9;
    void** rcx10;
    void** rcx11;
    int1_t zf12;
    void** rcx13;
    void** r9_14;
    void** rcx15;
    void** r9_16;

    al1 = g1400157ee;
    g1400157ef = al1;
    rax2 = fun_14000dc58();
    rcx3 = g140025c40;
    *reinterpret_cast<void***>(rax2 + 8) = rcx3;
    rbx4 = g140025c48;
    g140025c28 = rax2;
    fun_140001474("$", 0x140025c28, 0x140025c48, r9_5);
    *reinterpret_cast<int32_t*>(&r8_6) = 0;
    *reinterpret_cast<int32_t*>(&r8_6 + 4) = 0;
    rdx7 = reinterpret_cast<void**>(0x140025c28);
    fun_140001474("*", 0x140025c28, 0, r9_8);
    g140025c48 = rbx4;
    rax9 = rbx4;
    if (rbx4) {
        rcx10 = g14003d0e0;
        do {
            rbx4 = *reinterpret_cast<void***>(rbx4);
            *reinterpret_cast<void***>(rax9) = rcx10;
            rcx10 = rax9;
            g140025c48 = rbx4;
            rax9 = rbx4;
        } while (rbx4);
        g14003d0e0 = rcx10;
    }
    rcx11 = g140025c28;
    if ((rcx11 || (zf12 = (reinterpret_cast<unsigned char>(g140025c38) & 32) == 0, zf12) && (r8_6 = g140025c40, rdx7 = reinterpret_cast<void**>(0x43b), *reinterpret_cast<int32_t*>(&rdx7 + 4) = 0, *reinterpret_cast<uint32_t*>(&rcx13) = g140025c20, *reinterpret_cast<int32_t*>(&rcx13 + 4) = 0, rax9 = fun_140003898(rcx13, 0x43b, r8_6, r9_14), rcx11 = g140025c28, !!rcx11)) && (rcx15 = *reinterpret_cast<void***>(rcx11 + 8), rax9 = fun_14000f614(rcx15, rdx7, r8_6, r9_16), !!*reinterpret_cast<signed char*>(&rax9))) {
        g140025c38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(g140025c38) | 16);
    }
    return rax9;
}

int64_t wcspbrk = 0x14892;

void** fun_14000f614(void** rcx, void** rdx, void** r8, void** r9) {
    void** rax5;
    int64_t rbx6;
    void** rax7;
    void** rdx8;
    void** rdi9;
    void** rcx10;
    uint32_t ecx11;

    rax5 = reinterpret_cast<void**>(__zero_stack_offset());
    *reinterpret_cast<int32_t*>(&rbx6) = 0;
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rcx) == 0x7b) || (rcx = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(2)), *reinterpret_cast<uint32_t*>(&rax5) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx)), *reinterpret_cast<int32_t*>(&rax5 + 4) = 0, *reinterpret_cast<int16_t*>(&rax5) == 0)) {
        addr_14000f666_2:
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rcx) == 46)) 
            goto addr_14000f75b_3;
    } else {
        do {
            if (*reinterpret_cast<int16_t*>(&rax5) == 0x7d) 
                break;
            if (*reinterpret_cast<int16_t*>(&rax5) == 94) {
                rcx = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(2));
            }
            rcx = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(2));
            *reinterpret_cast<uint32_t*>(&rax5) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx));
            *reinterpret_cast<int32_t*>(&rax5 + 4) = 0;
        } while (*reinterpret_cast<int16_t*>(&rax5));
        if (!*reinterpret_cast<void***>(rcx)) 
            goto addr_14000f666_2; else 
            goto addr_14000f663_9;
    }
    rax7 = rcx;
    do {
        if (*reinterpret_cast<void***>(rax7) == 0x7b) 
            break;
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rax7) == 94)) {
            rax7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax7) + reinterpret_cast<unsigned char>(2));
        }
        rax7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax7) + reinterpret_cast<unsigned char>(2));
    } while (*reinterpret_cast<void***>(rax7));
    rdx8 = rcx;
    while (reinterpret_cast<unsigned char>(rcx) < reinterpret_cast<unsigned char>(rax7) && (*reinterpret_cast<void***>(rcx) != 92 && *reinterpret_cast<void***>(rcx) != 47)) {
        rcx = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(2));
    }
    if (!*reinterpret_cast<void***>(rax7)) 
        goto addr_14000f6f7_19;
    if (rcx == rax7) 
        goto addr_14000f6b9_21;
    addr_14000f6f7_19:
    rax5 = reinterpret_cast<void**>(wcspbrk(rdx8 + 2, "."));
    if (!rax5 || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rax5) == 46)) {
        addr_14000f75b_3:
        *reinterpret_cast<signed char*>(&rax5) = *reinterpret_cast<signed char*>(&rbx6);
        return rax5;
    } else {
        rdi9 = rax5 + 2;
    }
    addr_14000f716_23:
    rax5 = reinterpret_cast<void**>(wcschr(rdi9, 47));
    if (!rax5 && (rax5 = reinterpret_cast<void**>(wcschr(rdi9, 92)), !rax5)) {
        rax5 = reinterpret_cast<void**>(wcschr(rdi9, 46));
        if (!rax5) {
            *reinterpret_cast<signed char*>(&rbx6) = 1;
            goto addr_14000f75b_3;
        } else {
            *reinterpret_cast<uint32_t*>(&rcx10) = g140025c24;
            *reinterpret_cast<int32_t*>(&rcx10 + 4) = 0;
            rax5 = fun_140003898(rcx10, 0x444, 2, r9);
            goto addr_14000f75b_3;
        }
    }
    addr_14000f6b9_21:
    rax5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax7) + reinterpret_cast<unsigned char>(2));
    ecx11 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax5));
    if (!*reinterpret_cast<int16_t*>(&ecx11)) 
        goto addr_14000f75b_3;
    do {
        if (*reinterpret_cast<int16_t*>(&ecx11) == 0x7d) 
            break;
        if (*reinterpret_cast<int16_t*>(&ecx11) == 94) {
            rax5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax5) + reinterpret_cast<unsigned char>(2));
        }
        rax5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax5) + reinterpret_cast<unsigned char>(2));
        ecx11 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax5));
    } while (*reinterpret_cast<int16_t*>(&ecx11));
    if (!*reinterpret_cast<void***>(rax5)) 
        goto addr_14000f75b_3;
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax5) + reinterpret_cast<unsigned char>(2)) == 46)) 
        goto addr_14000f75b_3;
    rdi9 = rax5 + 4;
    goto addr_14000f716_23;
    addr_14000f663_9:
    rcx = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(2));
    goto addr_14000f666_2;
}

void** fun_140003a8c(void** rcx, ...);

void fun_14000be7c(void** rcx, void** rdx, void** r8, void** r9);

void** g140026490;

void** fun_1400039c0(void** rcx, void** rdx, void** r8, void** r9, ...);

void** fun_14000bbec(void** ecx, void** rdx, void** r8);

void fun_14000bf3c(void** rcx, void** rdx, void** r8);

void** fun_14000bea4(void** rcx, void** rdx, void** r8);

signed char g140037093;

int64_t __acrt_iob_func = 0x149a2;

int64_t fflush = 0x14baa;

void** fun_14000bb48(void** rcx, void** rdx, void** r8, void** r9);

int64_t exit = 0x1491c;

void** fun_140003898(void** rcx, void** edx, void** r8, void** r9, ...) {
    void** rdx2;
    void** v5;
    int1_t zf6;
    int64_t rbx7;
    void** rax8;
    void** rdx9;
    void** rdx10;
    void* edi11;
    void* eax12;
    void** eax13;
    void** rcx14;
    void** rdx15;
    void** rax16;
    void** rdx17;
    int1_t zf18;
    int64_t rax19;
    int64_t rcx20;

    rdx2 = edx;
    v5 = rdx2;
    zf6 = (g1400157ec & 32) == 0;
    *reinterpret_cast<void***>(&rbx7) = reinterpret_cast<void**>(2);
    if (zf6 || (*reinterpret_cast<uint32_t*>(&rax8) = 0x10624dd3 * reinterpret_cast<unsigned char>(rdx2), *reinterpret_cast<int32_t*>(&rax8 + 4) = 0, rdx2 = reinterpret_cast<void**>(__intrinsic() >> 6), *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0, rdx2 != 4)) {
        fun_140003a8c(rcx);
        if (!*reinterpret_cast<int32_t*>(&rcx)) {
            fun_14000be7c("N", rdx2, r8, r9);
        } else {
            rdx9 = g140026490;
            *reinterpret_cast<int32_t*>(&r8) = *reinterpret_cast<int32_t*>(&rcx);
            *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
            fun_14000be7c("%", rdx9, r8, r9);
        }
        *reinterpret_cast<uint32_t*>(&rdx10) = __intrinsic();
        *reinterpret_cast<int32_t*>(&rdx10 + 4) = 0;
        edi11 = reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(&rdx10) >> 6);
        eax12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi11) - 1);
        if (eax12) 
            goto addr_14000391d_6;
    } else {
        addr_1400039b4_7:
        return rax8;
    }
    fun_1400039c0(20, rdx10, r8, r9);
    if (v5 == 0x41b) {
        *reinterpret_cast<void***>(&rbx7) = reinterpret_cast<void**>(4);
        goto addr_14000394f_10;
    }
    addr_14000391d_6:
    eax13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax12) - 1);
    if (!eax13) {
        *reinterpret_cast<int32_t*>(&rcx14) = 21;
        *reinterpret_cast<int32_t*>(&rcx14 + 4) = 0;
    } else {
        if (!reinterpret_cast<int1_t>(eax13 == 2)) {
            addr_14000394f_10:
            rdx15 = v5;
            *reinterpret_cast<int32_t*>(&rdx15 + 4) = 0;
            fun_14000be7c(" ", rdx15, r8, r9);
            rax16 = fun_14000bbec(v5, rdx15, r8);
            rdx17 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 24);
            fun_14000bf3c(rax16, rdx17, r8);
            rax8 = fun_14000bea4(rax16, rdx17, r8);
            zf18 = g140037093 == 0;
            if (zf18) {
                rax19 = reinterpret_cast<int64_t>(__acrt_iob_func(2, rdx17, r8));
                rax8 = reinterpret_cast<void**>(fflush(rax19, rdx17, r8));
                goto addr_140003995_14;
            }
        } else {
            *reinterpret_cast<int32_t*>(&rcx14) = 22;
            *reinterpret_cast<int32_t*>(&rcx14 + 4) = 0;
        }
    }
    fun_1400039c0(rcx14, rdx10, r8, r9);
    goto addr_14000394f_10;
    addr_140003995_14:
    if (reinterpret_cast<int1_t>(edi11 == 1)) {
        fun_14000be7c("S", rdx17, r8, r9);
        fun_14000bb48("S", rdx17, r8, r9);
        *reinterpret_cast<void***>(&rcx20) = *reinterpret_cast<void***>(&rbx7);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = 0;
        rax8 = reinterpret_cast<void**>(exit(rcx20, rdx17, r8));
        goto addr_1400039b4_7;
    }
}

void** fun_14000fde8(void** rcx, void** rdx, void** r8, void** r9);

void** fun_14000e740(void** rcx, signed char dl, void** r8, ...);

int64_t free = 0x1487e;

void** fun_14000160c(void*** rcx, void** rdx, void** r8);

void fun_140001474(void** rcx, void** rdx, void** r8, void** r9) {
    void** v5;
    void* rsp6;
    void** rbx7;
    void** rdi8;
    void** r12_9;
    void** v10;
    void** r13_11;
    void** rbp12;
    void** rsi13;
    void** r14_14;
    void** r15_15;
    void** rcx16;
    void** rdx17;
    int64_t rax18;
    void** rcx19;
    void** rax20;
    void** rcx21;
    void** rax22;
    void** rax23;
    void** rcx24;
    void** rax25;
    void** rcx26;
    void** rax27;
    void** rcx28;
    void** rax29;
    void** rax30;
    void* rsp31;
    void** rax32;
    void** rax33;

    v5 = r8;
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 32);
    rbx7 = *reinterpret_cast<void***>(rdx);
    *reinterpret_cast<int32_t*>(&rdi8) = 0;
    *reinterpret_cast<int32_t*>(&rdi8 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r12_9) = 0;
    *reinterpret_cast<int32_t*>(&r12_9 + 4) = 0;
    v10 = reinterpret_cast<void**>(0);
    *reinterpret_cast<int32_t*>(&r13_11) = 0;
    *reinterpret_cast<int32_t*>(&r13_11 + 4) = 0;
    rbp12 = r8;
    *reinterpret_cast<int32_t*>(&rsi13) = 0;
    *reinterpret_cast<int32_t*>(&rsi13 + 4) = 0;
    r14_14 = rdx;
    r15_15 = rcx;
    while (rbx7) {
        rcx16 = *reinterpret_cast<void***>(rbx7 + 8);
        rdx17 = r15_15;
        rax18 = reinterpret_cast<int64_t>(wcspbrk(rcx16, rdx17, r8));
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
        if (!rax18) 
            goto addr_1400015e7_4;
        rcx19 = *reinterpret_cast<void***>(rbx7 + 8);
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r15_15) == 36)) {
            rax20 = fun_14000f614(rcx19, rdx17, r8, r9);
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
            if (*reinterpret_cast<signed char*>(&rax20) || (rcx21 = *reinterpret_cast<void***>(rbx7 + 8), rax22 = fun_14000fde8(rcx21, rdx17, r8, r9), rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8), v10 = rax22, rdi8 = rax22, rax22 == 0)) {
                addr_1400015e7_4:
                rsi13 = rbx7;
                rbx7 = *reinterpret_cast<void***>(rbx7);
                continue;
            } else {
                r13_11 = *reinterpret_cast<void***>(rbx7 + 8);
            }
        } else {
            r8 = rbp12;
            *reinterpret_cast<signed char*>(&rdx17) = -1;
            rax23 = fun_14000e740(rcx19, -1, r8);
            rcx24 = *reinterpret_cast<void***>(rbx7 + 8);
            r12_9 = rax23;
            free(rcx24, rdx17, r8);
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8 - 8 + 8);
        }
        if (!rsi13) {
            *reinterpret_cast<void***>(r14_14) = *reinterpret_cast<void***>(rbx7);
            rax25 = g14003d0e0;
            *reinterpret_cast<void***>(rbx7) = rax25;
            g14003d0e0 = rbx7;
            rbx7 = *reinterpret_cast<void***>(r14_14);
        } else {
            *reinterpret_cast<void***>(rsi13) = *reinterpret_cast<void***>(rbx7);
            rcx26 = g14003d0e0;
            *reinterpret_cast<void***>(rbx7) = rcx26;
            g14003d0e0 = rbx7;
            rbx7 = *reinterpret_cast<void***>(rsi13);
        }
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r15_15) == 36)) {
            if (rdi8) {
                if (!rsi13) {
                    rax27 = *reinterpret_cast<void***>(rdi8);
                    rsi13 = rdi8;
                    while (rax27) {
                        rsi13 = rax27;
                        rax27 = *reinterpret_cast<void***>(rax27);
                    }
                }
                rcx28 = *reinterpret_cast<void***>(r14_14);
                do {
                    rax29 = rdi8;
                    rdi8 = *reinterpret_cast<void***>(rdi8);
                } while (rdi8);
                *reinterpret_cast<void***>(rax29) = rcx28;
                rdi8 = v10;
                *reinterpret_cast<void***>(r14_14) = rdi8;
            }
            free(r13_11, rdx17, r8);
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
        } else {
            while (rax30 = fun_14000160c(reinterpret_cast<int64_t>(rsp6) + 0x78, rdx17, r8), rsp31 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8), !!rax30) {
                rax32 = fun_14000dc58();
                v10 = rax32;
                rdi8 = rax32;
                rax33 = fun_14000dcc4(rax30, rax30);
                rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp31) - 8 + 8 - 8 + 8);
                *reinterpret_cast<void***>(rdi8 + 8) = rax33;
                *reinterpret_cast<void***>(rdi8) = *reinterpret_cast<void***>(r14_14);
                if (!rsi13) {
                    rsi13 = rdi8;
                }
                *reinterpret_cast<void***>(r14_14) = rdi8;
            }
            free(r12_9, rdx17, r8);
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp31) - 8 + 8);
            rbp12 = v5;
        }
    }
    return;
}

void fun_140010c12(void** rcx, ...);

void** fun_140009244(void** rcx, void** rdx, void** r8, void** r9, ...) {
    void** rax5;

    rax5 = fun_140009214(rcx, rdx, r8, r9);
    fun_140010c12(rax5);
    return rax5;
}

int64_t _wcsicmp = 0x14886;

void** fun_14000b804(uint16_t cx, unsigned char dl, void** r8, void** r9);

void** fun_1400013b0(void** rcx, void** rdx, void** r8, void** r9) {
    void** rdi5;
    signed char bl6;
    int64_t rax7;
    int32_t ecx8;
    int64_t rax9;
    void** rax10;
    void* rdx11;
    uint32_t r8d12;
    uint32_t ecx13;
    int32_t ecx14;
    void* rdx15;
    uint32_t ecx16;

    rdi5 = rcx;
    bl6 = 0;
    rax7 = reinterpret_cast<int64_t>(_wcsicmp());
    if (!*reinterpret_cast<int32_t*>(&rax7)) {
        g140025c38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(g140025c38) | 2);
        ecx8 = static_cast<int32_t>(rax7 + 0x73);
        fun_14000b804(*reinterpret_cast<uint16_t*>(&ecx8), 1, r8, r9);
        bl6 = 1;
    }
    rax9 = reinterpret_cast<int64_t>(_wcsicmp(rdi5, "."));
    if (*reinterpret_cast<int32_t*>(&rax9)) {
        rax10 = rdi5;
        rdx11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(".") - reinterpret_cast<unsigned char>(rdi5));
        do {
            r8d12 = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(rax10) + reinterpret_cast<uint64_t>(rdx11));
            ecx13 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax10)) - r8d12;
            if (ecx13) 
                break;
            rax10 = rax10 + 2;
        } while (r8d12);
        if (!ecx13) 
            goto addr_140001431_8;
    } else {
        g140025c38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(g140025c38) | 4);
        ecx14 = static_cast<int32_t>(rax9 + 0x69);
        rax10 = fun_14000b804(*reinterpret_cast<uint16_t*>(&ecx14), 1, r8, r9);
        goto addr_140001462_10;
    }
    rdx15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(".") - reinterpret_cast<unsigned char>(rdi5));
    do {
        ecx16 = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(rdi5) + reinterpret_cast<uint64_t>(rdx15));
        *reinterpret_cast<uint32_t*>(&rax10) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi5)) - ecx16;
        *reinterpret_cast<int32_t*>(&rax10 + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rax10)) 
            break;
        rdi5 = rdi5 + 2;
    } while (ecx16);
    if (!*reinterpret_cast<uint32_t*>(&rax10)) 
        goto addr_14000145b_15;
    addr_140001464_16:
    *reinterpret_cast<signed char*>(&rax10) = bl6;
    return rax10;
    addr_14000145b_15:
    g140025c38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(g140025c38) | 8);
    addr_140001462_10:
    bl6 = 1;
    goto addr_140001464_16;
    addr_140001431_8:
    g140025c38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(g140025c38) | 1);
    goto addr_140001462_10;
}

int64_t towupper = 0x14974;

signed char g140025c39;

void** g140036e78;

void** g140036e70;

struct s2 {
    int16_t f0;
    uint16_t f2;
};

int64_t _wputenv_s = 0x148c2;

void** g140026488;

unsigned char g140025c3a;

void** g14002648b;

unsigned char g140025c3b;

void** fun_14000b804(uint16_t cx, unsigned char dl, void** r8, void** r9) {
    unsigned char dil5;
    unsigned char* rbx6;
    uint32_t ebp7;
    void** rax8;
    uint32_t esi9;
    void** r8_10;
    uint32_t r8d11;
    uint32_t r8d12;
    int1_t zf13;
    void** rcx14;
    int64_t rdx15;
    void** rcx16;
    struct s2* rax17;
    uint32_t ecx18;
    void** rcx19;
    int64_t rdx20;
    int64_t rax21;
    void** rax22;
    void** rcx23;
    uint16_t* rax24;
    void** rax25;
    void** rcx26;
    uint32_t r8d27;
    uint32_t r8d28;

    dil5 = 0;
    rbx6 = reinterpret_cast<unsigned char*>(0x1400157ee);
    ebp7 = cx;
    rax8 = reinterpret_cast<void**>(towupper());
    esi9 = *reinterpret_cast<uint16_t*>(&rax8);
    *reinterpret_cast<uint32_t*>(&r8_10) = esi9;
    *reinterpret_cast<int32_t*>(&r8_10 + 4) = 0;
    if (reinterpret_cast<int32_t>(esi9) > reinterpret_cast<int32_t>(76)) {
        *reinterpret_cast<uint32_t*>(&r8_10) = *reinterpret_cast<uint32_t*>(&r8_10) - 78;
        *reinterpret_cast<int32_t*>(&r8_10 + 4) = 0;
        if (!*reinterpret_cast<uint32_t*>(&r8_10)) {
            addr_14000b8c3_3:
            dil5 = 4;
        } else {
            r8d11 = *reinterpret_cast<uint32_t*>(&r8_10) - 1;
            if (!r8d11) {
                g140025c39 = 1;
                goto addr_14000ba57_6;
            }
            *reinterpret_cast<uint32_t*>(&r8_10) = r8d11 - 1;
            *reinterpret_cast<int32_t*>(&r8_10 + 4) = 0;
            if (!*reinterpret_cast<uint32_t*>(&r8_10)) 
                goto addr_14000b996_8; else 
                goto addr_14000b939_9;
        }
    } else {
        if (esi9 == 76) {
            dil5 = 0x80;
            goto addr_14000b901_12;
        } else {
            r8d12 = *reinterpret_cast<uint32_t*>(&r8_10) - 32;
            if (!r8d12) 
                goto addr_14000ba57_6;
            *reinterpret_cast<uint32_t*>(&r8_10) = r8d12 - 33;
            *reinterpret_cast<int32_t*>(&r8_10 + 4) = 0;
            if (!*reinterpret_cast<uint32_t*>(&r8_10)) 
                goto addr_14000b91d_15; else 
                goto addr_14000b869_16;
        }
    }
    addr_14000b8c6_17:
    zf13 = g140036e78 == 0;
    if (!zf13) {
        rcx14 = g140036e70;
    } else {
        rax8 = fun_14000918c("M", "M");
        g140036e78 = rax8;
        rcx14 = *reinterpret_cast<void***>(rax8 + 16);
        g140036e70 = rcx14;
    }
    if (!dl) {
        if (!reinterpret_cast<int1_t>(rbx6 == 0x1400157ee)) {
            addr_14000ba57_6:
            return rax8;
        } else {
            *reinterpret_cast<uint32_t*>(&rdx15) = *reinterpret_cast<uint16_t*>(&esi9);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = 0;
            *rbx6 = reinterpret_cast<unsigned char>(*rbx6 & reinterpret_cast<unsigned char>(~dil5));
            rcx16 = *reinterpret_cast<void***>(rcx14 + 8);
            rax17 = reinterpret_cast<struct s2*>(wcschr(rcx16, rdx15, r8_10));
            if (rax17) {
                do {
                    ecx18 = rax17->f2;
                    rax17->f0 = *reinterpret_cast<int16_t*>(&ecx18);
                    rax17 = reinterpret_cast<struct s2*>(&rax17->f2);
                } while (*reinterpret_cast<int16_t*>(&ecx18));
            }
        }
    } else {
        *rbx6 = reinterpret_cast<unsigned char>(*rbx6 | dil5);
        if (*reinterpret_cast<uint16_t*>(&esi9) == 81) {
            *rbx6 = reinterpret_cast<unsigned char>(*rbx6 | 32);
        }
        rcx19 = *reinterpret_cast<void***>(rcx14 + 8);
        *reinterpret_cast<uint32_t*>(&rdx20) = *reinterpret_cast<uint16_t*>(&esi9);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = 0;
        rax21 = reinterpret_cast<int64_t>(wcschr(rcx19, rdx20, r8_10));
        if (!rax21 && (rax22 = g140036e70, rcx23 = *reinterpret_cast<void***>(rax22 + 8), rax24 = reinterpret_cast<uint16_t*>(wcschr(rcx23, 32, r8_10)), !!rax24)) {
            *rax24 = *reinterpret_cast<uint16_t*>(&esi9);
        }
    }
    rax25 = fun_14000dcc4(" ", " ");
    rax8 = reinterpret_cast<void**>(_wputenv_s("M", rax25, r8_10));
    if (*reinterpret_cast<int32_t*>(&rax8)) {
        *reinterpret_cast<uint32_t*>(&rcx26) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx26 + 4) = 0;
        rax8 = fun_140003898(rcx26, 0x41f, r8_10, r9);
        goto addr_14000ba57_6;
    }
    addr_14000b996_8:
    dil5 = 1;
    addr_14000b999_30:
    rbx6 = reinterpret_cast<unsigned char*>(0x1400157ec);
    goto addr_14000b8c6_17;
    addr_14000b939_9:
    *reinterpret_cast<uint32_t*>(&r8_10) = *reinterpret_cast<uint32_t*>(&r8_10) - 1;
    *reinterpret_cast<int32_t*>(&r8_10 + 4) = 0;
    if (!*reinterpret_cast<uint32_t*>(&r8_10)) {
        dil5 = 8;
        goto addr_14000b999_30;
    } else {
        *reinterpret_cast<uint32_t*>(&r8_10) = *reinterpret_cast<uint32_t*>(&r8_10) - 1;
        *reinterpret_cast<int32_t*>(&r8_10 + 4) = 0;
        if (!*reinterpret_cast<uint32_t*>(&r8_10)) {
            dil5 = 2;
            goto addr_14000b999_30;
        } else {
            *reinterpret_cast<uint32_t*>(&r8_10) = *reinterpret_cast<uint32_t*>(&r8_10) - 1;
            *reinterpret_cast<int32_t*>(&r8_10 + 4) = 0;
            if (!*reinterpret_cast<uint32_t*>(&r8_10)) {
                dil5 = 8;
                goto addr_14000b8c6_17;
            } else {
                *reinterpret_cast<uint32_t*>(&r8_10) = *reinterpret_cast<uint32_t*>(&r8_10) - 1;
                *reinterpret_cast<int32_t*>(&r8_10 + 4) = 0;
                if (!*reinterpret_cast<uint32_t*>(&r8_10)) {
                    dil5 = 16;
                    goto addr_14000b999_30;
                } else {
                    *reinterpret_cast<uint32_t*>(&r8_10) = *reinterpret_cast<uint32_t*>(&r8_10) - 1;
                    *reinterpret_cast<int32_t*>(&r8_10 + 4) = 0;
                    if (!*reinterpret_cast<uint32_t*>(&r8_10)) {
                        dil5 = 64;
                        goto addr_14000b8c6_17;
                    } else {
                        if (*reinterpret_cast<uint32_t*>(&r8_10) == 4) {
                            dil5 = 64;
                            goto addr_14000b999_30;
                        } else {
                            *reinterpret_cast<uint32_t*>(&r8_10) = *reinterpret_cast<uint16_t*>(&ebp7);
                            *reinterpret_cast<int32_t*>(&r8_10 + 4) = 0;
                            rax8 = fun_140003898(0, 0x429, r8_10, r9);
                            goto addr_14000b8c6_17;
                        }
                    }
                }
            }
        }
    }
    addr_14000b901_12:
    rbx6 = reinterpret_cast<unsigned char*>(0x1400157ec);
    g140026488 = reinterpret_cast<void**>(1);
    goto addr_14000b8c6_17;
    addr_14000b91d_15:
    dil5 = 16;
    goto addr_14000b8c6_17;
    addr_14000b869_16:
    r8d27 = *reinterpret_cast<uint32_t*>(&r8_10) - 1;
    if (!r8d27) {
        g140025c3a = 1;
        goto addr_14000ba57_6;
    }
    *reinterpret_cast<uint32_t*>(&r8_10) = r8d27 - 1;
    *reinterpret_cast<int32_t*>(&r8_10 + 4) = 0;
    if (!*reinterpret_cast<uint32_t*>(&r8_10)) {
        dil5 = 32;
        goto addr_14000b901_12;
    } else {
        *reinterpret_cast<uint32_t*>(&r8_10) = *reinterpret_cast<uint32_t*>(&r8_10) - 1;
        *reinterpret_cast<int32_t*>(&r8_10 + 4) = 0;
        if (!*reinterpret_cast<uint32_t*>(&r8_10)) {
            dil5 = 1;
            goto addr_14000b8c6_17;
        } else {
            *reinterpret_cast<uint32_t*>(&r8_10) = *reinterpret_cast<uint32_t*>(&r8_10) - 1;
            *reinterpret_cast<int32_t*>(&r8_10 + 4) = 0;
            if (!*reinterpret_cast<uint32_t*>(&r8_10)) {
                rbx6 = reinterpret_cast<unsigned char*>(0x1400157ec);
                goto addr_14000b8c3_3;
            }
            r8d28 = *reinterpret_cast<uint32_t*>(&r8_10) - 2;
            if (!r8d28) {
                g14002648b = reinterpret_cast<void**>(1);
                goto addr_14000ba57_6;
            }
            *reinterpret_cast<uint32_t*>(&r8_10) = r8d28 - 2;
            *reinterpret_cast<int32_t*>(&r8_10 + 4) = 0;
            if (*reinterpret_cast<uint32_t*>(&r8_10)) 
                goto addr_14000b895_53;
        }
    }
    dil5 = 2;
    goto addr_14000b8c6_17;
    addr_14000b895_53:
    if (*reinterpret_cast<uint32_t*>(&r8_10) == 2) {
        g140025c3b = 1;
        goto addr_14000ba57_6;
    }
}

void fun_14000eb78(void** rcx, void** rdx, void** r8, void** r9);

void fun_14000f188(void** rcx, void** rdx, void** r8, void** r9);

void fun_14000ec20(void** rcx, void** rdx, void** r8, void** r9);

void** fun_14000e740(void** rcx, signed char dl, void** r8, ...) {
    void* rsp4;
    void* rbp5;
    void* rsp6;
    uint64_t rax7;
    uint64_t v8;
    void** v9;
    void** rdi10;
    unsigned char v11;
    signed char v12;
    void** v13;
    void* v14;
    void** rsi15;
    uint32_t eax16;
    void* rbx17;
    uint32_t v18;
    void** v19;
    void* v20;
    void* rbx21;
    void** rax22;
    unsigned char sil23;
    void** r9_24;
    uint32_t eax25;
    void** rbx26;
    int64_t rdx27;
    int64_t rax28;
    int64_t rdx29;
    int64_t rax30;
    void** rcx31;
    void** rcx32;
    int64_t rax33;
    void* rsp34;
    void** rbx35;
    void** rcx36;
    void** rcx37;
    void** rax38;
    void** rdx39;
    uint32_t eax40;
    void** rax41;
    void* rsp42;
    void** rcx43;
    void** r8_44;
    uint64_t rcx45;
    void** rax46;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8);
    rbp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 0x790);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 0x890);
    rax7 = g140015008;
    v8 = rax7 ^ reinterpret_cast<uint64_t>(rsp6);
    v9 = rcx;
    rdi10 = rcx;
    v11 = 0;
    *reinterpret_cast<unsigned char*>(&rcx) = 0;
    v12 = dl;
    v13 = r8;
    v14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp5) + 0x780);
    rsi15 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff80);
    eax16 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi10));
    rbx17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp5) - 0x80);
    v18 = *reinterpret_cast<uint32_t*>(&rcx);
    v19 = rsi15;
    v20 = rbx17;
    if (!*reinterpret_cast<int16_t*>(&eax16)) {
        addr_14000eb00_2:
        rbx21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbx17) + 2 - reinterpret_cast<unsigned char>(rsi15) >> 1);
        rax22 = reinterpret_cast<void**>(2 * reinterpret_cast<uint64_t>(rbx21));
        if (__intrinsic()) {
            rax22 = reinterpret_cast<void**>(0xffffffffffffffff);
        }
    } else {
        sil23 = 0;
        while (1) {
            *reinterpret_cast<uint32_t*>(&r8) = 1;
            *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
            *reinterpret_cast<int32_t*>(&r9_24) = 94;
            *reinterpret_cast<int32_t*>(&r9_24 + 4) = 0;
            if (*reinterpret_cast<int16_t*>(&eax16)) {
                do {
                    if (*reinterpret_cast<int16_t*>(&eax16) == 36) 
                        break;
                    if (rbx17 == v14) {
                        fun_14000eb78(reinterpret_cast<uint64_t>(rsp6) + 88, reinterpret_cast<uint64_t>(rsp6) + 72, reinterpret_cast<uint64_t>(rsp6) + 80, reinterpret_cast<uint64_t>(rsp6) + 0x68);
                        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
                        rbx17 = v20;
                        *reinterpret_cast<uint32_t*>(&rcx) = v18;
                        *reinterpret_cast<uint32_t*>(&r8) = 1;
                        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                        *reinterpret_cast<int32_t*>(&r9_24) = 94;
                        *reinterpret_cast<int32_t*>(&r9_24 + 4) = 0;
                    }
                    eax25 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi10));
                    if (*reinterpret_cast<int16_t*>(&eax25) == 34) {
                        *reinterpret_cast<unsigned char*>(&rcx) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx) == 0);
                        v18 = *reinterpret_cast<uint32_t*>(&rcx);
                    }
                    if (!*reinterpret_cast<unsigned char*>(&rcx) && *reinterpret_cast<int16_t*>(&eax25) == 94) {
                        rbx17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbx17) + 2);
                        if (rbx17 == v14) {
                            fun_14000eb78(reinterpret_cast<uint64_t>(rsp6) + 88, reinterpret_cast<uint64_t>(rsp6) + 72, reinterpret_cast<uint64_t>(rsp6) + 80, reinterpret_cast<uint64_t>(rsp6) + 0x68);
                            rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
                            rbx17 = rbx17;
                            *reinterpret_cast<uint32_t*>(&rcx) = v18;
                            *reinterpret_cast<uint32_t*>(&r8) = 1;
                            *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                            *reinterpret_cast<int32_t*>(&r9_24) = 94;
                            *reinterpret_cast<int32_t*>(&r9_24 + 4) = 0;
                        }
                        rdi10 = rdi10 + 2;
                        *reinterpret_cast<uint32_t*>(&rcx) = *reinterpret_cast<unsigned char*>(&rcx);
                        eax25 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi10));
                        if (*reinterpret_cast<int16_t*>(&eax25) == 34) {
                            *reinterpret_cast<uint32_t*>(&rcx) = 1;
                        }
                        v18 = *reinterpret_cast<uint32_t*>(&rcx);
                    }
                    rdi10 = rdi10 + 2;
                    rbx17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbx17) + 2);
                    v9 = rdi10;
                    v20 = rbx17;
                    eax16 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi10));
                } while (*reinterpret_cast<int16_t*>(&eax16));
                sil23 = v11;
            }
            if (rbx17 == v14) {
                r9_24 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6) + 0x68);
                r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6) + 80);
                fun_14000eb78(reinterpret_cast<uint64_t>(rsp6) + 88, reinterpret_cast<uint64_t>(rsp6) + 72, r8, r9_24);
                rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
                rbx17 = v20;
            }
            if (!*reinterpret_cast<void***>(rdi10)) 
                break;
            rbx26 = rdi10 + 4;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi10 + 2) == 40) || (*reinterpret_cast<uint32_t*>(&rdx27) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi10 + 4)), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = 0, rax28 = reinterpret_cast<int64_t>(wcschr("*", rdx27, r8, r9_24)), rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8), rax28 == 0)) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi10 + 2) == 36)) {
                    *reinterpret_cast<uint32_t*>(&rdx29) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi10 + 2));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = 0;
                    rax30 = reinterpret_cast<int64_t>(wcschr("*", rdx29, r8, r9_24));
                    rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
                    if (!rax30) {
                        if (!*reinterpret_cast<void***>(v13)) {
                            *reinterpret_cast<uint32_t*>(&rcx31) = g140025c24;
                            *reinterpret_cast<int32_t*>(&rcx31 + 4) = 0;
                            fun_140003898(rcx31, 0x410, r8, r9_24, rcx31, 0x410, r8, r9_24);
                            rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
                        }
                        rcx32 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v13) + 8);
                        rax33 = reinterpret_cast<int64_t>(wcschr(rcx32, 36, r8, r9_24));
                        rsp34 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
                        if (!rax33) {
                            rbx35 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v13) + 8);
                            *reinterpret_cast<void***>(v13) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v13));
                        } else {
                            rcx36 = *reinterpret_cast<void***>(v13);
                            *reinterpret_cast<void***>(v13) = *reinterpret_cast<void***>(rcx36);
                            rcx37 = *reinterpret_cast<void***>(rcx36 + 8);
                            rax38 = fun_14000e740(rcx37, v12, v13, rcx37, v12, v13);
                            rsp34 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp34) - 8 + 8);
                            sil23 = 1;
                            rbx35 = rax38;
                            v11 = 1;
                        }
                        r9_24 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp34) + 80);
                        r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp34) + 72);
                        rdx39 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp34) + 0x70);
                        fun_14000f188(reinterpret_cast<uint64_t>(rsp34) + 88, rdx39, r8, r9_24);
                        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp34) - 8 + 8);
                        if (sil23) {
                            free(rbx35, rdx39, r8, r9_24);
                            rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
                            sil23 = 0;
                            v11 = 0;
                        }
                    } else {
                        goto addr_14000e925_34;
                    }
                } else {
                    if (*reinterpret_cast<void***>(rbx26) == 94 || v12 != 1) {
                        addr_14000e9bf_36:
                        goto addr_14000e925_34;
                    } else {
                        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx26) == 64)) {
                            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx26) == 40)) {
                                rbx26 = rbx26 + 2;
                            }
                            eax40 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx26 + 2));
                            *reinterpret_cast<uint16_t*>(&eax40) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax40) - 66);
                            if (*reinterpret_cast<uint16_t*>(&eax40) > 16) 
                                goto addr_14000e9bf_36;
                            if (!static_cast<int1_t>(0x10015 >> eax40)) 
                                goto addr_14000e9bf_36;
                            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx26 + 4) == 41)) 
                                goto addr_14000e9bf_36; else 
                                goto addr_14000e9a9_43;
                        } else {
                            goto addr_14000e925_34;
                        }
                    }
                }
            } else {
                goto addr_14000e925_34;
            }
            addr_14000eab0_46:
            rdi10 = v9;
            rbx17 = v20;
            eax16 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi10));
            if (!*reinterpret_cast<int16_t*>(&eax16)) 
                break;
            *reinterpret_cast<uint32_t*>(&rcx) = v18;
            continue;
            addr_14000e925_34:
            r9_24 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6) + 80);
            r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6) + 72);
            fun_14000ec20(reinterpret_cast<uint64_t>(rsp6) + 88, reinterpret_cast<uint64_t>(rsp6) + 0x70, r8, r9_24);
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
            goto addr_14000eab0_46;
            addr_14000e9a9_43:
            goto addr_14000e925_34;
        }
        if (rbx17 != v14) 
            goto addr_14000eafb_49; else 
            goto addr_14000ead4_50;
    }
    rax41 = fun_140009214(rax22, __intrinsic(), r8, r9_24, rax22, __intrinsic());
    rsp42 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    if (!rax41) {
        *reinterpret_cast<uint32_t*>(&rcx43) = g140025c24;
        *reinterpret_cast<int32_t*>(&rcx43 + 4) = 0;
        fun_140003898(rcx43, 0x419, r8, r9_24, rcx43, 0x419, r8, r9_24);
        rsp42 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp42) - 8 + 8);
    }
    r8_44 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rbx21) + reinterpret_cast<uint64_t>(rbx21));
    fun_140010e42(rax41, rsi15, r8_44, r9_24);
    rcx45 = v8 ^ reinterpret_cast<uint64_t>(rsp42) - 8 + 8;
    rax46 = fun_140010130(rcx45, rsi15, r8_44, rcx45, rsi15, r8_44);
    return rax46;
    addr_14000eafb_49:
    rsi15 = v19;
    goto addr_14000eb00_2;
    addr_14000ead4_50:
    r9_24 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6) + 0x68);
    r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6) + 80);
    fun_14000eb78(reinterpret_cast<uint64_t>(rsp6) + 88, reinterpret_cast<uint64_t>(rsp6) + 72, r8, r9_24);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    rbx17 = v20;
    goto addr_14000eafb_49;
}

void** fun_140005ca8(void** rcx, void** rdx, void** r8, void** r9);

void** fun_14000f570(void** rcx, void** rdx, void** r8, void** r9);

struct s3 {
    signed char[44] pad44;
    void** f2c;
};

void** fun_140005e30(struct s3* rcx, void** rdx, void** r8, void** r9);

void** fun_14000fde8(void** rcx, void** rdx, void** r8, void** r9) {
    void* rsp5;
    uint64_t rax6;
    uint64_t v7;
    void** r8_8;
    void** rsi9;
    void** rdx10;
    void** rax11;
    void* rsp12;
    void** rax13;
    void** rdi14;
    void** rax15;
    void* rsp16;
    void** v17;
    void** rax18;
    void** rax19;
    void** rax20;
    void** rax21;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 0x290);
    rax6 = g140015008;
    v7 = rax6 ^ reinterpret_cast<uint64_t>(rsp5);
    r8_8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp5) + 32);
    rsi9 = rcx;
    rdx10 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp5) + 48);
    rax11 = fun_140005ca8(rcx, rdx10, r8_8, r9);
    rsp12 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
    if (rax11) {
        rax13 = fun_14000dc58();
        rdi14 = rax13;
        rax15 = fun_14000f570(rsi9, rax11, r8_8, r9);
        rsp16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp12) - 8 + 8 - 8 + 8);
        *reinterpret_cast<void***>(rdi14 + 8) = rax15;
        while (rdx10 = v17, rax18 = fun_140005e30(reinterpret_cast<uint64_t>(rsp16) + 48, rdx10, r8_8, r9), rsp12 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp16) - 8 + 8), !!rax18) {
            rax19 = fun_14000dc58();
            rax20 = fun_14000f570(rsi9, rax18, r8_8, r9);
            rsp16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp12) - 8 + 8 - 8 + 8);
            *reinterpret_cast<void***>(rax19) = rdi14;
            rdi14 = rax19;
            *reinterpret_cast<void***>(rax19 + 8) = rax20;
        }
    }
    rax21 = fun_140010130(v7 ^ reinterpret_cast<uint64_t>(rsp12), rdx10, r8_8);
    return rax21;
}

void** g140025c08;

void** g140025c18;

void** fun_140001f10(void** rcx, void** rdx);

void fun_14000169c(int64_t rcx, void** rdx, void** r8, void** r9) {
    void** al5;
    int1_t zf6;
    void** r8_7;
    void** rcx8;
    void** rax9;
    void** rcx10;
    void** rax11;
    void** rcx12;
    int1_t zf13;
    void** rcx14;
    int1_t zf15;
    void** rcx16;
    void** rbx17;
    void** rcx18;
    void** rax19;
    int1_t zf20;
    void** rcx21;

    al5 = g140025c38;
    if (reinterpret_cast<signed char>(al5) < reinterpret_cast<signed char>(0)) {
        al5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(al5) & 0x7f);
        g140025c38 = al5;
    }
    if (!(reinterpret_cast<unsigned char>(al5) & 16)) {
        if (reinterpret_cast<unsigned char>(al5) & 6) {
            zf6 = g140025c28 == 0;
            if (zf6) {
                addr_1400017cd_6:
                g140025c38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(al5) | 64);
                g140025c28 = reinterpret_cast<void**>(0);
                g140025c48 = reinterpret_cast<void**>(0);
                return;
            } else {
                if (!(reinterpret_cast<unsigned char>(al5) & 2)) {
                    r8_7 = reinterpret_cast<void**>(".");
                    if (!(reinterpret_cast<unsigned char>(al5) & 4)) {
                        r8_7 = reinterpret_cast<void**>(0);
                    }
                } else {
                    r8_7 = reinterpret_cast<void**>(".");
                }
                *reinterpret_cast<uint32_t*>(&rcx8) = g140025c24;
                *reinterpret_cast<int32_t*>(&rcx8 + 4) = 0;
                fun_140003898(rcx8, 0x442, r8_7, r9);
            }
        } else {
            if (!(reinterpret_cast<unsigned char>(al5) & 1)) {
                if (!(reinterpret_cast<unsigned char>(al5) & 8)) {
                    rax9 = fun_140009244(48, rdx, r8, r9);
                    rcx10 = g140025c28;
                    g140025c08 = rax9;
                    *reinterpret_cast<void***>(rax9) = rcx10;
                    rax11 = g140025c08;
                    rcx12 = g140025c48;
                    *reinterpret_cast<void***>(rax11 + 8) = rcx12;
                } else {
                    zf13 = g140025c28 == 0;
                    if (zf13) 
                        goto addr_1400017cd_6;
                    rcx14 = reinterpret_cast<void**>(0x140025c10);
                    goto addr_140001748_17;
                }
            } else {
                zf15 = g140025c28 == 0;
                if (!zf15) {
                    rcx14 = reinterpret_cast<void**>(0x140025c18);
                    goto addr_140001748_17;
                } else {
                    rcx16 = g140025c18;
                    rbx17 = rcx16;
                    if (!rcx16) 
                        goto addr_1400017cd_6;
                    do {
                        g140025c18 = *reinterpret_cast<void***>(rcx16);
                        rcx18 = *reinterpret_cast<void***>(rbx17 + 8);
                        free(rcx18);
                        rax19 = g14003d0e0;
                        *reinterpret_cast<void***>(rbx17) = rax19;
                        rcx16 = g140025c18;
                        g14003d0e0 = rbx17;
                        rbx17 = rcx16;
                    } while (rcx16);
                }
            }
        }
    } else {
        zf20 = g140025c28 == 0;
        if (zf20) 
            goto addr_1400017cd_6;
        *reinterpret_cast<uint32_t*>(&rcx21) = g140025c24;
        *reinterpret_cast<int32_t*>(&rcx21 + 4) = 0;
        fun_140003898(rcx21, 0x43e, r8, r9);
    }
    addr_1400017c7_25:
    al5 = g140025c38;
    goto addr_1400017cd_6;
    addr_140001748_17:
    fun_140001f10(rcx14, rdx);
    goto addr_1400017c7_25;
}

void** fun_140001c2c(void** rcx, void** rdx, unsigned char r8b);

void** fun_140001ac8(void** rcx, void** rdx, unsigned char r8b, void** r9) {
    void** r8_3;
    unsigned char sil5;
    void** rdi6;
    void** rbp7;
    void** rbx8;
    int64_t rcx9;
    void** rax10;
    unsigned char cl11;
    void* rbx12;
    int64_t rax13;
    void** rcx14;
    void** rax15;
    void** rax16;
    void** rax17;
    uint32_t edx18;
    void** rbx19;
    void** r8_20;
    void** rcx21;

    *reinterpret_cast<unsigned char*>(&r8_3) = r8b;
    sil5 = *reinterpret_cast<unsigned char*>(&r8_3);
    rdi6 = rdx;
    rbp7 = rcx;
    rbx8 = rcx;
    if (*reinterpret_cast<void***>(rcx)) {
        do {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx8)) >= reinterpret_cast<unsigned char>(0x80)) {
                *reinterpret_cast<uint32_t*>(&rcx9) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx8));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
                rax10 = reinterpret_cast<void**>(iswspace(rcx9));
                cl11 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax10) == 0);
            } else {
                *reinterpret_cast<uint32_t*>(&rax10) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx8));
                *reinterpret_cast<int32_t*>(&rax10 + 4) = 0;
                cl11 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rax10 + 0x140011640) & 1);
            }
        } while (cl11 && (rbx8 = rbx8 + 2, !!*reinterpret_cast<void***>(rbx8)));
    }
    if (!*reinterpret_cast<void***>(rbx8)) {
        addr_140001b54_7:
        if (!(sil5 & 64) || (rbx12 = reinterpret_cast<void*>(0), rax13 = reinterpret_cast<int64_t>(wcschr(rdi6, 36)), rax13 == 0)) {
            addr_140001c02_8:
            rax10 = fun_140001c2c(rbp7, rdi6, sil5);
        } else {
            do {
                rbx12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbx12) + 1);
                rax13 = reinterpret_cast<int64_t>(wcschr(rax13 + 2, 36));
            } while (rax13);
            if (!rbx12) 
                goto addr_140001c02_8; else 
                goto addr_140001b96_11;
        }
    } else {
        if (!(sil5 & 4)) {
            *reinterpret_cast<uint32_t*>(&r8_3) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx8));
            *reinterpret_cast<int32_t*>(&r8_3 + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rcx14) = g140025c24;
            *reinterpret_cast<int32_t*>(&rcx14 + 4) = 0;
            fun_140003898(rcx14, 0x3e9, r8_3, r9);
            goto addr_140001b54_7;
        } else {
            *reinterpret_cast<signed char*>(&rax10) = 0;
        }
    }
    return rax10;
    addr_140001b96_11:
    rax15 = reinterpret_cast<void**>(0xffffffffffffffff);
    do {
        ++rax15;
    } while (*reinterpret_cast<void***>(rdi6 + reinterpret_cast<unsigned char>(rax15) * 2));
    rax16 = reinterpret_cast<void**>(2 * reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx12) + 1 + reinterpret_cast<unsigned char>(rax15)));
    if (!__intrinsic()) 
        goto addr_140001bba_18;
    rax16 = reinterpret_cast<void**>(0xffffffffffffffff);
    addr_140001bba_18:
    rax17 = fun_140009214(rax16, __intrinsic(), 0xffffffffffffffff, r9);
    edx18 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi6));
    rbx19 = rax17;
    r8_20 = rdi6;
    rcx21 = rax17;
    while (*reinterpret_cast<void***>(&edx18)) {
        *reinterpret_cast<void***>(rcx21) = *reinterpret_cast<void***>(&edx18);
        r8_20 = r8_20 + 2;
        rcx21 = rcx21 + 2;
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&edx18) == 36)) {
            *reinterpret_cast<void***>(rcx21) = reinterpret_cast<void**>(36);
            rcx21 = rcx21 + 2;
        }
        edx18 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r8_20));
    }
    *reinterpret_cast<void***>(rcx21) = reinterpret_cast<void**>(0);
    free(rdi6);
    rdi6 = rbx19;
    goto addr_140001c02_8;
}

int64_t malloc = 0x14912;

void** fun_140009214(void** rcx, void** rdx, void** r8, void** r9, ...) {
    void** rax5;
    void** rcx6;

    rax5 = reinterpret_cast<void**>(malloc());
    if (!rax5) {
        *reinterpret_cast<uint32_t*>(&rcx6) = g140025c24;
        *reinterpret_cast<int32_t*>(&rcx6 + 4) = 0;
        fun_140003898(rcx6, 0x41b, r8, r9);
    }
    return rax5;
}

void** g140037098;

void** fun_14000918c(void** rcx, ...) {
    uint32_t eax2;
    void** r8_3;
    void** rdx4;
    uint32_t ecx5;
    int64_t rcx6;
    void** rax7;
    void** rcx8;
    void* r9_9;
    uint32_t r10d10;
    uint32_t edx11;

    eax2 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx));
    r8_3 = rcx;
    rdx4 = rcx;
    if (!*reinterpret_cast<uint16_t*>(&eax2)) {
        g140037098 = reinterpret_cast<void**>(0x1400364d0);
    } else {
        ecx5 = 0;
        do {
            rdx4 = rdx4 + 2;
            ecx5 = ecx5 + *reinterpret_cast<uint16_t*>(&eax2);
            eax2 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdx4));
        } while (*reinterpret_cast<uint16_t*>(&eax2));
        *reinterpret_cast<uint32_t*>(&rcx6) = *reinterpret_cast<unsigned char*>(&ecx5);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
        rax7 = reinterpret_cast<void**>(0x1400364d0 + rcx6 * 8);
        g140037098 = rax7;
        do {
            rax7 = *reinterpret_cast<void***>(rax7);
            if (!rax7) 
                goto addr_1400091f4_7;
            rcx8 = *reinterpret_cast<void***>(rax7 + 8);
            r9_9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r8_3) - reinterpret_cast<unsigned char>(rcx8));
            do {
                r10d10 = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(rcx8) + reinterpret_cast<uint64_t>(r9_9));
                edx11 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx8)) - r10d10;
                if (edx11) 
                    break;
                rcx8 = rcx8 + 2;
            } while (r10d10);
        } while (edx11);
        goto addr_1400091f6_12;
    }
    addr_14000920f_13:
    return 0;
    addr_1400091f4_7:
    goto addr_14000920f_13;
    addr_1400091f6_12:
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax7 + 24)) & 16) {
        rax7 = reinterpret_cast<void**>(0);
    }
    return rax7;
}

uint64_t g14003d0f0;

void** g14003d0e8;

void** fun_14000dc58() {
    void** rcx1;
    uint64_t rbx2;
    void** rax3;
    void** rdx4;
    void** r8_5;
    void** r9_6;

    rcx1 = g14003d0e0;
    if (!rcx1) {
        rbx2 = g14003d0f0;
        if (rbx2 >= 16) {
            rax3 = g14003d0e8;
        } else {
            *reinterpret_cast<int32_t*>(&rbx2) = 0x8000;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx2) + 4) = 0;
            rax3 = fun_140009214(0x8000, rdx4, r8_5, r9_6);
        }
        rcx1 = rax3;
        g14003d0e8 = rax3 + 16;
        g14003d0f0 = rbx2 - 16;
    } else {
        g14003d0e0 = *reinterpret_cast<void***>(rcx1);
    }
    *reinterpret_cast<void***>(rcx1) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(rcx1 + 8) = reinterpret_cast<void**>(0);
    return rcx1;
}

int64_t wcscat_s = 0x148dc;

void** g140026460;

uint32_t fun_140003d14(void** rcx, void** rdx, void** r8, void** r9b);

void** fun_14000dde0(void** rcx, void** rdx, void** r8, void** r9, ...);

uint32_t fun_1400030d8(void** rcx, void** rdx, void** r8) {
    void** rbx4;
    uint32_t ebp5;
    void** rdi6;
    void** rsi7;
    void** rcx8;
    void** rax9;
    int64_t rax10;
    void* r15_11;
    int64_t rax12;
    void** rax13;
    void** r9_14;
    void** rax15;
    void** rsi16;
    void** rdi17;
    int64_t rax18;
    signed char r14b19;
    void** r8_20;
    int64_t r8_21;
    void** rdx22;
    void** rcx23;
    void** r8_24;
    void** rdx25;
    uint32_t eax26;
    uint32_t r14d27;
    void** rdi28;
    void** rcx29;
    void** rax30;
    unsigned char cl31;

    rbx4 = rcx;
    ebp5 = 0;
    if (rcx) {
        do {
            rdi6 = *reinterpret_cast<void***>(rbx4 + 32);
            rsi7 = reinterpret_cast<void**>(0);
            while (rdi6) {
                rcx8 = *reinterpret_cast<void***>(rdi6 + 8);
                rax9 = reinterpret_cast<void**>(0xffffffffffffffff);
                do {
                    ++rax9;
                } while (*reinterpret_cast<void***>(rcx8 + reinterpret_cast<unsigned char>(rax9) * 2));
                rsi7 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsi7 + 1) + reinterpret_cast<unsigned char>(rax9));
                if (*reinterpret_cast<void***>(rcx8) != 34) {
                    rax10 = reinterpret_cast<int64_t>(wcschr());
                    if (rax10) {
                        rsi7 = rsi7 + 2;
                    }
                }
                rdi6 = *reinterpret_cast<void***>(rdi6);
            }
            r15_11 = reinterpret_cast<void*>(rsi7 + 1);
            *reinterpret_cast<int32_t*>(&rax12) = static_cast<int32_t>(reinterpret_cast<uint64_t>(rdi6 + 2));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
            rax13 = reinterpret_cast<void**>(rax12 * reinterpret_cast<uint64_t>(r15_11));
            if (__intrinsic()) {
                rax13 = reinterpret_cast<void**>(0xffffffffffffffff);
            }
            rax15 = fun_140009214(rax13, __intrinsic(), 0xffffffffffffffff, r9_14, rax13, __intrinsic());
            rsi16 = rax15;
            *reinterpret_cast<void***>(rax15) = reinterpret_cast<void**>(0);
            rdi17 = *reinterpret_cast<void***>(rbx4 + 32);
            while (rdi17) {
                if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi17 + 8)) == 34 || (rax18 = reinterpret_cast<int64_t>(wcschr()), rax18 == 0)) {
                    r14b19 = 0;
                } else {
                    r14b19 = 1;
                    wcscat_s(rsi16, r15_11, "\"", r9_14);
                }
                r8_20 = *reinterpret_cast<void***>(rdi17 + 8);
                wcscat_s(rsi16, r15_11, r8_20, r9_14);
                r8_21 = reinterpret_cast<int64_t>(" ");
                if (r14b19) {
                    r8_21 = reinterpret_cast<int64_t>("\"");
                }
                wcscat_s(rsi16, r15_11, r8_21, r9_14);
                rdi17 = *reinterpret_cast<void***>(rdi17);
            }
            rdx22 = *reinterpret_cast<void***>(rbx4 + 8);
            r9_14 = *reinterpret_cast<void***>(rbx4 + 16);
            rcx23 = *reinterpret_cast<void***>(rbx4 + 24);
            g140026460 = rsi16;
            r8_24 = *reinterpret_cast<void***>(rdx22 + 32);
            rdx25 = *reinterpret_cast<void***>(rdx22 + 24);
            eax26 = fun_140003d14(rcx23, rdx25, r8_24, r9_14);
            r14d27 = eax26;
            if (!eax26) {
                rdi28 = *reinterpret_cast<void***>(rbx4 + 24);
                while (rdi28) {
                    rcx29 = *reinterpret_cast<void***>(rdi28 + 8);
                    rax30 = fun_14000dde0(rcx29, rdx25, r8_24, r9_14, rcx29, rdx25, r8_24);
                    cl31 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rax30 + 17) & 0xfb);
                    *reinterpret_cast<void***>(rax30 + 40) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<unsigned char*>(rax30 + 17) = reinterpret_cast<unsigned char>(cl31 | 2);
                    rdi28 = *reinterpret_cast<void***>(rdi28);
                }
            }
            free(rsi16, rdx25, r8_24, r9_14);
            rbx4 = *reinterpret_cast<void***>(rbx4);
            ebp5 = ebp5 + r14d27;
        } while (rbx4);
    }
    return ebp5;
}

void fun_140003278(void** rcx, void** rdx, void** r8) {
    void** rbx4;
    void** rdi5;
    void** rdx6;
    void** rcx7;
    void** rax8;
    void** rax9;

    rbx4 = *reinterpret_cast<void***>(rcx);
    rdi5 = rcx;
    while (rbx4) {
        rdx6 = *reinterpret_cast<void***>(rbx4 + 24);
        rcx7 = rbx4;
        rax8 = g14003d0e0;
        *reinterpret_cast<void***>(rdx6) = rax8;
        rax9 = *reinterpret_cast<void***>(rbx4 + 32);
        g14003d0e0 = rax9;
        *reinterpret_cast<void***>(rax9) = rdx6;
        rbx4 = *reinterpret_cast<void***>(rbx4);
        free(rcx7);
    }
    *reinterpret_cast<void***>(rdi5) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi5)) & reinterpret_cast<unsigned char>(rbx4));
    return;
}

uint32_t fun_14000dd88(void** rcx, void** rdx, void** r8) {
    uint32_t eax4;
    uint32_t ebx5;
    void** rdi6;
    int64_t rcx7;
    int32_t eax8;

    eax4 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx));
    ebx5 = 0;
    rdi6 = rcx;
    while (*reinterpret_cast<uint16_t*>(&eax4)) {
        if (*reinterpret_cast<uint16_t*>(&eax4) != 47) {
            *reinterpret_cast<uint32_t*>(&rcx7) = *reinterpret_cast<uint16_t*>(&eax4);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
            *reinterpret_cast<uint16_t*>(&eax8) = reinterpret_cast<uint16_t>(towupper(rcx7));
        } else {
            eax8 = 92;
        }
        ebx5 = ebx5 + *reinterpret_cast<uint16_t*>(&eax8);
        rdi6 = rdi6 + 2;
        eax4 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi6));
    }
    return ebx5 & 0x7f;
}

void** g140026470;

void** g140026478;

void** g140026458;

void** fun_140002b20(void** rcx, void** rdx, void** r8);

uint32_t fun_14000209c(void** rcx, void** rdx, void** r8, void** r9);

unsigned char g140015040 = 1;

void** g140026468;

void** g140026450;

signed char g140036cec;

int64_t g8;

uint32_t fun_140003c94(void** rcx, void** rdx, void** r8, void** r9b);

int64_t GetSystemTimeAsFileTime = 0x1449e;

void fun_140002f98(void** rcx, void** rdx, ...);

int32_t g1400157e8;

void** fun_14000c33c(int64_t rcx, void** rdx, void** r8);

void** fun_14000da54(void** rcx, void** rdx, void** r8, void** r9);

void fun_140002fe0(void** rcx, void** rdx, void** r8, void** r9);

uint32_t fun_140002160(void** rcx, void** dl, void** r8, void** r9) {
    void** rdx2;
    void* rsp5;
    void** rbp6;
    void* rsp7;
    uint64_t rax8;
    uint64_t v9;
    void** r13_10;
    int64_t v11;
    int64_t v12;
    void** r15_13;
    int64_t v14;
    void** bl15;
    void** rdi16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    uint32_t v21;
    void** rsi22;
    unsigned char al23;
    void** rbx24;
    void** rcx25;
    void** r12_26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** rbx34;
    void** rcx35;
    void** rax36;
    void** v37;
    void** v38;
    uint64_t rax39;
    void** v40;
    void** rax41;
    void** v42;
    void** v43;
    uint64_t rax44;
    void** v45;
    void** rsi46;
    void** rax47;
    int1_t zf48;
    void** v49;
    void** rdx50;
    void** rax51;
    void** v52;
    void** r14_53;
    void** r15_54;
    uint32_t r12d55;
    void** r15_56;
    void** v57;
    void** rcx58;
    uint32_t eax59;
    void* rsp60;
    int1_t zf61;
    void** rcx62;
    void** rax63;
    void** rcx64;
    void** rax65;
    void** rcx66;
    void** rax67;
    void** v68;
    void** v69;
    uint64_t rax70;
    void** v71;
    int1_t zf72;
    void** rax73;
    void** rcx74;
    void** rsi75;
    void** rax76;
    void** rcx77;
    void** rax78;
    void** rax79;
    void** rcx80;
    void** rsi81;
    void** rax82;
    void** rcx83;
    void** rax84;
    uint32_t r14d85;
    uint32_t eax86;
    void** rsi87;
    void** rcx88;
    void** rsi89;
    void** rdx90;
    void** rcx91;
    unsigned char al92;
    int1_t zf93;
    signed char sil94;
    int64_t rax95;
    uint32_t eax96;
    void* rsp97;
    int1_t zf98;
    void** rcx99;
    void** rax100;
    void** v101;
    void** v102;
    void** rax103;
    void** v104;
    uint64_t rax105;
    void** v106;
    int32_t ecx107;
    int64_t rcx108;
    int1_t zf109;
    int1_t zf110;
    void** rcx111;
    void** rax112;
    int32_t ecx113;
    void** rdx114;
    int64_t rcx115;
    void** r9_116;
    void** rax117;
    void* rsp118;
    void** r10_119;
    void** r11_120;
    int1_t zf121;
    void** rcx122;
    void** r13_123;
    int1_t zf124;
    int1_t zf125;
    int1_t zf126;
    signed char r15b127;
    int1_t zf128;
    int1_t zf129;
    uint32_t eax130;
    int1_t zf131;
    uint32_t eax132;
    uint32_t eax133;
    int1_t zf134;
    int1_t zf135;
    int1_t zf136;
    int1_t zf137;
    int1_t zf138;
    unsigned char al139;
    unsigned char al140;
    uint64_t rcx141;
    void** rax142;
    int1_t zf143;
    unsigned char al144;
    void** rcx145;
    void** rax146;

    rdx2 = dl;
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8);
    rbp6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp5) + 0xfffffffffffffb90);
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 0x570);
    rax8 = g140015008;
    v9 = rax8 ^ reinterpret_cast<uint64_t>(rsp7);
    *reinterpret_cast<uint32_t*>(&r13_10) = 0;
    *reinterpret_cast<int32_t*>(&r13_10 + 4) = 0;
    v11 = v12;
    r15_13 = r8;
    v14 = v12;
    bl15 = rdx2;
    rdi16 = rcx;
    v17 = v18;
    v19 = r9;
    v20 = r8;
    v21 = 0;
    if (rcx) {
        if (*reinterpret_cast<unsigned char*>(rcx + 17) & 1) {
            r8 = *reinterpret_cast<void***>(rcx + 8);
            rdx2 = reinterpret_cast<void**>(0x42f);
            *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
            fun_140003898(0, 0x42f, r8, r9);
            rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
        }
        rsi22 = *reinterpret_cast<void***>(rdi16 + 40);
        if (rsi22) 
            goto addr_1400021f2_5;
    } else {
        *reinterpret_cast<void***>(r8) = reinterpret_cast<void**>(0);
        goto addr_140002af5_7;
    }
    if (!(*reinterpret_cast<unsigned char*>(rdi16 + 17) & 2)) {
        rdx2 = *reinterpret_cast<void***>(rdi16 + 32);
        al23 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rdi16 + 17) | 1);
        rbx24 = reinterpret_cast<void**>(0);
        rcx25 = *reinterpret_cast<void***>(rdi16 + 8);
        r12_26 = reinterpret_cast<void**>(0);
        g140026470 = rcx25;
        g140026478 = rcx25;
        v27 = reinterpret_cast<void**>(0);
        v28 = reinterpret_cast<void**>(0);
        v29 = reinterpret_cast<void**>(0);
        v30 = reinterpret_cast<void**>(0);
        v31 = reinterpret_cast<void**>(0);
        v32 = reinterpret_cast<void**>(0);
        *reinterpret_cast<unsigned char*>(rdi16 + 17) = al23;
        v33 = rdx2;
        if (!rdx2) {
            addr_140002750_10:
            rbx34 = *reinterpret_cast<void***>(r15_13);
            g140026458 = reinterpret_cast<void**>(0);
            g140026460 = reinterpret_cast<void**>(0);
            if (!rbx34) {
                if (!*reinterpret_cast<void***>(rdi16 + 24)) {
                    rcx35 = *reinterpret_cast<void***>(rdi16 + 8);
                    r8 = rbp6 + 0xffffffffffffffb8;
                    rax36 = fun_140005ca8(rcx35, rbp6, r8, r9);
                    rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
                    if (rax36 && (!(reinterpret_cast<unsigned char>(v37) & 16) || (rbx34 = v38, !*reinterpret_cast<int32_t*>(&rbx34)) && (rax39 = reinterpret_cast<unsigned char>(rbx34) >> 32, !*reinterpret_cast<int32_t*>(&rax39)))) {
                        rbx34 = v40;
                    }
                } else {
                    rbx34 = *reinterpret_cast<void***>(rdi16 + 24);
                }
            }
        } else {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx2 + 8) + 32)) & 32) {
                r8 = rbp6 + 0xffffffffffffffb8;
                rax41 = fun_140005ca8(rcx25, rbp6, r8, r9);
                rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
                if (rax41 && (!(reinterpret_cast<unsigned char>(v42) & 16) || (rbx24 = v43, !*reinterpret_cast<int32_t*>(&rbx24)) && (rax44 = reinterpret_cast<unsigned char>(rbx24) >> 32, !*reinterpret_cast<int32_t*>(&rax44)))) {
                    rbx24 = v45;
                }
                rdx2 = v33;
            }
            do {
                rsi46 = *reinterpret_cast<void***>(rdx2 + 8);
                v29 = rsi46;
                rax47 = rsi46 + 40;
                zf48 = *reinterpret_cast<void***>(rax47) == 0;
                v49 = rax47;
                if (zf48) {
                    rdx50 = *reinterpret_cast<void***>(rdi16 + 8);
                    v32 = rax47;
                    rax51 = fun_140002b20(rsi46, rdx50, r8);
                    rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
                    v52 = rax51;
                    r14_53 = rax51;
                    r15_54 = rax51;
                    if (rax51) {
                        r12d55 = v21;
                        r15_56 = rsi46;
                        do {
                            r8 = rbp6 + 0xffffffffffffff80;
                            v57 = *reinterpret_cast<void***>(r14_53 + 16);
                            *reinterpret_cast<int32_t*>(&r9) = 0;
                            *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                            rdx50 = *reinterpret_cast<void***>(r15_56 + 32);
                            rcx58 = *reinterpret_cast<void***>(r14_53 + 8);
                            eax59 = fun_14000209c(rcx58, rdx50, r8, 0);
                            rsp60 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
                            r12d55 = r12d55 + eax59;
                            zf61 = g140025c3b == 0;
                            if (!zf61 && eax59) {
                                rcx62 = *reinterpret_cast<void***>(r14_53 + 8);
                                rax63 = fun_14000dde0(rcx62, rdx50, r8, 0);
                                rsp60 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp60) - 8 + 8);
                                if (!(*reinterpret_cast<unsigned char*>(rax63 + 17) & 8)) {
                                    r8 = *reinterpret_cast<void***>(r14_53 + 8);
                                    rdx50 = reinterpret_cast<void**>(0xfaa);
                                    *reinterpret_cast<int32_t*>(&rdx50 + 4) = 0;
                                    g140015040 = 0;
                                    fun_140003898(0, 0xfaa, r8, 0, 0, 0xfaa, r8, 0);
                                    rsp60 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp60) - 8 + 8);
                                }
                                *reinterpret_cast<unsigned char*>(rdi16 + 17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rdi16 + 17) | 8);
                            }
                            rcx64 = v57;
                            rax65 = rcx64;
                            if (reinterpret_cast<unsigned char>(r13_10) > reinterpret_cast<unsigned char>(rcx64)) {
                                rax65 = r13_10;
                            }
                            r13_10 = rax65;
                            if (!rbx24 && !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r15_56 + 32)) & 32)) {
                                rcx66 = *reinterpret_cast<void***>(rdi16 + 8);
                                r8 = rbp6 + 0xffffffffffffffb8;
                                rdx50 = rbp6;
                                rax67 = fun_140005ca8(rcx66, rdx50, r8, 0);
                                rsp60 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp60) - 8 + 8);
                                if (rax67) {
                                    if (!(reinterpret_cast<unsigned char>(v68) & 16) || (rbx24 = v69, !*reinterpret_cast<int32_t*>(&rbx24)) && (rax70 = reinterpret_cast<unsigned char>(rbx24) >> 32, !*reinterpret_cast<int32_t*>(&rax70))) {
                                        rbx24 = v71;
                                    }
                                    *reinterpret_cast<void***>(rdi16 + 24) = rbx24;
                                }
                                rcx64 = v57;
                            }
                            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi16 + 16)) & 16 || (reinterpret_cast<unsigned char>(rbx24) < reinterpret_cast<unsigned char>(rcx64) || (zf72 = g140025c3a == 0, !zf72) && rbx24 == rcx64)) {
                                rax73 = fun_14000dc58();
                                rcx74 = *reinterpret_cast<void***>(r14_53 + 8);
                                rsi75 = rax73;
                                rax76 = fun_14000dcc4(rcx74, rcx74);
                                rsp60 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp60) - 8 + 8 - 8 + 8);
                                *reinterpret_cast<void***>(rsi75 + 8) = rax76;
                                rcx77 = rbp6 + 0xffffffffffffffa0;
                                rax78 = reinterpret_cast<void**>(0);
                                while (rax78) {
                                    rcx77 = rax78;
                                    rax78 = *reinterpret_cast<void***>(rax78);
                                }
                                *reinterpret_cast<void***>(rcx77) = rsi75;
                            }
                            rax79 = fun_14000dc58();
                            rcx80 = *reinterpret_cast<void***>(r14_53 + 8);
                            rsi81 = rax79;
                            rax82 = fun_14000dcc4(rcx80, rcx80);
                            rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp60) - 8 + 8 - 8 + 8);
                            *reinterpret_cast<void***>(rsi81 + 8) = rax82;
                            rcx83 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp7) + 0x68);
                            rax84 = reinterpret_cast<void**>(0);
                            while (rax84) {
                                rcx83 = rax84;
                                rax84 = *reinterpret_cast<void***>(rax84);
                            }
                            *reinterpret_cast<void***>(rcx83) = rsi81;
                            r14_53 = *reinterpret_cast<void***>(r14_53);
                        } while (r14_53);
                        r15_54 = v52;
                        v21 = r12d55;
                        r12_26 = v30;
                    }
                    if (1) {
                        r14d85 = v21;
                    } else {
                        eax86 = fun_1400030d8(0, rdx50, r8);
                        r14d85 = v21 + eax86;
                        v21 = r14d85;
                        fun_140003278(rbp6 + 0xffffffffffffffc8, rdx50, r8);
                        rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8 - 8 + 8);
                    }
                    while (rsi87 = r15_54, !!r15_54) {
                        rcx88 = *reinterpret_cast<void***>(r15_54 + 8);
                        free(rcx88, rdx50, r8);
                        r15_54 = *reinterpret_cast<void***>(r15_54);
                        free(rsi87, rdx50, r8);
                        rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8 - 8 + 8);
                    }
                    rsi89 = v29;
                    r9 = *reinterpret_cast<void***>(rsi89 + 32);
                    if (!(reinterpret_cast<unsigned char>(r9) & 32)) {
                        if (*reinterpret_cast<void***>(rsi89 + 16)) {
                            if (!v28) {
                                v28 = rsi89;
                            } else {
                                r8 = *reinterpret_cast<void***>(rdi16 + 8);
                                fun_140003898(0, 0xfa4, r8, r9, 0, 0xfa4, r8, r9);
                                rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
                            }
                        }
                        if (reinterpret_cast<unsigned char>(v31) > reinterpret_cast<unsigned char>(r13_10)) {
                            r13_10 = v31;
                        }
                        v31 = r13_10;
                    } else {
                        rdx90 = *reinterpret_cast<void***>(rsi89 + 16);
                        if (rdx90) {
                            rcx91 = *reinterpret_cast<void***>(rdi16 + 8);
                            g140026458 = reinterpret_cast<void**>(0);
                            g140026460 = reinterpret_cast<void**>(0);
                            g140026468 = reinterpret_cast<void**>(0);
                            al92 = g140025c3b;
                            g140026470 = rcx91;
                            g140026478 = rcx91;
                            g140026450 = reinterpret_cast<void**>(0);
                            if ((al92 && !(*reinterpret_cast<unsigned char*>(rdi16 + 17) & 8) || !r14d85) && reinterpret_cast<unsigned char>(rbx24) < reinterpret_cast<unsigned char>(r13_10) || ((zf93 = g140025c3a == 0, !zf93) && rbx24 == r13_10 || (!rbx24 && !r13_10 || !*reinterpret_cast<void***>(rsi89)))) {
                                sil94 = g140036cec;
                                g140036cec = 1;
                                if (!v11) {
                                    if (1) {
                                        *reinterpret_cast<int32_t*>(&rax95) = 0;
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax95) + 4) = 0;
                                    } else {
                                        rax95 = g8;
                                    }
                                    v14 = rax95;
                                    v11 = rax95;
                                }
                                r8 = *reinterpret_cast<void***>(v29 + 24);
                                eax96 = fun_140003c94(rcx91, rdx90, r8, r9);
                                rsp97 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
                                r14d85 = r14d85 + eax96;
                                zf98 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi16 + 16)) & 4) == 0;
                                v21 = r14d85;
                                if (!zf98 || (rcx99 = *reinterpret_cast<void***>(rdi16 + 8), r8 = rbp6 + 0xffffffffffffffb8, rdx90 = rbp6, rax100 = fun_140005ca8(rcx99, rdx90, r8, r9), rsp97 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp97) - 8 + 8), rax100 == 0)) {
                                    if (!v31) {
                                        GetSystemTimeAsFileTime(rbp6 + 0xfffffffffffffff0, rdx90, r8);
                                        rsp97 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp97) - 8 + 8);
                                        r12_26 = v101;
                                        v30 = r12_26;
                                    } else {
                                        r12_26 = v31;
                                        v30 = v31;
                                    }
                                } else {
                                    if (!(reinterpret_cast<unsigned char>(v102) & 16) || (rax103 = v104, v30 = rax103, !*reinterpret_cast<int32_t*>(&rax103)) && (rax105 = reinterpret_cast<unsigned char>(rax103) >> 32, !*reinterpret_cast<int32_t*>(&rax105))) {
                                        v30 = v106;
                                    }
                                    r12_26 = v30;
                                }
                                *reinterpret_cast<void***>(v49) = r12_26;
                                fun_140002f98(0, rdx90, 0, rdx90);
                                rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp97) - 8 + 8);
                                if (!1) {
                                    fun_140002f98(0, rdx90, 0, rdx90);
                                    rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
                                }
                                g140036cec = sil94;
                                rsi89 = v29;
                                al92 = g140025c3b;
                            }
                            if (al92) {
                                if (*reinterpret_cast<unsigned char*>(rdi16 + 17) & 8) {
                                    r8 = *reinterpret_cast<void***>(rdi16 + 8);
                                    fun_140003898(0, 0xfab, r8, r9, 0, 0xfab, r8, r9);
                                    rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
                                    *reinterpret_cast<unsigned char*>(rdi16 + 17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rdi16 + 17) & 0xf7);
                                }
                                if (r14d85) {
                                    r8 = *reinterpret_cast<void***>(rdi16 + 8);
                                    r14d85 = 0;
                                    v21 = 0;
                                    g140015040 = 0;
                                    fun_140003898(0, 0xfaa, r8, r9, 0, 0xfaa, r8, r9);
                                    rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
                                }
                            }
                        }
                    }
                    rdx2 = v33;
                    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi89 + 32)) & 32)) 
                        continue;
                    if (!*reinterpret_cast<void***>(rdx2)) 
                        goto addr_140002772_81;
                } else {
                    if (reinterpret_cast<unsigned char>(rbx24) <= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax47))) {
                        rbx24 = *reinterpret_cast<void***>(rax47);
                    }
                }
                rdx2 = *reinterpret_cast<void***>(rdx2);
                *reinterpret_cast<uint32_t*>(&r13_10) = 0;
                *reinterpret_cast<int32_t*>(&r13_10 + 4) = 0;
                v33 = rdx2;
            } while (rdx2);
            goto addr_14000274c_85;
        }
    } else {
        if (reinterpret_cast<unsigned char>(bl15) & 1) {
            ecx107 = g1400157e8;
            r8 = *reinterpret_cast<void***>(rdi16 + 24);
            *reinterpret_cast<int32_t*>(&rcx108) = ecx107 + ecx107;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx108) + 4) = 0;
            rdx2 = *reinterpret_cast<void***>(rdi16 + 8);
            fun_14000c33c(rcx108, rdx2, r8);
            rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
        }
        *reinterpret_cast<void***>(r15_13) = *reinterpret_cast<void***>(rdi16 + 24);
        zf109 = (g1400157ec & 8) == 0;
        if (zf109 && ((zf110 = g1400157e8 == 1, zf110) && (!(*reinterpret_cast<unsigned char*>(rdi16 + 17) & 4) && (rcx111 = *reinterpret_cast<void***>(rdi16 + 8), r8 = rbp6 + 0xffffffffffffffb8, rdx2 = rbp6, rax112 = fun_140005ca8(rcx111, rdx2, r8, r9), rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8), !!rax112)))) {
            rdx2 = *reinterpret_cast<void***>(rdi16 + 8);
            fun_1400039c0(2, rdx2, r8, r9);
            rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
        }
        goto addr_140002af5_7;
    }
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi16 + 16)) & 1) {
        ecx113 = g1400157e8;
        r8 = rbx34;
        rdx114 = *reinterpret_cast<void***>(rdi16 + 8);
        *reinterpret_cast<int32_t*>(&rcx115) = ecx113 + ecx113;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx115) + 4) = 0;
        fun_14000c33c(rcx115, rdx114, r8);
        rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
    }
    r9_116 = rbx34;
    rax117 = fun_14000da54(rdi16, rbp6 + 0x250, r8, r9_116);
    rsp118 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
    r10_119 = v28;
    rdx2 = rax117;
    if (!rax117 || r10_119) {
        r11_120 = reinterpret_cast<void**>(0);
    } else {
        r11_120 = *reinterpret_cast<void***>(rdx2 + 24);
        g140026460 = rbp6 + 0x250;
        v27 = r11_120;
    }
    zf121 = g140025c3b == 0;
    rcx122 = *reinterpret_cast<void***>(rdi16 + 8);
    r14d85 = v21;
    g140026470 = rcx122;
    g140026478 = rcx122;
    g140026468 = reinterpret_cast<void**>(0);
    g140026450 = reinterpret_cast<void**>(0);
    if ((zf121 || *reinterpret_cast<unsigned char*>(rdi16 + 17) & 8) && r14d85 || (r13_123 = v31, reinterpret_cast<unsigned char>(rbx34) >= reinterpret_cast<unsigned char>(r13_123)) && (((zf124 = g140025c3a == 0, zf124) || rbx34 != r13_123) && ((rbx34 || r13_123) && !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi16 + 16)) & 16)))) {
        zf125 = (g1400157ec & 8) == 0;
        if (zf125 && ((zf126 = g1400157e8 == 1, zf126) && !(*reinterpret_cast<unsigned char*>(rdi16 + 17) & 8))) {
            rdx2 = rcx122;
            fun_1400039c0(2, rdx2, r8, r9_116, 2, rdx2, r8, r9_116);
            rsp118 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp118) - 8 + 8);
        }
        r13_123 = v30;
    } else {
        r15b127 = g140036cec;
        g140036cec = 1;
        if (!r10_119) {
            if (!r11_120) {
                zf128 = (g1400157ec & 16) == 0;
                if (zf128) {
                    if (v19 || rbx34) {
                        addr_1400029cb_104:
                        g140036cec = r15b127;
                        if (r10_119) 
                            goto addr_1400029ea_105; else 
                            goto addr_1400029d7_106;
                    } else {
                        zf129 = g140025c3b == *reinterpret_cast<unsigned char*>(&rbx34);
                        if (zf129) {
                            r8 = rcx122;
                            rdx2 = reinterpret_cast<void**>(0x431);
                            *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
                            fun_140003898(0, 0x431, r8, r9_116, 0, 0x431, r8, r9_116);
                            rsp118 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp118) - 8 + 8);
                            goto addr_1400029c6_109;
                        } else {
                            r14d85 = static_cast<uint32_t>(reinterpret_cast<uint64_t>(rbx34 + 1));
                            goto addr_140002994_111;
                        }
                    }
                } else {
                    rdx2 = v29;
                    if (rdx2) {
                        r9_116 = *reinterpret_cast<void***>(rdx2 + 32);
                        r8 = *reinterpret_cast<void***>(rdx2 + 24);
                        rdx2 = *reinterpret_cast<void***>(rdx2 + 16);
                        eax130 = fun_140003c94(rcx122, rdx2, r8, r9_116);
                        rsp118 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp118) - 8 + 8);
                        r14d85 = r14d85 + eax130;
                        goto addr_140002994_111;
                    }
                }
            } else {
                if (!*reinterpret_cast<void***>(rdx2 + 40) || (zf131 = (g1400157ec & 64) == 0, !zf131)) {
                    r8 = *reinterpret_cast<void***>(rdx2 + 32);
                    rdx2 = r11_120;
                    r9_116 = *reinterpret_cast<void***>(rdi16 + 16);
                    eax132 = fun_140003c94(rcx122, rdx2, r8, r9_116);
                    rsp118 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp118) - 8 + 8);
                    r14d85 = r14d85 + eax132;
                } else {
                    r8 = rdi16;
                    fun_140002fe0(v17, rdx2, r8, r9_116);
                    rsp118 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp118) - 8 + 8);
                }
                g140036cec = r15b127;
                goto addr_1400029d7_106;
            }
        } else {
            if (!v14) {
                if (1) {
                }
            }
            r9_116 = *reinterpret_cast<void***>(r10_119 + 32);
            r8 = *reinterpret_cast<void***>(r10_119 + 24);
            rdx2 = *reinterpret_cast<void***>(r10_119 + 16);
            eax133 = fun_140003c94(rcx122, rdx2, r8, r9_116);
            rsp118 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp118) - 8 + 8);
            r14d85 = r14d85 + eax133;
            goto addr_1400029c6_109;
        }
    }
    addr_140002a40_123:
    zf134 = g140025c3b == 0;
    if (zf134) 
        goto addr_140002a7b_124;
    if (!r14d85) 
        goto addr_140002a7b_124;
    zf135 = (*reinterpret_cast<unsigned char*>(rdi16 + 17) & 8) == 0;
    g140015040 = 0;
    if (zf135) {
        zf136 = g1400157e8 == 1;
        if (!zf136) {
            addr_140002a7b_124:
            zf137 = (g1400157ec & 8) == 0;
            if (zf137 || (zf138 = g1400157e8 == 1, !zf138)) {
                *reinterpret_cast<unsigned char*>(rdi16 + 17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rdi16 + 17) & 0xfe);
                if (!*reinterpret_cast<void***>(rdi16 + 40)) {
                    al139 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rdi16 + 17) | 2);
                    *reinterpret_cast<unsigned char*>(rdi16 + 17) = al139;
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(r14d85) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(r14d85 == 0)) {
                        al140 = reinterpret_cast<unsigned char>(al139 & 0xfb);
                    } else {
                        al140 = reinterpret_cast<unsigned char>(al139 | 4);
                    }
                    *reinterpret_cast<unsigned char*>(rdi16 + 17) = al140;
                }
                if (reinterpret_cast<unsigned char>(r13_123) > reinterpret_cast<unsigned char>(rbx34)) {
                    rbx34 = r13_123;
                }
                *reinterpret_cast<void***>(rdi16 + 24) = rbx34;
                *reinterpret_cast<void***>(r15_13) = rbx34;
                fun_140002f98(0, rdx2, 0, rdx2);
                rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp118) - 8 + 8);
                if (!1) {
                    fun_140002f98(0, rdx2, 0, rdx2);
                    rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
                }
            } else {
                fun_140002f98(0, rdx2, 0, rdx2);
                rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp118) - 8 + 8);
                if (!1) {
                    fun_140002f98(0, rdx2, 0, rdx2);
                    rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
                }
                goto addr_140002af5_7;
            }
        } else {
            rdx2 = reinterpret_cast<void**>(0xfaa);
            *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
            goto addr_140002a70_141;
        }
    } else {
        rdx2 = reinterpret_cast<void**>(0xfab);
        *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
        goto addr_140002a70_141;
    }
    addr_140002af2_143:
    addr_140002af5_7:
    rcx141 = v9 ^ reinterpret_cast<uint64_t>(rsp7);
    rax142 = fun_140010130(rcx141, rdx2, r8, rcx141, rdx2, r8);
    return *reinterpret_cast<uint32_t*>(&rax142);
    addr_140002a70_141:
    r8 = *reinterpret_cast<void***>(rdi16 + 8);
    fun_140003898(0, rdx2, r8, r9_116, 0, rdx2, r8, r9_116);
    rsp118 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp118) - 8 + 8);
    goto addr_140002a7b_124;
    addr_1400029d7_106:
    if (v27) 
        goto addr_1400029ea_105;
    addr_1400029e0_144:
    zf143 = g140026450 == 0;
    if (!zf143) {
        addr_1400029fc_145:
        r15_13 = v20;
        if (v32 && v28) {
            *reinterpret_cast<void***>(v32) = r13_123;
            goto addr_140002a40_123;
        }
    } else {
        addr_1400029ea_105:
        GetSystemTimeAsFileTime(rbp6 + 0xffffffffffffffd8, rdx2, r8, r9_116);
        rsp118 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp118) - 8 + 8);
        r13_123 = v17 + 2;
        goto addr_1400029fc_145;
    }
    addr_1400029c6_109:
    r10_119 = v28;
    goto addr_1400029cb_104;
    addr_140002994_111:
    g140036cec = r15b127;
    goto addr_1400029e0_144;
    addr_140002772_81:
    *reinterpret_cast<unsigned char*>(rdi16 + 17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rdi16 + 17) & 0xfe);
    *reinterpret_cast<unsigned char*>(rdi16 + 17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rdi16 + 17) | 2);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(r14d85) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(r14d85 == 0)) {
        al144 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rdi16 + 17) & 0xfb);
    } else {
        al144 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rdi16 + 17) | 4);
    }
    *reinterpret_cast<unsigned char*>(rdi16 + 17) = al144;
    if (reinterpret_cast<unsigned char>(r12_26) > reinterpret_cast<unsigned char>(rbx24)) {
        rbx24 = r12_26;
    }
    *reinterpret_cast<void***>(rdi16 + 24) = rbx24;
    *reinterpret_cast<void***>(v20) = rbx24;
    goto addr_140002af2_143;
    addr_14000274c_85:
    r15_13 = v20;
    goto addr_140002750_10;
    addr_1400021f2_5:
    rcx145 = *reinterpret_cast<void***>(rsi22);
    fun_1400030d8(rcx145, rdx2, r8);
    fun_140003278(rsi22, rdx2, r8);
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8 - 8 + 8);
    rax146 = *reinterpret_cast<void***>(rdi16 + 24);
    *reinterpret_cast<void***>(rdi16 + 40) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(r15_13) = rax146;
    goto addr_140002af5_7;
}

int64_t FileTimeToLocalFileTime = 0x1477a;

int64_t FileTimeToSystemTime = 0x14794;

int64_t GetDateFormatW = 0x147ac;

int64_t GetTimeFormatW = 0x147be;

void** fun_14000c33c(int64_t rcx, void** rdx, void** r8) {
    void* rsp4;
    uint64_t rax5;
    void** rdx6;
    int32_t eax7;
    void* rsp8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;
    void** r9_12;
    void** rcx13;
    uint64_t rcx14;
    void** rax15;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 0xa0);
    rax5 = g140015008;
    if (r8) {
        rdx6 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp4) + 56);
        eax7 = reinterpret_cast<int32_t>(FileTimeToLocalFileTime(reinterpret_cast<uint64_t>(rsp4) + 48, rdx6));
        rsp8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp4) - 8 + 8);
        if (eax7 && ((rdx6 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp8) + 64), eax9 = reinterpret_cast<int32_t>(FileTimeToSystemTime(reinterpret_cast<uint64_t>(rsp8) + 56, rdx6)), rsp8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp8) - 8 + 8), !!eax9) && ((r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp8) + 64), *reinterpret_cast<int32_t*>(&rdx6) = 0, *reinterpret_cast<int32_t*>(&rdx6 + 4) = 0, eax10 = reinterpret_cast<int32_t>(GetDateFormatW(0x400)), rsp8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp8) - 8 + 8), !!eax10) && (r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp8) + 64), *reinterpret_cast<int32_t*>(&rdx6) = 0, *reinterpret_cast<int32_t*>(&rdx6 + 4) = 0, eax11 = reinterpret_cast<int32_t>(GetTimeFormatW(0x400)), rsp8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp8) - 8 + 8), !!eax11)))) {
            r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp8) + 80);
            *reinterpret_cast<int32_t*>(&r9_12) = *reinterpret_cast<int32_t*>(&rcx);
            *reinterpret_cast<int32_t*>(&r9_12 + 4) = 0;
            rdx6 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp8) + 0x68);
            fun_1400039c0(4, rdx6, r8, r9_12, 4, rdx6, r8, r9_12);
            rsp8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp8) - 8 + 8);
        }
    } else {
        *reinterpret_cast<int32_t*>(&rdx6) = static_cast<int32_t>(rcx + 26);
        *reinterpret_cast<int32_t*>(&rdx6 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rcx13) = static_cast<int32_t>(reinterpret_cast<uint64_t>(r8 + 6));
        *reinterpret_cast<int32_t*>(&rcx13 + 4) = 0;
        *reinterpret_cast<int32_t*>(&r8) = static_cast<int32_t>(reinterpret_cast<uint64_t>(rcx13 + 26));
        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
        fun_1400039c0(rcx13, rdx6, r8, rdx);
        rsp8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp4) - 8 + 8);
    }
    rcx14 = rax5 ^ reinterpret_cast<uint64_t>(rsp4) ^ reinterpret_cast<uint64_t>(rsp8);
    rax15 = fun_140010130(rcx14, rdx6, r8, rcx14, rdx6, r8);
    return rax15;
}

int64_t FindFirstFileW = 0x144d4;

signed char fun_140005f9c(void** rcx, void** rdx, void** r8, void** r9);

int64_t FindClose = 0x144e6;

void** fun_140005ca8(void** rcx, void** rdx, void** r8, void** r9) {
    void* rsp5;
    uint64_t rax6;
    uint64_t v7;
    void** rsi8;
    void** rdi9;
    void** r14_10;
    void** rbx11;
    int64_t rax12;
    void* rsp13;
    unsigned char bpl14;
    void** rdx15;
    void** rax16;
    void* rsp17;
    signed char al18;
    int64_t rax19;
    int64_t rax20;
    void** rcx21;
    void** rax22;
    void* rcx23;
    void** rax24;
    void** rcx25;
    uint32_t eax26;
    void** rax27;
    void** rax28;
    void** rcx29;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0x240);
    rax6 = g140015008;
    v7 = rax6 ^ reinterpret_cast<uint64_t>(rsp5);
    rsi8 = rdx;
    rdi9 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp5) + 32);
    r14_10 = r8;
    rbx11 = rcx;
    rax12 = reinterpret_cast<int64_t>(wcspbrk());
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
    bpl14 = reinterpret_cast<uint1_t>(!!rax12);
    if (!bpl14) {
        addr_140005d6b_2:
        rdx15 = rsi8;
        rax16 = reinterpret_cast<void**>(FindFirstFileW(rbx11, rdx15));
        rsp17 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp13) - 8 + 8);
        *reinterpret_cast<void***>(r14_10) = rax16;
        if (reinterpret_cast<int1_t>(rax16 == 0xffffffffffffffff) || (rdx15 = rsi8, al18 = fun_140005f9c(rbx11, rdx15, r8, r9), rsp17 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp17) - 8 + 8), al18 == 0)) {
            if (rdi9 != reinterpret_cast<uint64_t>(rsp17) + 32) {
                free(rdi9, rdx15);
                rsp17 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp17) - 8 + 8);
            }
        } else {
            if (!bpl14 || (*reinterpret_cast<int32_t*>(&rdx15) = 42, *reinterpret_cast<int32_t*>(&rdx15 + 4) = 0, rax19 = reinterpret_cast<int64_t>(wcschr(rbx11, 42)), rsp17 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp17) - 8 + 8), !rax19) && (*reinterpret_cast<int32_t*>(&rdx15) = static_cast<int32_t>(rax19 + 63), *reinterpret_cast<int32_t*>(&rdx15 + 4) = 0, rax20 = reinterpret_cast<int64_t>(wcschr(rbx11, rdx15)), rsp17 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp17) - 8 + 8), !rax20)) {
                rcx21 = *reinterpret_cast<void***>(r14_10);
                FindClose(rcx21, rdx15);
                rsp17 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp17) - 8 + 8);
                *reinterpret_cast<void***>(r14_10) = reinterpret_cast<void**>(0xffffffffffffffff);
            }
            if (rdi9 != reinterpret_cast<uint64_t>(rsp17) + 32) {
                free(rdi9, rdx15);
                rsp17 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp17) - 8 + 8);
            }
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi8)) & 16) && (!*reinterpret_cast<void***>(rsi8 + 20) && !*reinterpret_cast<void***>(rsi8 + 24))) {
                *reinterpret_cast<void***>(rsi8 + 20) = reinterpret_cast<void**>(0xffffffff);
                *reinterpret_cast<void***>(rsi8 + 24) = reinterpret_cast<void**>(0xffffffff);
            }
        }
    } else {
        rax22 = reinterpret_cast<void**>(0xffffffffffffffff);
        do {
            ++rax22;
        } while (*reinterpret_cast<void***>(rbx11 + reinterpret_cast<unsigned char>(rax22) * 2));
        rcx23 = reinterpret_cast<void*>(rax22 + 1);
        if (reinterpret_cast<uint64_t>(rcx23) <= 0x104) 
            goto addr_140005d40_16; else 
            goto addr_140005d14_17;
    }
    rax24 = fun_140010130(v7 ^ reinterpret_cast<uint64_t>(rsp17), rdx15, r8);
    return rax24;
    addr_140005d40_16:
    rcx25 = rdi9;
    while (eax26 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx11)), !!*reinterpret_cast<void***>(&eax26)) {
        if (*reinterpret_cast<void***>(&eax26) != 94 && *reinterpret_cast<void***>(&eax26) != 34) {
            *reinterpret_cast<void***>(rcx25) = *reinterpret_cast<void***>(&eax26);
            rcx25 = rcx25 + 2;
        }
        rbx11 = rbx11 + 2;
    }
    *reinterpret_cast<void***>(rcx25) = reinterpret_cast<void**>(0);
    rbx11 = rdi9;
    goto addr_140005d6b_2;
    addr_140005d14_17:
    rax27 = reinterpret_cast<void**>(2 * reinterpret_cast<uint64_t>(rcx23));
    if (__intrinsic()) {
        rax27 = reinterpret_cast<void**>(0xffffffffffffffff);
    }
    rax28 = fun_140009214(rax27, __intrinsic(), r8, r9);
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp13) - 8 + 8);
    rdi9 = rax28;
    if (!rax28) {
        *reinterpret_cast<uint32_t*>(&rcx29) = g140025c24;
        *reinterpret_cast<int32_t*>(&rcx29 + 4) = 0;
        fun_140003898(rcx29, 0x41b, r8, r9);
        rsp13 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp13) - 8 + 8);
        goto addr_140005d40_16;
    }
}

void** fun_14000c008(void** rcx, void** rdx);

void fun_14000c044(void** rcx, void** rdx);

void** fun_14000bfb0(void** rcx, void** rdx, ...);

void** fun_1400039c0(void** rcx, void** rdx, void** r8, void** r9, ...) {
    void** rax5;
    int32_t ebx6;
    int1_t zf7;
    void** rcx8;
    void** rax9;
    void** rdx10;
    void** rcx11;
    int1_t zf12;
    int64_t rax13;

    rax5 = reinterpret_cast<void**>(__zero_stack_offset());
    *reinterpret_cast<signed char*>(&ebx6) = 1;
    if (rcx == 13 || (zf7 = (g1400157ec & 32) == 0, zf7)) {
        fun_140003a8c(rcx);
        rcx8 = rcx;
        *reinterpret_cast<int32_t*>(&rcx8 + 4) = 0;
        if (static_cast<uint32_t>(reinterpret_cast<uint64_t>(rcx8 + 0xffffffffffffffec)) <= 5) {
            ebx6 = 0;
        }
        if (reinterpret_cast<int1_t>(rcx8 == 24)) {
            if (!*reinterpret_cast<signed char*>(&ebx6)) {
                fun_14000bea4(rcx8, rdx, r8);
            } else {
                fun_14000c008(rcx8, rdx);
            }
            rcx8 = rcx;
        }
        rax9 = fun_14000bbec(rcx8, rdx, r8);
        rdx10 = rax5 + 16;
        if (!*reinterpret_cast<signed char*>(&ebx6)) {
            fun_14000bf3c(rax9, rdx10, r8);
        } else {
            fun_14000c044(rax9, rdx10);
        }
        rcx11 = rcx;
        *reinterpret_cast<int32_t*>(&rcx11 + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rax5) = static_cast<uint32_t>(reinterpret_cast<uint64_t>(rcx11 + 0xfffffffffffffff6));
        *reinterpret_cast<int32_t*>(&rax5 + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rax5) > 13 && rcx11 != 0x7c) {
            if (!*reinterpret_cast<signed char*>(&ebx6)) {
                rax5 = fun_14000bea4(rcx11, rdx10, r8);
            } else {
                rax5 = fun_14000c008(rcx11, rdx10);
            }
        }
        if (!*reinterpret_cast<signed char*>(&ebx6)) {
            zf12 = g140037093 == 0;
            if (zf12) {
                rax13 = reinterpret_cast<int64_t>(__acrt_iob_func(2, rdx10));
                rax5 = reinterpret_cast<void**>(fflush(rax13, rdx10));
            }
        } else {
            rax5 = fun_14000bfb0(rcx11, rdx10);
        }
    }
    return rax5;
}

uint32_t fun_14000209c(void** rcx, void** rdx, void** r8, void** r9) {
    signed char bpl5;
    void** rax6;
    void** rbx7;
    void** rcx8;
    void** rax9;
    void** rax10;
    uint32_t eax11;
    int64_t rcx12;
    uint32_t eax13;

    ++g1400157e8;
    bpl5 = 1;
    rax6 = fun_14000dde0(rcx, rdx, r8, r9);
    rbx7 = rax6;
    if (!rax6) {
        *reinterpret_cast<int32_t*>(&rcx8) = static_cast<int32_t>(reinterpret_cast<uint64_t>(rax6 + 48));
        *reinterpret_cast<int32_t*>(&rcx8 + 4) = 0;
        rax9 = fun_140009244(rcx8, rdx, r8, r9);
        rbx7 = rax9;
        rax10 = fun_14000dcc4(rcx);
        *reinterpret_cast<void***>(rbx7 + 24) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(rbx7 + 32) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(rbx7 + 8) = rax10;
        *reinterpret_cast<void***>(rbx7 + 16) = rdx;
        *reinterpret_cast<unsigned char*>(rbx7 + 17) = 0;
        eax11 = fun_14000dd88(rcx, rdx, r8);
        *reinterpret_cast<uint32_t*>(&rcx12) = eax11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = 0;
        bpl5 = 0;
        *reinterpret_cast<void***>(rbx7) = *reinterpret_cast<void***>(0x140025800 + rcx12 * 8);
        *reinterpret_cast<void***>(0x140025800 + rcx12 * 8) = rbx7;
    }
    *reinterpret_cast<signed char*>(&r9) = bpl5;
    eax13 = fun_140002160(rbx7, rdx, r8, r9);
    --g1400157e8;
    return eax13;
}

void** fun_14000faa4(void** rcx, void** rdx, uint32_t r8d);

int64_t wcsncmp = 0x14a92;

void** fun_14000fcac(void** rcx, void** rdx, void** r8, void** r9);

int64_t wcscpy_s = 0x148d0;

void** fun_14000dde0(void** rcx, void** rdx, void** r8, void** r9, ...) {
    void** rbx5;
    signed char bpl6;
    void** rax7;
    uint32_t eax8;
    void** r8_9;
    void** rdx10;
    int32_t eax11;
    int32_t eax12;
    void** rdi13;
    void** rsi14;
    void** rsi15;
    void** rax16;
    uint32_t eax17;
    void** r8_18;
    void** rax19;
    void** rsi20;
    uint32_t eax21;
    void** r8_22;
    void** rax23;
    void** rdi24;
    void** rdi25;
    void** rax26;
    void** rax27;
    void** rsi28;
    void** rax29;
    uint32_t eax30;
    int64_t r8_31;
    void** rax32;
    void** rax33;

    rbx5 = rcx;
    bpl6 = 0;
    if (!*reinterpret_cast<void***>(rcx)) {
        *reinterpret_cast<int32_t*>(&rax7) = 0;
        *reinterpret_cast<int32_t*>(&rax7 + 4) = 0;
        goto addr_14000dfb0_3;
    }
    eax8 = fun_14000dd88(rcx, rdx, r8);
    rax7 = fun_14000faa4(rbx5, rdx, eax8);
    if (rax7) {
        addr_14000dfb0_3:
        return rax7;
    } else {
        *reinterpret_cast<int32_t*>(&r8_9) = 2;
        *reinterpret_cast<int32_t*>(&r8_9 + 4) = 0;
        rdx10 = reinterpret_cast<void**>(".");
        eax11 = reinterpret_cast<int32_t>(wcsncmp(rbx5, ".", 2));
        if (!eax11 || (*reinterpret_cast<int32_t*>(&r8_9) = 2, *reinterpret_cast<int32_t*>(&r8_9 + 4) = 0, rdx10 = reinterpret_cast<void**>("."), eax12 = reinterpret_cast<int32_t>(wcsncmp(rbx5, ".", 2)), eax12 == 0)) {
            rdi13 = rbx5 + 4;
        } else {
            rsi14 = reinterpret_cast<void**>(0xffffffffffffffff);
            do {
                ++rsi14;
            } while (*reinterpret_cast<void***>(rbx5 + reinterpret_cast<unsigned char>(rsi14) * 2));
            rsi15 = rsi14 + 3;
            rax16 = reinterpret_cast<void**>(2 * reinterpret_cast<unsigned char>(rsi15));
            if (__intrinsic()) 
                goto label_10; else 
                goto addr_14000de7a_11;
        }
    }
    addr_14000deb0_12:
    eax17 = fun_14000dd88(rdi13, rdx10, r8_9);
    *reinterpret_cast<uint32_t*>(&r8_18) = eax17;
    *reinterpret_cast<int32_t*>(&r8_18 + 4) = 0;
    rax19 = fun_14000faa4(rdi13, rdx10, *reinterpret_cast<uint32_t*>(&r8_18));
    rsi20 = rax19;
    if (!rax19) {
        if (rdi13 != rbx5 + 4) {
            *reinterpret_cast<void***>(rdi13 + 2) = reinterpret_cast<void**>(47);
        }
        eax21 = fun_14000dd88(rdi13, rdx10, r8_18);
        *reinterpret_cast<uint32_t*>(&r8_22) = eax21;
        *reinterpret_cast<int32_t*>(&r8_22 + 4) = 0;
        rax23 = fun_14000faa4(rdi13, rdx10, *reinterpret_cast<uint32_t*>(&r8_22));
        rsi20 = rax23;
        if (bpl6) {
            free(rdi13, rdx10, r8_22);
        }
        if (!rsi20) 
            goto addr_14000df1c_18;
    } else {
        if (bpl6) {
            free(rdi13, rdx10, r8_18);
        }
    }
    rax7 = rsi20;
    goto addr_14000dfb0_3;
    addr_14000df1c_18:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx5) == 34)) {
        rdi24 = reinterpret_cast<void**>(0xffffffffffffffff);
        do {
            ++rdi24;
        } while (*reinterpret_cast<void***>(rbx5 + reinterpret_cast<unsigned char>(rdi24) * 2));
        rdi25 = rdi24 + 3;
        rax26 = reinterpret_cast<void**>(2 * reinterpret_cast<unsigned char>(rdi25));
        if (!__intrinsic()) 
            goto addr_14000df4a_25;
    } else {
        rax27 = fun_14000fcac(rbx5, rdx10, r8_22, r9);
        rsi28 = rax27;
        goto addr_14000df8a_27;
    }
    rax26 = reinterpret_cast<void**>(0xffffffffffffffff);
    addr_14000df4a_25:
    rax29 = fun_140009214(rax26, __intrinsic(), r8_22, r9, rax26, __intrinsic());
    rsi28 = rax29;
    wcscpy_s(rax29, rdi25, "\"");
    wcscat_s(rsi28, rdi25, rbx5);
    r8_22 = reinterpret_cast<void**>("\"");
    rdx10 = rdi25;
    wcscat_s(rsi28, rdx10, "\"");
    addr_14000df8a_27:
    eax30 = fun_14000dd88(rsi28, rdx10, r8_22);
    *reinterpret_cast<uint32_t*>(&r8_31) = eax30;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_31) + 4) = 0;
    rax32 = fun_14000faa4(rsi28, rdx10, *reinterpret_cast<uint32_t*>(&r8_31));
    free(rsi28, rdx10, r8_31);
    rax7 = rax32;
    goto addr_14000dfb0_3;
    label_10:
    rax16 = reinterpret_cast<void**>(0xffffffffffffffff);
    addr_14000de7a_11:
    rax33 = fun_140009214(rax16, __intrinsic(), 2, r9, rax16, __intrinsic());
    rdi13 = rax33;
    wcscpy_s(rax33, rsi15, ".");
    r8_9 = rbx5;
    rdx10 = rsi15;
    wcscat_s(rdi13, rdx10, r8_9);
    bpl6 = 1;
    goto addr_14000deb0_12;
}

void fun_140002f98(void** rcx, void** rdx, ...) {
    void** rbx3;
    void** rdi4;
    void** rcx5;
    void** rax6;

    if (rcx) {
        rbx3 = rcx;
        rdi4 = rcx;
        do {
            rcx5 = *reinterpret_cast<void***>(rdi4 + 8);
            rbx3 = *reinterpret_cast<void***>(rbx3);
            free(rcx5);
            rax6 = g14003d0e0;
            *reinterpret_cast<void***>(rdi4) = rax6;
            g14003d0e0 = rdi4;
            rdi4 = rbx3;
        } while (rbx3);
    }
    return;
}

int64_t wcsrchr = 0x147f2;

void** fun_14000d274(void** rcx, void** rdx, void** r8, void** r9);

void** fun_14000da54(void** rcx, void** rdx, void** r8, void** r9) {
    void* rsp5;
    uint64_t rax6;
    uint64_t v7;
    void** rdi8;
    void** rsi9;
    void** r13_10;
    void** v11;
    void** rdx12;
    void*** r15_13;
    void*** v14;
    void** r12_15;
    void*** v16;
    void*** v17;
    void** rcx18;
    uint32_t* v19;
    uint32_t* v20;
    void** rax21;
    void* rsp22;
    void** r9_23;
    void** rax24;
    unsigned char v25;
    void** rax26;
    void** v27;
    uint64_t rcx28;
    void** v29;
    void*** v30;
    void** rbx31;
    void** v32;
    uint64_t rcx33;
    void** rax34;
    uint32_t eax35;
    uint32_t r14d36;
    uint32_t eax37;
    void* rsp38;
    void** rcx39;
    int1_t zf40;
    void** rax41;
    void** rbx42;
    void** rax43;
    void** rcx44;
    void** rcx45;
    int32_t eax46;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0x2c0);
    rax6 = g140015008;
    v7 = rax6 ^ reinterpret_cast<uint64_t>(rsp5);
    rdi8 = rcx;
    rsi9 = rdx;
    r13_10 = v11;
    *reinterpret_cast<int32_t*>(&rdx12) = 46;
    *reinterpret_cast<int32_t*>(&rdx12 + 4) = 0;
    r15_13 = v14;
    r12_15 = r9;
    v16 = v17;
    rcx18 = *reinterpret_cast<void***>(rdi8 + 8);
    v19 = v20;
    rax21 = reinterpret_cast<void**>(wcsrchr(rcx18, 46));
    rsp22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
    if (!(!rax21 || (r8 = *reinterpret_cast<void***>(rdi8 + 8), r9_23 = rax21, *reinterpret_cast<int32_t*>(&rdx12) = 0x101, *reinterpret_cast<int32_t*>(&rdx12 + 4) = 0, rax24 = fun_14000d274(rsi9, 0x101, r8, r9_23), rsp22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp22) - 8 + 8), rax24 == 0))) {
        if (!(v25 & 16) || (rax26 = v27, !*reinterpret_cast<int32_t*>(&rax26)) && (rcx28 = reinterpret_cast<unsigned char>(rax26) >> 32, !*reinterpret_cast<int32_t*>(&rcx28))) {
            rax26 = v29;
        }
        *v30 = rsi9;
        rbx31 = *r15_13;
        v32 = rax26;
        if (!rbx31) 
            goto addr_14000db4f_6; else 
            goto addr_14000db2d_7;
    }
    addr_14000dc2c_8:
    rcx33 = v7 ^ reinterpret_cast<uint64_t>(rsp22);
    rax34 = fun_140010130(rcx33, rdx12, r8, rcx33, rdx12, r8);
    return rax34;
    addr_14000db4f_6:
    rdx12 = *reinterpret_cast<void***>(rdi8 + 16);
    r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp22) + 48);
    eax35 = fun_14000209c(rsi9, rdx12, r8, 0);
    rsp22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp22) - 8 + 8);
    r14d36 = eax35;
    if (!1) {
        eax37 = fun_1400030d8(0, rdx12, r8);
        rsp38 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp22) - 8 + 8);
        r14d36 = r14d36 + eax37;
        fun_140003278(reinterpret_cast<uint64_t>(rsp38) + 56, rdx12, r8);
        rsp22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp38) - 8 + 8);
    }
    rcx39 = v32;
    *v19 = *v19 + r14d36;
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi8 + 16)) & 16 || (reinterpret_cast<unsigned char>(r12_15) < reinterpret_cast<unsigned char>(rcx39) || (zf40 = g140025c3a == 0, !zf40) && r12_15 == rcx39)) {
        if (rbx31) {
            addr_14000dbf9_12:
            if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi8 + 16)) & 17) == 1) {
                r8 = *reinterpret_cast<void***>(rdi8 + 8);
                rdx12 = rsi9;
                fun_1400039c0(3, rdx12, r8, 0, 3, rdx12, r8, 0);
                rsp22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp22) - 8 + 8);
                rcx39 = v32;
                goto addr_14000dc18_14;
            }
        } else {
            rax41 = fun_14000dc58();
            rbx42 = rax41;
            rax43 = fun_14000dcc4(rsi9, rsi9);
            rsp22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp22) - 8 + 8 - 8 + 8);
            *reinterpret_cast<void***>(rbx42 + 8) = rax43;
            rdx12 = r13_10;
            rcx44 = *reinterpret_cast<void***>(r13_10);
            while (rcx44) {
                rdx12 = rcx44;
                rcx44 = *reinterpret_cast<void***>(rcx44);
            }
            *reinterpret_cast<void***>(rdx12) = rbx42;
            rcx39 = v32;
            if (*r15_13) 
                goto addr_14000dbf9_12;
        }
    } else {
        addr_14000dc18_14:
        if (reinterpret_cast<unsigned char>(*v16) > reinterpret_cast<unsigned char>(rcx39)) {
            rcx39 = *v16;
            goto addr_14000dc24_20;
        }
    }
    *r15_13 = *reinterpret_cast<void***>(r13_10);
    goto addr_14000dbf9_12;
    addr_14000dc24_20:
    *v16 = rcx39;
    goto addr_14000dc2c_8;
    do {
        addr_14000db2d_7:
        rcx45 = *reinterpret_cast<void***>(rbx31 + 8);
        rdx12 = rsi9;
        eax46 = reinterpret_cast<int32_t>(_wcsicmp(rcx45, rdx12, r8, r9_23));
        rsp22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp22) - 8 + 8);
        if (!eax46) 
            break;
        rbx31 = *reinterpret_cast<void***>(rbx31);
    } while (rbx31);
    if (!rbx31) 
        goto addr_14000db4f_6;
    *reinterpret_cast<void***>(rdi8 + 16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi8 + 16)) & 0xfe);
    goto addr_14000db4f_6;
}

void fun_140002fe0(void** rcx, void** rdx, void** r8, void** r9) {
    void** rbx5;
    void** rsi6;
    void** rbp7;
    void** r14_8;
    void** rdi9;
    void** rax10;
    void** rax11;
    void** rcx12;
    void** rsi13;
    void** rax14;
    void** rdx15;
    void** rcx16;
    void** rax17;
    void** rcx18;
    void** rsi19;
    void** rax20;
    void** rbx21;
    void** rcx22;

    rbx5 = *reinterpret_cast<void***>(rcx);
    *reinterpret_cast<int32_t*>(&rsi6) = 0;
    *reinterpret_cast<int32_t*>(&rsi6 + 4) = 0;
    rbp7 = r8;
    r14_8 = rdx;
    rdi9 = rcx;
    if (!rbx5) {
        addr_14000302b_2:
        rax10 = fun_140009244(40, rdx, r8, r9);
        rbx5 = rax10;
        *reinterpret_cast<void***>(rax10 + 8) = r14_8;
        *reinterpret_cast<void***>(rax10 + 16) = *reinterpret_cast<void***>(rbp7 + 16);
        if (!rsi6) {
            if (!*reinterpret_cast<void***>(rdi9)) {
                *reinterpret_cast<void***>(rdi9) = rbx5;
            } else {
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi9)) = rbx5;
            }
        } else {
            *reinterpret_cast<void***>(rsi6) = rax10;
        }
    } else {
        do {
            if (*reinterpret_cast<void***>(rbx5 + 8) != rdx) 
                continue;
            if (*reinterpret_cast<void***>(rbx5 + 16) == *reinterpret_cast<void***>(r8 + 16)) 
                break;
            rsi6 = rbx5;
            rbx5 = *reinterpret_cast<void***>(rbx5);
        } while (rbx5);
        if (!rbx5) 
            goto addr_14000302b_2;
    }
    rax11 = fun_14000dc58();
    rcx12 = *reinterpret_cast<void***>(rbp7 + 8);
    rsi13 = rax11;
    rax14 = fun_14000dcc4(rcx12);
    rdx15 = rbx5 + 24;
    *reinterpret_cast<void***>(rsi13 + 8) = rax14;
    rcx16 = *reinterpret_cast<void***>(rdx15);
    while (rcx16) {
        rdx15 = rcx16;
        rcx16 = *reinterpret_cast<void***>(rcx16);
    }
    *reinterpret_cast<void***>(rdx15) = rsi13;
    rax17 = fun_14000dc58();
    rcx18 = g140026460;
    rsi19 = rax17;
    rax20 = fun_14000dcc4(rcx18);
    rbx21 = rbx5 + 32;
    *reinterpret_cast<void***>(rsi19 + 8) = rax20;
    rcx22 = *reinterpret_cast<void***>(rbx21);
    while (rcx22) {
        rbx21 = rcx22;
        rcx22 = *reinterpret_cast<void***>(rcx22);
    }
    *reinterpret_cast<void***>(rbx21) = rsi19;
    *reinterpret_cast<void***>(rbp7 + 40) = rdi9;
    return;
}

uint32_t fun_140003c94(void** rcx, void** rdx, void** r8, void** r9b) {
    void** rax5;
    void** rax6;
    uint32_t eax7;
    void** rcx8;

    rax5 = fun_14000dc58();
    rax6 = fun_14000dcc4(rcx);
    *reinterpret_cast<void***>(rax5 + 8) = rax6;
    eax7 = fun_140003d14(rax5, rdx, r8, r9b);
    rcx8 = g14003d0e0;
    *reinterpret_cast<void***>(rax5) = rcx8;
    g14003d0e0 = rax5;
    return eax7;
}

void** fun_140005e6c(void** rcx, void** rdx, void** r8, void** r9) {
    void** r14_5;
    void** rdi6;
    void** r8_7;
    void** rbp8;
    void** rax9;
    void** rbx10;
    uint32_t eax11;
    uint32_t eax12;
    int64_t rax13;
    void** rax14;
    void** rax15;
    void** rcx16;

    r14_5 = r8;
    rdi6 = rcx;
    r8_7 = r9;
    rbp8 = r9;
    rax9 = fun_140005ca8(rdx, r14_5, r8_7, r9);
    if (!rax9) {
        if (rdi6) {
            do {
                rbx10 = reinterpret_cast<void**>(0x140025c50);
                while (1) {
                    eax11 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi6));
                    if (!*reinterpret_cast<int16_t*>(&eax11)) {
                        addr_140005f07_6:
                        if (!reinterpret_cast<int1_t>(rbx10 == 0x140025c50)) 
                            break;
                    } else {
                        do {
                            if (34 != *reinterpret_cast<int16_t*>(&eax11)) 
                                break;
                            rdi6 = rdi6 + 2;
                            eax11 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi6));
                        } while (*reinterpret_cast<int16_t*>(&eax11));
                        eax12 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi6));
                        if (!*reinterpret_cast<void***>(&eax12)) 
                            goto addr_140005f07_6;
                        rdi6 = rdi6 + 2;
                        *reinterpret_cast<void***>(rbx10) = *reinterpret_cast<void***>(&eax12);
                        if (*reinterpret_cast<void***>(&eax12) == 59) 
                            goto addr_140005f07_6; else 
                            goto addr_140005f01_11;
                    }
                    if (!*reinterpret_cast<void***>(rdi6)) 
                        goto addr_140005eb7_13;
                    continue;
                    addr_140005f01_11:
                    rbx10 = rbx10 + 2;
                }
                if (*reinterpret_cast<void***>(rbx10 + 0xfffffffffffffffe) != 92 && *reinterpret_cast<void***>(rbx10 + 0xfffffffffffffffe) != 47) {
                    *reinterpret_cast<void***>(rbx10) = reinterpret_cast<void**>(92);
                    rbx10 = rbx10 + 2;
                }
                *reinterpret_cast<void***>(rbx10) = reinterpret_cast<void**>(0);
                rax13 = reinterpret_cast<int64_t>(wcspbrk(0x140025c50, "*", r8_7));
            } while (rax13 || (wcscpy_s(rbx10), r8_7 = rbp8, rax14 = fun_140005ca8(0x140025c50, r14_5, r8_7, r9), rax14 == 0));
        } else {
            addr_140005eb7_13:
            *reinterpret_cast<int32_t*>(&rax15) = 0;
            *reinterpret_cast<int32_t*>(&rax15 + 4) = 0;
            goto addr_140005f7f_18;
        }
    } else {
        rcx16 = rdx;
        goto addr_140005f7a_20;
    }
    rcx16 = reinterpret_cast<void**>(0x140025c50);
    addr_140005f7a_20:
    rax15 = fun_14000dcc4(rcx16, rcx16);
    addr_140005f7f_18:
    return rax15;
}

int64_t _wsplitpath_s = 0x149ee;

int64_t _wmakepath_s = 0x149fe;

void** fun_14000f570(void** rcx, void** rdx, void** r8, void** r9) {
    void* rsp5;
    uint64_t rax6;
    void* rsp7;
    void** r8_8;
    void* rsp9;
    void** rcx10;
    uint64_t rcx11;
    void** rax12;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 0x480);
    rax6 = g140015008;
    _wsplitpath_s();
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
    r8_8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp7) + 80);
    _wmakepath_s(reinterpret_cast<uint64_t>(rsp7) + 0x260, 0x104, r8_8, reinterpret_cast<uint64_t>(rsp7) + 96);
    rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
    rcx10 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp9) + 0x260);
    fun_14000dcc4(rcx10, rcx10);
    rcx11 = rax6 ^ reinterpret_cast<uint64_t>(rsp5) ^ reinterpret_cast<uint64_t>(rsp9) - 8 + 8;
    rax12 = fun_140010130(rcx11, 0x104, r8_8, rcx11, 0x104, r8_8);
    return rax12;
}

int64_t FindNextFileW = 0x144f2;

void** fun_140005e30(struct s3* rcx, void** rdx, void** r8, void** r9) {
    int32_t eax5;
    void** rax6;

    eax5 = reinterpret_cast<int32_t>(FindNextFileW(rdx, rcx));
    if (eax5) {
        rax6 = reinterpret_cast<void**>(&rcx->f2c);
    } else {
        FindClose(rdx, rcx);
        *reinterpret_cast<int32_t*>(&rax6) = 0;
        *reinterpret_cast<int32_t*>(&rax6 + 4) = 0;
    }
    return rax6;
}

int32_t fun_140010cc2(int64_t rcx);

struct s4 {
    signed char[248] pad248;
    int64_t ff8;
};

void fun_14001037c(struct s4* rcx);

int64_t g140015398;

void* g140015338;

int64_t g140015210;

uint64_t g140015320;

int32_t g140015200;

int32_t g140015204;

int32_t g140015218;

int64_t g140015220;

void** fun_140010154(int64_t rcx);

void** fun_140010130(uint64_t rcx, void** rdx, void** r8, ...) {
    int1_t zf4;
    void** rax5;
    int32_t eax6;
    int64_t rax7;
    void** rax8;

    zf4 = rcx == g140015008;
    if (zf4) {
        __asm__("rol rcx, 0x10");
        if (*reinterpret_cast<uint16_t*>(&rcx) & 0xffff) {
            __asm__("ror rcx, 0x10");
        } else {
            return rax5;
        }
    }
    eax6 = fun_140010cc2(23);
    if (eax6) {
        __asm__("int 0x29");
    }
    fun_14001037c(0x1400152a0);
    g140015398 = reinterpret_cast<int64_t>(__return_address());
    g140015338 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 56 - 8 + 8 - 8 + 8 + 56 + 8);
    rax7 = g140015398;
    g140015210 = rax7;
    g140015320 = rcx;
    g140015200 = 0xc0000409;
    g140015204 = 1;
    g140015218 = 1;
    g140015220 = 2;
    rax8 = fun_140010154(0x140011600);
    return rax8;
}

int32_t g140025c3c;

signed char fun_1400077d0(void** rcx, void*** rdx, void** r8, void** r9);

uint32_t g14002648c;

int64_t iswdigit = 0x1492e;

int64_t wcstoul = 0x1493a;

int64_t _errno = 0x14944;

signed char fun_1400059e0(void** rcx, void** rdx, void** r8b, unsigned char r9b);

signed char fun_14000f778(void** rcx, void** rdx, void** r8, void** r9);

uint32_t fun_140005114(void** rcx, signed char dl, signed char r8b, void** r9);

unsigned char g140036ced;

int64_t CreateFileW = 0x144b8;

int64_t SetFileTime = 0x144c6;

int64_t CloseHandle = 0x14490;

uint32_t fun_140003d14(void** rcx, void** rdx, void** r8, void** r9b) {
    void** r9_4;
    void** v5;
    void** v6;
    void* rbp7;
    unsigned char al8;
    uint32_t ebx9;
    uint32_t v10;
    void** sil11;
    uint32_t v12;
    void** r10_13;
    void** rdi14;
    uint32_t eax15;
    int64_t r14_16;
    unsigned char al17;
    unsigned char v18;
    void** rcx19;
    void** r8_20;
    void** r9_21;
    signed char al22;
    signed char r15b23;
    unsigned char dil24;
    void** v25;
    void** v26;
    void** rcx27;
    void** rdx28;
    int64_t rbx29;
    int64_t rax30;
    uint32_t eax31;
    void** rcx32;
    void** v33;
    int64_t rcx34;
    int32_t eax35;
    uint32_t eax36;
    int32_t* rax37;
    void** rcx38;
    void** rax39;
    int64_t rcx40;
    int64_t rax41;
    int1_t zf42;
    void** r12_43;
    void** v44;
    void** v45;
    int64_t rax46;
    void** rax47;
    signed char al48;
    int64_t rdx49;
    int64_t rax50;
    void** rax51;
    int1_t zf52;
    int1_t below_or_equal53;
    void** rax54;
    void** rax55;
    void** rbx56;
    void** rax57;
    void** rax58;
    void** r13_59;
    void** r8_60;
    void** rdx61;
    signed char al62;
    unsigned char r15b63;
    unsigned char r14b64;
    unsigned char r12b65;
    uint32_t eax66;
    int1_t zf67;
    void** v68;
    int1_t below_or_equal69;
    int1_t zf70;
    void** v71;
    int64_t v72;
    int1_t zf73;
    int1_t below_or_equal74;
    void** v75;
    int1_t zf76;
    int1_t below_or_equal77;
    unsigned char sil78;
    void** rbx79;
    void*** rax80;
    void** rdx81;
    uint32_t eax82;
    void** rcx83;
    int64_t rax84;

    r9_4 = r9b;
    v5 = r8;
    v6 = rdx;
    rbp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8);
    ++g140025c3c;
    al8 = g1400157ec;
    ebx9 = 0;
    v10 = 0;
    sil11 = r9_4;
    v12 = 0;
    r10_13 = rdx;
    rdi14 = rcx;
    if (al8 & 8) {
        addr_140003e2c_2:
        eax15 = 0;
    } else {
        if (!(al8 & 16)) {
            if (rdx) {
                *reinterpret_cast<uint32_t*>(&r14_16) = 94;
                al17 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(sil11) >> 6) & 1);
                v18 = al17;
                do {
                    rcx19 = *reinterpret_cast<void***>(r10_13 + 8);
                    r8_20 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp7) + 80);
                    *reinterpret_cast<unsigned char*>(&r9_21) = al17;
                    al22 = fun_1400077d0(rcx19, reinterpret_cast<int64_t>(rbp7) - 16, r8_20, r9_21);
                    r15b23 = al22;
                    g14002648c = 0;
                    dil24 = 0;
                    v25 = v26;
                    rcx27 = v26;
                    rdx28 = v26;
                    *reinterpret_cast<uint32_t*>(&rbx29) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v26));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx29) + 4) = 0;
                    if (*reinterpret_cast<void***>(&rbx29)) {
                        do {
                            if (*reinterpret_cast<void***>(rdx28) == *reinterpret_cast<void***>(&r14_16) || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdx28) == 36)) {
                                rdx28 = rdx28 + 2;
                            }
                            rdx28 = rdx28 + 2;
                        } while (*reinterpret_cast<void***>(rdx28));
                    }
                    while ((*reinterpret_cast<int32_t*>(&rax30) = static_cast<int32_t>(rbx29 - 9), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax30) + 4) = 0, *reinterpret_cast<uint16_t*>(&rax30) <= 55) && (rdx28 = reinterpret_cast<void**>(0x80001001800001), static_cast<int1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(0x80001001800001) >> rax30))) || *reinterpret_cast<void***>(&rbx29) == *reinterpret_cast<void***>(&r14_16)) {
                        eax31 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&rbx29));
                        if (eax31 == 33) {
                            dil24 = reinterpret_cast<unsigned char>(dil24 | 4);
                            goto addr_140004031_13;
                        } else {
                            if (eax31 == 45) {
                                rcx32 = rcx27 + 2;
                                dil24 = reinterpret_cast<unsigned char>(dil24 | 2);
                                v33 = rcx32;
                                *reinterpret_cast<uint32_t*>(&rcx34) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx32));
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = 0;
                                eax35 = reinterpret_cast<int32_t>(iswdigit(rcx34, rdx28, r8_20, r9_21));
                                if (!eax35) {
                                    g14002648c = 0xffffffff;
                                } else {
                                    rdx28 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp7) + 0xffffffffffffffe0);
                                    *reinterpret_cast<int32_t*>(&r8_20) = 10;
                                    *reinterpret_cast<int32_t*>(&r8_20 + 4) = 0;
                                    eax36 = reinterpret_cast<uint32_t>(wcstoul(v33, rdx28, 10, r9_21));
                                    g14002648c = eax36;
                                    rax37 = reinterpret_cast<int32_t*>(_errno(v33, rdx28, 10, r9_21));
                                    if (*rax37 == 34) {
                                        r8_20 = v33;
                                        *reinterpret_cast<uint32_t*>(&rcx38) = g140025c20;
                                        *reinterpret_cast<int32_t*>(&rcx38 + 4) = 0;
                                        rdx28 = reinterpret_cast<void**>(0x436);
                                        *reinterpret_cast<int32_t*>(&rdx28 + 4) = 0;
                                        *reinterpret_cast<void***>(v33) = reinterpret_cast<void**>(0);
                                        fun_140003898(rcx38, 0x436, r8_20, r9_21, rcx38, 0x436, r8_20, r9_21);
                                    }
                                    rax39 = v33;
                                    while (*reinterpret_cast<uint32_t*>(&rcx40) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax39)), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx40) + 4) = 0, rax41 = reinterpret_cast<int64_t>(iswspace(rcx40, rdx28, r8_20, r9_21)), !!*reinterpret_cast<int32_t*>(&rax41)) {
                                        rax39 = v33 + 2;
                                        v33 = rax39;
                                    }
                                    *reinterpret_cast<uint32_t*>(&r14_16) = static_cast<uint32_t>(rax41 + 94);
                                }
                                rcx27 = v33 - 2;
                                v25 = rcx27;
                                goto addr_140004031_13;
                            } else {
                                if (eax31 == 64) {
                                    zf42 = (reinterpret_cast<unsigned char>(g1400157ee) & 4) == 0;
                                    if (zf42) {
                                        dil24 = reinterpret_cast<unsigned char>(dil24 | 1);
                                        goto addr_140004031_13;
                                    }
                                } else {
                                    if (eax31 != *reinterpret_cast<uint32_t*>(&r14_16)) {
                                        addr_140004031_13:
                                        if (*reinterpret_cast<void***>(&rbx29) == *reinterpret_cast<void***>(&r14_16)) 
                                            break;
                                    } else {
                                        rcx27 = rcx27 + 2;
                                        v25 = rcx27;
                                        if (*reinterpret_cast<void***>(rcx27) == 32) 
                                            goto addr_14000403b_29;
                                        if (*reinterpret_cast<void***>(rcx27) != 9) 
                                            break;
                                    }
                                    addr_14000403b_29:
                                    rcx27 = rcx27 + 2;
                                    v25 = rcx27;
                                    *reinterpret_cast<uint32_t*>(&rbx29) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx27));
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx29) + 4) = 0;
                                }
                            }
                        }
                    }
                    r12_43 = v44;
                    if (!(dil24 & 4)) {
                        addr_140004094_32:
                        v45 = rcx27;
                        if (!r15b23 && (rax46 = reinterpret_cast<int64_t>(wcschr()), rcx27 = v25, !!rax46)) {
                            r8_20 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp7) + 80);
                            rax47 = fun_14000e740(rcx27, -1, r8_20, rcx27, -1, r8_20);
                            rcx27 = rax47;
                            v25 = rax47;
                        }
                    } else {
                        *reinterpret_cast<unsigned char*>(&r9_21) = dil24;
                        r8_20 = sil11;
                        al48 = fun_1400059e0(rcx27, v5, r8_20, *reinterpret_cast<unsigned char*>(&r9_21));
                        if (!al48) {
                            rcx27 = v25;
                            goto addr_140004094_32;
                        } else {
                            *reinterpret_cast<int32_t*>(&rdx49) = 36;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx49) + 4) = 0;
                            rax50 = reinterpret_cast<int64_t>(wcschr(v25, 36, r8_20, r9_21));
                            if (!rax50) {
                                rax51 = v25;
                            } else {
                                r8_20 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp7) + 80);
                                *reinterpret_cast<signed char*>(&rdx49) = -1;
                                rax51 = fun_14000e740(v25, -1, r8_20, v25, -1, r8_20);
                            }
                            if (v25 != rax51) {
                                free(rax51, rdx49, r8_20, r9_21);
                            }
                            ebx9 = v10;
                            if (!(reinterpret_cast<unsigned char>(sil11) & 2) && ((zf52 = g140025c3b == 0, !zf52) && ebx9)) {
                                below_or_equal53 = ebx9 <= g14002648c;
                                if (!below_or_equal53) 
                                    break;
                                continue;
                            }
                        }
                    }
                    rax54 = reinterpret_cast<void**>(0xffffffffffffffff);
                    do {
                        ++rax54;
                    } while (*reinterpret_cast<void***>(rcx27 + reinterpret_cast<unsigned char>(rax54) * 2));
                    rax55 = rax54 + 1;
                    *reinterpret_cast<int32_t*>(&rbx56) = 0x8000;
                    *reinterpret_cast<int32_t*>(&rbx56 + 4) = 0;
                    if (reinterpret_cast<unsigned char>(rax55) > reinterpret_cast<unsigned char>(0x8000)) {
                        rbx56 = rax55;
                    }
                    rax57 = reinterpret_cast<void**>(2 * reinterpret_cast<unsigned char>(rbx56));
                    if (__intrinsic()) {
                        rax57 = reinterpret_cast<void**>(0xffffffffffffffff);
                    }
                    rax58 = fun_140009214(rax57, __intrinsic(), r8_20, r9_21, rax57, __intrinsic());
                    r13_59 = rax58;
                    wcscpy_s(rax58, rbx56, v25, r9_21);
                    r8_60 = v25;
                    r9_21 = r12_43;
                    rdx61 = rbx56;
                    al62 = fun_14000f778(r13_59, rdx61, r8_60, r9_21);
                    if (al62) {
                        r8_60 = v25;
                        rdx61 = reinterpret_cast<void**>(0x447);
                        *reinterpret_cast<int32_t*>(&rdx61 + 4) = 0;
                        fun_140003898(0, 0x447, r8_60, r9_21, 0, 0x447, r8_60, r9_21);
                    }
                    r15b63 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(sil11) & 4);
                    r14b64 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(dil24 >> 1) & 1);
                    r12b65 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(sil11) & 2);
                    while (1) {
                        if (!r15b63) {
                            *reinterpret_cast<signed char*>(&r8_60) = 1;
                        } else {
                            *reinterpret_cast<int32_t*>(&r8_60) = 0;
                            *reinterpret_cast<int32_t*>(&r8_60 + 4) = 0;
                        }
                        if (r15b63 || !(reinterpret_cast<unsigned char>(sil11) & 8) && !(dil24 & 1)) {
                            *reinterpret_cast<signed char*>(&rdx61) = 1;
                        } else {
                            rdx61 = reinterpret_cast<void**>(0);
                            *reinterpret_cast<int32_t*>(&rdx61 + 4) = 0;
                        }
                        *reinterpret_cast<unsigned char*>(&r9_21) = r14b64;
                        eax66 = fun_140005114(r13_59, *reinterpret_cast<signed char*>(&rdx61), *reinterpret_cast<signed char*>(&r8_60), r9_21);
                        v10 = eax66;
                        ebx9 = eax66;
                        if (r12b65) 
                            goto addr_1400041fa_60;
                        if (eax66 != 0x103) 
                            break;
                        zf67 = g140036ced == r12b65;
                        if (zf67) 
                            goto addr_1400041bd_63;
                        if (v12 >= 10) 
                            goto addr_1400041d6_65;
                        r8_60 = v68;
                        rdx61 = reinterpret_cast<void**>(0xfad);
                        *reinterpret_cast<int32_t*>(&rdx61 + 4) = 0;
                        fun_140003898(0, 0xfad, r8_60, r9_21, 0, 0xfad, r8_60, r9_21);
                        ++v12;
                    }
                    addr_1400041d2_67:
                    if (!ebx9) {
                        addr_1400041fa_60:
                        if (v45 != v25) {
                            free();
                        }
                    } else {
                        addr_1400041d6_65:
                        below_or_equal69 = ebx9 <= g14002648c;
                        if (!below_or_equal69 && (zf70 = g140025c3b == 0, zf70)) {
                            r8_60 = v71;
                            *reinterpret_cast<uint32_t*>(&r9_21) = ebx9;
                            *reinterpret_cast<int32_t*>(&r9_21 + 4) = 0;
                            rdx61 = reinterpret_cast<void**>(0x435);
                            *reinterpret_cast<int32_t*>(&rdx61 + 4) = 0;
                            fun_140003898(0, 0x435, r8_60, r9_21, 0, 0x435, r8_60, r9_21);
                            goto addr_1400041fa_60;
                        }
                    }
                    free(v72, rdx61, r8_60, r9_21);
                    free(r13_59, rdx61, r8_60, r9_21);
                    if (r12b65) 
                        goto addr_14000423a_71;
                    zf73 = g140025c3b == 0;
                    if (zf73) 
                        goto addr_14000423a_71;
                    if (!ebx9) 
                        goto addr_14000423a_71;
                    below_or_equal74 = ebx9 <= g14002648c;
                    if (!below_or_equal74) 
                        break;
                    addr_14000423a_71:
                    *reinterpret_cast<uint32_t*>(&r14_16) = 94;
                    continue;
                    addr_1400041bd_63:
                    r8_60 = v75;
                    rdx61 = reinterpret_cast<void**>(0xfac);
                    *reinterpret_cast<int32_t*>(&rdx61 + 4) = 0;
                    fun_140003898(0, 0xfac, r8_60, r9_21, 0, 0xfac, r8_60, r9_21);
                    ebx9 = 0;
                    v10 = 0;
                    goto addr_1400041d2_67;
                    al17 = v18;
                    r10_13 = *reinterpret_cast<void***>(v6);
                    v6 = r10_13;
                } while (r10_13);
            }
            if (reinterpret_cast<unsigned char>(sil11) & 2) 
                goto addr_140003e2c_2;
            zf76 = g140025c3b == 0;
            if (zf76) 
                goto addr_140003e2c_2;
            below_or_equal77 = ebx9 <= g14002648c;
            if (below_or_equal77) 
                goto addr_140003e2c_2; else 
                goto addr_14000427f_79;
        } else {
            if (rcx) {
                sil78 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(sil11) >> 2) & 1);
                do {
                    rbx79 = *reinterpret_cast<void***>(rdi14 + 8);
                    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx79) == 34)) {
                        rax80 = reinterpret_cast<void***>(wcsrchr(rbx79, 34));
                        rdx81 = rbx79 + 2;
                        *rax80 = reinterpret_cast<void**>(0);
                        eax82 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdx81));
                        *reinterpret_cast<void***>(rbx79) = *reinterpret_cast<void***>(&eax82);
                        while (*reinterpret_cast<void***>(&eax82)) {
                            rcx83 = rdx81;
                            rdx81 = rdx81 + 2;
                            eax82 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdx81));
                            *reinterpret_cast<void***>(rcx83) = *reinterpret_cast<void***>(&eax82);
                        }
                    }
                    fun_1400039c0(5, rbx79, r8, r9_4, 5, rbx79, r8, r9_4);
                    if (!sil78 && (GetSystemTimeAsFileTime(reinterpret_cast<int64_t>(rbp7) - 16, rbx79), *reinterpret_cast<int32_t*>(&r9_4) = 0, *reinterpret_cast<int32_t*>(&r9_4 + 4) = 0, *reinterpret_cast<int32_t*>(&r8) = 0, *reinterpret_cast<int32_t*>(&r8 + 4) = 0, rax84 = reinterpret_cast<int64_t>(CreateFileW(rbx79, 0x100)), rax84 != -1)) {
                        r9_4 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp7) + 0xfffffffffffffff0);
                        *reinterpret_cast<int32_t*>(&r8) = 0;
                        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                        SetFileTime(rax84);
                        CloseHandle(rax84);
                    }
                    rdi14 = *reinterpret_cast<void***>(rdi14);
                } while (rdi14);
                goto addr_140003e2c_2;
            }
        }
    }
    addr_140003e2e_89:
    return eax15;
    addr_14000427f_79:
    eax15 = ebx9;
    goto addr_140003e2e_89;
}

int64_t realloc = 0x14908;

void** fun_140009274(void** rcx, void** rdx, void** r8, void** r9, ...) {
    void** rax5;
    void** rbx6;
    void** rax7;
    void** rcx8;

    if (!rcx) {
        rax5 = fun_140009214(rdx, rdx, r8, r9);
        rbx6 = rax5;
    } else {
        rax7 = reinterpret_cast<void**>(realloc());
        rbx6 = rax7;
        if (!rax7) {
            *reinterpret_cast<uint32_t*>(&rcx8) = g140025c24;
            *reinterpret_cast<int32_t*>(&rcx8 + 4) = 0;
            fun_140003898(rcx8, 0x41b, r8, r9);
        }
    }
    return rbx6;
}

void fun_1400033d0(void** rcx, void** rdx, void** r8, void** r9) {
    int64_t rsi5;
    void** rdi6;
    void** rax7;
    void** rcx8;
    void** rax9;
    void** rax10;

    *reinterpret_cast<int32_t*>(&rsi5) = *reinterpret_cast<int32_t*>(&rdx);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = 0;
    if (*reinterpret_cast<void***>(r8)) {
        if (!(*reinterpret_cast<unsigned char*>(&rsi5) & 7)) {
            *reinterpret_cast<int32_t*>(&rdi6) = 0;
            *reinterpret_cast<int32_t*>(&rdi6 + 4) = 0;
            if (reinterpret_cast<uint64_t>(rsi5 + 8) > 0x1ffffffffffffffe || (rax7 = reinterpret_cast<void**>(realloc()), rdi6 = rax7, !rax7)) {
                *reinterpret_cast<uint32_t*>(&rcx8) = g140025c24;
                *reinterpret_cast<int32_t*>(&rcx8 + 4) = 0;
                fun_140003898(rcx8, 0x41b, r8, r9);
            }
            *reinterpret_cast<void***>(r8) = rdi6;
        }
    } else {
        rax9 = fun_140009214(64, rdx, r8, r9);
        *reinterpret_cast<void***>(r8) = rax9;
    }
    rax10 = fun_14000dcc4(rcx, rcx);
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r8)) + reinterpret_cast<uint64_t>(rsi5 * 8)) = rax10;
    return;
}

struct s5 {
    int16_t f0;
    int16_t f2;
};

int64_t wcstok_s = 0x148b6;

void** fun_140003468(void** rcx, int32_t* rdx, void** r8, void** r9) {
    int32_t* rdi5;
    void** rsi6;
    struct s5* rax7;
    void* rsp8;
    void** rcx9;
    void** rax10;
    void** rdx11;

    rdi5 = rdx;
    rsi6 = r8;
    rax7 = reinterpret_cast<struct s5*>(wcschr());
    rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32 - 8 + 8);
    if (rax7 && ((*reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rax7) - 2) == 32 || *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rax7) - 2) == 9) && rax7->f2 == 10)) {
        rax7->f0 = 0;
    }
    rcx9 = rcx;
    while (rax10 = reinterpret_cast<void**>(wcstok_s(rcx9, " ", reinterpret_cast<int64_t>(rsp8) + 72)), !!rax10) {
        if (*reinterpret_cast<void***>(rax10) == 64) 
            goto addr_1400034e9_6;
        *reinterpret_cast<int32_t*>(&rdx11) = *rdi5;
        *reinterpret_cast<int32_t*>(&rdx11 + 4) = 0;
        fun_1400033d0(rax10, rdx11, rsi6, r9);
        rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8 - 8 + 8);
        *rdi5 = *rdi5 + 1;
        *reinterpret_cast<int32_t*>(&rcx9) = 0;
        *reinterpret_cast<int32_t*>(&rcx9 + 4) = 0;
    }
    addr_1400034f9_9:
    return rax10;
    addr_1400034e9_6:
    rax10 = fun_140003898(0, 0xfa1, rax10 + 2, r9);
    goto addr_1400034f9_9;
}

void** g140036e80;

int64_t _wfopen_s = 0x14b66;

void** fun_14000bee0(int64_t rcx, void** rdx, void** r8);

int64_t fclose = 0x148fe;

void** fun_1400036ec(void** rcx, void** rdx);

void** fun_14000bb94(void** rcx, void** rdx);

void** g1400157f8;

struct s6 {
    void** f0;
    signed char[1] pad2;
    void** f2;
};

void** g1400157ed;

int64_t wcsspn = 0x14924;

void** fun_14000b43c(uint32_t ecx, void** rdx, ...) {
    void** v3;
    void* rsp4;
    void** rdi5;
    uint32_t r12d6;
    signed char v7;
    int64_t rbp8;
    int32_t r15d9;
    void** rax10;
    void** rbx11;
    uint32_t ecx12;
    void** r8_13;
    void** r9_14;
    signed char cl15;
    void** rbx16;
    void** r9_17;
    void** rax18;
    void** rdi19;
    void** rcx20;
    uint32_t eax21;
    void** rbx22;
    void** r9_23;
    int32_t eax24;
    void* rsp25;
    void** r9_26;
    int64_t v27;
    int64_t v28;
    int64_t rax29;
    uint32_t ecx30;
    void** r9_31;
    int64_t r13_32;
    void** rsi33;
    uint32_t eax34;
    void** rax35;
    void* rsp36;
    void** rax37;
    void** r15_38;
    int64_t rax39;
    void* rsp40;
    void** rax41;
    void** r14_42;
    void** rax43;
    void** rcx44;
    void** r9_45;
    void** rax46;
    void** rbx47;
    void** r9_48;
    void** r9_49;
    struct s6* rax50;
    void** rbx51;
    int64_t rax52;
    void** rcx53;
    void** rax54;
    int64_t rax55;
    void** rcx56;
    void** rax57;
    void** r9_58;
    void** rcx59;
    void** r9_60;
    void** rcx61;
    void** r9_62;

    if (ecx) {
        v3 = rdx;
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 32);
        rdi5 = rdx;
        r12d6 = ecx;
        v7 = 0;
        *reinterpret_cast<uint32_t*>(&rbp8) = 0;
        r15d9 = 32;
        goto addr_14000b472_3;
    }
    addr_14000b801_4:
    return rax10;
    addr_14000b7ed_5:
    goto addr_14000b801_4;
    while (1) {
        addr_14000b67b_6:
        rdx = reinterpret_cast<void**>("n");
        rax10 = reinterpret_cast<void**>(_wcsicmp(rbx11, "n"));
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        if (!*reinterpret_cast<int32_t*>(&rax10)) {
            ecx12 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx11 + 4));
            *reinterpret_cast<unsigned char*>(&rdx) = 1;
            rax10 = fun_14000b804(*reinterpret_cast<uint16_t*>(&ecx12), 1, r8_13, r9_14);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        } else {
            if (*reinterpret_cast<void***>(rbx11) == 63) {
                cl15 = 1;
                v7 = 1;
                goto addr_14000b7dd_10;
            } else {
                if (*reinterpret_cast<void***>(rbx11) == 0x66 || *reinterpret_cast<void***>(rbx11) == 70) {
                    rbx16 = rbx11 + 2;
                    if (!*reinterpret_cast<void***>(rbx16) && ((*reinterpret_cast<uint32_t*>(&rbp8) = *reinterpret_cast<uint32_t*>(&rbp8) + 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = 0, *reinterpret_cast<uint32_t*>(&rbp8) >= r12d6) || (rbx16 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdi5) + reinterpret_cast<uint64_t>(rbp8 * 8)), !*reinterpret_cast<void***>(rbx16)))) {
                        fun_140003898(0, 0x425, r8_13, r9_17);
                        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                    }
                    rax18 = fun_14000dc58();
                    rdi19 = rax18;
                    rax10 = fun_14000dcc4(rbx16, rbx16);
                    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - 8 + 8);
                    *reinterpret_cast<void***>(rdi19 + 8) = rax10;
                    rdx = reinterpret_cast<void**>(0x140036e80);
                    rcx20 = g140036e80;
                    while (rcx20) {
                        rdx = rcx20;
                        rcx20 = *reinterpret_cast<void***>(rcx20);
                    }
                    *reinterpret_cast<void***>(rdx) = rdi19;
                    rdi5 = v3;
                } else {
                    eax21 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx11));
                    if (!(0xffdf & reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&eax21) - 88))) {
                        rbx22 = rbx11 + 2;
                        if (!*reinterpret_cast<void***>(rbx22) && ((*reinterpret_cast<uint32_t*>(&rbp8) = *reinterpret_cast<uint32_t*>(&rbp8) + 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = 0, *reinterpret_cast<uint32_t*>(&rbp8) >= r12d6) || (rbx22 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdi5) + reinterpret_cast<uint64_t>(rbp8 * 8)), !*reinterpret_cast<void***>(rbx22)))) {
                            rdx = reinterpret_cast<void**>(0x426);
                            *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                            fun_140003898(0, 0x426, r8_13, r9_23);
                            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                        }
                        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx22) == 45) || *reinterpret_cast<void***>(rbx22 + 2)) {
                            r8_13 = reinterpret_cast<void**>("w");
                            rdx = rbx22;
                            eax24 = reinterpret_cast<int32_t>(_wfopen_s(reinterpret_cast<int64_t>(rsp4) + 0x70, rdx));
                            rsp25 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                            if (eax24) {
                                r8_13 = rbx22;
                                rdx = reinterpret_cast<void**>(0x418);
                                *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                                fun_140003898(0, 0x418, r8_13, r9_26);
                                rsp25 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp25) - 8 + 8);
                            }
                            fun_14000bee0(v27, rdx, r8_13);
                            rax10 = reinterpret_cast<void**>(fclose(v28, rdx));
                            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp25) - 8 + 8 - 8 + 8);
                        } else {
                            rax29 = reinterpret_cast<int64_t>(__acrt_iob_func(1, rdx));
                            rax10 = fun_14000bee0(rax29, rdx, r8_13);
                            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - 8 + 8);
                        }
                    } else {
                        ecx30 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx11));
                        *reinterpret_cast<unsigned char*>(&rdx) = 1;
                        rax10 = fun_14000b804(*reinterpret_cast<uint16_t*>(&ecx30), 1, r8_13, r9_31);
                        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                        rbx11 = rbx11 + 2;
                        goto addr_14000b6d0_27;
                    }
                }
            }
        }
        while (1) {
            cl15 = v7;
            addr_14000b7dd_10:
            *reinterpret_cast<uint32_t*>(&rbp8) = *reinterpret_cast<uint32_t*>(&rbp8) + 1;
            if (*reinterpret_cast<uint32_t*>(&rbp8) >= r12d6) 
                break;
            addr_14000b472_3:
            *reinterpret_cast<uint32_t*>(&r13_32) = *reinterpret_cast<uint32_t*>(&rbp8);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_32) + 4) = 0;
            rsi33 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdi5) + reinterpret_cast<uint64_t>(r13_32 * 8));
            eax34 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rsi33));
            if (*reinterpret_cast<int16_t*>(&eax34) == 64) {
                rax10 = fun_1400036ec(rsi33 + 2, rdx);
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                continue;
            }
            if (!(0xfffd & reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&eax34) - 45))) {
                rbx11 = rsi33 + 2;
                rdx = reinterpret_cast<void**>("h");
                rax10 = reinterpret_cast<void**>(_wcsicmp(rbx11, "h"));
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                if (!*reinterpret_cast<int32_t*>(&rax10)) 
                    goto addr_14000b628_32;
                addr_14000b6d0_27:
                if (*reinterpret_cast<void***>(rbx11)) 
                    goto addr_14000b67b_6;
                continue;
            }
            rdx = reinterpret_cast<void**>(61);
            *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
            rax35 = reinterpret_cast<void**>(wcschr(rsi33, 61));
            rsp36 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            if (rax35) 
                goto addr_14000b4bc_35;
            rax10 = fun_14000bb94(rsi33, 61);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp36) - 8 + 8);
            if (!*reinterpret_cast<void***>(rsi33)) {
                addr_14000b603_37:
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdi5) + reinterpret_cast<uint64_t>(r13_32 * 8)) = reinterpret_cast<void**>(0);
                continue;
            } else {
                rax37 = fun_14000dc58();
                rdx = reinterpret_cast<void**>(32);
                *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                r15_38 = rax37;
                rax39 = reinterpret_cast<int64_t>(wcschr(rsi33, 32));
                rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - 8 + 8);
                if (!rax39) {
                    rax41 = fun_14000dcc4(rsi33, rsi33);
                    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp40) - 8 + 8);
                    *reinterpret_cast<void***>(r15_38 + 8) = rax41;
                } else {
                    r14_42 = reinterpret_cast<void**>(0xffffffffffffffff);
                    do {
                        ++r14_42;
                    } while (*reinterpret_cast<void***>(rsi33 + reinterpret_cast<unsigned char>(r14_42) * 2));
                    rax43 = reinterpret_cast<void**>(2 * reinterpret_cast<uint64_t>(r14_42 + 3));
                    if (__intrinsic()) 
                        goto label_43; else 
                        goto addr_14000b58f_44;
                }
            }
            addr_14000b5e1_45:
            rax10 = g1400157f8;
            rcx44 = reinterpret_cast<void**>(0x1400157f8);
            while (rax10) {
                rcx44 = rax10;
                rax10 = *reinterpret_cast<void***>(rax10);
            }
            *reinterpret_cast<void***>(rcx44) = r15_38;
            r15d9 = static_cast<int32_t>(reinterpret_cast<uint64_t>(rax10 + 32));
            goto addr_14000b603_37;
            label_43:
            rax43 = reinterpret_cast<void**>(0xffffffffffffffff);
            addr_14000b58f_44:
            rax46 = fun_140009214(rax43, __intrinsic(), 0xffffffffffffffff, r9_45);
            rbx47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14_42) + reinterpret_cast<unsigned char>(r14_42));
            r8_13 = rbx47;
            rdx = rsi33;
            *reinterpret_cast<void***>(rax46) = reinterpret_cast<void**>(34);
            fun_140010e42(rax46 + 2, rdx, r8_13, r9_48);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp40) - 8 + 8 - 8 + 8);
            *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(rbx47) + reinterpret_cast<unsigned char>(rax46) + 2) = 34;
            *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rax46 + reinterpret_cast<unsigned char>(r14_42) * 2) + 4) = 0;
            *reinterpret_cast<void***>(r15_38 + 8) = rax46;
            rdi5 = v3;
            goto addr_14000b5e1_45;
            addr_14000b4bc_35:
            if (rax35 == rsi33) {
                fun_140003898(0, 0x427, r8_13, r9_49);
                rsp36 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp36) - 8 + 8);
            }
            *reinterpret_cast<void***>(rax35) = reinterpret_cast<void**>(0);
            rax50 = reinterpret_cast<struct s6*>(rax35 + 0xfffffffffffffffe);
            rbx51 = rax35 + 2;
            while (rax50->f0 == *reinterpret_cast<void***>(&r15d9) || reinterpret_cast<int1_t>(rax50->f0 == 9)) {
                rax50 = reinterpret_cast<struct s6*>(reinterpret_cast<uint64_t>(rax50) - 2);
            }
            *reinterpret_cast<void***>(&rax50->f2) = reinterpret_cast<void**>(0);
            g1400157ed = reinterpret_cast<void**>(1);
            rax52 = reinterpret_cast<int64_t>(wcsspn(rbx51, " "));
            rcx53 = rbx51 + rax52 * 2;
            rax54 = fun_14000dcc4(rcx53, rcx53);
            rax55 = reinterpret_cast<int64_t>(wcsspn(rsi33, " "));
            rcx56 = rsi33 + rax55 * 2;
            rax57 = fun_14000dcc4(rcx56, rcx56);
            *reinterpret_cast<unsigned char*>(&r8_13) = 2;
            rdx = rax54;
            rax10 = fun_140001ac8(rax57, rdx, 2, r9_58);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp36) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
            goto addr_14000b603_37;
        }
        addr_14000b62a_55:
        if (!cl15) 
            goto addr_14000b7ed_5;
        *reinterpret_cast<uint32_t*>(&rdi5) = 100;
        *reinterpret_cast<uint32_t*>(&rbx11) = 0x67;
        do {
            *reinterpret_cast<uint32_t*>(&rcx59) = *reinterpret_cast<uint32_t*>(&rdi5);
            *reinterpret_cast<int32_t*>(&rcx59 + 4) = 0;
            fun_1400039c0(rcx59, "N", r8_13, r9_60);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            *reinterpret_cast<uint32_t*>(&rdi5) = *reinterpret_cast<uint32_t*>(&rdi5) + 1;
            *reinterpret_cast<int32_t*>(&rdi5 + 4) = 0;
        } while (*reinterpret_cast<uint32_t*>(&rdi5) < 0x67);
        do {
            if (*reinterpret_cast<uint32_t*>(&rbx11) == 0x71) {
                *reinterpret_cast<uint32_t*>(&rbx11) = 0x72;
            }
            if (*reinterpret_cast<uint32_t*>(&rbx11) == 0x79) {
                *reinterpret_cast<uint32_t*>(&rbx11) = 0x7a;
            }
            *reinterpret_cast<uint32_t*>(&rcx61) = *reinterpret_cast<uint32_t*>(&rbx11);
            *reinterpret_cast<int32_t*>(&rcx61 + 4) = 0;
            fun_1400039c0(rcx61, "N", r8_13, r9_62);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            *reinterpret_cast<uint32_t*>(&rbx11) = *reinterpret_cast<uint32_t*>(&rbx11) + 1;
            *reinterpret_cast<int32_t*>(&rbx11 + 4) = 0;
        } while (*reinterpret_cast<uint32_t*>(&rbx11) <= 0x7c);
        exit();
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        continue;
        addr_14000b628_32:
        cl15 = 1;
        goto addr_14000b62a_55;
    }
}

void** fun_140003a8c(void** rcx, ...) {
    int1_t zf2;
    void** r8_3;
    void** r9_4;
    void** r8_5;
    void** r9_6;
    void** rax7;
    int1_t zf8;
    int64_t rax9;

    zf2 = g140026488 == 0;
    if (zf2 && (g140026488 = reinterpret_cast<void**>(1), fun_1400039c0(24, "1", r8_3, r9_4), rax7 = fun_1400039c0(25, "1", r8_5, r9_6), zf8 = g140037093 == 0, zf8)) {
        rax9 = reinterpret_cast<int64_t>(__acrt_iob_func(2, "1"));
        rax7 = reinterpret_cast<void**>(fflush(rax9, "1"));
    }
    return rax7;
}

void fun_14000be7c(void** rcx, void** rdx, void** r8, void** r9) {
    fun_14000bf3c(rcx, reinterpret_cast<int64_t>(__zero_stack_offset()) + 16, r8);
    return;
}

signed char g14003ddf0;

int64_t g14003ddf8;

int64_t __p__wpgmptr = 0x14a1c;

int64_t wcsncat_s = 0x14aa6;

int32_t fun_1400092b4(void** rcx, void** rdx, void** r8);

uint16_t g14003de00;

int64_t FindResourceExW = 0x14418;

int64_t LoadResource = 0x1442a;

void** fun_14000bbec(void** ecx, void** rdx, void** r8) {
    void* rsp4;
    uint64_t rax5;
    uint64_t v6;
    int1_t zf7;
    int64_t rdi8;
    int64_t* rax9;
    void* rsp10;
    int64_t rcx11;
    void* rsp12;
    void* rsp13;
    int32_t eax14;
    int32_t eax15;
    int64_t r9_16;
    uint32_t eax17;
    void** rdx18;
    void** r8_19;
    void** rax20;
    void* rsp21;
    int64_t rax22;
    uint32_t esi23;
    uint64_t rcx24;
    void** rax25;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 0x680);
    rax5 = g140015008;
    v6 = rax5 ^ reinterpret_cast<uint64_t>(rsp4);
    zf7 = g14003ddf0 == 0;
    if (!zf7) {
        rdi8 = g14003ddf8;
    } else {
        rax9 = reinterpret_cast<int64_t*>(__p__wpgmptr());
        rsp10 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp4) - 8 + 8);
        rcx11 = *rax9;
        _wsplitpath_s(rcx11, reinterpret_cast<uint64_t>(rsp10) + 80, 3, reinterpret_cast<uint64_t>(rsp10) + 0x260);
        rsp12 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp10) - 8 + 8);
        _wmakepath_s(reinterpret_cast<uint64_t>(rsp12) + 0x460, 0x104, reinterpret_cast<uint64_t>(rsp12) + 80);
        rsp13 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp12) - 8 + 8);
        eax14 = reinterpret_cast<int32_t>(wcsncat_s(reinterpret_cast<uint64_t>(rsp13) + 96, 0x100, "U"));
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp13) - 8 + 8);
        if (!eax14) {
            eax15 = fun_1400092b4(reinterpret_cast<uint64_t>(rsp4) + 0x460, reinterpret_cast<uint64_t>(rsp4) + 96, "U");
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp4) - 8 + 8);
            rdi8 = g14003ddf8;
            if (eax15 < 0) {
                rdi8 = 0;
            }
            g14003ddf8 = rdi8;
        } else {
            *reinterpret_cast<int32_t*>(&rdi8) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            g14003ddf8 = 0;
        }
        g14003ddf0 = 1;
    }
    *reinterpret_cast<uint32_t*>(&r9_16) = g14003de00;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_16) + 4) = 0;
    eax17 = reinterpret_cast<unsigned char>(ecx) >> 4;
    *reinterpret_cast<int32_t*>(&rdx18) = 6;
    *reinterpret_cast<int32_t*>(&rdx18 + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r8_19) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&eax17) + 1);
    *reinterpret_cast<int32_t*>(&r8_19 + 4) = 0;
    rax20 = reinterpret_cast<void**>(FindResourceExW(rdi8, 6, r8_19, r9_16));
    rsp21 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp4) - 8 + 8);
    if (rax20 && (rdx18 = rax20, rax22 = reinterpret_cast<int64_t>(LoadResource(rdi8, rdx18, r8_19, r9_16)), rsp21 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp21) - 8 + 8), !!rax22)) {
        esi23 = reinterpret_cast<unsigned char>(ecx) & 15;
        if (esi23) {
            do {
                --esi23;
            } while (esi23);
        }
    }
    rcx24 = v6 ^ reinterpret_cast<uint64_t>(rsp21);
    rax25 = fun_140010130(rcx24, rdx18, r8_19, rcx24, rdx18, r8_19);
    return rax25;
}

uint64_t* fun_14000bd80(void** rcx);

int64_t __stdio_common_vfwprintf = 0x14be4;

int64_t __conio_common_vcwprintf = 0x14bc8;

void fun_14000bf3c(void** rcx, void** rdx, void** r8) {
    int1_t zf4;
    int64_t rax5;
    uint64_t* rax6;
    uint64_t rcx7;
    uint64_t* rax8;
    uint64_t rcx9;

    zf4 = g140037093 == 0;
    if (zf4) {
        rax5 = reinterpret_cast<int64_t>(__acrt_iob_func(2));
        rax6 = fun_14000bd80(2);
        rcx7 = *rax6;
        __stdio_common_vfwprintf(rcx7, rax5, rcx);
    } else {
        rax8 = fun_14000bd80(rcx);
        rcx9 = *rax8;
        __conio_common_vcwprintf(rcx9, rcx);
    }
    return;
}

int64_t fputwc = 0x14bbe;

int64_t _putwch = 0x14bb4;

void** fun_14000bea4(void** rcx, void** rdx, void** r8) {
    int1_t zf4;
    int64_t rax5;
    uint16_t ax6;
    void** rax7;

    zf4 = g140037093 == 0;
    if (zf4) {
        rax5 = reinterpret_cast<int64_t>(__acrt_iob_func(2));
        ax6 = reinterpret_cast<uint16_t>(fputwc(10, rax5));
    } else {
        ax6 = reinterpret_cast<uint16_t>(_putwch(10));
    }
    *reinterpret_cast<uint32_t*>(&rax7) = ax6;
    *reinterpret_cast<int32_t*>(&rax7 + 4) = 0;
    return rax7;
}

int64_t _fcloseall = 0x14b8a;

void** g140036e88;

int64_t _wunlink = 0x14b7e;

void fun_14000bfe0(void** rcx, void** rdx, void** r8, void** r9, ...);

void** fun_14000bb48(void** rcx, void** rdx, void** r8, void** r9) {
    void** rax5;
    void** rbx6;
    void** rcx7;
    int1_t zf8;

    rax5 = reinterpret_cast<void**>(_fcloseall());
    rbx6 = g140036e88;
    while (rbx6) {
        rcx7 = *reinterpret_cast<void***>(rbx6 + 8);
        rax5 = reinterpret_cast<void**>(_wunlink(rcx7, rdx));
        zf8 = (reinterpret_cast<unsigned char>(g1400157ee) & 4) == 0;
        if (!zf8) {
            rdx = *reinterpret_cast<void***>(rbx6 + 8);
            fun_14000bfe0("\t", rdx, r8, r9);
            rax5 = fun_14000bfb0("\t", rdx);
        }
        rbx6 = *reinterpret_cast<void***>(rbx6);
    }
    return rax5;
}

signed char g1400370b0;

void** fun_14000c008(void** rcx, void** rdx) {
    int1_t zf3;
    int64_t rax4;
    uint16_t ax5;
    void** rax6;

    zf3 = g1400370b0 == 0;
    if (zf3) {
        rax4 = reinterpret_cast<int64_t>(__acrt_iob_func(1));
        ax5 = reinterpret_cast<uint16_t>(fputwc(10, rax4));
    } else {
        ax5 = reinterpret_cast<uint16_t>(_putwch(10));
    }
    *reinterpret_cast<uint32_t*>(&rax6) = ax5;
    *reinterpret_cast<int32_t*>(&rax6 + 4) = 0;
    return rax6;
}

void fun_14000c044(void** rcx, void** rdx) {
    int1_t zf3;
    int64_t rax4;
    uint64_t* rax5;
    uint64_t rcx6;
    uint64_t* rax7;
    uint64_t rcx8;

    zf3 = g1400370b0 == 0;
    if (zf3) {
        rax4 = reinterpret_cast<int64_t>(__acrt_iob_func(1));
        rax5 = fun_14000bd80(1);
        rcx6 = *rax5;
        __stdio_common_vfwprintf(rcx6, rax4, rcx);
    } else {
        rax7 = fun_14000bd80(rcx);
        rcx8 = *rax7;
        __conio_common_vcwprintf(rcx8, rcx);
    }
    return;
}

void** fun_14000bfb0(void** rcx, void** rdx, ...) {
    int1_t zf3;

    zf3 = g1400370b0 == 0;
    if (zf3) {
        __acrt_iob_func(1);
        goto fflush;
    } else {
        return 0;
    }
}

struct s7 {
    int16_t f0;
    void** f2;
};

void** fun_140006dac(void*** rcx, void** rdx, void** r8, void** r9);

void** fun_14000fd2c(void** rcx, void** rdx, void** r8, void** r9);

struct s8 {
    signed char[2] pad2;
    void** f2;
    signed char[1] pad4;
    void** f4;
};

int64_t memmove = 0x147e8;

int64_t _wgetenv_s = 0x148a8;

int64_t GetTempFileNameW = 0x14510;

int64_t _wfsopen = 0x148f2;

void** fun_140007294(void*** rcx, void*** rdx, void** r8, void** r9);

void fun_1400073bc(void** rcx, void** rdx, void** r8, void** r9);

struct s9 {
    signed char[2] pad2;
    void** f2;
};

void** fun_14001025c(void** rcx, void** rdx, void** r8, void** r9, ...);

void** g140015041 = reinterpret_cast<void**>(1);

void** fun_14000613c();

void** g140026480;

int64_t getwc = 0x14a62;

void** g140026489;

int64_t ungetwc = 0x14a6a;

signed char fun_1400077d0(void** rcx, void*** rdx, void** r8, void** r9) {
    void* rsp5;
    void* rbp6;
    void* rsp7;
    uint64_t rax8;
    uint64_t v9;
    void*** rsi10;
    signed char v11;
    void** rdx12;
    struct s7* rax13;
    void* rsp14;
    void** rax15;
    void* rsp16;
    void** r14_17;
    void** rax18;
    void** rax19;
    void* rsp20;
    void** v21;
    void** r13_22;
    void** rax23;
    void* rsp24;
    void** rax25;
    void* rsp26;
    void** r12_27;
    void** rax28;
    void* rsp29;
    void** r15_30;
    void** rcx31;
    struct s8* rax32;
    void*** rdx33;
    uint64_t r8_34;
    void* rsp35;
    void** rcx36;
    int32_t eax37;
    void* rsp38;
    void** r8_39;
    int32_t eax40;
    void* rsp41;
    void* rsp42;
    void** rax43;
    void** rcx44;
    int64_t rax45;
    void* rsp46;
    int64_t rax47;
    int16_t* rcx48;
    void* rdi49;
    void** rbx50;
    void** rdx51;
    void** rcx52;
    void* rdi53;
    void*** rdx54;
    void* rsp55;
    void** rcx56;
    void** rax57;
    void** rbx58;
    struct s9* rax59;
    void* rsp60;
    uint64_t rax61;
    void** rax62;
    void* rsp63;
    void** rax64;
    void** rbx65;
    void** rax66;
    void** rcx67;
    void* rsp68;
    void** rax69;
    uint64_t rcx70;
    void** rax71;
    void* bl72;
    void** ax73;
    void** rcx74;
    void** ax75;
    void** rcx76;
    int1_t zf77;
    int64_t v78;
    void** rdx79;
    int64_t rcx80;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8);
    rbp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 0x380);
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 0x480);
    rax8 = g140015008;
    v9 = rax8 ^ reinterpret_cast<uint64_t>(rsp7);
    rsi10 = rdx;
    v11 = *reinterpret_cast<signed char*>(&r9);
    *reinterpret_cast<int32_t*>(&rdx12) = 10;
    *reinterpret_cast<int32_t*>(&rdx12 + 4) = 0;
    rax13 = reinterpret_cast<struct s7*>(wcschr());
    rsp14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
    if (rax13) {
        rax13->f0 = 0;
        rax15 = fun_14000e740(rcx, -1, r8);
        rsp16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp14) - 8 + 8);
        *rsi10 = rax15;
        rax13->f0 = 10;
        r14_17 = reinterpret_cast<void**>(&rax13->f2);
        if (*rsi10 == rcx) {
            rax18 = fun_14000dcc4(rcx, rcx);
            rsp16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp16) - 8 + 8);
            *rsi10 = rax18;
        }
        r8 = r8;
        *reinterpret_cast<signed char*>(&rdx12) = -1;
        rax19 = fun_14000e740(r14_17, -1, r8);
        rsp20 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp16) - 8 + 8);
        v21 = rax19;
        r13_22 = rax19;
        rax23 = fun_140006dac(reinterpret_cast<uint64_t>(rsp20) + 64, 0xff, r8, r9);
        rsp24 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp20) - 8 + 8);
        while (rax23) {
            rax25 = fun_14000dcc4(rax23, rax23);
            rsp26 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp24) - 8 + 8);
            r12_27 = rax25;
            if (*reinterpret_cast<void***>(rax25)) {
                rax28 = fun_14000fd2c(rax25, "w", r8, r9);
                rsp29 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp26) - 8 + 8);
                r15_30 = rax28;
                if (rax28) {
                    rcx31 = *rsi10;
                    do {
                        rax32 = reinterpret_cast<struct s8*>(wcschr(rcx31, 60));
                        rsp29 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp29) - 8 + 8);
                        rcx31 = reinterpret_cast<void**>(&rax32->f2);
                    } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rcx31) == 60));
                    rdx33 = &rax32->f4;
                    r8_34 = 0xffffffffffffffff;
                    do {
                        ++r8_34;
                    } while (rdx33[r8_34 * 2]);
                    memmove(rax32);
                    rsp35 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp29) - 8 + 8);
                } else {
                    *reinterpret_cast<uint32_t*>(&rcx36) = g140025c20;
                    *reinterpret_cast<int32_t*>(&rcx36 + 4) = 0;
                    fun_140003898(rcx36, 0x41e, r12_27, r9, rcx36, 0x41e, r12_27, r9);
                    rsp35 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp29) - 8 + 8);
                }
            } else {
                eax37 = reinterpret_cast<int32_t>(_wgetenv_s(reinterpret_cast<uint64_t>(rsp26) + 72, reinterpret_cast<uint64_t>(rsp26) + 80, 0x103, "T"));
                rsp38 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp26) - 8 + 8);
                if (eax37 || !0) {
                    wcscpy_s(reinterpret_cast<uint64_t>(rsp38) + 80, 0x103, ".", "T");
                    rsp38 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp38) - 8 + 8);
                }
                r9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp6) + 0x160);
                *reinterpret_cast<int32_t*>(&r8_39) = 0;
                *reinterpret_cast<int32_t*>(&r8_39 + 4) = 0;
                r15_30 = reinterpret_cast<void**>(0);
                eax40 = reinterpret_cast<int32_t>(GetTempFileNameW(reinterpret_cast<uint64_t>(rsp38) + 80, "n"));
                rsp41 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp38) - 8 + 8);
                if (eax40) {
                    wcscpy_s(reinterpret_cast<uint64_t>(rsp41) + 80, 0x103, reinterpret_cast<int64_t>(rbp6) + 0x160, r9);
                    rsp42 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp41) - 8 + 8);
                    *reinterpret_cast<int32_t*>(&r8_39) = 32;
                    *reinterpret_cast<int32_t*>(&r8_39 + 4) = 0;
                    rax43 = reinterpret_cast<void**>(_wfsopen(reinterpret_cast<uint64_t>(rsp42) + 80, "w", 32, r9));
                    rsp41 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp42) - 8 + 8);
                    r15_30 = rax43;
                }
                if (!r15_30) {
                    *reinterpret_cast<uint32_t*>(&rcx44) = g140025c20;
                    *reinterpret_cast<int32_t*>(&rcx44 + 4) = 0;
                    r8_39 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp41) + 80);
                    fun_140003898(rcx44, 0x41e, r8_39, r9, rcx44, 0x41e, r8_39, r9);
                    rsp41 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp41) - 8 + 8);
                }
                rax45 = reinterpret_cast<int64_t>(wcschr(reinterpret_cast<uint64_t>(rsp41) + 80, 32, r8_39, r9));
                rsp46 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp41) - 8 + 8);
                if (rax45 && (rax47 = reinterpret_cast<int64_t>(wcschr(reinterpret_cast<uint64_t>(rsp46) + 80, 34, r8_39, r9)), rsp46 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp46) - 8 + 8), !rax47)) {
                    rcx48 = reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rsp46) + 80);
                    rdi49 = reinterpret_cast<void*>(0xffffffffffffffff);
                    do {
                        rdi49 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdi49) + 1);
                    } while (rcx48[static_cast<uint64_t>(rdi49)] != *reinterpret_cast<int16_t*>(&rax47));
                    rbx50 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rdi49) + reinterpret_cast<uint64_t>(rdi49));
                    r8_39 = rbx50;
                    rdx51 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp46) + 80);
                    rcx52 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp46) + 82);
                    memmove();
                    rsp46 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp46) - 8 + 8);
                    rdi53 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdi49) * 2 + 4);
                    *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rsp46) + reinterpret_cast<unsigned char>(rbx50) + 82) = 34;
                    if (reinterpret_cast<uint64_t>(rdi53) >= 0x206) 
                        goto addr_140007b5c_24;
                    *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rsp46) + reinterpret_cast<uint64_t>(rdi53) + 80) = 0;
                }
                rdx54 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsp46) + 80);
                fun_140007294(rsi10, rdx54, r8_39, r9);
                free(r12_27, rdx54, r8_39, r9);
                rsp55 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp46) - 8 + 8 - 8 + 8);
                rcx56 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp55) + 80);
                rax57 = fun_14000dcc4(rcx56, rcx56);
                rsp35 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp55) - 8 + 8);
                r12_27 = rax57;
            }
            r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp35) + 56);
            *reinterpret_cast<signed char*>(&r9) = v11;
            fun_1400073bc(r15_30, r12_27, r8, r9);
            rbx58 = v21;
            *reinterpret_cast<int32_t*>(&rdx12) = 10;
            *reinterpret_cast<int32_t*>(&rdx12 + 4) = 0;
            rax59 = reinterpret_cast<struct s9*>(wcschr(rbx58, 10));
            rsp60 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp35) - 8 + 8 - 8 + 8);
            if (!rax59) {
                rax61 = 0xffffffffffffffff;
                do {
                    ++rax61;
                } while (*reinterpret_cast<void***>(rbx58 + rax61 * 2));
                rax62 = rbx58 + rax61 * 2;
            } else {
                rax62 = reinterpret_cast<void**>(&rax59->f2);
            }
            v21 = rax62;
            fclose(r15_30, 10);
            rsp63 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp60) - 8 + 8);
            if (!0) {
                rax64 = fun_14000dc58();
                rbx65 = rax64;
                rax66 = fun_14000dcc4(r12_27, r12_27);
                rsp63 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp63) - 8 + 8 - 8 + 8);
                *reinterpret_cast<void***>(rbx65 + 8) = rax66;
                rdx12 = reinterpret_cast<void**>(0x140036e88);
                rcx67 = g140036e88;
                while (rcx67) {
                    rdx12 = rcx67;
                    rcx67 = *reinterpret_cast<void***>(rcx67);
                }
                *reinterpret_cast<void***>(rdx12) = rbx65;
            }
            free(r12_27, rdx12);
            rsp68 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp63) - 8 + 8);
            rax23 = fun_140006dac(reinterpret_cast<uint64_t>(rsp68) + 64, rdx12, r8, r9);
            rsp24 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp68) - 8 + 8);
        }
    } else {
        rax69 = fun_14000dcc4(rcx, rcx);
        rsp24 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp14) - 8 + 8);
        *rsi10 = rax69;
        goto addr_140007b32_39;
    }
    if (r13_22 != r14_17) {
        free(r13_22, rdx12);
        rsp24 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp24) - 8 + 8);
    }
    addr_140007b32_39:
    rcx70 = v9 ^ reinterpret_cast<uint64_t>(rsp24);
    rax71 = fun_140010130(rcx70, rdx12, r8, rcx70, rdx12, r8);
    return *reinterpret_cast<signed char*>(&rax71);
    addr_140007b5c_24:
    fun_14001025c(rcx52, rdx51, r8_39, r9, rcx52, rdx51, r8_39, r9);
    bl72 = *reinterpret_cast<void**>(&rcx52);
    while (1) {
        g140015041 = reinterpret_cast<void**>(0);
        do {
            if (!bl72) {
                ax73 = fun_14000613c();
            } else {
                rcx74 = g140026480;
                ax73 = reinterpret_cast<void**>(getwc(rcx74, rdx51, r8_39, r9));
            }
            if (ax73 == 0xffff) 
                goto addr_140007be7_49;
        } while (!reinterpret_cast<int1_t>(ax73 == 10));
        g140015041 = reinterpret_cast<void**>(1);
        if (!bl72) {
            ax75 = fun_14000613c();
        } else {
            rcx76 = g140026480;
            ax75 = reinterpret_cast<void**>(getwc(rcx76, rdx51, r8_39, r9));
        }
        if (!reinterpret_cast<int1_t>(ax75 == 59)) 
            goto addr_140007bc9_55;
        zf77 = g140026489 == 0;
        if (!zf77) 
            goto addr_140007bcf_57;
        addr_140007bc9_55:
        if (!reinterpret_cast<int1_t>(ax75 == 35)) 
            goto addr_140007bd7_58;
        addr_140007bcf_57:
        ++g140025c20;
    }
    addr_140007be7_49:
    goto v78;
    addr_140007bd7_58:
    rdx79 = g140026480;
    *reinterpret_cast<uint32_t*>(&rcx80) = reinterpret_cast<uint16_t>(ax75);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx80) + 4) = 0;
    ungetwc(rcx80, rdx79, r8_39, r9);
    goto addr_140007be7_49;
}

signed char fun_1400059e0(void** rcx, void** rdx, void** r8b, unsigned char r9b) {
    unsigned char v5;
    void** v6;
    void** v7;
    void** v8;
    unsigned char al9;
    void** r15b10;
    uint32_t esi11;
    void** rdi12;
    void** rbx13;
    void** v14;
    uint32_t* r13_15;
    uint32_t* v16;
    unsigned char dil17;
    unsigned char bpl18;
    unsigned char r14b19;
    unsigned char r12b20;
    void** rax21;
    void** rbx22;
    void** rax23;
    void** r9_24;
    void** v25;
    void** r8_26;
    void** rdx27;
    signed char al28;
    uint32_t eax29;
    int1_t below_or_equal30;
    int1_t zf31;
    void** v32;
    void** rax33;
    int1_t zf34;
    int1_t below_or_equal35;
    signed char al36;
    unsigned char al37;
    void** rcx38;
    int64_t rdx39;
    int64_t rax40;
    int64_t rdx41;
    int64_t rax42;

    v5 = r9b;
    v6 = r8b;
    v7 = rdx;
    v8 = rcx;
    al9 = r9b;
    r15b10 = r8b;
    esi11 = 0;
    *reinterpret_cast<int32_t*>(&rdi12) = 0;
    *reinterpret_cast<int32_t*>(&rdi12 + 4) = 0;
    rbx13 = rcx;
    v14 = reinterpret_cast<void**>(0);
    if (!*reinterpret_cast<void***>(rcx)) {
        addr_140005aed_2:
        if (*reinterpret_cast<void***>(rbx13)) {
            if (rdi12) {
                r13_15 = v16;
                dil17 = v5;
                bpl18 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r15b10) & 4);
                r14b19 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al9 >> 1) & 1);
                r12b20 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r15b10) & 2);
                do {
                    g140025c48 = v7;
                    rax21 = g140026450;
                    if (*reinterpret_cast<void***>(&esi11) != 42) {
                        rax21 = g140026468;
                    }
                    rbx22 = *reinterpret_cast<void***>(rax21);
                    *reinterpret_cast<void***>(rax21) = reinterpret_cast<void**>(0);
                    rax23 = fun_14000e740(rcx, -1, 0x140025c48, rcx, -1, 0x140025c48);
                    r9_24 = v25;
                    r8_26 = rax23;
                    rdx27 = reinterpret_cast<void**>(0x8000);
                    *reinterpret_cast<int32_t*>(&rdx27 + 4) = 0;
                    al28 = fun_14000f778(0x1400264a0, 0x8000, r8_26, r9_24);
                    if (al28) {
                        r8_26 = rax23;
                        rdx27 = reinterpret_cast<void**>(0x447);
                        *reinterpret_cast<int32_t*>(&rdx27 + 4) = 0;
                        fun_140003898(0, 0x447, r8_26, r9_24, 0, 0x447, r8_26, r9_24);
                    }
                    if (!bpl18 || dil17 & 8) {
                        *reinterpret_cast<signed char*>(&r8_26) = 1;
                    } else {
                        *reinterpret_cast<int32_t*>(&r8_26) = 0;
                        *reinterpret_cast<int32_t*>(&r8_26 + 4) = 0;
                    }
                    if (bpl18 || !(reinterpret_cast<unsigned char>(v6) & 8) && !(dil17 & 1)) {
                        *reinterpret_cast<signed char*>(&rdx27) = 1;
                    } else {
                        rdx27 = reinterpret_cast<void**>(0);
                        *reinterpret_cast<int32_t*>(&rdx27 + 4) = 0;
                    }
                    *reinterpret_cast<unsigned char*>(&r9_24) = r14b19;
                    eax29 = fun_140005114(0x1400264a0, *reinterpret_cast<signed char*>(&rdx27), *reinterpret_cast<signed char*>(&r8_26), r9_24);
                    *r13_15 = eax29;
                    if (!r12b20 && (eax29 && ((below_or_equal30 = eax29 <= g14002648c, !below_or_equal30) && (zf31 = g140025c3b == r12b20, zf31)))) {
                        r8_26 = v32;
                        *reinterpret_cast<uint32_t*>(&r9_24) = eax29;
                        *reinterpret_cast<int32_t*>(&r9_24 + 4) = 0;
                        rdx27 = reinterpret_cast<void**>(0x435);
                        *reinterpret_cast<int32_t*>(&rdx27 + 4) = 0;
                        fun_140003898(0, 0x435, r8_26, r9_24, 0, 0x435, r8_26, r9_24);
                    }
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&esi11) == 42)) {
                        rax33 = g140026468;
                        g140026468 = rbx22;
                    } else {
                        rax33 = g140026450;
                        g140026450 = rbx22;
                    }
                    *reinterpret_cast<void***>(rax33) = rbx22;
                    free(rax23, rdx27, r8_26, r9_24);
                } while ((r12b20 || ((zf34 = g140025c3b == 0, zf34) || (!*r13_15 || (below_or_equal35 = *r13_15 <= g14002648c, below_or_equal35)))) && (rcx = v8, !!rbx22));
                rdi12 = v14;
            }
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&esi11) == 42)) {
                g140026468 = rdi12;
            } else {
                g140026450 = rdi12;
            }
            al36 = 1;
        } else {
            al36 = 0;
        }
    } else {
        while (1) {
            al37 = 0;
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx13) == 36)) {
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx13 + 2) == 40)) {
                    rbx13 = rbx13 + 2;
                    al37 = 1;
                }
                rcx38 = rbx13 + 2;
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rcx38) == 63)) {
                    rbx13 = rcx38;
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rcx38) == 42)) 
                        goto addr_140005ac0_33;
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rcx38 + 2) == 42)) 
                        goto addr_140005ac0_33;
                    if (!al37) 
                        goto addr_140005ace_36;
                    *reinterpret_cast<uint32_t*>(&rdx39) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx38 + 4));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx39) + 4) = 0;
                    rax40 = reinterpret_cast<int64_t>(wcschr("D", rdx39));
                    if (!rax40) 
                        goto addr_140005aba_38;
                    if (*reinterpret_cast<void***>(rbx13 + 6) == 41) 
                        goto addr_140005ace_36;
                    addr_140005aba_38:
                    if (*reinterpret_cast<void***>(rbx13 + 4) == 41) 
                        goto addr_140005ace_36;
                } else {
                    if (!al37) 
                        goto addr_140005a7c_41;
                    *reinterpret_cast<uint32_t*>(&rdx41) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx13 + 4));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx41) + 4) = 0;
                    rax42 = reinterpret_cast<int64_t>(wcschr("D", rdx41));
                    if (!rax42) 
                        goto addr_140005a76_43;
                    if (*reinterpret_cast<void***>(rbx13 + 6) == 41) 
                        goto addr_140005a7c_41;
                    addr_140005a76_43:
                    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx13 + 4) == 41)) 
                        goto addr_140005a7c_41;
                }
            }
            addr_140005ac0_33:
            rbx13 = rbx13 + 2;
            if (!*reinterpret_cast<void***>(rbx13)) 
                goto addr_140005ade_45;
        }
    }
    return al36;
    addr_140005ade_45:
    al9 = v5;
    rcx = v8;
    goto addr_140005aed_2;
    addr_140005ace_36:
    rdi12 = g140026450;
    esi11 = 42;
    addr_140005ad9_48:
    v14 = rdi12;
    goto addr_140005ade_45;
    addr_140005a7c_41:
    rdi12 = g140026468;
    esi11 = 63;
    goto addr_140005ad9_48;
}

signed char fun_14000f778(void** rcx, void** rdx, void** r8, void** r9) {
    void* rsp5;
    uint64_t rax6;
    uint64_t v7;
    uint32_t eax8;
    void** r12_9;
    void** r13_10;
    void** rdi11;
    void** rbx12;
    void** rax13;
    void** rax14;
    uint32_t ecx15;
    signed char r15b16;
    signed char r14b17;
    signed char bpl18;
    signed char sil19;
    void** rcx20;
    uint32_t eax21;
    void* rcx22;
    uint32_t eax23;
    uint64_t rcx24;
    void** rax25;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0x270);
    rax6 = g140015008;
    v7 = rax6 ^ reinterpret_cast<uint64_t>(rsp5);
    eax8 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r8));
    r12_9 = rcx + reinterpret_cast<unsigned char>(rdx) * 2;
    r13_10 = r9;
    rdi11 = r8;
    rbx12 = rcx;
    if (*reinterpret_cast<void***>(&eax8)) {
        while (reinterpret_cast<unsigned char>(rbx12) < reinterpret_cast<unsigned char>(r12_9)) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax8) == 37)) {
                addr_14000f810_5:
                *reinterpret_cast<void***>(rbx12) = *reinterpret_cast<void***>(&eax8);
            } else {
                rdi11 = rdi11 + 2;
                *reinterpret_cast<uint32_t*>(&rax13) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi11));
                if (!*reinterpret_cast<uint32_t*>(&rax13)) {
                    rdi11 = rdi11 - 2;
                    goto addr_14000fa05_8;
                }
                if (*reinterpret_cast<uint32_t*>(&rax13) == 37) 
                    goto addr_14000fa66_10; else 
                    goto addr_14000f7ef_11;
            }
            addr_14000f813_12:
            rbx12 = rbx12 + 2;
            goto addr_14000fa05_8;
            addr_14000fa66_10:
            *reinterpret_cast<void***>(rbx12) = reinterpret_cast<void**>(37);
            goto addr_14000f813_12;
            addr_14000f7ef_11:
            if (*reinterpret_cast<uint32_t*>(&rax13) == 0x73) {
                if (!r13_10) {
                    addr_14000fa05_8:
                    rdi11 = rdi11 + 2;
                    eax8 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi11));
                    if (*reinterpret_cast<void***>(&eax8)) 
                        continue; else 
                        goto addr_14000fa15_14;
                } else {
                    rax14 = r13_10;
                    do {
                        ecx15 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax14));
                        if (!*reinterpret_cast<void***>(&ecx15)) 
                            break;
                        if (reinterpret_cast<unsigned char>(rbx12) >= reinterpret_cast<unsigned char>(r12_9)) 
                            break;
                        *reinterpret_cast<void***>(rbx12) = *reinterpret_cast<void***>(&ecx15);
                        rbx12 = rbx12 + 2;
                        rax14 = rax14 + 2;
                    } while (rax14);
                    goto addr_14000fa64_19;
                }
            } else {
                if (*reinterpret_cast<uint32_t*>(&rax13) == 0x7c) {
                    rdx = rdi11 + 0xfffffffffffffffe;
                    r15b16 = 0;
                    r14b17 = 0;
                    bpl18 = 0;
                    sil19 = 0;
                    do {
                        rdi11 = rdi11 + 2;
                        *reinterpret_cast<uint32_t*>(&r8) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi11));
                        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                        if (!*reinterpret_cast<uint32_t*>(&r8)) 
                            goto addr_14000fa22_23;
                        *reinterpret_cast<uint32_t*>(&rcx20) = *reinterpret_cast<uint32_t*>(&r8) - 70;
                        if (!*reinterpret_cast<uint32_t*>(&rcx20)) {
                            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi11 + 0xfffffffffffffffe) == 0x7c)) {
                                sil19 = 1;
                                bpl18 = 1;
                                r14b17 = 1;
                                r15b16 = 1;
                            }
                        } else {
                            *reinterpret_cast<uint32_t*>(&rcx20) = *reinterpret_cast<uint32_t*>(&rcx20) - 30;
                            if (!*reinterpret_cast<uint32_t*>(&rcx20)) {
                                sil19 = 1;
                            } else {
                                *reinterpret_cast<uint32_t*>(&rcx20) = *reinterpret_cast<uint32_t*>(&rcx20) - 1;
                                if (!*reinterpret_cast<uint32_t*>(&rcx20)) {
                                    r15b16 = 1;
                                } else {
                                    *reinterpret_cast<uint32_t*>(&rcx20) = *reinterpret_cast<uint32_t*>(&rcx20) - 1;
                                    if (!*reinterpret_cast<uint32_t*>(&rcx20)) {
                                        r14b17 = 1;
                                    } else {
                                        if (*reinterpret_cast<uint32_t*>(&rcx20) != 10) 
                                            goto addr_14000fa3b_34;
                                        bpl18 = 1;
                                    }
                                }
                            }
                        }
                    } while (*reinterpret_cast<int16_t*>(&r8) != 70);
                    goto addr_14000f890_37;
                } else {
                    *reinterpret_cast<void***>(rbx12) = reinterpret_cast<void**>(37);
                    rbx12 = rbx12 + 2;
                    if (rbx12 == r12_9) 
                        break;
                    eax8 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi11));
                    goto addr_14000f810_5;
                }
            }
            addr_14000fa00_40:
            goto addr_14000fa05_8;
            addr_14000fa64_19:
            goto addr_14000fa00_40;
            addr_14000fa22_23:
            rdi11 = rdi11 - 2;
            addr_14000fa3b_34:
            while (reinterpret_cast<unsigned char>(rdx) <= reinterpret_cast<unsigned char>(rdi11)) {
                if (reinterpret_cast<unsigned char>(rbx12) >= reinterpret_cast<unsigned char>(r12_9)) 
                    goto addr_14000fa00_40;
                eax21 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdx));
                *reinterpret_cast<void***>(rbx12) = *reinterpret_cast<void***>(&eax21);
                rbx12 = rbx12 + 2;
                rdx = rdx + 2;
            }
            goto addr_14000fa00_40;
            addr_14000f890_37:
            if (!r13_10) {
                rdx = reinterpret_cast<void**>(0x449);
                *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                fun_140003898(0, 0x449, r8, 0x7c, 0, 0x449, r8, 0x7c);
                rsp5 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
            }
            if (sil19) {
                rdx = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp5) + 80);
                *reinterpret_cast<uint32_t*>(&r8) = 0x104;
                *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                _wsplitpath_s();
                rsp5 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
            }
            if (bpl18) {
                do {
                } while (0);
                *reinterpret_cast<uint32_t*>(&r8) = 0;
                *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                rdx = reinterpret_cast<void**>(0);
                *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                _wsplitpath_s(r13_10);
                rsp5 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
            }
            if (r14b17) {
                do {
                } while (0);
                *reinterpret_cast<uint32_t*>(&r8) = 0;
                *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                rdx = reinterpret_cast<void**>(0);
                *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                _wsplitpath_s(r13_10);
                rsp5 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
            }
            if (r15b16) {
                do {
                } while (0);
                *reinterpret_cast<uint32_t*>(&r8) = 0;
                *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                rdx = reinterpret_cast<void**>(0);
                *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                _wsplitpath_s(r13_10);
                rsp5 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
            }
            if (!1) {
                rcx22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) + 80 - reinterpret_cast<unsigned char>(rbx12));
                do {
                    if (reinterpret_cast<unsigned char>(rbx12) >= reinterpret_cast<unsigned char>(r12_9)) 
                        break;
                    eax23 = *reinterpret_cast<uint16_t*>(reinterpret_cast<uint64_t>(rcx22) + reinterpret_cast<unsigned char>(rbx12));
                    *reinterpret_cast<void***>(rbx12) = *reinterpret_cast<void***>(&eax23);
                    rbx12 = rbx12 + 2;
                } while (*reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rcx22) + reinterpret_cast<unsigned char>(rbx12)));
            }
            goto addr_14000fa00_40;
        }
        goto addr_14000fa74_64;
    }
    addr_14000fa15_14:
    if (reinterpret_cast<unsigned char>(rbx12) >= reinterpret_cast<unsigned char>(r12_9)) {
        addr_14000fa74_64:
    } else {
        *reinterpret_cast<void***>(rbx12) = reinterpret_cast<void**>(0);
    }
    rcx24 = v7 ^ reinterpret_cast<uint64_t>(rsp5);
    rax25 = fun_140010130(rcx24, rdx, r8, rcx24, rdx, r8);
    return *reinterpret_cast<signed char*>(&rax25);
}

struct s10 {
    signed char[1] pad1;
    void** f1;
};

void** fun_14000fd90(void** rcx, void** rdx, void** r8, void** r9);

void** fun_14000dd24(void** rcx, void** rdx, void** r8, void** r9) {
    void** rax5;
    void** rsi6;
    void** r8_7;
    struct s10* rdi8;
    void** rax9;

    rax5 = reinterpret_cast<void**>(0xffffffffffffffff);
    rsi6 = rdx;
    r8_7 = reinterpret_cast<void**>(0xffffffffffffffff);
    do {
        ++r8_7;
    } while (*reinterpret_cast<void***>(rcx + reinterpret_cast<unsigned char>(r8_7) * 2));
    do {
        ++rax5;
    } while (*reinterpret_cast<void***>(rdx + reinterpret_cast<unsigned char>(rax5) * 2));
    rdi8 = reinterpret_cast<struct s10*>(reinterpret_cast<unsigned char>(r8_7) + reinterpret_cast<unsigned char>(rax5));
    rax9 = fun_14000fd90(rcx, &rdi8->f1, r8_7, r9);
    wcscat_s(rax9, &rdi8->f1, rsi6);
    return rax9;
}

struct s11 {
    signed char[32] pad32;
    void** f20;
};

struct s12 {
    uint16_t f0;
    uint16_t f2;
};

struct s13 {
    signed char[32] pad32;
    void** f20;
    signed char[15] pad48;
    void** f30;
};

int64_t _wdupenv_s = 0x1494e;

struct s14 {
    void** f0;
    signed char[1] pad2;
    void** f2;
};

void** fun_140004288(void** rcx, int64_t rdx) {
    void* rbp3;
    uint64_t rax4;
    struct s11* rsp5;
    uint64_t rax6;
    uint64_t v7;
    void** r8_8;
    int64_t* rsp9;
    void* rsp10;
    struct s12* rbx11;
    void*** rdi12;
    void** rdx13;
    int64_t* rsp14;
    int64_t rax15;
    struct s13* rsp16;
    uint32_t eax17;
    uint64_t rsi18;
    int64_t* rsp19;
    void*** rax20;
    int64_t* rsp21;
    void** rcx22;
    uint32_t eax23;
    uint32_t eax24;
    int64_t* rsp25;
    uint64_t rax26;
    void** rcx27;
    void*** r14_28;
    uint64_t rdi29;
    int64_t* rsp30;
    struct s14* rdi31;
    void*** r14_32;
    int64_t* rsp33;
    struct s13* rsp34;
    void** rcx35;
    int64_t* rsp36;
    void** rcx37;
    uint64_t rax38;
    void*** rbx39;
    int64_t* rsp40;

    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 0x10168);
    rax4 = fun_140010df0();
    rsp5 = reinterpret_cast<struct s11*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 + 8 - rax4);
    rax6 = g140015008;
    v7 = rax6 ^ reinterpret_cast<uint64_t>(rsp5);
    r8_8 = reinterpret_cast<void**>("s");
    rsp5->f20 = reinterpret_cast<void**>(0);
    rsp9 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
    *rsp9 = 0x1400042e6;
    wcscpy_s(reinterpret_cast<int64_t>(rbp3) + 0x140, 0x8000, "s");
    rsp10 = reinterpret_cast<void*>(rsp9 + 1);
    rbx11 = reinterpret_cast<struct s12*>(0x140015808);
    rdi12 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rbp3) + 0x148);
    while (rbx11->f0 == 32 || rbx11->f0 == 9) {
        rbx11 = reinterpret_cast<struct s12*>(&rbx11->f2);
    }
    *reinterpret_cast<int32_t*>(&rdx13) = 61;
    *reinterpret_cast<int32_t*>(&rdx13 + 4) = 0;
    rsp14 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp10) - 8);
    *rsp14 = 0x140004316;
    rax15 = reinterpret_cast<int64_t>(wcschr(rbx11, 61, "s"));
    rsp16 = reinterpret_cast<struct s13*>(rsp14 + 1);
    if (rax15) {
        while (eax17 = rbx11->f0, !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax17) == 61)) {
            rdi12 = rdi12 + 2;
            if (reinterpret_cast<uint64_t>(rdi12) >= reinterpret_cast<int64_t>(rbp3) + 0x10140) 
                goto addr_14000438f_7;
            rbx11 = reinterpret_cast<struct s12*>(&rbx11->f2);
        }
        rsi18 = 0xffffffffffffffff;
        if (*reinterpret_cast<void***>(&eax17)) 
            goto addr_140004353_10;
    } else {
        goto addr_140004532_12;
    }
    addr_1400044f5_13:
    *rdi12 = reinterpret_cast<void**>(0);
    r8_8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0x140);
    *reinterpret_cast<int32_t*>(&rdx13) = 0x8000;
    *reinterpret_cast<int32_t*>(&rdx13 + 4) = 0;
    rsp19 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp16) - 8);
    *rsp19 = 0x140004515;
    wcscpy_s(0x140015800, 0x8000, r8_8);
    rsp16 = reinterpret_cast<struct s13*>(rsp19 + 1);
    rax20 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rbp3) + 0x140);
    do {
        ++rsi18;
    } while (rax20[rsi18 * 2]);
    addr_140004532_12:
    rsp21 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp16) - 8);
    *rsp21 = 0x140004541;
    fun_140010130(v7 ^ reinterpret_cast<uint64_t>(rsp16), rdx13, r8_8);
    goto (rsp21 + 1 + 0x204a + 1 + 1)[1];
    addr_140004353_10:
    while (1) {
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax17) == 94)) {
            eax17 = rbx11->f2;
            if (!*reinterpret_cast<void***>(&eax17)) 
                goto addr_1400044f5_13;
            ++rbx11;
            goto addr_14000436e_19;
        }
        rbx11 = reinterpret_cast<struct s12*>(&rbx11->f2);
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax17) == 37)) {
            addr_14000436e_19:
            *rdi12 = *reinterpret_cast<void***>(&eax17);
            rdi12 = rdi12 + 2;
            if (reinterpret_cast<uint64_t>(rdi12) >= reinterpret_cast<int64_t>(rbp3) + 0x10140) 
                goto addr_14000438f_7;
        } else {
            rcx22 = reinterpret_cast<void**>(&rsp16->f30);
            while ((eax23 = rbx11->f0, !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax23) == 37)) && *reinterpret_cast<void***>(&eax23)) {
                *reinterpret_cast<void***>(rcx22) = *reinterpret_cast<void***>(&eax23);
                rcx22 = rcx22 + 2;
                if (rcx22 == reinterpret_cast<int64_t>(rbp3) + 0x132) 
                    goto addr_14000438f_7;
                rbx11 = reinterpret_cast<struct s12*>(&rbx11->f2);
            }
            eax24 = rbx11->f0;
            rbx11 = reinterpret_cast<struct s12*>(&rbx11->f2);
            *reinterpret_cast<void***>(rcx22) = reinterpret_cast<void**>(0);
            if (!*reinterpret_cast<int16_t*>(&eax24)) 
                break;
            *reinterpret_cast<int32_t*>(&rdx13) = 0;
            *reinterpret_cast<int32_t*>(&rdx13 + 4) = 0;
            rsp25 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp16) - 8);
            *rsp25 = 0x1400043f2;
            _wdupenv_s(&rsp16->f20);
            rsp16 = reinterpret_cast<struct s13*>(rsp25 + 1);
            r8_8 = rsp16->f20;
            rax26 = 0xffffffffffffffff;
            if (!r8_8) 
                goto addr_14000444b_27; else 
                goto addr_1400043ff_28;
        }
        addr_140004381_29:
        eax17 = rbx11->f0;
        if (!*reinterpret_cast<void***>(&eax17)) 
            goto addr_1400044f5_13;
        continue;
        addr_14000444b_27:
        rcx27 = reinterpret_cast<void**>(&rsp16->f30);
        do {
            ++rax26;
        } while (*reinterpret_cast<void***>(rcx27 + rax26 * 2));
        r14_28 = rdi12 + (rax26 + 2) * 2;
        if (reinterpret_cast<uint64_t>(r14_28) >= reinterpret_cast<int64_t>(rbp3) + 0x10140) 
            goto addr_14000438f_7;
        *rdi12 = reinterpret_cast<void**>(37);
        rdi29 = reinterpret_cast<uint64_t>(rdi12 + 2);
        r8_8 = reinterpret_cast<void**>(&rsp16->f30);
        rdx13 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(rbp3) + 0x10140 - rdi29) >> 1);
        rsp30 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp16) - 8);
        *rsp30 = 0x140004495;
        wcscpy_s(rdi29);
        rsp16 = reinterpret_cast<struct s13*>(rsp30 + 1);
        rdi31 = reinterpret_cast<struct s14*>(r14_28 + 0xfffffffffffffffe);
        rdi31->f0 = reinterpret_cast<void**>(37);
        rdi12 = &rdi31->f2;
        goto addr_140004381_29;
        do {
            addr_1400043ff_28:
            ++rax26;
        } while (*reinterpret_cast<void***>(r8_8 + rax26 * 2));
        r14_32 = rdi12 + rax26 * 2;
        if (reinterpret_cast<uint64_t>(r14_32) >= reinterpret_cast<int64_t>(rbp3) + 0x10140) 
            goto addr_14000438f_7;
        rdx13 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(rbp3) + 0x10140 - reinterpret_cast<uint64_t>(rdi12)) >> 1);
        rsp33 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp16) - 8);
        *rsp33 = 0x140004433;
        wcscpy_s(rdi12);
        rsp34 = reinterpret_cast<struct s13*>(rsp33 + 1);
        rcx35 = rsp34->f20;
        rdi12 = r14_32;
        rsp36 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp34) - 8);
        *rsp36 = 0x140004441;
        free(rcx35);
        rsp16 = reinterpret_cast<struct s13*>(rsp36 + 1);
        rsp16->f20 = reinterpret_cast<void**>(0);
        goto addr_140004381_29;
    }
    rcx37 = reinterpret_cast<void**>(&rsp16->f30);
    rax38 = 0xffffffffffffffff;
    do {
        ++rax38;
    } while (*reinterpret_cast<void***>(rcx37 + rax38 * 2));
    rbx39 = rdi12 + (rax38 + 1) * 2;
    if (reinterpret_cast<uint64_t>(rbx39) >= reinterpret_cast<int64_t>(rbp3) + 0x10140) {
        addr_14000438f_7:
        goto addr_140004532_12;
    } else {
        *rdi12 = reinterpret_cast<void**>(37);
        rsp40 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp16) - 8);
        *rsp40 = 0x1400044f2;
        wcscpy_s(rdi12 + 2);
        rsp16 = reinterpret_cast<struct s13*>(rsp40 + 1);
        rdi12 = rbx39;
        goto addr_1400044f5_13;
    }
}

int64_t _wsopen_s = 0x149b4;

int64_t _fileno = 0x149c8;

int64_t _dup2 = 0x149c0;

int64_t _close = 0x149d2;

int64_t _lseek = 0x149dc;

void** fun_1400048b4(void** rcx, void** edx) {
    void* rsp3;
    int64_t rsi4;
    void** rbx5;
    uint32_t r14d6;
    void*** rax7;
    void* rsp8;
    void*** rdi9;
    int64_t rax10;
    void* rsp11;
    void** r8_12;
    int64_t rbp13;
    int64_t rax14;
    void** rax15;
    unsigned char r15b16;
    void** eax17;
    int64_t rdx18;
    int64_t rcx19;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 48);
    *reinterpret_cast<void***>(&rsi4) = edx;
    rbx5 = rcx;
    while (*reinterpret_cast<void***>(rbx5) == 32 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx5) == 9)) {
        rbx5 = rbx5 + 2;
    }
    r14d6 = 0;
    rax7 = reinterpret_cast<void***>(wcspbrk(rbx5, " "));
    rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
    rdi9 = rax7;
    if (rax7) {
        r14d6 = reinterpret_cast<uint16_t>(*rax7);
        *rax7 = reinterpret_cast<void**>(0);
    }
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&rsi4) == 4)) {
        rax10 = reinterpret_cast<int64_t>(__acrt_iob_func(1, " "));
        rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8);
        *reinterpret_cast<int32_t*>(&r8_12) = 0x109;
        *reinterpret_cast<int32_t*>(&r8_12 + 4) = 0;
        rbp13 = rax10;
        if (*reinterpret_cast<void***>(&rsi4) == 2) {
            *reinterpret_cast<int32_t*>(&r8_12) = 0x301;
            *reinterpret_cast<int32_t*>(&r8_12 + 4) = 0;
        }
    } else {
        rax14 = reinterpret_cast<int64_t>(__acrt_iob_func());
        rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8);
        rbp13 = rax14;
        *reinterpret_cast<int32_t*>(&r8_12) = 0;
        *reinterpret_cast<int32_t*>(&r8_12 + 4) = 0;
    }
    rax15 = reinterpret_cast<void**>(_wsopen_s(reinterpret_cast<int64_t>(rsp11) + 0x68, rbx5, r8_12, 64));
    r15b16 = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax15) == 0);
    if (r15b16) {
        eax17 = reinterpret_cast<void**>(_fileno(rbp13, rbx5, r8_12, 64));
        *reinterpret_cast<void***>(&rdx18) = eax17;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rax15) = reinterpret_cast<int32_t>(_dup2(0, rdx18, r8_12, 64));
        if (*reinterpret_cast<int32_t*>(&rax15) == -1) {
            *reinterpret_cast<void***>(&rdx18) = reinterpret_cast<void**>(0x411);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = 0;
            rax15 = fun_140003898(0, 0x411, r8_12, 64, 0, 0x411, r8_12, 64);
        }
        _close(0, rdx18, r8_12, 64);
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&rsi4) == 3)) {
            *reinterpret_cast<int32_t*>(&rax15) = reinterpret_cast<int32_t>(_fileno(rbp13, rdx18, r8_12, 64));
            *reinterpret_cast<int32_t*>(&rcx19) = *reinterpret_cast<int32_t*>(&rax15);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = 0;
            _lseek(rcx19);
        }
    }
    while (*reinterpret_cast<void***>(rbx5)) {
        *reinterpret_cast<void***>(rbx5) = reinterpret_cast<void**>(32);
        rbx5 = rbx5 + 2;
    }
    if (rdi9) {
        *rdi9 = *reinterpret_cast<void***>(&r14d6);
    }
    *reinterpret_cast<unsigned char*>(&rax15) = r15b16;
    return rax15;
}

unsigned char fun_140004c30(void** rcx, void** rdx, void** r8, void** r9) {
    void** r11_5;
    void** r10_6;
    void** r9_7;
    void** r8_8;
    uint32_t ecx9;
    uint32_t ecx10;
    uint32_t ecx11;

    r11_5 = rdx;
    r10_6 = rcx;
    r9_7 = rcx;
    r8_8 = rcx;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rcx) == 59)) {
        do {
            r8_8 = r8_8 + 2;
        } while (*reinterpret_cast<void***>(r8_8) == 59);
    }
    while ((ecx9 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r8_8)), !!*reinterpret_cast<void***>(&ecx9)) && *reinterpret_cast<void***>(&ecx9) != 59) {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&ecx9) == 34)) {
            *reinterpret_cast<void***>(r9_7) = *reinterpret_cast<void***>(&ecx9);
            r9_7 = r9_7 + 2;
        } else {
            r8_8 = r8_8 + 2;
            ecx10 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r8_8));
            if (!*reinterpret_cast<void***>(&ecx10)) 
                break;
            do {
                if (*reinterpret_cast<void***>(&ecx10) == 34) 
                    break;
                r8_8 = r8_8 + 2;
                *reinterpret_cast<void***>(r9_7) = *reinterpret_cast<void***>(&ecx10);
                r9_7 = r9_7 + 2;
                ecx10 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r8_8));
            } while (*reinterpret_cast<void***>(&ecx10));
            if (!*reinterpret_cast<void***>(r8_8)) 
                break;
        }
        r8_8 = r8_8 + 2;
    }
    ecx11 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r8_8));
    *reinterpret_cast<void***>(r9_7) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(r11_5) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx) - (reinterpret_cast<unsigned char>(rdx) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(rdx) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rdx) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(!!*reinterpret_cast<int16_t*>(&ecx11))))))) & reinterpret_cast<unsigned char>(r8_8 + 2));
    return static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9_7 != r10_6));
}

void** g1400364a0;

void** fun_140005938();

void** g140015800;

void** fun_140003ae0(int32_t* rcx, void** rdx, void** r8, void** r9);

void** g140026498;

void** fun_140004690(void** ecx, void** rdx, void** r8, void** r9);

void** fun_1400049fc(void** rcx, void** rdx, void** r8, void** r9);

int64_t _wcserror_s = 0x14a46;

int64_t _wspawnvp = 0x14a2c;

int64_t WaitForSingleObject = 0x1445c;

int64_t GetExitCodeProcess = 0x14472;

int64_t Sleep = 0x14488;

void** fun_140004cc4(void** rcx, void** rdx, void** r8, void** r9);

int64_t __doserrno = 0x14a38;

int64_t _wsearchenv = 0x14a54;

void** g1400157f0;

uint32_t fun_140005114(void** rcx, signed char dl, signed char r8b, void** r9) {
    void** rdx2;
    void** r8_3;
    void* rbp5;
    void* rsp6;
    uint64_t rax7;
    uint64_t v8;
    void*** r15_9;
    void*** v10;
    int1_t zf11;
    signed char r12b12;
    unsigned char v13;
    signed char dil14;
    void** v15;
    void*** v16;
    void** rax17;
    uint64_t rax18;
    void* r14_19;
    void** rcx20;
    int64_t rcx21;
    uint32_t eax22;
    int32_t* rax23;
    void** rax24;
    int64_t rcx25;
    uint64_t rax26;
    void** rax27;
    void* rsp28;
    void** v29;
    void** r13_30;
    void** rbx31;
    uint64_t rdi32;
    void** v33;
    uint64_t rcx34;
    void** rax35;
    void** rax36;
    void* rsp37;
    void** r8_38;
    void* rsp39;
    void** rdx40;
    int32_t eax41;
    int64_t rax42;
    void* rsp43;
    void** rcx44;
    unsigned char sil45;
    void** rax46;
    void** r12_47;
    void** rsi48;
    int32_t v49;
    void** r13d50;
    void** rax51;
    void** rdi52;
    void** rcx53;
    void** rax54;
    int32_t v55;
    void** rcx56;
    void** rax57;
    void** v58;
    int32_t v59;
    void** rcx60;
    int64_t rax61;
    void** eax62;
    int32_t eax63;
    void* rsp64;
    int64_t rax65;
    void** eax66;
    int32_t eax67;
    void* rsp68;
    void** v69;
    void** rcx70;
    void** rax71;
    uint32_t ecx72;
    uint32_t edi73;
    void** rax74;
    uint64_t rcx75;
    void** rax76;
    uint32_t* rax77;
    int32_t* rax78;
    int64_t r8_79;
    unsigned char r15b80;
    void** r8_81;
    void** r8_82;
    void* rsp83;
    void** rcx84;
    void** v85;
    void** rax86;
    uint64_t rcx87;
    void** rax88;
    void** rax89;
    uint32_t* rax90;
    void** rax91;
    void** r15_92;
    void* rsp93;
    void** v94;
    void* rsi95;
    void** rcx96;
    int64_t rax97;
    void** rax98;
    void* rsp99;
    int16_t v100;
    int64_t rdx101;
    void* rcx102;
    int64_t rax103;
    void* rsp104;
    void*** rax105;
    int32_t* rax106;
    void* rsp107;
    void** rdx108;
    void** rcx109;
    void* rsp110;
    uint64_t rax111;
    void** r8_112;
    void** rdx113;
    void* rsp114;
    void* rsp115;
    int16_t v116;
    void** rcx117;
    void* rsp118;
    uint64_t rcx119;
    int64_t v120;
    int1_t zf121;
    void** rax122;
    void*** rax123;
    void** r15_124;
    int64_t rax125;
    void** rax126;
    void** rsi127;
    void* rsi128;
    void** rax129;
    void** rax130;
    void** rcx131;
    void** rcx132;

    *reinterpret_cast<signed char*>(&rdx2) = dl;
    *reinterpret_cast<signed char*>(&r8_3) = r8b;
    rbp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 0x3a8);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 0x480);
    rax7 = g140015008;
    v8 = rax7 ^ reinterpret_cast<uint64_t>(rsp6);
    r15_9 = v10;
    zf11 = g1400364a0 == 0;
    r12b12 = *reinterpret_cast<signed char*>(&r8_3);
    v13 = *reinterpret_cast<unsigned char*>(&r9);
    dil14 = *reinterpret_cast<signed char*>(&rdx2);
    v15 = rcx;
    v16 = r15_9;
    if (zf11) {
        rax17 = fun_140005938();
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
        rcx = v15;
        g1400364a0 = rax17;
    }
    *reinterpret_cast<uint32_t*>(&rax18) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx));
    *reinterpret_cast<void***>(&r14_19) = reinterpret_cast<void**>(1);
    if (*reinterpret_cast<uint32_t*>(&rax18) == 45) {
        rcx20 = rcx + 2;
        v13 = 1;
        v15 = rcx20;
        *reinterpret_cast<uint32_t*>(&rcx21) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx20));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = 0;
        rax18 = reinterpret_cast<uint64_t>(iswdigit(rcx21));
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
        if (!*reinterpret_cast<uint32_t*>(&rax18)) {
            g14002648c = 0xffffffff;
        } else {
            rdx2 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6) + 40);
            *reinterpret_cast<int32_t*>(&r8_3) = 10;
            *reinterpret_cast<int32_t*>(&r8_3 + 4) = 0;
            eax22 = reinterpret_cast<uint32_t>(wcstoul(v15, rdx2, 10));
            g14002648c = eax22;
            rax23 = reinterpret_cast<int32_t*>(_errno(v15, rdx2, 10));
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8 - 8 + 8);
            if (*rax23 == 34) {
                r8_3 = v15;
                rdx2 = reinterpret_cast<void**>(0x436);
                *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
                *reinterpret_cast<void***>(v15) = reinterpret_cast<void**>(0);
                fun_140003898(0, 0x436, r8_3, r9);
                rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
            }
            rax24 = v15;
            while (*reinterpret_cast<uint32_t*>(&rcx25) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax24)), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx25) + 4) = 0, rax18 = reinterpret_cast<uint64_t>(iswspace(rcx25, rdx2, r8_3)), rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8), !!*reinterpret_cast<uint32_t*>(&rax18)) {
                rax24 = v15 + 2;
                v15 = rax24;
            }
        }
        rcx = v15;
    } else {
        if (*reinterpret_cast<uint32_t*>(&rax18) == 64 && (rcx = rcx + 2, v15 = rcx, !!r12b12)) {
            dil14 = 0;
        }
    }
    if (*reinterpret_cast<void***>(rcx)) {
        rax26 = 0xffffffffffffffff;
        do {
            ++rax26;
        } while (*reinterpret_cast<void***>(rcx + rax26 * 2));
        if (rax26 < 0x8000) 
            goto addr_140005267_19;
    } else {
        goto addr_140005900_21;
    }
    g140015800 = reinterpret_cast<void**>(0);
    addr_140005285_23:
    rax27 = fun_14000dcc4(rcx, rcx);
    rsp28 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    v29 = rax27;
    r13_30 = rax27;
    if (dil14) {
        fun_14000bfe0("\t", rax27, r8_3, r9);
        fun_14000bfb0("\t", rax27, "\t", rax27);
        rsp28 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp28) - 8 + 8 - 8 + 8);
    }
    r8_3 = r13_30;
    rdx2 = reinterpret_cast<void**>(0);
    *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
    rbx31 = reinterpret_cast<void**>(0);
    fun_140003ae0(reinterpret_cast<uint64_t>(rsp28) + 36, 0, r8_3, r9);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp28) - 8 + 8);
    *reinterpret_cast<void***>(&rdi32) = v33;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi32) + 4) = 0;
    if (*reinterpret_cast<void***>(&rdi32)) {
        *reinterpret_cast<int32_t*>(&rcx34) = static_cast<int32_t>(rdi32 + 5);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = 0;
        rax35 = reinterpret_cast<void**>(8 * rcx34);
        if (__intrinsic()) {
            rax35 = reinterpret_cast<void**>(0xffffffffffffffff);
        }
        rax36 = fun_140009214(rax35, __intrinsic(), r8_3, r9, rax35, __intrinsic());
        rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
        r8_38 = r13_30;
        rbx31 = rax36;
        fun_140003ae0(reinterpret_cast<uint64_t>(rsp37) + 36, rax36, r8_38, r9);
        rsp39 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8);
        if (!*reinterpret_cast<void***>(rbx31)) 
            goto addr_1400053e0_29;
        rdx40 = g140026498;
        if (!rdx40) 
            goto addr_1400053e0_29;
        eax41 = reinterpret_cast<int32_t>(_wcsicmp());
        rsp39 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp39) - 8 + 8);
        if (!eax41) 
            goto addr_140005328_32;
    } else {
        goto addr_1400058b8_34;
    }
    addr_1400053e0_29:
    if (r12b12) {
        rax42 = reinterpret_cast<int64_t>(wcspbrk(v15, "<", r8_38));
        rsp43 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp39) - 8 + 8);
        r8_3 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp43) + 48);
        rdx2 = rbx31;
        rcx44 = *reinterpret_cast<void***>(&rdi32);
        *reinterpret_cast<int32_t*>(&rcx44 + 4) = 0;
        sil45 = reinterpret_cast<uint1_t>(rax42 == 0);
        rax46 = fun_140004690(rcx44, rdx2, r8_3, r9);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp43) - 8 + 8);
        *reinterpret_cast<uint32_t*>(&r12_47) = 0;
        *reinterpret_cast<int32_t*>(&r12_47 + 4) = 0;
        if (*reinterpret_cast<unsigned char*>(&rax46)) {
            *reinterpret_cast<int32_t*>(&rsi48) = v49;
            *reinterpret_cast<unsigned char*>(&r13d50) = 0;
            goto addr_140005452_37;
        }
        rax51 = v15;
        rdi52 = reinterpret_cast<void**>(0xffffffffffffffff);
        rcx53 = reinterpret_cast<void**>(0xffffffffffffffff);
        do {
            ++rcx53;
        } while (*reinterpret_cast<void***>(rax51 + reinterpret_cast<unsigned char>(rcx53) * 2));
        if (reinterpret_cast<unsigned char>(rcx53) >= reinterpret_cast<unsigned char>(0x1000)) 
            goto addr_1400054a1_41;
        if (!sil45) 
            goto addr_140005499_43;
    } else {
        r8_3 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp39) + 48);
        rdx2 = rbx31;
        rax54 = fun_140004690(*reinterpret_cast<void***>(&rdi32), rdx2, r8_3, r9);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp39) - 8 + 8);
        if (*reinterpret_cast<signed char*>(&rax54) && (v55 && r15_9)) {
            rcx56 = *reinterpret_cast<void***>(rbx31);
            rax57 = fun_14000dcc4(rcx56, rcx56);
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
            *r15_9 = rax57;
        }
        *reinterpret_cast<void***>(&rdi32) = v58;
        goto addr_1400058b8_34;
    }
    addr_1400054a1_41:
    r9 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6) + 52);
    r8_3 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6) + 64);
    rcx44 = rax51;
    rax46 = fun_1400049fc(rcx44, rdx2, r8_3, r9);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    *reinterpret_cast<unsigned char*>(&r13d50) = *reinterpret_cast<unsigned char*>(&rax46);
    if (*reinterpret_cast<unsigned char*>(&rax46)) {
        addr_140005541_47:
        *reinterpret_cast<int32_t*>(&rsi48) = v59;
    } else {
        r8_3 = v15;
        rcx60 = reinterpret_cast<void**>(0xffffffffffffffff);
        do {
            ++rcx60;
        } while (*reinterpret_cast<void***>(r8_3 + reinterpret_cast<unsigned char>(rcx60) * 2));
        if (reinterpret_cast<unsigned char>(rcx60) < reinterpret_cast<unsigned char>(0x8000)) 
            goto addr_1400054f5_51; else 
            goto addr_1400054e9_52;
    }
    addr_140005545_53:
    if (!1) {
        rax61 = reinterpret_cast<int64_t>(__acrt_iob_func());
        eax62 = reinterpret_cast<void**>(_fileno(rax61, rdx2, r8_3, r9));
        rdx2 = eax62;
        *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
        eax63 = reinterpret_cast<int32_t>(_dup2(0xffffffff, rdx2, r8_3, r9));
        rsp64 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8 - 8 + 8 - 8 + 8);
        if (eax63 == -1) {
            rdx2 = reinterpret_cast<void**>(0x411);
            *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
            fun_140003898(0, 0x411, r8_3, r9);
            rsp64 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp64) - 8 + 8);
        }
        rcx44 = reinterpret_cast<void**>(0xffffffff);
        *reinterpret_cast<int32_t*>(&rcx44 + 4) = 0;
        _close(0xffffffff, rdx2, r8_3, r9);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp64) - 8 + 8);
    }
    if (!1) {
        rax65 = reinterpret_cast<int64_t>(__acrt_iob_func(1, rdx2, r8_3, r9));
        eax66 = reinterpret_cast<void**>(_fileno(rax65, rdx2, r8_3, r9));
        rdx2 = eax66;
        *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
        eax67 = reinterpret_cast<int32_t>(_dup2(0xffffffff, rdx2, r8_3, r9));
        rsp68 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8 - 8 + 8 - 8 + 8);
        if (eax67 == -1) {
            rdx2 = reinterpret_cast<void**>(0x411);
            *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
            fun_140003898(0, 0x411, r8_3, r9);
            rsp68 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp68) - 8 + 8);
        }
        rcx44 = reinterpret_cast<void**>(0xffffffff);
        *reinterpret_cast<int32_t*>(&rcx44 + 4) = 0;
        _close(0xffffffff, rdx2, r8_3, r9);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp68) - 8 + 8);
    }
    *reinterpret_cast<uint32_t*>(&r12_47) = 0;
    *reinterpret_cast<int32_t*>(&r12_47 + 4) = 0;
    if (!*reinterpret_cast<unsigned char*>(&r13d50)) {
        addr_140005452_37:
        *reinterpret_cast<void***>(&rdi32) = v69;
    } else {
        rax51 = v15;
        goto addr_1400055cb_63;
    }
    addr_140005456_64:
    if (*reinterpret_cast<int32_t*>(&rsi48) != -1) {
        addr_14000588f_65:
        if (!*reinterpret_cast<int32_t*>(&rsi48)) {
            addr_1400058b3_66:
            r13_30 = v29;
        } else {
            addr_140005893_67:
            if (v16) {
                if (!*reinterpret_cast<unsigned char*>(&r13d50)) {
                    rcx70 = *reinterpret_cast<void***>(rbx31);
                } else {
                    rcx70 = *reinterpret_cast<void***>(rbx31 + 16);
                }
                rax71 = fun_14000dcc4(rcx70, rcx70);
                rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
                *v16 = rax71;
                goto addr_1400058b3_66;
            }
        }
    } else {
        addr_140005462_72:
        if (v13) {
            goto addr_1400058b3_66;
        }
    }
    addr_1400058b8_34:
    ecx72 = 0;
    edi73 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(&rdi32) + 5);
    if (!edi73) {
        addr_1400058dd_74:
        if (rbx31) {
            free(rbx31, rdx2, r8_3, r9);
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
        }
    } else {
        rax74 = rbx31;
        do {
            if (!*reinterpret_cast<void***>(rax74)) 
                goto addr_1400058dd_74;
            if (*reinterpret_cast<void***>(rax74) == r13_30) 
                goto addr_1400058da_79;
            ecx72 = ecx72 + reinterpret_cast<unsigned char>(1);
            rax74 = rax74 + 8;
        } while (ecx72 < edi73);
        goto addr_1400058d8_81;
    }
    if (r13_30 && *reinterpret_cast<unsigned char*>(&r14_19)) {
        free(r13_30, rdx2, r8_3, r9);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    }
    addr_140005900_21:
    rcx75 = v8 ^ reinterpret_cast<uint64_t>(rsp6);
    rax76 = fun_140010130(rcx75, rdx2, r8_3, rcx75, rdx2, r8_3);
    return *reinterpret_cast<uint32_t*>(&rax76);
    addr_1400058da_79:
    *reinterpret_cast<unsigned char*>(&r14_19) = 0;
    goto addr_1400058dd_74;
    addr_1400058d8_81:
    goto addr_1400058dd_74;
    rax77 = reinterpret_cast<uint32_t*>(_errno(rcx44, rdx2, r8_3, r9));
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    if (!*rax77) 
        goto addr_140005893_67;
    if (*rax77 != 2) 
        goto addr_140005836_87;
    r8_3 = *reinterpret_cast<void***>(rbx31);
    rdx2 = reinterpret_cast<void**>(0x439);
    *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
    fun_140003898(0, 0x439, r8_3, r9);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    goto addr_14000588f_65;
    addr_140005836_87:
    if (*rax77 == 12) {
        if (!*reinterpret_cast<unsigned char*>(&r13d50)) {
            r8_3 = *reinterpret_cast<void***>(rbx31);
        } else {
            r8_3 = *reinterpret_cast<void***>(rbx31 + 16);
        }
        rdx2 = reinterpret_cast<void**>(0x43a);
        *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
    } else {
        rax78 = reinterpret_cast<int32_t*>(_errno(rcx44, rdx2, r8_3, r9));
        *reinterpret_cast<int32_t*>(&r8_79) = *rax78;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_79) + 4) = 0;
        _wcserror_s(reinterpret_cast<int64_t>(rbp5) + 0x160, 0xc8, r8_79, r9);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8 - 8 + 8);
        r8_3 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0x160);
        rdx2 = reinterpret_cast<void**>(0x415);
        *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
    }
    fun_140003898(0, rdx2, r8_3, r9);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    goto addr_140005893_67;
    addr_1400055cb_63:
    r15b80 = 0;
    r8_81 = reinterpret_cast<void**>(0xffffffffffffffff);
    do {
        ++r8_81;
    } while (*reinterpret_cast<void***>(rax51 + reinterpret_cast<unsigned char>(r8_81) * 2));
    r8_82 = rax51;
    if (reinterpret_cast<unsigned char>(r8_81) >= reinterpret_cast<unsigned char>(0x1000)) {
        fun_140003898(0, 0x447, r8_82, r9);
        rsp83 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    } else {
        wcscpy_s(0x140015800, 0x8000, r8_82, r9);
        rsp83 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    }
    rcx84 = *reinterpret_cast<void***>(rbx31);
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rcx84) == 34)) {
        addr_140005774_100:
        *reinterpret_cast<void***>(&rdi32) = v85;
    } else {
        rax86 = reinterpret_cast<void**>(0xffffffffffffffff);
        do {
            ++rax86;
        } while (*reinterpret_cast<void***>(rcx84 + reinterpret_cast<unsigned char>(rax86) * 2));
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rcx84 + reinterpret_cast<unsigned char>(rax86) * 2) - 2) == 34)) 
            goto addr_140005774_100; else 
            goto addr_140005731_104;
    }
    addr_140005778_105:
    rcx87 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(&rdi32))));
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdi32)) >= reinterpret_cast<signed char>(0)) {
        do {
            *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rbx31 + rcx87 * 8) + 16) = *reinterpret_cast<void***>(rbx31 + rcx87 * 8);
            --rcx87;
        } while (reinterpret_cast<int64_t>(rcx87) >= reinterpret_cast<int64_t>(0));
    }
    rax88 = g1400364a0;
    *reinterpret_cast<void***>(rbx31) = rax88;
    rax89 = reinterpret_cast<void**>("/");
    if (r15b80) {
        rax89 = reinterpret_cast<void**>("/");
    }
    *reinterpret_cast<void***>(rbx31 + 8) = rax89;
    rax90 = reinterpret_cast<uint32_t*>(_errno());
    r8_3 = rbx31;
    rcx44 = reinterpret_cast<void**>(1);
    *reinterpret_cast<int32_t*>(&rcx44 + 4) = 0;
    *rax90 = 0;
    rdx2 = *reinterpret_cast<void***>(rbx31);
    rax91 = reinterpret_cast<void**>(_wspawnvp(1));
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp83) - 8 + 8 - 8 + 8);
    r15_92 = rax91;
    if (!reinterpret_cast<int1_t>(r15_92 == 0xffffffffffffffff)) {
        WaitForSingleObject(r15_92);
        rsp93 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
        do {
            rdx2 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp93) + 52);
            GetExitCodeProcess(r15_92, rdx2, r8_3, r9);
            rsp93 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp93) - 8 + 8);
            *reinterpret_cast<int32_t*>(&rsi48) = -1;
            if (1) 
                break;
            Sleep(0x3e8, rdx2, r8_3, r9);
            rsp93 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp93) - 8 + 8);
            ++r12_47;
        } while (reinterpret_cast<unsigned char>(r12_47) < reinterpret_cast<unsigned char>(10));
        rcx44 = r15_92;
        CloseHandle(rcx44, rdx2, r8_3, r9);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp93) - 8 + 8);
        goto addr_140005456_64;
    } else {
        *reinterpret_cast<int32_t*>(&rsi48) = -1;
        goto addr_140005462_72;
    }
    addr_140005731_104:
    *reinterpret_cast<void***>(&rdi32) = v94;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi32) + 4) = 0;
    rsi95 = reinterpret_cast<void*>(static_cast<int64_t>(static_cast<int32_t>(rdi32 - 1)));
    while (reinterpret_cast<int64_t>(rsi95) >= reinterpret_cast<int64_t>(1)) {
        rcx96 = *reinterpret_cast<void***>(rbx31 + reinterpret_cast<uint64_t>(rsi95) * 8);
        rax97 = reinterpret_cast<int64_t>(wcspbrk(rcx96, "\"", r8_82, r9));
        rsp83 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp83) - 8 + 8);
        if (rax97) 
            goto addr_14000575d_117;
        rsi95 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi95) - 1);
    }
    goto addr_140005778_105;
    addr_14000575d_117:
    r15b80 = 1;
    *reinterpret_cast<void***>(rbx31 + rdi32 * 8) = reinterpret_cast<void**>("\"");
    *reinterpret_cast<void***>(&rdi32) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rdi32)) + reinterpret_cast<unsigned char>(1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi32) + 4) = 0;
    *reinterpret_cast<void***>(rbx31 + rdi32 * 8) = reinterpret_cast<void**>(0);
    goto addr_140005778_105;
    addr_1400054f5_51:
    if (static_cast<int1_t>(!1)) {
        free(v29, rdx2);
        rax98 = fun_14000dcc4(v15, v15);
        rsp99 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8 - 8 + 8);
        r8_3 = rax98;
        v29 = rax98;
        fun_140003ae0(reinterpret_cast<uint64_t>(rsp99) + 36, rbx31, r8_3, r9);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp99) - 8 + 8);
    }
    rcx44 = *reinterpret_cast<void***>(rbx31);
    rdx2 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6) + 80);
    rax46 = fun_140004cc4(rcx44, rdx2, r8_3, r9);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    if (*reinterpret_cast<unsigned char*>(&rax46)) {
        if (v100 != 34) {
            addr_140005655_123:
            *reinterpret_cast<int32_t*>(&rdx101) = 32;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx101) + 4) = 0;
            rcx102 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) + 80);
            *reinterpret_cast<void***>(rbx31) = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6) + 80);
            rax103 = reinterpret_cast<int64_t>(wcschr(rcx102, 32, r8_3, r9));
            rsp104 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
            if (rax103) {
                wcscpy_s(reinterpret_cast<int64_t>(rbp5) + 0x162, 0x103, reinterpret_cast<uint64_t>(rsp104) + 80, r9);
                r8_3 = reinterpret_cast<void**>("\"");
                *reinterpret_cast<int32_t*>(&rdx101) = 0x104;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx101) + 4) = 0;
                rcx102 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp5) + 0x160);
                wcscat_s(rcx102, 0x104, "\"", r9);
                rsp104 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp104) - 8 + 8 - 8 + 8);
                *reinterpret_cast<void***>(rbx31) = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0x160);
            }
        } else {
            rax105 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsp6) + 80);
            do {
                ++rdi52;
            } while (rax105[reinterpret_cast<unsigned char>(rdi52) * 2]);
            if (*reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rsp6) + reinterpret_cast<unsigned char>(rdi52) * 2 + 78) != 34) 
                goto addr_140005651_128; else 
                goto addr_140005623_129;
        }
    } else {
        *reinterpret_cast<unsigned char*>(&r13d50) = 1;
        goto addr_140005541_47;
    }
    rax106 = reinterpret_cast<int32_t*>(_errno(rcx102, rdx101, r8_3, r9));
    rsp107 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp104) - 8 + 8);
    r8_3 = rbx31;
    rdx2 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp107) + 80);
    rcx44 = reinterpret_cast<void**>(0);
    *reinterpret_cast<int32_t*>(&rcx44 + 4) = 0;
    *rax106 = 0;
    rax46 = reinterpret_cast<void**>(_wspawnvp());
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp107) - 8 + 8);
    rsi48 = rax46;
    if (reinterpret_cast<int1_t>(rax46 == 0xffffffffffffffff) && (rax46 = reinterpret_cast<void**>(_errno()), rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8), *reinterpret_cast<void***>(rax46) != 12)) {
        rax46 = reinterpret_cast<void**>(__doserrno());
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
        r13d50 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r13d50)));
        if (*reinterpret_cast<void***>(rax46) == 0xc1) {
            r13d50 = reinterpret_cast<void**>(1);
        }
        goto addr_140005545_53;
    }
    addr_140005651_128:
    goto addr_140005655_123;
    addr_140005623_129:
    r8_3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi52) + reinterpret_cast<unsigned char>(rdi52));
    rdx108 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6) + 82);
    rcx109 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6) + 80);
    memmove(rcx109, rdx108, r8_3, r9);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    rdi52 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi52) * 2 + 0xfffffffffffffffc);
    if (reinterpret_cast<unsigned char>(rdi52) >= reinterpret_cast<unsigned char>(0x208)) {
        fun_14001025c(rcx109, rdx108, r8_3, r9);
        rsp110 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8 - 8 - 0x250);
        rax111 = g140015008;
        r8_112 = reinterpret_cast<void**>("C");
        rdx113 = reinterpret_cast<void**>(0);
        *reinterpret_cast<int32_t*>(&rdx113 + 4) = 0;
        _wdupenv_s(reinterpret_cast<uint64_t>(rsp110) + 32);
        rsp114 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp110) - 8 + 8);
        if (!1) 
            goto addr_140005978_137;
    } else {
        *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsp6) + reinterpret_cast<unsigned char>(rdi52) + 80) = reinterpret_cast<void**>(0);
        goto addr_140005651_128;
    }
    r8_112 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp114) + 48);
    rdx113 = reinterpret_cast<void**>("P");
    _wsearchenv("C", "P", r8_112, r9);
    rsp115 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp114) - 8 + 8);
    if (!v116) {
        rdx113 = reinterpret_cast<void**>(0x420);
        *reinterpret_cast<int32_t*>(&rdx113 + 4) = 0;
        fun_140003898(0, 0x420, r8_112, r9);
        rsp115 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp115) - 8 + 8);
    }
    rcx117 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp115) + 48);
    fun_14000dcc4(rcx117, rcx117);
    rsp118 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp115) - 8 + 8);
    addr_1400059c6_142:
    rcx119 = rax111 ^ reinterpret_cast<uint64_t>(rsp110) ^ reinterpret_cast<uint64_t>(rsp118);
    fun_140010130(rcx119, rdx113, r8_112, rcx119, rdx113, r8_112);
    goto v120;
    addr_140005978_137:
    fun_14000dcc4(0, 0);
    free(0);
    rsp118 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp114) - 8 + 8 - 8 + 8);
    goto addr_1400059c6_142;
    addr_1400054e9_52:
    rdx2 = reinterpret_cast<void**>(0x447);
    *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
    fun_140003898(0, 0x447, r8_3, r9);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    goto addr_1400054f5_51;
    addr_140005499_43:
    *reinterpret_cast<unsigned char*>(&r13d50) = 1;
    goto addr_1400055cb_63;
    addr_140005328_32:
    zf121 = g1400157f0 == 0;
    if (!zf121) {
        addr_1400053d6_143:
        rax122 = g1400157f0;
        *reinterpret_cast<void***>(rbx31) = rax122;
        goto addr_1400053e0_29;
    } else {
        rax123 = reinterpret_cast<void***>(__p__wpgmptr());
        r15_124 = *rax123;
        g1400157f0 = r15_124;
        rax125 = reinterpret_cast<int64_t>(wcspbrk(r15_124, " "));
        rsp39 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp39) - 8 + 8 - 8 + 8);
        if (!rax125) {
            addr_1400053d1_145:
            r15_9 = v16;
            goto addr_1400053d6_143;
        } else {
            rax126 = g1400157f0;
            rsi127 = reinterpret_cast<void**>(0xffffffffffffffff);
            do {
                ++rsi127;
            } while (*reinterpret_cast<void***>(rax126 + reinterpret_cast<unsigned char>(rsi127) * 2));
            rsi128 = reinterpret_cast<void*>(rsi127 + 3);
            rax129 = reinterpret_cast<void**>(2 * reinterpret_cast<uint64_t>(rsi128));
            if (!__intrinsic()) 
                goto addr_140005383_149;
        }
    }
    rax129 = reinterpret_cast<void**>(0xffffffffffffffff);
    addr_140005383_149:
    rax130 = fun_140009214(rax129, __intrinsic(), 0xffffffffffffffff, r9);
    g1400157f0 = rax130;
    wcscpy_s(rax130, rsi128, "\"");
    rcx131 = g1400157f0;
    wcscat_s(rcx131, rsi128, r15_124);
    rcx132 = g1400157f0;
    r8_38 = reinterpret_cast<void**>("\"");
    wcscat_s(rcx132, rsi128, "\"");
    rsp39 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp39) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
    goto addr_1400053d1_145;
    addr_140005267_19:
    r8_3 = rcx;
    wcscpy_s(0x140015800);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    rcx = v15;
    goto addr_140005285_23;
}

void** fun_140005938() {
    void* rsp1;
    uint64_t rax2;
    void** r8_3;
    void** rdx4;
    void* rsp5;
    void** r9_6;
    void* rsp7;
    int16_t v8;
    void** r9_9;
    void** rcx10;
    void* rsp11;
    void** rax12;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 0x250);
    rax2 = g140015008;
    r8_3 = reinterpret_cast<void**>("C");
    rdx4 = reinterpret_cast<void**>(0);
    *reinterpret_cast<int32_t*>(&rdx4 + 4) = 0;
    _wdupenv_s(reinterpret_cast<uint64_t>(rsp1) + 32);
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp1) - 8 + 8);
    if (1) {
        r8_3 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp5) + 48);
        rdx4 = reinterpret_cast<void**>("P");
        _wsearchenv("C", "P", r8_3, r9_6);
        rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
        if (!v8) {
            rdx4 = reinterpret_cast<void**>(0x420);
            *reinterpret_cast<int32_t*>(&rdx4 + 4) = 0;
            fun_140003898(0, 0x420, r8_3, r9_9);
            rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
        }
        rcx10 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp7) + 48);
        fun_14000dcc4(rcx10, rcx10);
        rsp11 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
    } else {
        fun_14000dcc4(0, 0);
        free(0);
        rsp11 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8 - 8 + 8);
    }
    rax12 = fun_140010130(rax2 ^ reinterpret_cast<uint64_t>(rsp1) ^ reinterpret_cast<uint64_t>(rsp11), rdx4, r8_3);
    return rax12;
}

void fun_14000bfe0(void** rcx, void** rdx, void** r8, void** r9, ...) {
    fun_14000c044(rcx, reinterpret_cast<int64_t>(__zero_stack_offset()) + 16);
    return;
}

void** fun_140003ae0(int32_t* rcx, void** rdx, void** r8, void** r9) {
    void** rax5;
    void** rbx6;
    void** rsi7;
    int32_t* r14_8;
    signed char bpl9;
    void** rdi10;
    void** rbx11;
    void** rcx12;

    rax5 = reinterpret_cast<void**>(__zero_stack_offset());
    rbx6 = r8;
    rsi7 = rdx;
    r14_8 = rcx;
    bpl9 = 1;
    rdi10 = r8;
    if (*reinterpret_cast<void***>(r8)) {
        do {
            rdi10 = rdi10 + 2;
        } while (*reinterpret_cast<void***>(rdi10));
    }
    *rcx = 0;
    if (reinterpret_cast<unsigned char>(rbx6) < reinterpret_cast<unsigned char>(rdi10)) {
        while (rax5 = reinterpret_cast<void**>(wcsspn(rbx6, " ")), rbx11 = rbx6 + reinterpret_cast<unsigned char>(rax5) * 2, reinterpret_cast<unsigned char>(rbx11) < reinterpret_cast<unsigned char>(rdi10)) {
            if (rsi7) {
                *reinterpret_cast<void***>(rsi7) = rbx11;
                rsi7 = rsi7 + 8;
            }
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx11) == 34)) {
                rax5 = reinterpret_cast<void**>(wcspbrk(rbx11, " "));
                rbx6 = rax5;
                if (!rax5) {
                    addr_140003c1a_10:
                    if (bpl9) {
                        bpl9 = 0;
                        if (!rbx6) 
                            goto addr_140003c50_12;
                        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx6) == 47) && rsi7) {
                            *reinterpret_cast<void***>(rbx6) = reinterpret_cast<void**>(0);
                            rcx12 = *reinterpret_cast<void***>(rsi7 + 0xfffffffffffffff8);
                            rax5 = fun_14000dcc4(rcx12, rcx12);
                            *reinterpret_cast<void***>(rsi7 + 0xfffffffffffffff8) = rax5;
                            *reinterpret_cast<void***>(rbx6) = reinterpret_cast<void**>(47);
                            rbx6 = rbx6 - 2;
                        }
                    }
                } else {
                    do {
                        if (reinterpret_cast<unsigned char>(rbx6) >= reinterpret_cast<unsigned char>(rdi10)) 
                            break;
                    } while (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx6) == 47) && (!bpl9 && (rax5 = reinterpret_cast<void**>(wcspbrk(rbx6 + 2, " ")), rbx6 = rax5, !!rax5)));
                    if (!rbx6) 
                        goto addr_140003c1a_10;
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx6) == 34)) 
                        goto addr_140003c1a_10; else 
                        goto addr_140003bf6_19;
                }
            } else {
                rbx6 = rbx11 + 2;
                if (reinterpret_cast<unsigned char>(rbx6) >= reinterpret_cast<unsigned char>(rdi10)) {
                    addr_140003c60_21:
                    *r14_8 = *r14_8 + 1;
                    if (reinterpret_cast<unsigned char>(rbx6) < reinterpret_cast<unsigned char>(rdi10)) 
                        continue; else 
                        break;
                } else {
                    do {
                        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx6) == 92)) {
                            if (*reinterpret_cast<void***>(rbx6) == 34) 
                                break;
                        } else {
                            rbx6 = rbx6 + 2;
                        }
                        rbx6 = rbx6 + 2;
                    } while (reinterpret_cast<unsigned char>(rbx6) < reinterpret_cast<unsigned char>(rdi10));
                    if (reinterpret_cast<unsigned char>(rbx6) >= reinterpret_cast<unsigned char>(rdi10)) 
                        goto addr_140003c60_21;
                }
                rax5 = reinterpret_cast<void**>(wcspbrk(rbx6 + 2, " "));
                rbx6 = rax5;
            }
            if (rbx6) {
                addr_140003c53_29:
                if (rsi7) {
                    *reinterpret_cast<void***>(rbx6) = reinterpret_cast<void**>(0);
                    rbx6 = rbx6 + 2;
                    goto addr_140003c60_21;
                }
            } else {
                addr_140003c50_12:
                rbx6 = rdi10;
                goto addr_140003c53_29;
            }
            addr_140003bf6_19:
            do {
                rbx6 = rbx6 + 2;
                if (reinterpret_cast<unsigned char>(rbx6) >= reinterpret_cast<unsigned char>(rdi10)) 
                    break;
            } while (*reinterpret_cast<void***>(rbx6) != 34);
            rax5 = reinterpret_cast<void**>(wcspbrk(rbx6, " "));
            rbx6 = rax5;
            goto addr_140003c1a_10;
        }
    }
    if (rsi7) {
        *reinterpret_cast<void***>(rsi7) = reinterpret_cast<void**>(0);
    }
    return rax5;
}

int64_t iswalpha = 0x1495c;

int64_t _wcsnicmp = 0x1498c;

int64_t _wputenv = 0x14980;

int64_t _chdrive = 0x14968;

void** fun_140004564(void** rcx, void** rdx, void** r8, void** r9);

int64_t _wchdir = 0x14998;

void** fun_140004690(void** ecx, void** rdx, void** r8, void** r9) {
    void** rbx5;
    void** ebp6;
    void** r14_7;
    void** rsi8;
    void** r15_9;
    int64_t rcx10;
    int32_t eax11;
    void** rax12;
    void** r8_13;
    void** rdx14;
    void** rbx15;
    void** edi16;
    void** rcx17;
    int32_t eax18;
    void** rax19;
    uint32_t eax20;
    int1_t zf21;
    void** rax22;
    void** rcx23;
    int64_t rcx24;
    void** rcx25;
    void** rbx26;
    int64_t rcx27;

    rbx5 = *reinterpret_cast<void***>(rdx);
    ebp6 = ecx;
    r14_7 = *reinterpret_cast<void***>(rdx + 8);
    rsi8 = r8;
    r15_9 = rdx;
    *reinterpret_cast<uint32_t*>(&rcx10) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx5));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
    eax11 = reinterpret_cast<int32_t>(iswalpha(rcx10));
    if (!eax11 || (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx5 + 2) == 58) || *reinterpret_cast<void***>(rbx5 + 4))) {
        rax12 = reinterpret_cast<void**>(_wcsicmp(rbx5, "s"));
        if (rax12) {
            *reinterpret_cast<uint32_t*>(&r8_13) = 2;
            *reinterpret_cast<int32_t*>(&r8_13 + 4) = 0;
            rdx14 = reinterpret_cast<void**>("c");
            rax12 = reinterpret_cast<void**>(_wcsnicmp(rbx5, "c", 2));
            if (rax12) {
                *reinterpret_cast<uint32_t*>(&r8_13) = 5;
                *reinterpret_cast<int32_t*>(&r8_13 + 4) = 0;
                rdx14 = reinterpret_cast<void**>("c");
                rax12 = reinterpret_cast<void**>(_wcsnicmp(rbx5, "c", 5));
                if (rax12) 
                    goto addr_140004892_5;
                rbx15 = rbx5 + 10;
            } else {
                rbx15 = rbx5 + 4;
            }
            if (reinterpret_cast<signed char>(ebp6) > reinterpret_cast<signed char>(2)) 
                goto addr_140004892_5;
            edi16 = reinterpret_cast<void**>(1);
            while (ebp6) {
                rcx17 = *reinterpret_cast<void***>(r15_9);
                ebp6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp6) - reinterpret_cast<unsigned char>(1));
                rdx14 = rcx17;
                if (*reinterpret_cast<void***>(rcx17)) {
                    while (1) {
                        *reinterpret_cast<uint32_t*>(&r8_13) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdx14));
                        *reinterpret_cast<int32_t*>(&r8_13 + 4) = 0;
                        *reinterpret_cast<int32_t*>(&r9) = 0xfffd;
                        *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                        eax18 = static_cast<int32_t>(reinterpret_cast<uint64_t>(r8_13 + 0xffffffffffffffa4));
                        if (!(0xfffd & *reinterpret_cast<uint16_t*>(&eax18))) {
                            rax19 = rdx14 + 2;
                            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rax19) == 34)) {
                                *reinterpret_cast<void***>(rcx17) = r8_13;
                                rdx14 = rax19;
                                rcx17 = rcx17 + 2;
                            }
                            eax20 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdx14));
                            *reinterpret_cast<void***>(rcx17) = *reinterpret_cast<void***>(&eax20);
                        } else {
                            if (r8_13 == 34) {
                                addr_140004812_17:
                                rdx14 = rdx14 + 2;
                                if (*reinterpret_cast<void***>(rdx14)) 
                                    continue; else 
                                    break;
                            } else {
                                *reinterpret_cast<void***>(rcx17) = r8_13;
                            }
                        }
                        rcx17 = rcx17 + 2;
                        goto addr_140004812_17;
                    }
                }
                *reinterpret_cast<void***>(rcx17) = reinterpret_cast<void**>(0);
                r15_9 = r15_9 + 8;
            }
            if (*reinterpret_cast<void***>(rbx15)) 
                goto addr_140004855_22;
            if (r14_7) 
                goto addr_140004833_24;
        } else {
            edi16 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint64_t>(rax12 + 1)));
            if (ebp6 == edi16) 
                goto addr_140004892_5;
            zf21 = g140015800 == 0;
            if (zf21) 
                goto addr_140004892_5;
            rax12 = fun_140004288(rbx5, "s");
            if (!rax12) 
                goto addr_140004892_5;
            if (!*reinterpret_cast<void***>(rax12)) 
                goto addr_140004892_5;
            rax22 = fun_14000dcc4(rax12, rax12);
            rax12 = reinterpret_cast<void**>(_wputenv(rax22, "s"));
            *reinterpret_cast<void***>(rsi8) = rax12;
            if (reinterpret_cast<int1_t>(rax12 == 0xffffffff)) {
                *reinterpret_cast<uint32_t*>(&rcx23) = g140025c24;
                *reinterpret_cast<int32_t*>(&rcx23 + 4) = 0;
                rax12 = fun_140003898(rcx23, 0x41f, r8, r9);
                goto addr_140004886_31;
            }
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rcx24) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx5));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = 0;
        towupper(rcx24);
        _chdrive();
        rax12 = reinterpret_cast<void**>(1);
        *reinterpret_cast<int32_t*>(&rax12 + 4) = 0;
        *reinterpret_cast<void***>(rsi8) = reinterpret_cast<void**>(0);
        goto addr_140004894_33;
    }
    addr_140004855_22:
    rax12 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx15))));
    *reinterpret_cast<int32_t*>(&rax12 + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rax12) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax12) - 46);
    if (*reinterpret_cast<uint16_t*>(&rax12) <= 1 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx15) == 92)) {
        rcx25 = rbx15;
    } else {
        addr_140004892_5:
        *reinterpret_cast<signed char*>(&rax12) = 0;
        goto addr_140004894_33;
    }
    addr_14000486a_35:
    rax12 = fun_140004564(rcx25, rdx14, r8_13, r9);
    rbx26 = rax12;
    rax12 = reinterpret_cast<void**>(_wchdir(rax12, rdx14, r8_13));
    *reinterpret_cast<void***>(rsi8) = rax12;
    free(rbx26, rdx14, r8_13);
    addr_140004886_31:
    if (*reinterpret_cast<void***>(rsi8)) {
        *reinterpret_cast<void***>(rsi8) = edi16;
    }
    *reinterpret_cast<signed char*>(&rax12) = *reinterpret_cast<signed char*>(&edi16);
    addr_140004894_33:
    return rax12;
    addr_140004833_24:
    *reinterpret_cast<uint32_t*>(&rcx27) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r14_7));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx27) + 4) = 0;
    rax12 = reinterpret_cast<void**>(iswalpha(rcx27, rdx14, r8_13));
    if (!rax12) 
        goto addr_140004850_38;
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r14_7 + 2) == 58)) 
        goto addr_140004850_38;
    if (!*reinterpret_cast<void***>(r14_7 + 4)) 
        goto addr_140004892_5;
    addr_140004850_38:
    rcx25 = r14_7;
    goto addr_14000486a_35;
}

void** fun_140008044(signed char cl, void** rdx, void** r8, void** r9);

void** fun_140008128(int64_t rcx, void** rdx, void** r8, void** r9);

void** g1400364a8;

void** g1400364b8;

void** fun_140006490() {
    void** rdx1;
    void** r8_2;
    void** r9_3;
    void** ax4;
    void* rsp5;
    uint32_t ebx6;
    void** rcx7;
    void** rdx8;
    void** r8_9;
    void** r9_10;
    int64_t rcx11;
    int32_t edi12;
    void** r8_13;
    void** r9_14;
    void** rax15;
    void* rsp16;
    uint32_t ebx17;
    struct s6* rax18;
    void** rcx19;
    void** rdx20;
    void** r8_21;
    void** r9_22;
    void** rax23;
    void** rax24;
    void** r8_25;
    void** r9_26;
    void** rcx27;
    int64_t rax28;
    void** rcx29;
    uint16_t ax30;
    void** rax31;
    int64_t rcx32;
    void** rcx33;
    uint16_t ax34;
    void** rcx35;
    void** rdx36;
    int64_t rcx37;
    void** rdi38;
    int64_t rax39;
    void* rsp40;
    void** rbx41;
    void** r8_42;
    void** rax43;
    void** rax44;
    void** rcx45;

    ax4 = fun_140008044(1, rdx1, r8_2, r9_3);
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32 - 8 + 8);
    ebx6 = reinterpret_cast<uint16_t>(ax4);
    if (ax4 == 10 || reinterpret_cast<int1_t>(ax4 == 0xffff)) {
        *reinterpret_cast<uint32_t*>(&rcx7) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx7 + 4) = 0;
        rdx8 = reinterpret_cast<void**>(0x3fa);
        *reinterpret_cast<int32_t*>(&rdx8 + 4) = 0;
        fun_140003898(rcx7, 0x3fa, r8_9, r9_10);
        rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
    }
    *reinterpret_cast<uint32_t*>(&rcx11) = *reinterpret_cast<uint16_t*>(&ebx6);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
    edi12 = 0;
    while ((*reinterpret_cast<signed char*>(&rdx8) = 1, rax15 = fun_140008128(rcx11, rdx8, r8_13, r9_14), rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8), ebx17 = *reinterpret_cast<uint16_t*>(&rax15), *reinterpret_cast<uint16_t*>(&rax15) != 35) && (*reinterpret_cast<void***>(&ebx17) != 10 && *reinterpret_cast<void***>(&ebx17) != 0xffff)) {
        rdx8 = g1400364a8;
        if (reinterpret_cast<unsigned char>(rdx8) < reinterpret_cast<unsigned char>(2) || (*reinterpret_cast<int32_t*>(&rax18) = edi12, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0, reinterpret_cast<uint64_t>(rax18) > reinterpret_cast<uint64_t>(rdx8 + 0xfffffffffffffffe))) {
            rcx19 = g1400364b8;
            rdx20 = rdx8 + 0x400;
            g1400364a8 = rdx20;
            if (rcx19) {
                rdx8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx20) * 2 + 2);
                rax23 = fun_140009274(rcx19, rdx8, r8_21, r9_22);
                rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
            } else {
                rax24 = reinterpret_cast<void**>(2 * reinterpret_cast<uint64_t>(rdx20 + 1));
                rdx8 = __intrinsic();
                if (__intrinsic()) {
                    rax24 = reinterpret_cast<void**>(0xffffffffffffffff);
                }
                rax23 = fun_140009214(rax24, rdx8, r8_25, r9_26);
                rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
            }
            g1400364b8 = rax23;
            rcx27 = rax23;
        } else {
            rcx27 = g1400364b8;
        }
        *reinterpret_cast<int32_t*>(&rax28) = edi12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = 0;
        ++edi12;
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rcx27) + reinterpret_cast<uint64_t>(rax28 * 2)) = *reinterpret_cast<void***>(&ebx17);
        rcx29 = g140026480;
        ax30 = reinterpret_cast<uint16_t>(getwc(rcx29, rdx8));
        rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
        *reinterpret_cast<uint32_t*>(&rcx11) = ax30;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
    }
    rax31 = g1400364b8;
    *reinterpret_cast<int32_t*>(&rcx32) = edi12;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx32) + 4) = 0;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax31) + reinterpret_cast<uint64_t>(rcx32 * 2)) = reinterpret_cast<void**>(0);
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&ebx17) == 35)) {
        do {
            rcx33 = g140026480;
            ax34 = reinterpret_cast<uint16_t>(getwc(rcx33, rdx8));
            rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
            ebx17 = ax34;
            if (ax34 == 10) 
                break;
        } while (*reinterpret_cast<void***>(&ebx17) != 0xffff);
        goto addr_1400065c5_18;
    }
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&ebx17) == 0xffff)) {
        addr_1400065d5_20:
        rcx35 = g1400364b8;
    } else {
        addr_1400065c5_18:
        rdx36 = g140026480;
        *reinterpret_cast<uint32_t*>(&rcx37) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&ebx17));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx37) + 4) = 0;
        ungetwc(rcx37, rdx36);
        rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
        goto addr_1400065d5_20;
    }
    rdi38 = rcx35;
    rax39 = reinterpret_cast<int64_t>(wcschr());
    rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) + 32 + 8 - 8 - 64 - 8 + 8);
    if (rax39 && (fun_14000dfd0(rdi38, reinterpret_cast<int64_t>(rsp40) + 80, 0, 0), rbx41 = reinterpret_cast<void**>(0), r8_42 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp40) - 8 + 8 + 80), rax43 = fun_14000e740(rdi38, -1, r8_42, rdi38, -1, r8_42), rdi38 = rax43, rax44 = reinterpret_cast<void**>(0), !1)) {
        rcx45 = g14003d0e0;
        do {
            rbx41 = *reinterpret_cast<void***>(rbx41);
            *reinterpret_cast<void***>(rax44) = rcx45;
            rcx45 = rax44;
            rax44 = rbx41;
        } while (rbx41);
        g14003d0e0 = rcx45;
    }
    return rdi38;
}

void** g1400364b0;

void** fun_1400065f8(void** rcx, void** rdx, void** r8, void** r9);

void** fun_140006b10(void** rcx, void** rdx, void** r8, void** r9, unsigned char a5) {
    void* rsp6;
    void** rcx7;
    void** rax8;
    void** rcx9;
    int1_t zf10;
    int1_t zf11;
    void** rcx12;
    void** rcx13;
    void** rcx14;
    void** rax15;
    void* rsp16;
    void** rcx17;

    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32);
    while (1) {
        rcx7 = g140026480;
        rax8 = reinterpret_cast<void**>(getwc(rcx7, rdx));
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
        if (*reinterpret_cast<int16_t*>(&rax8) == 33) {
            addr_140006bce_3:
            rcx9 = g1400364b0;
            if (rcx9 && (zf10 = rcx9 == g1400364b8, !zf10)) {
                free();
                rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
            }
        } else {
            do {
                if (*reinterpret_cast<int16_t*>(&rax8) == -1) 
                    goto addr_140006bc8_6;
                ++g140025c20;
                while (1) {
                    if (*reinterpret_cast<int16_t*>(&rax8) == 92) {
                        *reinterpret_cast<signed char*>(&rdx) = 1;
                        rax8 = fun_140008128(92, rdx, r8, r9);
                        rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
                        if (*reinterpret_cast<int16_t*>(&rax8) != 33) 
                            goto addr_140006b67_10;
                        zf11 = g140015041 == 0;
                        if (!zf11) 
                            goto addr_140006bce_3;
                        addr_140006b67_10:
                        g140015041 = reinterpret_cast<void**>(0);
                    }
                    if (*reinterpret_cast<int16_t*>(&rax8) == 35) 
                        break;
                    if (*reinterpret_cast<int16_t*>(&rax8) == 10) 
                        goto addr_140006ba6_14;
                    if (*reinterpret_cast<int16_t*>(&rax8) == -1) 
                        goto addr_140006bc8_6;
                    rcx12 = g140026480;
                    rax8 = reinterpret_cast<void**>(getwc(rcx12, rdx));
                    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
                }
                do {
                    rcx13 = g140026480;
                    rax8 = reinterpret_cast<void**>(getwc(rcx13, rdx));
                    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
                    if (*reinterpret_cast<int16_t*>(&rax8) == 10) 
                        break;
                } while (*reinterpret_cast<int16_t*>(&rax8) != -1);
                goto addr_140006bc8_6;
                addr_140006ba6_14:
                if (*reinterpret_cast<int16_t*>(&rax8) == -1) 
                    goto addr_140006bc8_6;
                if (*reinterpret_cast<int16_t*>(&rax8) == 33) 
                    goto addr_140006bce_3;
                rcx14 = g140026480;
                rax8 = reinterpret_cast<void**>(getwc(rcx14, rdx));
                rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
            } while (*reinterpret_cast<int16_t*>(&rax8) != 33);
            goto addr_140006bc8_6;
        }
        rax15 = fun_140006490();
        rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
        rdx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp16) + 48);
        g1400364b0 = rax15;
        rax8 = fun_1400065f8(rax15, rdx, r8, r9);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
        if (a5 <= 8) 
            break;
        ++g140025c20;
        continue;
        addr_140006bc8_6:
        if (*reinterpret_cast<int16_t*>(&rax8) != 33) 
            goto addr_140006c14_23; else 
            goto addr_140006bce_3;
    }
    addr_140006c29_24:
    return rax8;
    addr_140006c14_23:
    if (*reinterpret_cast<int16_t*>(&rax8) == -1) {
        *reinterpret_cast<uint32_t*>(&rcx17) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx17 + 4) = 0;
        rax8 = fun_140003898(rcx17, 0x3fc, r8, r9);
        goto addr_140006c29_24;
    }
}

void fun_140007b64(signed char cl, void** rdx, void** r8, void** r9);

void** fun_140008128(int64_t rcx, void** rdx, void** r8, void** r9) {
    signed char bl5;
    void** ax6;
    void** rcx7;
    void** ax8;
    void** rcx9;
    int1_t zf10;
    void** ax11;
    void** rcx12;
    void** rax13;
    void** rdx14;
    int64_t rcx15;

    bl5 = *reinterpret_cast<signed char*>(&rdx);
    while (*reinterpret_cast<uint16_t*>(&rcx) == 92) {
        if (!bl5) {
            ax6 = fun_14000613c();
        } else {
            rcx7 = g140026480;
            ax6 = reinterpret_cast<void**>(getwc(rcx7));
        }
        if (!reinterpret_cast<int1_t>(ax6 == 10)) 
            goto addr_1400081d8_7;
        ++g140025c20;
        g140015041 = reinterpret_cast<void**>(1);
        if (!bl5) {
            ax8 = fun_14000613c();
        } else {
            rcx9 = g140026480;
            ax8 = reinterpret_cast<void**>(getwc(rcx9));
        }
        *reinterpret_cast<uint32_t*>(&rcx) = reinterpret_cast<uint16_t>(ax8);
        if (!reinterpret_cast<int1_t>(ax8 == 59)) 
            goto addr_140008193_12;
        zf10 = g140026489 == 0;
        if (!zf10) 
            goto addr_140008199_14;
        addr_140008193_12:
        if (*reinterpret_cast<uint16_t*>(&rcx) != 35) 
            continue;
        addr_140008199_14:
        fun_140007b64(bl5, rdx, r8, r9);
        ++g140025c20;
        if (!bl5) {
            ax11 = fun_14000613c();
        } else {
            rcx12 = g140026480;
            ax11 = reinterpret_cast<void**>(getwc(rcx12));
        }
        *reinterpret_cast<uint32_t*>(&rcx) = reinterpret_cast<uint16_t>(ax11);
    }
    *reinterpret_cast<uint32_t*>(&rax13) = *reinterpret_cast<uint16_t*>(&rcx);
    *reinterpret_cast<int32_t*>(&rax13 + 4) = 0;
    addr_1400081cd_19:
    return rax13;
    addr_1400081d8_7:
    rdx14 = g140026480;
    *reinterpret_cast<uint32_t*>(&rcx15) = reinterpret_cast<uint16_t>(ax6);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = 0;
    ungetwc(rcx15, rdx14);
    *reinterpret_cast<uint32_t*>(&rax13) = 92;
    *reinterpret_cast<int32_t*>(&rax13 + 4) = 0;
    goto addr_1400081cd_19;
}

int64_t fgetws = 0x148e8;

void** g140025c50;

int64_t feof = 0x14a74;

signed char fun_140006c34(void** rcx, void** rdx) {
    void* rsp3;
    void** r8_4;
    int64_t rax5;
    int1_t zf6;
    signed char bl7;
    void* r8_8;
    int16_t* rax9;
    uint64_t rcx10;
    int32_t eax11;
    void** rcx12;
    int32_t eax13;
    uint32_t eax14;
    void** r9_15;
    int64_t r9_16;
    signed char al17;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32);
    g140025c20 = 0;
    while (r8_4 = g140026480, rax5 = reinterpret_cast<int64_t>(fgetws(0x140025c50, 0x400, r8_4)), rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8), !!rax5) {
        zf6 = reinterpret_cast<int1_t>(g140025c50 == 91);
        if (zf6) {
            bl7 = 0;
            while ((r8_8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) + 48), rax9 = reinterpret_cast<int16_t*>(wcstok_s()), rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8), !!rax9) && !bl7) {
                rcx10 = 0xffffffffffffffff;
                do {
                    ++rcx10;
                } while (rax9[rcx10]);
                if (*(rax9 + rcx10 - 1) == 93) {
                    bl7 = 1;
                    *(rax9 + rcx10 - 1) = 0;
                }
                eax11 = reinterpret_cast<int32_t>(_wcsicmp(rax9, "n", r8_8));
                rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
                if (!eax11) 
                    goto addr_140006cdc_11;
            }
        }
        ++g140025c20;
    }
    rcx12 = g140026480;
    eax13 = reinterpret_cast<int32_t>(feof(rcx12, 0x400, r8_4));
    if (!eax13) {
        eax14 = g140025c20;
        g140025c24 = eax14;
        fun_140003898(0, 0x41d, r8_4, r9_15, 0, 0x41d, r8_4, r9_16);
    }
    al17 = 0;
    addr_140006d0b_17:
    return al17;
    addr_140006cdc_11:
    al17 = 1;
    goto addr_140006d0b_17;
}

signed char fun_140008bcc(void** rcx, void** rdx, void** r8, void** r9);

void** fun_1400069a4(void** rcx, unsigned char dl, void** r8, void** r9);

void** fun_14000613c() {
    void** rcx1;
    int32_t eax2;
    void* rsp3;
    void** rcx4;
    int1_t zf5;
    void** rdx6;
    int64_t rcx7;
    void** r8_8;
    void* rsp9;
    void** rdi10;
    void** rax11;
    int1_t zf12;
    void** rdx13;
    unsigned char sil14;
    void** r9_15;
    void** rax16;
    unsigned char v17;
    void** rbx18;
    int1_t zf19;
    void** rcx20;
    void** r9_21;
    void** r9_22;
    signed char al23;
    void** r9_24;
    void** rax25;
    void* rsp26;
    int64_t rax27;
    void* rsp28;
    void** rcx29;
    void** r9_30;
    void** rax31;
    int32_t eax32;
    void* rsp33;
    void** r9_34;
    void** r9_35;
    void** rcx36;
    void** r9_37;
    uint32_t eax38;
    uint32_t eax39;
    int64_t rcx40;
    uint16_t ax41;
    int64_t rax42;
    void* rsp43;
    int1_t zf44;
    int64_t rcx45;
    uint16_t ax46;
    int64_t rax47;
    uint32_t ecx48;
    void** r9_49;
    void** rcx50;
    void** r9_51;
    uint32_t eax52;
    void** rcx53;
    void** r9_54;
    int64_t rcx55;
    uint16_t ax56;
    int64_t rdx57;
    int64_t rax58;
    void* rsp59;
    int1_t zf60;
    int64_t rcx61;
    uint16_t ax62;
    int64_t rdx63;
    int64_t rax64;
    uint32_t ecx65;
    void** r9_66;
    void** rcx67;
    void** r9_68;
    void** rcx69;

    rcx1 = g140026480;
    *reinterpret_cast<void***>(&eax2) = reinterpret_cast<void**>(getwc(rcx1));
    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 32 - 8 + 8);
    while ((rcx4 = g1400364b0, !!rcx4) || (zf5 = g140015041 == 0, !zf5) && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax2) == 33)) {
        g140015041 = reinterpret_cast<void**>(0);
        if (rcx4) {
            rdx6 = g140026480;
            *reinterpret_cast<uint32_t*>(&rcx7) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&eax2));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
            ungetwc(rcx7, rdx6, r8_8);
            rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
            rdi10 = g1400364b0;
            g1400364b0 = reinterpret_cast<void**>(0);
        } else {
            rax11 = fun_140006490();
            rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
            rdi10 = rax11;
        }
        zf12 = rdi10 == g1400364b8;
        rdx13 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp9) + 80);
        sil14 = reinterpret_cast<uint1_t>(!zf12);
        rax16 = fun_1400065f8(rdi10, rdx13, r8_8, r9_15);
        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) - 8 + 8);
        *reinterpret_cast<unsigned char*>(&rdx13) = v17;
        rbx18 = rax16;
        if (*reinterpret_cast<unsigned char*>(&rdx13) == 9) {
            zf19 = g140026489 == 0;
            if (!zf19) {
                *reinterpret_cast<uint32_t*>(&rcx20) = g140025c20;
                *reinterpret_cast<int32_t*>(&rcx20 + 4) = 0;
                r8_8 = rdi10;
                rdx13 = reinterpret_cast<void**>(0x409);
                *reinterpret_cast<int32_t*>(&rdx13 + 4) = 0;
                fun_140003898(rcx20, 0x409, r8_8, r9_21);
                rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
            }
            al23 = fun_140008bcc(rbx18, rdx13, r8_8, r9_22);
            rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
            if (al23 != 18) 
                goto addr_140006461_10; else 
                goto addr_14000620a_11;
        }
        if (*reinterpret_cast<unsigned char*>(&rdx13) != 10) {
            if (*reinterpret_cast<unsigned char*>(&rdx13) != 11) {
                if (*reinterpret_cast<unsigned char*>(&rdx13) != 12) {
                    if (*reinterpret_cast<unsigned char*>(&rdx13) != 13) {
                        fun_1400069a4(rax16, *reinterpret_cast<unsigned char*>(&rdx13), r8_8, r9_24);
                        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
                        goto addr_140006461_10;
                    } else {
                        rax25 = reinterpret_cast<void**>(wcstok_s(rax16, " ", reinterpret_cast<int64_t>(rsp3) + 88));
                        rsp26 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
                        r8_8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp26) + 88);
                        rdx13 = reinterpret_cast<void**>(" ");
                        rax27 = reinterpret_cast<int64_t>(wcstok_s());
                        rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp26) - 8 + 8);
                        if (rax27) {
                            *reinterpret_cast<uint32_t*>(&rcx29) = g140025c20;
                            *reinterpret_cast<int32_t*>(&rcx29 + 4) = 0;
                            r8_8 = rax25;
                            rdx13 = reinterpret_cast<void**>(0x409);
                            *reinterpret_cast<int32_t*>(&rdx13 + 4) = 0;
                            fun_140003898(rcx29, 0x409, r8_8, r9_30);
                            rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
                        }
                        rax31 = fun_14000918c(rax25, rax25);
                        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
                        if (rax31) {
                            *reinterpret_cast<void***>(rax31 + 24) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax31 + 24)) | 16);
                            goto addr_140006461_10;
                        }
                    }
                } else {
                    *reinterpret_cast<int32_t*>(&r8_8) = 2;
                    *reinterpret_cast<int32_t*>(&r8_8 + 4) = 0;
                    eax32 = reinterpret_cast<int32_t>(_wcsnicmp(rax16, "\\", 2));
                    rsp33 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
                    if (!eax32) {
                        fun_14000bfe0("\t", "\\", 2, r9_34);
                        rsp33 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp33) - 8 + 8);
                        rbx18 = rbx18 + 4;
                    }
                    rdx13 = rbx18;
                    fun_1400039c0(13, rdx13, 2, r9_35);
                    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp33) - 8 + 8);
                    goto addr_140006461_10;
                }
            } else {
                *reinterpret_cast<uint32_t*>(&rcx36) = g140025c20;
                *reinterpret_cast<int32_t*>(&rcx36 + 4) = 0;
                r8_8 = rax16;
                rdx13 = reinterpret_cast<void**>(0x41a);
                *reinterpret_cast<int32_t*>(&rdx13 + 4) = 0;
                fun_140003898(rcx36, 0x41a, r8_8, r9_37);
                rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
                goto addr_140006461_10;
            }
        }
        if (!*reinterpret_cast<void***>(rax16)) {
            addr_140006461_10:
            g140015041 = reinterpret_cast<void**>(1);
            if (sil14) {
                free(rdi10, rdx13, r8_8);
                rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
            }
        } else {
            do {
                eax38 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx18));
                if (eax38 == 43) {
                    rbx18 = rbx18 + 2;
                    eax39 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx18));
                    if (!*reinterpret_cast<uint16_t*>(&eax39)) 
                        goto addr_140006461_10;
                    do {
                        if (*reinterpret_cast<uint16_t*>(&eax39) == 45) 
                            break;
                        *reinterpret_cast<uint32_t*>(&rcx40) = *reinterpret_cast<uint16_t*>(&eax39);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx40) + 4) = 0;
                        ax41 = reinterpret_cast<uint16_t>(towupper(rcx40, rdx13, r8_8));
                        rdx13 = reinterpret_cast<void**>(static_cast<uint32_t>(ax41));
                        *reinterpret_cast<int32_t*>(&rdx13 + 4) = 0;
                        rax42 = reinterpret_cast<int64_t>(wcschr("D", rdx13, r8_8));
                        rsp43 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8 - 8 + 8);
                        if (rax42 || (zf44 = g140026489 == 0, !zf44) && (*reinterpret_cast<uint32_t*>(&rcx45) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx18)), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx45) + 4) = 0, ax46 = reinterpret_cast<uint16_t>(towupper(rcx45, rdx13, r8_8)), rdx13 = reinterpret_cast<void**>(static_cast<uint32_t>(ax46)), *reinterpret_cast<int32_t*>(&rdx13 + 4) = 0, rax47 = reinterpret_cast<int64_t>(wcschr("A", rdx13, r8_8)), rsp43 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp43) - 8 + 8 - 8 + 8), !!rax47)) {
                            ecx48 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx18));
                            *reinterpret_cast<unsigned char*>(&rdx13) = 1;
                            fun_14000b804(*reinterpret_cast<uint16_t*>(&ecx48), 1, r8_8, r9_49);
                            rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp43) - 8 + 8);
                        } else {
                            *reinterpret_cast<uint32_t*>(&rcx50) = g140025c20;
                            *reinterpret_cast<int32_t*>(&rcx50 + 4) = 0;
                            rdx13 = reinterpret_cast<void**>(0x400);
                            *reinterpret_cast<int32_t*>(&rdx13 + 4) = 0;
                            fun_140003898(rcx50, 0x400, r8_8, r9_51);
                            rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp43) - 8 + 8);
                        }
                        rbx18 = rbx18 + 2;
                        eax39 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx18));
                    } while (*reinterpret_cast<uint16_t*>(&eax39));
                    if (!*reinterpret_cast<void***>(rbx18)) 
                        goto addr_140006461_10; else 
                        goto addr_140006305_36;
                }
                if (eax38 == 45) {
                    addr_140006305_36:
                    rbx18 = rbx18 + 2;
                    eax52 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx18));
                    if (!*reinterpret_cast<uint16_t*>(&eax52)) 
                        goto addr_140006461_10;
                } else {
                    if (*reinterpret_cast<int16_t*>(&eax38) != 32 && eax38 != 9) {
                        *reinterpret_cast<uint32_t*>(&rcx53) = g140025c20;
                        *reinterpret_cast<int32_t*>(&rcx53 + 4) = 0;
                        rdx13 = reinterpret_cast<void**>(0x400);
                        *reinterpret_cast<int32_t*>(&rdx13 + 4) = 0;
                        fun_140003898(rcx53, 0x400, r8_8, r9_54);
                        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
                        goto addr_140006388_40;
                    }
                }
                do {
                    if (*reinterpret_cast<uint16_t*>(&eax52) == 43) 
                        break;
                    *reinterpret_cast<uint32_t*>(&rcx55) = *reinterpret_cast<uint16_t*>(&eax52);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx55) + 4) = 0;
                    ax56 = reinterpret_cast<uint16_t>(towupper(rcx55, rdx13, r8_8));
                    *reinterpret_cast<uint32_t*>(&rdx57) = ax56;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx57) + 4) = 0;
                    rax58 = reinterpret_cast<int64_t>(wcschr("D", rdx57, r8_8));
                    rsp59 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8 - 8 + 8);
                    if (rax58 || (zf60 = g140026489 == 0, !zf60) && (*reinterpret_cast<uint32_t*>(&rcx61) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx18)), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx61) + 4) = 0, ax62 = reinterpret_cast<uint16_t>(towupper(rcx61, rdx57, r8_8)), *reinterpret_cast<uint32_t*>(&rdx63) = ax62, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx63) + 4) = 0, rax64 = reinterpret_cast<int64_t>(wcschr("A", rdx63, r8_8)), rsp59 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp59) - 8 + 8 - 8 + 8), !!rax64)) {
                        ecx65 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx18));
                        rdx13 = reinterpret_cast<void**>(0);
                        *reinterpret_cast<int32_t*>(&rdx13 + 4) = 0;
                        fun_14000b804(*reinterpret_cast<uint16_t*>(&ecx65), 0, r8_8, r9_66);
                        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp59) - 8 + 8);
                    } else {
                        *reinterpret_cast<uint32_t*>(&rcx67) = g140025c20;
                        *reinterpret_cast<int32_t*>(&rcx67 + 4) = 0;
                        rdx13 = reinterpret_cast<void**>(0x400);
                        *reinterpret_cast<int32_t*>(&rdx13 + 4) = 0;
                        fun_140003898(rcx67, 0x400, r8_8, r9_68);
                        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp59) - 8 + 8);
                    }
                    rbx18 = rbx18 + 2;
                    eax52 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx18));
                } while (*reinterpret_cast<uint16_t*>(&eax52));
                addr_140006388_40:
                if (!*reinterpret_cast<void***>(rbx18)) 
                    goto addr_140006461_10;
                rbx18 = rbx18 + 2;
            } while (*reinterpret_cast<void***>(rbx18));
            goto addr_14000639e_47;
        }
        ++g140025c20;
        rcx69 = g140026480;
        *reinterpret_cast<void***>(&eax2) = reinterpret_cast<void**>(getwc(rcx69, rdx13, r8_8));
        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
        continue;
        addr_14000639e_47:
        goto addr_140006461_10;
    }
    addr_14000620d_49:
    return *reinterpret_cast<void***>(&eax2);
    addr_14000620a_11:
    eax2 = 32;
    goto addr_14000620d_49;
}

void** fun_140006dac(void*** rcx, void** rdx, void** r8, void** r9) {
    void*** rbx5;
    void*** r14_6;
    uint32_t edi7;
    void** rcx8;
    unsigned char sil9;
    void** rax10;
    void** rcx11;
    int64_t rdx12;
    void** rax13;
    uint32_t eax14;

    rbx5 = reinterpret_cast<void***>(0x140036e90);
    r14_6 = rcx;
    *reinterpret_cast<unsigned char*>(&edi7) = 0;
    rcx8 = *rcx;
    sil9 = 0;
    do {
        rax10 = reinterpret_cast<void**>(wcschr(rcx8, 60));
        if (!rax10) 
            break;
        rcx8 = rax10 + 2;
        edi7 = *reinterpret_cast<unsigned char*>(&edi7);
        if (*reinterpret_cast<void***>(rcx8) == 60) {
            edi7 = 1;
        }
    } while (!*reinterpret_cast<unsigned char*>(&edi7));
    goto addr_140006e0b_6;
    addr_140006ec5_7:
    return rax10;
    addr_140006e0b_6:
    rcx11 = rcx8 + 2;
    *reinterpret_cast<uint32_t*>(&rdx12) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx11));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = 0;
    if (*reinterpret_cast<void***>(&rdx12)) {
        do {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rdx12)) > reinterpret_cast<unsigned char>(62)) 
                goto addr_140006e39_10;
            if (static_cast<int1_t>(0x5000100000000600 >> rdx12)) 
                break;
            addr_140006e39_10:
            if (*reinterpret_cast<void***>(&rdx12) == 94) 
                break;
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&rdx12) == 34)) {
                sil9 = reinterpret_cast<uint1_t>(sil9 == 0);
            }
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&rdx12) == 32)) 
                goto addr_140006e57_15;
            if (!sil9) 
                break;
            addr_140006e57_15:
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&rdx12) == 36) || (rax13 = rcx11 + 2, !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rax13) == 40))) {
                *rbx5 = *reinterpret_cast<void***>(&rdx12);
                rbx5 = rbx5 + 2;
                rcx11 = rcx11 + 2;
            } else {
                *rbx5 = reinterpret_cast<void**>(36);
                rcx11 = rax13;
                rbx5 = rbx5 + 2;
                *rbx5 = reinterpret_cast<void**>(40);
                eax14 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax13));
                if (*reinterpret_cast<void***>(&eax14) == 10) 
                    break;
                do {
                    if (*reinterpret_cast<void***>(&eax14) == 41) 
                        break;
                    rcx11 = rcx11 + 2;
                    *rbx5 = *reinterpret_cast<void***>(&eax14);
                    rbx5 = rbx5 + 2;
                    eax14 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx11));
                } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax14) == 10));
                if (*reinterpret_cast<void***>(rcx11) == 10) 
                    break;
            }
            *reinterpret_cast<uint32_t*>(&rdx12) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx11));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = 0;
        } while (*reinterpret_cast<void***>(&rdx12));
    }
    *rbx5 = reinterpret_cast<void**>(0);
    rax10 = reinterpret_cast<void**>(0x140036e90);
    *r14_6 = rcx11;
    goto addr_140006ec5_7;
}

void*** fun_140006d18(void*** rcx, void** edx, void** r8, void** r9) {
    void*** rbx5;
    void*** rdi6;
    void** ax7;
    void*** rax8;
    void** rdx9;
    int64_t rcx10;

    rbx5 = rcx;
    rdi6 = rcx + reinterpret_cast<int32_t>(edx) * 2;
    ax7 = fun_14000613c();
    while (ax7) {
        if (ax7 == 0xffff) 
            goto addr_140006da2_4;
        *rbx5 = ax7;
        rbx5 = rbx5 + 2;
        if (rbx5 == rdi6) 
            goto addr_140006d8c_6;
        if (ax7 == 10) 
            goto addr_140006d7a_8;
        g140015041 = reinterpret_cast<void**>(0);
        ax7 = fun_14000613c();
    }
    addr_140006d67_10:
    rax8 = rbx5;
    addr_140006d6a_11:
    return rax8;
    addr_140006da2_4:
    *rbx5 = reinterpret_cast<void**>(0);
    *reinterpret_cast<int32_t*>(&rax8) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    goto addr_140006d6a_11;
    addr_140006d8c_6:
    rdx9 = g140026480;
    *reinterpret_cast<uint32_t*>(&rcx10) = reinterpret_cast<uint16_t>(ax7);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
    *(rbx5 - 2) = reinterpret_cast<void**>(0);
    ungetwc(rcx10, rdx9);
    goto addr_140006d67_10;
    addr_140006d7a_8:
    ++g140025c20;
    g140015041 = reinterpret_cast<void**>(1);
    *rbx5 = reinterpret_cast<void**>(0);
    goto addr_140006d67_10;
}

void fun_140007b64(signed char cl, void** rdx, void** r8, void** r9) {
    signed char bl5;
    void** ax6;
    void** rcx7;
    void** ax8;
    void** rcx9;
    int1_t zf10;
    void** rdx11;
    int64_t rcx12;

    bl5 = cl;
    while (1) {
        g140015041 = reinterpret_cast<void**>(0);
        do {
            if (!bl5) {
                ax6 = fun_14000613c();
            } else {
                rcx7 = g140026480;
                ax6 = reinterpret_cast<void**>(getwc(rcx7, rdx, r8, r9));
            }
            if (ax6 == 0xffff) 
                goto addr_140007be7_7;
        } while (!reinterpret_cast<int1_t>(ax6 == 10));
        g140015041 = reinterpret_cast<void**>(1);
        if (!bl5) {
            ax8 = fun_14000613c();
        } else {
            rcx9 = g140026480;
            ax8 = reinterpret_cast<void**>(getwc(rcx9, rdx, r8, r9));
        }
        if (!reinterpret_cast<int1_t>(ax8 == 59)) 
            goto addr_140007bc9_13;
        zf10 = g140026489 == 0;
        if (!zf10) 
            goto addr_140007bcf_15;
        addr_140007bc9_13:
        if (!reinterpret_cast<int1_t>(ax8 == 35)) 
            goto addr_140007bd7_16;
        addr_140007bcf_15:
        ++g140025c20;
    }
    addr_140007be7_7:
    return;
    addr_140007bd7_16:
    rdx11 = g140026480;
    *reinterpret_cast<uint32_t*>(&rcx12) = reinterpret_cast<uint16_t>(ax8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = 0;
    ungetwc(rcx12, rdx11, r8, r9);
    goto addr_140007be7_7;
}

void** fun_140008044(signed char cl, void** rdx, void** r8, void** r9) {
    signed char bl5;
    void** rax6;
    void** rcx7;
    void** rcx8;
    int1_t zf9;
    int1_t zf10;
    int64_t rcx11;

    bl5 = cl;
    while (1) {
        if (!bl5) {
            rax6 = fun_14000613c();
        } else {
            rcx7 = g140026480;
            rax6 = reinterpret_cast<void**>(getwc(rcx7, *reinterpret_cast<signed char*>(&rdx)));
        }
        if (rax6 == 32 || (rax6 == 9 || reinterpret_cast<int1_t>(rax6 == 94))) {
            if (reinterpret_cast<int1_t>(rax6 == 94)) {
                if (!bl5) {
                    rax6 = fun_14000613c();
                } else {
                    rcx8 = g140026480;
                    rax6 = reinterpret_cast<void**>(getwc(rcx8, *reinterpret_cast<signed char*>(&rdx)));
                }
                if (rax6 == 32) 
                    goto addr_1400080af_11;
                if (!reinterpret_cast<int1_t>(rax6 == 9)) 
                    goto addr_1400080d2_13;
            }
            addr_1400080af_11:
            g140015041 = reinterpret_cast<void**>(0);
        }
        if (reinterpret_cast<int1_t>(rax6 == 92)) {
            *reinterpret_cast<signed char*>(&rdx) = bl5;
            rax6 = fun_140008128(92, rdx, r8, r9);
        }
        if (rax6 == 32) 
            continue;
        if (!reinterpret_cast<int1_t>(rax6 == 9)) 
            break;
    }
    addr_1400080e4_19:
    if (reinterpret_cast<int1_t>(rax6 == 59)) {
        zf9 = g140015041 == 0;
        if (zf9) 
            goto addr_140008115_21;
        zf10 = g140026489 == 0;
        if (!zf10) 
            goto addr_140008102_23;
    }
    if (!reinterpret_cast<int1_t>(rax6 == 35)) {
        addr_140008115_21:
        return rax6;
    } else {
        addr_140008102_23:
        fun_140007b64(bl5, rdx, r8, r9);
        *reinterpret_cast<int32_t*>(&rax6) = 10;
        g140015041 = reinterpret_cast<void**>(1);
        goto addr_140008115_21;
    }
    addr_1400080d2_13:
    rdx = g140026480;
    *reinterpret_cast<uint32_t*>(&rcx11) = reinterpret_cast<uint16_t>(rax6);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
    ungetwc(rcx11, rdx);
    *reinterpret_cast<int32_t*>(&rax6) = 94;
    goto addr_1400080e4_19;
}

uint32_t g140036ce8;

uint32_t g140015044 = 0xffffffff;

void fun_140008874(struct s6* rcx, void** rdx, void** r8, void** r9);

unsigned char fun_140007bf0(uint16_t cx, void** rdx, void** r8, void** r9);

unsigned char fun_140007cc8(int64_t rcx, void** rdx, void** r8) {
    void** rdi4;
    void** rbx5;
    void** r9_6;
    uint32_t eax7;
    uint32_t r9d8;
    uint32_t r9d9;
    uint32_t r9d10;
    void** rcx11;
    int32_t eax12;
    void** ax13;
    int1_t zf14;
    void** ax15;
    int1_t zf16;
    int1_t less17;
    void** rcx18;
    void** rcx19;
    int32_t eax20;
    void** rcx21;
    uint32_t eax22;
    uint32_t eax23;
    int64_t rax24;
    int64_t rcx25;
    void** rcx26;
    unsigned char al27;
    unsigned char bl28;
    void** ax29;
    uint32_t ecx30;
    int1_t zf31;
    int1_t zf32;
    void** rdx33;
    int32_t eax34;
    void** ax35;
    uint32_t ebx36;
    void** rdx37;
    int64_t rcx38;
    int1_t zf39;
    void** rcx40;
    uint32_t ecx41;

    rdi4 = rdx;
    rdx = g140015041;
    rbx5 = r8;
    do {
        *reinterpret_cast<uint32_t*>(&r9_6) = *reinterpret_cast<uint16_t*>(&rcx) - 10;
        *reinterpret_cast<int32_t*>(&r9_6 + 4) = 0;
        if (!*reinterpret_cast<uint32_t*>(&r9_6)) {
            addr_140007df0_3:
            eax7 = g140025c20;
        } else {
            r9d8 = *reinterpret_cast<uint32_t*>(&r9_6) - 48;
            if (!r9d8) 
                goto addr_140007f37_5;
            r9d9 = r9d8 - 1;
            if (!r9d9) 
                goto addr_140007f33_7;
            r9d10 = r9d9 - 2;
            if (!r9d10) 
                goto addr_140007f2f_9;
            *reinterpret_cast<uint32_t*>(&r9_6) = r9d10 - 30;
            *reinterpret_cast<int32_t*>(&r9_6 + 4) = 0;
            if (!*reinterpret_cast<uint32_t*>(&r9_6)) 
                goto addr_140007e80_11;
            *reinterpret_cast<uint32_t*>(&r9_6) = *reinterpret_cast<uint32_t*>(&r9_6) - 3;
            *reinterpret_cast<int32_t*>(&r9_6 + 4) = 0;
            if (!*reinterpret_cast<uint32_t*>(&r9_6)) 
                goto addr_140007e8d_13;
            if (*reinterpret_cast<uint32_t*>(&r9_6) != 0xffa1) 
                goto addr_140007e9e_15;
            rcx11 = g140026480;
            eax12 = reinterpret_cast<int32_t>(feof(rcx11));
            if (eax12) 
                goto addr_140007d69_17; else 
                goto addr_140007d59_18;
        }
        addr_140007df6_19:
        g140015041 = reinterpret_cast<void**>(1);
        g140025c20 = eax7 + 1;
        ax13 = fun_14000613c();
        *reinterpret_cast<uint32_t*>(&rcx) = reinterpret_cast<uint16_t>(ax13);
        if (reinterpret_cast<int1_t>(ax13 == 59) && (zf14 = g140026489 == 0, !zf14) || *reinterpret_cast<uint16_t*>(&rcx) == 35) {
            fun_140007b64(0, rdx, r8, r9_6);
            ++g140025c20;
            g140015041 = reinterpret_cast<void**>(1);
            ax15 = fun_14000613c();
            *reinterpret_cast<uint32_t*>(&rcx) = reinterpret_cast<uint16_t>(ax15);
        }
        if (*reinterpret_cast<uint16_t*>(&rcx) == 32) 
            break;
        if (*reinterpret_cast<uint16_t*>(&rcx) == 9) 
            break; else 
            continue;
        addr_140007d69_17:
        zf16 = g140036ce8 == 0;
        if (zf16) {
            less17 = reinterpret_cast<int32_t>(g140015044) < reinterpret_cast<int32_t>(0);
            if (less17) 
                goto addr_140007e79_24;
            *reinterpret_cast<uint32_t*>(&rcx18) = g140025c20;
            *reinterpret_cast<int32_t*>(&rcx18 + 4) = 0;
            rdx = reinterpret_cast<void**>(0x3fc);
            *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
            fun_140003898(rcx18, 0x3fc, r8, r9_6);
            goto addr_140007df0_3;
        } else {
            rcx19 = g140026480;
            eax20 = reinterpret_cast<int32_t>(fclose(rcx19, rdx, r8));
            if (eax20 == 0xffff) {
                r8 = g140026490;
                rdx = reinterpret_cast<void**>(0x424);
                *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                fun_140003898(0, 0x424, r8, r9_6);
            }
            rcx21 = g140026490;
            free(rcx21, rdx, r8);
            eax22 = g140036ce8;
            eax23 = eax22 - 1;
            g140036ce8 = eax23;
            rax24 = reinterpret_cast<int32_t>(eax23);
            rcx25 = rax24 + rax24 * 2;
            g140026480 = *reinterpret_cast<void***>(0x140036cf0 + rcx25 * 8 + 16);
            g140026490 = *reinterpret_cast<void***>(0x140036cf0 + rcx25 * 8 + 8);
            eax7 = *reinterpret_cast<uint32_t*>(0x140036cf0 + rcx25 * 8);
            goto addr_140007df6_19;
        }
        addr_140007d59_18:
        *reinterpret_cast<uint32_t*>(&rcx26) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx26 + 4) = 0;
        rdx = reinterpret_cast<void**>(0x40e);
        *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
        fun_140003898(rcx26, 0x40e, r8, r9_6);
        goto addr_140007d69_17;
        rdx = reinterpret_cast<void**>(1);
        g140015041 = reinterpret_cast<void**>(1);
    } while (*reinterpret_cast<uint16_t*>(&rcx) == 0xffff);
    goto addr_140007e63_30;
    al27 = 18;
    addr_140007f5f_32:
    g140015041 = reinterpret_cast<void**>(0);
    addr_140007f66_33:
    return al27;
    addr_140007e63_30:
    bl28 = 17;
    addr_140007e65_34:
    ungetwc();
    al27 = bl28;
    goto addr_140007f66_33;
    addr_140007f37_5:
    g140015041 = reinterpret_cast<void**>(0);
    ax29 = fun_14000613c();
    ecx30 = reinterpret_cast<uint16_t>(ax29);
    if (*reinterpret_cast<int16_t*>(&ecx30) != 58) {
        bl28 = 20;
        goto addr_140007e65_34;
    } else {
        *reinterpret_cast<void***>(rdi4) = reinterpret_cast<void**>(58);
        al27 = 21;
        goto addr_140007f66_33;
    }
    addr_140007f33_7:
    al27 = 19;
    goto addr_140007f5f_32;
    addr_140007f2f_9:
    al27 = 22;
    goto addr_140007f5f_32;
    addr_140007e80_11:
    zf31 = g140026489 == 0;
    if (zf31 || !rdx) {
        addr_140007e8d_13:
        ungetwc();
        rdi4 = rdi4 - 2;
    } else {
        addr_140007e79_24:
        al27 = 23;
        goto addr_140007f66_33;
    }
    addr_140007e9e_15:
    fun_140008874(rdi4 + 0xfffffffffffffffe, rbx5, r8, r9_6);
    zf32 = g140015041 == 0;
    if (zf32 || (rdx33 = reinterpret_cast<void**>("i"), eax34 = reinterpret_cast<int32_t>(_wcsicmp(0x140025c50, "i", r8)), !!eax34)) {
        g140015041 = reinterpret_cast<void**>(0);
    } else {
        g140015041 = reinterpret_cast<void**>(0);
        ax35 = fun_140008044(0, "i", r8, r9_6);
        ebx36 = reinterpret_cast<uint16_t>(ax35);
        if (*reinterpret_cast<uint16_t*>(&ebx36) == 58 || *reinterpret_cast<uint16_t*>(&ebx36) == 61) {
            rdx37 = g140026480;
            *reinterpret_cast<uint32_t*>(&rcx38) = *reinterpret_cast<uint16_t*>(&ebx36);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx38) + 4) = 0;
            ungetwc(rcx38, rdx37, r8);
        } else {
            zf39 = g140026489 == 0;
            if (!zf39) {
                *reinterpret_cast<uint32_t*>(&rcx40) = g140025c20;
                *reinterpret_cast<int32_t*>(&rcx40 + 4) = 0;
                r8 = rdi4;
                rdx33 = reinterpret_cast<void**>(0x409);
                *reinterpret_cast<int32_t*>(&rdx33 + 4) = 0;
                fun_140003898(rcx40, 0x409, r8, r9_6);
            }
            ecx41 = *reinterpret_cast<uint16_t*>(&ebx36);
            al27 = fun_140007bf0(*reinterpret_cast<uint16_t*>(&ecx41), rdx33, r8, r9_6);
            goto addr_140007f66_33;
        }
    }
    al27 = 16;
    goto addr_140007f66_33;
}

void** g140036ce0;

int64_t wcsncpy_s = 0x14a7c;

void** fun_140006ee0(void** rcx, void*** rdx, void** r8, void** r9) {
    void* rsp5;
    uint64_t rax6;
    uint64_t v7;
    void*** v8;
    void** r13_9;
    signed char v10;
    void*** rdi11;
    void** r8_12;
    void** rsi13;
    void** r12_14;
    void* r15_15;
    void** r14_16;
    void* rsp17;
    void*** rax18;
    void* rsp19;
    void** rcx20;
    int32_t eax21;
    void* rsp22;
    void** rcx23;
    void** rcx24;
    void* rcx25;
    void** rdx26;
    void* rax27;
    void* rsp28;
    void* rbx29;
    int64_t rax30;
    void** rcx31;
    int32_t eax32;
    void* rsp33;
    void** rcx34;
    void** rcx35;
    void** rax36;
    void* rsp37;
    void** rbx38;
    void** rax39;
    void** rdi40;
    void** rax41;
    void* rsp42;
    void** rcx43;
    void** rax44;
    void** rax45;
    int1_t zf46;
    uint32_t eax47;
    uint16_t v48;
    void* rdi49;
    void** rax50;
    void** rcx51;
    void** rax52;
    int64_t rax53;
    void** rax54;
    void** rax55;
    uint16_t v56;
    int16_t v57;
    int16_t v58;
    void*** rax59;
    void** rcx60;
    int32_t eax61;
    void* rsp62;
    void** rcx63;
    void** rcx64;
    void** rax65;
    void*** rax66;
    void** rcx67;
    int32_t eax68;
    void* rsp69;
    void** rcx70;
    void** rcx71;
    void** rax72;
    void** rcx73;
    uint64_t rcx74;
    void** rax75;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0x850);
    rax6 = g140015008;
    v7 = rax6 ^ reinterpret_cast<uint64_t>(rsp5);
    v8 = rdx;
    r13_9 = r8;
    v10 = 0;
    rdi11 = rdx;
    r8_12 = reinterpret_cast<void**>("<");
    rsi13 = rcx;
    *reinterpret_cast<int32_t*>(&r12_14) = 0;
    *reinterpret_cast<int32_t*>(&r12_14 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r15_15) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_15) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r14_16) = 0;
    *reinterpret_cast<int32_t*>(&r14_16 + 4) = 0;
    wcscpy_s(reinterpret_cast<uint64_t>(rsp5) + 64, 0x400, "<");
    rsp17 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
    rax18 = fun_140006d18(reinterpret_cast<uint64_t>(rsp17) + 68, 0x3fe, "<", r9);
    rsp19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp17) - 8 + 8);
    if (!rax18) {
        rcx20 = g140026480;
        eax21 = reinterpret_cast<int32_t>(feof(rcx20, 0x3fe, "<"));
        rsp22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp19) - 8 + 8);
        if (eax21) {
            *reinterpret_cast<uint32_t*>(&rcx23) = g140025c20;
            *reinterpret_cast<int32_t*>(&rcx23 + 4) = 0;
            r8_12 = reinterpret_cast<void**>("E");
            fun_140003898(rcx23, 0x409, "E", r9);
            rsp22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp22) - 8 + 8);
        }
        *reinterpret_cast<uint32_t*>(&rcx24) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx24 + 4) = 0;
        fun_140003898(rcx24, 0x41d, r8_12, r9);
        rsp19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp22) - 8 + 8);
    }
    rcx25 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp19) + 64);
    while ((rdx26 = reinterpret_cast<void**>(10), *reinterpret_cast<int32_t*>(&rdx26 + 4) = 0, rax27 = reinterpret_cast<void*>(wcschr(rcx25, 10, r8_12)), rsp28 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp19) - 8 + 8), !!rax27) && (reinterpret_cast<uint64_t>(rax27) <= reinterpret_cast<uint64_t>(rsp28) + 64 || *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rax27) - 2) == 94)) {
        r8_12 = g140026480;
        rbx29 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax27) + 2);
        rax30 = reinterpret_cast<int64_t>(fgetws(rbx29));
        rsp19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp28) - 8 + 8);
        if (!rax30) {
            rcx31 = g140026480;
            eax32 = reinterpret_cast<int32_t>(feof(rcx31));
            rsp33 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp19) - 8 + 8);
            if (eax32) {
                *reinterpret_cast<uint32_t*>(&rcx34) = g140025c20;
                *reinterpret_cast<int32_t*>(&rcx34 + 4) = 0;
                r8_12 = reinterpret_cast<void**>("E");
                fun_140003898(rcx34, 0x409, "E", r9, rcx34, 0x409, "E", r9);
                rsp33 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp33) - 8 + 8);
            }
            *reinterpret_cast<uint32_t*>(&rcx35) = g140025c20;
            *reinterpret_cast<int32_t*>(&rcx35 + 4) = 0;
            fun_140003898(rcx35, 0x41d, r8_12, r9, rcx35, 0x41d, r8_12, r9);
            rsp19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp33) - 8 + 8);
        }
        ++g140025c20;
        rcx25 = rbx29;
    }
    rax36 = fun_140006dac(reinterpret_cast<uint64_t>(rsp28) + 40, 10, r8_12, r9);
    rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp28) - 8 + 8);
    rbx38 = rax36;
    if (rax36) {
        do {
            rax39 = fun_140009244(24, 10, r8_12, r9, 24, 10);
            rdi40 = rax39;
            rax41 = fun_14000dcc4(rbx38, rbx38);
            rsp42 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8 - 8 + 8);
            *reinterpret_cast<void***>(rdi40 + 8) = rax41;
            rcx43 = reinterpret_cast<void**>(0x140036ce0);
            rax44 = g140036ce0;
            while (rax44) {
                rcx43 = rax44;
                rax44 = *reinterpret_cast<void***>(rax44);
            }
            *reinterpret_cast<void***>(rcx43) = rdi40;
            rax45 = fun_140006dac(reinterpret_cast<uint64_t>(rsp42) + 40, 10, r8_12, r9);
            rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp42) - 8 + 8);
            rbx38 = rax45;
        } while (rax45);
        rdi11 = v8;
    }
    zf46 = g140036ce0 == 0;
    while (!zf46) {
        while (1) {
            do {
                do {
                    eax47 = v48;
                    *reinterpret_cast<void***>(rsi13) = *reinterpret_cast<void***>(&eax47);
                    rsi13 = rsi13 + 2;
                    if (rsi13 == *reinterpret_cast<void***>(r13_9)) {
                        if (r14_16) {
                            rdi49 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r15_15) + 0x400);
                            if (reinterpret_cast<uint64_t>(rdi49) < reinterpret_cast<uint64_t>(r15_15) || (rdx26 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rdi49) + reinterpret_cast<uint64_t>(rdi49)), rax50 = fun_140009274(r14_16, rdx26, r8_12, r9, r14_16, rdx26), rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8), r12_14 = rax50, !rax50)) {
                                *reinterpret_cast<uint32_t*>(&rcx51) = g140025c20;
                                *reinterpret_cast<int32_t*>(&rcx51 + 4) = 0;
                                rdx26 = reinterpret_cast<void**>(0x419);
                                *reinterpret_cast<int32_t*>(&rdx26 + 4) = 0;
                                fun_140003898(rcx51, 0x419, r8_12, r9, rcx51, 0x419, r8_12, r9);
                                rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8);
                            }
                            rsi13 = r12_14 + reinterpret_cast<uint64_t>(r15_15) * 2;
                            r14_16 = r12_14;
                            r15_15 = rdi49;
                            rax52 = r12_14 + reinterpret_cast<uint64_t>(rdi49) * 2;
                            rdi11 = v8;
                        } else {
                            *reinterpret_cast<int32_t*>(&rax53) = static_cast<int32_t>(reinterpret_cast<uint64_t>(r14_16 + 2));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax53) + 4) = 0;
                            rax54 = reinterpret_cast<void**>(rax53 * 0x800);
                            if (__intrinsic()) {
                                rax54 = r14_16 + 0xffffffffffffffff;
                            }
                            rax55 = fun_140009214(rax54, __intrinsic(), r8_12, r9, rax54, __intrinsic());
                            r8_12 = *rdi11;
                            *reinterpret_cast<int32_t*>(&r9) = 0x400;
                            *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                            rdx26 = reinterpret_cast<void**>(0x800);
                            *reinterpret_cast<int32_t*>(&rdx26 + 4) = 0;
                            r14_16 = rax55;
                            wcsncpy_s(rax55, 0x800, r8_12, 0x400);
                            rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8 - 8 + 8);
                            rsi13 = r14_16 + 0x800;
                            *reinterpret_cast<int32_t*>(&r15_15) = 0x800;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_15) + 4) = 0;
                            rax52 = r14_16 + 0x1000;
                        }
                        *reinterpret_cast<void***>(r13_9) = rax52;
                        *rdi11 = r14_16;
                    }
                } while (v56);
                if (!v10) 
                    continue;
                if (v57 != 60) 
                    continue;
                if (v58 == 60) 
                    goto addr_140007194_35;
                rdx26 = reinterpret_cast<void**>(0x400);
                *reinterpret_cast<int32_t*>(&rdx26 + 4) = 0;
                v10 = 1;
                rax59 = fun_140006d18(reinterpret_cast<uint64_t>(rsp37) + 64, 0x400, r8_12, r9);
                rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8);
            } while (rax59);
            rcx60 = g140026480;
            eax61 = reinterpret_cast<int32_t>(feof(rcx60, 0x400, r8_12, r9));
            rsp62 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8);
            if (eax61) {
                *reinterpret_cast<uint32_t*>(&rcx63) = g140025c20;
                *reinterpret_cast<int32_t*>(&rcx63 + 4) = 0;
                r8_12 = reinterpret_cast<void**>("E");
                fun_140003898(rcx63, 0x409, "E", r9, rcx63, 0x409, "E", r9);
                rsp62 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp62) - 8 + 8);
            }
            *reinterpret_cast<uint32_t*>(&rcx64) = g140025c20;
            *reinterpret_cast<int32_t*>(&rcx64 + 4) = 0;
            rdx26 = reinterpret_cast<void**>(0x41d);
            *reinterpret_cast<int32_t*>(&rdx26 + 4) = 0;
            fun_140003898(rcx64, 0x41d, r8_12, r9, rcx64, 0x41d, r8_12, r9);
            rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp62) - 8 + 8);
        }
        addr_140007194_35:
        rax65 = g140036ce0;
        if (*reinterpret_cast<void***>(rax65) && (rdx26 = reinterpret_cast<void**>(0x400), *reinterpret_cast<int32_t*>(&rdx26 + 4) = 0, rax66 = fun_140006d18(reinterpret_cast<uint64_t>(rsp37) + 64, 0x400, r8_12, r9), rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8), !rax66)) {
            rcx67 = g140026480;
            eax68 = reinterpret_cast<int32_t>(feof(rcx67, 0x400, r8_12, r9));
            rsp69 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8);
            if (eax68) {
                *reinterpret_cast<uint32_t*>(&rcx70) = g140025c20;
                *reinterpret_cast<int32_t*>(&rcx70 + 4) = 0;
                r8_12 = reinterpret_cast<void**>("E");
                fun_140003898(rcx70, 0x409, "E", r9, rcx70, 0x409, "E", r9);
                rsp69 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp69) - 8 + 8);
            }
            *reinterpret_cast<uint32_t*>(&rcx71) = g140025c20;
            *reinterpret_cast<int32_t*>(&rcx71 + 4) = 0;
            rdx26 = reinterpret_cast<void**>(0x41d);
            *reinterpret_cast<int32_t*>(&rdx26 + 4) = 0;
            fun_140003898(rcx71, 0x41d, r8_12, r9, rcx71, 0x41d, r8_12, r9);
            rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp69) - 8 + 8);
        }
        rax72 = g140036ce0;
        rcx73 = *reinterpret_cast<void***>(rax72);
        g140036ce0 = rcx73;
        zf46 = rcx73 == 0;
    }
    *reinterpret_cast<void***>(rsi13) = reinterpret_cast<void**>(0);
    rcx74 = v7 ^ reinterpret_cast<uint64_t>(rsp37);
    rax75 = fun_140010130(rcx74, rdx26, r8_12, rcx74, rdx26, r8_12);
    return rax75;
}

void** fun_14000e6a4(void** rcx, ...) {
    void** rdi2;
    int64_t rax3;
    void* rsp4;
    void** rbx5;
    void** r8_6;
    void** rax7;
    void** rax8;
    void** rcx9;

    rdi2 = rcx;
    rax3 = reinterpret_cast<int64_t>(wcschr());
    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 64 - 8 + 8);
    if (rax3 && (fun_14000dfd0(rdi2, reinterpret_cast<int64_t>(rsp4) + 80, 0, 0), rbx5 = reinterpret_cast<void**>(0), r8_6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 + 80), rax7 = fun_14000e740(rdi2, -1, r8_6, rdi2, -1, r8_6), rdi2 = rax7, rax8 = reinterpret_cast<void**>(0), !1)) {
        rcx9 = g14003d0e0;
        do {
            rbx5 = *reinterpret_cast<void***>(rbx5);
            *reinterpret_cast<void***>(rax8) = rcx9;
            rcx9 = rax8;
            rax8 = rbx5;
        } while (rbx5);
        g14003d0e0 = rcx9;
    }
    return rdi2;
}

struct s15 {
    void** f0;
    signed char[7] pad8;
    void*** f8;
    int32_t* f10;
    void*** f18;
    int16_t** f20;
    int64_t* f28;
    void*** f30;
};

int64_t _itow_s = 0x14a9c;

int64_t LoadLibraryExW = 0x1453a;

int64_t GetLastError = 0x1454c;

void** fun_1400098fc(struct s15* rcx, void** rdx, void** r8, void** r9) {
    void* rsp5;
    uint64_t rax6;
    int32_t eax7;
    void* rsp8;
    void** rdx9;
    void** v10;
    int32_t esi11;
    int64_t rcx12;
    void* rsp13;
    int32_t eax14;
    int32_t eax15;
    int32_t eax16;
    int32_t eax17;
    void* rcx18;
    void** rax19;
    void** eax20;
    void** ecx21;
    uint64_t rcx22;
    void** rax23;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x268);
    rax6 = g140015008;
    eax7 = reinterpret_cast<int32_t>(wcstoul(rdx, reinterpret_cast<uint64_t>(rsp5) + 32, r8));
    rsp8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
    rdx9 = v10;
    esi11 = eax7;
    if (!*reinterpret_cast<void***>(rdx9) && ((*reinterpret_cast<uint32_t*>(&rcx12) = *reinterpret_cast<uint16_t*>(&eax7), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = 0, _itow_s(rcx12, reinterpret_cast<uint64_t>(rsp8) + 40, 6, 10), rsp13 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp8) - 8 + 8), r8 = rcx->f0, *reinterpret_cast<int32_t*>(&rdx9) = 0x104, *reinterpret_cast<int32_t*>(&rdx9 + 4) = 0, eax14 = reinterpret_cast<int32_t>(wcsncpy_s(reinterpret_cast<uint64_t>(rsp13) + 64, 0x104, r8, -1)), rsp8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp13) - 8 + 8), !eax14) && ((r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp8) + 40), *reinterpret_cast<int32_t*>(&rdx9) = 0x104, *reinterpret_cast<int32_t*>(&rdx9 + 4) = 0, eax15 = reinterpret_cast<int32_t>(wcsncat_s(reinterpret_cast<uint64_t>(rsp8) + 64, 0x104, r8, -1)), rsp8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp8) - 8 + 8), !eax15) && ((r8 = reinterpret_cast<void**>("\\"), *reinterpret_cast<int32_t*>(&rdx9) = 0x104, *reinterpret_cast<int32_t*>(&rdx9 + 4) = 0, eax16 = reinterpret_cast<int32_t>(wcsncat_s(reinterpret_cast<uint64_t>(rsp8) + 64, 0x104, "\\", -1)), rsp8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp8) - 8 + 8), !eax16) && (*reinterpret_cast<int32_t*>(&rdx9) = 0x104, *reinterpret_cast<int32_t*>(&rdx9 + 4) = 0, r8 = *rcx->f8, eax17 = reinterpret_cast<int32_t>(wcsncat_s(reinterpret_cast<uint64_t>(rsp8) + 64, 0x104, r8, -1)), rsp8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp8) - 8 + 8), !eax17))))) {
        rcx18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp8) + 64);
        *reinterpret_cast<int32_t*>(&rdx9) = 0;
        *reinterpret_cast<int32_t*>(&rdx9 + 4) = 0;
        *reinterpret_cast<int32_t*>(&r8) = *rcx->f10;
        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
        rax19 = reinterpret_cast<void**>(LoadLibraryExW(rcx18));
        rsp8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp8) - 8 + 8);
        if (!rax19) {
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r9) == 0x80070002)) {
                eax20 = reinterpret_cast<void**>(GetLastError(rcx18));
                rsp8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp8) - 8 + 8);
                ecx21 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax20)) | 0x80070000);
                if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax20) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax20 == 0)) {
                    ecx21 = eax20;
                }
                *reinterpret_cast<void***>(r9) = ecx21;
            }
        } else {
            rdx9 = *rcx->f18;
            *reinterpret_cast<void***>(rdx9) = rax19;
            if (*rcx->f20) {
                **rcx->f20 = *reinterpret_cast<int16_t*>(&esi11);
            }
            if (*rcx->f28) {
                r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp8) + 64);
                rdx9 = *rcx->f30;
                wcscpy_s();
                rsp8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp8) - 8 + 8);
            }
            *reinterpret_cast<void***>(r9) = reinterpret_cast<void**>(0);
        }
    }
    rcx22 = rax6 ^ reinterpret_cast<uint64_t>(rsp5) ^ reinterpret_cast<uint64_t>(rsp8);
    rax23 = fun_140010130(rcx22, rdx9, r8, rcx22, rdx9, r8);
    return rax23;
}

uint64_t* fun_14000bddc();

int64_t __stdio_common_vswscanf = 0x14ab2;

int32_t fun_14000bde4(void** rcx, void** rdx, void** r8, void** r9) {
    int32_t eax5;

    fun_14000bddc();
    eax5 = reinterpret_cast<int32_t>(__stdio_common_vswscanf());
    return eax5;
}

int64_t GetVersion = 0x14602;

int64_t RegOpenKeyExW = 0x143d8;

int64_t RegQueryValueExW = 0x143e8;

int64_t RegCloseKey = 0x143fc;

unsigned char fun_140009aa8(void** rcx, void*** rdx, void** r8) {
    unsigned char al4;
    int32_t eax5;
    int64_t v6;
    int32_t eax7;
    int64_t v8;
    int32_t v9;
    unsigned char al10;
    int32_t v11;

    al4 = reinterpret_cast<unsigned char>(GetVersion());
    if (al4 < 6) {
        eax5 = reinterpret_cast<int32_t>(RegOpenKeyExW(0xffffffff80000001, "S"));
        if (eax5 || ((eax7 = reinterpret_cast<int32_t>(RegQueryValueExW(v6, "U")), RegCloseKey(v8, "U"), !!eax7) || v9 != 4)) {
            al10 = 0;
        } else {
            al10 = reinterpret_cast<uint1_t>(v11 == 1);
        }
    } else {
        al10 = 1;
    }
    return al10;
}

int64_t CreateFileMappingW = 0x1462c;

void** g1400370a0;

int64_t MapViewOfFileEx = 0x14642;

void** g1400370a8;

signed char fun_140009c10(void** rcx, void*** rdx, void** r8) {
    void** rax4;
    void** rax5;
    signed char al6;
    void** rcx7;

    rax4 = reinterpret_cast<void**>(CreateFileMappingW());
    g1400370a0 = rax4;
    if (rax4) {
        rax5 = reinterpret_cast<void**>(MapViewOfFileEx(rax4, 6));
        g1400370a8 = rax5;
        if (rax5) {
            al6 = 1;
        } else {
            rcx7 = g1400370a0;
            CloseHandle(rcx7, 6);
            g1400370a0 = reinterpret_cast<void**>(0);
            goto addr_140009c46_5;
        }
    } else {
        addr_140009c46_5:
        al6 = 0;
    }
    return al6;
}

struct s16 {
    signed char[518] pad518;
    int16_t f206;
};

int64_t ExpandEnvironmentStringsW = 0x14610;

unsigned char fun_140009b54(struct s16* rcx) {
    int32_t eax2;
    int64_t v3;
    int32_t eax4;
    int64_t v5;
    int32_t v6;
    int32_t v7;
    unsigned char al8;
    int32_t eax9;

    eax2 = reinterpret_cast<int32_t>(RegOpenKeyExW(0xffffffff80000002, "S"));
    if (eax2) 
        goto addr_140009b8c_2;
    eax4 = reinterpret_cast<int32_t>(RegQueryValueExW(v3, "D"));
    RegCloseKey(v5, "D");
    rcx->f206 = 0;
    if (eax4) 
        goto addr_140009b8c_2;
    if (v6 != 2) {
        if (v7 != 1) {
            addr_140009b8c_2:
            al8 = 0;
        } else {
            addr_140009c04_6:
            al8 = 1;
        }
        return al8;
    } else {
        eax9 = reinterpret_cast<int32_t>(ExpandEnvironmentStringsW(rcx, rcx, 0x104, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 48 - 8 + 8 + 88));
        if (reinterpret_cast<uint32_t>(eax9 - 1) <= 0x103) 
            goto addr_140009c04_6;
        goto addr_140009b8c_2;
    }
}

int64_t memset = 0x14862;

void fun_140010c12(void** rcx, ...) {
    goto memset;
}

int64_t __stdio_common_vswprintf_s = 0x14ae8;

int64_t fun_14000bd88(void** rcx, uint64_t rdx, int64_t r8, void** r9) {
    int64_t rax5;

    fun_14000bd80(rcx);
    rax5 = reinterpret_cast<int64_t>(__stdio_common_vswprintf_s());
    if (*reinterpret_cast<int32_t*>(&rax5) < 0) {
        *reinterpret_cast<int32_t*>(&rax5) = -1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    }
    return rax5;
}

void** g140037092;

int64_t g140015098 = 0x140011dec;

int64_t g140015090 = 0x140011dec;

unsigned char g140015042 = 1;

void** g14003d128;

void** g140037094;

int32_t g14003d0f8;

void** g14003d100;

void** g14003d108;

int64_t CreateEventW = 0x14654;

int64_t CreateMutexW = 0x14664;

int64_t GetCurrentProcess = 0x14674;

int64_t DuplicateHandle = 0x14688;

int64_t GetCurrentProcessId = 0x1469a;

int64_t GetCurrentThreadId = 0x146b0;

int64_t UnmapViewOfFile = 0x146f4;

signed char g140036cef;

int64_t _invalid_parameter_noinfo = 0x14acc;

int32_t g14003dd70;

int64_t CreateProcessW = 0x146c6;

int64_t g14003ddd8;

int64_t g14003dde0;

int64_t ReleaseMutex = 0x146d8;

int64_t SetEvent = 0x146e8;

int64_t fun_14000a198(void** rcx, void*** rdx, void** r8) {
    int1_t zf4;
    void* rsp5;
    int1_t zf6;
    void** ebp7;
    void** eax8;
    unsigned char al9;
    unsigned char al10;
    int1_t zf11;
    signed char al12;
    unsigned char al13;
    int64_t rax14;
    void** rax15;
    void** rax16;
    void** rsi17;
    void*** rax18;
    void*** rdi19;
    void** rax20;
    void* r9_21;
    void** r8_22;
    void** rdx23;
    int32_t eax24;
    int1_t zf25;
    void** rbx26;
    void** eax27;
    void** rcx28;
    int32_t eax29;
    void** rax30;
    void** eax31;
    void** ecx32;
    void** ecx33;
    void** rcx34;
    void** rcx35;
    void** rcx36;
    int1_t zf37;
    void** r8_38;
    signed char dl39;
    uint64_t rcx40;
    int64_t r8_41;
    void** rcx42;
    int32_t* rax43;
    void** r9_44;
    int32_t eax45;
    int64_t rcx46;
    int64_t rcx47;
    unsigned char bl48;
    void** rcx49;
    int32_t eax50;
    int32_t eax51;
    void** rcx52;
    int32_t eax53;
    void** rcx54;
    int32_t eax55;
    int32_t eax56;
    void** rax57;

    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rcx)) == 0x80000003) || (zf4 = g140037092 == 0, !zf4)) {
        return 0;
    }
    g140037092 = reinterpret_cast<void**>(1);
    g140015098 = reinterpret_cast<int64_t>("m");
    g140015090 = reinterpret_cast<int64_t>("M");
    g140015042 = 0;
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 80);
    zf6 = g14003d128 == 0;
    ebp7 = reinterpret_cast<void**>(1);
    if (!zf6) 
        goto addr_140009cc6_5;
    eax8 = g140037094;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax8) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax8 == 0)) 
        goto addr_140009cee_7;
    if (reinterpret_cast<signed char>(eax8) > reinterpret_cast<signed char>(2)) {
        if (!reinterpret_cast<int1_t>(eax8 == 3)) {
            addr_140009cee_7:
            al9 = 1;
        } else {
            al10 = fun_140009aa8(rcx, rdx, r8);
            rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
            al9 = reinterpret_cast<uint1_t>(al10 == 0);
        }
        if (al9) 
            goto addr_140009cc6_5;
    }
    zf11 = g1400370a8 == 0;
    g14003d0f8 = 24;
    g14003d100 = reinterpret_cast<void**>(0);
    g14003d108 = reinterpret_cast<void**>(1);
    if (!zf11 || (al12 = fun_140009c10(rcx, rdx, r8), rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8), !!al12)) {
        if (0) {
            al13 = 0;
        } else {
            al13 = fun_140009b54(0x14003d950);
            rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
        }
        if (!al13) 
            goto addr_140009cc6_5;
    } else {
        addr_140009cc6_5:
        *reinterpret_cast<void***>(&rax14) = reinterpret_cast<void**>(1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = 0;
        goto addr_14000a17f_17;
    }
    rax15 = reinterpret_cast<void**>(CreateEventW(0x14003d0f8));
    g14003d128 = rax15;
    rax16 = reinterpret_cast<void**>(CreateEventW(0x14003d0f8));
    rsi17 = rax16;
    rax18 = reinterpret_cast<void***>(CreateMutexW(0x14003d0f8));
    rdi19 = rax18;
    rax20 = reinterpret_cast<void**>(GetCurrentProcess(0x14003d0f8));
    r9_21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 + 0x88);
    r8_22 = rax20;
    rdx23 = rax20;
    eax24 = reinterpret_cast<int32_t>(DuplicateHandle(rax20, rdx23, r8_22, r9_21));
    if (!eax24) 
        goto addr_14000a0f0_19;
    zf25 = g14003d128 == 0;
    if (zf25) 
        goto addr_14000a0f0_19;
    if (!rsi17) {
        addr_14000a0fe_22:
        if (rdi19) {
            CloseHandle(rdi19, rdx23, r8_22, r9_21);
        }
    } else {
        if (!rdi19) 
            goto addr_14000a0f0_19;
        if (1) 
            goto addr_14000a0f0_19;
        rbx26 = g1400370a8;
        *reinterpret_cast<int32_t*>(&r8_22) = 0x9cb8;
        *reinterpret_cast<int32_t*>(&r8_22 + 4) = 0;
        fun_140010c12(rbx26, rbx26);
        *reinterpret_cast<int64_t*>(rbx26 + 64) = 0;
        eax27 = reinterpret_cast<void**>(GetCurrentProcessId(rbx26));
        rcx28 = g1400370a8;
        *reinterpret_cast<void***>(rcx28 + 8) = eax27;
        eax29 = reinterpret_cast<int32_t>(GetCurrentThreadId());
        rdx23 = g1400370a8;
        *reinterpret_cast<int32_t*>(rdx23 + 12) = eax29;
        rax30 = g14003d128;
        *reinterpret_cast<void***>(rdx23 + 48) = rax30;
        *reinterpret_cast<void***>(rdx23 + 32) = rsi17;
        *reinterpret_cast<void****>(rdx23 + 56) = rdi19;
        *reinterpret_cast<void***>(rdx23) = reinterpret_cast<void**>(0x9cb8);
        *reinterpret_cast<void***>(rdx23 + 4) = reinterpret_cast<void**>(0x20000);
        *reinterpret_cast<void***>(rdx23 + 24) = rcx;
        *reinterpret_cast<void***>(rdx23 + 16) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rcx) + 16);
        eax31 = reinterpret_cast<void**>(GetVersion());
        ecx32 = g140037094;
        *reinterpret_cast<unsigned char*>(&rdx23) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax31) >= 6);
        ecx33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx32) - reinterpret_cast<unsigned char>(1));
        if (!ecx33) 
            goto addr_140009ea1_27; else 
            goto addr_140009e6b_28;
    }
    if (!1) {
        CloseHandle();
    }
    rcx34 = g14003d128;
    if (rcx34) {
        CloseHandle();
        g14003d128 = reinterpret_cast<void**>(0);
    }
    rcx35 = g1400370a8;
    if (rcx35) {
        UnmapViewOfFile();
        g1400370a8 = reinterpret_cast<void**>(0);
    }
    rcx36 = g1400370a0;
    if (rcx36) {
        CloseHandle();
        g1400370a0 = reinterpret_cast<void**>(0);
    }
    zf37 = g140015042 == 0;
    if (!zf37) {
        exit(1, rdx23, r8_22, r9_21);
    }
    *reinterpret_cast<void***>(&rax14) = ebp7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = 0;
    addr_14000a17f_17:
    return rax14;
    addr_140009ea1_27:
    r8_38 = g1400370a8;
    *reinterpret_cast<void***>(r8_38 + 72) = reinterpret_cast<void**>(0);
    addr_140009eac_40:
    dl39 = g140036cef;
    *reinterpret_cast<void***>(r8_38 + 80) = reinterpret_cast<void**>(0);
    *reinterpret_cast<unsigned char*>(&eax31) = reinterpret_cast<unsigned char>(-dl39);
    *reinterpret_cast<void***>(r8_38 + 88) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(r8_38 + 96) = reinterpret_cast<void**>(1);
    *reinterpret_cast<uint32_t*>(r8_38 + 84) = ~(reinterpret_cast<unsigned char>(ecx33) - (reinterpret_cast<unsigned char>(ecx33) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(ecx33) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ecx33) + reinterpret_cast<uint1_t>(!!dl39))))) & 16 | 4;
    rcx40 = reinterpret_cast<uint64_t>(r8_38 + 0x21c8);
    *reinterpret_cast<uint32_t*>(r8_38 + 0x68) = reinterpret_cast<unsigned char>(eax31) - (reinterpret_cast<unsigned char>(eax31) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax31) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax31) + reinterpret_cast<uint1_t>(!!dl39)))) & 16 | reinterpret_cast<unsigned char>(1);
    r8_41 = g140015090;
    wcsncpy_s(rcx40, 56, r8_41, -1);
    __p__wpgmptr(rcx40, 56, r8_41, -1);
    wcsncpy_s();
    rcx42 = g1400370a8;
    __asm__("movaps xmm1, [rip+0x870e]");
    __asm__("movaps xmm2, [rip+0x8717]");
    __asm__("movaps xmm3, [rip+0x8720]");
    *rdi19 = *reinterpret_cast<void***>(rsi17);
    rdi19 = rdi19 + 4;
    rsi17 = rsi17 + 4;
    if (rcx42 + 0x47c) {
        __asm__("movups xmm0, [rip+0x86ba]");
        __asm__("movups [rax], xmm0");
        __asm__("movups [rax+0x10], xmm1");
        __asm__("movups [rax+0x20], xmm2");
        __asm__("movups [rax+0x30], xmm3");
        *rdi19 = *reinterpret_cast<void***>(rsi17);
        rdi19 = rdi19 + 4;
        rsi17 = rsi17 + 4;
    } else {
        rax43 = reinterpret_cast<int32_t*>(_errno());
        *rax43 = 22;
        _invalid_parameter_noinfo();
    }
    wcsncpy_s();
    r9_44 = g1400370a0;
    fun_14000bd88(0x14003db60, 0x104, "d", r9_44);
    fun_140010c12(0x14003dd70, 0x14003dd70);
    g14003dd70 = 0x68;
    rdx23 = reinterpret_cast<void**>(0x14003db60);
    *reinterpret_cast<int32_t*>(&r9_21) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_21) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_22) = 0;
    *reinterpret_cast<int32_t*>(&r8_22 + 4) = 0;
    eax45 = reinterpret_cast<int32_t>(CreateProcessW(0x14003d950, 0x14003db60));
    if (!eax45) {
        addr_14000a0f0_19:
        if (rsi17) {
            CloseHandle(rsi17, rdx23, r8_22, r9_21);
            goto addr_14000a0fe_22;
        }
    } else {
        rcx46 = g14003ddd8;
        CloseHandle(rcx46, 0x14003db60);
        rcx47 = g14003dde0;
        CloseHandle(rcx47, 0x14003db60);
        bl48 = 1;
        while (1) {
            rcx49 = g14003d128;
            eax50 = reinterpret_cast<int32_t>(WaitForSingleObject(rcx49, 0x4e20));
            if (eax50) {
                rdx23 = reinterpret_cast<void**>(0x4e20);
                *reinterpret_cast<int32_t*>(&rdx23 + 4) = 0;
                eax51 = reinterpret_cast<int32_t>(WaitForSingleObject(rdi19, 0x4e20));
                if (eax51 == 0x102) 
                    break;
                if (eax51 == 0x80) 
                    goto addr_14000a0d3_54;
                rcx52 = g14003d128;
                rdx23 = reinterpret_cast<void**>(1);
                *reinterpret_cast<int32_t*>(&rdx23 + 4) = 0;
                eax53 = reinterpret_cast<int32_t>(WaitForSingleObject(rcx52, 1));
                rcx54 = rsi17;
                if (eax53) 
                    goto addr_14000a0a7_56;
            } else {
                rdx23 = reinterpret_cast<void**>(1);
                *reinterpret_cast<int32_t*>(&rdx23 + 4) = 0;
                eax55 = reinterpret_cast<int32_t>(WaitForSingleObject(rsi17, 1));
                if (!eax55) {
                    bl48 = 0;
                    goto addr_14000a0ca_59;
                }
            }
            rdx23 = reinterpret_cast<void**>(1);
            *reinterpret_cast<int32_t*>(&rdx23 + 4) = 0;
            eax56 = reinterpret_cast<int32_t>(WaitForSingleObject());
            bl48 = reinterpret_cast<unsigned char>(bl48 & reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx54) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx54) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx54) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx54) + reinterpret_cast<uint1_t>(!!eax56))))));
            addr_14000a0c1_61:
            ReleaseMutex(rdi19, 1);
            addr_14000a0ca_59:
            if (!bl48) 
                break;
            continue;
            addr_14000a0a7_56:
            SetEvent();
            bl48 = 0;
            goto addr_14000a0c1_61;
        }
    }
    addr_14000a0dc_63:
    rax57 = g1400370a8;
    if (*reinterpret_cast<unsigned char*>(rax57 + 0x9aa0) & 16) {
        ebp7 = reinterpret_cast<void**>(0);
        goto addr_14000a0f0_19;
    }
    addr_14000a0d3_54:
    ReleaseMutex(rdi19, 0x4e20);
    goto addr_14000a0dc_63;
    addr_140009e6b_28:
    ecx33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx33) - reinterpret_cast<unsigned char>(1));
    if (!ecx33) {
        r8_38 = g1400370a8;
        *reinterpret_cast<void***>(r8_38 + 72) = reinterpret_cast<void**>(8);
    } else {
        if (!reinterpret_cast<int1_t>(ecx33 == 1)) 
            goto addr_14000a0f0_19;
        r8_38 = g1400370a8;
        *reinterpret_cast<void***>(r8_38 + 72) = reinterpret_cast<void**>(0);
    }
    eax31 = reinterpret_cast<void**>(0);
    *reinterpret_cast<unsigned char*>(&eax31) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdx23) == 0);
    *reinterpret_cast<void***>(r8_38 + 76) = eax31;
    goto addr_140009eac_40;
}

void** g140011900 = reinterpret_cast<void**>(0xc8);

struct s17 {
    void** f0;
    signed char[7] pad8;
    void** f8;
};

void** fun_1400012a0(int64_t rcx, void** rdx, void** r8, void** r9);

void fun_140001044(int64_t rcx, void** rdx, void** r8, void** r9);

void** fun_1400017f0(int64_t rcx, void** rdx, void** r8, void** r9);

void fun_14000a944(void** rcx, void** rdx) {
    void** rax3;
    void** rax4;
    void** r9_5;
    void** rax6;
    void** rax7;
    void** r9_8;
    void** rax9;
    void** rax10;
    void** r9_11;
    void** rax12;
    void** rax13;
    void** r9_14;
    void** rax15;
    void** rax16;
    void** r9_17;
    void** rax18;
    void** rax19;
    void** r9_20;
    void** rax21;
    void** rcx22;
    void** rax23;
    void** r9_24;
    void** rax25;
    int32_t edi26;
    int64_t rbx27;
    void** rax28;
    struct s17* rbx29;
    void** r8_30;
    void** r9_31;
    void*** rbx32;
    void** r9_33;
    void** r9_34;
    void** r9_35;
    int64_t rbx36;

    rax3 = fun_14000dcc4("C");
    rax4 = fun_14000dcc4("c");
    fun_140001ac8(rax3, rax4, 0, r9_5);
    rax6 = fun_14000dcc4("C", "C");
    rax7 = fun_14000dcc4("c", "c");
    fun_140001ac8(rax6, rax7, 0, r9_8);
    rax9 = fun_14000dcc4("C", "C");
    rax10 = fun_14000dcc4("c", "c");
    fun_140001ac8(rax9, rax10, 0, r9_11);
    rax12 = fun_14000dcc4("A", "A");
    rax13 = fun_14000dcc4("m", "m");
    fun_140001ac8(rax12, rax13, 0, r9_14);
    rax15 = fun_14000dcc4("R", "R");
    rax16 = fun_14000dcc4("r", "r");
    fun_140001ac8(rax15, rax16, 0, r9_17);
    rax18 = fun_14000dcc4("_", "_");
    rax19 = fun_14000dcc4("1", "1");
    fun_140001ac8(rax18, rax19, 2, r9_20);
    rax21 = fun_14000dcc4("M", "M");
    rcx22 = g140026498;
    rax23 = fun_14000dcc4(rcx22, rcx22);
    fun_140001ac8(rax21, rax23, 76, r9_24);
    rax25 = g140011900;
    edi26 = 0;
    if (rax25) {
        *reinterpret_cast<int32_t*>(&rbx27) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx27) + 4) = 0;
        do {
            rax28 = fun_14000dcc4(rax25, rax25);
            rbx29 = *reinterpret_cast<struct s17**>(rbx27 + 0x140000000 + 0x11770);
            g140025c40 = rax28;
            r8_30 = rbx29->f0;
            wcscpy_s(0x140025c50, 0x400, r8_30);
            fun_1400012a0(0x140025c50, 0x400, r8_30, r9_31);
            rbx32 = &rbx29->f8;
            while (*rbx32) {
                r8_30 = *rbx32;
                wcscpy_s(0x140025c50, 0x400, r8_30);
                fun_140001044(0x140025c50, 0x400, r8_30, r9_33);
                rbx32 = rbx32 + 8;
            }
            if (!edi26) {
                fun_14000169c(0x140025c50, 0x400, r8_30, r9_34);
            }
            fun_1400017f0(0x140025c50, 0x400, r8_30, r9_35);
            ++edi26;
            *reinterpret_cast<int32_t*>(&rbx36) = edi26;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx36) + 4) = 0;
            rbx27 = rbx36 << 3;
            rax25 = *reinterpret_cast<void***>(rbx27 + 0x140000000 + 0x11900);
        } while (rax25);
    }
    return;
}

int16_t g140025c52;

void** g1400157e0;

void** g140025c00;

void** fun_1400012a0(int64_t rcx, void** rdx, void** r8, void** r9) {
    int1_t zf5;
    void** rax6;
    int1_t zf7;
    void** bl8;
    void** rdi9;
    void** rcx10;
    int1_t zf11;
    void** rcx12;
    void** rcx13;
    void** rcx14;
    void** rax15;
    void** rcx16;
    void** rcx17;

    zf5 = g140025c40 == 0;
    if (zf5) {
        g140025c38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(g140025c38) & 0xdf);
    } else {
        rax6 = fun_1400011b8();
        g140025c40 = reinterpret_cast<void**>(0);
    }
    zf7 = g140025c52 == 0;
    bl8 = g1400157ef;
    if (!zf7) {
        bl8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(bl8) | 32);
        g1400157ef = bl8;
    }
    rdi9 = g140025c28;
    if (!rdi9) {
        *reinterpret_cast<uint32_t*>(&rcx10) = g140025c24;
        *reinterpret_cast<int32_t*>(&rcx10 + 4) = 0;
        rdx = reinterpret_cast<void**>(0x40d);
        *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
        rax6 = fun_140003898(rcx10, 0x40d, r8, r9);
    }
    zf11 = (reinterpret_cast<unsigned char>(g140025c38) & 16) == 0;
    if (zf11) {
        if (*reinterpret_cast<void***>(rdi9)) {
            addr_14000138b_10:
            g1400157e0 = rdi9;
        } else {
            rcx12 = *reinterpret_cast<void***>(rdi9 + 8);
            rax6 = fun_1400013b0(rcx12, rdx, r8, r9);
            if (!*reinterpret_cast<signed char*>(&rax6)) {
                rdi9 = g140025c28;
                goto addr_14000138b_10;
            } else {
                rcx13 = g140025c28;
                rcx14 = *reinterpret_cast<void***>(rcx13 + 8);
                free(rcx14, rdx);
                goto addr_14000136a_14;
            }
        }
    } else {
        rax15 = fun_140009244(48, rdx, r8, r9);
        *reinterpret_cast<void***>(rax15 + 16) = *reinterpret_cast<void***>(rdi9 + 8);
        *reinterpret_cast<void***>(rax15 + 40) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(bl8) >> 5) & 1);
        rcx16 = g140025c00;
        *reinterpret_cast<void***>(rax15) = rcx16;
        g140025c00 = rax15;
        if (*reinterpret_cast<void***>(rax15)) {
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rax15) + 8) = rax15;
            goto addr_14000136a_14;
        }
    }
    addr_140001392_17:
    g140025c38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(g140025c38) | 0x80);
    g140025c28 = reinterpret_cast<void**>(0);
    return rax6;
    addr_14000136a_14:
    rcx17 = g140025c28;
    rax6 = g14003d0e0;
    g14003d0e0 = rcx17;
    *reinterpret_cast<void***>(rcx17) = rax6;
    goto addr_140001392_17;
}

int64_t _wgetcwd = 0x14b3e;

void fun_14000c0b8(void** rcx, void** rdx, void** r8, void** r9);

int64_t _waccess = 0x14b72;

int64_t __p__wenviron = 0x14b4a;

struct s18 {
    void** f0;
    signed char[1] pad2;
    void** f2;
};

int64_t _wcsupr_s = 0x14b5a;

void** fun_14000d80c(void** rcx, void** rdx);

struct s21 {
    struct s21* f0;
    void** f8;
};

struct s20 {
    struct s21* f0;
    void** f8;
};

struct s19 {
    struct s19* f0;
    void** f8;
    signed char[7] pad16;
    struct s20* f10;
};

struct s25 {
    struct s25* f0;
    void** f8;
};

struct s26 {
    struct s26* f0;
    void** f8;
};

struct s24 {
    struct s25* f0;
    void** f8;
    signed char[7] pad16;
    struct s26* f10;
    signed char[8] pad32;
    unsigned char f20;
};

struct s23 {
    struct s23* f0;
    struct s24* f8;
};

struct s22 {
    struct s22* f0;
    void** f8;
    signed char[23] pad32;
    struct s23* f20;
};

uint32_t fun_140002054(void** rcx, void** rdx, void** r8, void** r9);

void** fun_14000c458(struct s25* rcx, void** rdx, void** r8, void** r9);

void** fun_14000ab18(void** ecx, void** rdx, void** r8, void** r9) {
    void* rsp5;
    uint64_t rax6;
    uint64_t v7;
    int64_t rsi8;
    void** r14_9;
    void** rax10;
    void** rax11;
    void** v12;
    void** r12_13;
    void* rsp14;
    void** r8_15;
    void* rsp16;
    void** rdi17;
    void** rdx18;
    void** rax19;
    void** rax20;
    void** rdx21;
    void* rsp22;
    uint32_t ecx23;
    void* rsp24;
    void** r9_25;
    void** r8_26;
    int32_t eax27;
    uint32_t eax28;
    void** v29;
    void** rdx30;
    void** rcx31;
    void* rsp32;
    int1_t zf33;
    int1_t zf34;
    void* rsp35;
    void** v36;
    void** rdx37;
    void** rcx38;
    void** rax39;
    void* rsp40;
    signed char al41;
    void* rsp42;
    uint32_t tmp32_43;
    void** rcx44;
    int32_t eax45;
    void** rax46;
    void** rdx47;
    void** rcx48;
    int32_t eax49;
    void* rsp50;
    int1_t zf51;
    int32_t eax52;
    void** rbx53;
    int1_t zf54;
    void** rbx55;
    int64_t rax56;
    void** rax57;
    void** rax58;
    void** rax59;
    void** rax60;
    void**** rax61;
    void* rsp62;
    void*** rbx63;
    void** rax64;
    struct s18* rax65;
    struct s18* rsi66;
    void** rcx67;
    int32_t eax68;
    void** rcx69;
    void** rax70;
    void* rsp71;
    void** rdi72;
    void** rdx73;
    void** rcx74;
    void** rax75;
    void** rax76;
    void** rbx77;
    void** rcx78;
    void** rax79;
    void** rcx80;
    void** rax81;
    void* rsp82;
    void** rax83;
    void** rax84;
    void** rax85;
    void** rcx86;
    int32_t eax87;
    void* rsp88;
    uint64_t r15_89;
    int1_t zf90;
    void** rcx91;
    void* rsp92;
    struct s19** rsi93;
    struct s19* rbx94;
    struct s21* rdi95;
    void** rcx96;
    void* rsp97;
    void** rbx98;
    void** rdx99;
    void** rcx100;
    void** rcx101;
    void* rsp102;
    void** rdi103;
    void** rcx104;
    void* rsp105;
    void** rbx106;
    void** rcx107;
    void* rsp108;
    struct s22** r12_109;
    void** r13_110;
    void** rcx111;
    void** rax112;
    void** rdi113;
    void** rcx114;
    int64_t rax115;
    void* rsp116;
    void** rcx117;
    void** rcx118;
    uint32_t eax119;
    int1_t zf120;
    void** rax121;
    void** r8_122;
    void** rcx123;
    void** rcx124;
    void** rax125;
    void* rsp126;
    unsigned char v127;
    uint64_t rcx128;
    uint64_t v129;
    uint32_t eax130;
    void* rsp131;
    int1_t zf132;
    void** v133;
    void** rax134;
    uint64_t rcx135;
    void** rax136;
    void** rcx137;
    int32_t eax138;
    struct s26* rbx139;
    struct s23* r14_140;
    struct s22* rdi141;
    void* rsp142;
    void** rax143;
    struct s24* rsi144;
    void* rsp145;
    int64_t r15_146;
    uint32_t ebx147;
    void** rdx148;
    struct s25* rcx149;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 0x500);
    rax6 = g140015008;
    v7 = rax6 ^ reinterpret_cast<uint64_t>(rsp5);
    *reinterpret_cast<void***>(&rsi8) = ecx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = 0;
    r14_9 = rdx;
    rax10 = fun_14000dcc4("M");
    rax11 = reinterpret_cast<void**>(_wgetcwd());
    v12 = rax11;
    r12_13 = rax11;
    fun_140001ac8(rax10, rax11, 66, r9);
    rsp14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8 - 8 + 8 - 8 + 8);
    r8_15 = reinterpret_cast<void**>("M");
    _wdupenv_s(reinterpret_cast<uint64_t>(rsp14) + 56);
    rsp16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp14) - 8 + 8);
    rdi17 = reinterpret_cast<void**>(0);
    if (!1) {
        rdx18 = reinterpret_cast<void**>(0xffffffffffffffff);
        do {
            ++rdx18;
        } while (*reinterpret_cast<void***>("M" + reinterpret_cast<unsigned char>(rdx18) * 2));
        r9 = reinterpret_cast<void**>(0xffffffffffffffff);
        r8_15 = reinterpret_cast<void**>(0);
        wcsncpy_s(" ");
        rsp16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp16) - 8 + 8);
    }
    g1400157ed = reinterpret_cast<void**>(1);
    rax19 = fun_14000dcc4(" ", " ");
    rax20 = fun_14000dcc4("M", "M");
    *reinterpret_cast<unsigned char*>(&r8_15) = 6;
    rdx21 = rax19;
    fun_140001ac8(rax20, rdx21, 6, r9);
    rsp22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp16) - 8 + 8 - 8 + 8 - 8 + 8);
    if (!1) {
        do {
            ecx23 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi17));
            if (!*reinterpret_cast<uint16_t*>(&ecx23)) 
                break;
            *reinterpret_cast<unsigned char*>(&rdx21) = 1;
            fun_14000b804(*reinterpret_cast<uint16_t*>(&ecx23), 1, r8_15, r9);
            rsp22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp22) - 8 + 8);
            rdi17 = rdi17 + 2;
        } while (rdi17);
    }
    free(0, rdx21, r8_15, r9);
    rsp24 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp22) - 8 + 8);
    r9_25 = reinterpret_cast<void**>("N");
    *reinterpret_cast<uint32_t*>(&r8_26) = 0;
    *reinterpret_cast<int32_t*>(&r8_26 + 4) = 0;
    eax27 = reinterpret_cast<int32_t>(_wgetenv_s(reinterpret_cast<uint64_t>(rsp24) + 64));
    if (!eax27) {
        eax28 = g140036ced;
        if (v29) {
            eax28 = 1;
        }
        g140036ced = *reinterpret_cast<unsigned char*>(&eax28);
    }
    rdx30 = r14_9 + 8;
    *reinterpret_cast<uint32_t*>(&rcx31) = static_cast<uint32_t>(rsi8 - 1);
    *reinterpret_cast<int32_t*>(&rcx31 + 4) = 0;
    fun_14000b43c(*reinterpret_cast<uint32_t*>(&rcx31), rdx30);
    rsp32 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp24) - 8 + 8 - 8 + 8);
    zf33 = g140026488 == 0;
    if (zf33) {
        fun_140003a8c(rcx31, rcx31);
        rsp32 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp32) - 8 + 8);
    }
    zf34 = (g1400157ec & 2) == 0;
    if (!zf34) 
        goto addr_14000ad52_15;
    fun_14000a944(rcx31, rdx30);
    rsp35 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp32) - 8 + 8);
    r8_26 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp35) + 80);
    g140026490 = reinterpret_cast<void**>("t");
    _wsearchenv();
    rsp32 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp35) - 8 + 8);
    if (!v36) 
        goto addr_14000ad52_15;
    *reinterpret_cast<uint32_t*>(&r8_26) = 32;
    *reinterpret_cast<int32_t*>(&r8_26 + 4) = 0;
    rdx37 = reinterpret_cast<void**>("r");
    rcx38 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp32) + 80);
    rax39 = reinterpret_cast<void**>(_wfsopen(rcx38, "r"));
    rsp40 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp32) - 8 + 8);
    g140026480 = rax39;
    if (!rax39) {
        r8_26 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp40) + 80);
        rdx37 = reinterpret_cast<void**>(0x41d);
        *reinterpret_cast<int32_t*>(&rdx37 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rcx38) = 0;
        *reinterpret_cast<int32_t*>(&rcx38 + 4) = 0;
        fun_140003898(0, 0x41d, r8_26, "N");
        rsp40 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp40) - 8 + 8);
    }
    al41 = fun_140006c34(rcx38, rdx37);
    rsp42 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp40) - 8 + 8);
    if (!al41) 
        goto addr_14000ad02_20;
    tmp32_43 = g140025c20 + 1;
    g140025c20 = tmp32_43;
    g140026489 = reinterpret_cast<void**>(1);
    fun_14000c0b8(rcx38, rdx37, r8_26, "N");
    rcx44 = g140026480;
    eax45 = reinterpret_cast<int32_t>(fclose(rcx44, rdx37));
    rsp32 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp42) - 8 + 8 - 8 + 8);
    if (eax45 != -1) {
        addr_14000ad52_15:
        rax46 = fun_14000dcc4(" ", " ");
        rdx47 = rax46;
        rcx48 = reinterpret_cast<void**>("M");
        eax49 = reinterpret_cast<int32_t>(_wputenv_s("M", rdx47));
        rsp50 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp32) - 8 + 8 - 8 + 8);
        if (eax49) {
            rdx47 = reinterpret_cast<void**>(0x41f);
            *reinterpret_cast<int32_t*>(&rdx47 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rcx48) = 0;
            *reinterpret_cast<int32_t*>(&rcx48 + 4) = 0;
            fun_140003898(0, 0x41f, r8_26, "N");
            rsp50 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp50) - 8 + 8);
        }
    } else {
        r8_26 = g140026490;
        goto addr_14000ad46_24;
    }
    zf51 = g140036e80 == 0;
    if (zf51) {
        rdx47 = reinterpret_cast<void**>(4);
        *reinterpret_cast<int32_t*>(&rdx47 + 4) = 0;
        rcx48 = reinterpret_cast<void**>("m");
        eax52 = reinterpret_cast<int32_t>(_waccess("m", 4));
        rsp50 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp50) - 8 + 8);
        if (eax52) {
            rbx53 = g1400157f8;
            if (!rbx53) {
                zf54 = (g1400157ec & 1) == 0;
                if (zf54) {
                    rdx47 = reinterpret_cast<void**>(0x428);
                    *reinterpret_cast<int32_t*>(&rdx47 + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rcx48) = 0;
                    *reinterpret_cast<int32_t*>(&rcx48 + 4) = 0;
                    fun_140003898(0, 0x428, r8_26, "N");
                    rsp50 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp50) - 8 + 8);
                }
            } else {
                rbx55 = *reinterpret_cast<void***>(rbx53 + 8);
                rdx47 = reinterpret_cast<void**>(4);
                *reinterpret_cast<int32_t*>(&rdx47 + 4) = 0;
                rcx48 = rbx55;
                rax56 = reinterpret_cast<int64_t>(_waccess(rcx48, 4));
                rsp50 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp50) - 8 + 8);
                if (!*reinterpret_cast<int32_t*>(&rax56) && ((rdx47 = reinterpret_cast<void**>(static_cast<uint32_t>(rax56 + 46)), *reinterpret_cast<int32_t*>(&rdx47 + 4) = 0, rax57 = reinterpret_cast<void**>(wcsrchr(rbx55, rdx47)), rsp50 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp50) - 8 + 8), rax57 == 0) || (r9_25 = rax57, r8_26 = rbx55, rcx48 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp50) + 80), rdx47 = reinterpret_cast<void**>(0x101), *reinterpret_cast<int32_t*>(&rdx47 + 4) = 0, rax58 = fun_14000d274(rcx48, 0x101, r8_26, r9_25), rsp50 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp50) - 8 + 8), !rax58))) {
                    rcx48 = g1400157f8;
                    g1400157f8 = *reinterpret_cast<void***>(rcx48);
                    g140036e80 = rcx48;
                }
            }
        } else {
            rax59 = fun_14000dc58();
            rcx48 = reinterpret_cast<void**>("m");
            rax60 = fun_14000dcc4("m", "m");
            rsp50 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp50) - 8 + 8 - 8 + 8);
            *reinterpret_cast<void***>(rax59 + 8) = rax60;
            g140036e80 = rax59;
        }
    }
    rax61 = reinterpret_cast<void****>(__p__wenviron(rcx48, rdx47));
    rsp62 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp50) - 8 + 8);
    rbx63 = *rax61;
    rax64 = *rbx63;
    if (rax64) {
        while (1) {
            rdx47 = reinterpret_cast<void**>(61);
            *reinterpret_cast<int32_t*>(&rdx47 + 4) = 0;
            rax65 = reinterpret_cast<struct s18*>(wcschr(rax64, 61));
            rsp62 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp62) - 8 + 8);
            rsi66 = rax65;
            if (!rax65 || ((rcx67 = *rbx63, rdx47 = reinterpret_cast<void**>("M"), *reinterpret_cast<uint32_t*>(&r8_26) = 8, *reinterpret_cast<int32_t*>(&r8_26 + 4) = 0, eax68 = reinterpret_cast<int32_t>(_wcsnicmp(rcx67, "M")), rsp62 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp62) - 8 + 8), eax68 == 0) || (rsi66->f0 = reinterpret_cast<void**>(0), rcx69 = *rbx63, *reinterpret_cast<void***>(rcx69) == 0))) {
                addr_14000af08_36:
                rbx63 = rbx63 + 8;
                rax64 = *rbx63;
                if (rax64) 
                    continue; else 
                    break;
            } else {
                rax70 = fun_14000dcc4(rcx69, rcx69);
                rsp71 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp62) - 8 + 8);
                rdi72 = rax70;
                rdx73 = reinterpret_cast<void**>(0xffffffffffffffff);
                do {
                    ++rdx73;
                } while (*reinterpret_cast<void***>(rax70 + reinterpret_cast<unsigned char>(rdx73) * 2));
                _wcsupr_s(rax70);
                rcx74 = reinterpret_cast<void**>(&rsi66->f2);
                rax75 = fun_14000dcc4(rcx74, rcx74);
                g1400157ed = reinterpret_cast<void**>(0);
                rdx47 = rax75;
                *reinterpret_cast<unsigned char*>(&r8_26) = 4;
                rsi66->f0 = reinterpret_cast<void**>(61);
                rax76 = fun_140001ac8(rdi72, rdx47, 4, r9_25);
                rsp62 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp71) - 8 + 8 - 8 + 8 - 8 + 8);
                if (*reinterpret_cast<signed char*>(&rax76)) 
                    goto addr_14000af08_36;
            }
            free(rdi72, rdx47);
            free(rax75, rdx47);
            rsp62 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp62) - 8 + 8 - 8 + 8);
            goto addr_14000af08_36;
        }
        r12_13 = v12;
    }
    rbx77 = g140036e80;
    if (rbx77) {
        do {
            rcx78 = *reinterpret_cast<void***>(rbx77 + 8);
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rcx78) == 45) || *reinterpret_cast<void***>(rcx78 + 2)) {
                rax79 = fun_14000dcc4(rcx78, rcx78);
                *reinterpret_cast<uint32_t*>(&r8_26) = 32;
                *reinterpret_cast<int32_t*>(&r8_26 + 4) = 0;
                g140026490 = rax79;
                rdx47 = reinterpret_cast<void**>("r");
                rcx80 = rax79;
                rax81 = reinterpret_cast<void**>(_wfsopen(rcx80, "r"));
                rsp82 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp62) - 8 + 8 - 8 + 8);
                g140026480 = rax81;
                if (!rax81) {
                    r8_26 = g140026490;
                    rdx47 = reinterpret_cast<void**>(0x41c);
                    *reinterpret_cast<int32_t*>(&rdx47 + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rcx80) = 0;
                    *reinterpret_cast<int32_t*>(&rcx80 + 4) = 0;
                    fun_140003898(0, 0x41c, r8_26, r9_25, 0, 0x41c, r8_26, r9_25);
                    rsp82 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp82) - 8 + 8);
                }
            } else {
                rax83 = fun_14000dcc4("S", "S");
                *reinterpret_cast<int32_t*>(&rcx80) = 0;
                *reinterpret_cast<int32_t*>(&rcx80 + 4) = 0;
                g140026490 = rax83;
                rax84 = reinterpret_cast<void**>(__acrt_iob_func());
                rsp82 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp62) - 8 + 8 - 8 + 8);
                g140026480 = rax84;
            }
            g140025c20 = 0;
            g140026489 = reinterpret_cast<void**>(0);
            fun_14000c0b8(rcx80, rdx47, r8_26, r9_25);
            rax85 = reinterpret_cast<void**>(__acrt_iob_func());
            rsp62 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp82) - 8 + 8 - 8 + 8);
            rcx86 = g140026480;
            if (rcx86 != rax85 && (eax87 = reinterpret_cast<int32_t>(fclose()), rsp62 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp62) - 8 + 8), eax87 == -1)) {
                r8_26 = g140026490;
                rdx47 = reinterpret_cast<void**>(0x424);
                *reinterpret_cast<int32_t*>(&rdx47 + 4) = 0;
                fun_140003898(0, 0x424, r8_26, r9_25, 0, 0x424, r8_26, r9_25);
                rsp62 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp62) - 8 + 8);
            }
            rbx77 = *reinterpret_cast<void***>(rbx77);
        } while (rbx77);
        rbx77 = g140036e80;
    }
    fun_140002f98(rbx77, rdx47, rbx77, rdx47);
    g140025c24 = 0;
    fun_14000d80c(rbx77, rdx47);
    rsp88 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp62) - 8 + 8 - 8 + 8);
    *reinterpret_cast<int32_t*>(&r15_89) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_89) + 4) = 0;
    zf90 = (g1400157ec & 1) == 0;
    if (!zf90) {
        *reinterpret_cast<int32_t*>(&rcx91) = 8;
        *reinterpret_cast<int32_t*>(&rcx91 + 4) = 0;
        fun_1400039c0(8, rdx47, r8_26, r9_25, 8, rdx47, r8_26, r9_25);
        rsp92 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp88) - 8 + 8);
        rsi93 = reinterpret_cast<struct s19**>(0x1400364d0);
        do {
            rbx94 = *rsi93;
            while (rbx94) {
                if (rbx94->f10 && (r8_26 = rbx94->f10->f8, !!r8_26)) {
                    rdx47 = rbx94->f8;
                    *reinterpret_cast<int32_t*>(&rcx91) = 14;
                    *reinterpret_cast<int32_t*>(&rcx91 + 4) = 0;
                    fun_1400039c0(14, rdx47, r8_26, r9_25, 14, rdx47, r8_26, r9_25);
                    rsp92 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp92) - 8 + 8);
                    rdi95 = rbx94->f10->f0;
                    while (rdi95) {
                        rdx47 = rdi95->f8;
                        if (rdx47) {
                            rcx91 = reinterpret_cast<void**>("\t");
                            fun_14000bfe0("\t", rdx47, r8_26, r9_25);
                            rsp92 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp92) - 8 + 8);
                        }
                        rdi95 = rdi95->f0;
                    }
                }
                rbx94 = rbx94->f0;
            }
            ++rsi93;
        } while (reinterpret_cast<int64_t>(rsi93) < 0x140036cd0);
        fun_14000c008(rcx91, rdx47);
        fun_14000bfb0(rcx91, rdx47);
        *reinterpret_cast<int32_t*>(&rcx96) = static_cast<int32_t>(reinterpret_cast<int64_t>(rbx94) + 7);
        *reinterpret_cast<int32_t*>(&rcx96 + 4) = 0;
        fun_1400039c0(rcx96, rdx47, r8_26, r9_25, rcx96, rdx47, r8_26, r9_25);
        rsp97 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp92) - 8 + 8 - 8 + 8 - 8 + 8);
        rbx98 = g140025c00;
        while (rbx98) {
            rdx99 = *reinterpret_cast<void***>(rbx98 + 16);
            rcx100 = reinterpret_cast<void**>("%");
            if (*reinterpret_cast<void***>(rbx98 + 40)) {
                rcx100 = reinterpret_cast<void**>("%");
            }
            fun_14000bfe0(rcx100, rdx99, r8_26, r9_25);
            *reinterpret_cast<int32_t*>(&rcx101) = 10;
            *reinterpret_cast<int32_t*>(&rcx101 + 4) = 0;
            fun_1400039c0(10, rdx99, r8_26, r9_25, 10, rdx99, r8_26, r9_25);
            rsp102 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp97) - 8 + 8 - 8 + 8);
            rdi103 = *reinterpret_cast<void***>(rbx98 + 24);
            if (rdi103) {
                rcx101 = reinterpret_cast<void**>("%");
                while (rdx99 = *reinterpret_cast<void***>(rdi103 + 8), fun_14000bfe0(rcx101, rdx99, r8_26, r9_25), rsp102 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp102) - 8 + 8), rdi103 = *reinterpret_cast<void***>(rdi103), !!rdi103) {
                    rcx101 = reinterpret_cast<void**>("\t");
                }
            }
            fun_14000c008(rcx101, rdx99);
            rsp97 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp102) - 8 + 8);
            rbx98 = *reinterpret_cast<void***>(rbx98);
        }
        rdx47 = reinterpret_cast<void**>(".");
        rcx104 = reinterpret_cast<void**>("%");
        fun_14000bfe0("%", ".", r8_26, r9_25);
        rsp105 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp97) - 8 + 8);
        rbx106 = g140025c18;
        while (rbx106) {
            rdx47 = *reinterpret_cast<void***>(rbx106 + 8);
            rcx104 = reinterpret_cast<void**>("%");
            fun_14000bfe0("%", rdx47, r8_26, r9_25);
            rsp105 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp105) - 8 + 8);
            rbx106 = *reinterpret_cast<void***>(rbx106);
        }
        fun_14000c008(rcx104, rdx47);
        fun_14000bfb0(rcx104, rdx47);
        *reinterpret_cast<int32_t*>(&rcx107) = static_cast<int32_t>(reinterpret_cast<uint64_t>(rbx106 + 9));
        *reinterpret_cast<int32_t*>(&rcx107 + 4) = 0;
        fun_1400039c0(rcx107, rdx47, r8_26, r9_25, rcx107, rdx47, r8_26, r9_25);
        rsp108 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp105) - 8 + 8 - 8 + 8 - 8 + 8);
        r12_109 = reinterpret_cast<struct s22**>(0x140025800);
        *reinterpret_cast<uint32_t*>(&r13_110) = 0x80;
        *reinterpret_cast<int32_t*>(&r13_110 + 4) = 0;
        goto addr_14000b168_76;
    }
    addr_14000b2ab_77:
    rcx111 = g1400364b8;
    if (rcx111) {
        free();
        rsp88 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp88) - 8 + 8);
    }
    while (rax112 = g1400157f8, rdi113 = rax112, !!rax112) {
        rcx114 = *reinterpret_cast<void***>(rax112 + 8);
        rdx47 = reinterpret_cast<void**>("*");
        rax115 = reinterpret_cast<int64_t>(wcspbrk(rcx114, "*", r8_26, r9_25));
        rsp116 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp88) - 8 + 8);
        rcx117 = g1400157f8;
        rcx118 = *reinterpret_cast<void***>(rcx117 + 8);
        if (!rax115) {
            rdx47 = g1400157ee;
            r8_26 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp116) + 48);
            eax119 = fun_140002054(rcx118, rdx47, r8_26, r9_25);
            rsp88 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp116) - 8 + 8);
            if (reinterpret_cast<int32_t>(eax119) >= reinterpret_cast<int32_t>(0)) 
                goto addr_14000b3c0_82;
            zf120 = (g1400157ec & 8) == 0;
            if (!zf120) 
                goto addr_14000b3ee_84;
        } else {
            r8_26 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp116) + 72);
            rax121 = fun_140005ca8(rcx118, reinterpret_cast<uint64_t>(rsp116) + 80, r8_26, r9_25);
            rsp88 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp116) - 8 + 8);
            if (!rax121) {
                r8_122 = g1400157f8;
                rdx47 = reinterpret_cast<void**>(0x42d);
                *reinterpret_cast<int32_t*>(&rdx47 + 4) = 0;
                r8_26 = *reinterpret_cast<void***>(r8_122 + 8);
                fun_140003898(0, 0x42d, r8_26, r9_25, 0, 0x42d, r8_26, r9_25);
                rsp88 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp88) - 8 + 8);
            } else {
                do {
                    rcx123 = g1400157f8;
                    rdx47 = rax121;
                    rcx124 = *reinterpret_cast<void***>(rcx123 + 8);
                    rax125 = fun_14000f570(rcx124, rdx47, r8_26, r9_25);
                    rsp126 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp88) - 8 + 8);
                    if (!(v127 & 16) || (rcx128 = v129, !*reinterpret_cast<int32_t*>(&rcx128)) && (rdx47 = reinterpret_cast<void**>(rcx128 >> 32), !rdx47)) {
                    }
                    rdx47 = g1400157ee;
                    r8_26 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp126) + 48);
                    eax130 = fun_140002054(rax125, rdx47, r8_26, r9_25);
                    free(rax125, rdx47, r8_26, r9_25);
                    rsp131 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp126) - 8 + 8 - 8 + 8);
                    if (reinterpret_cast<int32_t>(eax130) >= reinterpret_cast<int32_t>(0)) 
                        continue;
                    zf132 = (g1400157ec & 8) == 0;
                    if (!zf132) 
                        goto addr_14000b3e0_91;
                    rdx47 = v133;
                    rax121 = fun_140005e30(reinterpret_cast<uint64_t>(rsp131) + 80, rdx47, r8_26, r9_25);
                    rsp88 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp131) - 8 + 8);
                } while (rax121);
            }
        }
        addr_14000b3c0_82:
        g1400157f8 = *reinterpret_cast<void***>(rdi113);
        rax134 = g14003d0e0;
        *reinterpret_cast<void***>(rdi113) = rax134;
        g14003d0e0 = rdi113;
    }
    addr_14000b400_95:
    _wchdir(r12_13, rdx47, r8_26, r9_25);
    rcx135 = v7 ^ reinterpret_cast<uint64_t>(rsp88) - 8 + 8;
    rax136 = fun_140010130(rcx135, rdx47, r8_26, rcx135, rdx47, r8_26);
    return rax136;
    addr_14000b3ee_84:
    fun_140002f98(rdi113, rdx47, rdi113, rdx47);
    rsp88 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp88) - 8 + 8);
    goto addr_14000b400_95;
    addr_14000b3e0_91:
    fun_140002f98(rdi113, rdx47, rdi113, rdx47);
    rsp88 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp131) - 8 + 8);
    goto addr_14000b400_95;
    addr_14000ad46_24:
    fun_140003898(0, 0x424, r8_26, "N");
    rsp32 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp32) - 8 + 8);
    goto addr_14000ad52_15;
    addr_14000ad02_20:
    rcx137 = g140026480;
    eax138 = reinterpret_cast<int32_t>(fclose(rcx137, rdx37));
    rsp32 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp42) - 8 + 8);
    if (eax138 != -1) 
        goto addr_14000ad52_15;
    r8_26 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp32) + 80);
    goto addr_14000ad46_24;
    addr_14000b287_97:
    fun_14000c008(rcx107, rdx47);
    fun_14000bfb0(rcx107, rdx47);
    rsp88 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp108) - 8 + 8 - 8 + 8);
    r12_13 = v12;
    g140026458 = r13_110;
    g140026470 = r13_110;
    g140026478 = r13_110;
    goto addr_14000b2ab_77;
    while (1) {
        rbx139 = rbx139->f0;
        if (rbx139) {
            rdx47 = rbx139->f8;
            if (!rdx47) 
                continue;
            rcx107 = reinterpret_cast<void**>("\t");
        } else {
            while (1) {
                r14_140 = r14_140->f0;
                while (!r14_140) {
                    rdi141 = rdi141->f0;
                    fun_14000c008(rcx107, rdx47);
                    rsp108 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp142) - 8 + 8);
                    if (!rdi141) {
                        *reinterpret_cast<int32_t*>(&r15_89) = static_cast<int32_t>(reinterpret_cast<int64_t>(r14_140) + 1);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_89) + 4) = 0;
                        do {
                            ++r12_109;
                            r13_110 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_110) - r15_89);
                            if (!r13_110) 
                                goto addr_14000b287_97;
                            addr_14000b168_76:
                            rdi141 = *r12_109;
                        } while (!rdi141);
                    }
                    rdx47 = rdi141->f8;
                    rcx107 = reinterpret_cast<void**>("%");
                    *reinterpret_cast<uint32_t*>(&r8_26) = (*reinterpret_cast<uint32_t*>(&r8_26) - (*reinterpret_cast<uint32_t*>(&r8_26) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r8_26) < *reinterpret_cast<uint32_t*>(&r8_26) + reinterpret_cast<uint1_t>(!!(rdi141->f20->f8->f20 & 32)))) & 26) + 32;
                    *reinterpret_cast<int32_t*>(&r8_26 + 4) = 0;
                    fun_14000bfe0("%", rdx47, r8_26, r9_25);
                    rsp142 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp108) - 8 + 8);
                    rax143 = rdi141->f8;
                    r14_140 = rdi141->f20;
                    g140026458 = rax143;
                    g140026470 = rax143;
                    g140026478 = rax143;
                }
                rsi144 = r14_140->f8;
                fun_1400039c0(11, rdx47, r8_26, r9_25, 11, rdx47, r8_26, r9_25);
                rsp145 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp142) - 8 + 8);
                *reinterpret_cast<uint32_t*>(&r15_146) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_146) + 4) = 0;
                ebx147 = 1;
                do {
                    if (rsi144->f20 & *reinterpret_cast<unsigned char*>(&ebx147)) {
                        *reinterpret_cast<uint32_t*>(&rdx148) = *reinterpret_cast<uint16_t*>("d" + r15_146 * 2);
                        *reinterpret_cast<int32_t*>(&rdx148 + 4) = 0;
                        fun_14000bfe0("-", rdx148, r8_26, r9_25);
                        rsp145 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp145) - 8 + 8);
                    }
                    *reinterpret_cast<uint32_t*>(&r15_146) = *reinterpret_cast<uint32_t*>(&r15_146) + 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_146) + 4) = 0;
                    ebx147 = ebx147 + ebx147;
                } while (ebx147 < 16);
                rdx47 = rsi144->f8;
                rcx149 = rsi144->f0;
                fun_14000c458(rcx149, rdx47, r8_26, r9_25);
                *reinterpret_cast<int32_t*>(&rcx107) = 10;
                *reinterpret_cast<int32_t*>(&rcx107 + 4) = 0;
                fun_1400039c0(10, rdx47, r8_26, r9_25, 10, rdx47, r8_26, r9_25);
                rsp142 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp145) - 8 + 8 - 8 + 8);
                rbx139 = rsi144->f10;
                if (rbx139) 
                    break;
                fun_14000c008(10, rdx47);
                rsp142 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp142) - 8 + 8);
            }
            rdx47 = rbx139->f8;
            if (!rdx47) 
                continue;
            rcx107 = reinterpret_cast<void**>("%");
        }
        fun_14000bfe0(rcx107, rdx47, r8_26, r9_25);
        rsp142 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp142) - 8 + 8);
    }
}

int32_t fun_14000fb60(void** rcx, void** rdx, void** r8, void** r9);

struct s27 {
    signed char[2] pad2;
    void** f2;
};

void** fun_14000d274(void** rcx, void** rdx, void** r8, void** r9) {
    void** v5;
    void** v6;
    void** v7;
    void** r15_8;
    void** rdi9;
    void** v10;
    void** rsi11;
    void** r12_12;
    void** rax13;
    void** r13_14;
    void** v15;
    void** r14_16;
    void** v17;
    void** rax18;
    void** rbp19;
    int32_t eax20;
    void** rcx21;
    uint32_t eax22;
    void** rbx23;
    void** v24;
    void** rbx25;
    void** rax26;
    uint32_t eax27;
    int64_t rax28;
    int64_t rax29;
    void** rdi30;
    int32_t esi31;
    void** r9_32;
    void** r8_33;
    int32_t edi34;
    void** rdi35;
    void** r14_36;
    int64_t rdi37;
    void** rax38;
    void** r8_39;
    void** rbx40;
    int32_t ecx41;
    struct s27* rax42;
    struct s27* rbx43;
    struct s27* rax44;
    void** rbx45;
    void* rax46;
    int64_t rax47;
    int64_t rbp48;
    void* rbx49;
    void** rsi50;
    void** rdx51;
    void* rsi52;
    void** rax53;
    void** rbx54;
    signed char sil55;
    void** rdx56;
    int64_t rax57;
    signed char al58;
    uint64_t rax59;
    void** rax60;
    void** rdi61;
    void** r14_62;
    int64_t r15_63;
    uint32_t ebp64;
    void** rsi65;
    void* r14_66;
    int32_t eax67;
    void*** rsi68;
    void*** rax69;
    void** rcx70;

    v5 = r9;
    v6 = r8;
    v7 = rdx;
    r15_8 = g140025c00;
    rdi9 = r9;
    v10 = r15_8;
    rsi11 = r8;
    r12_12 = rcx;
    if (!r15_8) {
        addr_14000d7e0_2:
        *reinterpret_cast<int32_t*>(&rax13) = 0;
        *reinterpret_cast<int32_t*>(&rax13 + 4) = 0;
    } else {
        r13_14 = v15;
        while (1) {
            r14_16 = *reinterpret_cast<void***>(r15_8 + 16);
            v17 = r14_16;
            rax18 = reinterpret_cast<void**>(wcsrchr(r14_16, 46, r8, r9));
            rbp19 = rax18;
            eax20 = fun_14000fb60(rax18, rdi9, r8, r9);
            if (eax20) 
                goto addr_14000d7cd_5;
            rcx21 = r14_16 + 2;
            *reinterpret_cast<void***>(r12_12) = reinterpret_cast<void**>(0);
            eax22 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx21));
            rbx23 = rcx21;
            v24 = rcx21;
            if (!*reinterpret_cast<void***>(&eax22)) {
                addr_14000d483_7:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r14_16) == 0x7b)) {
                    if (!*reinterpret_cast<void***>(rbx23)) {
                        rbx25 = rsi11;
                    } else {
                        rax26 = reinterpret_cast<void**>(wcsrchr(rsi11, 46, r8, r9));
                        rbx25 = rax26;
                        eax27 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax26));
                        if (*reinterpret_cast<int16_t*>(&eax27) == 58) {
                            addr_14000d61e_11:
                            rbx25 = rbx25 + 2;
                        } else {
                            do {
                                if (*reinterpret_cast<int16_t*>(&eax27) == 92) 
                                    break;
                            } while (*reinterpret_cast<int16_t*>(&eax27) != 47 && (reinterpret_cast<unsigned char>(rbx25) > reinterpret_cast<unsigned char>(rsi11) && (rbx25 = rbx25 - 2, eax27 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx25)), *reinterpret_cast<int16_t*>(&eax27) != 58)));
                            *reinterpret_cast<uint32_t*>(&rax28) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx25));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = 0;
                            *reinterpret_cast<uint16_t*>(&rax28) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax28) - 47);
                            if (*reinterpret_cast<uint16_t*>(&rax28) > 45) 
                                goto addr_14000d627_16;
                            if (static_cast<int1_t>(0x200000000801 >> rax28)) 
                                goto addr_14000d61e_11;
                        }
                    }
                    addr_14000d627_16:
                    rax29 = reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(rdi9) - reinterpret_cast<unsigned char>(rbx25)) >> 1;
                    rdi30 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax29)));
                    esi31 = 0;
                    if (rbx25 != v6 && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v6) == 34)) {
                        *reinterpret_cast<void***>(r12_12) = reinterpret_cast<void**>(34);
                        esi31 = 1;
                    }
                    if (*reinterpret_cast<int32_t*>(&rdi30) >= *reinterpret_cast<int32_t*>(&v7) - esi31) {
                        fun_140003898(0, 0x434, r8, r9);
                    }
                    r9_32 = rdi30;
                    r8_33 = rbx25;
                    wcsncpy_s(r12_12 + esi31 * 2);
                    edi34 = *reinterpret_cast<int32_t*>(&rdi30) + esi31;
                } else {
                    rdi35 = rcx21;
                    r14_36 = rcx21;
                    if (*reinterpret_cast<void***>(rdi35)) {
                        do {
                            if (*reinterpret_cast<void***>(rdi35) == 0x7d) 
                                break;
                            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi35) == 94)) {
                                rdi35 = rdi35 + 2;
                            }
                            rdi35 = rdi35 + 2;
                        } while (*reinterpret_cast<void***>(rdi35));
                    }
                    rdi37 = reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(rdi35) - reinterpret_cast<unsigned char>(r14_36)) >> 1;
                    if (!*reinterpret_cast<int32_t*>(&rdi37)) {
                        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rsi11) == 34)) {
                            *reinterpret_cast<int32_t*>(&rax38) = 2;
                            *reinterpret_cast<int32_t*>(&rax38 + 4) = 0;
                            r8_39 = reinterpret_cast<void**>(".");
                        } else {
                            *reinterpret_cast<int32_t*>(&rax38) = 3;
                            *reinterpret_cast<int32_t*>(&rax38 + 4) = 0;
                            r8_39 = reinterpret_cast<void**>("\"");
                        }
                        r9_32 = rax38;
                        *reinterpret_cast<int32_t*>(&rdi37) = *reinterpret_cast<int32_t*>(&rax38);
                        wcsncpy_s(r12_12, v7, r8_39, r9_32);
                        r14_16 = r14_36 + 2;
                    } else {
                        rbx40 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rdi37)));
                        r8_39 = r14_36;
                        r9_32 = rbx40;
                        wcsncpy_s(r12_12, v7, r8_39, r9_32);
                        ecx41 = static_cast<int32_t>(rdi37 + 1);
                        r14_16 = r14_36 + ecx41 * 2;
                        if (*reinterpret_cast<void***>(r14_16 + 0xfffffffffffffffc) != 92) {
                            *reinterpret_cast<void***>(r12_12 + reinterpret_cast<unsigned char>(rbx40) * 2) = reinterpret_cast<void**>(92);
                            *reinterpret_cast<int32_t*>(&rdi37) = ecx41;
                        }
                    }
                    rax42 = reinterpret_cast<struct s27*>(wcsrchr(rsi11, 92, r8_39, r9_32));
                    rbx43 = rax42;
                    rax44 = reinterpret_cast<struct s27*>(wcsrchr(rsi11, 47, r8_39, r9_32));
                    if (reinterpret_cast<uint64_t>(rax44) > reinterpret_cast<uint64_t>(rbx43)) {
                        rbx43 = rax44;
                    }
                    if (!rbx43) {
                        rbx45 = rsi11;
                        if (*reinterpret_cast<void***>(rsi11) == 34) {
                            rbx45 = rsi11 + 2;
                        }
                        r8_33 = rbx45;
                        wcscpy_s(r12_12 + *reinterpret_cast<int32_t*>(&rdi37) * 2);
                        rax46 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v5) - reinterpret_cast<unsigned char>(rbx45));
                    } else {
                        r8_33 = reinterpret_cast<void**>(&rbx43->f2);
                        wcscpy_s(r12_12 + *reinterpret_cast<int32_t*>(&rdi37) * 2);
                        rax46 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v5) - reinterpret_cast<uint64_t>(rbx43) - 2);
                    }
                    rax47 = reinterpret_cast<int64_t>(rax46) >> 1;
                    edi34 = *reinterpret_cast<int32_t*>(&rdi37) + *reinterpret_cast<int32_t*>(&rax47);
                }
            } else {
                do {
                    if (*reinterpret_cast<void***>(&eax22) == 0x7b) 
                        break;
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax22) == 94)) {
                        *reinterpret_cast<int32_t*>(&r8) = 34;
                        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax22) == 34)) {
                            do {
                                rbx23 = rbx23 + 2;
                            } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx23) == 34));
                        }
                    } else {
                        rbx23 = rbx23 + 2;
                    }
                    rbx23 = rbx23 + 2;
                    eax22 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx23));
                } while (*reinterpret_cast<void***>(&eax22));
                if (!*reinterpret_cast<void***>(rbx23)) 
                    goto addr_14000d483_7; else 
                    goto addr_14000d347_49;
            }
            rbp48 = reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(rbp19) - reinterpret_cast<unsigned char>(r14_16)) >> 1;
            if (*reinterpret_cast<int32_t*>(&rbp48) >= *reinterpret_cast<int32_t*>(&v7) - edi34) {
                fun_140003898(0, 0x434, r8_33, r9_32);
            }
            r8 = r14_16;
            rbx49 = reinterpret_cast<void*>(static_cast<int64_t>(edi34));
            rsi50 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rbp48)));
            rdx51 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v7) - reinterpret_cast<uint64_t>(rbx49));
            r9 = rsi50;
            wcsncpy_s(r12_12 + reinterpret_cast<uint64_t>(rbx49) * 2);
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r12_12) == 34) && (rsi52 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rsi50) + reinterpret_cast<uint64_t>(rbx49)), *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(r12_12 + reinterpret_cast<uint64_t>(rsi52) * 2) - 2) != 34)) {
                if (*reinterpret_cast<int32_t*>(&v7) - *reinterpret_cast<int32_t*>(&rbp48) - edi34 <= 1) {
                    rdx51 = reinterpret_cast<void**>(0x434);
                    *reinterpret_cast<int32_t*>(&rdx51 + 4) = 0;
                    fun_140003898(0, 0x434, r8, r9);
                }
                *reinterpret_cast<void***>(r12_12 + reinterpret_cast<uint64_t>(rsi52) * 2) = reinterpret_cast<void**>(34);
                *reinterpret_cast<int32_t*>(&rbp48) = *reinterpret_cast<int32_t*>(&rbp48) + 1;
            }
            *reinterpret_cast<void***>(r12_12 + (*reinterpret_cast<int32_t*>(&rbp48) + reinterpret_cast<uint64_t>(rbx49)) * 2) = reinterpret_cast<void**>(0);
            rax53 = fun_14000dde0(r12_12, rdx51, r8, r9, r12_12, rdx51, r8);
            if (rax53) 
                goto addr_14000d7fa_57;
            rbx54 = r12_12;
            sil55 = 0;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r12_12) == 34)) {
                addr_14000d759_59:
                rdx56 = r13_14;
                rax57 = reinterpret_cast<int64_t>(FindFirstFileW(rbx54, rdx56, r8, r9));
                if (rax57 == -1) 
                    goto addr_14000d76e_60;
                rdx56 = r13_14;
                al58 = fun_140005f9c(rbx54, rdx56, r8, r9);
                if (al58) 
                    goto addr_14000d78d_62;
            } else {
                rax59 = 0xffffffffffffffff;
                do {
                    ++rax59;
                } while (*reinterpret_cast<void***>(r12_12 + rax59 * 2));
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(reinterpret_cast<uint64_t>(r12_12 + rax59 * 2) - 2) == 34)) 
                    goto addr_14000d759_59; else 
                    goto addr_14000d74b_66;
            }
            addr_14000d76e_60:
            if (sil55) {
                free(rbx54, rdx56, r8, r9);
            }
            addr_14000d7bd_68:
            rdi9 = v5;
            rsi11 = v6;
            goto addr_14000d7cd_5;
            addr_14000d74b_66:
            rax60 = fun_14000fcac(r12_12, rdx51, r8, r9);
            rbx54 = rax60;
            sil55 = 1;
            goto addr_14000d759_59;
            addr_14000d347_49:
            rdi61 = rbx23;
            do {
                if (*reinterpret_cast<void***>(rdi61) == 0x7d) 
                    break;
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi61) == 94)) {
                    rdi61 = rdi61 + 2;
                }
                rdi61 = rdi61 + 2;
            } while (*reinterpret_cast<void***>(rdi61));
            r14_62 = rsi11;
            r15_63 = reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(rdi61) - reinterpret_cast<unsigned char>(rbx23) - 2) >> 1;
            ebp64 = *reinterpret_cast<uint32_t*>(&r15_63);
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rsi11) == 34)) 
                goto addr_14000d380_74;
            addr_14000d384_75:
            rsi65 = rbx23 + 2;
            *reinterpret_cast<int32_t*>(&r8) = 92;
            *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
            if (!*reinterpret_cast<uint32_t*>(&r15_63)) {
                addr_14000d3e3_76:
                if (ebp64 == 0xffffffff) 
                    goto addr_14000d7b8_77;
            } else {
                r14_66 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r14_62) - reinterpret_cast<unsigned char>(rsi65));
                while (1) {
                    if (*reinterpret_cast<void***>(rsi65) == 92 || *reinterpret_cast<void***>(rsi65) == 47) {
                        if (*reinterpret_cast<void***>(reinterpret_cast<uint64_t>(r14_66) + reinterpret_cast<unsigned char>(rsi65)) == 92) 
                            goto addr_14000d3d5_81;
                        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(reinterpret_cast<uint64_t>(r14_66) + reinterpret_cast<unsigned char>(rsi65)) == 47)) 
                            goto addr_14000d3e0_83;
                    } else {
                        *reinterpret_cast<int32_t*>(&r8) = 1;
                        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                        eax67 = reinterpret_cast<int32_t>(_wcsnicmp(rsi65, reinterpret_cast<uint64_t>(r14_66) + reinterpret_cast<unsigned char>(rsi65), 1, r9));
                        if (eax67) 
                            goto addr_14000d7b8_77;
                        *reinterpret_cast<int32_t*>(&r8) = 92;
                        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                    }
                    addr_14000d3d5_81:
                    rsi65 = rsi65 + 2;
                    --ebp64;
                    if (!ebp64) 
                        break;
                }
            }
            rbp19 = rbx23;
            rsi68 = reinterpret_cast<void***>(v6 + 2 + *reinterpret_cast<int32_t*>(&r15_63) * 2);
            rax69 = reinterpret_cast<void***>(wcschr(rsi68, 92));
            if (rax69 || (rax69 = reinterpret_cast<void***>(wcschr(rsi68, 47)), !!rax69)) {
                if (rax69 != rsi68 || *reinterpret_cast<void***>(rdi61 + 0xfffffffffffffffe) == 92) {
                    addr_14000d7b8_77:
                    r15_8 = v10;
                    goto addr_14000d7bd_68;
                } else {
                    rdi9 = v5;
                    rsi11 = v6;
                    r15_8 = v10;
                    if (*reinterpret_cast<void***>(rdi61 + 0xfffffffffffffffe) == 47) {
                        addr_14000d7cd_5:
                        r15_8 = *reinterpret_cast<void***>(r15_8);
                        v10 = r15_8;
                        if (r15_8) 
                            continue; else 
                            goto addr_14000d7e0_2;
                    }
                }
            } else {
                rsi11 = v6;
                r15_8 = v10;
                rdi9 = v5;
            }
            rcx21 = v24;
            r14_16 = v17;
            goto addr_14000d483_7;
            addr_14000d3e0_83:
            ebp64 = 0xffffffff;
            goto addr_14000d3e3_76;
            addr_14000d380_74:
            r14_62 = rsi11 + 2;
            goto addr_14000d384_75;
        }
    }
    addr_14000d7e2_93:
    return rax13;
    addr_14000d7fa_57:
    rcx70 = *reinterpret_cast<void***>(rax53 + 24);
    *reinterpret_cast<void***>(r13_14 + 4) = rcx70;
    *reinterpret_cast<void***>(r13_14 + 20) = rcx70;
    addr_14000d806_94:
    rax13 = r15_8;
    goto addr_14000d7e2_93;
    addr_14000d78d_62:
    FindClose(rax57, rdx56, r8, r9);
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_14)) & 16) && (!*reinterpret_cast<void***>(r13_14 + 20) && !*reinterpret_cast<void***>(r13_14 + 24))) {
        *reinterpret_cast<void***>(r13_14 + 20) = reinterpret_cast<void**>(0xffffffff);
        *reinterpret_cast<void***>(r13_14 + 24) = reinterpret_cast<void**>(0xffffffff);
        goto addr_14000d806_94;
    }
}

uint64_t fun_14000c304(uint64_t rcx, void** rdx, void** r8, void** r9);

void** fun_14000c458(struct s25* rcx, void** rdx, void** r8, void** r9) {
    void* rsp5;
    uint64_t rax6;
    uint64_t v7;
    struct s25* rdi8;
    void* rsp9;
    uint64_t r14_10;
    void** rcx11;
    int64_t rax12;
    void* rsp13;
    void** rcx14;
    int64_t rax15;
    void* rsp16;
    void** rdx17;
    uint64_t rax18;
    void** rcx19;
    void** rax20;
    void** rcx21;
    void** rax22;
    uint64_t rax23;
    void* rsp24;
    void** v25;
    void** r8_26;
    void** rax27;
    void* rsp28;
    void** r15_29;
    void** rcx30;
    void** rax31;
    void* rsp32;
    void** rsi33;
    int64_t rax34;
    void* rsp35;
    uint64_t rax36;
    void** r8_37;
    void** rax38;
    void** rax39;
    uint64_t rax40;
    void* rsp41;
    void** v42;
    void** rax43;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 0x2a0);
    rax6 = g140015008;
    v7 = rax6 ^ reinterpret_cast<uint64_t>(rsp5);
    rdi8 = rcx;
    fun_1400039c0(12, rdx, r8, r9);
    rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
    *reinterpret_cast<int32_t*>(&r14_10) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_10) + 4) = 0;
    while (rdi8) {
        rcx11 = rdi8->f8;
        rax12 = reinterpret_cast<int64_t>(wcschr(rcx11, 36, r8));
        rsp13 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp9) - 8 + 8);
        rcx14 = rdi8->f8;
        if (!rax12) {
            rax15 = reinterpret_cast<int64_t>(wcspbrk(rcx14, "*", r8));
            rsp16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp13) - 8 + 8);
            if (!rax15) {
                rdx17 = rdi8->f8;
                fun_14000bfe0("%", rdx17, r8, r9);
                rdx = rdi8->f8;
                rax18 = fun_14000c304(r14_10, rdx, r8, r9);
                rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp16) - 8 + 8 - 8 + 8);
                r14_10 = rax18;
            } else {
                rcx19 = rdi8->f8;
                r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp16) + 32);
                rdx = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp16) + 64);
                rax20 = fun_140005ca8(rcx19, rdx, r8, r9);
                rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp16) - 8 + 8);
                while (rax20) {
                    rcx21 = rdi8->f8;
                    rax22 = fun_14000f570(rcx21, rax20, r8, r9);
                    fun_14000bfe0("%", rax22, r8, r9);
                    rax23 = fun_14000c304(r14_10, rax22, r8, r9);
                    r14_10 = rax23;
                    free(rax22, rax22, r8);
                    rsp24 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp9) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
                    rdx = v25;
                    rax20 = fun_140005e30(reinterpret_cast<uint64_t>(rsp24) + 64, rdx, r8, r9);
                    rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp24) - 8 + 8);
                }
            }
        } else {
            r8_26 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp13) + 48);
            rax27 = fun_14000e740(rcx14, 1, r8_26, rcx14, 1, r8_26);
            rsp28 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp13) - 8 + 8);
            r15_29 = rax27;
            rcx30 = rax27;
            while (r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp28) + 40), rdx = reinterpret_cast<void**>(" "), rax31 = reinterpret_cast<void**>(wcstok_s(rcx30, " ", r8)), rsp32 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp28) - 8 + 8), rsi33 = rax31, !!rax31) {
                rax34 = reinterpret_cast<int64_t>(wcspbrk(rsi33, "*", r8));
                rsp35 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp32) - 8 + 8);
                if (!rax34) {
                    fun_14000bfe0("%", rsi33, r8, r9);
                    rax36 = fun_14000c304(r14_10, rsi33, r8, r9);
                    rsp28 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp35) - 8 + 8 - 8 + 8);
                    r14_10 = rax36;
                } else {
                    r8_37 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp35) + 32);
                    rax38 = fun_140005ca8(rsi33, reinterpret_cast<uint64_t>(rsp35) + 64, r8_37, r9);
                    rsp28 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp35) - 8 + 8);
                    while (rax38) {
                        rax39 = fun_14000f570(rsi33, rax38, r8_37, r9);
                        fun_14000bfe0("%", rax39, r8_37, r9);
                        rax40 = fun_14000c304(r14_10, rax39, r8_37, r9);
                        r14_10 = rax40;
                        free(rax39, rax39, r8_37);
                        rsp41 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp28) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
                        rax38 = fun_140005e30(reinterpret_cast<uint64_t>(rsp41) + 64, v42, r8_37, r9);
                        rsp28 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp41) - 8 + 8);
                    }
                }
                *reinterpret_cast<int32_t*>(&rcx30) = 0;
                *reinterpret_cast<int32_t*>(&rcx30 + 4) = 0;
            }
            free(r15_29, " ", r8);
            rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp32) - 8 + 8);
        }
        rdi8 = rdi8->f0;
    }
    rax43 = fun_140010130(v7 ^ reinterpret_cast<uint64_t>(rsp9), rdx, r8);
    return rax43;
}

int16_t g14002644c;

void fun_1400032c8(void*** rcx, uint64_t* rdx, void** r8, void** r9);

void** fun_140003510(void** rcx, int32_t* rdx, void** r8, void** r9);

void** fun_1400036ec(void** rcx, void** rdx) {
    void* rsp3;
    void* rbp4;
    void** rbx5;
    void** rsi6;
    void** rax7;
    void* rsp8;
    void** r9_9;
    void** r8_10;
    uint64_t rax11;
    void* rsp12;
    void** rcx13;
    int32_t eax14;
    void** r9_15;
    void* rax16;
    int1_t zf17;
    void** rcx18;
    void** rdx19;
    void** rax20;
    void** r9_21;
    void** r8_22;
    int32_t* rdx23;
    void** r9_24;
    void* rsp25;
    void** rax26;
    int64_t* rdi27;
    void** r9_28;
    void** v29;
    int1_t zf30;
    int64_t rbx31;
    void** r9_32;
    void** rdx33;
    void** r9_34;
    void** rdx35;
    void* edi36;
    void* eax37;
    int64_t v38;
    void** r9_39;
    void** eax40;
    void** rcx41;
    void** rdx42;
    void** r9_43;
    void** rax44;
    void** rdx45;
    int1_t zf46;
    int64_t rax47;
    void** r9_48;
    void** r9_49;
    void** r9_50;
    int64_t rcx51;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8);
    rbp4 = rsp3;
    *reinterpret_cast<int32_t*>(&rbx5) = 0;
    rsi6 = rcx;
    rax7 = reinterpret_cast<void**>(_wfsopen());
    rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 48 - 8 + 8);
    g140026480 = rax7;
    if (!rax7) {
        rax7 = fun_140003898(0, 0x41c, rsi6, r9_9);
        rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8);
    }
    r8_10 = rax7;
    rax11 = reinterpret_cast<uint64_t>(fgetws(0x140025c50, 0x400));
    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8);
    if (!rax11) {
        addr_140003833_4:
        rcx13 = g140026480;
        eax14 = reinterpret_cast<int32_t>(fclose(rcx13, 0x400));
        if (eax14 == -1) {
            fun_140003898(0, 0x424, rsi6, r9_15);
        }
    } else {
        do {
            rax16 = reinterpret_cast<void*>(0xffffffffffffffff);
            do {
                rax16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax16) + 1);
            } while (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(0x140025c50) + reinterpret_cast<uint64_t>(rax16) * 2));
            if (reinterpret_cast<int1_t>(rax16 == 0x3ff) && (zf17 = g14002644c == 10, !zf17) || *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(0x140025c50) + reinterpret_cast<uint64_t>(rax16) * 2 - 2) == 10 && *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(0x140025c50) + reinterpret_cast<uint64_t>(rax16) * 2 - 4) == 92) {
                if (*reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(0x140025c50) + reinterpret_cast<uint64_t>(rax16) * 2 - 2) == 10 && *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(0x140025c50) + reinterpret_cast<uint64_t>(rax16) * 2 - 4) == 92) {
                    rcx18 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax16) + 0xffffffffffffffff);
                    rdx19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx18) + reinterpret_cast<unsigned char>(rcx18));
                    if (reinterpret_cast<unsigned char>(rdx19) >= reinterpret_cast<unsigned char>(0x800)) 
                        goto addr_14000388f_11;
                    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdx19) + reinterpret_cast<unsigned char>(0x140025c50)) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(0x140025c50) + reinterpret_cast<uint64_t>(rax16) * 2 - 4) = 32;
                }
                rax20 = fun_14000dcc4(0x140025c50, 0x140025c50);
                fun_1400032c8(reinterpret_cast<int64_t>(rbp4) + 88, reinterpret_cast<int64_t>(rbp4) + 80, r8_10, r9_21);
                rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8 - 8 + 8);
                rbx5 = rax20;
            } else {
                rbx5 = reinterpret_cast<void**>(0x140025c50);
            }
            r8_22 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp4) + 0xfffffffffffffff0);
            rdx23 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp4) + 72);
            fun_140003510(rbx5, rdx23, r8_22, r9_24);
            rsp25 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
            if (rbx5 != 0x140025c50) {
                free(rbx5, rdx23, r8_22);
                rsp25 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp25) - 8 + 8);
            }
            r8_10 = g140026480;
            rax11 = reinterpret_cast<uint64_t>(fgetws(0x140025c50, 0x400));
            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp25) - 8 + 8);
        } while (rax11);
        goto addr_14000382c_18;
    }
    rax26 = fun_14000b43c(0, 0, 0, 0);
    if (!1) {
        *reinterpret_cast<int32_t*>(&rax26) = 0;
        *reinterpret_cast<int32_t*>(&rax26 + 4) = 0;
        rdi27 = reinterpret_cast<int64_t*>(0);
        do {
            --rdi27;
            *reinterpret_cast<int32_t*>(&rbx5) = *reinterpret_cast<int32_t*>(&rbx5) - 1;
            if (*rdi27) {
                rax26 = reinterpret_cast<void**>(free());
            }
        } while (*reinterpret_cast<int32_t*>(&rbx5));
    }
    return rax26;
    addr_14000382c_18:
    *reinterpret_cast<int32_t*>(&rbx5) = 0;
    goto addr_140003833_4;
    addr_14000388f_11:
    fun_14001025c(rcx18, rdx19, r8_10, r9_28);
    v29 = rdx19;
    zf30 = (g1400157ec & 32) == 0;
    *reinterpret_cast<void***>(&rbx31) = reinterpret_cast<void**>(2);
    if (zf30 || (rdx19 = reinterpret_cast<void**>(__intrinsic() >> 6), *reinterpret_cast<int32_t*>(&rdx19 + 4) = 0, rdx19 != 4)) {
        fun_140003a8c(rcx18);
        if (!*reinterpret_cast<int32_t*>(&rcx18)) {
            fun_14000be7c("N", rdx19, r8_10, r9_32);
        } else {
            rdx33 = g140026490;
            *reinterpret_cast<int32_t*>(&r8_10) = *reinterpret_cast<int32_t*>(&rcx18);
            *reinterpret_cast<int32_t*>(&r8_10 + 4) = 0;
            fun_14000be7c("%", rdx33, r8_10, r9_34);
        }
        *reinterpret_cast<uint32_t*>(&rdx35) = __intrinsic();
        *reinterpret_cast<int32_t*>(&rdx35 + 4) = 0;
        edi36 = reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(&rdx35) >> 6);
        eax37 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi36) - 1);
        if (eax37) 
            goto addr_14000391d_30;
    } else {
        addr_1400039b4_31:
        goto v38;
    }
    fun_1400039c0(20, rdx35, r8_10, r9_39);
    if (v29 == 0x41b) {
        *reinterpret_cast<void***>(&rbx31) = reinterpret_cast<void**>(4);
        goto addr_14000394f_34;
    }
    addr_14000391d_30:
    eax40 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax37) - 1);
    if (!eax40) {
        *reinterpret_cast<int32_t*>(&rcx41) = 21;
        *reinterpret_cast<int32_t*>(&rcx41 + 4) = 0;
    } else {
        if (!reinterpret_cast<int1_t>(eax40 == 2)) {
            addr_14000394f_34:
            rdx42 = v29;
            *reinterpret_cast<int32_t*>(&rdx42 + 4) = 0;
            fun_14000be7c(" ", rdx42, r8_10, r9_43);
            rax44 = fun_14000bbec(v29, rdx42, r8_10);
            rdx45 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp12) - 8 + 8 + 24);
            fun_14000bf3c(rax44, rdx45, r8_10);
            fun_14000bea4(rax44, rdx45, r8_10);
            zf46 = g140037093 == 0;
            if (zf46) {
                rax47 = reinterpret_cast<int64_t>(__acrt_iob_func(2, rdx45, r8_10));
                fflush(rax47, rdx45, r8_10);
                goto addr_140003995_38;
            }
        } else {
            *reinterpret_cast<int32_t*>(&rcx41) = 22;
            *reinterpret_cast<int32_t*>(&rcx41 + 4) = 0;
        }
    }
    fun_1400039c0(rcx41, rdx35, r8_10, r9_48);
    goto addr_14000394f_34;
    addr_140003995_38:
    if (reinterpret_cast<int1_t>(edi36 == 1)) {
        fun_14000be7c("S", rdx45, r8_10, r9_49);
        fun_14000bb48("S", rdx45, r8_10, r9_50);
        *reinterpret_cast<void***>(&rcx51) = *reinterpret_cast<void***>(&rbx31);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx51) + 4) = 0;
        exit(rcx51, rdx45, r8_10);
        goto addr_1400039b4_31;
    }
}

int64_t memcpy = 0x14ff6;

void fun_140010e42(void** rcx, void** rdx, void** r8, void** r9) {
    goto memcpy;
}

void** fun_14000be34(int64_t rcx, void*** rdx, void** r8);

void** fun_14000bee0(int64_t rcx, void** rdx, void** r8) {
    int64_t rax4;
    int32_t eax5;
    int32_t eax6;
    int64_t rcx7;
    void*** rdx8;
    int64_t rax9;
    void** rax10;

    rax4 = reinterpret_cast<int64_t>(__acrt_iob_func(2));
    eax5 = reinterpret_cast<int32_t>(_fileno(rax4));
    eax6 = reinterpret_cast<int32_t>(_fileno(rcx));
    *reinterpret_cast<int32_t*>(&rcx7) = eax6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx8) = eax5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = 0;
    _dup2(rcx7, rdx8);
    rax9 = reinterpret_cast<int64_t>(__acrt_iob_func(2, rdx8));
    rax10 = fun_14000be34(rax9, rdx8, r8);
    g140037093 = *reinterpret_cast<signed char*>(&rax10);
    return rax10;
}

uint64_t* fun_14000bd80(void** rcx) {
    return 0x14003d120;
}

void** g14002648a;

void fun_1400081f0(unsigned char cl, void** rdx, void** r8, void** r9);

unsigned char fun_140007f84() {
    int64_t rbx1;
    unsigned char dl2;
    int1_t zf3;
    int32_t eax4;
    void** rdx5;
    void** r9_6;
    unsigned char al7;
    void** rdx8;
    void** r8_9;
    void** r9_10;
    void** ax11;
    void** rdx12;
    int64_t rcx13;
    void** ax14;
    void** rdx15;
    int64_t rcx16;

    *reinterpret_cast<unsigned char*>(&rbx1) = dl2;
    zf3 = g14002648a == 0;
    if (zf3) {
        eax4 = static_cast<int32_t>(rbx1 - 24);
        if (*reinterpret_cast<unsigned char*>(&eax4) <= 1) {
            fun_1400081f0(*reinterpret_cast<unsigned char*>(&rbx1), rdx5, 0x140026450, r9_6);
            al7 = *reinterpret_cast<unsigned char*>(&rbx1);
        } else {
            ax11 = fun_140008044(0, rdx8, r8_9, r9_10);
            g140025c50 = ax11;
            rdx12 = reinterpret_cast<void**>(0x140025c52);
            *reinterpret_cast<uint32_t*>(&rcx13) = reinterpret_cast<uint16_t>(ax11);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = 0;
            g140025c52 = 0;
            goto addr_140007fd1_5;
        }
    } else {
        ++g140025c20;
        g14002648a = reinterpret_cast<void**>(0);
        ax14 = fun_14000613c();
        if (ax14 == 32 || ax14 == 9) {
            g140015041 = reinterpret_cast<void**>(0);
            al7 = 18;
        } else {
            *reinterpret_cast<uint32_t*>(&rcx13) = 0xffff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = 0;
            g140015041 = reinterpret_cast<void**>(1);
            if (!reinterpret_cast<int1_t>(ax14 == 0xffff)) {
                rdx15 = g140026480;
                *reinterpret_cast<uint32_t*>(&rcx16) = reinterpret_cast<uint16_t>(ax14);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = 0;
                ungetwc(rcx16, rdx15);
                al7 = 17;
            } else {
                rdx12 = reinterpret_cast<void**>(0x140025c50);
                goto addr_140007fd1_5;
            }
        }
    }
    addr_140008036_11:
    return al7;
    addr_140007fd1_5:
    al7 = fun_140007cc8(rcx13, rdx12, 0x140026450);
    goto addr_140008036_11;
}

void** g1400370d8;

void** fun_14000c958() {
    void** rax1;
    void** rax2;
    void** rbx3;
    uint32_t ecx4;
    void** rcx5;
    void** r9_6;
    void** rcx7;
    void** tmp64_8;

    rax1 = g1400370d8;
    rax2 = rax1 + 2;
    g1400370d8 = rax2;
    rbx3 = rax2;
    ecx4 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax2));
    if (!*reinterpret_cast<void***>(&ecx4)) {
        addr_14000c9b0_2:
        *reinterpret_cast<uint32_t*>(&rcx5) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx5 + 4) = 0;
        fun_140003898(rcx5, 0x3fe, 34, r9_6);
        rax2 = g1400370d8;
    } else {
        do {
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&ecx4) == 34)) {
                rcx7 = rax2 + 2;
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rcx7) == 34)) 
                    break;
                rax2 = rcx7;
            }
            rax2 = rax2 + 2;
            g1400370d8 = rax2;
            ecx4 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax2));
        } while (*reinterpret_cast<void***>(&ecx4));
        if (!*reinterpret_cast<void***>(rax2)) 
            goto addr_14000c9b0_2;
    }
    *reinterpret_cast<void***>(rax2) = reinterpret_cast<void**>(0);
    tmp64_8 = g1400370d8 + 2;
    g1400370d8 = tmp64_8;
    return rbx3;
}

void** fun_14000c9e0() {
    void** rax1;
    void** rax2;
    void** rbx3;
    uint32_t ecx4;
    void** rcx5;
    void** r9_6;
    void** rdx7;
    uint64_t r8_8;
    void** tmp64_9;

    rax1 = g1400370d8;
    rax2 = rax1 + 2;
    g1400370d8 = rax2;
    rbx3 = rax2;
    ecx4 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax2));
    if (!*reinterpret_cast<void***>(&ecx4)) {
        addr_14000ca67_2:
        *reinterpret_cast<uint32_t*>(&rcx5) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx5 + 4) = 0;
        fun_140003898(rcx5, 0x3fe, 93, r9_6);
        rax2 = g1400370d8;
    } else {
        do {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&ecx4) == 94) || (rdx7 = rax2 + 2, !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdx7) == 93))) {
                if (*reinterpret_cast<void***>(&ecx4) == 93) 
                    break;
            } else {
                r8_8 = 0xffffffffffffffff;
                do {
                    ++r8_8;
                } while (*reinterpret_cast<void***>(rdx7 + r8_8 * 2));
                memmove(rax2);
                rax2 = g1400370d8;
            }
            rax2 = rax2 + 2;
            g1400370d8 = rax2;
            ecx4 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax2));
        } while (*reinterpret_cast<void***>(&ecx4));
        if (!*reinterpret_cast<void***>(rax2)) 
            goto addr_14000ca67_2;
    }
    *reinterpret_cast<void***>(rax2) = reinterpret_cast<void**>(0);
    tmp64_9 = g1400370d8 + 2;
    g1400370d8 = tmp64_9;
    return rbx3;
}

void** fun_14000cb34(void** rcx, int64_t rdx, void** r8, void** r9) {
    void** rax5;
    uint32_t ecx6;
    void** rcx7;
    uint32_t ecx8;
    void** rsi9;
    void** rdi10;
    uint32_t ebx11;
    void** rcx12;
    void** rax13;
    void** rcx14;
    uint32_t edx15;
    void** rcx16;

    rax5 = g1400370d8;
    while ((ecx6 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax5)), *reinterpret_cast<int16_t*>(&ecx6) == 32) || *reinterpret_cast<int16_t*>(&ecx6) == 9) {
        rax5 = rax5 + 2;
        g1400370d8 = rax5;
    }
    if (*reinterpret_cast<int16_t*>(&ecx6) != 40) {
        *reinterpret_cast<uint32_t*>(&rcx7) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx7 + 4) = 0;
        fun_140003898(rcx7, 0x3ff, r8, r9);
        rax5 = g1400370d8;
    }
    addr_14000cb89_6:
    rax5 = rax5 + 2;
    g1400370d8 = rax5;
    ecx8 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax5));
    if (*reinterpret_cast<int16_t*>(&ecx8) == 32) 
        goto addr_14000cb89_6;
    if (*reinterpret_cast<int16_t*>(&ecx8) == 9) 
        goto addr_14000cb89_6;
    if (*reinterpret_cast<int16_t*>(&ecx8) != 34) {
        rsi9 = rax5;
        while (1) {
            rdi10 = rax5;
            do {
                ebx11 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax5));
                rax5 = rax5 + 2;
                g1400370d8 = rax5;
                if (!*reinterpret_cast<int16_t*>(&ebx11)) {
                    *reinterpret_cast<uint32_t*>(&rcx12) = g140025c20;
                    *reinterpret_cast<int32_t*>(&rcx12 + 4) = 0;
                    fun_140003898(rcx12, 0x3ff, r8, r9);
                    rax5 = g1400370d8;
                }
                if (*reinterpret_cast<int16_t*>(&ebx11) == 41) 
                    goto addr_14000cc45_14;
            } while (*reinterpret_cast<int16_t*>(&ebx11) == 32 || *reinterpret_cast<int16_t*>(&ebx11) == 9);
        }
        addr_14000cc45_14:
        *reinterpret_cast<void***>(rdi10) = reinterpret_cast<void**>(0);
    } else {
        rax13 = fun_14000c958();
        rcx14 = g1400370d8;
        rsi9 = rax13;
        while ((edx15 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx14)), *reinterpret_cast<int16_t*>(&edx15) == 32) || *reinterpret_cast<int16_t*>(&edx15) == 9) {
            rcx14 = rcx14 + 2;
            g1400370d8 = rcx14;
        }
        if (*reinterpret_cast<int16_t*>(&edx15) == 41) 
            goto addr_14000cbf1_21; else 
            goto addr_14000cbda_22;
    }
    addr_14000cc49_23:
    return rsi9;
    addr_14000cbf1_21:
    g1400370d8 = rcx14 + 2;
    goto addr_14000cc49_23;
    addr_14000cbda_22:
    *reinterpret_cast<uint32_t*>(&rcx16) = g140025c20;
    *reinterpret_cast<int32_t*>(&rcx16 + 4) = 0;
    fun_140003898(rcx16, 0x3ff, r8, r9);
    rcx14 = g1400370d8;
    goto addr_14000cbf1_21;
}

unsigned char fun_14000d180(void** rcx, ...) {
    void** rax2;
    void** r8_3;
    int64_t rax4;
    void** rcx5;
    void** r9_6;
    void** rcx7;
    void** r9_8;
    void** rax9;

    rax2 = reinterpret_cast<void**>(wcstok_s());
    r8_3 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32 - 8 + 8 + 56);
    rax4 = reinterpret_cast<int64_t>(wcstok_s());
    if (rax4) {
        *reinterpret_cast<uint32_t*>(&rcx5) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx5 + 4) = 0;
        r8_3 = rax2;
        fun_140003898(rcx5, 0x409, r8_3, r9_6);
    }
    if (!rax2) {
        *reinterpret_cast<uint32_t*>(&rcx7) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx7 + 4) = 0;
        fun_140003898(rcx7, 0x417, r8_3, r9_8);
    }
    rax9 = fun_14000918c(rax2, rax2);
    return static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!rax9));
}

void** g1400150a0 = reinterpret_cast<void**>(0xe4);

unsigned char g1400370b2;

int64_t wcstol = 0x14c00;

void** g1400370b3;

void** fun_14000caa0(void** cl, void** rdx, void** r8, void** r9);

void** fun_14000cc64(void** rcx) {
    void** rcx2;
    uint32_t ebx3;
    int64_t rax4;
    void** r8_5;
    void** rax6;
    void** r9_7;
    void** rdx8;
    int64_t rcx9;
    int32_t eax10;
    void** rcx11;
    int32_t eax12;
    void** rcx13;
    int64_t rdx14;
    int32_t eax15;
    int32_t eax16;
    void** rcx17;
    void** rax18;
    void** tmp64_19;
    void** tmp64_20;
    void** tmp64_21;
    void** rax22;
    unsigned char al23;
    void** rdx24;
    int32_t ecx25;
    void** rdi26;
    int32_t* rax27;
    int64_t rdx28;
    void** rcx29;
    int32_t eax30;
    int32_t* rax31;
    void** rcx32;
    void** rcx33;
    void** rax34;
    int64_t rcx35;
    int16_t ax36;
    void** tmp64_37;
    void** rax38;
    void** rax39;
    int1_t zf40;
    void** rax41;
    int32_t eax42;

    rcx2 = g1400370d8;
    while ((ebx3 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx2)), *reinterpret_cast<uint16_t*>(&ebx3) == 32) || *reinterpret_cast<uint16_t*>(&ebx3) == 9) {
        rcx2 = rcx2 + 2;
        g1400370d8 = rcx2;
    }
    if (*reinterpret_cast<uint16_t*>(&ebx3) >= 0x80 || (*reinterpret_cast<uint32_t*>(&rax4) = *reinterpret_cast<uint16_t*>(&ebx3), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0, (*reinterpret_cast<unsigned char*>(rax4 + 0x140011640) & 2) == 0)) {
        r8_5 = reinterpret_cast<void**>(0x1400151f0);
    } else {
        rax6 = g1400150a0;
        r8_5 = reinterpret_cast<void**>(0x1400150a0);
        if (rax6) {
            do {
                *reinterpret_cast<uint32_t*>(&r9_7) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax6));
                *reinterpret_cast<int32_t*>(&r9_7 + 4) = 0;
                rdx8 = rcx2;
                if (!r9_7) 
                    break;
                do {
                    if (*reinterpret_cast<void***>(rdx8) != r9_7) 
                        break;
                    rax6 = rax6 + 2;
                    rdx8 = rdx8 + 2;
                    *reinterpret_cast<uint32_t*>(&r9_7) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax6));
                    *reinterpret_cast<int32_t*>(&r9_7 + 4) = 0;
                } while (r9_7);
                if (!*reinterpret_cast<void***>(rax6)) 
                    break;
                r8_5 = r8_5 + 16;
                rax6 = *reinterpret_cast<void***>(r8_5);
            } while (rax6);
            goto addr_14000cd04_12;
            rcx2 = rdx8;
            g1400370d8 = rdx8;
        }
    }
    if (!*reinterpret_cast<void***>(r8_5)) {
        addr_14000cd04_12:
        if (*reinterpret_cast<uint16_t*>(&ebx3) != 45) {
            if (*reinterpret_cast<uint16_t*>(&ebx3) != 34) {
                if (*reinterpret_cast<uint16_t*>(&ebx3) != 91) {
                    *reinterpret_cast<uint32_t*>(&rcx9) = *reinterpret_cast<uint16_t*>(&ebx3);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
                    eax10 = reinterpret_cast<int32_t>(iswdigit(rcx9));
                    if (!eax10) {
                        if (*reinterpret_cast<uint16_t*>(&ebx3)) {
                            rcx11 = g1400370d8;
                            *reinterpret_cast<int32_t*>(&r8_5) = 7;
                            *reinterpret_cast<int32_t*>(&r8_5 + 4) = 0;
                            eax12 = reinterpret_cast<int32_t>(_wcsnicmp(rcx11, "D", 7));
                            if (eax12) {
                                rcx13 = g1400370d8;
                                rdx14 = reinterpret_cast<int64_t>("E");
                                *reinterpret_cast<int32_t*>(&r8_5) = 6;
                                *reinterpret_cast<int32_t*>(&r8_5 + 4) = 0;
                                eax15 = reinterpret_cast<int32_t>(_wcsnicmp(rcx13, "E", 6));
                                if (eax15) {
                                    rcx13 = g1400370d8;
                                    rdx14 = reinterpret_cast<int64_t>("E");
                                    *reinterpret_cast<int32_t*>(&r8_5) = 5;
                                    *reinterpret_cast<int32_t*>(&r8_5 + 4) = 0;
                                    eax16 = reinterpret_cast<int32_t>(_wcsnicmp(rcx13, "E", 5));
                                    if (eax16) {
                                        *reinterpret_cast<uint32_t*>(&rcx17) = g140025c20;
                                        *reinterpret_cast<int32_t*>(&rcx17 + 4) = 0;
                                        rax18 = fun_140003898(rcx17, 0x3ff, 5, r9_7);
                                    } else {
                                        tmp64_19 = g1400370d8 + 10;
                                        g1400370d8 = tmp64_19;
                                        goto addr_14000ce9a_24;
                                    }
                                } else {
                                    tmp64_20 = g1400370d8 + 12;
                                    g1400370d8 = tmp64_20;
                                    goto addr_14000ce9a_24;
                                }
                            } else {
                                tmp64_21 = g1400370d8 + 14;
                                g1400370d8 = tmp64_21;
                                rax22 = fun_14000cb34(rcx11, "D", 7, r9_7);
                                al23 = fun_14000d180(rax22, rax22);
                                goto addr_14000ceaf_27;
                            }
                        } else {
                            *reinterpret_cast<uint32_t*>(&rdx24) = 0;
                            *reinterpret_cast<int32_t*>(&rdx24 + 4) = 0;
                            g1400370b2 = 1;
                            ecx25 = 0;
                            goto addr_14000ceb4_29;
                        }
                    } else {
                        rdi26 = g1400370d8;
                        rax27 = reinterpret_cast<int32_t*>(_errno(rcx9));
                        *reinterpret_cast<int32_t*>(&r8_5) = 0;
                        *reinterpret_cast<int32_t*>(&r8_5 + 4) = 0;
                        rdx28 = 0x1400370d8;
                        *rax27 = 0;
                        rcx29 = g1400370d8;
                        eax30 = reinterpret_cast<int32_t>(wcstol(rcx29, 0x1400370d8));
                        rax31 = reinterpret_cast<int32_t*>(_errno(rcx29, 0x1400370d8));
                        if (*rax31 == 34) {
                            rcx32 = g1400370d8;
                            r8_5 = rdi26;
                            *reinterpret_cast<void***>(&rdx28) = reinterpret_cast<void**>(0x436);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = 0;
                            *reinterpret_cast<void***>(rcx32) = reinterpret_cast<void**>(0);
                            *reinterpret_cast<uint32_t*>(&rcx33) = g140025c20;
                            *reinterpret_cast<int32_t*>(&rcx33 + 4) = 0;
                            fun_140003898(rcx33, 0x436, r8_5, r9_7);
                        }
                        rax34 = g1400370d8;
                        *reinterpret_cast<uint32_t*>(&rcx35) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax34));
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = 0;
                        ax36 = reinterpret_cast<int16_t>(towupper(rcx35, rdx28, r8_5));
                        if (ax36 == 76) {
                            tmp64_37 = g1400370d8 + 2;
                            g1400370d8 = tmp64_37;
                        }
                        rdx24 = reinterpret_cast<void**>(static_cast<int64_t>(eax30));
                        goto addr_14000ceb2_35;
                    }
                } else {
                    rax38 = fun_14000c9e0();
                    rdx24 = rax38;
                    *reinterpret_cast<void***>(&ecx25) = reinterpret_cast<void**>(24);
                    goto addr_14000ceb4_29;
                }
            } else {
                rax39 = fun_14000c958();
                rdx24 = rax39;
                *reinterpret_cast<void***>(&ecx25) = reinterpret_cast<void**>(23);
                goto addr_14000ceb4_29;
            }
        } else {
            *reinterpret_cast<uint32_t*>(&rdx24) = 0;
            *reinterpret_cast<int32_t*>(&rdx24 + 4) = 0;
            zf40 = reinterpret_cast<int1_t>(g1400370b3 == 22);
            g1400370d8 = rcx2 + 2;
            if (!zf40) {
                *reinterpret_cast<void***>(&ecx25) = reinterpret_cast<void**>(19);
                goto addr_14000ceb4_29;
            } else {
                *reinterpret_cast<void***>(&ecx25) = reinterpret_cast<void**>(14);
                goto addr_14000ceb4_29;
            }
        }
    } else {
        *reinterpret_cast<void***>(&ecx25) = *reinterpret_cast<void***>(r8_5 + 8);
        *reinterpret_cast<uint32_t*>(&rdx24) = 0;
        *reinterpret_cast<int32_t*>(&rdx24 + 4) = 0;
        goto addr_14000ceb4_29;
    }
    addr_14000cecb_42:
    return rax18;
    addr_14000ce9a_24:
    rax41 = fun_14000cb34(rcx13, rdx14, r8_5, r9_7);
    eax42 = reinterpret_cast<int32_t>(_waccess(rax41));
    al23 = reinterpret_cast<uint1_t>(eax42 == 0);
    addr_14000ceaf_27:
    *reinterpret_cast<uint32_t*>(&rdx24) = al23;
    *reinterpret_cast<int32_t*>(&rdx24 + 4) = 0;
    addr_14000ceb2_35:
    *reinterpret_cast<void***>(&ecx25) = reinterpret_cast<void**>(22);
    addr_14000ceb4_29:
    rax18 = fun_14000caa0(*reinterpret_cast<void***>(&ecx25), rdx24, r8_5, r9_7);
    goto addr_14000cecb_42;
}

struct s28 {
    unsigned char f0;
    signed char[7] pad8;
    uint16_t* f8;
};

struct s28* g1400370d0;

struct s29 {
    unsigned char f0;
    signed char[7] pad8;
    void** f8;
};

struct s29* g1400370c8;

void fun_14000cee0() {
    struct s28* rax1;
    void** rcx2;
    void** r8_3;
    void** r9_4;
    struct s29* rcx5;
    void** rcx6;
    void** r8_7;
    void** r9_8;

    rax1 = g1400370d0;
    if (reinterpret_cast<uint64_t>(rax1) < 0x14003b0e0) {
        *reinterpret_cast<uint32_t*>(&rcx2) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx2 + 4) = 0;
        fun_140003898(rcx2, 0x3ff, r8_3, r9_4);
        rax1 = g1400370d0;
    }
    rcx5 = g1400370c8;
    if (reinterpret_cast<uint64_t>(rcx5) > 0x14003b0d0) {
        *reinterpret_cast<uint32_t*>(&rcx6) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx6 + 4) = 0;
        fun_140003898(rcx6, 0x412, r8_7, r9_8);
        rax1 = g1400370d0;
        rcx5 = g1400370c8;
    }
    __asm__("movups xmm0, [rax]");
    __asm__("movdqu [rcx], xmm0");
    g1400370c8 = reinterpret_cast<struct s29*>(reinterpret_cast<uint64_t>(rcx5) + 16);
    g1400370d0 = rax1 - 1;
    return;
}

unsigned char g1400370b1;

void** g1400370b8;

uint16_t* fun_14000c658(unsigned char cl);

signed char fun_14000c914(unsigned char cl);

unsigned char fun_14000cf64(void** rcx) {
    struct s29* rdi2;
    uint16_t* rbx3;
    void** r8_4;
    void** r9_5;
    int1_t zf6;
    struct s28* rdx7;
    void** al8;
    struct s28* rdx9;
    void** r8_10;
    void** r9_11;
    int64_t rax12;
    int64_t rax13;
    void** r8_14;
    void** r9_15;
    int1_t zf16;
    void** rcx17;
    void** r8_18;
    void** r9_19;
    int1_t cf20;
    int64_t rax21;
    unsigned char cl22;
    signed char al23;
    void** rcx24;
    void** r8_25;
    int1_t zf26;
    void** rcx27;
    uint32_t eax28;
    void** rcx29;

    g1400370b1 = 3;
    rdi2 = reinterpret_cast<struct s29*>(0x1400370e0);
    g1400370d0 = reinterpret_cast<struct s28*>(0x14003b0e0);
    *reinterpret_cast<int32_t*>(&rbx3) = 0;
    g1400370c8 = reinterpret_cast<struct s29*>(0x1400370e0);
    g1400370b2 = 0;
    rcx = reinterpret_cast<void**>(25);
    g1400370b3 = reinterpret_cast<void**>(25);
    fun_14000caa0(25, 0, r8_4, r9_5);
    zf6 = g1400370b2 == 0;
    rdx7 = g1400370d0;
    __asm__("movups xmm0, [rip+0x2a0f0]");
    __asm__("movdqu [rdx], xmm0");
    if (zf6) {
        do {
            fun_14000cc64(rcx);
            al8 = g1400370b8;
            rdx9 = g1400370d0;
            if (al8 == 25) {
                addr_14000d018_4:
                if (!reinterpret_cast<int1_t>(rdx9 == 0x14003d0d0)) {
                    __asm__("movups xmm0, [rip+0x2a041]");
                    rdx7 = rdx9 + 1;
                    __asm__("movdqu [rdx], xmm0");
                } else {
                    *reinterpret_cast<uint32_t*>(&rcx) = g140025c20;
                    *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
                    fun_140003898(rcx, 0x412, r8_10, r9_11);
                    rdx7 = g1400370d0;
                    continue;
                }
            } else {
                *reinterpret_cast<uint32_t*>(&rax12) = reinterpret_cast<unsigned char>(al8);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
                while (rcx = *reinterpret_cast<void***>(rax12 + 0x140011ce0), *reinterpret_cast<uint32_t*>(&rax13) = rdx9->f0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0, reinterpret_cast<unsigned char>(rcx) <= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax13 + 0x140011ce0))) {
                    if (!rcx) 
                        goto addr_14000d049_10;
                    fun_14000cee0();
                    *reinterpret_cast<uint32_t*>(&rax12) = reinterpret_cast<unsigned char>(g1400370b8);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
                    rdx9 = g1400370d0;
                }
                goto addr_14000d018_4;
            }
            addr_14000d07f_12:
            g1400370d0 = rdx7;
            continue;
            addr_14000d049_10:
            while (rdx9->f0 != 25) {
                fun_14000cee0();
                rdx9 = g1400370d0;
            }
            if (reinterpret_cast<uint64_t>(rdx9) < 0x14003b0e0) {
                *reinterpret_cast<uint32_t*>(&rcx) = g140025c20;
                *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
                fun_140003898(rcx, 0x3ff, r8_14, r9_15);
                rdx9 = g1400370d0;
            }
            rdx7 = rdx9 - 1;
            goto addr_14000d07f_12;
            zf16 = g1400370b2 == 0;
        } while (zf16);
    }
    if (rdx7 != 0x14003b0d0) {
        *reinterpret_cast<uint32_t*>(&rcx17) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx17 + 4) = 0;
        fun_140003898(rcx17, 0x3ff, r8_18, r9_19);
        rdx7 = g1400370d0;
    }
    while (cf20 = reinterpret_cast<uint64_t>(rdi2) < reinterpret_cast<uint64_t>(g1400370c8), cf20) {
        if (rdi2->f0 <= 21) {
            rax21 = reinterpret_cast<int64_t>(fun_14000c658);
            if (rdi2->f0 > 18) {
                rax21 = reinterpret_cast<int64_t>(fun_14000c914);
            }
            cl22 = rdi2->f0;
            al23 = reinterpret_cast<signed char>(rax21(cl22));
            if (!al23) {
                *reinterpret_cast<uint32_t*>(&rcx24) = g140025c20;
                *reinterpret_cast<int32_t*>(&rcx24 + 4) = 0;
                fun_140003898(rcx24, 0x438, r8_25, 0, rcx24, 0x438, r8_25, 0);
            }
            rdx7 = g1400370d0;
        } else {
            ++rdx7;
            zf26 = rdi2->f0 == 24;
            g1400370d0 = rdx7;
            if (!zf26) {
                __asm__("movups xmm0, [rdi]");
                __asm__("movdqu [rdx], xmm0");
            } else {
                rcx27 = rdi2->f8;
                *reinterpret_cast<signed char*>(&r8_25) = 1;
                eax28 = fun_140005114(rcx27, 0, 1, 0);
                rdx7 = g1400370d0;
                rdx7->f8 = reinterpret_cast<uint16_t*>(static_cast<int64_t>(reinterpret_cast<int32_t>(eax28)));
                rdx7->f0 = 22;
            }
        }
        rdi2 = reinterpret_cast<struct s29*>(reinterpret_cast<uint64_t>(rdi2) + 16);
    }
    if (!reinterpret_cast<int1_t>(rdx7 == 0x14003b0e0) || rdx7->f0 != 22) {
        *reinterpret_cast<uint32_t*>(&rcx29) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx29 + 4) = 0;
        fun_140003898(rcx29, 0x3ff, r8_25, 0, rcx29, 0x3ff, r8_25, 0);
    } else {
        *reinterpret_cast<unsigned char*>(&rbx3) = reinterpret_cast<uint1_t>(!!rdx7->f8);
    }
    return *reinterpret_cast<unsigned char*>(&rbx3);
}

struct s30 {
    signed char[32] pad32;
    void** f20;
};

struct s31 {
    signed char[32] pad32;
    void** f20;
};

int32_t fun_14000fb60(void** rcx, void** rdx, void** r8, void** r9) {
    void* rsp5;
    uint64_t* rbp6;
    uint64_t rax7;
    uint64_t v8;
    uint64_t r9_9;
    void** r8_10;
    uint64_t rax11;
    uint64_t rax12;
    uint64_t rcx13;
    struct s30* rsp14;
    void*** rbx15;
    uint64_t rax16;
    uint64_t rcx17;
    int64_t* rsp18;
    struct s31* rsp19;
    void** r9_20;
    uint32_t eax21;
    void*** rcx22;
    void* r8_23;
    void*** rax24;
    uint32_t eax25;
    void** r8_26;
    int64_t* rsp27;
    void** rax28;
    void* rdx29;
    void** rax30;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 48);
    rbp6 = reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rsp5) + 32);
    rax7 = g140015008;
    v8 = rax7 ^ reinterpret_cast<uint64_t>(rbp6);
    r9_9 = 0xffffffffffffffff;
    r8_10 = rcx;
    rax11 = 0xffffffffffffffff;
    do {
        ++rax11;
    } while (*reinterpret_cast<void***>(rcx + rax11 * 2));
    rax12 = rax11 * 2 + 2;
    rcx13 = rax12 + 15;
    if (rcx13 <= rax12) {
        rcx13 = 0xffffffffffffff0;
    }
    fun_140010df0();
    rsp14 = reinterpret_cast<struct s30*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8 - (rcx13 & 0xfffffffffffffff0));
    rbx15 = &rsp14->f20;
    do {
        ++r9_9;
    } while (*reinterpret_cast<void***>(rdx + r9_9 * 2));
    rax16 = r9_9 * 2 + 2;
    rcx17 = rax16 + 15;
    if (rcx17 <= rax16) {
        rcx17 = 0xffffffffffffff0;
    }
    rsp18 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp14) - 8);
    *rsp18 = 0x14000fbf6;
    fun_140010df0();
    rsp19 = reinterpret_cast<struct s31*>(reinterpret_cast<uint64_t>(rsp18 + 1) - (rcx17 & 0xfffffffffffffff0));
    r9_20 = reinterpret_cast<void**>(&rsp19->f20);
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r8_10) == 34)) {
        r8_10 = r8_10 + 2;
    }
    eax21 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r8_10));
    rcx22 = rbx15;
    if (!*reinterpret_cast<void***>(&eax21)) {
        addr_14000fc3e_12:
        *rcx22 = reinterpret_cast<void**>(0);
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdx) == 34)) {
            rdx = rdx + 2;
        }
    } else {
        r8_23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r8_10) - reinterpret_cast<uint64_t>(rbx15));
        do {
            *rcx22 = *reinterpret_cast<void***>(&eax21);
            rcx22 = rcx22 + 2;
            eax21 = *reinterpret_cast<uint16_t*>(reinterpret_cast<uint64_t>(r8_23) + reinterpret_cast<uint64_t>(rcx22));
        } while (*reinterpret_cast<void***>(&eax21));
        if (rcx22 == rbx15) 
            goto addr_14000fc3e_12;
        rax24 = rcx22 - 2;
        if (*rax24 == 34) 
            goto label_18; else 
            goto addr_14000fc3e_12;
    }
    eax25 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdx));
    r8_26 = r9_20;
    if (!*reinterpret_cast<void***>(&eax25)) {
        addr_14000fc7c_20:
        *reinterpret_cast<void***>(r8_26) = reinterpret_cast<void**>(0);
        rsp27 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp19) - 8);
        *rsp27 = 0x14000fc8c;
        _wcsicmp(rbx15, r9_20);
        *(rsp27 + 1 - 1) = 0x14000fc98;
        rax28 = fun_140010130(v8 ^ reinterpret_cast<uint64_t>(rbp6), r9_20, r8_26);
        return *reinterpret_cast<int32_t*>(&rax28);
    } else {
        rdx29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdx) - reinterpret_cast<unsigned char>(r9_20));
        do {
            *reinterpret_cast<void***>(r8_26) = *reinterpret_cast<void***>(&eax25);
            r8_26 = r8_26 + 2;
            eax25 = *reinterpret_cast<uint16_t*>(reinterpret_cast<uint64_t>(rdx29) + reinterpret_cast<unsigned char>(r8_26));
        } while (*reinterpret_cast<void***>(&eax25));
        if (r8_26 == r9_20) 
            goto addr_14000fc7c_20;
        rax30 = r8_26 + 0xfffffffffffffffe;
        if (*reinterpret_cast<void***>(rax30) != 34) 
            goto addr_14000fc7c_20;
    }
    r8_26 = rax30;
    goto addr_14000fc7c_20;
    label_18:
    rcx22 = rax24;
    goto addr_14000fc3e_12;
}

void** fun_14000fcac(void** rcx, void** rdx, void** r8, void** r9) {
    void** rbx5;
    void** rcx6;
    void** rax7;
    void** rax8;
    void** r8_9;
    uint32_t edx10;
    void** rcx11;
    void* rbx12;
    void** rax13;

    rbx5 = rcx;
    rcx6 = reinterpret_cast<void**>(0xffffffffffffffff);
    do {
        ++rcx6;
    } while (*reinterpret_cast<void***>(rbx5 + reinterpret_cast<unsigned char>(rcx6) * 2));
    rax7 = reinterpret_cast<void**>(2 * reinterpret_cast<uint64_t>(rcx6 + 1));
    if (__intrinsic()) {
        rax7 = reinterpret_cast<void**>(0xffffffffffffffff);
    }
    rax8 = fun_140009214(rax7, __intrinsic(), 0xffffffffffffffff, r9);
    r8_9 = rax8;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx5) == 34)) {
        rbx5 = rbx5 + 2;
    }
    edx10 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx5));
    rcx11 = rax8;
    if (*reinterpret_cast<void***>(&edx10)) {
        rbx12 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rbx5) - reinterpret_cast<unsigned char>(rax8));
        do {
            *reinterpret_cast<void***>(rcx11) = *reinterpret_cast<void***>(&edx10);
            rcx11 = rcx11 + 2;
            edx10 = *reinterpret_cast<uint16_t*>(reinterpret_cast<uint64_t>(rbx12) + reinterpret_cast<unsigned char>(rcx11));
        } while (*reinterpret_cast<void***>(&edx10));
    }
    rax13 = rcx11 + 0xfffffffffffffffe;
    if (*reinterpret_cast<void***>(rax13) == 34) {
        rcx11 = rax13;
    }
    *reinterpret_cast<void***>(rcx11) = reinterpret_cast<void**>(0);
    return r8_9;
}

void** fun_14000fd90(void** rcx, void** rdx, void** r8, void** r9) {
    void** rbx5;
    void** rax6;
    void** rcx7;

    *reinterpret_cast<int32_t*>(&rbx5) = 0;
    *reinterpret_cast<int32_t*>(&rbx5 + 4) = 0;
    if (!rcx) {
        if (reinterpret_cast<unsigned char>(rdx) > reinterpret_cast<unsigned char>(0x7ffffffffffffff8)) 
            goto addr_14000fdce_3;
        rax6 = reinterpret_cast<void**>(malloc(reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<unsigned char>(rdx)));
    } else {
        if (reinterpret_cast<unsigned char>(rdx) > reinterpret_cast<unsigned char>(0x7ffffffffffffff8)) 
            goto addr_14000fdce_3;
        rax6 = reinterpret_cast<void**>(realloc());
    }
    rbx5 = rax6;
    if (rax6) {
        addr_14000fdde_8:
        return rbx5;
    } else {
        addr_14000fdce_3:
        *reinterpret_cast<uint32_t*>(&rcx7) = g140025c24;
        *reinterpret_cast<int32_t*>(&rcx7 + 4) = 0;
        fun_140003898(rcx7, 0x41b, r8, r9);
        goto addr_14000fdde_8;
    }
}

void** fun_14000faa4(void** rcx, void** rdx, uint32_t r8d) {
    int64_t rax4;
    void** rbp5;
    void** rdi6;
    void** rsi7;
    void** r14_8;
    int1_t zf9;
    int64_t rcx10;
    uint16_t ax11;
    int64_t rcx12;
    uint32_t ebx13;
    int16_t ax14;
    void** rax15;

    *reinterpret_cast<uint32_t*>(&rax4) = r8d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    rbp5 = rcx;
    rdi6 = *reinterpret_cast<void***>(0x140025800 + rax4 * 8);
    while (rdi6) {
        rsi7 = rbp5;
        r14_8 = *reinterpret_cast<void***>(rdi6 + 8);
        if (*reinterpret_cast<void***>(rbp5)) {
            while (*reinterpret_cast<void***>(r14_8)) {
                if (*reinterpret_cast<void***>(rsi7) == 92 || *reinterpret_cast<void***>(rsi7) == 47) {
                    if (*reinterpret_cast<void***>(r14_8) == 92) {
                        addr_14000fb1e_7:
                        rsi7 = rsi7 + 2;
                        r14_8 = r14_8 + 2;
                        if (*reinterpret_cast<void***>(rsi7)) 
                            continue; else 
                            break;
                    } else {
                        zf9 = reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r14_8) == 47);
                    }
                } else {
                    *reinterpret_cast<uint32_t*>(&rcx10) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r14_8));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
                    ax11 = reinterpret_cast<uint16_t>(towupper(rcx10));
                    *reinterpret_cast<uint32_t*>(&rcx12) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rsi7));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = 0;
                    ebx13 = ax11;
                    ax14 = reinterpret_cast<int16_t>(towupper(rcx12));
                    zf9 = ax14 == *reinterpret_cast<int16_t*>(&ebx13);
                }
                if (!zf9) 
                    break; else 
                    goto addr_14000fb1e_7;
            }
        }
        if (*reinterpret_cast<void***>(rsi7)) 
            goto addr_14000fb38_12;
        if (!*reinterpret_cast<void***>(r14_8)) 
            goto addr_14000fb3d_14;
        addr_14000fb38_12:
        rdi6 = *reinterpret_cast<void***>(rdi6);
    }
    *reinterpret_cast<int32_t*>(&rax15) = 0;
    *reinterpret_cast<int32_t*>(&rax15 + 4) = 0;
    addr_14000fb44_16:
    return rax15;
    addr_14000fb3d_14:
    rax15 = rdi6;
    goto addr_14000fb44_16;
}

void fun_14000eb78(void** rcx, void** rdx, void** r8, void** r9) {
    void** r14_5;
    void** v6;
    void** rax7;
    void** rax8;
    void** rdx9;
    void** rcx10;
    void** rbx11;
    void** rax12;
    void** rcx13;

    r14_5 = r8;
    if (*reinterpret_cast<void***>(rcx) == v6) {
        rax7 = reinterpret_cast<void**>(2 * reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r9)));
        if (__intrinsic()) {
            rax7 = reinterpret_cast<void**>(0xffffffffffffffff);
        }
        rax8 = fun_140009214(rax7, __intrinsic(), r8, r9);
        rdx9 = *reinterpret_cast<void***>(rcx);
        r8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r9)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r9)));
        fun_140010e42(rax8, rdx9, r8, r9);
        *reinterpret_cast<void***>(rcx) = rax8;
    }
    rcx10 = *reinterpret_cast<void***>(rcx);
    rbx11 = *reinterpret_cast<void***>(r9) + 0x400;
    rax12 = fun_14000fd90(rcx10, rbx11, r8, r9);
    rcx13 = *reinterpret_cast<void***>(r9);
    *reinterpret_cast<void***>(rcx) = rax12;
    *reinterpret_cast<void***>(r9) = rbx11;
    *reinterpret_cast<void***>(rdx) = rax12 + reinterpret_cast<unsigned char>(rcx13) * 2;
    *reinterpret_cast<void***>(r14_5) = rax12 + reinterpret_cast<unsigned char>(rbx11) * 2;
    return;
}

struct s32 {
    signed char[1] pad1;
    void** f1;
};

void** fun_14000eff8(uint16_t cx, void** rdx, void** r8, void** r9);

void fun_14000ec20(void** rcx, void** rdx, void** r8, void** r9) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void* rbp9;
    void** r12_10;
    void** r8_11;
    void** r15_12;
    signed char v13;
    void** rbx14;
    signed char v15;
    void** r14_16;
    void** v17;
    int64_t rsi18;
    signed char dil19;
    void** r13_20;
    uint32_t eax21;
    int32_t v22;
    int64_t rax23;
    uint32_t ecx24;
    uint32_t eax25;
    uint32_t eax26;
    uint32_t eax27;
    void** v28;
    void** rax29;
    void** rdi30;
    uint32_t ebx31;
    void** rcx32;
    void** r8_33;
    void** rax34;
    void** rdi35;
    void** rdi36;
    void** r12_37;
    void** rax38;
    void** v39;
    void** v40;
    void** r15_41;
    void** v42;
    void** r14_43;
    uint32_t eax44;
    struct s32* rdi45;
    void** rdi46;
    int64_t rcx47;
    uint32_t ecx48;
    void** rax49;
    void** rax50;
    void** rax51;
    void** rax52;
    void** rax53;
    void** rax54;
    int64_t rcx55;
    uint32_t ecx56;

    v5 = r9;
    v6 = r8;
    v7 = rdx;
    v8 = rcx;
    rbp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8);
    r12_10 = r8;
    *reinterpret_cast<int32_t*>(&r8_11) = 0;
    *reinterpret_cast<int32_t*>(&r8_11 + 4) = 0;
    r15_12 = rdx;
    v13 = 0;
    *reinterpret_cast<int32_t*>(&rbx14) = 0;
    *reinterpret_cast<int32_t*>(&rbx14 + 4) = 0;
    v15 = 0;
    *reinterpret_cast<int32_t*>(&r14_16) = 0;
    *reinterpret_cast<int32_t*>(&r14_16 + 4) = 0;
    v17 = reinterpret_cast<void**>(0);
    *reinterpret_cast<uint32_t*>(&rsi18) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = 0;
    dil19 = 0;
    *reinterpret_cast<int32_t*>(&r13_20) = 0;
    *reinterpret_cast<int32_t*>(&r13_20 + 4) = 0;
    eax21 = v22 - 1;
    if (!eax21) {
        addr_14000ece6_2:
        rdx = *reinterpret_cast<void***>(rdx);
        *reinterpret_cast<int32_t*>(&r9) = 42;
        *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rax23) = *reinterpret_cast<uint32_t*>(&rsi18);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = 0;
        ecx24 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<uint64_t>(rax23 * 2))) - 42;
        if (!ecx24) {
            *reinterpret_cast<uint32_t*>(&rcx) = static_cast<uint32_t>(rsi18 + 1);
            *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
            if (*reinterpret_cast<void***>(rdx + reinterpret_cast<unsigned char>(rcx) * 2) == 42) {
                rbx14 = g140026450;
                *reinterpret_cast<uint32_t*>(&rsi18) = *reinterpret_cast<uint32_t*>(&rcx);
            } else {
                rbx14 = g140026478;
                v15 = 1;
                goto addr_14000ed47_6;
            }
        } else {
            *reinterpret_cast<uint32_t*>(&rcx) = ecx24 - 18;
            if (!*reinterpret_cast<uint32_t*>(&rcx)) {
                rbx14 = g140026460;
                goto addr_14000ed47_6;
            } else {
                *reinterpret_cast<uint32_t*>(&rcx) = *reinterpret_cast<uint32_t*>(&rcx) - 3;
                if (!*reinterpret_cast<uint32_t*>(&rcx)) {
                    rbx14 = g140026468;
                } else {
                    if (*reinterpret_cast<uint32_t*>(&rcx) == 1) {
                        rbx14 = g140026470;
                        goto addr_14000ed47_6;
                    }
                }
            }
        }
    } else {
        eax25 = eax21 - 1;
        if (!eax25) {
            addr_14000ecd6_14:
            rbx14 = g140026458;
            goto addr_14000ed49_15;
        } else {
            eax26 = eax25 - 1;
            if (!eax26) {
                *reinterpret_cast<uint32_t*>(&rsi18) = 2;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = 0;
                v13 = 1;
                goto addr_14000ece6_2;
            } else {
                eax27 = eax26 - 1;
                if (!eax27) {
                    *reinterpret_cast<uint32_t*>(&rsi18) = 4;
                    v13 = 1;
                    goto addr_14000ecd6_14;
                } else {
                    if (eax27 == 1) {
                        if (*reinterpret_cast<void***>(r12_10) == *reinterpret_cast<void***>(r9)) {
                            fun_14000eb78(rcx, r12_10, r9, v28);
                        }
                        rax29 = *reinterpret_cast<void***>(r12_10);
                        *reinterpret_cast<void***>(rax29) = reinterpret_cast<void**>(36);
                        *reinterpret_cast<void***>(r15_12) = *reinterpret_cast<void***>(r15_12) + 4;
                        *reinterpret_cast<void***>(r12_10) = rax29 + 2;
                        goto addr_14000efe4_24;
                    }
                }
            }
        }
    }
    dil19 = 1;
    addr_14000ed47_6:
    *reinterpret_cast<uint32_t*>(&rsi18) = *reinterpret_cast<uint32_t*>(&rsi18) + 1;
    addr_14000ed49_15:
    if (!rbx14) {
        rdi30 = *reinterpret_cast<void***>(r15_12);
        while (*reinterpret_cast<void***>(rdi30) && (*reinterpret_cast<void***>(rdi30) != 32 && *reinterpret_cast<void***>(rdi30) != 9)) {
            rdi30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi30) + reinterpret_cast<unsigned char>(2));
        }
        ebx31 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi30));
        rdx = reinterpret_cast<void**>(0xfa6);
        *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rcx32) = g140025c24;
        *reinterpret_cast<int32_t*>(&rcx32 + 4) = 0;
        *reinterpret_cast<void***>(rdi30) = reinterpret_cast<void**>(0);
        r8_33 = *reinterpret_cast<void***>(r15_12);
        fun_140003898(rcx32, 0xfa6, r8_33, r9);
        *reinterpret_cast<void***>(rdi30) = *reinterpret_cast<void***>(&ebx31);
        dil19 = 0;
        rax34 = fun_14000dcc4(0x140011dec, 0x140011dec);
        *reinterpret_cast<int32_t*>(&r8_11) = 0;
        *reinterpret_cast<int32_t*>(&r8_11 + 4) = 0;
        rbx14 = rax34;
        r14_16 = rax34;
    }
    if (!dil19) {
        rdi35 = reinterpret_cast<void**>(0xffffffffffffffff);
        do {
            ++rdi35;
        } while (*reinterpret_cast<void***>(rbx14 + reinterpret_cast<unsigned char>(rdi35) * 2));
        rdi36 = rdi35 + 1;
        if (rdi36 != 1) 
            goto addr_14000ef50_34;
    } else {
        r12_37 = rbx14;
        rax38 = fun_140009214(0x800, rdx, 0, r9);
        v39 = rax38;
        v40 = rax38;
        rbx14 = rax38;
        r15_41 = rax38 + 0x800;
        v42 = r15_41;
        if (r12_37) {
            do {
                r14_43 = *reinterpret_cast<void***>(r12_37 + 8);
                if (!v13) {
                    addr_14000ee9c_38:
                    while (*reinterpret_cast<void***>(r14_43)) {
                        if (rbx14 == r15_41) {
                            r9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp9) + 0xfffffffffffffff0);
                            r8_11 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp9) + 0xffffffffffffffd8);
                            rdx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp9) + 0xffffffffffffffd0);
                            fun_14000eb78(reinterpret_cast<int64_t>(rbp9) + 0xffffffffffffffe0, rdx, r8_11, r9);
                            rbx14 = v40;
                            r15_41 = v42;
                        }
                        eax44 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r14_43));
                        *reinterpret_cast<void***>(rbx14) = *reinterpret_cast<void***>(&eax44);
                        rbx14 = rbx14 + 2;
                        v40 = rbx14;
                        r14_43 = r14_43 + 2;
                    }
                } else {
                    rdi45 = reinterpret_cast<struct s32*>(-1);
                    do {
                        rdi45 = reinterpret_cast<struct s32*>(&rdi45->f1);
                    } while (*reinterpret_cast<void***>(r14_43 + reinterpret_cast<int64_t>(rdi45) * 2));
                    rdi46 = reinterpret_cast<void**>(&rdi45->f1);
                    if (reinterpret_cast<unsigned char>(rdi46) <= reinterpret_cast<unsigned char>(v17)) 
                        goto addr_14000ee3f_45; else 
                        goto addr_14000ee0f_46;
                }
                if (rbx14 == r15_41) {
                    r9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp9) + 0xfffffffffffffff0);
                    r8_11 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp9) + 0xffffffffffffffd8);
                    rdx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp9) + 0xffffffffffffffd0);
                    fun_14000eb78(reinterpret_cast<int64_t>(rbp9) + 0xffffffffffffffe0, rdx, r8_11, r9);
                    rbx14 = v40;
                    r15_41 = v42;
                }
                *reinterpret_cast<void***>(rbx14) = reinterpret_cast<void**>(0);
                if (*reinterpret_cast<void***>(r12_37)) {
                    *reinterpret_cast<void***>(rbx14) = reinterpret_cast<void**>(32);
                    rbx14 = rbx14 + 2;
                    v40 = rbx14;
                    if (rbx14 == r15_41) {
                        r9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp9) + 0xfffffffffffffff0);
                        r8_11 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp9) + 0xffffffffffffffd8);
                        rdx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp9) + 0xffffffffffffffd0);
                        fun_14000eb78(reinterpret_cast<int64_t>(rbp9) + 0xffffffffffffffe0, rdx, r8_11, r9);
                        rbx14 = v40;
                        r15_41 = v42;
                    }
                    *reinterpret_cast<void***>(rbx14) = reinterpret_cast<void**>(0);
                    continue;
                }
                addr_14000ee3f_45:
                r9 = r14_43;
                r8_11 = v17;
                rdx = r13_20;
                *reinterpret_cast<uint32_t*>(&rcx47) = *reinterpret_cast<uint32_t*>(&rsi18);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx47) + 4) = 0;
                ecx48 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7)) + reinterpret_cast<uint64_t>(rcx47 * 2)));
                rax49 = fun_14000eff8(*reinterpret_cast<uint16_t*>(&ecx48), rdx, r8_11, r9);
                r14_43 = rax49;
                goto addr_14000ee9c_38;
                addr_14000ee0f_46:
                if (r13_20) {
                    free(r13_20, rdx, r8_11, r9);
                }
                v17 = rdi46;
                rax50 = reinterpret_cast<void**>(2 * reinterpret_cast<unsigned char>(rdi46));
                if (__intrinsic()) {
                    rax50 = reinterpret_cast<void**>(0xffffffffffffffff);
                }
                rax51 = fun_140009214(rax50, __intrinsic(), r8_11, r9, rax50, __intrinsic());
                r13_20 = rax51;
                goto addr_14000ee3f_45;
                r12_37 = *reinterpret_cast<void***>(r12_37);
            } while (r12_37);
            rbx14 = v39;
        }
        r15_12 = v7;
        r14_16 = rbx14;
        r12_10 = v6;
        goto addr_14000ef9e_60;
    }
    rdi36 = reinterpret_cast<void**>(2);
    addr_14000ef50_34:
    rax52 = reinterpret_cast<void**>(2 * reinterpret_cast<unsigned char>(rdi36));
    if (__intrinsic()) {
        rax52 = reinterpret_cast<void**>(0xffffffffffffffff);
    }
    rax53 = fun_140009214(rax52, __intrinsic(), 0, r9);
    r13_20 = rax53;
    if (v15) {
        rax54 = fun_14000eff8(82, r13_20, rdi36, rbx14);
        rbx14 = rax54;
    }
    if (v13) {
        *reinterpret_cast<uint32_t*>(&rcx55) = *reinterpret_cast<uint32_t*>(&rsi18);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx55) + 4) = 0;
        ecx56 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r15_12)) + reinterpret_cast<uint64_t>(rcx55 * 2)));
        fun_14000eff8(*reinterpret_cast<uint16_t*>(&ecx56), r13_20, rdi36, rbx14);
    }
    addr_14000ef9e_60:
    fun_14000f188(v8, r15_12, r12_10, v5);
    if (r14_16) {
        free(r14_16, r15_12, r12_10, v5);
    }
    if (r13_20) {
        free(r13_20, r15_12, r12_10, v5);
    }
    addr_14000efe4_24:
    return;
}

void** fun_14000eff8(uint16_t cx, void** rdx, void** r8, void** r9) {
    void** r14_5;
    void** rbx6;
    uint32_t ebp7;
    void** r12_8;
    void** rsi9;
    void** rdi10;
    void** rax11;
    void** rcx12;
    unsigned char r15b13;
    uint64_t rax14;
    void** rax15;
    uint32_t eax16;
    int32_t eax17;
    void** rcx18;
    int32_t* rax19;

    r14_5 = r8;
    rbx6 = rdx;
    ebp7 = cx;
    r12_8 = rdx;
    *reinterpret_cast<int32_t*>(&rsi9) = 0;
    *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdi10) = 0;
    *reinterpret_cast<int32_t*>(&rdi10 + 4) = 0;
    rax11 = reinterpret_cast<void**>(wcscpy_s(rbx6, r14_5, r9));
    if (*reinterpret_cast<int32_t*>(&rax11)) {
        *reinterpret_cast<uint32_t*>(&rcx12) = g140025c24;
        *reinterpret_cast<int32_t*>(&rcx12 + 4) = 0;
        fun_140003898(rcx12, 0x410, r9, r9);
    }
    r15b13 = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(rbx6) == 34);
    rax14 = 0xffffffffffffffff;
    do {
        ++rax14;
    } while (*reinterpret_cast<void***>(rbx6 + rax14 * 2));
    rax15 = rbx6 + (rax14 - 1) * 2;
    while (reinterpret_cast<unsigned char>(rax15) >= reinterpret_cast<unsigned char>(rbx6)) {
        if (*reinterpret_cast<void***>(rax15) == 92) 
            goto addr_14000f093_8;
        if (*reinterpret_cast<void***>(rax15) == 47) 
            goto addr_14000f093_8;
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rax15) == 46) && !rsi9) {
            rsi9 = rax15;
        }
        rax15 = rax15 - 2;
    }
    addr_14000f096_14:
    eax16 = *reinterpret_cast<uint16_t*>(&ebp7);
    if (eax16 == 66) {
        if (rsi9) {
            *reinterpret_cast<void***>(rsi9) = reinterpret_cast<void**>(0);
            goto addr_14000f170_17;
        }
    } else {
        if (eax16 == 68) {
            if (!rdi10) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx6 + 2) == 58)) {
                    eax17 = reinterpret_cast<int32_t>(wcscpy_s(rbx6, r14_5, "."));
                    if (eax17) {
                        *reinterpret_cast<uint32_t*>(&rcx18) = g140025c24;
                        *reinterpret_cast<int32_t*>(&rcx18 + 4) = 0;
                        fun_140003898(rcx18, 0x410, ".", r9);
                    }
                } else {
                    *reinterpret_cast<void***>(rbx6 + 4) = reinterpret_cast<void**>(0);
                }
            } else {
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx6 + 2) == 58) && rdi10 == rbx6 + 4) {
                    rdi10 = rdi10 + 2;
                }
                *reinterpret_cast<void***>(rdi10) = reinterpret_cast<void**>(0);
            }
        } else {
            if (eax16 == 70) {
                addr_14000f170_17:
                if (!rdi10) {
                    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx6 + 2) == 58)) {
                        rbx6 = rbx6 + 4;
                    }
                } else {
                    rbx6 = rdi10 + 2;
                }
            } else {
                if (eax16 == 82 && rsi9) {
                    *reinterpret_cast<void***>(rsi9) = reinterpret_cast<void**>(0);
                }
            }
        }
        if (r15b13) {
            if (*reinterpret_cast<void***>(rbx6) != 34 && reinterpret_cast<unsigned char>(rbx6) > reinterpret_cast<unsigned char>(r12_8)) {
                rbx6 = rbx6 - 2;
                *reinterpret_cast<void***>(rbx6) = reinterpret_cast<void**>(34);
            }
            rax19 = reinterpret_cast<int32_t*>(wcschr(rbx6));
            if (*reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rax19) - 2) != 34) {
                *rax19 = 34;
            }
        }
        return rbx6;
    }
    addr_14000f093_8:
    rdi10 = rax15;
    goto addr_14000f096_14;
}

void fun_14000f300(void** rcx, void**** rdx, void** r8, void** r9);

void fun_14000f188(void** rcx, void** rdx, void** r8, void** r9) {
    void** r14_5;
    void** rsi6;
    void** rbx7;
    void** r15_8;
    void** rcx9;
    void** rax10;
    void* rsp11;
    void** r8_12;
    void** v13;
    void** rcx14;
    uint32_t edx15;
    uint16_t* rdi16;
    uint16_t* v17;
    void** v18;
    void** rcx19;
    uint32_t eax20;

    *reinterpret_cast<void***>(rdx) = *reinterpret_cast<void***>(rdx) + 2;
    r14_5 = r9;
    rsi6 = r8;
    rbx7 = rdx;
    r15_8 = rcx;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx)) == 94)) {
        *reinterpret_cast<void***>(rdx) = *reinterpret_cast<void***>(rdx) + 2;
    }
    rcx9 = *reinterpret_cast<void***>(rbx7);
    rax10 = reinterpret_cast<void**>(wcschr(rcx9, 58));
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 64 - 8 + 8);
    r8_12 = *reinterpret_cast<void***>(rbx7);
    v13 = rax10;
    rcx14 = r8_12;
    edx15 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r8_12));
    while (*reinterpret_cast<int16_t*>(&edx15) && *reinterpret_cast<int16_t*>(&edx15) != 41) {
        if (*reinterpret_cast<int16_t*>(&edx15) == 94) {
            rcx14 = rcx14 + 2;
        }
        rcx14 = rcx14 + 2;
        edx15 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx14));
    }
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r8_12) == 40) || (!rax10 || reinterpret_cast<unsigned char>(rax10) >= reinterpret_cast<unsigned char>(rcx14))) {
        rdi16 = v17;
        if (*rdi16) {
            do {
                if (*reinterpret_cast<void***>(rsi6) == *reinterpret_cast<void***>(r14_5)) {
                    fun_14000eb78(r15_8, rsi6, r14_5, v18);
                }
                rcx19 = *reinterpret_cast<void***>(rsi6);
                eax20 = *rdi16;
                ++rdi16;
                *reinterpret_cast<void***>(rcx19) = *reinterpret_cast<void***>(&eax20);
                *reinterpret_cast<void***>(rsi6) = rcx19 + 2;
            } while (*rdi16);
        }
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx7)) == 36)) {
            *reinterpret_cast<void***>(rbx7) = *reinterpret_cast<void***>(rbx7) + 2;
        }
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx7)) == 40)) {
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx7)) == 42) && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx7) + 2) == 42)) {
                *reinterpret_cast<void***>(rbx7) = *reinterpret_cast<void***>(rbx7) + 2;
            }
        } else {
            do {
                *reinterpret_cast<void***>(rbx7) = *reinterpret_cast<void***>(rbx7) + 2;
            } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx7)) == 41));
        }
        *reinterpret_cast<void***>(rbx7) = *reinterpret_cast<void***>(rbx7) + 2;
    } else {
        fun_14000f300(r15_8, reinterpret_cast<int64_t>(rsp11) + 0x78, rsi6, r14_5);
        *reinterpret_cast<void***>(rbx7) = v13;
    }
    return;
}

void fun_14000f300(void** rcx, void**** rdx, void** r8, void** r9) {
    void** v5;
    void** v6;
    void** r14_7;
    void**** r15_8;
    void*** rbx9;
    uint32_t eax10;
    void** rcx11;
    void** rcx12;
    void*** rsi13;
    void** rcx14;
    void** rax15;
    void** rax16;
    void*** rdi17;
    void** r13_18;
    void** v19;
    void** rcx20;
    uint32_t edx21;
    uint32_t eax22;
    void** r8_23;
    void** rbp24;
    void** rax25;
    void** rax26;
    void** r12_27;
    void** rcx28;
    uint32_t edx29;
    uint32_t eax30;
    uint16_t* rbx31;
    uint16_t* v32;
    void** rdx33;
    uint32_t eax34;
    void** r15_35;
    int32_t eax36;
    void** v37;
    void** rcx38;
    uint32_t eax39;
    void** rdi40;
    void** r13_41;
    void** v42;
    void** rcx43;
    uint32_t eax44;

    v5 = r9;
    v6 = rcx;
    r14_7 = r8;
    *rdx = *rdx + 2;
    r15_8 = rdx;
    rbx9 = *rdx;
    while (eax10 = reinterpret_cast<uint16_t>(*rbx9), !!*reinterpret_cast<int16_t*>(&eax10)) {
        if (*reinterpret_cast<int16_t*>(&eax10) == 61) 
            goto addr_14000f364_4;
        if (*reinterpret_cast<int16_t*>(&eax10) == 94) {
            rbx9 = rbx9 + 2;
        }
        rbx9 = rbx9 + 2;
    }
    if (*reinterpret_cast<int16_t*>(&eax10) != 61) {
        *reinterpret_cast<uint32_t*>(&rcx11) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx11 + 4) = 0;
        fun_140003898(rcx11, 0x3eb, r8, r9, rcx11, 0x3eb, r8, r9);
    }
    addr_14000f364_4:
    if (rbx9 == *r15_8) {
        *reinterpret_cast<uint32_t*>(&rcx12) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx12 + 4) = 0;
        fun_140003898(rcx12, 0x3ed, r8, r9, rcx12, 0x3ed, r8, r9);
    }
    rsi13 = rbx9;
    if (!*rbx9) {
        addr_14000f398_12:
        if (*rsi13 != 41) {
            *reinterpret_cast<uint32_t*>(&rcx14) = g140025c20;
            *reinterpret_cast<int32_t*>(&rcx14 + 4) = 0;
            fun_140003898(rcx14, 0x3e8, r8, r9, rcx14, 0x3e8, r8, r9);
        }
    } else {
        do {
            if (*rsi13 == 41) 
                break;
            if (reinterpret_cast<int1_t>(*rsi13 == 94)) {
                rsi13 = rsi13 + 2;
            }
            rsi13 = rsi13 + 2;
        } while (*rsi13);
        goto addr_14000f398_12;
    }
    rax15 = reinterpret_cast<void**>(2 * ((reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(rbx9) - reinterpret_cast<uint64_t>(*r15_8)) >> 1) + 1));
    if (__intrinsic()) {
        rax15 = reinterpret_cast<void**>(0xffffffffffffffff);
    }
    rax16 = fun_140009214(rax15, __intrinsic(), r8, r9);
    rdi17 = *r15_8;
    r13_18 = rax16;
    v19 = rax16;
    rcx20 = rax16;
    while (edx21 = reinterpret_cast<uint16_t>(*rdi17), *reinterpret_cast<int16_t*>(&edx21) != 61) {
        if (*reinterpret_cast<int16_t*>(&edx21) == 94) {
            rdi17 = rdi17 + 2;
        }
        eax22 = reinterpret_cast<uint16_t>(*rdi17);
        *reinterpret_cast<void***>(rcx20) = *reinterpret_cast<void***>(&eax22);
        rcx20 = rcx20 + 2;
        rdi17 = rdi17 + 2;
    }
    r8_23 = reinterpret_cast<void**>(0xffffffffffffffff);
    *reinterpret_cast<void***>(rcx20) = reinterpret_cast<void**>(0);
    rbp24 = reinterpret_cast<void**>(0xffffffffffffffff);
    do {
        ++rbp24;
    } while (*reinterpret_cast<void***>(r13_18 + reinterpret_cast<unsigned char>(rbp24) * 2));
    rax25 = reinterpret_cast<void**>(2 * reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(rsi13) - reinterpret_cast<uint64_t>(rbx9)) >> 1));
    if (__intrinsic()) {
        rax25 = reinterpret_cast<void**>(0xffffffffffffffff);
    }
    rax26 = fun_140009214(rax25, __intrinsic(), 0xffffffffffffffff, r9);
    r12_27 = rax26;
    rcx28 = rax26;
    while (rdi17 = rdi17 + 2, edx29 = reinterpret_cast<uint16_t>(*rdi17), *reinterpret_cast<int16_t*>(&edx29) != 41) {
        if (*reinterpret_cast<int16_t*>(&edx29) == 94) {
            rdi17 = rdi17 + 2;
        }
        eax30 = reinterpret_cast<uint16_t>(*rdi17);
        *reinterpret_cast<void***>(rcx28) = *reinterpret_cast<void***>(&eax30);
        rcx28 = rcx28 + 2;
    }
    rbx31 = v32;
    *reinterpret_cast<int32_t*>(&rdx33) = 0;
    *reinterpret_cast<int32_t*>(&rdx33 + 4) = 0;
    *r15_8 = rsi13 + 2;
    *reinterpret_cast<void***>(rcx28) = reinterpret_cast<void**>(0);
    eax34 = *rbx31;
    if (*reinterpret_cast<void***>(&eax34)) {
        r15_35 = v5;
        do {
            if (*reinterpret_cast<void***>(&eax34) != *reinterpret_cast<void***>(r13_18) || (r8_23 = rbp24, eax36 = reinterpret_cast<int32_t>(wcsncmp(rbx31, r13_18, r8_23, r9)), *reinterpret_cast<int32_t*>(&rdx33) = 0, *reinterpret_cast<int32_t*>(&rdx33 + 4) = 0, !!eax36)) {
                if (*reinterpret_cast<void***>(r14_7) == *reinterpret_cast<void***>(r15_35)) {
                    r9 = v37;
                    r8_23 = r15_35;
                    rdx33 = r14_7;
                    fun_14000eb78(v6, rdx33, r8_23, r9);
                }
                rcx38 = *reinterpret_cast<void***>(r14_7);
                eax39 = *rbx31;
                ++rbx31;
                *reinterpret_cast<void***>(rcx38) = *reinterpret_cast<void***>(&eax39);
                *reinterpret_cast<void***>(r14_7) = rcx38 + 2;
            } else {
                rdi40 = r12_27;
                if (*reinterpret_cast<void***>(r12_27)) {
                    r13_41 = v6;
                    do {
                        if (*reinterpret_cast<void***>(r14_7) == *reinterpret_cast<void***>(r15_35)) {
                            r9 = v42;
                            r8_23 = r15_35;
                            fun_14000eb78(r13_41, r14_7, r8_23, r9);
                            *reinterpret_cast<int32_t*>(&rdx33) = 0;
                            *reinterpret_cast<int32_t*>(&rdx33 + 4) = 0;
                        }
                        rcx43 = *reinterpret_cast<void***>(r14_7);
                        eax44 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi40));
                        rdi40 = rdi40 + 2;
                        *reinterpret_cast<void***>(rcx43) = *reinterpret_cast<void***>(&eax44);
                        *reinterpret_cast<void***>(r14_7) = rcx43 + 2;
                    } while (*reinterpret_cast<void***>(rdi40));
                    r13_18 = v19;
                }
                rbx31 = rbx31 + reinterpret_cast<unsigned char>(rbp24);
            }
            eax34 = *rbx31;
        } while (*reinterpret_cast<void***>(&eax34));
    }
    free(r13_18, rdx33, r8_23, r9);
    goto free;
}

void fun_140010a1c(int64_t rcx, int64_t rdx);

void fun_140010984(int64_t rcx, int64_t rdx) {
    int64_t* rbx3;
    int64_t rdi4;

    rbx3 = reinterpret_cast<int64_t*>(0x140013438);
    while (reinterpret_cast<uint64_t>(rbx3) < 0x140013438) {
        rdi4 = *rbx3;
        if (rdi4) {
            fun_140010a1c(rdi4, rdx);
            rdi4(rdi4);
        }
        ++rbx3;
    }
    return;
}

int64_t fun_140010630(int64_t rcx);

int64_t fun_140010680(int64_t rcx) {
    int64_t rax2;
    int64_t rax3;
    int64_t rax4;

    rax2 = fun_140010630(rcx);
    rax3 = -rax2;
    *reinterpret_cast<int32_t*>(&rax4) = reinterpret_cast<int32_t>(-(*reinterpret_cast<uint32_t*>(&rax3) - (*reinterpret_cast<uint32_t*>(&rax3) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax3) < *reinterpret_cast<uint32_t*>(&rax3) + reinterpret_cast<uint1_t>(!!rax2))))) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    return rax4;
}

int32_t fun_140010744(int64_t rcx) {
    return 1;
}

int64_t _configure_wide_argv = 0x14c40;

int32_t fun_140010c30(int64_t rcx) {
    goto _configure_wide_argv;
}

int64_t InitializeSListHead = 0x14fcc;

void fun_140010754(int64_t rcx) {
    goto InitializeSListHead;
}

int32_t g140015004 = 1;

int32_t fun_140010780(int64_t rcx) {
    int32_t eax2;
    uint1_t zf3;

    eax2 = 0;
    zf3 = reinterpret_cast<uint1_t>(g140015004 == 0);
    *reinterpret_cast<unsigned char*>(&eax2) = zf3;
    return eax2;
}

int64_t __setusermatherr = 0x14c2c;

void fun_140010c2a(int64_t rcx) {
    goto __setusermatherr;
}

uint32_t g1400157d0;

int64_t RtlCaptureContext = 0x14f24;

int64_t RtlLookupFunctionEntry = 0x14f38;

int64_t RtlVirtualUnwind = 0x14f52;

int64_t IsDebuggerPresent = 0x14fe2;

int64_t SetUnhandledExceptionFilter = 0x14716;

int64_t UnhandledExceptionFilter = 0x14f66;

void fun_14001079c(int32_t ecx) {
    void* rsp2;
    void* rbp3;
    int32_t eax4;
    int64_t v5;
    int64_t rax6;
    void* rsp7;
    void** rcx8;
    int32_t eax9;
    uint32_t eax10;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 0x4c0);
    eax4 = fun_140010cc2(23);
    if (eax4) {
        __asm__("int 0x29");
    }
    g1400157d0 = 0;
    fun_140010c12(reinterpret_cast<int64_t>(rbp3) + 0xfffffffffffffff0);
    RtlCaptureContext(reinterpret_cast<int64_t>(rbp3) - 16);
    rax6 = reinterpret_cast<int64_t>(RtlLookupFunctionEntry(v5, reinterpret_cast<int64_t>(rbp3) + 0x4d8));
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 0x5c0 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
    if (rax6) {
        RtlVirtualUnwind();
        rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) - 8 + 8);
    }
    rcx8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp7) + 80);
    fun_140010c12(rcx8, rcx8);
    eax9 = reinterpret_cast<int32_t>(IsDebuggerPresent(rcx8));
    SetUnhandledExceptionFilter();
    eax10 = reinterpret_cast<uint32_t>(UnhandledExceptionFilter(reinterpret_cast<int64_t>(rsp7) - 8 + 8 - 8 + 8 - 8 + 8 + 64));
    if (!eax10) {
        g1400157d0 = g1400157d0 & eax10 - (eax10 + reinterpret_cast<uint1_t>(eax10 < eax10 + reinterpret_cast<uint1_t>(eax9 == 1)));
    }
    return;
}

int32_t fun_140010be8();

struct s33 {
    signed char[8] pad8;
    int64_t f8;
};

struct s33* g30;

int64_t g140015778;

signed char fun_1400103f0(int64_t rcx) {
    int32_t eax2;
    signed char al3;
    struct s33* rax4;
    int64_t rcx5;
    int1_t zf6;
    int64_t tmp64_7;

    eax2 = fun_140010be8();
    if (!eax2) {
        addr_14001041e_2:
        al3 = 0;
    } else {
        rax4 = g30;
        rcx5 = rax4->f8;
        do {
            zf6 = g140015778 == rcx5;
            if (zf6) {
                tmp64_7 = g140015778;
                g140015778 = rcx5;
                rcx5 = tmp64_7;
            }
            if (zf6) 
                goto addr_14001041e_2;
        } while (rcx5);
        goto addr_140010425_8;
    }
    addr_140010420_9:
    return al3;
    addr_140010425_8:
    al3 = 1;
    goto addr_140010420_9;
}

int64_t _initterm_e = 0x14ca4;

int32_t fun_140010c48(int64_t rcx, int64_t rdx) {
    goto _initterm_e;
}

/* (image base) */
int16_t image_base_;

int32_t g14000003c;

struct s34 {
    int32_t f0;
    signed char[2] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f14;
    signed char[2] pad24;
    int16_t f18;
};

struct s35 {
    signed char[8] pad8;
    int32_t f8;
    int32_t fc;
    signed char[20] pad36;
    uint32_t f24;
};

signed char fun_140010544(int64_t* rcx, int64_t rdx) {
    int1_t zf3;
    int64_t rax4;
    struct s34* rcx5;
    signed char al6;
    uint64_t r8_7;
    int64_t rax8;
    struct s35* rdx9;
    int64_t rax10;
    struct s35* r9_11;
    uint64_t rcx12;
    uint64_t rax13;

    zf3 = image_base_ == 0x5a4d;
    if (!zf3 || ((rax4 = g14000003c, rcx5 = reinterpret_cast<struct s34*>(rax4 + 0x140000000), rcx5->f0 != 0x4550) || rcx5->f18 != 0x20b)) {
        al6 = 0;
    } else {
        r8_7 = reinterpret_cast<uint64_t>(rcx - 0x28000000);
        *reinterpret_cast<uint32_t*>(&rax8) = rcx5->f14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
        rdx9 = reinterpret_cast<struct s35*>(reinterpret_cast<int64_t>(&rcx5->f18) + rax8);
        *reinterpret_cast<uint32_t*>(&rax10) = rcx5->f6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
        r9_11 = reinterpret_cast<struct s35*>(reinterpret_cast<int64_t>(rdx9) + (rax10 + rax10 * 4) * 8);
        while (rdx9 != r9_11) {
            *reinterpret_cast<int32_t*>(&rcx12) = rdx9->fc;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = 0;
            if (r8_7 < rcx12) 
                goto addr_1400105b3_6;
            *reinterpret_cast<int32_t*>(&rax13) = rdx9->f8 + *reinterpret_cast<int32_t*>(&rcx12);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
            if (r8_7 < rax13) 
                goto addr_1400105bb_8;
            addr_1400105b3_6:
            ++rdx9;
        }
        goto addr_1400105b9_9;
    }
    addr_1400105db_10:
    return al6;
    addr_1400105b9_9:
    *reinterpret_cast<int32_t*>(&rdx9) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
    addr_1400105bb_8:
    if (rdx9) {
        if (!(rdx9->f24 & 0x80000000)) {
            al6 = 1;
            goto addr_1400105db_10;
        } else {
            al6 = 0;
            goto addr_1400105db_10;
        }
    } else {
        al6 = 0;
        goto addr_1400105db_10;
    }
}

int64_t g140011588 = 0x140009a70;

void fun_140010a1c(int64_t rcx, int64_t rdx) {
    goto g140011588;
}

int64_t _register_thread_local_exe_atexit_callback = 0x14cf8;

void fun_140010c72(int64_t rcx, int64_t rdx) {
    goto _register_thread_local_exe_atexit_callback;
}

void fun_140010c18(int64_t rcx, void** rdx, int64_t r8) {
    goto exit;
}

int64_t _cexit = 0x14ce4;

void fun_140010c66(int64_t rcx, void** rdx, int64_t r8) {
    goto _cexit;
}

int64_t _exit = 0x14cb2;

void fun_140010c4e(int64_t rcx) {
    goto _exit;
}

int64_t _c_exit = 0x14cee;

void fun_140010c6c(int64_t rcx) {
    goto _c_exit;
}

void fun_14001037c(struct s4* rcx) {
    void* rsp2;
    int64_t rsi3;
    int32_t edi4;
    int64_t rax5;

    RtlCaptureContext();
    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 64 - 8 + 8);
    rsi3 = rcx->ff8;
    edi4 = 0;
    do {
        rax5 = reinterpret_cast<int64_t>(RtlLookupFunctionEntry(rsi3, reinterpret_cast<int64_t>(rsp2) + 96));
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
        if (!rax5) 
            break;
        RtlVirtualUnwind();
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
        ++edi4;
    } while (edi4 < 2);
    return;
}

int64_t TerminateProcess = 0x14f82;

void** fun_140010154(int64_t rcx) {
    SetUnhandledExceptionFilter();
    UnhandledExceptionFilter(rcx);
    GetCurrentProcess(rcx);
    goto TerminateProcess;
}

struct s36 {
    signed char[248] pad248;
    int64_t ff8;
};

void fun_14001030c(struct s36* rcx) {
    int64_t rcx2;
    int64_t rax3;

    RtlCaptureContext();
    rcx2 = rcx->ff8;
    rax3 = reinterpret_cast<int64_t>(RtlLookupFunctionEntry(rcx2, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 64 - 8 + 8 + 80));
    if (rax3) {
        RtlVirtualUnwind();
    }
    return;
}

uint32_t g14001501c = 2;

int32_t g140015018 = 1;

uint32_t g1400157d4;

uint64_t g140015020 = 0x202f;

int64_t fun_140010a24() {
    uint32_t r8d1;
    uint32_t eax2;
    int64_t rax3;

    g14001501c = 2;
    g140015018 = 1;
    r8d1 = g1400157d4;
    if (!(__intrinsic() ^ 0x49656e69 | __intrinsic() ^ 0x6c65746e | __intrinsic() ^ 0x756e6547) && ((g140015020 = 0xffffffffffffffff, r8d1 = r8d1 | 4, eax2 = __intrinsic() & 0xfff3ff0, g1400157d4 = r8d1, eax2 == 0x106c0) || (eax2 == 0x20660 || (eax2 == 0x20670 || (*reinterpret_cast<uint32_t*>(&rax3) = eax2 - 0x30650, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0, *reinterpret_cast<uint32_t*>(&rax3) <= 32) && static_cast<int1_t>(0x100010001 >> rax3))))) {
        r8d1 = r8d1 | 1;
        g1400157d4 = r8d1;
    }
    if (!(__intrinsic() ^ 0x68747541 | __intrinsic() ^ 0x69746e65 | __intrinsic() ^ 0x444d4163) && reinterpret_cast<int32_t>(__intrinsic() & 0xff00f00) >= reinterpret_cast<int32_t>(0x600f00)) {
        r8d1 = r8d1 | 4;
        g1400157d4 = r8d1;
    }
    if (__intrinsic() >= 7 && static_cast<int1_t>(__intrinsic() >> 9)) {
        g1400157d4 = r8d1 | 2;
    }
    if (!static_cast<int1_t>(__intrinsic() >> 20) || ((g140015018 = 2, g14001501c = 6, !static_cast<int1_t>(__intrinsic() >> 27)) || !static_cast<int1_t>(__intrinsic() >> 28))) {
        return 0;
    }
}

signed char fun_140010cc8() {
    return 1;
}

int32_t g140015030 = 1;

int32_t fun_140010be8() {
    int32_t eax1;
    int1_t zf2;

    eax1 = 0;
    zf2 = g140015030 == 0;
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>(!zf2);
    return eax1;
}

int64_t _initialize_onexit_table = 0x14d5c;

int32_t fun_140010c8a(int64_t rcx) {
    goto _initialize_onexit_table;
}

int64_t _crt_atexit = 0x14d94;

int32_t fun_140010c96(int64_t rcx) {
    goto _crt_atexit;
}

struct s37 {
    signed char[4] pad4;
    int32_t f4;
};

struct s38 {
    signed char[8] pad8;
    int64_t f8;
    void** f10;
    signed char[39] pad56;
    int32_t* f38;
};

int64_t __C_specific_handler = 0x1484a;

uint32_t fun_140010c0c(struct s37* rcx, void* rdx, int64_t r8, struct s38* r9) {
    goto __C_specific_handler;
}

void** fun_14000160c(void*** rcx, void** rdx, void** r8) {
    void*** rdx4;
    void** rcx5;
    uint32_t eax6;
    void** r8_7;

    rdx4 = rcx;
    rcx5 = *rcx;
    while (*reinterpret_cast<void***>(rcx5) == 32 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rcx5) == 9)) {
        rcx5 = rcx5 + 2;
    }
    eax6 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx5));
    r8_7 = rcx5;
    if (!*reinterpret_cast<int16_t*>(&eax6)) {
        return 0;
    }
    if (*reinterpret_cast<int16_t*>(&eax6) != 34) {
        do {
            if (*reinterpret_cast<int16_t*>(&eax6) == 32) 
                break;
        } while (*reinterpret_cast<int16_t*>(&eax6) != 9 && (rcx5 = rcx5 + 2, eax6 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx5)), !!*reinterpret_cast<int16_t*>(&eax6)));
        goto addr_140001665_9;
    } else {
        do {
            rcx5 = rcx5 + 2;
            if (!*reinterpret_cast<void***>(rcx5)) 
                goto addr_140001665_9;
        } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rcx5) == 34));
        goto addr_14000164b_12;
    }
    addr_140001681_13:
    *reinterpret_cast<void***>(rcx5) = reinterpret_cast<void**>(0);
    goto addr_140001685_14;
    addr_140001665_9:
    if (*reinterpret_cast<void***>(rcx5) != 32 && *reinterpret_cast<void***>(rcx5) != 9) {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rcx5) == 34)) {
            if (*reinterpret_cast<void***>(rcx5)) {
                addr_140001685_14:
                *rdx4 = rcx5 + 2;
                return r8_7;
            } else {
                addr_140001696_17:
                rcx5 = rcx5 - 2;
                goto addr_140001685_14;
            }
        } else {
            rcx5 = rcx5 + 2;
            if (!*reinterpret_cast<void***>(rcx5)) 
                goto addr_140001696_17; else 
                goto addr_140001681_13;
        }
    }
    addr_14000164b_12:
    goto addr_140001665_9;
}

void** fun_140001f10(void** rcx, void** rdx) {
    void** rax3;
    void* rsp4;
    void** rbx5;
    void** r14_6;
    void** rdi7;
    void** rcx8;
    void* r8_9;
    uint64_t rax10;
    void** rcx11;
    void** rsi12;
    void** rax13;
    void* rsp14;
    int1_t zf15;
    void** r15_16;
    void** rdx17;
    void** rcx18;
    int1_t zf19;
    void** rcx20;
    void** rax21;
    void* rsp22;
    void** rax23;
    void** rbp24;
    void** rax25;
    void** rdx26;
    void** rcx27;
    void** rcx28;

    rax3 = reinterpret_cast<void**>(__zero_stack_offset());
    rsp4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(__zero_stack_offset()) - 8 - 8 - 8 - 32);
    rbx5 = g140025c28;
    r14_6 = rcx;
    while (rdi7 = rbx5, !!rbx5) {
        rcx8 = *reinterpret_cast<void***>(rbx5 + 8);
        rax10 = reinterpret_cast<uint64_t>(wcschr(rcx8, 36, r8_9));
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp4) - 8 + 8);
        if (rax10) {
            rcx11 = *reinterpret_cast<void***>(rbx5 + 8);
            rsi12 = g140025c48;
            rax13 = fun_14000e740(rcx11, -1, 0x140025c48);
            rsp14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp4) - 8 + 8);
            zf15 = rsi12 == g140025c48;
            r15_16 = rax13;
            if (!zf15) {
                rdx17 = g14003d0e0;
                do {
                    rcx18 = *reinterpret_cast<void***>(rsi12);
                    *reinterpret_cast<void***>(rsi12) = rdx17;
                    rdx17 = rsi12;
                    zf19 = rcx18 == g140025c48;
                    rsi12 = rcx18;
                } while (!zf19);
                g14003d0e0 = rdx17;
            }
            rcx20 = rax13;
            while (r8_9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp14) + 72), rax21 = reinterpret_cast<void**>(wcstok_s(rcx20, " ", r8_9)), rsp22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp14) - 8 + 8), !!rax21) {
                rax23 = fun_14000dc58();
                rbp24 = rax23;
                rax25 = fun_14000dcc4(rax21, rax21);
                rsp14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp22) - 8 + 8 - 8 + 8);
                *reinterpret_cast<void***>(rbp24 + 8) = rax25;
                rdx26 = r14_6;
                rcx20 = *reinterpret_cast<void***>(r14_6);
                while (rcx20) {
                    rdx26 = rcx20;
                    rcx20 = *reinterpret_cast<void***>(rcx20);
                }
                *reinterpret_cast<void***>(rdx26) = rbp24;
            }
            free(r15_16, " ", r8_9);
            rcx27 = *reinterpret_cast<void***>(rbx5 + 8);
            free(rcx27, " ", r8_9);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp22) - 8 + 8 - 8 + 8);
            rax3 = g14003d0e0;
            rbx5 = *reinterpret_cast<void***>(rbx5);
            *reinterpret_cast<void***>(rdi7) = rax3;
            g14003d0e0 = rdi7;
        } else {
            rbx5 = *reinterpret_cast<void***>(rbx5);
            rcx28 = r14_6;
            *reinterpret_cast<void***>(rdi7) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi7)) & rax10);
            rax3 = *reinterpret_cast<void***>(r14_6);
            while (rax3) {
                rcx28 = rax3;
                rax3 = *reinterpret_cast<void***>(rax3);
            }
            *reinterpret_cast<void***>(rcx28) = rdi7;
        }
    }
    return rax3;
}

void** fun_140001ddc(void** rcx, void** rdx, void** r8, void** r9) {
    void** rbx5;
    void** rsi6;
    void** rax7;
    void** rax8;
    void** rdi9;
    void** rax10;
    void** rcx11;
    void** rax12;
    void** rax13;
    void** cl14;
    uint32_t eax15;
    int64_t rdx16;
    void** rax17;
    unsigned char cl18;
    void** rcx19;
    void** rax20;
    void** rcx21;

    rbx5 = g140025c08;
    rsi6 = rcx;
    if (!rbx5) {
        rax7 = fun_140009244(48, rdx, r8, r9);
        rbx5 = rax7;
        g140025c08 = rax7;
    }
    rax8 = fun_140009244(16, rdx, r8, r9);
    rdi9 = rax8;
    if (!*reinterpret_cast<signed char*>(&rdx)) {
        rax10 = fun_140009244(48, rdx, r8, r9);
        *reinterpret_cast<void***>(rax10) = *reinterpret_cast<void***>(rbx5);
        *reinterpret_cast<void***>(rax10 + 8) = *reinterpret_cast<void***>(rbx5 + 8);
        *reinterpret_cast<void***>(rax10 + 16) = *reinterpret_cast<void***>(rbx5 + 16);
        *reinterpret_cast<void***>(rax10 + 24) = *reinterpret_cast<void***>(rbx5 + 24);
        *reinterpret_cast<void***>(rax10 + 32) = *reinterpret_cast<void***>(rbx5 + 32);
        *reinterpret_cast<void***>(rax10 + 40) = *reinterpret_cast<void***>(rbx5 + 40);
        *reinterpret_cast<void***>(rdi9 + 8) = rax10;
    } else {
        rcx11 = g140025c08;
        *reinterpret_cast<void***>(rax8 + 8) = rcx11;
    }
    rax12 = fun_14000dde0(rsi6, rdx, r8, r9);
    if (!rax12) {
        *reinterpret_cast<void***>(rdi9) = reinterpret_cast<void**>(0);
        rax13 = fun_140009244(48, rdx, r8, r9);
        cl14 = g1400157ef;
        *reinterpret_cast<void***>(rax13 + 16) = cl14;
        *reinterpret_cast<void***>(rax13 + 8) = rsi6;
        *reinterpret_cast<void***>(rax13 + 32) = rdi9;
        eax15 = fun_14000dd88(rsi6, rdx, r8);
        *reinterpret_cast<uint32_t*>(&rdx16) = eax15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
        rax17 = reinterpret_cast<void**>(0x140025800);
        *reinterpret_cast<void***>(rax13) = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(0x140025800) + reinterpret_cast<uint64_t>(rdx16 * 8));
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(0x140025800) + reinterpret_cast<uint64_t>(rdx16 * 8)) = rax13;
    } else {
        cl18 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax12 + 16)) ^ reinterpret_cast<unsigned char>(g1400157ef));
        if (cl18 & 32) {
            *reinterpret_cast<uint32_t*>(&rcx19) = g140025c24;
            *reinterpret_cast<int32_t*>(&rcx19 + 4) = 0;
            rdx = reinterpret_cast<void**>(0x43f);
            *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
            fun_140003898(rcx19, 0x43f, r8, r9);
        }
        rax20 = rax12 + 32;
        rcx21 = *reinterpret_cast<void***>(rax20);
        while (rcx21) {
            rax20 = rcx21;
            rcx21 = *reinterpret_cast<void***>(rcx21);
        }
        *reinterpret_cast<void***>(rax20) = rdi9;
        rax17 = reinterpret_cast<void**>(free(rsi6, rdx));
    }
    return rax17;
}

void** fun_140001c2c(void** rcx, void** rdx, unsigned char r8b) {
    void** r8_3;
    unsigned char r14b4;
    void** rbp5;
    void** r15b6;
    int1_t zf7;
    int1_t zf8;
    void** r9_9;
    int32_t eax10;
    void** rax11;
    void** rbx12;
    unsigned char al13;
    void** rax14;
    void** rcx15;
    void** rax16;
    void** rcx17;
    void** cl18;
    unsigned char al19;
    void** rcx20;
    void** rax21;
    int32_t eax22;
    void** rcx23;

    *reinterpret_cast<unsigned char*>(&r8_3) = r8b;
    r14b4 = *reinterpret_cast<unsigned char*>(&r8_3);
    rbp5 = rdx;
    r15b6 = reinterpret_cast<void**>(0);
    if (!(*reinterpret_cast<unsigned char*>(&r8_3) & 2)) {
        zf7 = g1400157ed == 0;
        if (zf7 || ((zf8 = (g1400157ec & 4) == 0, !zf8) || ((r9_9 = rcx, *reinterpret_cast<int32_t*>(&r8_3) = 0, *reinterpret_cast<int32_t*>(&r8_3 + 4) = 0, rdx = reinterpret_cast<void**>(0), *reinterpret_cast<int32_t*>(&rdx + 4) = 0, eax10 = reinterpret_cast<int32_t>(_wgetenv_s(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 64 + 0x88)), !!eax10) || 1))) {
            addr_140001cf2_3:
            g1400157ed = reinterpret_cast<void**>(0);
            rax11 = fun_14000918c(rcx, rcx);
            rbx12 = rax11;
            if (!rax11 || !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax11 + 24)) & 2) && (al13 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax11 + 24)) & g1400157ec), !(4 & al13))) {
                rax14 = fun_14000dc58();
                *reinterpret_cast<void***>(rax14 + 8) = rbp5;
                if (rbx12) {
                    r15b6 = reinterpret_cast<void**>(1);
                } else {
                    *reinterpret_cast<int32_t*>(&rcx15) = static_cast<int32_t>(reinterpret_cast<uint64_t>(rbx12 + 32));
                    *reinterpret_cast<int32_t*>(&rcx15 + 4) = 0;
                    rax16 = fun_140009244(rcx15, rdx, r8_3, r9_9);
                    rbx12 = rax16;
                    *reinterpret_cast<void***>(rax16 + 8) = rcx;
                }
                *reinterpret_cast<void***>(rbx12 + 24) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx12 + 24)) & 0xef);
                *reinterpret_cast<void***>(rbx12 + 24) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx12 + 24)) | r14b4);
                rax11 = *reinterpret_cast<void***>(rbx12 + 16);
                *reinterpret_cast<void***>(rax14) = rax11;
                *reinterpret_cast<void***>(rbx12 + 16) = rax14;
                if (!r15b6) {
                    rcx17 = g140037098;
                    g140037098 = reinterpret_cast<void**>(0);
                    rax11 = *reinterpret_cast<void***>(rcx17);
                    *reinterpret_cast<void***>(rbx12) = rax11;
                    *reinterpret_cast<void***>(rcx17) = rbx12;
                }
                if (!(r14b4 & 64) && ((rax11 = reinterpret_cast<void**>(wcschr(rbp5, 36)), !!rax11) && (*reinterpret_cast<void***>(rbx12 + 24) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx12 + 24)) | 1), rax11 = fun_14000dfd0(rbp5, 0, 0, rcx), *reinterpret_cast<void***>(rbx12 + 24) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx12 + 24)) & 0xfe), !*reinterpret_cast<signed char*>(&rax11)))) {
                    cl18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx12 + 24)) | 16);
                    *reinterpret_cast<void***>(rbx12 + 16) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<void***>(rbx12 + 24) = cl18;
                }
                *reinterpret_cast<signed char*>(&rax11) = 1;
            } else {
                addr_140001cc3_12:
                *reinterpret_cast<signed char*>(&rax11) = 0;
            }
        } else {
            rax11 = fun_14000918c(rcx);
            if (!rax11) 
                goto addr_140001cca_14;
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax11 + 24)) & 2) 
                goto addr_140001cc3_12;
            al19 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax11 + 24)) & g1400157ec);
            if (4 & al19) 
                goto addr_140001cc3_12;
            addr_140001cca_14:
            rcx20 = rbp5;
            goto addr_140001ccd_17;
        }
    } else {
        if (!*reinterpret_cast<void***>(rdx)) 
            goto addr_140001cf2_3;
        rcx20 = rdx;
        goto addr_140001ccd_17;
    }
    return rax11;
    addr_140001ccd_17:
    rax21 = fun_14000e6a4(rcx20);
    rdx = rax21;
    eax22 = reinterpret_cast<int32_t>(_wputenv_s(rcx, rdx));
    if (eax22) {
        *reinterpret_cast<uint32_t*>(&rcx23) = g140025c24;
        *reinterpret_cast<int32_t*>(&rcx23 + 4) = 0;
        rdx = reinterpret_cast<void**>(0x41f);
        *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
        fun_140003898(rcx23, 0x41f, r8_3, r9_9);
        goto addr_140001cf2_3;
    }
}

void** fun_140002b20(void** rcx, void** rdx, void** r8) {
    void* rbp4;
    void* rsp5;
    uint64_t rax6;
    uint64_t v7;
    void** rsi8;
    void** r12_9;
    void** v10;
    void** v11;
    void** v12;
    void** r14_13;
    void** v14;
    void** rax15;
    uint32_t ecx16;
    void** rax17;
    void* rsp18;
    void** v19;
    void** rbx20;
    uint32_t eax21;
    uint32_t eax22;
    void** rsi23;
    uint32_t eax24;
    void** rdi25;
    signed char r13b26;
    void** rax27;
    void** r14_28;
    void** r9_29;
    int64_t rax30;
    void** rax31;
    void** rax32;
    void** rax33;
    void** rsi34;
    int64_t rax35;
    void* rsp36;
    int64_t rax37;
    void** rax38;
    void* rsp39;
    void** r15_40;
    void** r15_41;
    void** rax42;
    int1_t zf43;
    void** rax44;
    unsigned char v45;
    int1_t zf46;
    void** rax47;
    void** rcx48;
    void** rax49;
    void** rax50;
    void** rcx51;
    void** rcx52;
    int64_t rax53;
    void** rax54;
    void** rax55;
    void** rax56;
    uint64_t rcx57;
    void** rax58;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 0x1e8);
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 0x2c0);
    rax6 = g140015008;
    v7 = rax6 ^ reinterpret_cast<uint64_t>(rsp5);
    rsi8 = *reinterpret_cast<void***>(rcx);
    *reinterpret_cast<int32_t*>(&r12_9) = 0;
    *reinterpret_cast<int32_t*>(&r12_9 + 4) = 0;
    v10 = rdx;
    v11 = reinterpret_cast<void**>(0);
    v12 = rsi8;
    if (rsi8) {
        do {
            r14_13 = *reinterpret_cast<void***>(rsi8 + 8);
            v14 = r14_13;
            rax15 = r14_13;
            ecx16 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r14_13));
            if (!*reinterpret_cast<int16_t*>(&ecx16)) {
                addr_140002be3_4:
                rax17 = fun_14000dcc4(r14_13, r14_13);
                rsp18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
                v19 = rax17;
                rbx20 = rax17;
            } else {
                do {
                    if (*reinterpret_cast<int16_t*>(&ecx16) == 36) 
                        break;
                    if (*reinterpret_cast<int16_t*>(&ecx16) == 94) {
                        rax15 = rax15 + 2;
                    }
                    rax15 = rax15 + 2;
                    ecx16 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax15));
                } while (*reinterpret_cast<int16_t*>(&ecx16));
                if (!*reinterpret_cast<void***>(rax15)) 
                    goto addr_140002be3_4; else 
                    goto addr_140002bc5_10;
            }
            while (1) {
                eax21 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx20));
                if (*reinterpret_cast<void***>(&eax21) && (*reinterpret_cast<void***>(&eax21) == 32 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax21) == 9))) {
                    rbx20 = rbx20 + 2;
                    continue;
                }
                eax22 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx20));
                if (!*reinterpret_cast<void***>(&eax22)) 
                    break;
                rsi23 = rbx20;
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax22) == 34)) 
                    goto addr_140002c24_15;
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax22) == 0x7b)) 
                    goto addr_140002cae_17;
                do {
                    rbx20 = rbx20 + 2;
                    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx20) == 34)) {
                        rbx20 = rbx20 + 2;
                        do {
                            eax24 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx20));
                            if (!*reinterpret_cast<void***>(&eax24)) 
                                break;
                            rbx20 = rbx20 + 2;
                        } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax24) == 34));
                    }
                } while (*reinterpret_cast<void***>(rbx20) != 0x7d && *reinterpret_cast<void***>(rbx20));
                if (!*reinterpret_cast<void***>(rbx20)) 
                    goto addr_140002c83_24;
                addr_140002c8f_25:
                rbx20 = rbx20 + 2;
                eax22 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx20));
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax22) == 34)) {
                    addr_140002cae_17:
                    if (*reinterpret_cast<void***>(&eax22)) {
                        do {
                            if (*reinterpret_cast<void***>(rbx20) == 32) 
                                break;
                        } while (*reinterpret_cast<void***>(rbx20) != 9 && (rbx20 = rbx20 + 2, !!*reinterpret_cast<void***>(rbx20)));
                    }
                } else {
                    do {
                        if (!*reinterpret_cast<void***>(&eax22)) 
                            goto addr_140002c3b_29;
                        rbx20 = rbx20 + 2;
                        eax22 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx20));
                    } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax22) == 34));
                    goto addr_140002c35_32;
                }
                addr_140002cc9_33:
                if (*reinterpret_cast<void***>(rbx20)) {
                    *reinterpret_cast<void***>(rbx20) = reinterpret_cast<void**>(0);
                    rbx20 = rbx20 + 2;
                }
                rdi25 = rsi23;
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rsi23) == 0x7b)) {
                    rsi23 = reinterpret_cast<void**>(0);
                } else {
                    do {
                        if (*reinterpret_cast<void***>(rdi25) == 0x7d) 
                            break;
                        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi25) == 94)) {
                            rdi25 = rdi25 + 2;
                        }
                        rdi25 = rdi25 + 2;
                    } while (*reinterpret_cast<void***>(rdi25));
                    if (*reinterpret_cast<void***>(rdi25)) 
                        goto addr_140002d00_42;
                }
                addr_140002d11_43:
                r13b26 = 0;
                rax27 = fun_14000dcc4(rdi25, rdi25);
                rdx = reinterpret_cast<void**>("*");
                r14_28 = rax27;
                rax30 = reinterpret_cast<int64_t>(wcspbrk(rdi25, "*", r8, r9_29));
                rsp18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp18) - 8 + 8 - 8 + 8);
                if ((rax30 || rsi23) && (r9_29 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp18) + 40), rdx = rdi25, r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp18) + 96), rax31 = fun_140005e6c(rsi23, rdx, r8, r9_29), rsp18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp18) - 8 + 8), !!rax31)) {
                    r13b26 = 1;
                    free(r14_28, rdx, r8, r9_29);
                    rdx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffff8c);
                    rdi25 = rax31;
                    rax32 = fun_14000f570(rax31, rdx, r8, r9_29);
                    rsp18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp18) - 8 + 8 - 8 + 8);
                    r14_28 = rax32;
                }
                do {
                    rax33 = fun_140009244(24, rdx, r8, r9_29, 24, rdx);
                    *reinterpret_cast<int32_t*>(&rdx) = 32;
                    *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                    rsi34 = rax33;
                    rax35 = reinterpret_cast<int64_t>(wcschr(r14_28, 32, r8, r9_29));
                    rsp36 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp18) - 8 + 8 - 8 + 8);
                    if (!rax35 || (*reinterpret_cast<int32_t*>(&rdx) = 34, *reinterpret_cast<int32_t*>(&rdx + 4) = 0, rax37 = reinterpret_cast<int64_t>(wcschr()), rsp36 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp36) - 8 + 8), !!rax37)) {
                        rax38 = fun_14000dcc4(r14_28, r14_28);
                        rsp39 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp36) - 8 + 8);
                        *reinterpret_cast<void***>(rsi34 + 8) = rax38;
                    } else {
                        r15_40 = reinterpret_cast<void**>(0xffffffffffffffff);
                        do {
                            ++r15_40;
                        } while (*reinterpret_cast<void***>(r14_28 + reinterpret_cast<unsigned char>(r15_40) * 2) != *reinterpret_cast<void***>(&rax37));
                        r15_41 = r15_40 + 3;
                        rax42 = reinterpret_cast<void**>(2 * reinterpret_cast<unsigned char>(r15_41));
                        if (__intrinsic()) 
                            goto label_50; else 
                            goto addr_140002dd2_51;
                    }
                    addr_140002e26_52:
                    zf43 = g140025c39 == 0;
                    if (zf43 || (r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp39) + 40), rdx = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp39) + 96), rax44 = fun_140005ca8(r14_28, rdx, r8, r9_29), rsp39 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp39) - 8 + 8), !!rax44)) {
                        if (!(v45 & 16) || !0 && !0) {
                        }
                        *reinterpret_cast<void***>(rsi34 + 16) = reinterpret_cast<void**>(0);
                    } else {
                        *reinterpret_cast<void***>(rsi34 + 16) = reinterpret_cast<void**>(0);
                    }
                    zf46 = g140025c39 == 0;
                    if (zf46) {
                        rax47 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp39) + 32);
                        while (r12_9) {
                            rax47 = r12_9;
                            r12_9 = *reinterpret_cast<void***>(r12_9);
                        }
                        *reinterpret_cast<void***>(rax47) = rsi34;
                        r12_9 = v11;
                        continue;
                    } else {
                        rdx = *reinterpret_cast<void***>(rsi34 + 16);
                        rcx48 = r12_9;
                        rax49 = r12_9;
                        if (!r12_9) {
                            addr_140002ea6_63:
                            r12_9 = rsi34;
                            v11 = rsi34;
                            continue;
                        } else {
                            do {
                                if (reinterpret_cast<unsigned char>(rdx) > reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax49 + 16))) 
                                    break;
                                rcx48 = rax49;
                                rax49 = *reinterpret_cast<void***>(rax49);
                            } while (rax49);
                            if (rcx48 == rax49) 
                                goto addr_140002ea6_63;
                        }
                    }
                    *reinterpret_cast<void***>(rcx48) = rsi34;
                    *reinterpret_cast<void***>(rsi34) = rax49;
                    continue;
                    label_50:
                    rax42 = reinterpret_cast<void**>(0xffffffffffffffff);
                    addr_140002dd2_51:
                    rax50 = fun_140009214(rax42, __intrinsic(), r8, r9_29, rax42, __intrinsic());
                    *reinterpret_cast<void***>(rsi34 + 8) = rax50;
                    wcscpy_s(rax50, r15_41, "\"", r9_29);
                    rcx51 = *reinterpret_cast<void***>(rsi34 + 8);
                    wcscat_s(rcx51, r15_41, r14_28, r9_29);
                    rcx52 = *reinterpret_cast<void***>(rsi34 + 8);
                    r8 = reinterpret_cast<void**>("\"");
                    rdx = r15_41;
                    wcscat_s(rcx52, rdx, "\"", r9_29);
                    rsp39 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp36) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
                    goto addr_140002e26_52;
                    free(r14_28, rdx, r8, r9_29);
                    rsp18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp39) - 8 + 8);
                } while (r13b26 && ((rdx = reinterpret_cast<void**>("*"), rax53 = reinterpret_cast<int64_t>(wcspbrk(rdi25, "*", r8, r9_29)), rsp18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp18) - 8 + 8), !!rax53) && ((rdx = reinterpret_cast<void**>(0), rax54 = fun_140005e30(reinterpret_cast<uint64_t>(rsp18) + 96, 0, r8, r9_29), rsp18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp18) - 8 + 8), !!rax54) && (rdx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffff8c), rax55 = fun_14000f570(rdi25, rdx, r8, r9_29), rsp18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp18) - 8 + 8), r14_28 = rax55, !!rax55))));
                continue;
                addr_140002d00_42:
                *reinterpret_cast<void***>(rdi25) = reinterpret_cast<void**>(0);
                rdi25 = rdi25 + 2;
                rsi23 = rsi23 + 2;
                goto addr_140002d11_43;
                addr_140002c35_32:
                if (*reinterpret_cast<void***>(rbx20)) {
                    addr_140002c47_70:
                    rbx20 = rbx20 + 2;
                    goto addr_140002cc9_33;
                } else {
                    addr_140002c3b_29:
                    fun_140003898(0, 0x40e, r8, r9_29);
                    rsp18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp18) - 8 + 8);
                    goto addr_140002c47_70;
                }
                addr_140002c83_24:
                fun_140003898(0, 0x423, r8, r9_29);
                rsp18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp18) - 8 + 8);
                goto addr_140002c8f_25;
                do {
                    addr_140002c24_15:
                    if (!*reinterpret_cast<void***>(&eax22)) 
                        goto addr_140002c3b_29;
                    rbx20 = rbx20 + 2;
                    eax22 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx20));
                } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax22) == 34));
                goto addr_140002c35_32;
            }
            if (v14 != *reinterpret_cast<void***>(v12 + 8)) {
                free(v14, rdx, r8, r9_29);
                rsp18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp18) - 8 + 8);
                continue;
            }
            addr_140002bc5_10:
            g140026458 = rdx;
            r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp5) + 64);
            *reinterpret_cast<signed char*>(&rdx) = 1;
            rax56 = fun_14000e740(r14_13, 1, r8, r14_13, 1, r8);
            rsp5 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
            r14_13 = rax56;
            v14 = rax56;
            goto addr_140002be3_4;
            free(v19, rdx, r8, r9_29);
            rsp5 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp18) - 8 + 8);
            rsi8 = *reinterpret_cast<void***>(v12);
            rdx = v10;
            v12 = rsi8;
        } while (rsi8);
    }
    rcx57 = v7 ^ reinterpret_cast<uint64_t>(rsp5);
    rax58 = fun_140010130(rcx57, rdx, r8, rcx57, rdx, r8);
    return rax58;
}

void** fun_140003510(void** rcx, int32_t* rdx, void** r8, void** r9) {
    void** v5;
    int32_t* rbp6;
    void** rsi7;
    signed char v8;
    void** rdi9;
    void** rax10;
    void* rsp11;
    void** r8_12;
    void** rax13;
    void** rbx14;
    void** v15;
    uint32_t eax16;
    uint64_t rsi17;
    int32_t* rdx18;
    void** rdi19;
    void** rax20;
    uint64_t rsi21;
    void** rax22;
    void** rcx23;
    uint32_t eax24;
    void** rdx25;

    v5 = r8;
    rbp6 = rdx;
    rsi7 = r8;
    v8 = 0;
    rdi9 = rcx;
    rax10 = reinterpret_cast<void**>(wcschr());
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 48 - 8 + 8);
    if (rax10) {
        *reinterpret_cast<int32_t*>(&r8_12) = 1;
        *reinterpret_cast<int32_t*>(&r8_12 + 4) = 0;
        if (rax10 == rdi9 || (rax13 = rax10 + 0xfffffffffffffffe, !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rax13) == 61))) {
            *reinterpret_cast<void***>(rax10) = reinterpret_cast<void**>(0);
            r8_12 = rsi7;
            rbx14 = rax10 + 2;
            v15 = rbx14;
            fun_140003468(rdi9, rbp6, r8_12, r9);
            rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
        } else {
            *reinterpret_cast<void***>(rax10) = reinterpret_cast<void**>(32);
            rbx14 = rax13;
            if (reinterpret_cast<unsigned char>(rax13) > reinterpret_cast<unsigned char>(rdi9)) {
                do {
                    eax16 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx14));
                    if (*reinterpret_cast<void***>(&eax16) == 32) 
                        break;
                } while (reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&eax16) - 9) > 1 && (rbx14 = rbx14 - 2, reinterpret_cast<unsigned char>(rbx14) > reinterpret_cast<unsigned char>(rdi9)));
            }
            if (rbx14 != rdi9) {
                *reinterpret_cast<void***>(rbx14) = reinterpret_cast<void**>(0);
                r8_12 = rsi7;
                rbx14 = rbx14 + 2;
                fun_140003468(rdi9, rbp6, r8_12, r9);
                rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
            }
            v15 = rbx14;
        }
        rsi17 = 0xffffffffffffffff;
        *reinterpret_cast<void***>(&rdx18) = reinterpret_cast<void**>(0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = 0;
        do {
            ++rsi17;
        } while (*reinterpret_cast<void***>(rbx14 + rsi17 * 2));
        rdi19 = rbx14;
        if (*reinterpret_cast<void***>(rbx14)) 
            goto addr_1400035ea_13;
    } else {
        rax20 = fun_140003468(rdi9, rbp6, rsi7, r9);
        goto addr_1400036dc_15;
    }
    addr_1400036b6_16:
    rax20 = rbx14 + rsi17 * 2;
    if (rdi19 == rax20) {
        *reinterpret_cast<void***>(&rdx18) = reinterpret_cast<void**>(0x3ee);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = 0;
        rax20 = fun_140003898(0, 0x3ee, r8_12, r9);
    }
    if (v8) {
        rax20 = reinterpret_cast<void**>(free(rbx14, rdx18, r8_12));
    }
    addr_1400036dc_15:
    return rax20;
    addr_1400035ea_13:
    while (1) {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi19) == 34)) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi19) == 92) || (*reinterpret_cast<void***>(rdi19 + 0xfffffffffffffffe) != 32 && !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi19 + 0xfffffffffffffffe) == 9) || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi19 + 2) == 10))) {
                addr_14000367d_22:
                rdi19 = rdi19 + 2;
                if (!*reinterpret_cast<void***>(rdi19)) 
                    goto addr_1400036b6_16;
            } else {
                rsi21 = rsi17 - 2;
                *reinterpret_cast<void***>(rdi19) = reinterpret_cast<void**>(0);
                if (!v8) {
                    v8 = 1;
                    rax22 = fun_14000dcc4(rbx14, rbx14);
                    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
                    v15 = rax22;
                }
                fun_1400032c8(reinterpret_cast<int64_t>(rsp11) + 32, reinterpret_cast<int64_t>(rsp11) + 40, r8_12, r9);
                rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
                rbx14 = v15;
                *reinterpret_cast<void***>(&rdx18) = reinterpret_cast<void**>(0);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = 0;
                rdi19 = rbx14 + rsi21 * 2;
                rsi17 = rsi21;
                goto addr_140003678_26;
            }
        } else {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi19 + 2) == 34)) 
                break;
            rcx23 = rdi19;
            *reinterpret_cast<void***>(rdi19) = reinterpret_cast<void**>(34);
            do {
                rcx23 = rcx23 + 2;
                eax24 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx23 + 2));
                *reinterpret_cast<void***>(rcx23) = *reinterpret_cast<void***>(&eax24);
            } while (*reinterpret_cast<void***>(&eax24));
            goto addr_140003678_26;
        }
        continue;
        addr_140003678_26:
        goto addr_14000367d_22;
    }
    *reinterpret_cast<void***>(rdi19) = reinterpret_cast<void**>(0);
    rdi19 = rdi19 + 2;
    *reinterpret_cast<int32_t*>(&rdx25) = *rbp6;
    *reinterpret_cast<int32_t*>(&rdx25 + 4) = 0;
    fun_1400033d0(rbx14, rdx25, v5, r9);
    r8_12 = v5;
    *rbp6 = *rbp6 + 1;
    rdx18 = rbp6;
    fun_140003510(rdi19 + 2, rdx18, r8_12, r9);
    goto addr_1400036b6_16;
}

void fun_1400032c8(void*** rcx, uint64_t* rdx, void** r8, void** r9) {
    uint64_t* rbx5;
    void*** rdi6;
    void** r8_7;
    uint64_t rax8;
    uint64_t rax9;
    uint64_t rbp10;
    uint64_t rax11;
    void** rcx12;
    void** rdx13;
    void** rax14;
    void** rcx15;

    rbx5 = rdx;
    rdi6 = rcx;
    if (*reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(*rcx + *rdx * 2) - 2) != 10) {
        do {
            r8_7 = g140026480;
            rax8 = reinterpret_cast<uint64_t>(fgetws(0x140025c50, 0x400, r8_7));
            if (!rax8) 
                break;
            rax9 = 0xffffffffffffffff;
            do {
                ++rax9;
            } while (*reinterpret_cast<int16_t*>(0x140025c50 + rax9 * 2));
            if (*reinterpret_cast<int16_t*>(0x140025c50 + rax9 * 2 - 4) == 92 && *reinterpret_cast<int16_t*>(0x140025c50 + rax9 * 2 - 2) == 10) {
                *reinterpret_cast<int32_t*>(0x140025c50 + rax9 * 2 - 4) = 32;
            }
            rbp10 = *rbx5;
            rax11 = 0xffffffffffffffff;
            do {
                ++rax11;
            } while (*reinterpret_cast<int16_t*>(0x140025c50 + rax11 * 2));
            *rbx5 = *rbx5 + rax11;
            rcx12 = *rdi6;
            rdx13 = reinterpret_cast<void**>(*rbx5 * 2 + 2);
            rax14 = fun_140009274(rcx12, rdx13, r8_7, r9, rcx12, rdx13);
            if (!rax14) {
                *reinterpret_cast<uint32_t*>(&rcx15) = g140025c20;
                *reinterpret_cast<int32_t*>(&rcx15 + 4) = 0;
                fun_140003898(rcx15, 0x419, r8_7, r9);
            }
            *rdi6 = rax14;
            wcscpy_s(rax14 + rbp10 * 2);
        } while (*reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(*rdi6 + *rbx5 * 2) - 2) != 10);
    }
    return;
}

void** fun_140010270(int32_t ecx);

void** fun_14001025c(void** rcx, void** rdx, void** r8, void** r9, ...) {
    void** rax5;

    rax5 = fun_140010270(8);
    return rax5;
}

signed char* g10;

uint64_t fun_140010df0() {
    void* r10_1;
    signed char* r10_2;
    int64_t rax3;
    void* rax4;
    signed char* r11_5;
    uint64_t rax6;

    r10_1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 16 + 24);
    r10_2 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(r10_1) - rax3);
    if (reinterpret_cast<uint64_t>(r10_1) < reinterpret_cast<uint64_t>(rax4)) {
        r10_2 = reinterpret_cast<signed char*>(0);
    }
    r11_5 = g10;
    if (reinterpret_cast<uint64_t>(r10_2) < reinterpret_cast<uint64_t>(r11_5)) {
        *reinterpret_cast<uint16_t*>(&r10_2) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_2) & 0xf000);
        do {
            r11_5 = r11_5 - 0x1000;
            *r11_5 = 0;
        } while (r10_2 != r11_5);
    }
    return rax6;
}

struct s39 {
    void** f0;
    signed char[1] pad2;
    void** f2;
};

void** fun_140004564(void** rcx, void** rdx, void** r8, void** r9) {
    void** rbx5;
    void** rax6;
    void* rsp7;
    void** rsi8;
    void** rax9;
    void* rsp10;
    struct s39* rax11;
    void** rax12;
    uint64_t rax13;
    void** rax14;
    void* rsp15;
    void* rsp16;
    void** rax17;
    void** rax18;
    void** rax19;

    rbx5 = rcx;
    rax6 = fun_14000dcc4(0x140011dec);
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 32 - 8 + 8);
    rsi8 = rax6;
    if (*reinterpret_cast<void***>(rbx5)) {
        do {
            rax9 = reinterpret_cast<void**>(wcschr(rbx5, 37, r8));
            rsp10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) - 8 + 8);
            if (!rax9 || (rax11 = reinterpret_cast<struct s39*>(wcschr(rax9 + 2, 37, r8)), rsp10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp10) - 8 + 8), rax11 == 0)) {
                rax12 = fun_14000dd24(rsi8, rbx5, r8, r9);
                rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp10) - 8 + 8);
                rsi8 = rax12;
                rax13 = 0xffffffffffffffff;
                do {
                    ++rax13;
                } while (*reinterpret_cast<void***>(rbx5 + rax13 * 2));
                rbx5 = rbx5 + rax13 * 2;
            } else {
                *reinterpret_cast<void***>(rax9) = reinterpret_cast<void**>(0);
                rax11->f0 = reinterpret_cast<void**>(0);
                rax14 = fun_14000dd24(rsi8, rbx5, r8, r9);
                rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp10) - 8 + 8);
                r8 = rax9 + 2;
                _wdupenv_s(reinterpret_cast<int64_t>(rsp15) + 80);
                rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8);
                if (1) {
                    *reinterpret_cast<void***>(rax9) = reinterpret_cast<void**>(37);
                    rax17 = fun_14000dd24(rax14, rax9, r8, r9);
                    rax18 = fun_14000dd24(rax17, "%", r8, r9);
                    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8 - 8 + 8);
                    rsi8 = rax18;
                } else {
                    rax19 = fun_14000dd24(rax14, 0, r8, r9);
                    rsi8 = rax19;
                    free(0);
                    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8 - 8 + 8);
                }
                *reinterpret_cast<void***>(rax9) = reinterpret_cast<void**>(37);
                rbx5 = reinterpret_cast<void**>(&rax11->f2);
                rax11->f0 = reinterpret_cast<void**>(37);
            }
        } while (*reinterpret_cast<void***>(rbx5));
    }
    return rsi8;
}

int64_t _dup = 0x149e6;

void** fun_1400049fc(void** rcx, void** rdx, void** r8, void** r9) {
    void** v5;
    signed char bpl6;
    signed char r13b7;
    signed char dil8;
    signed char v9;
    void** rsi10;
    void** r14_11;
    void** r15_12;
    void** r12_13;
    void** rax14;
    void** rbx15;
    uint64_t rdx16;
    int64_t rax17;
    int32_t eax18;
    int64_t rcx19;
    void** rax20;
    void** rbx21;
    void** ebp22;
    int64_t rax23;
    int32_t eax24;
    int64_t rcx25;
    void** rax26;
    void** eax27;
    int64_t rcx28;
    int64_t rcx29;
    void** eax30;
    int64_t rcx31;
    int64_t rdx32;
    int64_t rcx33;

    v5 = rcx;
    bpl6 = 0;
    r13b7 = 0;
    dil8 = 0;
    v9 = 0;
    *reinterpret_cast<int32_t*>(&rsi10) = 0;
    *reinterpret_cast<int32_t*>(&rsi10 + 4) = 0;
    r14_11 = r9;
    r15_12 = r8;
    r12_13 = rcx;
    while (rax14 = reinterpret_cast<void**>(wcspbrk(rcx, "<")), rbx15 = rax14, !!rax14) {
        rax14 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax14))));
        *reinterpret_cast<int32_t*>(&rax14 + 4) = 0;
        *reinterpret_cast<void***>(&rdx16) = reinterpret_cast<void**>(62);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
        if (rax14 == 60) {
            if (bpl6) 
                goto addr_140004b66_5;
            if (!rsi10) 
                goto addr_140004b07_7;
        } else {
            if (rax14 == 62) {
                if (r13b7) 
                    goto addr_140004b66_5;
                if (rsi10) 
                    goto addr_140004a9f_11; else 
                    goto addr_140004a8c_12;
            } else {
                if (rax14 == 0x7c) 
                    goto addr_140004b66_5;
                fun_140003898(0, 0x411, r8, r9);
                goto addr_140004b59_15;
            }
        }
        addr_140004b17_16:
        *reinterpret_cast<void***>(rbx15) = reinterpret_cast<void**>(32);
        r12_13 = rbx15 + 2;
        bpl6 = 1;
        v9 = 1;
        rax17 = reinterpret_cast<int64_t>(__acrt_iob_func());
        eax18 = reinterpret_cast<int32_t>(_fileno(rax17));
        *reinterpret_cast<int32_t*>(&rcx19) = eax18;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = 0;
        rax14 = reinterpret_cast<void**>(_dup(rcx19));
        *reinterpret_cast<void***>(r15_12) = rax14;
        if (rax14 == 0xffffffff) 
            goto addr_140004b66_5;
        *reinterpret_cast<void***>(&rdx16) = reinterpret_cast<void**>(4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
        rax14 = fun_1400048b4(rbx15 + 2, 4);
        if (!*reinterpret_cast<signed char*>(&rax14)) 
            goto addr_140004b66_5;
        addr_140004b59_15:
        rcx = r12_13;
        continue;
        addr_140004b07_7:
        rax20 = fun_14000dcc4(r12_13);
        rsi10 = rax20;
        goto addr_140004b17_16;
        addr_140004a9f_11:
        *reinterpret_cast<void***>(rbx15) = reinterpret_cast<void**>(32);
        r13b7 = 1;
        rbx21 = rbx15 + 2;
        r12_13 = rbx21;
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx21) == 62)) {
            ebp22 = reinterpret_cast<void**>(2);
        } else {
            *reinterpret_cast<void***>(rbx21) = reinterpret_cast<void**>(32);
            ebp22 = reinterpret_cast<void**>(3);
            rbx21 = rbx21 + 2;
        }
        rax23 = reinterpret_cast<int64_t>(__acrt_iob_func(1));
        eax24 = reinterpret_cast<int32_t>(_fileno(rax23));
        *reinterpret_cast<int32_t*>(&rcx25) = eax24;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx25) + 4) = 0;
        rax14 = reinterpret_cast<void**>(_dup(rcx25));
        *reinterpret_cast<void***>(r14_11) = rax14;
        if (rax14 == 0xffffffff) 
            goto addr_140004b61_21;
        *reinterpret_cast<void***>(&rdx16) = ebp22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
        rax14 = fun_1400048b4(rbx21, *reinterpret_cast<void***>(&rdx16));
        if (!*reinterpret_cast<signed char*>(&rax14)) 
            goto addr_140004b61_21;
        bpl6 = v9;
        goto addr_140004b59_15;
        addr_140004a8c_12:
        rax26 = fun_14000dcc4(r12_13);
        rsi10 = rax26;
        *reinterpret_cast<void***>(&rdx16) = reinterpret_cast<void**>(62);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
        goto addr_140004a9f_11;
    }
    addr_140004c16_24:
    *reinterpret_cast<signed char*>(&rax14) = dil8;
    return rax14;
    addr_140004b66_5:
    dil8 = 1;
    if (rsi10) {
        r8 = rsi10;
        rdx16 = 0xffffffffffffffff;
        wcscpy_s(v5);
        free(rsi10);
    }
    if (bpl6 && *reinterpret_cast<void***>(r15_12) != 0xffffffff) {
        rax14 = reinterpret_cast<void**>(__acrt_iob_func());
        eax27 = reinterpret_cast<void**>(_fileno(rax14));
        *reinterpret_cast<void***>(&rcx28) = *reinterpret_cast<void***>(r15_12);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx28) + 4) = 0;
        *reinterpret_cast<void***>(&rdx16) = eax27;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
        rax14 = reinterpret_cast<void**>(_dup2(rcx28, rdx16, r8));
        if (reinterpret_cast<int1_t>(rax14 == 0xffffffff)) {
            *reinterpret_cast<void***>(&rdx16) = reinterpret_cast<void**>(0x411);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
            rax14 = fun_140003898(0, 0x411, r8, r9);
        }
        *reinterpret_cast<void***>(&rcx29) = *reinterpret_cast<void***>(r15_12);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = 0;
        _close(rcx29, rdx16, r8);
        *reinterpret_cast<void***>(r15_12) = reinterpret_cast<void**>(0xffffffff);
    }
    if (r13b7 && *reinterpret_cast<void***>(r14_11) != 0xffffffff) {
        rax14 = reinterpret_cast<void**>(__acrt_iob_func(1, rdx16, r8));
        eax30 = reinterpret_cast<void**>(_fileno(rax14, rdx16, r8));
        *reinterpret_cast<void***>(&rcx31) = *reinterpret_cast<void***>(r14_11);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = 0;
        *reinterpret_cast<void***>(&rdx32) = eax30;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = 0;
        rax14 = reinterpret_cast<void**>(_dup2(rcx31, rdx32, r8));
        if (reinterpret_cast<int1_t>(rax14 == 0xffffffff)) {
            *reinterpret_cast<void***>(&rdx32) = reinterpret_cast<void**>(0x411);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = 0;
            rax14 = fun_140003898(0, 0x411, r8, r9);
        }
        *reinterpret_cast<void***>(&rcx33) = *reinterpret_cast<void***>(r14_11);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = 0;
        _close(rcx33, rdx32, r8);
        *reinterpret_cast<void***>(r14_11) = reinterpret_cast<void**>(0xffffffff);
        goto addr_140004c16_24;
    }
    addr_140004b61_21:
    bpl6 = v9;
    goto addr_140004b66_5;
}

int64_t NeedCurrentDirectoryForExePathW = 0x1443a;

int64_t _waccess_s = 0x14a0e;

void** fun_140004cc4(void** rcx, void** rdx, void** r8, void** r9) {
    void* rsp5;
    void* rbp6;
    void* rsp7;
    uint64_t rax8;
    uint64_t v9;
    void** r12_10;
    void** v11;
    void** r14_12;
    signed char v13;
    void** r13_14;
    void** r9_15;
    void** r8_16;
    void* rsp17;
    void** v18;
    int32_t eax19;
    uint64_t v20;
    void** rax21;
    void** v22;
    void** rax23;
    void** rax24;
    void* rsp25;
    void** v26;
    void** rdi27;
    int32_t eax28;
    void*** rcx29;
    void** rax30;
    void** rax31;
    void** rax32;
    void** v33;
    void** v34;
    void*** rax35;
    void** rcx36;
    void*** rdx37;
    void** rax38;
    void** rbx39;
    void** rax40;
    int32_t eax41;
    void** v42;
    void** v43;
    int32_t eax44;
    void** rcx45;
    void** rax46;
    void** rax47;
    void* rsp48;
    void** rsi49;
    void** rbx50;
    void** r8_51;
    void** r9_52;
    void** rdx53;
    int32_t eax54;
    void* rsp55;
    void** rax56;
    int32_t eax57;
    void** rbx58;
    unsigned char al59;
    void** rax60;
    void** rax61;
    void** r15_62;
    unsigned char al63;
    void** r15_64;
    int32_t eax65;
    int32_t eax66;
    void** v67;
    void** v68;
    void* rsp69;
    uint64_t rcx70;
    void** rax71;
    void** rbx72;
    void** rax73;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8);
    rbp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 0x5a0);
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 0x6a0);
    rax8 = g140015008;
    v9 = rax8 ^ reinterpret_cast<uint64_t>(rsp7);
    *reinterpret_cast<int32_t*>(&r12_10) = 0;
    *reinterpret_cast<int32_t*>(&r12_10 + 4) = 0;
    v11 = rdx;
    r14_12 = reinterpret_cast<void**>(0xffffffffffffffff);
    v13 = 0;
    *reinterpret_cast<int32_t*>(&r13_14) = 0;
    *reinterpret_cast<int32_t*>(&r13_14 + 4) = 0;
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rcx) == 34)) {
        addr_140004d5a_2:
        r9_15 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp6) + 0x190);
        *reinterpret_cast<int32_t*>(&r8_16) = 3;
        *reinterpret_cast<int32_t*>(&r8_16 + 4) = 0;
        _wsplitpath_s();
        rsp17 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
        if (!v18) {
            r9_15 = reinterpret_cast<void**>("P");
            *reinterpret_cast<int32_t*>(&r8_16) = 0;
            *reinterpret_cast<int32_t*>(&r8_16 + 4) = 0;
            eax19 = reinterpret_cast<int32_t>(_wgetenv_s(reinterpret_cast<uint64_t>(rsp17) + 96));
            rsp17 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp17) - 8 + 8);
            if (eax19 || !v20) {
                addr_140004e2c_4:
                rax21 = reinterpret_cast<void**>(66);
                v22 = reinterpret_cast<void**>(33);
                if (__intrinsic()) {
                    rax21 = reinterpret_cast<void**>(0xffffffffffffffff);
                }
            } else {
                rax23 = reinterpret_cast<void**>(2 * v20);
                if (__intrinsic()) {
                    rax23 = reinterpret_cast<void**>(0xffffffffffffffff);
                }
                rax24 = fun_140009214(rax23, __intrinsic(), 0, "P", rax23, __intrinsic());
                rsp25 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp17) - 8 + 8);
                r8_16 = v26;
                r9_15 = reinterpret_cast<void**>("P");
                rdi27 = rax24;
                eax28 = reinterpret_cast<int32_t>(_wgetenv_s(reinterpret_cast<uint64_t>(rsp25) + 96, rax24, r8_16, "P"));
                rsp17 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp25) - 8 + 8);
                if (eax28) {
                    free(rdi27, rax24, r8_16, "P");
                    rsp17 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp17) - 8 + 8);
                    rdi27 = reinterpret_cast<void**>(0);
                }
                if (rdi27) 
                    goto addr_140004e60_11; else 
                    goto addr_140004e2c_4;
            }
        } else {
            rcx29 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rbp6) - 0x70);
            rax30 = reinterpret_cast<void**>(0xffffffffffffffff);
            do {
                ++rax30;
            } while (rcx29[reinterpret_cast<unsigned char>(rax30) * 2]);
            rdi27 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp6) + 0xffffffffffffff90);
            v22 = rax30 + 1;
            goto addr_140004e60_11;
        }
    } else {
        rax31 = reinterpret_cast<void**>(0xffffffffffffffff);
        do {
            ++rax31;
        } while (*reinterpret_cast<void***>(rcx + reinterpret_cast<unsigned char>(rax31) * 2));
        r13_14 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rcx + 0xfffffffffffffffe) + reinterpret_cast<unsigned char>(rax31) * 2);
        if (!reinterpret_cast<int1_t>(34 == *reinterpret_cast<void***>(r13_14))) 
            goto addr_140004d5a_2; else 
            goto addr_140004d32_18;
    }
    rax32 = fun_140009214(rax21, __intrinsic(), r8_16, "P", rax21, __intrinsic());
    r8_16 = reinterpret_cast<void**>(".");
    rdi27 = rax32;
    wcscpy_s(rax32, 33, ".", "P");
    rsp17 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp17) - 8 + 8 - 8 + 8);
    addr_140004e60_11:
    if (v33 || v34) {
        rax35 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rbp6) - 0x80);
        rcx36 = reinterpret_cast<void**>(0xffffffffffffffff);
        do {
            ++rcx36;
        } while (rax35[reinterpret_cast<unsigned char>(rcx36) * 2]);
        rdx37 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rbp6) + 0x190);
        rax38 = reinterpret_cast<void**>(0xffffffffffffffff);
        do {
            ++rax38;
        } while (rdx37[reinterpret_cast<unsigned char>(rax38) * 2]);
        rbx39 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax38 + 1) + reinterpret_cast<unsigned char>(rcx36));
        rax40 = reinterpret_cast<void**>(2 * reinterpret_cast<unsigned char>(rbx39));
        if (!__intrinsic()) 
            goto addr_140004f6c_25;
    } else {
        eax41 = reinterpret_cast<int32_t>(_wgetenv_s(reinterpret_cast<uint64_t>(rsp17) + 88));
        if (eax41 || !v42) {
            v43 = reinterpret_cast<void**>(1);
        }
        eax44 = reinterpret_cast<int32_t>(NeedCurrentDirectoryForExePathW(reinterpret_cast<int64_t>(rbp6) + 0x390));
        rcx45 = reinterpret_cast<void**>(1);
        if (eax44) {
            rcx45 = reinterpret_cast<void**>(3);
            v43 = reinterpret_cast<void**>(3);
        }
        rax46 = reinterpret_cast<void**>(2 * reinterpret_cast<unsigned char>(rcx45));
        if (__intrinsic()) {
            rax46 = reinterpret_cast<void**>(0xffffffffffffffff);
        }
        rax47 = fun_140009214(rax46, __intrinsic(), 0, "P", rax46, __intrinsic());
        rsp48 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp17) - 8 + 8 - 8 + 8 - 8 + 8);
        rsi49 = rax47;
        rbx50 = rax47;
        if (!eax44) {
            r8_51 = v43;
        } else {
            wcscpy_s(rax47, v43, ".", "P");
            rsp48 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp48) - 8 + 8);
            rbx50 = rbx50 + 4;
            r8_51 = v43 - 2;
            v43 = r8_51;
        }
        r9_52 = reinterpret_cast<void**>("P");
        rdx53 = rbx50;
        eax54 = reinterpret_cast<int32_t>(_wgetenv_s(reinterpret_cast<uint64_t>(rsp48) + 88, rdx53, r8_51, "P"));
        rsp55 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp48) - 8 + 8);
        if (eax54 || !v43) {
            *reinterpret_cast<void***>(rbx50) = reinterpret_cast<void**>(0);
            goto addr_140004fa8_37;
        }
    }
    rax40 = reinterpret_cast<void**>(0xffffffffffffffff);
    addr_140004f6c_25:
    rax56 = fun_140009214(rax40, __intrinsic(), r8_16, r9_15, rax40, __intrinsic());
    r9_52 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp6) + 0x190);
    r8_51 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp6) + 0xffffffffffffff80);
    rdx53 = rbx39;
    rsi49 = rax56;
    eax57 = reinterpret_cast<int32_t>(_wmakepath_s(rax56, rdx53, r8_51, r9_52));
    rsp55 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp17) - 8 + 8 - 8 + 8);
    if (eax57) {
        free(rsi49, rdx53, r8_51, r9_52);
        rsp55 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp55) - 8 + 8);
        rsi49 = reinterpret_cast<void**>(0);
    }
    addr_140004fa8_37:
    rbx58 = rsi49;
    while (rbx58 && (rdx53 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp55) + 0x78), al59 = fun_140004c30(rbx58, rdx53, r8_51, r9_52), rsp55 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp55) - 8 + 8), !!al59)) {
        rax60 = reinterpret_cast<void**>(2 * reinterpret_cast<unsigned char>(v22));
        if (__intrinsic()) {
            rax60 = reinterpret_cast<void**>(0xffffffffffffffff);
        }
        rax61 = fun_140009214(rax60, __intrinsic(), r8_51, r9_52, rax60, __intrinsic());
        rdx53 = v22;
        r8_51 = rdi27;
        r12_10 = rax61;
        wcscpy_s(rax61, rdx53, r8_51, r9_52);
        rsp55 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp55) - 8 + 8 - 8 + 8);
        r15_62 = r12_10;
        while (r15_62 && (rdx53 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp55) + 0x70), al63 = fun_140004c30(r15_62, rdx53, r8_51, r9_52), rsp55 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp55) - 8 + 8), !!al63)) {
            r15_64 = v11;
            r9_52 = rbx58;
            *reinterpret_cast<int32_t*>(&r8_51) = 0;
            *reinterpret_cast<int32_t*>(&r8_51 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdx53) = 0x104;
            *reinterpret_cast<int32_t*>(&rdx53 + 4) = 0;
            eax65 = reinterpret_cast<int32_t>(_wmakepath_s(r15_64, 0x104));
            rsp55 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp55) - 8 + 8);
            if (eax65) 
                goto addr_14000504b_46;
            *reinterpret_cast<int32_t*>(&rdx53) = 0;
            *reinterpret_cast<int32_t*>(&rdx53 + 4) = 0;
            eax66 = reinterpret_cast<int32_t>(_waccess_s(r15_64));
            rsp55 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp55) - 8 + 8);
            if (!eax66) 
                goto addr_14000505c_48;
            addr_14000504b_46:
            r15_62 = v67;
        }
        rbx58 = v68;
    }
    free(r12_10, rdx53, r8_51, r9_52);
    free(rsi49, rdx53, r8_51, r9_52);
    rsp69 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp55) - 8 + 8 - 8 + 8);
    if (rdi27 != reinterpret_cast<int64_t>(rbp6) + 0xffffffffffffff90) {
        free(rdi27, rdx53, r8_51, r9_52);
        rsp69 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp69) - 8 + 8);
    }
    addr_1400050ea_53:
    rcx70 = v9 ^ reinterpret_cast<uint64_t>(rsp69);
    rax71 = fun_140010130(rcx70, rdx53, r8_51, rcx70, rdx53, r8_51);
    return rax71;
    addr_14000505c_48:
    if (v13) {
        do {
            ++r14_12;
        } while (*reinterpret_cast<void***>(r15_64 + reinterpret_cast<unsigned char>(r14_12) * 2));
        rbx72 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14_12) + reinterpret_cast<unsigned char>(r14_12));
        rdx53 = r15_64;
        r8_51 = rbx72;
        memmove(r15_64 + 2, rdx53, r8_51, r9_52);
        rsp55 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp55) - 8 + 8);
        *reinterpret_cast<void***>(r15_64) = reinterpret_cast<void**>(34);
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx72) + reinterpret_cast<unsigned char>(r15_64) + 2) = reinterpret_cast<void**>(34);
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(r15_64 + reinterpret_cast<unsigned char>(r14_12) * 2) + 4) = 0;
        *reinterpret_cast<void***>(r13_14) = reinterpret_cast<void**>(34);
    }
    free(r12_10, rdx53, r8_51, r9_52);
    free(rsi49, rdx53, r8_51, r9_52);
    rsp69 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp55) - 8 + 8 - 8 + 8);
    if (rdi27 != reinterpret_cast<int64_t>(rbp6) + 0xffffffffffffff90) {
        free(rdi27, rdx53, r8_51, r9_52);
        rsp69 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp69) - 8 + 8);
    }
    goto addr_1400050ea_53;
    addr_140004d32_18:
    v13 = 1;
    do {
        rcx = rcx + 2;
    } while (34 == *reinterpret_cast<void***>(rcx));
    if (reinterpret_cast<unsigned char>(r13_14) > reinterpret_cast<unsigned char>(rcx)) 
        goto addr_140004d44_61;
    addr_140004d55_62:
    *reinterpret_cast<void***>(r13_14) = reinterpret_cast<void**>(0);
    goto addr_140004d5a_2;
    do {
        addr_140004d44_61:
        rax73 = r13_14 + 0xfffffffffffffffe;
        if (!reinterpret_cast<int1_t>(34 == *reinterpret_cast<void***>(rax73))) 
            goto addr_140004d55_62;
        r13_14 = rax73;
    } while (reinterpret_cast<unsigned char>(rax73) > reinterpret_cast<unsigned char>(rcx));
    goto addr_140004d55_62;
}

int64_t GetFileTime = 0x14502;

signed char fun_140005f9c(void** rcx, void** rdx, void** r8, void** r9) {
    void** rsi5;
    void** rdi6;
    signed char al7;
    void** rbx8;
    void** rax9;
    void** rbp10;
    void** rax11;
    void** rcx12;
    void** rax13;
    void* rdx14;
    void* rdx15;
    void** rax16;
    void** rax17;
    void*** r9_18;
    int32_t* r8_19;
    void** rdx20;
    int32_t eax21;
    void** rax22;
    void** r14_23;
    void** rcx24;
    void** rcx25;
    uint64_t r8_26;
    uint64_t rdx27;
    void* rdi28;
    uint32_t eax29;
    uint32_t eax30;

    rsi5 = rdx;
    rdi6 = rcx;
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx)) & 0x400) || *reinterpret_cast<int32_t*>(rdx + 36) != 0xa000000c) {
        addr_14000611b_2:
        al7 = 1;
    } else {
        rbx8 = rdx + 44;
        rax9 = reinterpret_cast<void**>(wcsrchr());
        rbp10 = rax9;
        if (!rax9) {
            addr_1400060b0_4:
            rax11 = reinterpret_cast<void**>(CreateFileW(rbx8, 0x80000000, 1));
            if (rbp10) {
                free(rbx8, 0x80000000, 1);
                goto addr_1400060e8_6;
            }
        } else {
            rcx12 = reinterpret_cast<void**>(0xffffffffffffffff);
            do {
                ++rcx12;
            } while (*reinterpret_cast<void***>(rax9 + reinterpret_cast<unsigned char>(rcx12) * 2));
            rax13 = reinterpret_cast<void**>(0xffffffffffffffff);
            rdx14 = reinterpret_cast<void*>(2 - reinterpret_cast<unsigned char>(rcx12));
            do {
                ++rax13;
            } while (*reinterpret_cast<void***>(rbx8 + reinterpret_cast<unsigned char>(rax13) * 2));
            rdx15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx14) + reinterpret_cast<unsigned char>(rax13));
            rax16 = reinterpret_cast<void**>(0xffffffffffffffff);
            do {
                ++rax16;
            } while (*reinterpret_cast<void***>(rdi6 + reinterpret_cast<unsigned char>(rax16) * 2));
            rax17 = reinterpret_cast<void**>(2 * (reinterpret_cast<uint64_t>(rdx15) + reinterpret_cast<unsigned char>(rax16)));
            if (__intrinsic()) 
                goto label_14; else 
                goto addr_14000603b_15;
        }
    }
    addr_14000611d_16:
    return al7;
    addr_1400060e8_6:
    if (!reinterpret_cast<int1_t>(rax11 == 0xffffffffffffffff)) {
        r9_18 = reinterpret_cast<void***>(rsi5 + 20);
        r8_19 = reinterpret_cast<int32_t*>(rsi5 + 12);
        rdx20 = rsi5 + 4;
        eax21 = reinterpret_cast<int32_t>(GetFileTime(rax11, rdx20, r8_19, r9_18));
        if (eax21) {
            CloseHandle(rax11, rdx20, r8_19, r9_18);
            goto addr_14000611b_2;
        } else {
            CloseHandle(rax11, rdx20, r8_19, r9_18);
            goto addr_1400060ed_20;
        }
    } else {
        addr_1400060ed_20:
        al7 = 0;
        goto addr_14000611d_16;
    }
    label_14:
    rax17 = reinterpret_cast<void**>(0xffffffffffffffff);
    addr_14000603b_15:
    rax22 = fun_140009214(rax17, __intrinsic(), r8, r9);
    r14_23 = rax22;
    if (!rax22) {
        *reinterpret_cast<uint32_t*>(&rcx24) = g140025c24;
        *reinterpret_cast<int32_t*>(&rcx24 + 4) = 0;
        fun_140003898(rcx24, 0x41b, r8, r9);
    }
    rcx25 = r14_23;
    r8_26 = 0;
    rdx27 = reinterpret_cast<unsigned char>(rbp10) - reinterpret_cast<unsigned char>(rdi6) + 1 >> 1;
    if (reinterpret_cast<unsigned char>(rdi6) > reinterpret_cast<unsigned char>(rbp10)) {
        rdx27 = 0;
    }
    if (rdx27) {
        rdi28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi6) - reinterpret_cast<unsigned char>(r14_23));
        do {
            eax29 = *reinterpret_cast<uint16_t*>(reinterpret_cast<uint64_t>(rdi28) + reinterpret_cast<unsigned char>(rcx25));
            ++r8_26;
            *reinterpret_cast<void***>(rcx25) = *reinterpret_cast<void***>(&eax29);
            rcx25 = rcx25 + 2;
        } while (r8_26 != rdx27);
    }
    eax30 = 92;
    while (*reinterpret_cast<void***>(rcx25) = *reinterpret_cast<void***>(&eax30), rcx25 = rcx25 + 2, eax30 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx8)), !!*reinterpret_cast<void***>(&eax30)) {
        rbx8 = rbx8 + 2;
    }
    *reinterpret_cast<void***>(rcx25) = reinterpret_cast<void**>(0);
    rbx8 = r14_23;
    goto addr_1400060b0_4;
}

void** fun_140006774(void** rcx, int64_t rdx, uint16_t** r8);

void** fun_1400065f8(void** rcx, void** rdx, void** r8, void** r9) {
    void* rsp5;
    uint32_t eax6;
    void** rsi7;
    void** v8;
    void** r14_9;
    void** rbx10;
    uint32_t eax11;
    int64_t rdi12;
    int32_t eax13;
    int32_t eax14;
    int32_t eax15;
    int32_t eax16;
    int32_t eax17;
    void** al18;
    void** r8_19;
    void** rcx20;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 32);
    eax6 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx));
    *reinterpret_cast<void***>(rdx) = reinterpret_cast<void**>(0);
    rsi7 = rdx;
    v8 = rcx;
    r14_9 = rcx;
    rbx10 = rcx;
    if (*reinterpret_cast<int16_t*>(&eax6)) {
        do {
            if (*reinterpret_cast<int16_t*>(&eax6) == 32) 
                break;
        } while (*reinterpret_cast<int16_t*>(&eax6) != 9 && (rbx10 = rbx10 + 2, eax6 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx10)), !!*reinterpret_cast<int16_t*>(&eax6)));
        v8 = rbx10;
    }
    eax11 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx10));
    rdi12 = reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(rbx10) - reinterpret_cast<unsigned char>(rcx)) >> 1;
    if (*reinterpret_cast<int16_t*>(&eax11)) {
        do {
            if (*reinterpret_cast<int16_t*>(&eax11) == 32) 
                continue;
            if (*reinterpret_cast<int16_t*>(&eax11) != 9) 
                break;
            rbx10 = rbx10 + 2;
            eax11 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx10));
        } while (*reinterpret_cast<int16_t*>(&eax11));
        v8 = rbx10;
    }
    eax13 = reinterpret_cast<int32_t>(_wcsnicmp());
    if (eax13 || rdi12 != 7) {
        eax14 = reinterpret_cast<int32_t>(_wcsnicmp(r14_9, "C", 11));
        if (eax14 || rdi12 != 11) {
            eax15 = reinterpret_cast<int32_t>(_wcsnicmp(r14_9, "E", 5));
            if (eax15 || rdi12 != 5) {
                eax16 = reinterpret_cast<int32_t>(_wcsnicmp(r14_9, "M", 7));
                if (eax16 || rdi12 != 7) {
                    eax17 = reinterpret_cast<int32_t>(_wcsnicmp(r14_9, "U", 5));
                    if (eax17 || rdi12 != 5) {
                        al18 = fun_140006774(r14_9, rdi12, reinterpret_cast<int64_t>(rsp5) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 + 64);
                        *reinterpret_cast<void***>(rsi7) = al18;
                        if (!al18) {
                            r8_19 = g1400364b8;
                            *reinterpret_cast<uint32_t*>(&rcx20) = g140025c20;
                            *reinterpret_cast<int32_t*>(&rcx20 + 4) = 0;
                            fun_140003898(rcx20, 0x3f9, r8_19, r9);
                        }
                        rbx10 = v8;
                    } else {
                        *reinterpret_cast<void***>(rsi7) = reinterpret_cast<void**>(13);
                    }
                } else {
                    *reinterpret_cast<void***>(rsi7) = reinterpret_cast<void**>(12);
                }
            } else {
                *reinterpret_cast<void***>(rsi7) = reinterpret_cast<void**>(11);
            }
        } else {
            *reinterpret_cast<void***>(rsi7) = reinterpret_cast<void**>(10);
        }
    } else {
        *reinterpret_cast<void***>(rsi7) = reinterpret_cast<void**>(9);
    }
    return rbx10;
}

void** fun_140009078(void** rcx, void** rdx);

signed char fun_140008bcc(void** rcx, void** rdx, void** r8, void** r9) {
    void* rsp5;
    uint64_t rax6;
    uint64_t v7;
    void** rdi8;
    int64_t rsi9;
    void** rcx10;
    void* rsp11;
    uint64_t rax12;
    uint64_t v13;
    void** r9_14;
    void* rsp15;
    void** rdi16;
    void*** rax17;
    void** rcx18;
    void*** rdx19;
    void** rax20;
    void** rbx21;
    void** rax22;
    int64_t rdx23;
    void** rax24;
    void* rsp25;
    void** rbx26;
    uint64_t rax27;
    void** rax28;
    void* rsp29;
    void** r8_30;
    void** rdx31;
    void** rsi32;
    void* rsp33;
    uint64_t rcx34;
    int64_t v35;
    void** rax36;
    void** rdi37;
    void** rax38;
    void* rsp39;
    void** rsi40;
    void** rax41;
    void** rax42;
    void* rsp43;
    void** rcx44;
    void** rbx45;
    void** rax46;
    void** rax47;
    void** rdx48;
    void** r8_49;
    void** rax50;
    void* rsp51;
    void** rcx52;
    void* rsp53;
    void** rax54;
    void* rsp55;
    void** rsi56;
    void** rax57;
    void** rax58;
    void** rdx59;
    int64_t rax60;
    void** rcx61;
    int64_t rcx62;
    int64_t rbp63;
    int64_t r14_64;
    uint32_t edx65;
    uint32_t ebx66;
    int64_t* rsi67;
    int64_t rdx68;
    int32_t eax69;
    void** rcx70;
    void*** r13_71;
    void** rcx72;
    void** rax73;
    void** r15_74;
    void** rcx75;
    void** rax76;
    void* rbx77;
    void** rax78;
    void** rax79;
    void* rsp80;
    void** rax81;
    void* rsp82;
    int64_t rax83;
    int1_t zf84;
    int64_t rcx85;
    void** rax86;
    uint32_t eax87;
    void** rax88;
    void** rdx89;
    void** rax90;
    void* rsp91;
    void** rcx92;
    void** rax93;
    void** ax94;
    void* rsp95;
    int64_t rcx96;
    uint64_t rcx97;
    void** rax98;
    void** rsi99;
    uint32_t eax100;
    void** rcx101;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 0x290);
    rax6 = g140015008;
    v7 = rax6 ^ reinterpret_cast<uint64_t>(rsp5);
    rdi8 = rcx;
    *reinterpret_cast<uint32_t*>(&rsi9) = 0;
    if (!*reinterpret_cast<void***>(rcx) || *reinterpret_cast<void***>(rcx) == 35) {
        *reinterpret_cast<uint32_t*>(&rcx10) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx10 + 4) = 0;
        fun_140003898(rcx10, 0x407, r8, r9);
        rsp11 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8 - 8 - 0x270);
        rax12 = g140015008;
        v13 = rax12 ^ reinterpret_cast<uint64_t>(rsp11);
        r9_14 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp11) + 96);
        _wsplitpath_s(rcx10, reinterpret_cast<uint64_t>(rsp11) + 80, 3, r9_14);
        rsp15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp11) - 8 + 8);
        rdi16 = reinterpret_cast<void**>(0xffffffffffffffff);
        rax17 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsp15) + 80);
        rcx18 = reinterpret_cast<void**>(0xffffffffffffffff);
        do {
            ++rcx18;
        } while (rax17[reinterpret_cast<unsigned char>(rcx18) * 2]);
        rdx19 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsp15) + 96);
        rax20 = reinterpret_cast<void**>(0xffffffffffffffff);
        do {
            ++rax20;
        } while (rdx19[reinterpret_cast<unsigned char>(rax20) * 2]);
        rbx21 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax20 + 1) + reinterpret_cast<unsigned char>(rcx18));
        rax22 = reinterpret_cast<void**>(2 * reinterpret_cast<unsigned char>(rbx21));
        if (!__intrinsic()) 
            goto addr_14000910d_8;
    } else {
        rdx23 = reinterpret_cast<int64_t>("\t");
        rax24 = reinterpret_cast<void**>(wcspbrk());
        rsp25 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
        rbx26 = rax24;
        rax27 = 0xffffffffffffffff;
        if (!rbx26) {
            do {
                ++rax27;
            } while (*reinterpret_cast<void***>(rdi8 + rax27 * 2));
            rbx26 = rdi8 + rax27 * 2;
            goto addr_140008c87_12;
        } else {
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx26) == 35)) {
                *reinterpret_cast<uint32_t*>(&rsi9) = 35;
            }
            *reinterpret_cast<void***>(rbx26) = reinterpret_cast<void**>(0);
            if (*reinterpret_cast<int16_t*>(&rsi9)) 
                goto addr_140008c87_12; else 
                goto addr_140008c41_16;
        }
    }
    rax22 = reinterpret_cast<void**>(0xffffffffffffffff);
    addr_14000910d_8:
    rax28 = fun_140009214(rax22, __intrinsic(), 3, r9_14, rax22, __intrinsic());
    rsp29 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp15) - 8 + 8);
    r8_30 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp29) + 80);
    rdx31 = rbx21;
    rsi32 = rax28;
    _wmakepath_s(rax28, rdx31, r8_30, reinterpret_cast<uint64_t>(rsp29) + 96);
    rsp33 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp29) - 8 + 8);
    do {
        ++rdi16;
    } while (*reinterpret_cast<void***>(rsi32 + reinterpret_cast<unsigned char>(rdi16) * 2));
    if (92 == *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rsi32 + reinterpret_cast<unsigned char>(rdi16) * 2) - 2) || 47 == *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rsi32 + reinterpret_cast<unsigned char>(rdi16) * 2) - 2)) {
        *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsi32 + reinterpret_cast<unsigned char>(rdi16) * 2) - 2) = reinterpret_cast<void**>(0);
    }
    rcx34 = v13 ^ reinterpret_cast<uint64_t>(rsp33);
    fun_140010130(rcx34, rdx31, r8_30, rcx34, rdx31, r8_30);
    goto v35;
    addr_140008c87_12:
    if (reinterpret_cast<unsigned char>(rbx26) > reinterpret_cast<unsigned char>(rdi8)) {
        do {
            rax36 = rbx26 + 0xfffffffffffffffe;
            if (*reinterpret_cast<void***>(rax36) == 32) 
                continue;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rax36) == 9)) 
                break;
            rbx26 = rax36;
        } while (reinterpret_cast<unsigned char>(rax36) > reinterpret_cast<unsigned char>(rdi8));
    }
    *reinterpret_cast<void***>(rbx26) = reinterpret_cast<void**>(0);
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi8) == 60) && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx26 + 0xfffffffffffffffe) == 62)) {
        rdi37 = rdi8 + 2;
        *reinterpret_cast<void***>(rbx26 + 0xfffffffffffffffe) = reinterpret_cast<void**>(0);
        rax38 = fun_14000e6a4(rdi37, rdi37);
        rsp39 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp25) - 8 + 8);
        rsi40 = rax38;
        if (rax38 == rdi37) {
            rax41 = fun_14000dcc4(rdi37, rdi37);
            rsp39 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp39) - 8 + 8);
            rsi40 = rax41;
        }
        rax42 = fun_14000918c("I", "I");
        rsp43 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp39) - 8 + 8);
        if (!rax42) {
            rcx44 = reinterpret_cast<void**>(0);
        } else {
            rcx44 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rax42 + 16) + 8);
        }
        if (!rcx44) {
            rbx45 = reinterpret_cast<void**>(0);
        } else {
            rax46 = fun_14000dcc4(rcx44, rcx44);
            rax47 = fun_14000e6a4(rax46, rax46);
            rsp43 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp43) - 8 + 8 - 8 + 8);
            rbx45 = rax47;
            if (rax47 != rax46) {
                free(rax46, rdx23, r8);
                rsp43 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp43) - 8 + 8);
            }
        }
        r9 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp43) + 40);
        rdx48 = rsi40;
        r8_49 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp43) + 48);
        rax50 = fun_140005e6c(rbx45, rdx48, r8_49, r9);
        rsp51 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp43) - 8 + 8);
        rdi8 = rax50;
        if (!rax50) {
            *reinterpret_cast<uint32_t*>(&rcx52) = g140025c20;
            *reinterpret_cast<int32_t*>(&rcx52 + 4) = 0;
            r8_49 = rsi40;
            rdx48 = reinterpret_cast<void**>(0x41c);
            *reinterpret_cast<int32_t*>(&rdx48 + 4) = 0;
            fun_140003898(rcx52, 0x41c, r8_49, r9);
            rsp51 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp51) - 8 + 8);
        }
        if (rbx45) {
            free(rbx45, rdx48, r8_49, r9);
            rsp51 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp51) - 8 + 8);
        }
        free(rsi40, rdx48, r8_49, r9);
        rsp53 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp51) - 8 + 8);
        goto addr_140008f17_40;
    }
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi8) == 34) && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx26 + 0xfffffffffffffffe) == 34)) {
        *reinterpret_cast<void***>(rbx26 + 0xfffffffffffffffe) = reinterpret_cast<void**>(0);
        rdi8 = rdi8 + 2;
    }
    rax54 = fun_14000e6a4(rdi8, rdi8);
    rsp55 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp25) - 8 + 8);
    rsi56 = rax54;
    if (rax54 == rdi8) {
        rax57 = fun_14000dcc4(rdi8, rdi8);
        rsp55 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp55) - 8 + 8);
        rsi56 = rax57;
    }
    r8_49 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp55) + 40);
    rax58 = fun_140005ca8(rsi56, reinterpret_cast<uint64_t>(rsp55) + 48, r8_49, r9);
    rsp53 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp55) - 8 + 8);
    if (rax58) 
        goto addr_140008f17_40;
    rdx59 = reinterpret_cast<void**>("\\");
    rax60 = reinterpret_cast<int64_t>(wcspbrk(rsi56, "\\"));
    rsp53 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp53) - 8 + 8);
    if (!rax60) 
        goto addr_140008de3_47;
    r8_49 = rsi56;
    addr_140008f07_49:
    *reinterpret_cast<uint32_t*>(&rcx61) = g140025c20;
    *reinterpret_cast<int32_t*>(&rcx61 + 4) = 0;
    fun_140003898(rcx61, 0x41c, r8_49, r9);
    rsp53 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp53) - 8 + 8);
    goto addr_140008f17_40;
    addr_140008de3_47:
    rcx62 = reinterpret_cast<int32_t>(g140036ce8);
    rbp63 = rcx62;
    r14_64 = rcx62;
    if (*reinterpret_cast<int32_t*>(&rcx62) < reinterpret_cast<int32_t>(0)) {
        addr_140008ef2_50:
        free(rsi56, rdx59);
        rsp53 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp53) - 8 + 8);
        if (*reinterpret_cast<int32_t*>(&rbp63) >= reinterpret_cast<int32_t>(0)) {
            addr_140008f17_40:
            edx65 = g140036ce8;
            ebx66 = 0;
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx65) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx65 == 0))) {
                rsi67 = reinterpret_cast<int64_t*>(0x140036cf8);
                do {
                    rdx68 = *rsi67;
                    eax69 = reinterpret_cast<int32_t>(_wcsicmp(rdi8, rdx68, r8_49, r9));
                    rsp53 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp53) - 8 + 8);
                    if (!eax69) {
                        *reinterpret_cast<uint32_t*>(&rcx70) = g140025c20;
                        *reinterpret_cast<int32_t*>(&rcx70 + 4) = 0;
                        r8_49 = rdi8;
                        fun_140003898(rcx70, 0x430, r8_49, r9);
                        rsp53 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp53) - 8 + 8);
                    }
                    edx65 = g140036ce8;
                    ++ebx66;
                    rsi67 = rsi67 + 3;
                } while (reinterpret_cast<int32_t>(ebx66) < reinterpret_cast<int32_t>(edx65));
            }
        } else {
            r8_49 = rdi8;
            goto addr_140008f07_49;
        }
    } else {
        r13_71 = reinterpret_cast<void***>(0x140036cf0 + (rcx62 + rcx62 * 2) * 8 + 8);
        while (1) {
            rcx72 = g140026490;
            if (*reinterpret_cast<uint32_t*>(&rbp63) != *reinterpret_cast<uint32_t*>(&rcx62)) {
                rcx72 = *r13_71;
            }
            rax73 = fun_140009078(rcx72, rdx59);
            rsp53 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp53) - 8 + 8);
            *reinterpret_cast<int32_t*>(&rdx59) = 0;
            *reinterpret_cast<int32_t*>(&rdx59 + 4) = 0;
            r15_74 = rax73;
            if (!rax73) {
                addr_140008ec5_60:
                *reinterpret_cast<uint32_t*>(&rbp63) = *reinterpret_cast<uint32_t*>(&rbp63) - 1;
                r13_71 = r13_71 - 24;
                --r14_64;
                if (r14_64 < 0) 
                    goto addr_140008eeb_61;
            } else {
                rcx75 = reinterpret_cast<void**>(0xffffffffffffffff);
                do {
                    ++rcx75;
                } while (*reinterpret_cast<void***>(rsi56 + reinterpret_cast<unsigned char>(rcx75) * 2));
                rax76 = reinterpret_cast<void**>(0xffffffffffffffff);
                do {
                    ++rax76;
                } while (*reinterpret_cast<void***>(r15_74 + reinterpret_cast<unsigned char>(rax76) * 2));
                rbx77 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax76 + 2) + reinterpret_cast<unsigned char>(rcx75));
                rax78 = reinterpret_cast<void**>(2 * reinterpret_cast<uint64_t>(rbx77));
                if (__intrinsic()) 
                    goto label_67; else 
                    goto addr_140008e57_68;
            }
            *reinterpret_cast<uint32_t*>(&rcx62) = g140036ce8;
            continue;
            label_67:
            rax78 = reinterpret_cast<void**>(0xffffffffffffffff);
            addr_140008e57_68:
            rax79 = fun_140009214(rax78, __intrinsic(), 0xffffffffffffffff, r9);
            wcscpy_s(rax79, rbx77, r15_74);
            wcscat_s(rax79, rbx77, "\\");
            wcscat_s(rax79, rbx77, rsi56);
            rsp80 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp53) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
            r8_49 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp80) + 40);
            rdx59 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp80) + 48);
            rax81 = fun_140005ca8(rax79, rdx59, r8_49, r9);
            rsp82 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp80) - 8 + 8);
            if (rax81) 
                goto addr_140008edf_70;
            free(r15_74, rdx59);
            free(rax79, rdx59);
            rsp53 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp82) - 8 + 8 - 8 + 8);
            goto addr_140008ec5_60;
        }
    }
    rax83 = reinterpret_cast<int32_t>(edx65);
    zf84 = g14002648b == 0;
    g140036ce8 = edx65 + 1;
    g140025c24 = 0;
    rcx85 = rax83 + rax83 * 2;
    rax86 = g140026480;
    *reinterpret_cast<void***>(0x140036cf0 + rcx85 * 8 + 16) = rax86;
    eax87 = g140025c20;
    *reinterpret_cast<uint32_t*>(0x140036cf0 + rcx85 * 8) = eax87;
    rax88 = g140026490;
    *reinterpret_cast<void***>(0x140036cf0 + rcx85 * 8 + 8) = rax88;
    if (!zf84) {
        fun_14000bfe0("I", rdi8, r8_49, r9);
        rsp53 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp53) - 8 + 8);
    }
    rdx89 = reinterpret_cast<void**>("r");
    rax90 = fun_14000fd2c(rdi8, "r", r8_49, r9);
    rsp91 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp53) - 8 + 8);
    g140026480 = rax90;
    if (!rax90) {
        *reinterpret_cast<uint32_t*>(&rcx92) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx92 + 4) = 0;
        r8_49 = rdi8;
        rdx89 = reinterpret_cast<void**>(0x41c);
        *reinterpret_cast<int32_t*>(&rdx89 + 4) = 0;
        fun_140003898(rcx92, 0x41c, r8_49, r9);
        rsp91 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp91) - 8 + 8);
    }
    rax93 = fun_14000dcc4(rdi8, rdi8);
    g140026490 = rax93;
    g140025c20 = 1;
    g140015041 = reinterpret_cast<void**>(1);
    ax94 = fun_14000613c();
    rsp95 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp91) - 8 + 8 - 8 + 8);
    if (ax94 == 32 || ax94 == 9) {
        g140015041 = reinterpret_cast<void**>(0);
    } else {
        rdx89 = g140026480;
        *reinterpret_cast<uint32_t*>(&rcx96) = reinterpret_cast<uint16_t>(ax94);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx96) + 4) = 0;
        g140015041 = reinterpret_cast<void**>(1);
        ungetwc(rcx96, rdx89, r8_49, r9);
        rsp95 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp95) - 8 + 8);
        --g140025c20;
    }
    rcx97 = v7 ^ reinterpret_cast<uint64_t>(rsp95);
    rax98 = fun_140010130(rcx97, rdx89, r8_49, rcx97, rdx89, r8_49);
    return *reinterpret_cast<signed char*>(&rax98);
    addr_140008eeb_61:
    goto addr_140008ef2_50;
    addr_140008edf_70:
    rdi8 = rax79;
    free(r15_74, rdx59);
    rsp53 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp82) - 8 + 8);
    goto addr_140008eeb_61;
    addr_140008c41_16:
    rsi99 = rbx26 + 2;
    while (eax100 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rsi99)), !!*reinterpret_cast<void***>(&eax100)) {
        if (*reinterpret_cast<void***>(&eax100) == 35) 
            goto addr_140008c87_12;
        if (*reinterpret_cast<void***>(&eax100) != 32 && *reinterpret_cast<void***>(&eax100) != 9) {
            *reinterpret_cast<uint32_t*>(&rcx101) = g140025c20;
            *reinterpret_cast<int32_t*>(&rcx101 + 4) = 0;
            r8 = rsi99;
            *reinterpret_cast<void***>(&rdx23) = reinterpret_cast<void**>(0x409);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = 0;
            fun_140003898(rcx101, 0x409, r8, r9);
            rsp25 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp25) - 8 + 8);
        }
        rsi99 = rsi99 + 2;
    }
    goto addr_140008c87_12;
}

unsigned char fun_14000d1f8(void** rcx, unsigned char dl, void** r8, void** r9);

void** fun_1400069a4(void** rcx, unsigned char dl, void** r8, void** r9) {
    void** rdx2;
    void** r8_5;
    void** rax6;
    void** rcx7;
    unsigned char al8;
    int1_t zf9;
    unsigned char v10;
    void** rax11;
    void** rcx12;
    unsigned char al13;
    void** rax14;
    void** rcx15;
    void** rax16;
    uint32_t eax17;
    unsigned char al18;
    void** rax19;

    *reinterpret_cast<unsigned char*>(&rdx2) = dl;
    r8_5 = rcx;
    if (*reinterpret_cast<unsigned char*>(&rdx2) == 1) 
        goto addr_140006aa7_2;
    if (*reinterpret_cast<unsigned char*>(&rdx2) == 2) {
        addr_140006a5d_4:
        rax6 = reinterpret_cast<void**>(static_cast<int64_t>(reinterpret_cast<int32_t>(g140015044)));
        if (*reinterpret_cast<int32_t*>(&rax6) < reinterpret_cast<int32_t>(0) || (rcx = rax6, (*reinterpret_cast<unsigned char*>(rax6 + 0x1400364c0) & 9) == 0)) {
            *reinterpret_cast<uint32_t*>(&rcx7) = g140025c20;
            *reinterpret_cast<int32_t*>(&rcx7 + 4) = 0;
            rdx2 = reinterpret_cast<void**>(0x3fd);
            *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
            fun_140003898(rcx7, 0x3fd, r8_5, r9);
            goto addr_140006aa7_2;
        } else {
            al8 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rax6 + 0x1400364c0) & 0xf6);
            *reinterpret_cast<unsigned char*>(rcx + 0x1400364c0) = al8;
            if (al8 & 4) 
                goto addr_140006a09_7;
            if (!(al8 & 2)) {
                *reinterpret_cast<unsigned char*>(&rax6) = reinterpret_cast<unsigned char>(al8 | 2);
            } else {
                *reinterpret_cast<unsigned char*>(&rax6) = reinterpret_cast<unsigned char>(al8 & 0xfd);
            }
            *reinterpret_cast<unsigned char*>(rcx + 0x1400364c0) = *reinterpret_cast<unsigned char*>(&rax6);
            zf9 = (*reinterpret_cast<unsigned char*>(&rax6) & 2) == 0;
        }
    } else {
        if (*reinterpret_cast<unsigned char*>(&rdx2) <= 2) 
            goto addr_140006a0e_13;
        if (*reinterpret_cast<unsigned char*>(&rdx2) <= 5) 
            goto addr_140006a14_15; else 
            goto addr_1400069c6_16;
    }
    addr_140006a07_17:
    if (!zf9) {
        addr_140006a0e_13:
        return rax6;
    } else {
        addr_140006a09_7:
        rax6 = fun_140006b10(rcx, rdx2, r8_5, r9, v10);
        goto addr_140006a0e_13;
    }
    addr_140006a14_15:
    rax11 = reinterpret_cast<void**>(static_cast<int64_t>(reinterpret_cast<int32_t>(g140015044)));
    if (*reinterpret_cast<int32_t*>(&rax11) < 0 || (rcx = rax11, (*reinterpret_cast<unsigned char*>(rax11 + 0x1400364c0) & 9) == 0)) {
        *reinterpret_cast<uint32_t*>(&rcx12) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx12 + 4) = 0;
        rdx2 = reinterpret_cast<void**>(0x3fd);
        *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
        fun_140003898(rcx12, 0x3fd, r8_5, r9);
        goto addr_140006a5d_4;
    } else {
        al13 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rax11 + 0x1400364c0) & 0xfe) | 8);
        *reinterpret_cast<unsigned char*>(rcx + 0x1400364c0) = al13;
        if (!(al13 & 4)) {
            if (!(al13 & 2)) 
                goto addr_140006aec_21;
            *reinterpret_cast<unsigned char*>(rcx + 0x1400364c0) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al13 & 0xfd) | 4);
            goto addr_140006a09_7;
        }
    }
    addr_1400069c6_16:
    if (*reinterpret_cast<unsigned char*>(&rdx2) <= 7) {
        addr_140006aa7_2:
        *reinterpret_cast<uint32_t*>(&rax14) = g140015044;
        if (*reinterpret_cast<uint32_t*>(&rax14) == 15) {
            *reinterpret_cast<uint32_t*>(&rcx15) = g140025c20;
            *reinterpret_cast<int32_t*>(&rcx15 + 4) = 0;
            rdx2 = reinterpret_cast<void**>(0x3fb);
            *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
            rax14 = fun_140003898(rcx15, 0x3fb, r8_5, r9);
        }
    } else {
        if (*reinterpret_cast<unsigned char*>(&rdx2) != 8) 
            goto addr_140006a0e_13;
        *reinterpret_cast<uint32_t*>(&rax16) = g140015044;
        if (*reinterpret_cast<int32_t*>(&rax16) < reinterpret_cast<int32_t>(0)) {
            *reinterpret_cast<uint32_t*>(&rcx) = g140025c20;
            *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
            rdx2 = reinterpret_cast<void**>(0x401);
            *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
            rax16 = fun_140003898(rcx, 0x401, r8_5, r9);
        }
        *reinterpret_cast<uint32_t*>(&rax6) = *reinterpret_cast<uint32_t*>(&rax16) - 1;
        *reinterpret_cast<int32_t*>(&rax6 + 4) = 0;
        g140015044 = *reinterpret_cast<uint32_t*>(&rax6);
        if (*reinterpret_cast<int32_t*>(&rax6) < reinterpret_cast<int32_t>(0)) 
            goto addr_140006a0e_13;
        rax6 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax6)));
        zf9 = (*reinterpret_cast<unsigned char*>(rax6 + 0x1400364c0) & 2) == 0;
        goto addr_140006a07_17;
    }
    eax17 = *reinterpret_cast<uint32_t*>(&rax14) + 1;
    rcx = reinterpret_cast<void**>(static_cast<int64_t>(reinterpret_cast<int32_t>(eax17)));
    g140015044 = eax17;
    *reinterpret_cast<unsigned char*>(rcx + 0x1400364c0) = 1;
    if (!eax17 || *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rcx + 0x1400364c0) - 1) & 2) {
        addr_140006aec_21:
        rcx = r8_5;
        al18 = fun_14000d1f8(rcx, *reinterpret_cast<unsigned char*>(&rdx2), r8_5, r9);
        if (al18) {
            rax19 = reinterpret_cast<void**>(static_cast<int64_t>(reinterpret_cast<int32_t>(g140015044)));
            *reinterpret_cast<unsigned char*>(rax19 + 0x1400364c0) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rax19 + 0x1400364c0) | 2);
            return rax19;
        }
    } else {
        *reinterpret_cast<unsigned char*>(rcx + 0x1400364c0) = 5;
        goto addr_140006a09_7;
    }
}

void** fun_140006774(void** rcx, int64_t rdx, uint16_t** r8) {
    uint16_t** r15_4;
    int64_t rbx5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    int64_t rax13;
    uint16_t* rcx14;
    uint32_t eax15;
    uint16_t* rbp16;
    int64_t rax17;
    int64_t rdi18;
    uint32_t eax19;
    int32_t eax20;
    int32_t eax21;
    int32_t eax22;

    r15_4 = r8;
    *reinterpret_cast<uint32_t*>(&rbx5) = 0;
    eax6 = reinterpret_cast<int32_t>(_wcsnicmp());
    if (eax6 || rdx != 2) {
        eax7 = reinterpret_cast<int32_t>(_wcsnicmp(rcx, "I", 5));
        if (eax7 || rdx != 5) {
            eax8 = reinterpret_cast<int32_t>(_wcsnicmp(rcx, "I", 6));
            if (eax8 || rdx != 6) {
                eax9 = reinterpret_cast<int32_t>(_wcsnicmp(rcx, "E", 4));
                if (eax9 || rdx != 4) {
                    eax10 = reinterpret_cast<int32_t>(_wcsnicmp(rcx, "E", 6));
                    if (eax10 || rdx != 6) {
                        eax11 = reinterpret_cast<int32_t>(_wcsnicmp(rcx, "E", 9));
                        if (eax11 || rdx != 9) {
                            eax12 = reinterpret_cast<int32_t>(_wcsnicmp(rcx, "E", 10));
                            if (eax12 || rdx != 10) {
                                rax13 = reinterpret_cast<int64_t>(_wcsnicmp(rcx, "E", 5));
                                if (!*reinterpret_cast<int32_t*>(&rax13) && (*reinterpret_cast<uint32_t*>(&rbx5) = 0, rdx == 5)) {
                                    *reinterpret_cast<uint32_t*>(&rbx5) = static_cast<uint32_t>(rax13 + 8);
                                }
                            } else {
                                addr_14000695d_10:
                                *reinterpret_cast<void***>(&rbx5) = reinterpret_cast<void**>(5);
                            }
                        } else {
                            addr_140006939_11:
                            *reinterpret_cast<void***>(&rbx5) = reinterpret_cast<void**>(4);
                        }
                    } else {
                        addr_140006913_12:
                        *reinterpret_cast<void***>(&rbx5) = reinterpret_cast<void**>(3);
                    }
                } else {
                    rcx14 = *r15_4;
                    eax15 = *rcx14;
                    if (*reinterpret_cast<int16_t*>(&eax15)) {
                        rbp16 = rcx14;
                        do {
                            if (*reinterpret_cast<int16_t*>(&eax15) == 32) 
                                break;
                        } while (*reinterpret_cast<int16_t*>(&eax15) != 9 && (++rcx14, eax15 = *rcx14, !!*reinterpret_cast<int16_t*>(&eax15)));
                        rax17 = reinterpret_cast<int64_t>(rcx14) - reinterpret_cast<int64_t>(rbp16) >> 1;
                        *reinterpret_cast<int32_t*>(&rdi18) = *reinterpret_cast<int32_t*>(&rax17);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = 0;
                        while ((eax19 = *rcx14, !!*reinterpret_cast<int16_t*>(&eax19)) && (*reinterpret_cast<int16_t*>(&eax19) == 32 || *reinterpret_cast<int16_t*>(&eax19) == 9)) {
                            ++rcx14;
                        }
                        *r15_4 = rcx14;
                        eax20 = reinterpret_cast<int32_t>(_wcsnicmp(rbp16, "I", 2));
                        if (eax20) 
                            goto addr_1400068ad_21;
                        if (rdi18 == 2) 
                            goto addr_140006913_12;
                        addr_1400068ad_21:
                        eax21 = reinterpret_cast<int32_t>(_wcsnicmp(rbp16, "I", 5));
                        if (eax21) 
                            goto addr_1400068c9_23;
                        if (rdi18 == 5) 
                            goto addr_140006939_11;
                        addr_1400068c9_23:
                        eax22 = reinterpret_cast<int32_t>(_wcsnicmp(rbp16, "I", 6));
                        if (!eax22 && rdi18 == 6) {
                            goto addr_14000695d_10;
                        }
                    } else {
                        *reinterpret_cast<void***>(&rbx5) = reinterpret_cast<void**>(2);
                    }
                }
            } else {
                *reinterpret_cast<void***>(&rbx5) = reinterpret_cast<void**>(7);
            }
        } else {
            *reinterpret_cast<void***>(&rbx5) = reinterpret_cast<void**>(6);
        }
    } else {
        *reinterpret_cast<void***>(&rbx5) = reinterpret_cast<void**>(1);
    }
    return *reinterpret_cast<void***>(&rbx5);
}

unsigned char fun_14000d1f8(void** rcx, unsigned char dl, void** r8, void** r9) {
    void** rbx5;
    uint32_t edx6;
    unsigned char al7;
    uint32_t edx8;
    uint32_t edx9;
    unsigned char al10;

    rbx5 = rcx;
    if (!*reinterpret_cast<void***>(rcx)) {
        *reinterpret_cast<uint32_t*>(&rcx) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
        fun_140003898(rcx, 0x3fa, r8, r9);
    }
    edx6 = dl - 4;
    if (!edx6) {
        addr_14000d259_4:
        al7 = fun_14000d180(rbx5);
    } else {
        edx8 = edx6 - 1;
        if (!edx8) 
            goto addr_14000d24a_6;
        edx9 = edx8 - 1;
        if (!edx9) 
            goto addr_14000d259_4; else 
            goto addr_14000d237_8;
    }
    addr_14000d261_9:
    return al7;
    addr_14000d237_8:
    if (edx9 == 1) {
        addr_14000d24a_6:
        al10 = fun_14000d180(rbx5);
        al7 = reinterpret_cast<uint1_t>(al10 == 0);
        goto addr_14000d261_9;
    } else {
        g1400370d8 = rbx5;
        al7 = fun_14000cf64(rcx);
        goto addr_14000d261_9;
    }
}

void** fun_14000fd2c(void** rcx, void** rdx, void** r8, void** r9) {
    int16_t* rax5;
    void** r8_6;
    uint32_t eax7;
    void** rcx8;

    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rcx) == 34)) {
        rax5 = reinterpret_cast<int16_t*>(wcsrchr());
        r8_6 = rcx + 2;
        *rax5 = 0;
        eax7 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r8_6));
        *reinterpret_cast<void***>(rcx) = *reinterpret_cast<void***>(&eax7);
        while (*reinterpret_cast<void***>(&eax7)) {
            rcx8 = r8_6;
            r8_6 = r8_6 + 2;
            eax7 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r8_6));
            *reinterpret_cast<void***>(rcx8) = *reinterpret_cast<void***>(&eax7);
        }
    }
    goto _wfsopen;
}

struct s40 {
    signed char[1] pad1;
    void** f1;
};

struct s41 {
    signed char[32] pad32;
    void** f20;
};

void** fun_140007294(void*** rcx, void*** rdx, void** r8, void** r9) {
    void* rsp5;
    uint64_t* rbp6;
    uint64_t rax7;
    uint64_t v8;
    void** rdi9;
    struct s40* rbx10;
    struct s40* r8_11;
    void*** r14_12;
    struct s40* rax13;
    void* r15_14;
    void* rax15;
    void* rcx16;
    struct s41* rsp17;
    void** rsi18;
    void** rax19;
    uint32_t ecx20;
    int64_t* rsp21;
    void** r8_22;
    int64_t* rsp23;
    void* rsp24;
    void** rcx25;
    void** rbx26;
    void** rdx27;
    int64_t* rsp28;
    void** rax29;
    int64_t* rsp30;
    void** rax31;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 48);
    rbp6 = reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rsp5) + 32);
    rax7 = g140015008;
    v8 = rax7 ^ reinterpret_cast<uint64_t>(rbp6);
    rdi9 = *rcx;
    rbx10 = reinterpret_cast<struct s40*>(0xffffffffffffffff);
    r8_11 = reinterpret_cast<struct s40*>(0xffffffffffffffff);
    r14_12 = rcx;
    do {
        r8_11 = reinterpret_cast<struct s40*>(&r8_11->f1);
    } while (*reinterpret_cast<void***>(rdi9 + reinterpret_cast<uint64_t>(r8_11) * 2));
    rax13 = reinterpret_cast<struct s40*>(0xffffffffffffffff);
    do {
        rax13 = reinterpret_cast<struct s40*>(&rax13->f1);
    } while (rdx[reinterpret_cast<uint64_t>(rax13) * 2]);
    r15_14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax13) + 0xffffffffffffffff + reinterpret_cast<uint64_t>(r8_11));
    rax15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r15_14) + reinterpret_cast<uint64_t>(r15_14));
    rcx16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax15) + 15);
    if (reinterpret_cast<uint64_t>(rcx16) <= reinterpret_cast<uint64_t>(rax15)) {
        rcx16 = reinterpret_cast<void*>(0xffffffffffffff0);
    }
    fun_140010df0();
    rsp17 = reinterpret_cast<struct s41*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8 - (reinterpret_cast<uint64_t>(rcx16) & 0xfffffffffffffff0));
    rsi18 = reinterpret_cast<void**>(&rsp17->f20);
    rax19 = rsi18;
    while (1) {
        ecx20 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi9));
        if (*reinterpret_cast<void***>(&ecx20) == 60) {
            if (*reinterpret_cast<void***>(rdi9 + 2) == 60) 
                break;
            *reinterpret_cast<void***>(rax19) = reinterpret_cast<void**>(60);
        } else {
            *reinterpret_cast<void***>(rax19) = *reinterpret_cast<void***>(&ecx20);
        }
        rdi9 = rdi9 + 2;
        rax19 = rax19 + 2;
    }
    *reinterpret_cast<void***>(rax19) = reinterpret_cast<void**>(0);
    rsp21 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp17) - 8);
    *rsp21 = 0x140007359;
    wcscat_s(rsi18, r15_14, rdx);
    r8_22 = rdi9 + 4;
    rsp23 = rsp21 + 1 - 1;
    *rsp23 = 0x140007369;
    wcscat_s(rsi18, r15_14, r8_22);
    rsp24 = reinterpret_cast<void*>(rsp23 + 1);
    do {
        rbx10 = reinterpret_cast<struct s40*>(&rbx10->f1);
    } while (0);
    rcx25 = *r14_12;
    rbx26 = reinterpret_cast<void**>(&rbx10->f1);
    rdx27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx26) + reinterpret_cast<unsigned char>(rbx26));
    rsp28 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp24) - 8);
    *rsp28 = 0x140007382;
    rax29 = fun_140009274(rcx25, rdx27, r8_22, r9, rcx25, rdx27);
    *r14_12 = rax29;
    rsp30 = rsp28 + 1 - 1;
    *rsp30 = 0x140007394;
    wcscpy_s(rax29, rbx26, rsi18);
    *(rsp30 + 1 - 1) = 0x1400073a0;
    rax31 = fun_140010130(v8 ^ reinterpret_cast<uint64_t>(rbp6), rbx26, rsi18);
    return rax31;
}

int64_t wcsstr = 0x147fc;

int64_t fwrite = 0x14a88;

int64_t WideCharToMultiByte = 0x14524;

void** g14003d150;

struct s42 {
    signed char[5368959312] pad5368959312;
    void** f14003d150;
};

void** g400;

void fun_1400073bc(void** rcx, void** rdx, void** r8, void** r9) {
    signed char v5;
    void** v6;
    void** v7;
    void** v8;
    void** rdi9;
    void** r12_10;
    void** rcx11;
    signed char bl12;
    void** rsi13;
    unsigned char r14b14;
    void** rax15;
    void* rsp16;
    unsigned char v17;
    unsigned char r15b18;
    void** rdi19;
    void*** rax20;
    void** rax21;
    void* rsp22;
    void** rbp23;
    void** r8_24;
    int64_t rax25;
    void* rsp26;
    int64_t rbx27;
    unsigned char* rdi28;
    unsigned char* v29;
    int32_t eax30;
    void* rsp31;
    int32_t eax32;
    int32_t eax33;
    void** rcx34;
    int64_t rax35;
    void** rcx36;
    int32_t eax37;
    void* rsp38;
    void** rcx39;
    void** rax40;
    void** r15_41;
    void** rbx42;
    int32_t eax43;
    int64_t rdx44;
    int64_t rcx45;
    void** rcx46;
    void** rbp47;
    void** rbx48;
    int64_t r13_49;
    void** rdx50;
    int64_t rcx51;
    uint64_t rax52;
    int32_t eax53;
    uint64_t rax54;
    void** r12_55;
    void** r9_56;
    void** r8_57;
    void* rsp58;
    void** rax59;
    void** rbx60;
    int1_t zf61;
    void** rdi62;
    void* r14_63;
    int64_t rcx64;
    int32_t eax65;
    struct s42* rbx66;
    void** r8_67;
    void* rsp68;
    void* rbp69;
    void* rsp70;
    uint64_t rax71;
    uint64_t v72;
    signed char v73;
    void** rdx74;
    struct s7* rax75;
    void* rsp76;
    void** rax77;
    void* rsp78;
    void** r14_79;
    int1_t zf80;
    void** rax81;
    void** rax82;
    void* rsp83;
    void** v84;
    void** r13_85;
    void** rax86;
    void* rsp87;
    void** rax88;
    void* rsp89;
    void** r12_90;
    void** rax91;
    void* rsp92;
    void** r15_93;
    void** rcx94;
    struct s8* rax95;
    void*** rdx96;
    uint64_t r8_97;
    void* rsp98;
    void** rcx99;
    int32_t eax100;
    void* rsp101;
    void** r8_102;
    int32_t eax103;
    void* rsp104;
    void* rsp105;
    void** rax106;
    void** rcx107;
    int64_t rax108;
    void* rsp109;
    int64_t rax110;
    int16_t* rcx111;
    void* rdi112;
    void** rbx113;
    void** rdx114;
    void** rcx115;
    void* rdi116;
    void*** rdx117;
    void* rsp118;
    void** rcx119;
    void** rax120;
    void** rbx121;
    struct s9* rax122;
    void* rsp123;
    uint64_t rax124;
    void** rax125;
    void* rsp126;
    void** rax127;
    void** rbx128;
    void** rax129;
    void** rcx130;
    void* rsp131;
    void** rax132;
    uint64_t rcx133;
    int64_t v134;
    void* bl135;
    void** ax136;
    void** rcx137;
    void** ax138;
    void** rcx139;
    int1_t zf140;
    int64_t v141;
    void** rdx142;
    int64_t rcx143;

    v5 = *reinterpret_cast<signed char*>(&r9);
    v6 = r8;
    v7 = rdx;
    v8 = rcx;
    rdi9 = rdx;
    r12_10 = rcx;
    rcx11 = *reinterpret_cast<void***>(r8);
    bl12 = *reinterpret_cast<signed char*>(&r9);
    rsi13 = r8;
    r14b14 = 1;
    rax15 = reinterpret_cast<void**>(wcsstr(rcx11, "<"));
    rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 88 - 8 + 8);
    v17 = 0;
    r15b18 = 0;
    if (rax15 && (rax15 == *reinterpret_cast<void***>(rsi13) || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rax15 + 0xfffffffffffffffe) == 10))) {
        rdi19 = rax15 + 4;
        rax20 = reinterpret_cast<void***>(wcschr(rdi19, 10));
        if (rax20) {
            *rax20 = reinterpret_cast<void**>(0);
        }
        rax21 = fun_14000dcc4(rdi19, rdi19);
        rsp22 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8 - 8 + 8);
        rbp23 = rax21;
        if (rax20) {
            *rax20 = reinterpret_cast<void**>(10);
        }
        r8_24 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp22) + 72);
        rax25 = reinterpret_cast<int64_t>(wcstok_s(rbp23, ",", r8_24));
        rsp26 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp22) - 8 + 8);
        rbx27 = rax25;
        if (rax25) {
            rdi28 = v29;
            do {
                eax30 = reinterpret_cast<int32_t>(_wcsicmp(rbx27, "k", r8_24));
                rsp31 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp26) - 8 + 8);
                if (eax30) {
                    eax32 = reinterpret_cast<int32_t>(_wcsicmp(rbx27, "n", r8_24));
                    rsp31 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp31) - 8 + 8);
                    if (eax32) {
                        eax33 = reinterpret_cast<int32_t>(_wcsicmp(rbx27, "u", r8_24));
                        rsp31 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp31) - 8 + 8);
                        if (eax33) {
                            *reinterpret_cast<uint32_t*>(&rcx34) = g140025c20;
                            *reinterpret_cast<int32_t*>(&rcx34 + 4) = 0;
                            fun_140003898(rcx34, 0x446, r8_24, r9);
                            rsp31 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp31) - 8 + 8);
                        } else {
                            r15b18 = 1;
                        }
                    } else {
                        *rdi28 = 0;
                    }
                } else {
                    *rdi28 = 1;
                }
                r8_24 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp31) + 72);
                rax35 = reinterpret_cast<int64_t>(wcstok_s());
                rsp26 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp31) - 8 + 8);
                rbx27 = rax35;
            } while (rax35);
            v17 = r15b18;
        }
        free(rbp23, ",", r8_24);
        rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp26) - 8 + 8);
        if (r15b18) {
            r9 = r12_10;
            fwrite(0x1400120b4);
            rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
        }
        bl12 = v5;
        rdi9 = v7;
    }
    rcx36 = *reinterpret_cast<void***>(rsi13);
    eax37 = reinterpret_cast<int32_t>(wcsncmp(rcx36, "<", 2, r9));
    rsp38 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
    if (!eax37) {
        addr_1400077b5_21:
        *reinterpret_cast<void***>(rsi13) = *reinterpret_cast<void***>(rsi13) + 4;
    } else {
        while (rcx39 = *reinterpret_cast<void***>(rsi13), rax40 = reinterpret_cast<void**>(wcschr(rcx39, 10, 2, r9)), rsp38 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp38) - 8 + 8), r15_41 = rax40, !!rax40) {
            if (!bl12) {
                addr_1400076e5_24:
                if (!v17) {
                    rbx42 = *reinterpret_cast<void***>(rsi13);
                    while (reinterpret_cast<unsigned char>(rbx42) < reinterpret_cast<unsigned char>(r15_41)) {
                        eax43 = reinterpret_cast<int32_t>(WideCharToMultiByte());
                        rsp38 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp38) - 8 + 8);
                        if (eax43) {
                            fwrite(reinterpret_cast<int64_t>(rsp38) + 72, static_cast<int64_t>(eax43), 1, r12_10);
                            rsp38 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp38) - 8 + 8);
                        }
                        rbx42 = rbx42 + 2;
                    }
                    *reinterpret_cast<int32_t*>(&rdx44) = 2;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx44) + 4) = 0;
                    rcx45 = reinterpret_cast<int64_t>("\r\n");
                } else {
                    rcx46 = *reinterpret_cast<void***>(rsi13);
                    fwrite(rcx46);
                    rsp38 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp38) - 8 + 8);
                    *reinterpret_cast<int32_t*>(&rdx44) = 4;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx44) + 4) = 0;
                    rcx45 = reinterpret_cast<int64_t>("\r");
                }
            } else {
                rbp47 = *reinterpret_cast<void***>(rsi13);
                *reinterpret_cast<void***>(rax40) = reinterpret_cast<void**>(0);
                rbx48 = rbp47;
                *reinterpret_cast<unsigned char*>(&r13_49) = reinterpret_cast<uint1_t>(r14b14 == 0);
                if (!*reinterpret_cast<void***>(rbp47)) {
                    addr_1400075ac_33:
                    rdx50 = reinterpret_cast<void**>(">");
                    if (*reinterpret_cast<unsigned char*>(&r13_49)) {
                        rdx50 = reinterpret_cast<void**>(">");
                        goto addr_1400075c4_35;
                    }
                } else {
                    do {
                        *reinterpret_cast<uint32_t*>(&rcx51) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx48));
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx51) + 4) = 0;
                        rax52 = reinterpret_cast<uint64_t>(iswspace(rcx51, 10, 2, r9));
                        rsp38 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp38) - 8 + 8);
                        if (!*reinterpret_cast<int32_t*>(&rax52)) 
                            goto addr_1400075d5_37;
                        rbx48 = rbx48 + 2;
                    } while (*reinterpret_cast<void***>(rbx48));
                    goto addr_1400075ac_33;
                }
            }
            r9 = r12_10;
            fwrite(rcx45, rdx44, 1, r9);
            *reinterpret_cast<void***>(rsi13) = r15_41 + 2;
            r14b14 = 0;
            eax53 = reinterpret_cast<int32_t>(wcsncmp());
            rsp38 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp38) - 8 + 8 - 8 + 8);
            if (!eax53) 
                goto addr_1400077b5_21;
            bl12 = v5;
            continue;
            addr_1400075c4_35:
            fun_14000bfe0("\t", rdx50, rdi9, r9, "\t", rdx50, rdi9, r9);
            rsp38 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp38) - 8 + 8);
            addr_1400076d9_41:
            *reinterpret_cast<void***>(r15_41) = reinterpret_cast<void**>(10);
            goto addr_1400076e5_24;
            addr_1400075d5_37:
            rax54 = 0xffffffffffffffff;
            do {
                ++rax54;
            } while (*reinterpret_cast<void***>(rdi9 + rax54 * 2));
            r12_55 = reinterpret_cast<void**>(0x400 - (rax54 + 12));
            while (*reinterpret_cast<void***>(rbp47)) {
                r9_56 = r12_55;
                r8_57 = rbp47;
                wcsncpy_s(0x14003d150);
                rsp58 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp38) - 8 + 8);
                rax59 = reinterpret_cast<void**>(0xffffffffffffffff);
                rbx60 = reinterpret_cast<void**>(0xffffffffffffffff);
                do {
                    ++rbx60;
                } while (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(0x14003d150) + reinterpret_cast<unsigned char>(rbx60) * 2));
                do {
                    ++rax59;
                } while (*reinterpret_cast<void***>(rbp47 + reinterpret_cast<unsigned char>(rax59) * 2));
                if (reinterpret_cast<unsigned char>(r12_55) < reinterpret_cast<unsigned char>(rax59)) {
                    zf61 = g14003d150 == 0;
                    rdi62 = reinterpret_cast<void**>(0x14003d150);
                    if (!zf61) {
                        r14_63 = reinterpret_cast<void*>(-0x14003d150);
                        do {
                            *reinterpret_cast<uint32_t*>(&rcx64) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi62));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx64) + 4) = 0;
                            eax65 = reinterpret_cast<int32_t>(iswspace(rcx64));
                            rsp58 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp58) - 8 + 8);
                            if (eax65) {
                                rbx60 = reinterpret_cast<void**>((reinterpret_cast<int64_t>(r14_63) + reinterpret_cast<unsigned char>(rdi62) >> 1) + 1);
                            }
                            rdi62 = rdi62 + 2;
                        } while (*reinterpret_cast<void***>(rdi62));
                        rsi13 = v6;
                    }
                    rdi9 = v7;
                }
                rbx66 = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(rbx60) + reinterpret_cast<unsigned char>(rbx60));
                if (reinterpret_cast<uint64_t>(rbx66) >= 0x800) 
                    goto addr_1400077ca_57;
                *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rbx66) + reinterpret_cast<unsigned char>(0x14003d150)) = reinterpret_cast<void**>(0);
                r8_67 = reinterpret_cast<void**>(">");
                if (*reinterpret_cast<unsigned char*>(&r13_49)) {
                    r8_67 = reinterpret_cast<void**>(">");
                }
                fun_14000bfe0("\t", 0x14003d150, r8_67, rdi9, "\t", 0x14003d150, r8_67, rdi9);
                rsp38 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp58) - 8 + 8);
                rbp47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbp47) + reinterpret_cast<uint64_t>(rbx66));
                *reinterpret_cast<unsigned char*>(&r13_49) = 1;
            }
            r12_10 = v8;
            goto addr_1400076d9_41;
        }
    }
    return;
    addr_1400077ca_57:
    fun_14001025c(0x14003d150, 0x400, r8_57, r9_56, 0x14003d150, 0x400, r8_57, r9_56);
    rsp68 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp58) - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8);
    rbp69 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp68) - 0x380);
    rsp70 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp68) - 0x480);
    rax71 = g140015008;
    v72 = rax71 ^ reinterpret_cast<uint64_t>(rsp70);
    v73 = *reinterpret_cast<signed char*>(&r9_56);
    *reinterpret_cast<int32_t*>(&rdx74) = 10;
    *reinterpret_cast<int32_t*>(&rdx74 + 4) = 0;
    rax75 = reinterpret_cast<struct s7*>(wcschr());
    rsp76 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp70) - 8 + 8);
    if (rax75) {
        rax75->f0 = 0;
        rax77 = fun_14000e740(0x14003d150, -1, r8_57);
        rsp78 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp76) - 8 + 8);
        g400 = rax77;
        rax75->f0 = 10;
        r14_79 = reinterpret_cast<void**>(&rax75->f2);
        zf80 = reinterpret_cast<int1_t>(g400 == 0x14003d150);
        if (zf80) {
            rax81 = fun_14000dcc4(0x14003d150, 0x14003d150);
            rsp78 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp78) - 8 + 8);
            g400 = rax81;
        }
        r8_57 = r8_57;
        *reinterpret_cast<signed char*>(&rdx74) = -1;
        rax82 = fun_14000e740(r14_79, -1, r8_57);
        rsp83 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp78) - 8 + 8);
        v84 = rax82;
        r13_85 = rax82;
        rax86 = fun_140006dac(reinterpret_cast<uint64_t>(rsp83) + 64, 0xff, r8_57, r9_56);
        rsp87 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp83) - 8 + 8);
        while (rax86) {
            rax88 = fun_14000dcc4(rax86, rax86);
            rsp89 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp87) - 8 + 8);
            r12_90 = rax88;
            if (*reinterpret_cast<void***>(rax88)) {
                rax91 = fun_14000fd2c(rax88, "w", r8_57, r9_56);
                rsp92 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp89) - 8 + 8);
                r15_93 = rax91;
                if (rax91) {
                    rcx94 = g400;
                    do {
                        rax95 = reinterpret_cast<struct s8*>(wcschr(rcx94, 60));
                        rsp92 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp92) - 8 + 8);
                        rcx94 = reinterpret_cast<void**>(&rax95->f2);
                    } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rcx94) == 60));
                    rdx96 = &rax95->f4;
                    r8_97 = 0xffffffffffffffff;
                    do {
                        ++r8_97;
                    } while (rdx96[r8_97 * 2]);
                    memmove(rax95);
                    rsp98 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp92) - 8 + 8);
                } else {
                    *reinterpret_cast<uint32_t*>(&rcx99) = g140025c20;
                    *reinterpret_cast<int32_t*>(&rcx99 + 4) = 0;
                    fun_140003898(rcx99, 0x41e, r12_90, r9_56, rcx99, 0x41e, r12_90, r9_56);
                    rsp98 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp92) - 8 + 8);
                }
            } else {
                eax100 = reinterpret_cast<int32_t>(_wgetenv_s(reinterpret_cast<uint64_t>(rsp89) + 72, reinterpret_cast<uint64_t>(rsp89) + 80, 0x103, "T"));
                rsp101 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp89) - 8 + 8);
                if (eax100 || !0) {
                    wcscpy_s(reinterpret_cast<uint64_t>(rsp101) + 80, 0x103, ".", "T");
                    rsp101 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp101) - 8 + 8);
                }
                r9_56 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp69) + 0x160);
                *reinterpret_cast<int32_t*>(&r8_102) = 0;
                *reinterpret_cast<int32_t*>(&r8_102 + 4) = 0;
                r15_93 = reinterpret_cast<void**>(0);
                eax103 = reinterpret_cast<int32_t>(GetTempFileNameW(reinterpret_cast<uint64_t>(rsp101) + 80, "n"));
                rsp104 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp101) - 8 + 8);
                if (eax103) {
                    wcscpy_s(reinterpret_cast<uint64_t>(rsp104) + 80, 0x103, reinterpret_cast<int64_t>(rbp69) + 0x160, r9_56);
                    rsp105 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp104) - 8 + 8);
                    *reinterpret_cast<int32_t*>(&r8_102) = 32;
                    *reinterpret_cast<int32_t*>(&r8_102 + 4) = 0;
                    rax106 = reinterpret_cast<void**>(_wfsopen(reinterpret_cast<uint64_t>(rsp105) + 80, "w", 32, r9_56));
                    rsp104 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp105) - 8 + 8);
                    r15_93 = rax106;
                }
                if (!r15_93) {
                    *reinterpret_cast<uint32_t*>(&rcx107) = g140025c20;
                    *reinterpret_cast<int32_t*>(&rcx107 + 4) = 0;
                    r8_102 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp104) + 80);
                    fun_140003898(rcx107, 0x41e, r8_102, r9_56, rcx107, 0x41e, r8_102, r9_56);
                    rsp104 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp104) - 8 + 8);
                }
                rax108 = reinterpret_cast<int64_t>(wcschr(reinterpret_cast<uint64_t>(rsp104) + 80, 32, r8_102, r9_56));
                rsp109 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp104) - 8 + 8);
                if (rax108 && (rax110 = reinterpret_cast<int64_t>(wcschr(reinterpret_cast<uint64_t>(rsp109) + 80, 34, r8_102, r9_56)), rsp109 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp109) - 8 + 8), !rax110)) {
                    rcx111 = reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rsp109) + 80);
                    rdi112 = reinterpret_cast<void*>(0xffffffffffffffff);
                    do {
                        rdi112 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdi112) + 1);
                    } while (rcx111[static_cast<uint64_t>(rdi112)] != *reinterpret_cast<int16_t*>(&rax110));
                    rbx113 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rdi112) + reinterpret_cast<uint64_t>(rdi112));
                    r8_102 = rbx113;
                    rdx114 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp109) + 80);
                    rcx115 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp109) + 82);
                    memmove();
                    rsp109 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp109) - 8 + 8);
                    rdi116 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdi112) * 2 + 4);
                    *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rsp109) + reinterpret_cast<unsigned char>(rbx113) + 82) = 34;
                    if (reinterpret_cast<uint64_t>(rdi116) >= 0x206) 
                        goto addr_140007b5c_86;
                    *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rsp109) + reinterpret_cast<uint64_t>(rdi116) + 80) = 0;
                }
                rdx117 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsp109) + 80);
                fun_140007294(0x400, rdx117, r8_102, r9_56);
                free(r12_90, rdx117, r8_102, r9_56);
                rsp118 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp109) - 8 + 8 - 8 + 8);
                rcx119 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp118) + 80);
                rax120 = fun_14000dcc4(rcx119, rcx119);
                rsp98 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp118) - 8 + 8);
                r12_90 = rax120;
            }
            r8_57 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp98) + 56);
            *reinterpret_cast<signed char*>(&r9_56) = v73;
            fun_1400073bc(r15_93, r12_90, r8_57, r9_56);
            rbx121 = v84;
            *reinterpret_cast<int32_t*>(&rdx74) = 10;
            *reinterpret_cast<int32_t*>(&rdx74 + 4) = 0;
            rax122 = reinterpret_cast<struct s9*>(wcschr(rbx121, 10));
            rsp123 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp98) - 8 + 8 - 8 + 8);
            if (!rax122) {
                rax124 = 0xffffffffffffffff;
                do {
                    ++rax124;
                } while (*reinterpret_cast<void***>(rbx121 + rax124 * 2));
                rax125 = rbx121 + rax124 * 2;
            } else {
                rax125 = reinterpret_cast<void**>(&rax122->f2);
            }
            v84 = rax125;
            fclose(r15_93, 10);
            rsp126 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp123) - 8 + 8);
            if (!0) {
                rax127 = fun_14000dc58();
                rbx128 = rax127;
                rax129 = fun_14000dcc4(r12_90, r12_90);
                rsp126 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp126) - 8 + 8 - 8 + 8);
                *reinterpret_cast<void***>(rbx128 + 8) = rax129;
                rdx74 = reinterpret_cast<void**>(0x140036e88);
                rcx130 = g140036e88;
                while (rcx130) {
                    rdx74 = rcx130;
                    rcx130 = *reinterpret_cast<void***>(rcx130);
                }
                *reinterpret_cast<void***>(rdx74) = rbx128;
            }
            free(r12_90, rdx74);
            rsp131 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp126) - 8 + 8);
            rax86 = fun_140006dac(reinterpret_cast<uint64_t>(rsp131) + 64, rdx74, r8_57, r9_56);
            rsp87 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp131) - 8 + 8);
        }
    } else {
        rax132 = fun_14000dcc4(0x14003d150, 0x14003d150);
        rsp87 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp76) - 8 + 8);
        g400 = rax132;
        goto addr_140007b32_101;
    }
    if (r13_85 != r14_79) {
        free(r13_85, rdx74);
        rsp87 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp87) - 8 + 8);
    }
    addr_140007b32_101:
    rcx133 = v72 ^ reinterpret_cast<uint64_t>(rsp87);
    fun_140010130(rcx133, rdx74, r8_57, rcx133, rdx74, r8_57);
    goto v134;
    addr_140007b5c_86:
    fun_14001025c(rcx115, rdx114, r8_102, r9_56, rcx115, rdx114, r8_102, r9_56);
    bl135 = *reinterpret_cast<void**>(&rcx115);
    while (1) {
        g140015041 = reinterpret_cast<void**>(0);
        do {
            if (!bl135) {
                ax136 = fun_14000613c();
            } else {
                rcx137 = g140026480;
                ax136 = reinterpret_cast<void**>(getwc(rcx137, rdx114, r8_102, r9_56));
            }
            if (ax136 == 0xffff) 
                goto addr_140007be7_111;
        } while (!reinterpret_cast<int1_t>(ax136 == 10));
        g140015041 = reinterpret_cast<void**>(1);
        if (!bl135) {
            ax138 = fun_14000613c();
        } else {
            rcx139 = g140026480;
            ax138 = reinterpret_cast<void**>(getwc(rcx139, rdx114, r8_102, r9_56));
        }
        if (!reinterpret_cast<int1_t>(ax138 == 59)) 
            goto addr_140007bc9_117;
        zf140 = g140026489 == 0;
        if (!zf140) 
            goto addr_140007bcf_119;
        addr_140007bc9_117:
        if (!reinterpret_cast<int1_t>(ax138 == 35)) 
            goto addr_140007bd7_120;
        addr_140007bcf_119:
        ++g140025c20;
    }
    addr_140007be7_111:
    goto v141;
    addr_140007bd7_120:
    rdx142 = g140026480;
    *reinterpret_cast<uint32_t*>(&rcx143) = reinterpret_cast<uint16_t>(ax138);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx143) + 4) = 0;
    ungetwc(rcx143, rdx142, r8_102, r9_56);
    goto addr_140007be7_111;
}

void fun_140008874(struct s6* rcx, void** rdx, void** r8, void** r9) {
    struct s6* v5;
    uint32_t eax6;
    void** rsi7;
    void** r12_8;
    void** bpl9;
    void** r15b10;
    unsigned char dil11;
    void** ax12;
    uint32_t ebx13;
    void** ax14;
    int64_t rax15;
    int64_t rax16;
    uint32_t eax17;
    void** ax18;
    void** ax19;
    void** rcx20;
    void** rcx21;
    uint32_t eax22;
    uint32_t ecx23;
    uint32_t ecx24;
    uint32_t ecx25;
    uint32_t ecx26;
    uint32_t ecx27;
    uint32_t ecx28;
    uint32_t ecx29;
    int1_t zf30;
    int64_t rcx31;
    int32_t eax32;
    unsigned char cl33;
    int64_t rax34;
    int64_t rcx35;
    int32_t eax36;
    unsigned char cl37;
    int64_t rax38;
    uint32_t ecx39;
    uint32_t ecx40;
    uint32_t ecx41;
    uint32_t ecx42;
    uint32_t ecx43;
    uint32_t ecx44;
    void** rdx45;
    int64_t rcx46;
    struct s6* rcx47;
    uint64_t rax48;
    signed char dl49;
    struct s6* rax50;

    v5 = rcx;
    eax6 = reinterpret_cast<uint16_t>(rcx->f0);
    rsi7 = reinterpret_cast<void**>(&rcx->f2);
    r12_8 = rdx;
    bpl9 = reinterpret_cast<void**>(0);
    r15b10 = reinterpret_cast<void**>(0);
    if (eax6 == 34) {
        r15b10 = reinterpret_cast<void**>(1);
        dil11 = 16;
    } else {
        if (eax6 == 36) {
            dil11 = 2;
        } else {
            dil11 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<uint1_t>(eax6 != 0x7b) - 1) & 8);
        }
    }
    while (1) {
        ax12 = fun_14000613c();
        ebx13 = reinterpret_cast<uint16_t>(ax12);
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&ebx13) == 94)) 
            goto addr_14000893a_8;
        ax14 = fun_14000613c();
        ebx13 = reinterpret_cast<uint16_t>(ax14);
        if (ebx13 == 10 || ebx13 == 35) {
            addr_140008932_10:
            rdx = reinterpret_cast<void**>(0);
        } else {
            if (ebx13 == 36) 
                goto addr_140008926_12;
            if (reinterpret_cast<int32_t>(ebx13) <= reinterpret_cast<int32_t>(39)) 
                goto addr_14000893a_8;
            if (reinterpret_cast<int32_t>(ebx13) <= reinterpret_cast<int32_t>(41)) 
                goto addr_140008926_12;
            if (ebx13 == 92) 
                goto addr_140008932_10; else 
                goto addr_140008914_16;
        }
        addr_140008a8d_17:
        *reinterpret_cast<uint32_t*>(&rax15) = dil11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rax16) = reinterpret_cast<unsigned char>(rdx);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
        dil11 = *reinterpret_cast<unsigned char*>(rax15 * 15 + rax16 + 0x140000000 + 0x11970);
        if (r15b10) {
            eax17 = dil11;
            if (dil11 == 1) {
                eax17 = 16;
            }
            dil11 = *reinterpret_cast<unsigned char*>(&eax17);
        }
        if (bpl9) {
            if (!reinterpret_cast<int1_t>(rdx == 6)) {
                *reinterpret_cast<void***>(rsi7) = reinterpret_cast<void**>(92);
                rsi7 = rsi7 + 2;
            } else {
                ++g140025c20;
                g140015041 = reinterpret_cast<void**>(1);
                ax18 = fun_14000613c();
                g140015041 = reinterpret_cast<void**>(0);
                ebx13 = reinterpret_cast<uint16_t>(ax18);
                if (ax18 == 32 || ax18 == 9) {
                    dil11 = 64;
                    addr_140008b0e_26:
                    ax19 = fun_14000613c();
                    ebx13 = reinterpret_cast<uint16_t>(ax19);
                    if (ax19 == 32) 
                        goto addr_140008b0e_26;
                    if (ax19 == 9) 
                        goto addr_140008b0e_26;
                } else {
                    dil11 = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi7 == 0x140025c52));
                }
            }
        }
        bpl9 = reinterpret_cast<void**>(0);
        if (reinterpret_cast<unsigned char>(rsi7) >= reinterpret_cast<unsigned char>(r12_8)) {
            *reinterpret_cast<uint32_t*>(&rcx20) = g140025c20;
            *reinterpret_cast<int32_t*>(&rcx20 + 4) = 0;
            rdx = reinterpret_cast<void**>(0x434);
            fun_140003898(rcx20, 0x434, r8, r9);
        }
        if (dil11 == 64) 
            break;
        if (dil11 & 32) {
            *reinterpret_cast<uint32_t*>(&rcx21) = g140025c20;
            *reinterpret_cast<int32_t*>(&rcx21 + 4) = 0;
            *reinterpret_cast<uint32_t*>(&r8) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&ebx13));
            *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
            rdx = reinterpret_cast<void**>((static_cast<uint32_t>(dil11) & 0xffffffdf) + 0x3e8);
            fun_140003898(rcx21, rdx, r8, r9);
        }
        if (dil11 != 15) {
            *reinterpret_cast<void***>(rsi7) = *reinterpret_cast<void***>(&ebx13);
            rsi7 = rsi7 + 2;
            continue;
        } else {
            bpl9 = reinterpret_cast<void**>(1);
            continue;
        }
        addr_140008914_16:
        eax22 = ebx13 + 0xffffffa2;
        if (eax22 > 31 || !static_cast<int1_t>(0xa0000001 >> eax22)) {
            addr_14000893a_8:
            ecx23 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&ebx13));
            if (reinterpret_cast<int32_t>(ecx23) > reinterpret_cast<int32_t>(41)) {
                ecx24 = ecx23 - 58;
                if (!ecx24) {
                    rdx = reinterpret_cast<void**>(4);
                    goto addr_140008a8d_17;
                } else {
                    ecx25 = ecx24 - 1;
                    if (!ecx25) {
                        rdx = reinterpret_cast<void**>(3);
                        goto addr_140008a8d_17;
                    } else {
                        ecx26 = ecx25 - 2;
                        if (!ecx26) {
                            rdx = reinterpret_cast<void**>(2);
                            goto addr_140008a8d_17;
                        } else {
                            ecx27 = ecx26 - 31;
                            if (!ecx27) {
                                rdx = reinterpret_cast<void**>(13);
                                goto addr_140008a8d_17;
                            } else {
                                ecx28 = ecx27 - 31;
                                if (!ecx28) {
                                    rdx = reinterpret_cast<void**>(11);
                                    goto addr_140008a8d_17;
                                } else {
                                    ecx29 = ecx28 - 2;
                                    if (!ecx29) {
                                        rdx = reinterpret_cast<void**>(12);
                                        goto addr_140008a8d_17;
                                    } else {
                                        if (ecx29 == 0xff82) {
                                            addr_140008a73_51:
                                            rdx = reinterpret_cast<void**>(6);
                                            goto addr_140008a8d_17;
                                        } else {
                                            addr_1400089f3_52:
                                            zf30 = (reinterpret_cast<unsigned char>(g140025c38) & 0x80) == 0;
                                            if (zf30) {
                                                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&ebx13)) >= reinterpret_cast<unsigned char>(0x80)) {
                                                    *reinterpret_cast<uint32_t*>(&rcx31) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&ebx13));
                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = 0;
                                                    eax32 = reinterpret_cast<int32_t>(iswspace(rcx31));
                                                    cl33 = reinterpret_cast<uint1_t>(eax32 == 0);
                                                } else {
                                                    *reinterpret_cast<uint32_t*>(&rax34) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&ebx13));
                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax34) + 4) = 0;
                                                    cl33 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rax34 + 0x140000000 + 0x11640) & 1);
                                                }
                                                rdx = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rdx) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(rdx) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<uint1_t>(!!cl33))))) & 10);
                                                goto addr_140008a8d_17;
                                            } else {
                                                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&ebx13)) >= reinterpret_cast<unsigned char>(0x80)) {
                                                    *reinterpret_cast<uint32_t*>(&rcx35) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&ebx13));
                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = 0;
                                                    eax36 = reinterpret_cast<int32_t>(iswspace(rcx35));
                                                    cl37 = reinterpret_cast<uint1_t>(eax36 == 0);
                                                } else {
                                                    *reinterpret_cast<uint32_t*>(&rax38) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&ebx13));
                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax38) + 4) = 0;
                                                    cl37 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rax38 + 0x140000000 + 0x11640) & 1);
                                                }
                                                if (cl37) 
                                                    goto addr_140008a3d_61;
                                                if (*reinterpret_cast<void***>(&ebx13) == 42) 
                                                    goto addr_140008a3d_61;
                                                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&ebx13) == 64)) 
                                                    goto addr_140008932_10;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (ecx23 == 41) {
                    rdx = reinterpret_cast<void**>(9);
                    goto addr_140008a8d_17;
                } else {
                    ecx39 = ecx23 - 9;
                    if (!ecx39) {
                        addr_140008998_67:
                        rdx = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(~reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rdx) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(rdx) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<uint1_t>(!!r15b10)))))) & 5);
                        goto addr_140008a8d_17;
                    } else {
                        ecx40 = ecx39 - 1;
                        if (!ecx40) 
                            goto addr_140008a73_51;
                        ecx41 = ecx40 - 22;
                        if (!ecx41) 
                            goto addr_140008998_67; else 
                            goto addr_140008957_70;
                    }
                }
            }
        } else {
            addr_140008926_12:
            *reinterpret_cast<void***>(rsi7) = reinterpret_cast<void**>(94);
            rsi7 = rsi7 + 2;
            goto addr_140008932_10;
        }
        addr_140008a3d_61:
        rdx = reinterpret_cast<void**>(10);
        goto addr_140008a8d_17;
        addr_140008957_70:
        ecx42 = ecx41 - 2;
        if (!ecx42) {
            rdx = reinterpret_cast<void**>(14);
            if (dil11 == 18) {
                r15b10 = reinterpret_cast<void**>(1);
                goto addr_140008a8d_17;
            }
        } else {
            ecx43 = ecx42 - 1;
            if (!ecx43) {
                rdx = reinterpret_cast<void**>(1);
                goto addr_140008a8d_17;
            } else {
                ecx44 = ecx43 - 1;
                if (!ecx44) {
                    rdx = reinterpret_cast<void**>(7);
                    goto addr_140008a8d_17;
                } else {
                    if (ecx44 != 4) 
                        goto addr_1400089f3_52;
                    rdx = reinterpret_cast<void**>(8);
                    goto addr_140008a8d_17;
                }
            }
        }
    }
    rdx45 = g140026480;
    *reinterpret_cast<uint32_t*>(&rcx46) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&ebx13));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx46) + 4) = 0;
    ungetwc(rcx46, rdx45, r8);
    rcx47 = v5;
    *reinterpret_cast<void***>(rsi7) = reinterpret_cast<void**>(0);
    rax48 = 0xffffffffffffffff;
    do {
        ++rax48;
    } while (*reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rcx47) + rax48 * 2));
    dl49 = 0;
    rax50 = reinterpret_cast<struct s6*>(reinterpret_cast<uint64_t>(rcx47) + (rax48 - 1) * 2);
    if (reinterpret_cast<int1_t>(rcx47->f0 == 34) && reinterpret_cast<int1_t>(rax50->f0 == 34)) {
        dl49 = 1;
        goto addr_14000bbd1_84;
    }
    while (reinterpret_cast<uint64_t>(rax50) > reinterpret_cast<uint64_t>(rcx47) && (rax50->f0 == 32 || reinterpret_cast<int1_t>(rax50->f0 == 46))) {
        addr_14000bbd1_84:
        rax50 = reinterpret_cast<struct s6*>(reinterpret_cast<uint64_t>(rax50) - 2);
    }
    if (dl49) 
        goto addr_14000bbde_87;
    addr_14000bbe6_88:
    *reinterpret_cast<void***>(&rax50->f2) = reinterpret_cast<void**>(0);
    return;
    addr_14000bbde_87:
    rax50 = reinterpret_cast<struct s6*>(&rax50->f2);
    rax50->f0 = reinterpret_cast<void**>(34);
    goto addr_14000bbe6_88;
}

struct s43 {
    signed char[5368863824] pad5368863824;
    void** f140025c50;
};

unsigned char fun_140007bf0(uint16_t cx, void** rdx, void** r8, void** r9) {
    void* rsp5;
    uint32_t ebx6;
    void** rcx7;
    void** r8_8;
    void** rdx9;
    void** rax10;
    void* rsp11;
    void** rcx12;
    int32_t eax13;
    void* rsp14;
    void** rcx15;
    void** rcx16;
    void** rcx17;
    void* rax18;
    void* rax19;
    struct s43* rax20;
    void** rdi21;
    void** rbx22;
    void** r9_23;
    uint32_t eax24;
    uint32_t r9d25;
    uint32_t r9d26;
    uint32_t r9d27;
    void** rcx28;
    int32_t eax29;
    void** ax30;
    int1_t zf31;
    void** ax32;
    int1_t zf33;
    int1_t less34;
    void** rcx35;
    void** rcx36;
    int32_t eax37;
    void** rcx38;
    uint32_t eax39;
    uint32_t eax40;
    int64_t rax41;
    int64_t rcx42;
    void** rcx43;
    void* rsp44;
    uint64_t rax45;
    uint64_t v46;
    void** rdi47;
    int64_t rsi48;
    void** rcx49;
    void* rsp50;
    uint64_t rax51;
    uint64_t v52;
    void** r9_53;
    void* rsp54;
    void** rdi55;
    void*** rax56;
    void** rcx57;
    void*** rdx58;
    void** rax59;
    void** rbx60;
    void** rax61;
    int64_t rdx62;
    void** rax63;
    void* rsp64;
    void** rbx65;
    uint64_t rax66;
    void** rax67;
    void* rsp68;
    void** r8_69;
    void** rdx70;
    void** rsi71;
    void* rsp72;
    uint64_t rcx73;
    int64_t v74;
    void** rax75;
    void** rdi76;
    void** rax77;
    void* rsp78;
    void** rsi79;
    void** rax80;
    void** rax81;
    void* rsp82;
    void** rcx83;
    void** rbx84;
    void** rax85;
    void** rax86;
    void** rdx87;
    void** r8_88;
    void** rax89;
    void* rsp90;
    void** rcx91;
    void* rsp92;
    void** rax93;
    void* rsp94;
    void** rsi95;
    void** rax96;
    void** rax97;
    void** rdx98;
    int64_t rax99;
    void** rcx100;
    int64_t rcx101;
    int64_t rbp102;
    int64_t r14_103;
    uint32_t edx104;
    uint32_t ebx105;
    int64_t* rsi106;
    int64_t rdx107;
    int32_t eax108;
    void** rcx109;
    void*** r13_110;
    void** rcx111;
    void** rax112;
    void** r15_113;
    void** rcx114;
    void** rax115;
    void* rbx116;
    void** rax117;
    void** rax118;
    void* rsp119;
    void** rax120;
    void* rsp121;
    int64_t rax122;
    int1_t zf123;
    int64_t rcx124;
    void** rax125;
    uint32_t eax126;
    void** rax127;
    void** rdx128;
    void** rax129;
    void* rsp130;
    void** rcx131;
    void** rax132;
    void** ax133;
    void* rsp134;
    int64_t rcx135;
    uint64_t rcx136;
    void** rax137;
    void** rsi138;
    uint32_t eax139;
    void** rcx140;
    int64_t v141;
    void** ax142;
    uint32_t ecx143;
    int1_t zf144;
    int1_t zf145;
    void** rdx146;
    int32_t eax147;
    void** ax148;
    uint32_t ebx149;
    void** rdx150;
    int64_t rcx151;
    int1_t zf152;
    void** rcx153;
    uint32_t ecx154;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32);
    ebx6 = cx;
    if (cx == 10 || cx == 0xffff) {
        *reinterpret_cast<uint32_t*>(&rcx7) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx7 + 4) = 0;
        fun_140003898(rcx7, 0x407, r8, r9);
        rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
    }
    r8_8 = g140026480;
    rdx9 = reinterpret_cast<void**>(0x3ff);
    *reinterpret_cast<int32_t*>(&rdx9 + 4) = 0;
    g140025c50 = *reinterpret_cast<void***>(&ebx6);
    rax10 = reinterpret_cast<void**>(fgetws(0x140025c52));
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
    if (!rax10) {
        rcx12 = g140026480;
        eax13 = reinterpret_cast<int32_t>(feof(rcx12));
        rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
        if (eax13) {
            *reinterpret_cast<uint32_t*>(&rcx15) = g140025c20;
            *reinterpret_cast<int32_t*>(&rcx15 + 4) = 0;
            r8_8 = reinterpret_cast<void**>("E");
            fun_140003898(rcx15, 0x409, "E", r9);
            rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp14) - 8 + 8);
        }
        *reinterpret_cast<uint32_t*>(&rcx16) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx16 + 4) = 0;
        rdx9 = reinterpret_cast<void**>(0x41d);
        *reinterpret_cast<int32_t*>(&rdx9 + 4) = 0;
        fun_140003898(rcx16, 0x41d, r8_8, r9);
        rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp14) - 8 + 8);
    }
    rcx17 = reinterpret_cast<void**>(0x140025c50);
    rax18 = reinterpret_cast<void*>(0xffffffffffffffff);
    do {
        rax18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax18) + 1);
    } while (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(0x140025c50) + reinterpret_cast<uint64_t>(rax18) * 2));
    rax19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax18) - 1);
    rax20 = reinterpret_cast<struct s43*>(reinterpret_cast<uint64_t>(rax19) + reinterpret_cast<uint64_t>(rax19));
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax20) + reinterpret_cast<unsigned char>(0x140025c50)) == 10)) {
        addr_140007ca5_10:
        while (*reinterpret_cast<void***>(rcx17) == 32 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rcx17) == 9)) {
            rcx17 = rcx17 + 2;
        }
    } else {
        if (reinterpret_cast<uint64_t>(rax20) >= 0x800) {
            fun_14001025c(0x140025c50, rdx9, r8_8, r9);
            rdi21 = rdx9;
            rdx9 = g140015041;
            rbx22 = r8_8;
            do {
                *reinterpret_cast<uint32_t*>(&r9_23) = *reinterpret_cast<uint16_t*>(&rcx17) - 10;
                *reinterpret_cast<int32_t*>(&r9_23 + 4) = 0;
                if (!*reinterpret_cast<uint32_t*>(&r9_23)) {
                    addr_140007df0_16:
                    eax24 = g140025c20;
                } else {
                    r9d25 = *reinterpret_cast<uint32_t*>(&r9_23) - 48;
                    if (!r9d25) 
                        goto addr_140007f37_18;
                    r9d26 = r9d25 - 1;
                    if (!r9d26) 
                        goto addr_140007f33_20;
                    r9d27 = r9d26 - 2;
                    if (!r9d27) 
                        goto addr_140007f2f_22;
                    *reinterpret_cast<uint32_t*>(&r9_23) = r9d27 - 30;
                    *reinterpret_cast<int32_t*>(&r9_23 + 4) = 0;
                    if (!*reinterpret_cast<uint32_t*>(&r9_23)) 
                        goto addr_140007e80_24;
                    *reinterpret_cast<uint32_t*>(&r9_23) = *reinterpret_cast<uint32_t*>(&r9_23) - 3;
                    *reinterpret_cast<int32_t*>(&r9_23 + 4) = 0;
                    if (!*reinterpret_cast<uint32_t*>(&r9_23)) 
                        goto addr_140007e8d_26;
                    if (*reinterpret_cast<uint32_t*>(&r9_23) != 0xffa1) 
                        goto addr_140007e9e_28;
                    rcx28 = g140026480;
                    eax29 = reinterpret_cast<int32_t>(feof(rcx28));
                    if (eax29) 
                        goto addr_140007d69_30; else 
                        goto addr_140007d59_31;
                }
                addr_140007df6_32:
                g140015041 = reinterpret_cast<void**>(1);
                g140025c20 = eax24 + 1;
                ax30 = fun_14000613c();
                *reinterpret_cast<uint32_t*>(&rcx17) = reinterpret_cast<uint16_t>(ax30);
                if (reinterpret_cast<int1_t>(ax30 == 59) && (zf31 = g140026489 == 0, !zf31) || *reinterpret_cast<uint16_t*>(&rcx17) == 35) {
                    fun_140007b64(0, rdx9, r8_8, r9_23);
                    ++g140025c20;
                    g140015041 = reinterpret_cast<void**>(1);
                    ax32 = fun_14000613c();
                    *reinterpret_cast<uint32_t*>(&rcx17) = reinterpret_cast<uint16_t>(ax32);
                }
                if (*reinterpret_cast<uint16_t*>(&rcx17) == 32) 
                    goto addr_140007f5d_35;
                if (*reinterpret_cast<uint16_t*>(&rcx17) == 9) 
                    goto addr_140007f5d_35; else 
                    continue;
                addr_140007d69_30:
                zf33 = g140036ce8 == 0;
                if (zf33) {
                    less34 = reinterpret_cast<int32_t>(g140015044) < reinterpret_cast<int32_t>(0);
                    if (less34) 
                        goto addr_140007e79_38;
                    *reinterpret_cast<uint32_t*>(&rcx35) = g140025c20;
                    *reinterpret_cast<int32_t*>(&rcx35 + 4) = 0;
                    rdx9 = reinterpret_cast<void**>(0x3fc);
                    *reinterpret_cast<int32_t*>(&rdx9 + 4) = 0;
                    fun_140003898(rcx35, 0x3fc, r8_8, r9_23);
                    goto addr_140007df0_16;
                } else {
                    rcx36 = g140026480;
                    eax37 = reinterpret_cast<int32_t>(fclose(rcx36, rdx9, r8_8));
                    if (eax37 == 0xffff) {
                        r8_8 = g140026490;
                        rdx9 = reinterpret_cast<void**>(0x424);
                        *reinterpret_cast<int32_t*>(&rdx9 + 4) = 0;
                        fun_140003898(0, 0x424, r8_8, r9_23);
                    }
                    rcx38 = g140026490;
                    free(rcx38, rdx9, r8_8);
                    eax39 = g140036ce8;
                    eax40 = eax39 - 1;
                    g140036ce8 = eax40;
                    rax41 = reinterpret_cast<int32_t>(eax40);
                    rcx42 = rax41 + rax41 * 2;
                    g140026480 = *reinterpret_cast<void***>(0x140036cf0 + rcx42 * 8 + 16);
                    g140026490 = *reinterpret_cast<void***>(0x140036cf0 + rcx42 * 8 + 8);
                    eax24 = *reinterpret_cast<uint32_t*>(0x140036cf0 + rcx42 * 8);
                    goto addr_140007df6_32;
                }
                addr_140007d59_31:
                *reinterpret_cast<uint32_t*>(&rcx43) = g140025c20;
                *reinterpret_cast<int32_t*>(&rcx43 + 4) = 0;
                rdx9 = reinterpret_cast<void**>(0x40e);
                *reinterpret_cast<int32_t*>(&rdx9 + 4) = 0;
                fun_140003898(rcx43, 0x40e, r8_8, r9_23);
                goto addr_140007d69_30;
                rdx9 = reinterpret_cast<void**>(1);
                g140015041 = reinterpret_cast<void**>(1);
            } while (*reinterpret_cast<uint16_t*>(&rcx17) == 0xffff);
            goto addr_140007e63_44;
        } else {
            *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax20) + reinterpret_cast<unsigned char>(0x140025c50)) = reinterpret_cast<void**>(0);
            goto addr_140007ca5_10;
        }
    }
    rsp44 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) + 32 + 8 - 8 - 8 - 8 - 8 - 8 - 0x290);
    rax45 = g140015008;
    v46 = rax45 ^ reinterpret_cast<uint64_t>(rsp44);
    rdi47 = rcx17;
    *reinterpret_cast<uint32_t*>(&rsi48) = 0;
    if (!*reinterpret_cast<void***>(rcx17) || *reinterpret_cast<void***>(rcx17) == 35) {
        *reinterpret_cast<uint32_t*>(&rcx49) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx49 + 4) = 0;
        fun_140003898(rcx49, 0x407, r8_8, r9);
        rsp50 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp44) - 8 + 8 - 8 - 0x270);
        rax51 = g140015008;
        v52 = rax51 ^ reinterpret_cast<uint64_t>(rsp50);
        r9_53 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp50) + 96);
        _wsplitpath_s(rcx49, reinterpret_cast<uint64_t>(rsp50) + 80, 3, r9_53);
        rsp54 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp50) - 8 + 8);
        rdi55 = reinterpret_cast<void**>(0xffffffffffffffff);
        rax56 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsp54) + 80);
        rcx57 = reinterpret_cast<void**>(0xffffffffffffffff);
        do {
            ++rcx57;
        } while (rax56[reinterpret_cast<unsigned char>(rcx57) * 2]);
        rdx58 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsp54) + 96);
        rax59 = reinterpret_cast<void**>(0xffffffffffffffff);
        do {
            ++rax59;
        } while (rdx58[reinterpret_cast<unsigned char>(rax59) * 2]);
        rbx60 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax59 + 1) + reinterpret_cast<unsigned char>(rcx57));
        rax61 = reinterpret_cast<void**>(2 * reinterpret_cast<unsigned char>(rbx60));
        if (!__intrinsic()) 
            goto addr_14000910d_54;
    } else {
        rdx62 = reinterpret_cast<int64_t>("\t");
        rax63 = reinterpret_cast<void**>(wcspbrk());
        rsp64 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp44) - 8 + 8);
        rbx65 = rax63;
        rax66 = 0xffffffffffffffff;
        if (!rbx65) {
            do {
                ++rax66;
            } while (*reinterpret_cast<void***>(rdi47 + rax66 * 2));
            rbx65 = rdi47 + rax66 * 2;
            goto addr_140008c87_58;
        } else {
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx65) == 35)) {
                *reinterpret_cast<uint32_t*>(&rsi48) = 35;
            }
            *reinterpret_cast<void***>(rbx65) = reinterpret_cast<void**>(0);
            if (*reinterpret_cast<int16_t*>(&rsi48)) 
                goto addr_140008c87_58; else 
                goto addr_140008c41_62;
        }
    }
    rax61 = reinterpret_cast<void**>(0xffffffffffffffff);
    addr_14000910d_54:
    rax67 = fun_140009214(rax61, __intrinsic(), 3, r9_53, rax61, __intrinsic());
    rsp68 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp54) - 8 + 8);
    r8_69 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp68) + 80);
    rdx70 = rbx60;
    rsi71 = rax67;
    _wmakepath_s(rax67, rdx70, r8_69, reinterpret_cast<uint64_t>(rsp68) + 96);
    rsp72 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp68) - 8 + 8);
    do {
        ++rdi55;
    } while (*reinterpret_cast<void***>(rsi71 + reinterpret_cast<unsigned char>(rdi55) * 2));
    if (92 == *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rsi71 + reinterpret_cast<unsigned char>(rdi55) * 2) - 2) || 47 == *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rsi71 + reinterpret_cast<unsigned char>(rdi55) * 2) - 2)) {
        *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsi71 + reinterpret_cast<unsigned char>(rdi55) * 2) - 2) = reinterpret_cast<void**>(0);
    }
    rcx73 = v52 ^ reinterpret_cast<uint64_t>(rsp72);
    fun_140010130(rcx73, rdx70, r8_69, rcx73, rdx70, r8_69);
    goto v74;
    addr_140008c87_58:
    if (reinterpret_cast<unsigned char>(rbx65) > reinterpret_cast<unsigned char>(rdi47)) {
        do {
            rax75 = rbx65 + 0xfffffffffffffffe;
            if (*reinterpret_cast<void***>(rax75) == 32) 
                continue;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rax75) == 9)) 
                break;
            rbx65 = rax75;
        } while (reinterpret_cast<unsigned char>(rax75) > reinterpret_cast<unsigned char>(rdi47));
    }
    *reinterpret_cast<void***>(rbx65) = reinterpret_cast<void**>(0);
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi47) == 60) && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx65 + 0xfffffffffffffffe) == 62)) {
        rdi76 = rdi47 + 2;
        *reinterpret_cast<void***>(rbx65 + 0xfffffffffffffffe) = reinterpret_cast<void**>(0);
        rax77 = fun_14000e6a4(rdi76, rdi76);
        rsp78 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp64) - 8 + 8);
        rsi79 = rax77;
        if (rax77 == rdi76) {
            rax80 = fun_14000dcc4(rdi76, rdi76);
            rsp78 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp78) - 8 + 8);
            rsi79 = rax80;
        }
        rax81 = fun_14000918c("I", "I");
        rsp82 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp78) - 8 + 8);
        if (!rax81) {
            rcx83 = reinterpret_cast<void**>(0);
        } else {
            rcx83 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rax81 + 16) + 8);
        }
        if (!rcx83) {
            rbx84 = reinterpret_cast<void**>(0);
        } else {
            rax85 = fun_14000dcc4(rcx83, rcx83);
            rax86 = fun_14000e6a4(rax85, rax85);
            rsp82 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp82) - 8 + 8 - 8 + 8);
            rbx84 = rax86;
            if (rax86 != rax85) {
                free(rax85, rdx62, r8_8);
                rsp82 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp82) - 8 + 8);
            }
        }
        r9 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp82) + 40);
        rdx87 = rsi79;
        r8_88 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp82) + 48);
        rax89 = fun_140005e6c(rbx84, rdx87, r8_88, r9);
        rsp90 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp82) - 8 + 8);
        rdi47 = rax89;
        if (!rax89) {
            *reinterpret_cast<uint32_t*>(&rcx91) = g140025c20;
            *reinterpret_cast<int32_t*>(&rcx91 + 4) = 0;
            r8_88 = rsi79;
            rdx87 = reinterpret_cast<void**>(0x41c);
            *reinterpret_cast<int32_t*>(&rdx87 + 4) = 0;
            fun_140003898(rcx91, 0x41c, r8_88, r9);
            rsp90 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp90) - 8 + 8);
        }
        if (rbx84) {
            free(rbx84, rdx87, r8_88, r9);
            rsp90 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp90) - 8 + 8);
        }
        free(rsi79, rdx87, r8_88, r9);
        rsp92 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp90) - 8 + 8);
        goto addr_140008f17_86;
    }
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi47) == 34) && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx65 + 0xfffffffffffffffe) == 34)) {
        *reinterpret_cast<void***>(rbx65 + 0xfffffffffffffffe) = reinterpret_cast<void**>(0);
        rdi47 = rdi47 + 2;
    }
    rax93 = fun_14000e6a4(rdi47, rdi47);
    rsp94 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp64) - 8 + 8);
    rsi95 = rax93;
    if (rax93 == rdi47) {
        rax96 = fun_14000dcc4(rdi47, rdi47);
        rsp94 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp94) - 8 + 8);
        rsi95 = rax96;
    }
    r8_88 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp94) + 40);
    rax97 = fun_140005ca8(rsi95, reinterpret_cast<uint64_t>(rsp94) + 48, r8_88, r9);
    rsp92 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp94) - 8 + 8);
    if (rax97) 
        goto addr_140008f17_86;
    rdx98 = reinterpret_cast<void**>("\\");
    rax99 = reinterpret_cast<int64_t>(wcspbrk(rsi95, "\\"));
    rsp92 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp92) - 8 + 8);
    if (!rax99) 
        goto addr_140008de3_93;
    r8_88 = rsi95;
    addr_140008f07_95:
    *reinterpret_cast<uint32_t*>(&rcx100) = g140025c20;
    *reinterpret_cast<int32_t*>(&rcx100 + 4) = 0;
    fun_140003898(rcx100, 0x41c, r8_88, r9);
    rsp92 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp92) - 8 + 8);
    goto addr_140008f17_86;
    addr_140008de3_93:
    rcx101 = reinterpret_cast<int32_t>(g140036ce8);
    rbp102 = rcx101;
    r14_103 = rcx101;
    if (*reinterpret_cast<int32_t*>(&rcx101) < reinterpret_cast<int32_t>(0)) {
        addr_140008ef2_96:
        free(rsi95, rdx98);
        rsp92 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp92) - 8 + 8);
        if (*reinterpret_cast<int32_t*>(&rbp102) >= reinterpret_cast<int32_t>(0)) {
            addr_140008f17_86:
            edx104 = g140036ce8;
            ebx105 = 0;
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx104) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx104 == 0))) {
                rsi106 = reinterpret_cast<int64_t*>(0x140036cf8);
                do {
                    rdx107 = *rsi106;
                    eax108 = reinterpret_cast<int32_t>(_wcsicmp(rdi47, rdx107, r8_88, r9));
                    rsp92 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp92) - 8 + 8);
                    if (!eax108) {
                        *reinterpret_cast<uint32_t*>(&rcx109) = g140025c20;
                        *reinterpret_cast<int32_t*>(&rcx109 + 4) = 0;
                        r8_88 = rdi47;
                        fun_140003898(rcx109, 0x430, r8_88, r9);
                        rsp92 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp92) - 8 + 8);
                    }
                    edx104 = g140036ce8;
                    ++ebx105;
                    rsi106 = rsi106 + 3;
                } while (reinterpret_cast<int32_t>(ebx105) < reinterpret_cast<int32_t>(edx104));
            }
        } else {
            r8_88 = rdi47;
            goto addr_140008f07_95;
        }
    } else {
        r13_110 = reinterpret_cast<void***>(0x140036cf0 + (rcx101 + rcx101 * 2) * 8 + 8);
        while (1) {
            rcx111 = g140026490;
            if (*reinterpret_cast<uint32_t*>(&rbp102) != *reinterpret_cast<uint32_t*>(&rcx101)) {
                rcx111 = *r13_110;
            }
            rax112 = fun_140009078(rcx111, rdx98);
            rsp92 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp92) - 8 + 8);
            *reinterpret_cast<int32_t*>(&rdx98) = 0;
            *reinterpret_cast<int32_t*>(&rdx98 + 4) = 0;
            r15_113 = rax112;
            if (!rax112) {
                addr_140008ec5_106:
                *reinterpret_cast<uint32_t*>(&rbp102) = *reinterpret_cast<uint32_t*>(&rbp102) - 1;
                r13_110 = r13_110 - 24;
                --r14_103;
                if (r14_103 < 0) 
                    goto addr_140008eeb_107;
            } else {
                rcx114 = reinterpret_cast<void**>(0xffffffffffffffff);
                do {
                    ++rcx114;
                } while (*reinterpret_cast<void***>(rsi95 + reinterpret_cast<unsigned char>(rcx114) * 2));
                rax115 = reinterpret_cast<void**>(0xffffffffffffffff);
                do {
                    ++rax115;
                } while (*reinterpret_cast<void***>(r15_113 + reinterpret_cast<unsigned char>(rax115) * 2));
                rbx116 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax115 + 2) + reinterpret_cast<unsigned char>(rcx114));
                rax117 = reinterpret_cast<void**>(2 * reinterpret_cast<uint64_t>(rbx116));
                if (__intrinsic()) 
                    goto label_113; else 
                    goto addr_140008e57_114;
            }
            *reinterpret_cast<uint32_t*>(&rcx101) = g140036ce8;
            continue;
            label_113:
            rax117 = reinterpret_cast<void**>(0xffffffffffffffff);
            addr_140008e57_114:
            rax118 = fun_140009214(rax117, __intrinsic(), 0xffffffffffffffff, r9);
            wcscpy_s(rax118, rbx116, r15_113);
            wcscat_s(rax118, rbx116, "\\");
            wcscat_s(rax118, rbx116, rsi95);
            rsp119 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp92) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
            r8_88 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp119) + 40);
            rdx98 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp119) + 48);
            rax120 = fun_140005ca8(rax118, rdx98, r8_88, r9);
            rsp121 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp119) - 8 + 8);
            if (rax120) 
                goto addr_140008edf_116;
            free(r15_113, rdx98);
            free(rax118, rdx98);
            rsp92 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp121) - 8 + 8 - 8 + 8);
            goto addr_140008ec5_106;
        }
    }
    rax122 = reinterpret_cast<int32_t>(edx104);
    zf123 = g14002648b == 0;
    g140036ce8 = edx104 + 1;
    g140025c24 = 0;
    rcx124 = rax122 + rax122 * 2;
    rax125 = g140026480;
    *reinterpret_cast<void***>(0x140036cf0 + rcx124 * 8 + 16) = rax125;
    eax126 = g140025c20;
    *reinterpret_cast<uint32_t*>(0x140036cf0 + rcx124 * 8) = eax126;
    rax127 = g140026490;
    *reinterpret_cast<void***>(0x140036cf0 + rcx124 * 8 + 8) = rax127;
    if (!zf123) {
        fun_14000bfe0("I", rdi47, r8_88, r9);
        rsp92 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp92) - 8 + 8);
    }
    rdx128 = reinterpret_cast<void**>("r");
    rax129 = fun_14000fd2c(rdi47, "r", r8_88, r9);
    rsp130 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp92) - 8 + 8);
    g140026480 = rax129;
    if (!rax129) {
        *reinterpret_cast<uint32_t*>(&rcx131) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx131 + 4) = 0;
        r8_88 = rdi47;
        rdx128 = reinterpret_cast<void**>(0x41c);
        *reinterpret_cast<int32_t*>(&rdx128 + 4) = 0;
        fun_140003898(rcx131, 0x41c, r8_88, r9);
        rsp130 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp130) - 8 + 8);
    }
    rax132 = fun_14000dcc4(rdi47, rdi47);
    g140026490 = rax132;
    g140025c20 = 1;
    g140015041 = reinterpret_cast<void**>(1);
    ax133 = fun_14000613c();
    rsp134 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp130) - 8 + 8 - 8 + 8);
    if (ax133 == 32 || ax133 == 9) {
        g140015041 = reinterpret_cast<void**>(0);
    } else {
        rdx128 = g140026480;
        *reinterpret_cast<uint32_t*>(&rcx135) = reinterpret_cast<uint16_t>(ax133);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx135) + 4) = 0;
        g140015041 = reinterpret_cast<void**>(1);
        ungetwc(rcx135, rdx128, r8_88, r9);
        rsp134 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp134) - 8 + 8);
        --g140025c20;
    }
    rcx136 = v46 ^ reinterpret_cast<uint64_t>(rsp134);
    rax137 = fun_140010130(rcx136, rdx128, r8_88, rcx136, rdx128, r8_88);
    return *reinterpret_cast<unsigned char*>(&rax137);
    addr_140008eeb_107:
    goto addr_140008ef2_96;
    addr_140008edf_116:
    rdi47 = rax118;
    free(r15_113, rdx98);
    rsp92 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp121) - 8 + 8);
    goto addr_140008eeb_107;
    addr_140008c41_62:
    rsi138 = rbx65 + 2;
    while (eax139 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rsi138)), !!*reinterpret_cast<void***>(&eax139)) {
        if (*reinterpret_cast<void***>(&eax139) == 35) 
            goto addr_140008c87_58;
        if (*reinterpret_cast<void***>(&eax139) != 32 && *reinterpret_cast<void***>(&eax139) != 9) {
            *reinterpret_cast<uint32_t*>(&rcx140) = g140025c20;
            *reinterpret_cast<int32_t*>(&rcx140 + 4) = 0;
            r8_8 = rsi138;
            *reinterpret_cast<void***>(&rdx62) = reinterpret_cast<void**>(0x409);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx62) + 4) = 0;
            fun_140003898(rcx140, 0x409, r8_8, r9);
            rsp64 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp64) - 8 + 8);
        }
        rsi138 = rsi138 + 2;
    }
    goto addr_140008c87_58;
    addr_140007f5d_35:
    addr_140007f5f_132:
    g140015041 = reinterpret_cast<void**>(0);
    addr_140007f66_133:
    goto v141;
    addr_140007e63_44:
    addr_140007e65_134:
    ungetwc();
    goto addr_140007f66_133;
    addr_140007f37_18:
    g140015041 = reinterpret_cast<void**>(0);
    ax142 = fun_14000613c();
    ecx143 = reinterpret_cast<uint16_t>(ax142);
    if (*reinterpret_cast<int16_t*>(&ecx143) != 58) {
        goto addr_140007e65_134;
    } else {
        *reinterpret_cast<void***>(rdi21) = reinterpret_cast<void**>(58);
        goto addr_140007f66_133;
    }
    addr_140007f33_20:
    goto addr_140007f5f_132;
    addr_140007f2f_22:
    goto addr_140007f5f_132;
    addr_140007e80_24:
    zf144 = g140026489 == 0;
    if (zf144 || !rdx9) {
        addr_140007e8d_26:
        ungetwc();
        rdi21 = rdi21 - 2;
    } else {
        addr_140007e79_38:
        goto addr_140007f66_133;
    }
    addr_140007e9e_28:
    fun_140008874(rdi21 + 0xfffffffffffffffe, rbx22, r8_8, r9_23);
    zf145 = g140015041 == 0;
    if (zf145 || (rdx146 = reinterpret_cast<void**>("i"), eax147 = reinterpret_cast<int32_t>(_wcsicmp(0x140025c50, "i", r8_8)), !!eax147)) {
        g140015041 = reinterpret_cast<void**>(0);
    } else {
        g140015041 = reinterpret_cast<void**>(0);
        ax148 = fun_140008044(0, "i", r8_8, r9_23);
        ebx149 = reinterpret_cast<uint16_t>(ax148);
        if (*reinterpret_cast<uint16_t*>(&ebx149) == 58 || *reinterpret_cast<uint16_t*>(&ebx149) == 61) {
            rdx150 = g140026480;
            *reinterpret_cast<uint32_t*>(&rcx151) = *reinterpret_cast<uint16_t*>(&ebx149);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx151) + 4) = 0;
            ungetwc(rcx151, rdx150, r8_8);
        } else {
            zf152 = g140026489 == 0;
            if (!zf152) {
                *reinterpret_cast<uint32_t*>(&rcx153) = g140025c20;
                *reinterpret_cast<int32_t*>(&rcx153 + 4) = 0;
                r8_8 = rdi21;
                rdx146 = reinterpret_cast<void**>(0x409);
                *reinterpret_cast<int32_t*>(&rdx146 + 4) = 0;
                fun_140003898(rcx153, 0x409, r8_8, r9_23);
            }
            ecx154 = *reinterpret_cast<uint16_t*>(&ebx149);
            fun_140007bf0(*reinterpret_cast<uint16_t*>(&ecx154), rdx146, r8_8, r9_23);
            goto addr_140007f66_133;
        }
    }
    goto addr_140007f66_133;
}

void** g140025c30;

void fun_1400081f0(unsigned char cl, void** rdx, void** r8, void** r9) {
    void** v5;
    unsigned char v6;
    void** rbx7;
    void** r12_8;
    void** v9;
    void* r13_10;
    void** v11;
    void** r14_12;
    void** r15_13;
    unsigned char dil14;
    void** ax15;
    void* rsp16;
    uint32_t esi17;
    unsigned char bpl18;
    void** ax19;
    void** ax20;
    void** rdx21;
    int64_t rcx22;
    void** r8_23;
    void** al24;
    uint32_t ecx25;
    int32_t edi26;
    int1_t zf27;
    uint32_t ecx28;
    uint32_t ecx29;
    void** ax30;
    void** rdx31;
    int64_t rcx32;
    void** ax33;
    int64_t rcx34;
    int64_t rax35;
    void* rax36;
    void** rcx37;
    int1_t zf38;
    void* rdi39;
    void** rcx40;
    void** rdx41;
    void** rax42;
    void** rax43;
    void** rax44;
    void** rax45;
    void** ax46;
    void* rsp47;
    void** rdx48;
    int64_t rcx49;
    void** ax50;
    void* rsp51;
    void** rdx52;
    int64_t rcx53;
    void** rax54;
    int64_t rax55;
    int64_t rax56;
    int64_t rcx57;
    int32_t eax58;
    unsigned char cl59;
    void* rax60;
    uint32_t ecx61;
    uint32_t ecx62;
    int64_t rax63;
    uint32_t ecx64;
    uint32_t ecx65;
    uint32_t ecx66;
    uint32_t ecx67;
    uint32_t ecx68;
    void** rcx69;
    void* rdi70;
    void** rax71;
    void** rcx72;
    int64_t rax73;
    void** rax74;
    void** rax75;
    void** rax76;
    void** rdx77;
    int64_t rcx78;
    void** rdi79;
    int64_t rcx80;
    int32_t eax81;
    void** rcx82;
    void** rax83;
    void** rdx84;
    void** rcx85;

    v5 = r8;
    v6 = cl;
    rbx7 = reinterpret_cast<void**>(0x140025c50);
    *reinterpret_cast<int32_t*>(&r12_8) = 0;
    *reinterpret_cast<int32_t*>(&r12_8 + 4) = 0;
    v9 = reinterpret_cast<void**>(0);
    *reinterpret_cast<int32_t*>(&r13_10) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_10) + 4) = 0;
    v11 = reinterpret_cast<void**>(0x140025c50);
    r14_12 = reinterpret_cast<void**>(0x140025c50);
    r15_13 = r8;
    dil14 = cl;
    ax15 = fun_14000613c();
    rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8);
    esi17 = reinterpret_cast<uint16_t>(ax15);
    if (dil14 == 24) {
        bpl18 = 2;
        goto addr_14000829d_3;
    }
    if (*reinterpret_cast<void***>(&esi17) == 32) 
        goto addr_14000828b_5;
    if (*reinterpret_cast<void***>(&esi17) == 9) 
        goto addr_14000828b_5;
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&esi17) == 94)) {
        addr_140008286_8:
        bpl18 = 1;
        goto addr_14000829d_3;
    } else {
        ax19 = fun_14000613c();
        rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
        if (ax19 == 32 || ax19 == 9) {
            addr_14000828b_5:
            bpl18 = 2;
            ax20 = fun_140008044(0, rdx, r8, r9);
            rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
        } else {
            rdx21 = g140026480;
            *reinterpret_cast<uint32_t*>(&rcx22) = reinterpret_cast<uint16_t>(ax19);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = 0;
            ungetwc(rcx22, rdx21);
            rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
            esi17 = 94;
            goto addr_140008286_8;
        }
    }
    while (1) {
        esi17 = reinterpret_cast<uint16_t>(ax20);
        addr_14000829d_3:
        *reinterpret_cast<uint32_t*>(&r8_23) = 60;
        *reinterpret_cast<int32_t*>(&r8_23 + 4) = 0;
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&esi17) == 34)) {
            al24 = v9;
        } else {
            al24 = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(v9 == 0)));
            v9 = al24;
        }
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&esi17) == 94)) {
            addr_1400084f0_15:
            ecx25 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&esi17));
            if (reinterpret_cast<int32_t>(ecx25) > reinterpret_cast<int32_t>(59)) {
                if (reinterpret_cast<int32_t>(ecx25) > reinterpret_cast<int32_t>(68)) {
                    if (ecx25 == 70 || ecx25 == 82) {
                        addr_1400085c0_18:
                        *reinterpret_cast<void***>(&edi26) = reinterpret_cast<void**>(13);
                    } else {
                        if (ecx25 == 92) {
                            *reinterpret_cast<void***>(&edi26) = reinterpret_cast<void**>(3);
                            goto addr_140008423_21;
                        }
                        if (ecx25 == 0xffff) 
                            goto addr_1400086a1_23; else 
                            goto addr_140008665_24;
                    }
                } else {
                    if (ecx25 == 68) 
                        goto addr_1400085c0_18;
                    if (ecx25 == 60) 
                        goto addr_140008641_27;
                    if (ecx25 == 61) {
                        *reinterpret_cast<void***>(&edi26) = reinterpret_cast<void**>(2);
                        goto addr_140008423_21;
                    }
                    if (reinterpret_cast<int32_t>(ecx25) <= reinterpret_cast<int32_t>(62)) 
                        goto addr_140008665_24; else 
                        goto addr_1400085ae_31;
                }
            } else {
                if (ecx25 == 59) {
                    edi26 = 0;
                    if (bpl18) 
                        goto addr_140008423_21;
                    zf27 = g140026489 == 0;
                    if (!zf27) 
                        goto addr_1400086fa_35; else 
                        goto addr_140008583_36;
                } else {
                    ecx28 = ecx25 - 9;
                    if (!ecx28) 
                        goto addr_140008563_38;
                    ecx29 = ecx28 - 1;
                    if (!ecx29) 
                        goto addr_1400086a1_23; else 
                        goto addr_140008510_40;
                }
            }
        } else {
            if (al24 || dil14 != 25) {
                ax30 = fun_14000613c();
                rdx31 = g140026480;
                *reinterpret_cast<uint32_t*>(&rcx32) = reinterpret_cast<uint16_t>(ax30);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx32) + 4) = 0;
                ungetwc(rcx32, rdx31);
                rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8 - 8 + 8);
                esi17 = 94;
                goto addr_1400084e3_43;
            }
            ax33 = fun_14000613c();
            rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
            esi17 = reinterpret_cast<uint16_t>(ax33);
            *reinterpret_cast<uint32_t*>(&rcx34) = esi17;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = 0;
            if (reinterpret_cast<int32_t>(esi17) > reinterpret_cast<int32_t>(45)) 
                goto addr_14000832a_45; else 
                goto addr_1400082ec_46;
        }
        addr_1400085c3_47:
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&edi26) == 12)) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&edi26) == 1)) {
                addr_140008423_21:
                *reinterpret_cast<uint32_t*>(&rax35) = bpl18;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax35) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rax36) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&edi26));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax36) + 4) = 0;
                bpl18 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rax35 * 14 + reinterpret_cast<int64_t>(rax36) + reinterpret_cast<unsigned char>(0x140000000)) + 0x11a90);
            } else {
                dil14 = v6;
                goto addr_1400086f3_50;
            }
        } else {
            *reinterpret_cast<uint32_t*>(&r8_23) = 60;
            *reinterpret_cast<int32_t*>(&r8_23 + 4) = 0;
            goto addr_1400085d3_52;
        }
        addr_14000843a_53:
        if (bpl18 == 64) 
            break;
        if (32 & bpl18) {
            *reinterpret_cast<uint32_t*>(&rcx37) = g140025c20;
            *reinterpret_cast<int32_t*>(&rcx37 + 4) = 0;
            *reinterpret_cast<uint32_t*>(&r8_23) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&esi17));
            *reinterpret_cast<int32_t*>(&r8_23 + 4) = 0;
            fun_140003898(rcx37, (static_cast<uint32_t>(bpl18) & 0xffffffdf) + 0x3e8, r8_23, r9);
            rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
        }
        if (bpl18) {
            *reinterpret_cast<void***>(rbx7) = *reinterpret_cast<void***>(&esi17);
            rbx7 = rbx7 + 2;
            if (rbx7 == r15_13) {
                zf38 = g140025c30 == 0;
                if (!zf38) {
                    rdi39 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r13_10) + 0x400);
                    if (reinterpret_cast<uint64_t>(rdi39) < reinterpret_cast<uint64_t>(r13_10)) 
                        goto addr_1400087e8_60;
                    rcx40 = g140025c30;
                    rdx41 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rdi39) + reinterpret_cast<uint64_t>(rdi39));
                    rax42 = fun_140009274(rcx40, rdx41, r8_23, r9, rcx40, rdx41);
                    rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
                    r12_8 = rax42;
                    if (!rax42) 
                        goto addr_1400087e8_60;
                    g140025c30 = rax42;
                    rbx7 = rax42 + reinterpret_cast<uint64_t>(r13_10) * 2;
                    r15_13 = rax42 + reinterpret_cast<uint64_t>(rdi39) * 2;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi39) = 0x800;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi39) + 4) = 0;
                    rax43 = reinterpret_cast<void**>(0x1000);
                    if (__intrinsic()) {
                        rax43 = reinterpret_cast<void**>(0xffffffffffffffff);
                    }
                    rax44 = fun_140009214(rax43, __intrinsic(), r8_23, r9, rax43, __intrinsic());
                    *reinterpret_cast<int32_t*>(&r9) = 0x400;
                    *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                    g140025c30 = rax44;
                    wcsncpy_s(rax44, 0x800, r14_12, 0x400);
                    rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8 - 8 + 8);
                    rax45 = g140025c30;
                    rbx7 = rax45 + 0x800;
                    r15_13 = rax45 + 0x1000;
                }
                v5 = r15_13;
                r13_10 = rdi39;
            }
        } else {
            ++g140025c20;
            *reinterpret_cast<void***>(rbx7 + 0xfffffffffffffffe) = reinterpret_cast<void**>(32);
            g140015041 = reinterpret_cast<void**>(1);
            ax46 = fun_14000613c();
            rsp47 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
            g140015041 = reinterpret_cast<void**>(0);
            if (ax46 == 32 || reinterpret_cast<int1_t>(ax46 == 9)) {
                bpl18 = 2;
                addr_1400084a5_69:
                ax46 = fun_14000613c();
                rsp47 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp47) - 8 + 8);
                if (ax46 == 32) 
                    goto addr_1400084a5_69;
                if (ax46 == 9) 
                    goto addr_1400084a5_69;
            }
            rdx48 = g140026480;
            *reinterpret_cast<uint32_t*>(&rcx49) = reinterpret_cast<uint16_t>(ax46);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx49) + 4) = 0;
            ungetwc(rcx49, rdx48, r8_23, r9);
            rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp47) - 8 + 8);
        }
        addr_1400087d9_72:
        ax20 = fun_14000613c();
        rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
        dil14 = v6;
        continue;
        addr_1400085d3_52:
        if (v6 != 24) 
            goto addr_140008423_21;
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&esi17) == 60)) 
            goto addr_140008423_21;
        ax50 = fun_14000613c();
        rsp51 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
        if (!reinterpret_cast<int1_t>(ax50 == 60)) {
            rdx52 = g140026480;
            *reinterpret_cast<uint32_t*>(&rcx53) = reinterpret_cast<uint16_t>(ax50);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx53) + 4) = 0;
            ungetwc(rcx53, rdx52);
            rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp51) - 8 + 8);
        } else {
            r8_23 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp51) + 0x80);
            rax54 = fun_140006ee0(rbx7, reinterpret_cast<int64_t>(rsp51) + 0x88, r8_23, r9);
            rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp51) - 8 + 8);
            --g140025c20;
            rbx7 = rax54;
            r15_13 = v5;
            *reinterpret_cast<void***>(&edi26) = reinterpret_cast<void**>(6);
            r14_12 = v11;
            esi17 = 10;
        }
        *reinterpret_cast<uint32_t*>(&rax55) = bpl18;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax55) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rax56) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&edi26));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax56) + 4) = 0;
        bpl18 = *reinterpret_cast<unsigned char*>(rax55 * 14 + rax56 + 0x140000000 + 0x11a90);
        goto addr_14000843a_53;
        addr_1400086a1_23:
        *reinterpret_cast<void***>(&edi26) = reinterpret_cast<void**>(6);
        goto addr_140008423_21;
        addr_140008665_24:
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&esi17)) >= reinterpret_cast<unsigned char>(0x80)) {
            *reinterpret_cast<uint32_t*>(&rcx57) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&esi17));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx57) + 4) = 0;
            eax58 = reinterpret_cast<int32_t>(iswspace(rcx57));
            rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
            cl59 = reinterpret_cast<uint1_t>(eax58 == 0);
        } else {
            *reinterpret_cast<uint32_t*>(&rax60) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&esi17));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax60) + 4) = 0;
            cl59 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rax60) + reinterpret_cast<unsigned char>(0x140000000)) + 0x11640) & 1);
        }
        *reinterpret_cast<void***>(&edi26) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(dil14 - reinterpret_cast<unsigned char>(dil14 + reinterpret_cast<uint1_t>(dil14 < reinterpret_cast<unsigned char>(dil14 + reinterpret_cast<uint1_t>(!!cl59))))) & 10);
        goto addr_1400085c3_47;
        addr_1400085ae_31:
        if (reinterpret_cast<int32_t>(ecx25) <= reinterpret_cast<int32_t>(64)) {
            addr_140008641_27:
            *reinterpret_cast<void***>(&edi26) = reinterpret_cast<void**>(12);
            goto addr_1400085d3_52;
        } else {
            if (ecx25 != 66) 
                goto addr_140008665_24; else 
                goto addr_1400085c0_18;
        }
        addr_1400086fa_35:
        v9 = reinterpret_cast<void**>(0);
        fun_140007b64(0, 0x140000000, 60, r9);
        rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
        ++g140025c20;
        goto addr_1400087d9_72;
        addr_140008583_36:
        goto addr_140008423_21;
        addr_140008510_40:
        ecx61 = ecx29 - 22;
        if (!ecx61) {
            addr_140008563_38:
            *reinterpret_cast<void***>(&edi26) = reinterpret_cast<void**>(5);
            goto addr_140008423_21;
        } else {
            ecx62 = ecx61 - 3;
            if (!ecx62) {
                addr_1400086f3_50:
                if (bpl18) {
                    if (dil14 == 25) 
                        break;
                    *reinterpret_cast<uint32_t*>(&rax63) = bpl18;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax63) + 4) = 0;
                    bpl18 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rax63 * 14 + reinterpret_cast<unsigned char>(0x140000000)) + 0x11a91);
                    goto addr_14000843a_53;
                } else {
                    goto addr_1400086fa_35;
                }
            } else {
                ecx64 = ecx62 - 1;
                if (!ecx64) {
                    *reinterpret_cast<void***>(&edi26) = reinterpret_cast<void**>(7);
                    goto addr_140008423_21;
                } else {
                    ecx65 = ecx64 - 4;
                    if (!ecx65) {
                        *reinterpret_cast<void***>(&edi26) = reinterpret_cast<void**>(8);
                        goto addr_140008423_21;
                    } else {
                        ecx66 = ecx65 - 1;
                        if (!ecx66) {
                            *reinterpret_cast<void***>(&edi26) = reinterpret_cast<void**>(9);
                            goto addr_140008423_21;
                        } else {
                            ecx67 = ecx66 - 1;
                            if (!ecx67) {
                                *reinterpret_cast<void***>(&edi26) = reinterpret_cast<void**>(11);
                                goto addr_140008423_21;
                            } else {
                                if (!(ecx67 - 16)) {
                                    *reinterpret_cast<void***>(&edi26) = reinterpret_cast<void**>(4);
                                    goto addr_140008423_21;
                                }
                            }
                        }
                    }
                }
            }
        }
        addr_14000832a_45:
        if (*reinterpret_cast<uint32_t*>(&rcx34) == 64) 
            goto addr_140008352_96;
        if (*reinterpret_cast<uint32_t*>(&rcx34) != 92) 
            goto addr_140008338_98;
        addr_140008419_99:
        *reinterpret_cast<void***>(&edi26) = reinterpret_cast<void**>(0);
        goto addr_140008423_21;
        addr_140008338_98:
        ecx68 = *reinterpret_cast<uint32_t*>(&rcx34) + 0xffffffa2;
        if (ecx68 > 31 || !static_cast<int1_t>(0xa0000001 >> ecx68)) {
            addr_1400084e3_43:
            *reinterpret_cast<uint32_t*>(&r8_23) = 60;
            *reinterpret_cast<int32_t*>(&r8_23 + 4) = 0;
            goto addr_1400084f0_15;
        } else {
            addr_140008352_96:
            *reinterpret_cast<void***>(rbx7) = reinterpret_cast<void**>(94);
            rbx7 = rbx7 + 2;
            if (rbx7 == r15_13) {
                rcx69 = g140025c30;
                if (rcx69) {
                    rdi70 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r13_10) + 0x400);
                    if (reinterpret_cast<uint64_t>(rdi70) < reinterpret_cast<uint64_t>(r13_10) || (rax71 = fun_140009274(rcx69, reinterpret_cast<uint64_t>(rdi70) + reinterpret_cast<uint64_t>(rdi70), 60, r9), rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8), r12_8 = rax71, !rax71)) {
                        *reinterpret_cast<uint32_t*>(&rcx72) = g140025c20;
                        *reinterpret_cast<int32_t*>(&rcx72 + 4) = 0;
                        fun_140003898(rcx72, 0x419, 60, r9);
                        rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
                    }
                    g140025c30 = r12_8;
                    rbx7 = r12_8 + reinterpret_cast<uint64_t>(r13_10) * 2;
                    r15_13 = r12_8 + reinterpret_cast<uint64_t>(rdi70) * 2;
                } else {
                    *reinterpret_cast<int32_t*>(&rax73) = static_cast<int32_t>(reinterpret_cast<uint64_t>(rcx69 + 2));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax73) + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rdi70) = 0x800;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi70) + 4) = 0;
                    rax74 = reinterpret_cast<void**>(rax73 * 0x800);
                    if (__intrinsic()) {
                        rax74 = reinterpret_cast<void**>(0xffffffffffffffff);
                    }
                    rax75 = fun_140009214(rax74, __intrinsic(), 60, r9, rax74, __intrinsic());
                    *reinterpret_cast<int32_t*>(&r9) = 0x400;
                    *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                    g140025c30 = rax75;
                    r8_23 = r14_12;
                    wcsncpy_s(rax75, 0x800, r8_23, 0x400);
                    rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8 - 8 + 8);
                    rax76 = g140025c30;
                    rbx7 = rax76 + 0x800;
                    r15_13 = rax76 + 0x1000;
                }
                r14_12 = g140025c30;
                r13_10 = rdi70;
                v11 = r14_12;
                v5 = r15_13;
                goto addr_140008419_99;
            }
        }
        addr_1400082ec_46:
        if (*reinterpret_cast<uint32_t*>(&rcx34) == 45) 
            goto addr_140008352_96;
        if (*reinterpret_cast<uint32_t*>(&rcx34) == 10) 
            goto addr_140008419_99;
        if (*reinterpret_cast<uint32_t*>(&rcx34) == 33) 
            goto addr_140008352_96;
        if (*reinterpret_cast<int32_t*>(&rcx34) <= reinterpret_cast<int32_t>(33)) 
            goto addr_1400084e3_43;
        if (*reinterpret_cast<int32_t*>(&rcx34) <= reinterpret_cast<int32_t>(35)) 
            goto addr_140008419_99;
        if (static_cast<uint32_t>(rcx34 - 36) & 0xfffffffa) 
            goto addr_1400084e3_43;
        if (*reinterpret_cast<uint32_t*>(&rcx34) != 37) 
            goto addr_140008352_96;
        goto addr_1400084e3_43;
    }
    addr_1400087f9_115:
    rdx77 = g140026480;
    *reinterpret_cast<uint32_t*>(&rcx78) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&esi17));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx78) + 4) = 0;
    ungetwc(rcx78, rdx77, r8_23, r9);
    if (reinterpret_cast<unsigned char>(rbx7) > reinterpret_cast<unsigned char>(r14_12)) {
        do {
            rdi79 = rbx7 + 0xfffffffffffffffe;
            *reinterpret_cast<uint32_t*>(&rcx80) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi79));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx80) + 4) = 0;
            eax81 = reinterpret_cast<int32_t>(iswspace(rcx80, rdx77, r8_23, r9));
            if (!eax81) 
                break;
            rbx7 = rdi79;
        } while (reinterpret_cast<unsigned char>(rdi79) > reinterpret_cast<unsigned char>(r14_12));
    }
    rcx82 = g140025c30;
    *reinterpret_cast<void***>(rbx7) = reinterpret_cast<void**>(0);
    if (!rcx82) {
        rax83 = fun_14000dcc4(r14_12, r14_12);
    } else {
        rdx84 = reinterpret_cast<void**>((reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(rbx7) - reinterpret_cast<unsigned char>(rcx82)) >> 1) * 2 + 2);
        rax83 = fun_140009274(rcx82, rdx84, r8_23, r9, rcx82, rdx84);
        if (!rax83) {
            addr_140008861_121:
            return;
        }
    }
    g140025c30 = rax83;
    goto addr_140008861_121;
    addr_1400087e8_60:
    *reinterpret_cast<uint32_t*>(&rcx85) = g140025c20;
    *reinterpret_cast<int32_t*>(&rcx85 + 4) = 0;
    fun_140003898(rcx85, 0x419, r8_23, r9);
    goto addr_1400087f9_115;
}

void** fun_14000bb94(void** rcx, void** rdx) {
    uint64_t rax3;
    signed char dl4;
    void** rax5;

    rax3 = 0xffffffffffffffff;
    do {
        ++rax3;
    } while (*reinterpret_cast<void***>(rcx + rax3 * 2));
    dl4 = 0;
    rax5 = rcx + (rax3 - 1) * 2;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rcx) == 34) && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rax5) == 34)) {
        dl4 = 1;
        goto addr_14000bbd1_5;
    }
    while (reinterpret_cast<unsigned char>(rax5) > reinterpret_cast<unsigned char>(rcx) && (*reinterpret_cast<void***>(rax5) == 32 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rax5) == 46))) {
        addr_14000bbd1_5:
        rax5 = rax5 - 2;
    }
    if (dl4) 
        goto addr_14000bbde_8;
    addr_14000bbe6_9:
    *reinterpret_cast<void***>(rax5 + 2) = reinterpret_cast<void**>(0);
    return rax5;
    addr_14000bbde_8:
    rax5 = rax5 + 2;
    *reinterpret_cast<void***>(rax5) = reinterpret_cast<void**>(34);
    goto addr_14000bbe6_9;
}

void** fun_140009078(void** rcx, void** rdx) {
    void* rsp3;
    uint64_t rax4;
    uint64_t v5;
    void** r9_6;
    void* rsp7;
    void** rdi8;
    void*** rax9;
    void** rcx10;
    void*** rdx11;
    void** rax12;
    void** rbx13;
    void** rax14;
    void** rax15;
    void* rsp16;
    void** r8_17;
    void** rdx18;
    void** rsi19;
    void* rsp20;
    uint64_t rcx21;
    void** rax22;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 0x270);
    rax4 = g140015008;
    v5 = rax4 ^ reinterpret_cast<uint64_t>(rsp3);
    r9_6 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp3) + 96);
    _wsplitpath_s(rcx, reinterpret_cast<uint64_t>(rsp3) + 80, 3, r9_6);
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp3) - 8 + 8);
    rdi8 = reinterpret_cast<void**>(0xffffffffffffffff);
    rax9 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsp7) + 80);
    rcx10 = reinterpret_cast<void**>(0xffffffffffffffff);
    do {
        ++rcx10;
    } while (rax9[reinterpret_cast<unsigned char>(rcx10) * 2]);
    rdx11 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsp7) + 96);
    rax12 = reinterpret_cast<void**>(0xffffffffffffffff);
    do {
        ++rax12;
    } while (rdx11[reinterpret_cast<unsigned char>(rax12) * 2]);
    rbx13 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax12 + 1) + reinterpret_cast<unsigned char>(rcx10));
    rax14 = reinterpret_cast<void**>(2 * reinterpret_cast<unsigned char>(rbx13));
    if (__intrinsic()) {
        rax14 = reinterpret_cast<void**>(0xffffffffffffffff);
    }
    rax15 = fun_140009214(rax14, __intrinsic(), 3, r9_6, rax14, __intrinsic());
    rsp16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
    r8_17 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp16) + 80);
    rdx18 = rbx13;
    rsi19 = rax15;
    _wmakepath_s(rax15, rdx18, r8_17, reinterpret_cast<uint64_t>(rsp16) + 96);
    rsp20 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp16) - 8 + 8);
    do {
        ++rdi8;
    } while (*reinterpret_cast<void***>(rsi19 + reinterpret_cast<unsigned char>(rdi8) * 2));
    if (92 == *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rsi19 + reinterpret_cast<unsigned char>(rdi8) * 2) - 2) || 47 == *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rsi19 + reinterpret_cast<unsigned char>(rdi8) * 2) - 2)) {
        *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsi19 + reinterpret_cast<unsigned char>(rdi8) * 2) - 2) = reinterpret_cast<void**>(0);
    }
    rcx21 = v5 ^ reinterpret_cast<uint64_t>(rsp20);
    rax22 = fun_140010130(rcx21, rdx18, r8_17, rcx21, rdx18, r8_17);
    return rax22;
}

uint64_t* fun_14000bddc() {
    return 0x14003d130;
}

unsigned char fun_140009a74(void** rcx, void*** rdx, void** r8) {
    void** eax4;
    unsigned char al5;
    unsigned char al6;

    eax4 = g140037094;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax4) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax4 == 0)) 
        goto addr_140009a9e_2;
    if (reinterpret_cast<signed char>(eax4) <= reinterpret_cast<signed char>(2)) {
        al5 = 0;
    } else {
        if (!reinterpret_cast<int1_t>(eax4 == 3)) {
            addr_140009a9e_2:
            al5 = 1;
        } else {
            al6 = fun_140009aa8(rcx, rdx, r8);
            al5 = reinterpret_cast<uint1_t>(al6 == 0);
        }
    }
    return al5;
}

void fun_140001044(int64_t rcx, void** rdx, void** r8, void** r9) {
    void* rsp5;
    int1_t zf6;
    int1_t zf7;
    void** rax8;
    int1_t zf9;
    void** rcx10;
    void** rcx11;
    void** rax12;
    void* rsp13;
    void** dl14;
    void** rax15;
    void** rcx16;
    void** v17;
    void** rcx18;
    void** rbx19;
    void** rax20;
    void** rcx21;
    void** rax22;
    void** rcx23;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 64);
    zf6 = g140025c40 == 0;
    if (!zf6) {
        g140025c38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(g140025c38) | 32);
        fun_1400011b8();
        rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
        g140025c40 = reinterpret_cast<void**>(0);
    }
    zf7 = (reinterpret_cast<unsigned char>(g140025c38) & 32) == 0;
    if (!zf7 && (rax8 = fun_14000f614(0x140025c50, rdx, r8, r9), rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8), !!*reinterpret_cast<signed char*>(&rax8))) {
        zf9 = (reinterpret_cast<unsigned char>(g140025c38) & 16) == 0;
        if (!zf9) {
            *reinterpret_cast<uint32_t*>(&rcx10) = g140025c24;
            *reinterpret_cast<int32_t*>(&rcx10 + 4) = 0;
            fun_140003898(rcx10, 0x444, r8, r9);
            rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
        }
        *reinterpret_cast<uint32_t*>(&rcx11) = g140025c24;
        *reinterpret_cast<int32_t*>(&rcx11 + 4) = 0;
        fun_140003898(rcx11, 0x43d, r8, r9);
        rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
    }
    rax12 = fun_14000dc58();
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
    dl14 = g140025c38;
    if (!(reinterpret_cast<unsigned char>(dl14) & 64)) {
        rax15 = fun_14000dcc4(0x140025c50);
        rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
        dl14 = g140025c38;
        *reinterpret_cast<void***>(rax12 + 8) = rax15;
    } else {
        rcx16 = g140025c30;
        g140025c30 = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(rax12 + 8) = rcx16;
    }
    v17 = rax12;
    if ((reinterpret_cast<unsigned char>(dl14) & 48) != 16) {
        rcx18 = *reinterpret_cast<void***>(rax12 + 8);
        *reinterpret_cast<int32_t*>(&r9) = 0;
        *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
        fun_14000dfd0(rcx18, 0x140025c48, 0, 0);
        rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
        dl14 = g140025c38;
    }
    if (reinterpret_cast<unsigned char>(dl14) & 32 && (rbx19 = g140025c48, fun_140001474("$", reinterpret_cast<int64_t>(rsp13) + 80, 0x140025c48, r9), fun_140001474("*", reinterpret_cast<int64_t>(rsp13) - 8 + 8 + 80, 0, r9), g140025c48 = rbx19, rax20 = rbx19, !!rbx19)) {
        rcx21 = g14003d0e0;
        do {
            rbx19 = *reinterpret_cast<void***>(rbx19);
            *reinterpret_cast<void***>(rax20) = rcx21;
            rcx21 = rax20;
            g140025c48 = rbx19;
            rax20 = rbx19;
        } while (rbx19);
        g14003d0e0 = rcx21;
    }
    rax22 = g140025c28;
    rcx23 = reinterpret_cast<void**>(0x140025c28);
    while (rax22) {
        rcx23 = rax22;
        rax22 = *reinterpret_cast<void***>(rax22);
    }
    *reinterpret_cast<void***>(rcx23) = v17;
    return;
}

void** fun_1400017f0(int64_t rcx, void** rdx, void** r8, void** r9) {
    void** rax5;
    void** dil6;
    void** sil7;
    int1_t zf8;
    void** r8_9;
    void** rcx10;
    void** rax11;
    void** rcx12;
    void** rbx13;
    void** rcx14;
    void** rcx15;
    void** rcx16;
    void** rax17;
    void** rcx18;
    void** rcx19;
    int1_t zf20;
    void** rcx21;
    void** rcx22;

    rax5 = g140025c38;
    dil6 = reinterpret_cast<void**>(1);
    sil7 = reinterpret_cast<void**>(1);
    if (!(reinterpret_cast<unsigned char>(rax5) & 16)) {
        if (reinterpret_cast<unsigned char>(rax5) & 15) {
            zf8 = g140025c28 == 0;
            if (!zf8) {
                if (!(reinterpret_cast<unsigned char>(rax5) & 2)) {
                    if (!(reinterpret_cast<unsigned char>(rax5) & 4)) {
                        if (!(reinterpret_cast<unsigned char>(rax5) & 8)) {
                            r8_9 = reinterpret_cast<void**>(".");
                            if (!(reinterpret_cast<unsigned char>(rax5) & 1)) {
                                r8_9 = reinterpret_cast<void**>(0);
                            }
                        } else {
                            r8_9 = reinterpret_cast<void**>(".");
                        }
                    } else {
                        r8_9 = reinterpret_cast<void**>(".");
                    }
                } else {
                    r8_9 = reinterpret_cast<void**>(".");
                }
                *reinterpret_cast<uint32_t*>(&rcx10) = g140025c24;
                *reinterpret_cast<int32_t*>(&rcx10 + 4) = 0;
                rax5 = fun_140003898(rcx10, 0x441, r8_9, r9);
            }
        } else {
            rax11 = g140025c08;
            rcx12 = g140025c28;
            rbx13 = g1400157e0;
            *reinterpret_cast<void***>(rax11 + 16) = rcx12;
            rcx14 = g140025c08;
            rax5 = g140025c48;
            *reinterpret_cast<void***>(rcx14 + 24) = rax5;
            rcx15 = g140025c08;
            rax5 = g1400157ef;
            *reinterpret_cast<void***>(rcx15 + 32) = rax5;
            if (rbx13) {
                do {
                    rcx16 = *reinterpret_cast<void***>(rbx13 + 8);
                    rax17 = fun_1400013b0(rcx16, rdx, r8, r9);
                    if (*reinterpret_cast<signed char*>(&rax17)) {
                        *reinterpret_cast<uint32_t*>(&rcx18) = g140025c24;
                        *reinterpret_cast<int32_t*>(&rcx18 + 4) = 0;
                        rdx = reinterpret_cast<void**>(0x445);
                        *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                        fun_140003898(rcx18, 0x445, r8, r9);
                    }
                    rcx19 = *reinterpret_cast<void***>(rbx13 + 8);
                    rdx = sil7;
                    rax5 = fun_140001ddc(rcx19, rdx, r8, r9);
                    zf20 = g1400157f8 == 0;
                    if (zf20) {
                        g1400157f8 = rbx13;
                        dil6 = reinterpret_cast<void**>(0);
                    }
                    rcx21 = *reinterpret_cast<void***>(rbx13);
                    g1400157e0 = rcx21;
                    if (dil6) {
                        rax5 = g14003d0e0;
                        *reinterpret_cast<void***>(rbx13) = rax5;
                        g14003d0e0 = rbx13;
                    }
                    sil7 = reinterpret_cast<void**>(0);
                    rbx13 = rcx21;
                } while (rcx21);
            }
        }
    } else {
        rax5 = g140025c00;
        rcx22 = g140025c28;
        *reinterpret_cast<void***>(rax5 + 24) = rcx22;
    }
    g1400157e0 = reinterpret_cast<void**>(0);
    g140025c28 = reinterpret_cast<void**>(0);
    g140025c48 = reinterpret_cast<void**>(0);
    g140025c08 = reinterpret_cast<void**>(0);
    g140025c38 = reinterpret_cast<void**>(0);
    return rax5;
}

int32_t g140015048 = -1;

void fun_14000c0b8(void** rcx, void** rdx, void** r8, void** r9) {
    int32_t ecx5;
    int32_t ecx6;
    void** rcx7;
    void* rax8;
    uint32_t eax9;
    unsigned char al10;
    void** rdx11;
    unsigned char r14b12;
    unsigned char sil13;
    void** rcx14;
    unsigned char r8b15;
    void* rax16;
    int64_t rbp17;
    void* rbp18;
    int64_t rdi19;
    void** rcx20;
    unsigned char al21;
    void* rcx22;
    void* r8_23;
    int64_t rax24;
    int64_t rax25;
    uint32_t eax26;
    int64_t rax27;
    int64_t rax28;
    unsigned char al29;
    uint32_t eax30;
    int1_t zf31;
    void* rax32;
    int64_t v33;

    ecx5 = g140015048;
    ecx6 = ecx5 + 1;
    g14002648a = reinterpret_cast<void**>(1);
    *reinterpret_cast<int32_t*>(&rcx7) = ecx6 + 1;
    *reinterpret_cast<int32_t*>(&rcx7 + 4) = 0;
    g140015048 = *reinterpret_cast<int32_t*>(&rcx7);
    *reinterpret_cast<signed char*>(ecx6 + 0x140000000 + 0x36cd0) = 23;
    rax8 = reinterpret_cast<void*>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rcx7)));
    if (reinterpret_cast<uint64_t>(rax8) < 16) {
        *reinterpret_cast<signed char*>(0x140000000 + reinterpret_cast<uint64_t>(rax8) + 0x36cd0) = 0;
        eax9 = g140025c20;
        g140025c24 = eax9;
        al10 = fun_140007f84();
        rdx11 = reinterpret_cast<void**>(static_cast<int64_t>(g140015048));
        r14b12 = al10;
        sil13 = 0;
        rcx14 = rdx11;
        r8b15 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rdx11 + 0x140000000) + 0x36cd0);
        while (r8b15 != 23) {
            if (!(r8b15 & 64)) {
                if (!(r8b15 & 16)) {
                    *reinterpret_cast<uint32_t*>(&rax16) = static_cast<uint32_t>(r14b12) & 15;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
                    *reinterpret_cast<uint32_t*>(&rbp17) = r8b15;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp17) + 4) = 0;
                    rbp18 = reinterpret_cast<void*>(rbp17 << 3);
                    *reinterpret_cast<uint32_t*>(&rdi19) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax16) + reinterpret_cast<int64_t>(rbp18) + 0x140000000 + 0x11ba0);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = 0;
                    if (*reinterpret_cast<unsigned char*>(&rdi19) & 32) {
                        *reinterpret_cast<uint32_t*>(&rcx20) = g140025c24;
                        *reinterpret_cast<int32_t*>(&rcx20 + 4) = 0;
                        fun_140003898(rcx20, static_cast<uint32_t>(rdi19 + 0x3e8), 0x140025c50, r9);
                        *reinterpret_cast<int32_t*>(&rdx11) = g140015048;
                    }
                    *reinterpret_cast<int32_t*>(&rdx11) = *reinterpret_cast<int32_t*>(&rdx11) - 1;
                    g140015048 = *reinterpret_cast<int32_t*>(&rdx11);
                    if (*reinterpret_cast<signed char*>(&rdi19) < reinterpret_cast<signed char>(0)) {
                        if (!sil13) {
                            al21 = fun_140007f84();
                            *reinterpret_cast<int32_t*>(&rdx11) = g140015048;
                            sil13 = al21;
                        }
                        *reinterpret_cast<uint32_t*>(&rcx22) = static_cast<uint32_t>(sil13) & 15;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = 0;
                        *reinterpret_cast<uint32_t*>(&rdi19) = (*reinterpret_cast<uint32_t*>(&rdi19) & 15) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rcx22) + reinterpret_cast<int64_t>(rbp18) + 0x140000000 + 0x11b80);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = 0;
                    }
                    r9 = *reinterpret_cast<void***>(0x140000000 + rdi19 * 8 + 0x11be0);
                    *reinterpret_cast<uint32_t*>(&rcx14) = *reinterpret_cast<uint32_t*>(&rdi19);
                    *reinterpret_cast<int32_t*>(&rcx14 + 4) = 0;
                    *reinterpret_cast<uint32_t*>(&r8_23) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r9));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_23) + 4) = 0;
                    if (*reinterpret_cast<uint32_t*>(&r8_23)) {
                        do {
                            *reinterpret_cast<int32_t*>(&rdx11) = *reinterpret_cast<int32_t*>(&rdx11) + 1;
                            rcx14 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rdx11)));
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rcx14 + 0x140000000) + 0x36cd0) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(r8_23) + reinterpret_cast<unsigned char>(r9));
                            *reinterpret_cast<uint32_t*>(&r8_23) = *reinterpret_cast<uint32_t*>(&r8_23) - 1;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_23) + 4) = 0;
                        } while (*reinterpret_cast<uint32_t*>(&r8_23));
                        g140015048 = *reinterpret_cast<int32_t*>(&rdx11);
                    }
                } else {
                    if (r8b15 == r14b12) {
                        *reinterpret_cast<int32_t*>(&rdx11) = *reinterpret_cast<int32_t*>(&rdx11) - 1;
                        g140015048 = *reinterpret_cast<int32_t*>(&rdx11);
                        *reinterpret_cast<unsigned char*>(&rcx14) = *reinterpret_cast<unsigned char*>(*reinterpret_cast<int32_t*>(&rdx11) + 0x140000000 + 0x36cd0);
                        if (*reinterpret_cast<unsigned char*>(&rcx14) & 64) {
                            *reinterpret_cast<uint32_t*>(&rax24) = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rcx14)) & 15;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = 0;
                            g140015048 = *reinterpret_cast<int32_t*>(&rdx11) - 1;
                            rax25 = *reinterpret_cast<int64_t*>(0x140000000 + rax24 * 8 + 0x11b50);
                            rax25();
                            *reinterpret_cast<int32_t*>(&rdx11) = g140015048;
                        }
                        eax26 = g140025c20;
                        g140025c24 = eax26;
                        if (!sil13) 
                            goto addr_14000c1f1_19; else 
                            goto addr_14000c1d4_20;
                    } else {
                        *reinterpret_cast<uint32_t*>(&rcx14) = g140025c24;
                        *reinterpret_cast<int32_t*>(&rcx14 + 4) = 0;
                        fun_140003898(rcx14, 0x409, 0x140025c50, r9);
                        goto addr_14000c210_22;
                    }
                }
            } else {
                *reinterpret_cast<uint32_t*>(&rax27) = static_cast<uint32_t>(r8b15) & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax27) + 4) = 0;
                g140015048 = *reinterpret_cast<int32_t*>(&rdx11) - 1;
                rax28 = *reinterpret_cast<int64_t*>(0x140000000 + rax27 * 8 + 0x11b50);
                rax28(rcx14);
                goto addr_14000c210_22;
            }
            addr_14000c2c3_24:
            r8b15 = *reinterpret_cast<unsigned char*>(*reinterpret_cast<int32_t*>(&rdx11) + 0x140000000 + 0x36cd0);
            continue;
            addr_14000c1f1_19:
            al29 = fun_140007f84();
            r14b12 = al29;
            eax30 = g140025c20;
            g140025c24 = eax30;
            addr_14000c210_22:
            *reinterpret_cast<int32_t*>(&rdx11) = g140015048;
            goto addr_14000c2c3_24;
            addr_14000c1d4_20:
            zf31 = reinterpret_cast<int1_t>(g140025c50 == 10);
            if (zf31) {
                g140025c24 = eax26 - 1;
            }
            r14b12 = sil13;
            sil13 = 0;
            goto addr_14000c2c3_24;
        }
        g140015048 = *reinterpret_cast<int32_t*>(&rdx11) - 1;
        return;
    }
    fun_14001025c(rcx7, rdx, r8, r9);
    rax32 = reinterpret_cast<void*>(0xffffffffffffffff);
    do {
        rax32 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax32) + 1);
    } while (*reinterpret_cast<void***>(rdx + reinterpret_cast<uint64_t>(rax32) * 2));
    if (reinterpret_cast<unsigned char>(rcx7) + reinterpret_cast<uint64_t>(rax32) > 40) 
        goto addr_14000c322_32;
    addr_14000c331_33:
    goto v33;
    addr_14000c322_32:
    fun_14000bfe0("\n", rdx, r8, r9);
    goto addr_14000c331_33;
}

void** fun_14000d80c(void** rcx, void** rdx) {
    void** rax3;
    void* rsp4;
    void** rbx5;
    void** r15_6;
    void** r12_7;
    void** rbp8;
    void** rsi9;
    void** rdi10;
    uint32_t eax11;
    void** r8_12;
    void** rdi13;
    void** r14_14;
    void** rcx15;
    int32_t eax16;
    void** r14_17;
    void** al18;
    void** rcx19;
    void** rcx20;
    void** rcx21;
    void* rsp22;
    void** r14_23;
    void** rcx24;
    void** rax25;
    void** rdi26;
    int1_t zf27;
    void** rcx28;
    void** rcx29;
    void** rcx30;

    rax3 = reinterpret_cast<void**>(__zero_stack_offset());
    rsp4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 64);
    rbx5 = g140025c00;
    r15_6 = g140025c18;
    g140025c00 = reinterpret_cast<void**>(0);
    while (r15_6) {
        r12_7 = *reinterpret_cast<void***>(r15_6 + 8);
        rbp8 = reinterpret_cast<void**>(0xffffffffffffffff);
        do {
            ++rbp8;
        } while (*reinterpret_cast<void***>(r12_7 + reinterpret_cast<unsigned char>(rbp8) * 2));
        rsi9 = rbx5;
        if (rbx5) {
            do {
                rdi10 = *reinterpret_cast<void***>(rsi9 + 16);
                eax11 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi10));
                if (*reinterpret_cast<int16_t*>(&eax11) == 0x7b) {
                    do {
                        if (*reinterpret_cast<int16_t*>(&eax11) == 94) {
                            rdi10 = rdi10 + 2;
                        }
                        rdi10 = rdi10 + 2;
                        eax11 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi10));
                    } while (*reinterpret_cast<int16_t*>(&eax11) != 0x7d);
                    rdi10 = rdi10 + 2;
                }
                r8_12 = rbp8;
                rdx = rdi10;
                rax3 = reinterpret_cast<void**>(_wcsnicmp(r12_7, rdx, r8_12));
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp4) - 8 + 8);
                if (*reinterpret_cast<int32_t*>(&rax3) || *reinterpret_cast<void***>(rdi10 + reinterpret_cast<unsigned char>(rbp8) * 2) != 46 && !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi10 + reinterpret_cast<unsigned char>(rbp8) * 2) == 0x7b)) {
                    rsi9 = *reinterpret_cast<void***>(rsi9);
                    continue;
                } else {
                    rdi13 = rsi9;
                    if (!*reinterpret_cast<void***>(rsi9 + 8)) {
                        rbx5 = *reinterpret_cast<void***>(rsi9);
                    } else {
                        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi9 + 8)) = *reinterpret_cast<void***>(rsi9);
                    }
                    if (*reinterpret_cast<void***>(rsi9)) {
                        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi9) + 8) = *reinterpret_cast<void***>(rsi9 + 8);
                    }
                    rsi9 = *reinterpret_cast<void***>(rsi9);
                    *reinterpret_cast<void***>(rdi13) = reinterpret_cast<void**>(0);
                    r14_14 = g140025c00;
                    while (r14_14) {
                        rdx = *reinterpret_cast<void***>(rdi13 + 16);
                        rcx15 = *reinterpret_cast<void***>(r14_14 + 16);
                        eax16 = reinterpret_cast<int32_t>(_wcsicmp(rcx15, rdx, r8_12));
                        rsp4 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp4) - 8 + 8);
                        if (!eax16) 
                            goto addr_14000d911_21;
                        r14_14 = *reinterpret_cast<void***>(r14_14);
                    }
                }
                r14_17 = *reinterpret_cast<void***>(rdi13 + 24);
                while (r14_17) {
                    al18 = *reinterpret_cast<void***>(rdi13 + 40);
                    g14003d110 = al18;
                    if (al18) {
                        g14003d118 = *reinterpret_cast<void***>(rdi13 + 16);
                    }
                    rcx19 = *reinterpret_cast<void***>(r14_17 + 8);
                    rdx = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp4) + 0x70);
                    *reinterpret_cast<int32_t*>(&r8_12) = 0;
                    *reinterpret_cast<int32_t*>(&r8_12 + 4) = 0;
                    fun_14000dfd0(rcx19, rdx, 0, 0);
                    rsp4 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp4) - 8 + 8);
                    r14_17 = *reinterpret_cast<void***>(r14_17);
                    g14003d110 = reinterpret_cast<void**>(0);
                }
                rcx20 = reinterpret_cast<void**>(0x140025c00);
                *reinterpret_cast<void***>(rdi13 + 32) = reinterpret_cast<void**>(0);
                rax3 = g140025c00;
                while (rax3) {
                    rcx20 = rax3;
                    rax3 = *reinterpret_cast<void***>(rax3);
                }
                *reinterpret_cast<void***>(rcx20) = rdi13;
                continue;
                addr_14000d911_21:
                rcx21 = *reinterpret_cast<void***>(rdi13 + 16);
                free(rcx21, rdx, r8_12);
                rsp22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp4) - 8 + 8);
                while (r14_23 = *reinterpret_cast<void***>(rdi13 + 24), !!r14_23) {
                    *reinterpret_cast<void***>(rdi13 + 24) = *reinterpret_cast<void***>(r14_23);
                    rcx24 = *reinterpret_cast<void***>(r14_23 + 8);
                    free(rcx24, rdx, r8_12);
                    rsp22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp22) - 8 + 8);
                    rax25 = g14003d0e0;
                    *reinterpret_cast<void***>(r14_23) = rax25;
                    g14003d0e0 = r14_23;
                }
                rax3 = reinterpret_cast<void**>(free(rdi13, rdx, r8_12));
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp22) - 8 + 8);
            } while (rsi9);
        }
        r15_6 = *reinterpret_cast<void***>(r15_6);
    }
    if (rbx5) {
        rdi26 = rbx5;
        do {
            zf27 = (g1400157ec & 1) == 0;
            if (!zf27) {
                r8_12 = *reinterpret_cast<void***>(rbx5 + 16);
                rdx = reinterpret_cast<void**>(0xfa5);
                *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                fun_140003898(0, 0xfa5, r8_12, 0, 0, 0xfa5, r8_12, 0);
            }
            rcx28 = *reinterpret_cast<void***>(rbx5 + 16);
            free(rcx28, rdx, r8_12);
            rcx29 = *reinterpret_cast<void***>(rbx5 + 24);
            fun_140002f98(rcx29, rdx, rcx29, rdx);
            rcx30 = *reinterpret_cast<void***>(rbx5 + 32);
            fun_140002f98(rcx30, rdx, rcx30, rdx);
            rbx5 = *reinterpret_cast<void***>(rbx5);
            rax3 = reinterpret_cast<void**>(free(rdi26, rdx, r8_12));
            rdi26 = rbx5;
        } while (rbx5);
    }
    return rax3;
}

uint32_t fun_140002054(void** rcx, void** rdx, void** r8, void** r9) {
    uint32_t eax5;
    uint32_t ebx6;
    uint32_t eax7;

    eax5 = fun_14000209c(rcx, rdx, r8, 0);
    ebx6 = eax5;
    if (!1) {
        eax7 = fun_1400030d8(0, rdx, r8);
        ebx6 = ebx6 + eax7;
        fun_140003278(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 48 - 8 + 8 - 8 + 8 + 88, rdx, r8);
    }
    return ebx6;
}

int64_t _get_osfhandle = 0x14b98;

int64_t GetFileType = 0x1475a;

int64_t GetConsoleMode = 0x14768;

void** fun_14000be34(int64_t rcx, void*** rdx, void** r8) {
    int32_t eax4;
    int64_t rcx5;
    int64_t rax6;
    void** rax7;

    eax4 = reinterpret_cast<int32_t>(_fileno());
    *reinterpret_cast<int32_t*>(&rcx5) = eax4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
    rax6 = reinterpret_cast<int64_t>(_get_osfhandle(rcx5));
    rax7 = reinterpret_cast<void**>(GetFileType(rax6));
    __asm__("btr eax, 0xf");
    if (*reinterpret_cast<int32_t*>(&rax7) == 2) {
        rax7 = reinterpret_cast<void**>(GetConsoleMode(rax6, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32 - 8 + 8 - 8 + 8 - 8 + 8 + 56));
        *reinterpret_cast<unsigned char*>(&rax7) = reinterpret_cast<uint1_t>(!!*reinterpret_cast<int32_t*>(&rax7));
    } else {
        *reinterpret_cast<unsigned char*>(&rax7) = 0;
    }
    return rax7;
}

int64_t GetEnvironmentVariableW = 0x1455c;

int64_t g14003d140;

int64_t DecodePointer = 0x145ac;

int64_t GetUserDefaultUILanguage = 0x145e6;

int64_t g14003d138;

int16_t g1400120a8 = 46;

int16_t g1400120aa = 0;

int16_t g1400121b0 = 46;

int16_t g1400121b2 = 46;

int16_t g1400121b4 = 0;

int64_t GetProcessHeap = 0x145c8;

int64_t HeapAlloc = 0x145bc;

int64_t HeapFree = 0x145da;

int64_t GetModuleHandleW = 0x14576;

int64_t GetProcAddress = 0x1458a;

int64_t EncodePointer = 0x1459c;

int32_t fun_1400092b4(void** rcx, void** rdx, void** r8) {
    void* rsp4;
    void* rbp5;
    void* rsp6;
    uint64_t rax7;
    uint64_t v8;
    void** v9;
    void** r9_10;
    int32_t eax11;
    void*** rcx12;
    void** rax13;
    int32_t eax14;
    int32_t eax15;
    int64_t rcx16;
    uint64_t rcx17;
    void** rax18;
    int64_t rax19;
    void* rsp20;
    int64_t rbx21;
    int32_t eax22;
    uint32_t ecx23;
    uint16_t cx24;
    int32_t eax25;
    int32_t eax26;
    int64_t rcx27;
    uint32_t ebx28;
    void** v29;
    int64_t rax30;
    int64_t rdi31;
    int32_t eax32;
    void** r9_33;
    int32_t eax34;
    void* rcx35;
    void** rax36;
    void* rsp37;
    void** rbx38;
    void*** rax39;
    void** rdi40;
    int32_t eax41;
    unsigned char v42;
    uint32_t ecx43;
    uint16_t v44;
    int1_t zf45;
    uint32_t eax46;
    uint16_t v47;
    int1_t zf48;
    int1_t zf49;
    int1_t zf50;
    uint32_t eax51;
    uint16_t v52;
    int1_t zf53;
    void** rcx54;
    int32_t eax55;
    void* rax56;
    int32_t eax57;
    int32_t eax58;
    int32_t eax59;
    int64_t rax60;
    int32_t eax61;
    int32_t eax62;
    int64_t rax63;
    void** rax64;
    void** rsi65;
    void* rsp66;
    uint64_t rax67;
    int32_t eax68;
    void* rsp69;
    void** rdx70;
    void** v71;
    int32_t esi72;
    int64_t rcx73;
    void* rsp74;
    void** v75;
    int32_t eax76;
    int32_t eax77;
    int32_t eax78;
    void*** v79;
    int32_t eax80;
    void* rcx81;
    int32_t* v82;
    void** rax83;
    int32_t v84;
    void** eax85;
    void*** v86;
    int16_t** v87;
    int64_t* v88;
    void*** v89;
    uint64_t rcx90;
    int64_t v91;
    uint32_t eax92;
    uint16_t v93;
    void** r9_94;
    struct s15* rcx95;
    int32_t eax96;
    void** rbx97;
    int64_t rax98;
    int64_t rax99;
    int64_t rax100;
    int64_t rax101;
    int64_t rax102;
    int64_t rax103;
    int64_t rax104;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8);
    rbp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 0x670);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 0x770);
    rax7 = g140015008;
    v8 = rax7 ^ reinterpret_cast<uint64_t>(rsp6);
    v9 = rdx;
    if (!(!*reinterpret_cast<void***>(rcx) || (!rdx || !*reinterpret_cast<void***>(rdx)))) {
        r8 = rcx;
        g14003ddf8 = 0;
        r9_10 = reinterpret_cast<void**>(0xffffffffffffffff);
        *reinterpret_cast<int32_t*>(&rdx) = 0x104;
        *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
        eax11 = reinterpret_cast<int32_t>(wcsncpy_s(reinterpret_cast<int64_t>(rbp5) + 0x450, 0x104, r8, 0xffffffffffffffff));
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
        if (eax11) 
            goto addr_140009360_4;
        rcx12 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rbp5) + 0x450);
        rax13 = reinterpret_cast<void**>(0xffffffffffffffff);
        do {
            ++rax13;
        } while (rcx12[reinterpret_cast<unsigned char>(rax13) * 2]);
        if (*reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rbp5) + reinterpret_cast<unsigned char>(rax13) * 2 + 0x44e) == 92) 
            goto addr_1400093a7_8;
        r9_10 = reinterpret_cast<void**>(0xffffffffffffffff);
        r8 = reinterpret_cast<void**>("\\");
        rdx = reinterpret_cast<void**>(0x104);
        eax14 = reinterpret_cast<int32_t>(wcsncat_s(reinterpret_cast<int64_t>(rbp5) + 0x450, 0x104, "\\", 0xffffffffffffffff));
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
        if (eax14) 
            goto addr_140009360_4;
        addr_1400093a7_8:
        rdx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0x218);
        *reinterpret_cast<int32_t*>(&r8) = 6;
        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
        eax15 = reinterpret_cast<int32_t>(GetEnvironmentVariableW("V", rdx, 6, 0xffffffffffffffff));
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
        if (reinterpret_cast<uint32_t>(eax15 - 1) > 4) 
            goto addr_14000945a_10;
        if (1) 
            goto addr_14000945a_10;
        r9_10 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6) + 48);
        *reinterpret_cast<int32_t*>(&r8) = 10;
        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
        rdx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0x218);
        fun_1400098fc(reinterpret_cast<int64_t>(rbp5) - 0x80, rdx, 10, r9_10);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
        if (!1) 
            goto addr_140009453_13;
        addr_14000945a_10:
        rcx16 = g14003d140;
        if (rcx16) 
            goto addr_1400094a6_14; else 
            goto addr_14000946b_15;
    }
    addr_1400098cb_16:
    rcx17 = v8 ^ reinterpret_cast<uint64_t>(rsp6);
    rax18 = fun_140010130(rcx17, rdx, r8, rcx17, rdx, r8);
    return *reinterpret_cast<int32_t*>(&rax18);
    addr_1400094a6_14:
    rax19 = reinterpret_cast<int64_t>(DecodePointer());
    rsp20 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    rbx21 = rax19;
    addr_1400094af_17:
    if (!rbx21) {
        addr_1400096a8_18:
        *reinterpret_cast<uint16_t*>(&eax22) = reinterpret_cast<uint16_t>(GetUserDefaultUILanguage(rcx16, rdx, r8, r9_10));
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp20) - 8 + 8);
        ecx23 = *reinterpret_cast<uint16_t*>(&eax22);
        cx24 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx23) & 0x3ff);
        if (cx24 == 1 || cx24 == 13) {
        }
    } else {
        eax25 = reinterpret_cast<int32_t>(GetEnvironmentVariableW("V"));
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp20) - 8 + 8);
        if (eax25) 
            goto addr_1400094e2_21;
        *reinterpret_cast<int32_t*>(&r8) = 0;
        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx) = 0;
        *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
        eax26 = reinterpret_cast<int32_t>(rbx21(0x100));
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
        if (!eax26) 
            goto addr_140009360_4;
        addr_1400094e2_21:
        rcx27 = g14003d138;
        if (rcx27) 
            goto addr_140009533_23; else 
            goto addr_1400094f8_24;
    }
    ebx28 = 0;
    do {
        rdx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0x228);
        r8 = reinterpret_cast<void**>(6);
        _itow_s(0, rdx, 6, 10);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
        if (v29) {
            *reinterpret_cast<int32_t*>(&r8) = 10;
            *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
            rdx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0x228);
            fun_1400098fc(reinterpret_cast<int64_t>(rbp5) - 0x80, rdx, 10, reinterpret_cast<uint64_t>(rsp6) + 48);
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
        }
        if (0) 
            goto addr_140009453_13;
        ++ebx28;
    } while (ebx28 < 3);
    goto addr_140009606_31;
    addr_140009533_23:
    rax30 = reinterpret_cast<int64_t>(DecodePointer());
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    rdi31 = rax30;
    addr_14000953c_32:
    if (!rdi31) {
        addr_140009606_31:
        *reinterpret_cast<int32_t*>(&r8) = 10;
        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
        rdx = reinterpret_cast<void**>("1");
        fun_1400098fc(reinterpret_cast<int64_t>(rbp5) - 0x80, "1", 10, reinterpret_cast<uint64_t>(rsp6) + 48);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
        if (0) {
            addr_140009453_13:
            goto addr_1400098cb_16;
        } else {
            r8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0x450);
            rdx = reinterpret_cast<void**>(0x104);
            eax32 = reinterpret_cast<int32_t>(wcsncpy_s(reinterpret_cast<int64_t>(rbp5) + 0x240, 0x104, r8, -1));
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
            if (eax32 || (r9_33 = reinterpret_cast<void**>(0xffffffffffffffff), r8 = reinterpret_cast<void**>("*"), rdx = reinterpret_cast<void**>(0x104), eax34 = reinterpret_cast<int32_t>(wcsncat_s(reinterpret_cast<int64_t>(rbp5) + 0x240, 0x104, "*", 0xffffffffffffffff)), rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8), !!eax34)) {
                goto addr_1400098cb_16;
            } else {
                rdx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffffc0);
                rcx35 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp5) + 0x240);
                rax36 = reinterpret_cast<void**>(FindFirstFileW(rcx35, rdx, "*", 0xffffffffffffffff));
                rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
                rbx38 = rax36;
                if (!reinterpret_cast<int1_t>(rax36 == 0xffffffffffffffff)) {
                    rax39 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rbp5) + 0x450);
                    rdi40 = reinterpret_cast<void**>(0xffffffffffffffff);
                    do {
                        ++rdi40;
                    } while (rax39[reinterpret_cast<unsigned char>(rdi40) * 2]);
                    do {
                        addr_140009764_38:
                        rdx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffffc0);
                        eax41 = reinterpret_cast<int32_t>(FindNextFileW(rbx38, rdx, r8, r9_33));
                        rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8);
                        if (!eax41) 
                            break;
                        if (!(v42 & 16)) 
                            goto addr_140009764_38;
                        ecx43 = v44;
                        zf45 = *reinterpret_cast<int16_t*>(&ecx43) == g1400120a8;
                        eax46 = v47;
                        if (!zf45) 
                            goto addr_140009799_41;
                        zf48 = *reinterpret_cast<int16_t*>(&eax46) == g1400120aa;
                        if (zf48) 
                            goto addr_140009764_38;
                        addr_140009799_41:
                        zf49 = *reinterpret_cast<int16_t*>(&ecx43) == g1400121b0;
                        if (!zf49) 
                            goto addr_1400097b8_43;
                        zf50 = *reinterpret_cast<int16_t*>(&eax46) == g1400121b2;
                        if (!zf50) 
                            goto addr_1400097b8_43;
                        eax51 = v52;
                        zf53 = *reinterpret_cast<int16_t*>(&eax51) == g1400121b4;
                        if (zf53) 
                            goto addr_140009764_38;
                        addr_1400097b8_43:
                        r9_33 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp37) + 72);
                        r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp37) + 52);
                        rcx54 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffffec);
                        eax55 = fun_14000bde4(rcx54, "%", r8, r9_33);
                        rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8);
                        if (eax55 == -1) 
                            goto addr_140009764_38;
                        rax56 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi40) + reinterpret_cast<unsigned char>(rdi40));
                        if (reinterpret_cast<uint64_t>(rax56) >= 0x208) 
                            goto addr_1400098f6_47;
                        r9_33 = reinterpret_cast<void**>(0xffffffffffffffff);
                        *reinterpret_cast<void***>(reinterpret_cast<int64_t>(rbp5) + reinterpret_cast<uint64_t>(rax56) + 0x240) = reinterpret_cast<void**>(0);
                        r8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffffec);
                        eax57 = reinterpret_cast<int32_t>(wcsncat_s(reinterpret_cast<int64_t>(rbp5) + 0x240, 0x104, r8, 0xffffffffffffffff));
                        rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8);
                    } while (eax57 || ((r9_33 = reinterpret_cast<void**>(0xffffffffffffffff), r8 = reinterpret_cast<void**>("\\"), eax58 = reinterpret_cast<int32_t>(wcsncat_s(reinterpret_cast<int64_t>(rbp5) + 0x240, 0x104, "\\", 0xffffffffffffffff)), rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8), !!eax58) || ((r8 = v9, r9_33 = reinterpret_cast<void**>(0xffffffffffffffff), eax59 = reinterpret_cast<int32_t>(wcsncat_s(reinterpret_cast<int64_t>(rbp5) + 0x240, 0x104, r8, 0xffffffffffffffff)), rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8), !!eax59) || (*reinterpret_cast<int32_t*>(&r8) = 96, *reinterpret_cast<int32_t*>(&r8 + 4) = 0, *reinterpret_cast<int32_t*>(&rdx) = 0, *reinterpret_cast<int32_t*>(&rdx + 4) = 0, rax60 = reinterpret_cast<int64_t>(LoadLibraryExW(reinterpret_cast<int64_t>(rbp5) + 0x240)), rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8), rax60 == 0))));
                    goto addr_140009879_49;
                } else {
                    eax61 = reinterpret_cast<int32_t>(GetLastError(rcx35, rdx, "*", 0xffffffffffffffff));
                    rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8);
                    if (reinterpret_cast<uint1_t>(eax61 < 0) | reinterpret_cast<uint1_t>(eax61 == 0)) {
                    }
                    goto addr_1400098cb_16;
                }
            }
        }
    } else {
        *reinterpret_cast<int32_t*>(&r8) = 0;
        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
        rdx = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6) + 60);
        eax62 = reinterpret_cast<int32_t>(rdi31(52, rdx));
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
        if (!eax62) 
            goto addr_140009360_4;
        rax63 = reinterpret_cast<int64_t>(GetProcessHeap(52, rdx));
        r8 = reinterpret_cast<void**>(0);
        *reinterpret_cast<int32_t*>(&rdx) = 0;
        *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
        rax64 = reinterpret_cast<void**>(HeapAlloc(rax63));
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8 - 8 + 8);
        rsi65 = rax64;
        if (rax64) 
            goto addr_140009590_55; else 
            goto addr_140009586_56;
    }
    addr_1400098b2_57:
    FindClose(rbx38, rdx, r8, r9_33);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8);
    goto addr_1400098cb_16;
    addr_1400098f6_47:
    fun_14001025c(rcx54, "%", r8, r9_33, rcx54, "%", r8, r9_33);
    rsp66 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0x268);
    rax67 = g140015008;
    eax68 = reinterpret_cast<int32_t>(wcstoul("%", reinterpret_cast<uint64_t>(rsp66) + 32, r8));
    rsp69 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp66) - 8 + 8);
    rdx70 = v71;
    esi72 = eax68;
    if (!*reinterpret_cast<void***>(rdx70) && ((*reinterpret_cast<uint32_t*>(&rcx73) = *reinterpret_cast<uint16_t*>(&eax68), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx73) + 4) = 0, _itow_s(rcx73, reinterpret_cast<uint64_t>(rsp69) + 40, 6, 10), rsp74 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp69) - 8 + 8), r8 = v75, *reinterpret_cast<int32_t*>(&rdx70) = 0x104, *reinterpret_cast<int32_t*>(&rdx70 + 4) = 0, eax76 = reinterpret_cast<int32_t>(wcsncpy_s(reinterpret_cast<uint64_t>(rsp74) + 64, 0x104, r8, -1)), rsp69 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp74) - 8 + 8), !eax76) && ((r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp69) + 40), *reinterpret_cast<int32_t*>(&rdx70) = 0x104, *reinterpret_cast<int32_t*>(&rdx70 + 4) = 0, eax77 = reinterpret_cast<int32_t>(wcsncat_s(reinterpret_cast<uint64_t>(rsp69) + 64, 0x104, r8, -1)), rsp69 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp69) - 8 + 8), !eax77) && ((r8 = reinterpret_cast<void**>("\\"), *reinterpret_cast<int32_t*>(&rdx70) = 0x104, *reinterpret_cast<int32_t*>(&rdx70 + 4) = 0, eax78 = reinterpret_cast<int32_t>(wcsncat_s(reinterpret_cast<uint64_t>(rsp69) + 64, 0x104, "\\", -1)), rsp69 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp69) - 8 + 8), !eax78) && (*reinterpret_cast<int32_t*>(&rdx70) = 0x104, *reinterpret_cast<int32_t*>(&rdx70 + 4) = 0, r8 = *v79, eax80 = reinterpret_cast<int32_t>(wcsncat_s(reinterpret_cast<uint64_t>(rsp69) + 64, 0x104, r8, -1)), rsp69 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp69) - 8 + 8), !eax80))))) {
        rcx81 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp69) + 64);
        *reinterpret_cast<int32_t*>(&rdx70) = 0;
        *reinterpret_cast<int32_t*>(&rdx70 + 4) = 0;
        *reinterpret_cast<int32_t*>(&r8) = *v82;
        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
        rax83 = reinterpret_cast<void**>(LoadLibraryExW(rcx81));
        rsp69 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp69) - 8 + 8);
        if (!rax83) {
            if (v84 == 0x80070002) {
                eax85 = reinterpret_cast<void**>(GetLastError(rcx81));
                rsp69 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp69) - 8 + 8);
                if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax85) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax85 == 0)) {
                }
            }
        } else {
            rdx70 = *v86;
            *reinterpret_cast<void***>(rdx70) = rax83;
            if (*v87) {
                **v87 = *reinterpret_cast<int16_t*>(&esi72);
            }
            if (*v88) {
                r8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp69) + 64);
                rdx70 = *v89;
                wcscpy_s();
                rsp69 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp69) - 8 + 8);
            }
        }
    }
    rcx90 = rax67 ^ reinterpret_cast<uint64_t>(rsp66) ^ reinterpret_cast<uint64_t>(rsp69);
    fun_140010130(rcx90, rdx70, r8, rcx90, rdx70, r8);
    goto v91;
    addr_140009879_49:
    g14003ddf8 = rax60;
    if (!0) {
        eax92 = v93;
        g14003de00 = *reinterpret_cast<uint16_t*>(&eax92);
    }
    if (!1) {
        rdx = reinterpret_cast<void**>(0);
        r8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0x240);
        wcscpy_s();
        rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8);
    }
    goto addr_1400098b2_57;
    addr_140009590_55:
    r9_94 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6) + 56);
    r8 = rax64;
    rdx = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6) + 60);
    *reinterpret_cast<int32_t*>(&rcx95) = 52;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx95) + 4) = 0;
    eax96 = reinterpret_cast<int32_t>(rdi31(52, rdx, r8, r9_94));
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    if (!eax96) {
        addr_140009360_4:
        goto addr_1400098cb_16;
    } else {
        rbx97 = rsi65;
        if (*reinterpret_cast<void***>(rsi65)) {
            if (*reinterpret_cast<void***>(rbx97)) 
                goto addr_1400095b9_76;
            while (!0 && (rbx97 = rbx97 + 10, !!*reinterpret_cast<void***>(rbx97))) {
                addr_1400095b9_76:
                r9_94 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6) + 48);
                *reinterpret_cast<int32_t*>(&r8) = 16;
                *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                rdx = rbx97;
                rcx95 = reinterpret_cast<struct s15*>(reinterpret_cast<int64_t>(rbp5) - 0x80);
                fun_1400098fc(rcx95, rdx, 16, r9_94);
                rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
            }
        }
        rax98 = reinterpret_cast<int64_t>(GetProcessHeap(rcx95, rdx, r8, r9_94));
        r8 = rsi65;
        *reinterpret_cast<int32_t*>(&rdx) = 0;
        *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
        HeapFree(rax98);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8 - 8 + 8);
        if (0) 
            goto addr_140009453_13;
        goto addr_140009606_31;
    }
    addr_140009586_56:
    goto addr_1400098cb_16;
    addr_1400094f8_24:
    rax99 = reinterpret_cast<int64_t>(GetModuleHandleW("k"));
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    if (!rax99) 
        goto addr_140009606_31;
    rax100 = reinterpret_cast<int64_t>(GetProcAddress(rax99, "GetThreadPreferredUILanguages"));
    rdi31 = rax100;
    rax101 = reinterpret_cast<int64_t>(EncodePointer(rax100, "GetThreadPreferredUILanguages"));
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8 - 8 + 8);
    g14003d138 = rax101;
    goto addr_14000953c_32;
    addr_14000946b_15:
    rcx16 = reinterpret_cast<int64_t>("k");
    rax102 = reinterpret_cast<int64_t>(GetModuleHandleW("k", rdx, r8, r9_10));
    rsp20 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    if (!rax102) 
        goto addr_1400096a8_18;
    rdx = reinterpret_cast<void**>("SetThreadPreferredUILanguages");
    rax103 = reinterpret_cast<int64_t>(GetProcAddress(rax102, "SetThreadPreferredUILanguages", r8, r9_10));
    rcx16 = rax103;
    rbx21 = rax103;
    rax104 = reinterpret_cast<int64_t>(EncodePointer(rcx16, "SetThreadPreferredUILanguages", r8, r9_10));
    rsp20 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp20) - 8 + 8 - 8 + 8);
    g14003d140 = rax104;
    goto addr_1400094af_17;
}

uint64_t fun_14000c304(uint64_t rcx, void** rdx, void** r8, void** r9) {
    uint64_t rax5;
    uint64_t rcx6;

    rax5 = 0xffffffffffffffff;
    do {
        ++rax5;
    } while (*reinterpret_cast<void***>(rdx + rax5 * 2));
    rcx6 = rcx + rax5;
    if (rcx6 > 40) {
        fun_14000bfe0("\n", rdx, r8, r9);
        rcx6 = 0;
    }
    return rcx6;
}

void** g1400370c0;

void** fun_14000caa0(void** cl, void** rdx, void** r8, void** r9) {
    unsigned char bl5;
    void* rax6;
    void* rax7;
    void** rax8;
    void** rcx9;

    if (!reinterpret_cast<int1_t>(cl == 25)) {
        if (cl) {
            if (reinterpret_cast<unsigned char>(cl) <= 21) {
                bl5 = reinterpret_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(cl) > 18) + 1);
            } else {
                bl5 = 0;
            }
        } else {
            bl5 = 4;
        }
    } else {
        bl5 = 3;
    }
    *reinterpret_cast<uint32_t*>(&rax6) = g1400370b1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rax7) = bl5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    rax8 = reinterpret_cast<void**>(0x140011cc0);
    if (!*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax6) + reinterpret_cast<int64_t>(rax6) * 4 + reinterpret_cast<int64_t>(rax7) + reinterpret_cast<unsigned char>(0x140011cc0))) {
        *reinterpret_cast<uint32_t*>(&rcx9) = g140025c20;
        *reinterpret_cast<int32_t*>(&rcx9 + 4) = 0;
        rax8 = fun_140003898(rcx9, 0x3ff, r8, r9);
    }
    g1400370b1 = bl5;
    g1400370c0 = rdx;
    g1400370b3 = cl;
    g1400370b8 = cl;
    return rax8;
}

int64_t _set_app_type = 0x14c1c;

void fun_140010c24(int64_t rcx) {
    goto _set_app_type;
}

int32_t fun_14001074c(int64_t rcx) {
    return 0x4000;
}

int64_t _set_fmode = 0x14cba;

void fun_140010c54(int64_t rcx) {
    goto _set_fmode;
}

int64_t __p__commode = 0x14d4c;

int32_t* fun_140010c84(int64_t rcx) {
    goto __p__commode;
}

int32_t fun_1400108e4(int64_t rcx) {
    return 0;
}

struct s44 {
    int32_t f0;
    int32_t f4;
};

struct s45 {
    signed char[4] pad4;
    int32_t f4;
};

struct s46 {
    int32_t f0;
    int32_t f4;
};

struct s47 {
    signed char[4] pad4;
    int32_t f4;
};

struct s48 {
    int32_t f0;
    int32_t f4;
};

struct s49 {
    int32_t f0;
    int32_t f4;
};

struct s50 {
    int32_t f0;
    signed char[2] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f14;
    signed char[2] pad24;
    int16_t f18;
};

struct s51 {
    signed char[8] pad8;
    int32_t f8;
    int32_t fc;
    signed char[20] pad36;
    uint32_t f24;
};

unsigned char fun_140010478(uint32_t ecx) {
    int32_t eax2;
    unsigned char al3;
    int32_t* rdi4;
    int32_t* rsi5;
    struct s44* rdi6;
    struct s45* rdi7;
    struct s46* rsi8;
    struct s47* rsi9;
    struct s48* rdi10;
    struct s49* rsi11;
    int32_t eax12;
    int32_t eax13;
    int1_t zf14;
    int64_t rax15;
    struct s50* rcx16;
    int64_t v17;
    int64_t rax18;
    struct s51* rdx19;
    int64_t rax20;
    struct s51* r9_21;
    uint64_t rcx22;
    uint64_t rax23;

    if (ecx <= 1) {
        eax2 = fun_140010be8();
        if (!eax2 || ecx) {
            al3 = 1;
            __asm__("ror r8, cl");
            __asm__("movups xmm0, [rbp-0x20]");
            *rdi4 = *rsi5;
            rdi6 = reinterpret_cast<struct s44*>(&rdi7->f4);
            rsi8 = reinterpret_cast<struct s46*>(&rsi9->f4);
            __asm__("movups [rip+0x5281], xmm0");
            __asm__("movups xmm0, [rbp-0x20]");
            rdi6->f0 = rsi8->f0;
            rdi10 = reinterpret_cast<struct s48*>(&rdi6->f4);
            rsi11 = reinterpret_cast<struct s49*>(&rsi8->f4);
            rdi10->f0 = rsi11->f0;
            __asm__("movups [rip+0x5275], xmm0");
            rdi10->f4 = rsi11->f4;
        } else {
            eax12 = fun_140010c8a(0x140015780);
            if (!eax12) {
                eax13 = fun_140010c8a(0x140015798);
                al3 = reinterpret_cast<uint1_t>(eax13 == 0);
            } else {
                al3 = 0;
            }
        }
        return al3;
    }
    fun_14001079c(5);
    zf14 = image_base_ == 0x5a4d;
    if (!zf14) 
        goto addr_1400105d5_21;
    rax15 = g14000003c;
    rcx16 = reinterpret_cast<struct s50*>(rax15 + 0x140000000);
    if (rcx16->f0 != 0x4550) 
        goto addr_1400105d5_21;
    if (rcx16->f18 == 0x20b) 
        goto addr_14001057e_24;
    addr_1400105d5_21:
    addr_1400105db_25:
    goto v17;
    addr_14001057e_24:
    *reinterpret_cast<uint32_t*>(&rax18) = rcx16->f14;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
    rdx19 = reinterpret_cast<struct s51*>(reinterpret_cast<int64_t>(&rcx16->f18) + rax18);
    *reinterpret_cast<uint32_t*>(&rax20) = rcx16->f6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = 0;
    r9_21 = reinterpret_cast<struct s51*>(reinterpret_cast<int64_t>(rdx19) + (rax20 + rax20 * 4) * 8);
    while (rdx19 != r9_21) {
        *reinterpret_cast<int32_t*>(&rcx22) = rdx19->fc;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = 0;
        if (0xfffffffec0000005 < rcx22) 
            goto addr_1400105b3_28;
        *reinterpret_cast<int32_t*>(&rax23) = rdx19->f8 + *reinterpret_cast<int32_t*>(&rcx22);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = 0;
        if (0xfffffffec0000005 < rax23) 
            goto addr_1400105bb_30;
        addr_1400105b3_28:
        ++rdx19;
    }
    *reinterpret_cast<int32_t*>(&rdx19) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = 0;
    addr_1400105bb_30:
    if (rdx19) {
        if (!(rdx19->f24 & 0x80000000)) {
            goto addr_1400105db_25;
        } else {
            goto addr_1400105db_25;
        }
    } else {
        goto addr_1400105db_25;
    }
}

uint64_t g140015780;

int32_t fun_140010c90(int64_t rcx, int64_t rdx);

int64_t fun_140010630(int64_t rcx) {
    uint64_t rdx2;
    uint64_t rdx3;
    int32_t eax4;
    int64_t rcx5;

    rdx2 = g140015008;
    rdx3 = rdx2 ^ g140015780;
    __asm__("ror rdx, cl");
    if (rdx3 != 0xffffffffffffffff) {
        eax4 = fun_140010c90(0x140015780, rcx);
    } else {
        eax4 = fun_140010c96(rcx);
    }
    *reinterpret_cast<int32_t*>(&rcx5) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
    if (!eax4) {
        rcx5 = rcx;
    }
    return rcx5;
}

int64_t _initialize_wide_environment = 0x14c58;

void fun_140010c36(int64_t rcx) {
    goto _initialize_wide_environment;
}

void fun_140010764(void** rcx) {
    uint64_t* rax2;
    uint64_t* rax3;

    rax2 = fun_14000bd80(rcx);
    *rax2 = *rax2 | 4;
    rax3 = fun_14000bddc();
    *rax3 = *rax3 | 2;
    return;
}

int64_t* fun_14001078c(int64_t* rcx, int64_t rdx) {
    return 0x14003de10;
}

void fun_140009a70(int64_t rcx) {
    return;
}

int64_t _configthreadlocale = 0x14d26;

void fun_140010c78(int64_t rcx) {
    goto _configthreadlocale;
}

int64_t IsProcessorFeaturePresent = 0x14f96;

int32_t fun_140010cc2(int64_t rcx) {
    goto IsProcessorFeaturePresent;
}

int64_t _initterm = 0x14c98;

void fun_140010c42(int64_t* rcx, int64_t rdx) {
    goto _initterm;
}

int64_t* fun_140010794(int64_t* rcx, int64_t rdx) {
    return 0x14003de08;
}

int64_t __telemetry_main_invoke_trigger = 0x14806;

void fun_140010c00() {
    goto __telemetry_main_invoke_trigger;
}

int64_t __p___wargv = 0x14cd6;

void*** fun_140010c60() {
    goto __p___wargv;
}

int64_t __p___argc = 0x14cc8;

void*** fun_140010c5a() {
    goto __p___argc;
}

int64_t _get_initial_wide_environment = 0x14c78;

int64_t fun_140010c3c() {
    goto _get_initial_wide_environment;
}

int64_t SetErrorMode = 0x14706;

int64_t setlocale = 0x14b06;

int64_t _set_invalid_parameter_handler = 0x14b12;

unsigned char g140036cee;

void** g0;

int64_t signal = 0x14b34;

void fun_14000ba78();

int64_t VirtualQuery = 0x14734;

int64_t GetModuleFileNameW = 0x14744;

int32_t fun_14000a348(void** ecx, void** rdx, int64_t r8, void** r9) {
    void* rsp5;
    uint64_t rax6;
    uint64_t v7;
    void** r14_8;
    void** edi9;
    void* rsp10;
    void* rsp11;
    void** r8_12;
    void*** rdx13;
    int64_t rax14;
    void** rax15;
    int64_t rax16;
    void** rax17;
    void** rcx18;
    void* rsp19;
    int64_t rbx20;
    void** rsi21;
    uint32_t eax22;
    int32_t eax23;
    int32_t eax24;
    int32_t eax25;
    int32_t eax26;
    int32_t eax27;
    int1_t zf28;
    unsigned char al29;
    unsigned char al30;
    void* rsp31;
    int1_t zf32;
    void** ecx33;
    int64_t rax34;
    int1_t zf35;
    void** rcx36;
    void** eax37;
    void** ebx38;
    int1_t zf39;
    void*** rax40;
    void** r15_41;
    int64_t rax42;
    void* rsp43;
    void** rax44;
    void** rsi45;
    void* rsi46;
    void** rax47;
    int64_t rcx48;
    void** r9_49;
    void** v50;
    void** r8_51;
    int32_t v52;
    void** rdx53;
    int32_t v54;
    void* rsp55;
    void** r8_56;
    int64_t v57;
    int64_t rax58;
    void* rsp59;
    int64_t v60;
    int32_t eax61;
    void** v62;
    void** rdx63;
    int32_t v64;
    void* rsp65;
    void** rbx66;
    void** rdi67;
    int32_t v68;
    void** r8_69;
    void** v70;
    void** v71;
    void** v72;
    uint64_t rcx73;
    void** rax74;
    void** rax75;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 0x8e0);
    rax6 = g140015008;
    v7 = rax6 ^ reinterpret_cast<uint64_t>(rsp5);
    r14_8 = rdx;
    edi9 = ecx;
    SetErrorMode(1);
    rsp10 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
    fun_140010c12(reinterpret_cast<uint64_t>(rsp10) + 0x620);
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp10) - 8 + 8);
    *reinterpret_cast<int32_t*>(&r8_12) = 0x4c8;
    *reinterpret_cast<int32_t*>(&r8_12 + 4) = 0;
    fun_140010c12(reinterpret_cast<uint64_t>(rsp11) + 0x158);
    rdx13 = reinterpret_cast<void***>(".ACP");
    setlocale(2, ".ACP", 0x4c8);
    rax14 = reinterpret_cast<int64_t>(__acrt_iob_func(1, ".ACP", 0x4c8));
    rax15 = fun_14000be34(rax14, ".ACP", 0x4c8);
    g1400370b0 = *reinterpret_cast<signed char*>(&rax15);
    rax16 = reinterpret_cast<int64_t>(__acrt_iob_func(2, ".ACP", 0x4c8));
    rax17 = fun_14000be34(rax16, ".ACP", 0x4c8);
    g140037093 = *reinterpret_cast<signed char*>(&rax17);
    rcx18 = reinterpret_cast<void**>(fun_140009a70);
    _set_invalid_parameter_handler(fun_140009a70, ".ACP", 0x4c8);
    g14003d0f8 = 24;
    g14003d100 = reinterpret_cast<void**>(0);
    g14003d108 = reinterpret_cast<void**>(1);
    fun_140009c10(fun_140009a70, ".ACP", 0x4c8);
    rsp19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp11) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
    g140037094 = reinterpret_cast<void**>(2);
    *reinterpret_cast<void***>(&rbx20) = reinterpret_cast<void**>(1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx20) + 4) = 0;
    while (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rbx20)) < reinterpret_cast<signed char>(edi9)) {
        rsi21 = r14_8 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(&rbx20)) * 8;
        rcx18 = *reinterpret_cast<void***>(rsi21);
        eax22 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx18));
        *reinterpret_cast<void***>(&rdx13) = reinterpret_cast<void**>(0xfffd);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
        if (!(0xfffd & reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&eax22) - 45))) {
            eax23 = reinterpret_cast<int32_t>(_wcsicmp());
            rsp19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp19) - 8 + 8);
            if (eax23) {
                eax24 = reinterpret_cast<int32_t>(_wcsicmp());
                rsp19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp19) - 8 + 8);
                if (eax24) {
                    eax25 = reinterpret_cast<int32_t>(_wcsicmp());
                    rsp19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp19) - 8 + 8);
                    if (eax25) {
                        eax26 = reinterpret_cast<int32_t>(_wcsicmp());
                        rsp19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp19) - 8 + 8);
                        if (eax26) {
                            rcx18 = *reinterpret_cast<void***>(rsi21) + 2;
                            rdx13 = reinterpret_cast<void***>("e");
                            eax27 = reinterpret_cast<int32_t>(_wcsicmp());
                            rsp19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp19) - 8 + 8);
                            if (eax27) {
                                addr_14000a537_9:
                                *reinterpret_cast<void***>(&rbx20) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbx20)) + reinterpret_cast<unsigned char>(1));
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx20) + 4) = 0;
                                continue;
                            } else {
                                g140036cee = 1;
                            }
                        } else {
                            g140037094 = reinterpret_cast<void**>(3);
                        }
                    } else {
                        g140037094 = reinterpret_cast<void**>(2);
                    }
                } else {
                    g140037094 = reinterpret_cast<void**>(1);
                }
            } else {
                g140037094 = reinterpret_cast<void**>(0);
            }
            r8_12 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(edi9) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbx20)) - reinterpret_cast<unsigned char>(1)))) << 3);
            rdx13 = reinterpret_cast<void***>(r14_8 + static_cast<int32_t>(rbx20 + 1) * 8);
            rcx18 = rsi21;
            memmove(rcx18, rdx13);
            rsp19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp19) - 8 + 8);
            edi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi9) - reinterpret_cast<unsigned char>(1));
            *reinterpret_cast<void***>(&rbx20) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbx20)) - reinterpret_cast<unsigned char>(1));
        }
        goto addr_14000a537_9;
    }
    zf28 = reinterpret_cast<int1_t>(g140037094 == 3);
    if (zf28 && (al29 = fun_140009aa8(rcx18, rdx13, r8_12), rsp19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp19) - 8 + 8), !al29)) {
        r8_12 = reinterpret_cast<void**>("h");
        *reinterpret_cast<void***>(&rdx13) = reinterpret_cast<void**>(0xfae);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rcx18) = 0;
        *reinterpret_cast<int32_t*>(&rcx18 + 4) = 0;
        fun_140003898(0, 0xfae, "h", r9);
        rsp19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp19) - 8 + 8);
    }
    al30 = fun_140009a74(rcx18, rdx13, r8_12);
    rsp31 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp19) - 8 + 8);
    if (!al30) {
        SetUnhandledExceptionFilter(fun_14000a198, rdx13, r8_12);
        rsp31 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp31) - 8 + 8);
    }
    zf32 = g140036cee == 0;
    if (!zf32) {
        g0 = reinterpret_cast<void**>(0);
    }
    ecx33 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<unsigned char>(ecx33) < reinterpret_cast<unsigned char>(0x100)) {
        *reinterpret_cast<void***>(&rax34) = ecx33;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax34) + 4) = 0;
        *reinterpret_cast<void***>(0x1400364d0 + rax34 * 8) = reinterpret_cast<void**>(0);
        ecx33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx33) + reinterpret_cast<unsigned char>(1));
    }
    zf35 = g140026498 == 0;
    if (!zf35) {
        addr_14000a652_27:
        signal(2, fun_14000ba78, r8_12);
        signal(15, fun_14000ba78, r8_12);
        rcx36 = edi9;
        *reinterpret_cast<int32_t*>(&rcx36 + 4) = 0;
        eax37 = fun_14000ab18(rcx36, r14_8, r8_12, r9);
        ebx38 = eax37;
        fun_14000bb48(rcx36, r14_8, r8_12, r9);
        zf39 = g140015040 == 0;
        if (zf39) {
            ebx38 = reinterpret_cast<void**>(1);
        }
    } else {
        rax40 = reinterpret_cast<void***>(__p__wpgmptr());
        r15_41 = *rax40;
        rax42 = reinterpret_cast<int64_t>(wcschr());
        rsp43 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp31) - 8 + 8 - 8 + 8);
        if (!rax42) {
            addr_14000a63d_30:
            rax44 = fun_14000dcc4(r15_41, r15_41);
            rsp31 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp43) - 8 + 8);
            g140026498 = rax44;
            goto addr_14000a652_27;
        } else {
            rsi45 = reinterpret_cast<void**>(0xffffffffffffffff);
            do {
                ++rsi45;
            } while (*reinterpret_cast<void***>(r15_41 + reinterpret_cast<unsigned char>(rsi45) * 2));
            rsi46 = reinterpret_cast<void*>(rsi45 + 3);
            rax47 = reinterpret_cast<void**>(2 * reinterpret_cast<uint64_t>(rsi46));
            if (__intrinsic()) 
                goto label_34; else 
                goto addr_14000a5fa_35;
        }
    }
    *reinterpret_cast<void***>(&rcx48) = ebx38;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx48) + 4) = 0;
    exit(rcx48, r14_8, r8_12);
    r9_49 = v50;
    *reinterpret_cast<int32_t*>(&r8_51) = v52;
    *reinterpret_cast<int32_t*>(&r8_51 + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx53) = v54;
    *reinterpret_cast<int32_t*>(&rdx53 + 4) = 0;
    fun_14000bfe0("\n", rdx53, r8_51, r9_49);
    rsp55 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp31) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
    *reinterpret_cast<int32_t*>(&r8_56) = 48;
    *reinterpret_cast<int32_t*>(&r8_56 + 4) = 0;
    rax58 = reinterpret_cast<int64_t>(VirtualQuery(v57, reinterpret_cast<uint64_t>(rsp55) + 0x118, 48, r9_49));
    rsp59 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp55) - 8 + 8);
    if (rax58 && (*reinterpret_cast<int32_t*>(&r8_56) = 0x104, *reinterpret_cast<int32_t*>(&r8_56 + 4) = 0, eax61 = reinterpret_cast<int32_t>(GetModuleFileNameW(v60, reinterpret_cast<uint64_t>(rsp59) + 0x6c0, 0x104, r9_49)), rsp59 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp59) - 8 + 8), !!eax61)) {
        r8_56 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp59) + 0x6c0);
        fun_14000bfe0(" ", v62, r8_56, r9_49);
        rsp59 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp59) - 8 + 8);
    }
    *reinterpret_cast<int32_t*>(&rdx63) = v64;
    *reinterpret_cast<int32_t*>(&rdx63 + 4) = 0;
    fun_14000bfe0("\n", rdx63, r8_56, r9_49);
    rsp65 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp59) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rbx66) = 0;
    *reinterpret_cast<int32_t*>(&rbx66 + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdi67) = v68;
    *reinterpret_cast<int32_t*>(&rdi67 + 4) = 0;
    if (rdi67) {
        do {
            r8_69 = *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsp65) + reinterpret_cast<unsigned char>(rbx66) * 8 + 0x640);
            fun_14000bfe0(" ", rbx66, r8_69, r9_49);
            rsp65 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp65) - 8 + 8);
            ++rbx66;
        } while (reinterpret_cast<unsigned char>(rbx66) < reinterpret_cast<unsigned char>(rdi67));
    }
    fun_14000bfe0("\n", v70, v71, v72, "\n", v70, v71, v72);
    fun_14000bfb0("\n", v70, "\n", v70);
    rcx73 = v7 ^ reinterpret_cast<uint64_t>(rsp65) - 8 + 8 - 8 + 8;
    rax74 = fun_140010130(rcx73, v70, v71, rcx73, v70, v71);
    return *reinterpret_cast<int32_t*>(&rax74);
    label_34:
    rax47 = reinterpret_cast<void**>(0xffffffffffffffff);
    addr_14000a5fa_35:
    rax75 = fun_140009214(rax47, __intrinsic(), r8_12, r9, rax47, __intrinsic());
    wcscpy_s(rax75, rsi46, "\"");
    wcscat_s(rax75, rsi46, r15_41);
    r8_12 = reinterpret_cast<void**>("\"");
    wcscat_s(rax75, rsi46, "\"");
    rsp43 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp43) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
    r15_41 = rax75;
    goto addr_14000a63d_30;
}

int64_t __telemetry_main_return_trigger = 0x14828;

void fun_140010c06() {
    goto __telemetry_main_return_trigger;
}

struct s52 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f3c;
};

struct s53 {
    int32_t f0;
    signed char[20] pad24;
    int16_t f18;
    signed char[106] pad132;
    uint32_t f84;
    signed char[112] pad248;
    int32_t ff8;
};

unsigned char fun_1400108e8() {
    struct s52* rax1;
    struct s53* rax2;
    unsigned char al3;

    rax1 = reinterpret_cast<struct s52*>(GetModuleHandleW());
    if (!rax1 || (rax1->f0 != 0x5a4d || ((rax2 = reinterpret_cast<struct s53*>(rax1->f3c + reinterpret_cast<int64_t>(rax1)), rax2->f0 != 0x4550) || (rax2->f18 != 0x20b || rax2->f84 <= 14)))) {
        al3 = 0;
    } else {
        al3 = reinterpret_cast<uint1_t>(!!rax2->ff8);
    }
    return al3;
}

int64_t _seh_filter_exe = 0x14c0a;

void fun_140010c1e(int64_t rcx, int32_t** rdx) {
    goto _seh_filter_exe;
}

unsigned char g1400157b0;

signed char fun_140010604(signed char cl, signed char dl, int64_t r8) {
    int1_t zf4;

    zf4 = g1400157b0 == 0;
    if (zf4 || !dl) {
        fun_140010cc8();
        fun_140010cc8();
    }
    return 1;
}

int64_t _register_onexit_function = 0x14d78;

int32_t fun_140010c90(int64_t rcx, int64_t rdx) {
    goto _register_onexit_function;
}

void fun_1400105e0(signed char cl, int64_t rdx) {
    int32_t eax3;

    eax3 = fun_140010be8();
    if (eax3 && !cl) {
        g140015778 = 0;
    }
    return;
}

int64_t terminate = 0x14da2;

void fun_140010c9c() {
    goto terminate;
}

void fun_14001093c() {
    goto SetUnhandledExceptionFilter;
}

void** fun_140010270(int32_t ecx) {
    int32_t eax2;
    int64_t rax3;
    int64_t rdx4;
    void** rax5;

    eax2 = fun_140010cc2(23);
    if (eax2) {
        __asm__("int 0x29");
    }
    fun_14001030c(0x1400152a0);
    g140015398 = reinterpret_cast<int64_t>(__return_address());
    g140015338 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 40 - 8 + 8 - 8 + 8 + 40 + 8);
    rax3 = g140015398;
    g140015210 = rax3;
    g140015200 = 0xc0000409;
    g140015204 = 1;
    g140015218 = 1;
    *reinterpret_cast<int32_t*>(&rdx4) = ecx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = 0;
    g140015220 = rdx4;
    rax5 = fun_140010154(0x140011600);
    return rax5;
}

int64_t QueryPerformanceCounter = 0x14fb2;

int64_t g140015010 = 0xffffd466d2205dcd;

void fun_140010698() {
    void* rbp1;
    uint64_t rax2;
    void* rcx3;
    int32_t eax4;
    uint64_t rax5;
    int32_t eax6;
    uint64_t rax7;
    uint64_t rax8;
    int32_t v9;
    uint64_t v10;

    rbp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax2 = g140015008;
    if (rax2 == 0x2b992ddfa232) {
        rcx3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp1) + 24);
        GetSystemTimeAsFileTime(rcx3);
        eax4 = reinterpret_cast<int32_t>(GetCurrentThreadId(rcx3));
        *reinterpret_cast<int32_t*>(&rax5) = eax4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
        eax6 = reinterpret_cast<int32_t>(GetCurrentProcessId(rcx3));
        *reinterpret_cast<int32_t*>(&rax7) = eax6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
        QueryPerformanceCounter(reinterpret_cast<int64_t>(rbp1) + 32);
        *reinterpret_cast<int32_t*>(&rax8) = v9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
        rax2 = (rax8 << 32 ^ v10 ^ (rax5 ^ rax7) ^ reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbp1) + 16)) & 0xffffffffffff;
        if (rax2 == 0x2b992ddfa232) {
            rax2 = 0x2b992ddfa233;
        }
        g140015008 = rax2;
    }
    g140015010 = reinterpret_cast<int64_t>(~rax2);
    return;
}

struct s54 {
    unsigned char f0;
    signed char[3] pad4;
    int32_t f4;
    int32_t f8;
};

struct s55 {
    signed char[3] pad3;
    unsigned char f3;
};

void** fun_140010cec(void* rcx, struct s38* rdx, struct s54* r8) {
    void* r9_4;
    void* r10_5;
    void** rax6;
    int64_t rcx7;
    struct s55* rcx8;
    uint64_t rcx9;
    int1_t zf10;
    int32_t eax11;
    int64_t rax12;
    void** rax13;

    r9_4 = rcx;
    r10_5 = rcx;
    if (r8->f0 & 4) {
        r10_5 = reinterpret_cast<void*>(r8->f4 + reinterpret_cast<uint64_t>(rcx) & reinterpret_cast<uint64_t>(static_cast<int64_t>(-r8->f8)));
    }
    rax6 = rdx->f10;
    *reinterpret_cast<void***>(&rcx7) = *reinterpret_cast<void***>(rax6 + 8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    rcx8 = reinterpret_cast<struct s55*>(rcx7 + rdx->f8);
    if (rcx8->f3 & 15) {
        rax6 = reinterpret_cast<void**>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(rcx8->f3) & 0xfffffff0)));
        r9_4 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r9_4) + reinterpret_cast<unsigned char>(rax6));
    }
    rcx9 = reinterpret_cast<uint64_t>(r9_4) ^ *reinterpret_cast<uint64_t*>((r8->f0 & 0xfffffff8) + reinterpret_cast<uint64_t>(r10_5));
    zf10 = rcx9 == g140015008;
    if (zf10) {
        __asm__("rol rcx, 0x10");
        if (*reinterpret_cast<uint16_t*>(&rcx9) & 0xffff) {
            __asm__("ror rcx, 0x10");
        } else {
            return rax6;
        }
    }
    eax11 = fun_140010cc2(23);
    if (eax11) {
        __asm__("int 0x29");
    }
    fun_14001037c(0x1400152a0);
    g140015398 = reinterpret_cast<int64_t>(__return_address());
    g140015338 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 - 56 - 8 + 8 - 8 + 8 + 56 + 8);
    rax12 = g140015398;
    g140015210 = rax12;
    g140015320 = rcx9;
    g140015200 = 0xc0000409;
    g140015204 = 1;
    g140015218 = 1;
    g140015220 = 2;
    rax13 = fun_140010154(0x140011600);
    return rax13;
}

int64_t fun_14000a1e0(void** rcx, void** rdx, void** r8, void** r9) {
    int32_t edi5;
    int1_t zf6;
    void** r14_7;
    void** rcx8;
    void** eax9;
    unsigned char al10;
    uint1_t zf11;
    int64_t rax12;
    unsigned char al13;

    edi5 = 0;
    zf6 = g140026488 == 0;
    r14_7 = rcx;
    if (zf6) {
        fun_140003a8c(rcx);
    }
    rcx8 = reinterpret_cast<void**>("\n");
    fun_14000bfe0("\n", rdx, r8, r9);
    fun_14000bfb0("\n", rdx);
    __asm__("movups xmm0, [rax]");
    __asm__("movups [rsi], xmm0");
    __asm__("movups xmm1, [rax+0x10]");
    __asm__("movups [rsi+0x10], xmm1");
    __asm__("movups xmm0, [rax+0x20]");
    __asm__("movups [rsi+0x20], xmm0");
    __asm__("movups xmm1, [rax+0x30]");
    __asm__("movups [rsi+0x30], xmm1");
    __asm__("movups xmm0, [rax+0x40]");
    __asm__("movups [rsi+0x40], xmm0");
    __asm__("movups xmm1, [rax+0x50]");
    __asm__("movups [rsi+0x50], xmm1");
    __asm__("movups xmm0, [rax+0x60]");
    __asm__("movups [rsi+0x60], xmm0");
    __asm__("movups xmm0, [rax+0x70]");
    __asm__("movups [rsi+rdx-0x10], xmm0");
    __asm__("movups xmm1, [rax+rdx]");
    __asm__("movups [rsi+rdx], xmm1");
    *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rdx + 0x80) + 16) = *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(*reinterpret_cast<void***>(r14_7) + 0x80) + 16);
    if (r8) {
        *reinterpret_cast<int32_t*>(&rcx8) = 9;
        *reinterpret_cast<int32_t*>(&rcx8 + 4) = 0;
        do {
            __asm__("movups xmm0, [rax]");
            __asm__("movups [rbx], xmm0");
            __asm__("movups xmm1, [rax+0x10]");
            __asm__("movups [rbx+0x10], xmm1");
            __asm__("movups xmm0, [rax+0x20]");
            __asm__("movups [rbx+0x20], xmm0");
            __asm__("movups xmm1, [rax+0x30]");
            __asm__("movups [rbx+0x30], xmm1");
            __asm__("movups xmm0, [rax+0x40]");
            __asm__("movups [rbx+0x40], xmm0");
            __asm__("movups xmm1, [rax+0x50]");
            __asm__("movups [rbx+0x50], xmm1");
            __asm__("movups xmm0, [rax+0x60]");
            __asm__("movups [rbx+0x60], xmm0");
            __asm__("movups xmm1, [rax+0x70]");
            __asm__("movups [rbx-0x10], xmm1");
            --rcx8;
        } while (rcx8);
        __asm__("movups xmm0, [rax]");
        __asm__("movups [rbx], xmm0");
        __asm__("movups xmm1, [rax+0x10]");
        __asm__("movups [rbx+0x10], xmm1");
        __asm__("movups xmm0, [rax+0x20]");
        __asm__("movups [rbx+0x20], xmm0");
        __asm__("movups xmm1, [rax+0x30]");
        __asm__("movups [rbx+0x30], xmm1");
        __asm__("movups xmm0, [rax+0x40]");
        __asm__("movups [rbx+0x40], xmm0");
    }
    eax9 = g140037094;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax9) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax9 == 0)) {
        addr_14000a314_8:
        al10 = 1;
    } else {
        if (reinterpret_cast<signed char>(eax9) <= reinterpret_cast<signed char>(2)) 
            goto addr_14000a31a_10;
        if (!reinterpret_cast<int1_t>(eax9 == 3)) 
            goto addr_14000a314_8; else 
            goto addr_14000a308_12;
    }
    addr_14000a316_13:
    if (al10) {
        zf11 = reinterpret_cast<uint1_t>(g140037092 == 0);
        *reinterpret_cast<void***>(&edi5) = reinterpret_cast<void**>(static_cast<unsigned char>(zf11));
        *reinterpret_cast<int32_t*>(&rax12) = edi5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
    } else {
        addr_14000a31a_10:
        rax12 = fun_14000a198(r14_7, 0x80, r8);
    }
    return rax12;
    addr_14000a308_12:
    al13 = fun_140009aa8(rcx8, 0x80, r8);
    al10 = reinterpret_cast<uint1_t>(al13 == 0);
    goto addr_14000a316_13;
}

signed char fun_14001042c(int32_t ecx) {
    uint32_t eax2;
    signed char al3;
    signed char al4;
    signed char al5;

    eax2 = g1400157b0;
    if (!ecx) {
        eax2 = 1;
    }
    g1400157b0 = *reinterpret_cast<unsigned char*>(&eax2);
    fun_140010a24();
    al3 = fun_140010cc8();
    if (al3) {
        al4 = fun_140010cc8();
        if (al4) {
            al5 = 1;
        } else {
            fun_140010cc8();
            goto addr_140010457_7;
        }
    } else {
        addr_140010457_7:
        al5 = 0;
    }
    return al5;
}

void fun_140001000() {
    void** rax1;

    fun_14000dfd0(0x140025c50, 0x140025c48, 0, 0);
    rax1 = fun_14000dcc4(0x140025c50, 0x140025c50);
    g140025c40 = rax1;
    return;
}

struct s56 {
    signed char[16] pad16;
    uint64_t f10;
};

struct s57 {
    signed char[16] pad16;
    int64_t f10;
};

void fun_140010b8f() {
    uint64_t rax1;
    int32_t eax2;
    int32_t edx3;
    struct s56* rbp4;
    uint64_t rdx5;
    int64_t rax6;
    struct s57* rbp7;
    uint32_t eax8;
    uint32_t eax9;
    int1_t zf10;
    int64_t rbp11;

    *reinterpret_cast<int32_t*>(&rax1) = eax2 + edx3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    rbp4->f10 = rdx5 << 32 | rax1;
    rax6 = rbp7->f10;
    if ((*reinterpret_cast<unsigned char*>(&rax6) & 6) != 6) 
        goto 0x140010bd8;
    eax8 = g14001501c;
    eax9 = eax8 | 8;
    g140015018 = 3;
    zf10 = (*reinterpret_cast<unsigned char*>(rbp11 - 24) & 32) == 0;
    g14001501c = eax9;
    if (zf10) 
        goto 0x140010bd8;
    g140015018 = 5;
    g14001501c = eax9 | 32;
}

uint16_t* fun_14000c658(unsigned char cl) {
    struct s28* rbx2;
    void** r9_3;
    struct s28* rbx4;
    uint16_t* rax5;
    void* r8_6;
    uint32_t edx7;
    uint16_t* rcx8;
    uint32_t ecx9;
    uint32_t ecx10;
    uint16_t* rcx11;
    uint32_t ecx12;
    uint16_t* rcx13;
    uint32_t ecx14;
    uint16_t* rcx15;
    uint32_t ecx16;
    uint32_t ecx17;
    uint32_t ecx18;
    void** rcx19;
    void** r8_20;
    uint32_t ecx21;
    void** rcx22;
    void** r8_23;
    uint32_t ecx24;
    uint32_t r8d25;
    uint32_t edx26;
    uint32_t edx27;
    uint32_t edx28;
    uint32_t edx29;
    uint32_t edx30;
    uint32_t ecx31;
    uint32_t ecx32;
    uint32_t ecx33;
    uint32_t ecx34;
    uint32_t ecx35;
    uint32_t ecx36;
    uint32_t ecx37;

    rbx2 = g1400370d0;
    *reinterpret_cast<unsigned char*>(&r9_3) = cl;
    rbx4 = rbx2 - 1;
    g1400370d0 = rbx4;
    if (rbx2->f0 != 22 || rbx4->f0 != 22) {
        if (rbx2->f0 != 23) 
            goto addr_14000c906_3;
        if (rbx4->f0 != 23) 
            goto addr_14000c906_3;
        rax5 = rbx4->f8;
        r8_6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx2->f8) - reinterpret_cast<uint64_t>(rax5));
        do {
            edx7 = *rax5;
            *reinterpret_cast<uint32_t*>(&rcx8) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = 0;
            if (*reinterpret_cast<uint16_t*>(&edx7) != *reinterpret_cast<uint16_t*>(reinterpret_cast<uint64_t>(rax5) + reinterpret_cast<uint64_t>(r8_6))) 
                break;
            ++rax5;
        } while (*reinterpret_cast<uint16_t*>(&edx7));
        goto addr_14000c89f_8;
    } else {
        ecx9 = cl;
        if (reinterpret_cast<int32_t>(ecx9) > reinterpret_cast<int32_t>(10)) {
            ecx10 = ecx9 - 11;
            if (!ecx10) {
                rax5 = rbx2->f8;
                *reinterpret_cast<int32_t*>(&rcx11) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
                *reinterpret_cast<unsigned char*>(&rcx11) = reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rbx4->f8) <= reinterpret_cast<int64_t>(rax5));
                goto addr_14000c864_12;
            } else {
                ecx12 = ecx10 - 1;
                if (!ecx12) {
                    rcx13 = rbx2->f8;
                    rbx4->f8 = reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(rbx4->f8) >> *reinterpret_cast<signed char*>(&rcx13));
                    goto addr_14000c902_15;
                } else {
                    ecx14 = ecx12 - 1;
                    if (!ecx14) {
                        rcx15 = rbx2->f8;
                        rbx4->f8 = reinterpret_cast<uint16_t*>(reinterpret_cast<uint64_t>(rbx4->f8) << *reinterpret_cast<unsigned char*>(&rcx15));
                        goto addr_14000c902_15;
                    } else {
                        ecx16 = ecx14 - 1;
                        if (!ecx16) {
                            rax5 = rbx2->f8;
                            rbx4->f8 = reinterpret_cast<uint16_t*>(reinterpret_cast<uint64_t>(rbx4->f8) - reinterpret_cast<uint64_t>(rax5));
                            goto addr_14000c902_15;
                        } else {
                            ecx17 = ecx16 - 1;
                            if (!ecx17) {
                                rax5 = rbx2->f8;
                                rbx4->f8 = reinterpret_cast<uint16_t*>(reinterpret_cast<uint64_t>(rbx4->f8) + reinterpret_cast<uint64_t>(rax5));
                                goto addr_14000c902_15;
                            } else {
                                ecx18 = ecx17 - 1;
                                if (!ecx18) {
                                    if (!rbx2->f8) {
                                        *reinterpret_cast<uint32_t*>(&rcx19) = g140025c20;
                                        *reinterpret_cast<int32_t*>(&rcx19 + 4) = 0;
                                        fun_140003898(rcx19, 0x437, r8_20, r9_3);
                                    }
                                    rax5 = reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(rbx4->f8) / reinterpret_cast<int64_t>(rbx2->f8));
                                    rbx4->f8 = reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(rbx4->f8) % reinterpret_cast<int64_t>(rbx2->f8));
                                    goto addr_14000c902_15;
                                } else {
                                    ecx21 = ecx18 - 1;
                                    if (!ecx21) {
                                        if (!rbx2->f8) {
                                            *reinterpret_cast<uint32_t*>(&rcx22) = g140025c20;
                                            *reinterpret_cast<int32_t*>(&rcx22 + 4) = 0;
                                            fun_140003898(rcx22, 0x437, r8_23, r9_3);
                                        }
                                        rax5 = reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(rbx4->f8) / reinterpret_cast<int64_t>(rbx2->f8));
                                    } else {
                                        if (ecx21 != 1) 
                                            goto addr_14000c906_3;
                                        rax5 = reinterpret_cast<uint16_t*>(reinterpret_cast<uint64_t>(rbx4->f8) * reinterpret_cast<uint64_t>(rbx2->f8));
                                    }
                                    rbx4->f8 = rax5;
                                    goto addr_14000c902_15;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (ecx9 == 10) {
                rax5 = rbx2->f8;
                *reinterpret_cast<int32_t*>(&rcx11) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
                *reinterpret_cast<unsigned char*>(&rcx11) = reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rbx4->f8) >= reinterpret_cast<int64_t>(rax5));
                goto addr_14000c864_12;
            }
            ecx24 = ecx9 - 1;
            if (!ecx24) 
                goto addr_14000c758_36; else 
                goto addr_14000c6a7_37;
        }
    }
    r8d25 = *reinterpret_cast<uint32_t*>(&r8_6) - (*reinterpret_cast<uint32_t*>(&r8_6) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r8_6) < *reinterpret_cast<uint32_t*>(&r8_6) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&edx7) < *reinterpret_cast<uint16_t*>(reinterpret_cast<uint64_t>(rax5) + reinterpret_cast<uint64_t>(r8_6))))) | 1;
    addr_14000c8ab_39:
    edx26 = *reinterpret_cast<unsigned char*>(&r9_3) - 6;
    if (!edx26) {
        *reinterpret_cast<unsigned char*>(&rcx8) = reinterpret_cast<uint1_t>(!!r8d25);
    } else {
        edx27 = edx26 - 1;
        if (!edx27) {
            *reinterpret_cast<unsigned char*>(&rcx8) = reinterpret_cast<uint1_t>(r8d25 == 0);
        } else {
            edx28 = edx27 - 1;
            if (!edx28) {
                *reinterpret_cast<unsigned char*>(&rcx8) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(r8d25) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(r8d25 == 0)));
            } else {
                edx29 = edx28 - 1;
                if (!edx29) {
                    *reinterpret_cast<unsigned char*>(&rcx8) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(r8d25) < reinterpret_cast<int32_t>(0));
                } else {
                    edx30 = edx29 - 1;
                    if (!edx30) {
                        *reinterpret_cast<unsigned char*>(&rcx8) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(r8d25) >= reinterpret_cast<int32_t>(0));
                    } else {
                        if (edx30 != 1) {
                            addr_14000c906_3:
                            *reinterpret_cast<signed char*>(&rax5) = 0;
                            goto addr_14000c908_50;
                        } else {
                            *reinterpret_cast<unsigned char*>(&rcx8) = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(r8d25) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(r8d25 == 0));
                        }
                    }
                }
            }
        }
    }
    rbx4->f8 = rcx8;
    rbx4->f0 = 22;
    addr_14000c902_15:
    *reinterpret_cast<signed char*>(&rax5) = 1;
    addr_14000c908_50:
    return rax5;
    addr_14000c89f_8:
    r8d25 = 0;
    goto addr_14000c8ab_39;
    addr_14000c758_36:
    *reinterpret_cast<int32_t*>(&rcx11) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
    if (rbx4->f8) 
        goto addr_14000c76a_53;
    addr_14000c760_54:
    if (!rbx2->f8) {
        addr_14000c864_12:
        rbx4->f8 = rcx11;
        goto addr_14000c902_15;
    } else {
        addr_14000c76a_53:
        *reinterpret_cast<int32_t*>(&rcx11) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
        goto addr_14000c864_12;
    }
    addr_14000c6a7_37:
    ecx31 = ecx24 - 1;
    if (!ecx31) {
        *reinterpret_cast<int32_t*>(&rcx11) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
        if (!rbx4->f8) 
            goto addr_14000c864_12;
        goto addr_14000c760_54;
    } else {
        ecx32 = ecx31 - 1;
        if (!ecx32) {
            rax5 = rbx2->f8;
            rbx4->f8 = reinterpret_cast<uint16_t*>(reinterpret_cast<uint64_t>(rbx4->f8) | reinterpret_cast<uint64_t>(rax5));
            goto addr_14000c902_15;
        } else {
            ecx33 = ecx32 - 1;
            if (!ecx33) {
                rax5 = rbx2->f8;
                rbx4->f8 = reinterpret_cast<uint16_t*>(reinterpret_cast<uint64_t>(rbx4->f8) ^ reinterpret_cast<uint64_t>(rax5));
                goto addr_14000c902_15;
            } else {
                ecx34 = ecx33 - 1;
                if (!ecx34) {
                    rax5 = rbx2->f8;
                    rbx4->f8 = reinterpret_cast<uint16_t*>(reinterpret_cast<uint64_t>(rbx4->f8) & reinterpret_cast<uint64_t>(rax5));
                    goto addr_14000c902_15;
                } else {
                    ecx35 = ecx34 - 1;
                    if (!ecx35) {
                        rax5 = rbx4->f8;
                        *reinterpret_cast<int32_t*>(&rcx11) = 0;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
                        *reinterpret_cast<unsigned char*>(&rcx11) = reinterpret_cast<uint1_t>(rbx2->f8 != rax5);
                        goto addr_14000c864_12;
                    } else {
                        ecx36 = ecx35 - 1;
                        if (!ecx36) {
                            rax5 = rbx4->f8;
                            *reinterpret_cast<int32_t*>(&rcx11) = 0;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
                            *reinterpret_cast<unsigned char*>(&rcx11) = reinterpret_cast<uint1_t>(rbx2->f8 == rax5);
                            goto addr_14000c864_12;
                        } else {
                            ecx37 = ecx36 - 1;
                            if (!ecx37) {
                                rax5 = rbx2->f8;
                                *reinterpret_cast<int32_t*>(&rcx11) = 0;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
                                *reinterpret_cast<unsigned char*>(&rcx11) = reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rbx4->f8) > reinterpret_cast<int64_t>(rax5));
                                goto addr_14000c864_12;
                            } else {
                                if (ecx37 != 1) 
                                    goto addr_14000c906_3;
                                rax5 = rbx2->f8;
                                *reinterpret_cast<int32_t*>(&rcx11) = 0;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
                                *reinterpret_cast<unsigned char*>(&rcx11) = reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rbx4->f8) < reinterpret_cast<int64_t>(rax5));
                                goto addr_14000c864_12;
                            }
                        }
                    }
                }
            }
        }
    }
}

void fun_1400109d0();

int64_t fun_14000fea4() {
    int32_t eax1;
    int64_t rcx2;
    int32_t* rax3;
    int32_t eax4;
    unsigned char al5;
    int64_t rdx6;
    int32_t eax7;
    int64_t rcx8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;
    int64_t rcx12;
    int64_t v13;

    fun_140010c24(1);
    eax1 = fun_14001074c(1);
    *reinterpret_cast<int32_t*>(&rcx2) = eax1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = 0;
    fun_140010c54(rcx2);
    rax3 = fun_140010c84(rcx2);
    eax4 = fun_1400108e4(rcx2);
    *rax3 = eax4;
    al5 = fun_140010478(1);
    if (!al5) {
        fun_14001079c(7);
    } else {
        fun_140010984(1, rdx6);
        fun_140010680(fun_1400109d0);
        eax7 = fun_140010744(fun_1400109d0);
        *reinterpret_cast<int32_t*>(&rcx8) = eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = 0;
        eax9 = fun_140010c30(rcx8);
        if (!eax9) {
            fun_140010754(rcx8);
            eax10 = fun_140010780(rcx8);
            if (eax10) {
                rcx8 = reinterpret_cast<int64_t>(fun_1400108e4);
                fun_140010c2a(fun_1400108e4);
            }
            fun_140009a70(rcx8);
            fun_140009a70(rcx8);
            eax11 = fun_1400108e4(rcx8);
            *reinterpret_cast<int32_t*>(&rcx12) = eax11;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = 0;
            fun_140010c78(rcx12);
            fun_140010c36(rcx12);
            fun_1400108e4(rcx12);
            return 0;
        }
    }
    fun_14001079c(7);
    fun_140010764(7);
    goto v13;
}

void fun_1400109d0() {
    int64_t* rbx1;
    int64_t rdi2;
    int64_t rdx3;

    rbx1 = reinterpret_cast<int64_t*>(0x140013448);
    while (reinterpret_cast<uint64_t>(rbx1) < 0x140013448) {
        rdi2 = *rbx1;
        if (rdi2) {
            fun_140010a1c(rdi2, rdx3);
            rdi2(rdi2);
        }
        ++rbx1;
    }
    return;
}

void fun_140001968() {
    void** rcx1;
    void** rdx2;
    int64_t rax3;
    void** rcx4;
    void** rbx5;
    void** rax6;
    void** rdi7;
    void** rcx8;
    void** r9_9;
    void** rcx10;
    void** rcx11;
    void** rbx12;
    uint32_t eax13;
    void** rdx14;
    void** rcx15;
    void** rax16;
    void** rcx17;
    void** rcx18;
    int64_t rcx19;
    int32_t eax20;
    unsigned char cl21;
    int64_t rax22;
    void** r8_23;
    void** rcx24;
    void** r9_25;

    rcx1 = g140025c40;
    rdx2 = reinterpret_cast<void**>(36);
    *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
    rax3 = reinterpret_cast<int64_t>(wcschr(rcx1, 36));
    if (rax3) {
        rcx4 = g140025c40;
        rbx5 = g140025c48;
        *reinterpret_cast<signed char*>(&rdx2) = -1;
        rax6 = fun_14000e740(rcx4, -1, 0x140025c48);
        rdi7 = rax6;
        if (!*reinterpret_cast<void***>(rax6)) {
            *reinterpret_cast<uint32_t*>(&rcx8) = g140025c24;
            *reinterpret_cast<int32_t*>(&rcx8 + 4) = 0;
            rdx2 = reinterpret_cast<void**>(0x3ec);
            *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0;
            fun_140003898(rcx8, 0x3ec, 0x140025c48, r9_9);
        }
        g140025c48 = rbx5;
        rcx10 = rbx5;
        if (rbx5) {
            rdx2 = g14003d0e0;
            do {
                rbx5 = *reinterpret_cast<void***>(rbx5);
                *reinterpret_cast<void***>(rcx10) = rdx2;
                rdx2 = rcx10;
                g140025c48 = rbx5;
                rcx10 = rbx5;
            } while (rbx5);
            g14003d0e0 = rdx2;
        }
        rcx11 = g140025c40;
        free(rcx11, rdx2, 0x140025c48);
        g140025c40 = rdi7;
    }
    rbx12 = g140025c40;
    eax13 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx12));
    if (!*reinterpret_cast<uint16_t*>(&eax13)) {
        addr_140001a6f_10:
        rdx14 = g140025c30;
        rcx15 = g140025c40;
        g1400157ed = reinterpret_cast<void**>(1);
        rax16 = fun_140001c2c(rcx15, rdx14, 0);
        if (!*reinterpret_cast<signed char*>(&rax16)) {
            rcx17 = g140025c40;
            free(rcx17, rdx14);
            rcx18 = g140025c30;
            free(rcx18, rdx14);
        }
    } else {
        do {
            if (*reinterpret_cast<uint16_t*>(&eax13) >= 0x80) {
                *reinterpret_cast<uint32_t*>(&rcx19) = *reinterpret_cast<uint16_t*>(&eax13);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = 0;
                eax20 = reinterpret_cast<int32_t>(iswspace(rcx19, rdx2, 0x140025c48));
                cl21 = reinterpret_cast<uint1_t>(eax20 == 0);
            } else {
                *reinterpret_cast<uint32_t*>(&rax22) = *reinterpret_cast<uint16_t*>(&eax13);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = 0;
                cl21 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rax22 + 0x140011640) & 1);
            }
        } while (cl21 && (rbx12 = rbx12 + 2, eax13 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx12)), !!*reinterpret_cast<uint16_t*>(&eax13)));
        if (!*reinterpret_cast<void***>(rbx12)) 
            goto addr_140001a6f_10; else 
            goto addr_140001a5b_17;
    }
    g140025c30 = reinterpret_cast<void**>(0);
    g140025c40 = reinterpret_cast<void**>(0);
    return;
    addr_140001a5b_17:
    *reinterpret_cast<uint32_t*>(&r8_23) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx12));
    *reinterpret_cast<int32_t*>(&r8_23 + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx24) = g140025c24;
    *reinterpret_cast<int32_t*>(&rcx24 + 4) = 0;
    fun_140003898(rcx24, 0x3e9, r8_23, r9_25);
    goto addr_140001a6f_10;
}

void fun_140010e60() {
    int64_t rax1;

    goto rax1;
}

struct s58 {
    struct s58* f0;
    int64_t f8;
};

struct s58* g140025c10;

void fun_14000ba78() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    void** rcx4;
    void** rdx5;
    int32_t eax6;
    void** r8_7;
    void** r9_8;
    int64_t r9_9;
    struct s58* rbx10;
    void** rdi11;
    int32_t eax12;
    void** rcx13;
    void** r9_14;
    int64_t r9_15;
    int64_t rcx16;
    int32_t eax17;

    signal(2, 1);
    signal(15, 1);
    zf1 = g140036cec == 0;
    if (zf1 || ((zf2 = (reinterpret_cast<unsigned char>(g1400157ee) & 4) == 0, !zf2) || ((zf3 = (g1400157ec & 16) == 0, !zf3) || ((rcx4 = g140026470, rcx4 == 0) || (*reinterpret_cast<int32_t*>(&rdx5) = 0, *reinterpret_cast<int32_t*>(&rdx5 + 4) = 0, eax6 = reinterpret_cast<int32_t>(_waccess()), eax6 == 0))))) {
        addr_14000bb2b_2:
        fun_140003898(0, 0x422, r8_7, r9_8, 0, 0x422, r8_7, r9_9);
        goto fun_14000bb48;
    } else {
        rbx10 = g140025c10;
        rdi11 = g140026470;
        if (!rbx10) {
            addr_14000bb07_4:
            eax12 = reinterpret_cast<int32_t>(_wunlink(rdi11, rdx5));
            if (!eax12) {
                r8_7 = g140026470;
                *reinterpret_cast<uint32_t*>(&rcx13) = g140025c20;
                *reinterpret_cast<int32_t*>(&rcx13 + 4) = 0;
                fun_140003898(rcx13, 0xfa8, r8_7, r9_14, rcx13, 0xfa8, r8_7, r9_15);
                goto addr_14000bb2b_2;
            }
        } else {
            do {
                rcx16 = rbx10->f8;
                rdx5 = rdi11;
                eax17 = reinterpret_cast<int32_t>(_wcsicmp(rcx16, rdx5));
                if (!eax17) 
                    goto addr_14000bb2b_2;
                rbx10 = rbx10->f0;
            } while (rbx10);
        }
    }
    rdi11 = g140026470;
    goto addr_14000bb07_4;
}

signed char fun_14000c914(unsigned char cl) {
    struct s28* rdx2;
    uint32_t ecx3;
    uint16_t* rax4;
    uint32_t ecx5;

    rdx2 = g1400370d0;
    if (rdx2->f0 != 22) 
        goto addr_14000c954_2;
    ecx3 = cl - 19;
    if (!ecx3) {
        rax4 = reinterpret_cast<uint16_t*>(-reinterpret_cast<uint64_t>(rdx2->f8));
    } else {
        ecx5 = ecx3 - 1;
        if (!ecx5) {
            rax4 = reinterpret_cast<uint16_t*>(~reinterpret_cast<uint64_t>(rdx2->f8));
        } else {
            if (ecx5 != 1) {
                addr_14000c954_2:
                return 0;
            } else {
                *reinterpret_cast<int32_t*>(&rax4) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
                *reinterpret_cast<unsigned char*>(&rax4) = reinterpret_cast<uint1_t>(rdx2->f8 == 0);
            }
        }
    }
    rdx2->f8 = rax4;
    return 1;
}

int64_t _set_new_mode = 0x14d3c;

void fun_14000ff68(int64_t rcx) {
    fun_14001093c();
    fun_1400108e4(rcx);
    goto _set_new_mode;
}

int32_t g140015770;

int64_t fun_14001010c() {
    int64_t rcx1;
    signed char al2;
    signed char sil3;
    signed char al4;
    int64_t* rcx5;
    int32_t eax6;
    int64_t rdx7;
    int64_t rax8;
    int64_t* rax9;
    signed char al10;
    int64_t rbx11;
    int64_t* rax12;
    signed char al13;
    int64_t rcx14;
    void*** rax15;
    void*** rax16;
    int64_t rax17;
    void** rdx18;
    void** ecx19;
    void** r9_20;
    int32_t eax21;
    int64_t rcx22;
    unsigned char al23;

    fun_140010698();
    *reinterpret_cast<int32_t*>(&rcx1) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    al2 = fun_14001042c(1);
    if (!al2) {
        *reinterpret_cast<int32_t*>(&rcx1) = 7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
        fun_14001079c(7);
    }
    sil3 = 0;
    al4 = fun_1400103f0(rcx1);
    *reinterpret_cast<int32_t*>(&rcx5) = g140015770;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rcx5) == 1) {
        *reinterpret_cast<int32_t*>(&rcx5) = 7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
        fun_14001079c(7);
    }
    if (*reinterpret_cast<int32_t*>(&rcx5)) {
        sil3 = 1;
    } else {
        g140015770 = 1;
        eax6 = fun_140010c48(0x1400115b0, 0x1400115d0);
        if (!eax6) {
            rdx7 = 0x1400115a8;
            rcx5 = reinterpret_cast<int64_t*>(0x140011598);
            fun_140010c42(0x140011598, 0x1400115a8);
            g140015770 = 2;
        } else {
            *reinterpret_cast<int32_t*>(&rax8) = 0xff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
            goto addr_1400100f9_11;
        }
    }
    *reinterpret_cast<signed char*>(&rcx5) = al4;
    fun_1400105e0(*reinterpret_cast<signed char*>(&rcx5), 0x1400115a8);
    rax9 = fun_14001078c(rcx5, 0x1400115a8);
    if (*rax9 && (rcx5 = rax9, al10 = fun_140010544(rcx5, 0x1400115a8), !!al10)) {
        rbx11 = *rax9;
        fun_140010a1c(rbx11, 0x1400115a8);
        *reinterpret_cast<int32_t*>(&rdx7) = 2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rcx5) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
        rbx11();
    }
    rax12 = fun_140010794(rcx5, rdx7);
    if (*rax12 && (al13 = fun_140010544(rax12, rdx7), !!al13)) {
        rcx14 = *rax12;
        fun_140010c72(rcx14, rdx7);
    }
    fun_140010c00();
    rax15 = fun_140010c60();
    rax16 = fun_140010c5a();
    rax17 = fun_140010c3c();
    rdx18 = *rax15;
    ecx19 = *rax16;
    eax21 = fun_14000a348(ecx19, rdx18, rax17, r9_20);
    *reinterpret_cast<int32_t*>(&rcx22) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = 0;
    fun_140010c06();
    al23 = fun_1400108e8();
    if (!al23) {
        *reinterpret_cast<int32_t*>(&rcx22) = eax21;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = 0;
        fun_140010c18(rcx22, rdx18, rax17);
    }
    if (!sil3) {
        fun_140010c66(rcx22, rdx18, rax17);
    }
    fun_140010604(1, 0, rax17);
    *reinterpret_cast<int32_t*>(&rax8) = eax21;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    addr_1400100f9_11:
    return rax8;
}

void fun_1400100d8() {
    unsigned char al1;
    int64_t rcx2;
    int32_t eax3;
    signed char v4;

    al1 = fun_1400108e8();
    if (!al1) {
        *reinterpret_cast<int32_t*>(&rcx2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = 0;
        fun_140010c4e(rcx2);
    }
    if (!v4) {
        fun_140010c6c(rcx2);
    }
}

struct s59 {
    signed char[56] pad56;
    struct s54* f38;
};

int64_t fun_140010ccc() {
    struct s54* r8_1;
    struct s59* r9_2;
    void* rdx3;
    struct s38* r9_4;

    r8_1 = r9_2->f38;
    fun_140010cec(rdx3, r9_4, r8_1);
    return 1;
}

void fun_1400105d9() {
}

struct s60 {
    int32_t f0;
    unsigned char f4;
};

int64_t fun_140010d48(struct s37* rcx, void* rdx, int64_t r8, struct s38* r9) {
    int64_t rbx5;
    struct s60* rbx6;
    uint32_t edx7;
    int32_t r10d8;
    uint32_t r11d9;
    uint32_t eax10;
    int64_t rax11;

    *reinterpret_cast<int32_t*>(&rbx5) = *r9->f38;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx5) + 4) = 0;
    rbx6 = reinterpret_cast<struct s60*>((rbx5 << 4) + reinterpret_cast<int64_t>(r9->f38));
    fun_140010cec(rdx, r9, &rbx6->f4);
    edx7 = 1;
    r10d8 = rcx->f4;
    r11d9 = rbx6->f4 & 2;
    if (!(*reinterpret_cast<unsigned char*>(&r10d8) & 0x66)) {
        r11d9 = rbx6->f4 & 1;
    }
    if (r11d9) {
        eax10 = fun_140010c0c(rcx, rdx, r8, r9);
        edx7 = eax10;
    }
    *reinterpret_cast<uint32_t*>(&rax11) = edx7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
    return rax11;
}

struct s61 {
    signed char[336] pad336;
    void** f150;
    signed char[1231] pad1568;
    void** f620;
};

int64_t fun_140010e62(void** rcx, struct s61* rdx) {
    void** r9_3;
    int64_t rax4;

    rax4 = fun_14000a1e0(rcx, &rdx->f620, &rdx->f150, r9_3);
    return rax4;
}

int64_t fun_140010ca4(void** rcx) {
    uint64_t* rax2;
    uint64_t* rax3;

    rax2 = fun_14000bd80(rcx);
    *rax2 = *rax2 | 4;
    rax3 = fun_14000bddc();
    *rax3 = *rax3 | 2;
    return 0;
}

struct s62 {
    int32_t f0;
    signed char[20] pad24;
    int32_t f18;
    signed char[4] pad32;
    int32_t f20;
};

int64_t fun_14001094c(struct s62** rcx) {
    int64_t rcx2;

    if ((*rcx)->f0 != 0xe06d7363 || ((*rcx)->f18 != 4 || (*reinterpret_cast<int32_t*>(&rcx2) = (*rcx)->f20, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = 0, static_cast<uint32_t>(rcx2 - 0x19930520) > 2) && *reinterpret_cast<int32_t*>(&rcx2) != 0x1994000)) {
        return 0;
    } else {
        fun_140010c9c();
    }
}

void fun_140010e8c(int32_t** rcx, int64_t rdx) {
    int64_t rcx3;

    *reinterpret_cast<int32_t*>(&rcx3) = **rcx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0;
    fun_140010c1e(rcx3, rcx);
    return;
}

int64_t fun_140010eaa(int32_t** rcx, int64_t rdx) {
    int32_t ecx3;
    int64_t rax4;

    ecx3 = 0;
    *reinterpret_cast<unsigned char*>(&ecx3) = reinterpret_cast<uint1_t>(**rcx == 0xc0000005);
    *reinterpret_cast<int32_t*>(&rax4) = ecx3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    return rax4;
}

void fun_140010ec2() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    signed char* rax10;
    signed char* rax11;
    signed char al12;
    signed char* rax13;
    signed char* rax14;
    signed char al15;
    signed char* rax16;
    signed char* rax17;
    signed char al18;
    signed char* rax19;
    signed char* rax20;
    signed char al21;
    signed char* rax22;
    signed char* rax23;
    signed char al24;
    signed char* rax25;
    signed char* rax26;
    signed char al27;
    signed char* rax28;
    signed char* rax29;
    signed char al30;
    signed char* rax31;
    signed char* rax32;
    signed char al33;
    signed char* rax34;
    signed char* rax35;
    signed char al36;
    signed char* rax37;
    signed char* rax38;
    signed char al39;
    signed char* rax40;
    signed char* rax41;
    signed char al42;
    signed char* rax43;
    signed char* rax44;
    signed char al45;
    signed char* rax46;
    signed char* rax47;
    signed char al48;
    signed char* rax49;
    signed char* rax50;
    signed char al51;
    signed char* rax52;
    signed char* rax53;
    signed char al54;
    signed char* rax55;
    signed char* rax56;
    signed char al57;
    signed char* rax58;
    signed char* rax59;
    signed char al60;
    signed char* rax61;
    signed char* rax62;
    signed char al63;
    signed char* rax64;
    signed char* rax65;
    signed char al66;
    signed char* rax67;
    signed char* rax68;
    signed char al69;
    signed char* rax70;
    signed char* rax71;
    signed char al72;
    signed char* rax73;
    signed char* rax74;
    signed char al75;
    signed char* rax76;
    signed char* rax77;
    signed char al78;
    signed char* rax79;
    signed char* rax80;
    signed char al81;
    signed char* rax82;
    signed char* rax83;
    signed char al84;
    signed char* rax85;
    signed char* rax86;
    signed char al87;
    signed char* rax88;
    signed char* rax89;
    signed char al90;
    signed char* rax91;
    signed char* rax92;
    signed char al93;
    signed char* rax94;
    signed char* rax95;
    signed char al96;
    signed char* rax97;
    signed char* rax98;
    signed char al99;
    signed char* rax100;
    signed char* rax101;
    signed char al102;
    signed char* rax103;
    signed char* rax104;
    signed char al105;
    signed char* rax106;
    signed char* rax107;
    signed char al108;
    signed char* rax109;
    signed char* rax110;
    signed char al111;
    signed char* rax112;
    signed char* rax113;
    signed char al114;
    signed char* rax115;
    signed char* rax116;
    signed char al117;
    signed char* rax118;
    signed char* rax119;
    signed char al120;
    signed char* rax121;
    signed char* rax122;
    signed char al123;
    signed char* rax124;
    signed char* rax125;
    signed char al126;
    signed char* rax127;
    signed char* rax128;
    signed char al129;
    signed char* rax130;
    signed char* rax131;
    signed char al132;
    signed char* rax133;
    signed char* rax134;
    signed char al135;
    signed char* rax136;
    signed char* rax137;
    signed char al138;
    signed char* rax139;
    signed char* rax140;
    signed char al141;
    signed char* rax142;
    signed char* rax143;
    signed char al144;
    signed char* rax145;
    signed char* rax146;
    signed char al147;
    signed char* rax148;
    signed char* rax149;
    signed char al150;
    signed char* rax151;
    signed char* rax152;
    signed char al153;
    signed char* rax154;
    signed char* rax155;
    signed char al156;
    signed char* rax157;
    signed char* rax158;
    signed char al159;
    signed char* rax160;
    signed char* rax161;
    signed char al162;
    signed char* rax163;
    signed char* rax164;
    signed char al165;
    signed char* rax166;
    signed char* rax167;
    signed char al168;
    signed char* rax169;
    signed char* rax170;
    signed char al171;
    signed char* rax172;
    signed char* rax173;
    signed char al174;
    signed char* rax175;
    signed char* rax176;
    signed char al177;
    signed char* rax178;
    signed char* rax179;
    signed char al180;
    signed char* rax181;
    signed char* rax182;
    signed char al183;
    signed char* rax184;
    signed char* rax185;
    signed char al186;
    signed char* rax187;
    signed char* rax188;
    signed char al189;
    signed char* rax190;
    signed char* rax191;
    signed char al192;
    signed char* rax193;
    signed char* rax194;
    signed char al195;
    signed char* rax196;
    signed char* rax197;
    signed char al198;
    signed char* rax199;
    signed char* rax200;
    signed char al201;
    signed char* rax202;
    signed char* rax203;
    signed char al204;
    signed char* rax205;
    signed char* rax206;
    signed char al207;
    signed char* rax208;
    signed char* rax209;
    signed char al210;
    signed char* rax211;
    signed char* rax212;
    signed char al213;
    signed char* rax214;
    signed char* rax215;
    signed char al216;
    signed char* rax217;
    signed char* rax218;
    signed char al219;
    signed char* rax220;
    signed char* rax221;
    signed char al222;
    signed char* rax223;
    signed char* rax224;
    signed char al225;
    signed char* rax226;
    signed char* rax227;
    signed char al228;
    signed char* rax229;
    signed char* rax230;
    signed char al231;
    signed char* rax232;
    signed char* rax233;
    signed char al234;
    signed char* rax235;
    signed char* rax236;
    signed char al237;
    signed char* rax238;
    signed char* rax239;
    signed char al240;
    signed char* rax241;
    signed char* rax242;
    signed char al243;
    signed char* rax244;
    signed char* rax245;
    signed char al246;
    signed char* rax247;
    signed char* rax248;
    signed char al249;
    signed char* rax250;
    signed char* rax251;
    signed char al252;
    signed char* rax253;
    signed char* rax254;
    signed char al255;
    signed char* rax256;
    signed char* rax257;
    signed char al258;
    signed char* rax259;
    signed char* rax260;
    signed char al261;
    signed char* rax262;
    signed char* rax263;
    signed char al264;
    signed char* rax265;
    signed char* rax266;
    signed char al267;
    signed char* rax268;
    signed char* rax269;
    signed char al270;
    signed char* rax271;
    signed char* rax272;
    signed char al273;
    signed char* rax274;
    signed char* rax275;
    signed char al276;
    signed char* rax277;
    signed char* rax278;
    signed char al279;
    signed char* rax280;
    signed char* rax281;
    signed char al282;
    signed char* rax283;
    signed char* rax284;
    signed char al285;
    signed char* rax286;
    signed char* rax287;
    signed char al288;
    signed char* rax289;
    signed char* rax290;
    signed char al291;
    signed char* rax292;
    signed char* rax293;
    signed char al294;
    signed char* rax295;
    signed char* rax296;
    signed char al297;
    signed char* rax298;
    signed char* rax299;
    signed char al300;
    signed char* rax301;
    signed char* rax302;
    signed char al303;
    signed char* rax304;
    signed char* rax305;
    signed char al306;
    signed char* rax307;
    signed char* rax308;
    signed char al309;
    signed char* rax310;
    signed char* rax311;
    signed char al312;
    signed char* rax313;
    signed char* rax314;
    signed char al315;
    signed char* rax316;
    signed char* rax317;
    signed char al318;
    signed char* rax319;
    signed char* rax320;
    signed char al321;
    signed char* rax322;
    signed char* rax323;
    signed char al324;
    signed char* rax325;
    signed char* rax326;
    signed char al327;
    signed char* rax328;
    signed char* rax329;
    signed char al330;
    signed char* rax331;
    signed char* rax332;
    signed char al333;
    signed char* rax334;
    signed char* rax335;
    signed char al336;
    signed char* rax337;
    signed char* rax338;
    signed char al339;
    signed char* rax340;
    signed char* rax341;
    signed char al342;
    signed char* rax343;
    signed char* rax344;
    signed char al345;
    signed char* rax346;
    signed char* rax347;
    signed char al348;
    signed char* rax349;
    signed char* rax350;
    signed char al351;
    signed char* rax352;
    signed char* rax353;
    signed char al354;
    signed char* rax355;
    signed char* rax356;
    signed char al357;
    signed char* rax358;
    signed char* rax359;
    signed char al360;
    signed char* rax361;
    signed char* rax362;
    signed char al363;
    signed char* rax364;
    signed char* rax365;
    signed char al366;
    signed char* rax367;
    signed char* rax368;
    signed char al369;
    signed char* rax370;
    signed char* rax371;
    signed char al372;
    signed char* rax373;
    signed char* rax374;
    signed char al375;
    signed char* rax376;
    signed char* rax377;
    signed char al378;
    signed char* rax379;
    signed char* rax380;
    signed char al381;
    signed char* rax382;
    signed char* rax383;
    signed char al384;
    signed char* rax385;
    signed char* rax386;
    signed char al387;
    signed char* rax388;
    signed char* rax389;
    signed char al390;
    signed char* rax391;
    signed char* rax392;
    signed char al393;
    signed char* rax394;
    signed char* rax395;
    signed char al396;
    signed char* rax397;
    signed char* rax398;
    signed char al399;
    signed char* rax400;
    signed char* rax401;
    signed char al402;
    signed char* rax403;
    signed char* rax404;
    signed char al405;
    signed char* rax406;
    signed char* rax407;
    signed char al408;
    signed char* rax409;
    signed char* rax410;
    signed char al411;
    signed char* rax412;
    signed char* rax413;
    signed char al414;
    signed char* rax415;
    signed char* rax416;
    signed char al417;
    signed char* rax418;
    signed char* rax419;
    signed char al420;
    signed char* rax421;
    signed char* rax422;
    signed char al423;
    signed char* rax424;
    signed char* rax425;
    signed char al426;
    signed char* rax427;
    signed char* rax428;
    signed char al429;
    signed char* rax430;
    signed char* rax431;
    signed char al432;
    signed char* rax433;
    signed char* rax434;
    signed char al435;
    signed char* rax436;
    signed char* rax437;
    signed char al438;
    signed char* rax439;
    signed char* rax440;
    signed char al441;
    signed char* rax442;
    signed char* rax443;
    signed char al444;
    signed char* rax445;
    signed char* rax446;
    signed char al447;
    signed char* rax448;
    signed char* rax449;
    signed char al450;
    signed char* rax451;
    signed char* rax452;
    signed char al453;
    signed char* rax454;
    signed char* rax455;
    signed char al456;
    signed char* rax457;
    signed char* rax458;
    signed char al459;
    signed char* rax460;
    signed char* rax461;
    signed char al462;
    signed char* rax463;
    signed char* rax464;
    signed char al465;
    signed char* rax466;
    signed char* rax467;
    signed char al468;
    signed char* rax469;
    signed char* rax470;
    signed char al471;
    signed char* rax472;
    signed char* rax473;
    signed char al474;
    signed char* rax475;
    signed char* rax476;
    signed char al477;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    *rax10 = reinterpret_cast<signed char>(*rax11 + al12);
    *rax13 = reinterpret_cast<signed char>(*rax14 + al15);
    *rax16 = reinterpret_cast<signed char>(*rax17 + al18);
    *rax19 = reinterpret_cast<signed char>(*rax20 + al21);
    *rax22 = reinterpret_cast<signed char>(*rax23 + al24);
    *rax25 = reinterpret_cast<signed char>(*rax26 + al27);
    *rax28 = reinterpret_cast<signed char>(*rax29 + al30);
    *rax31 = reinterpret_cast<signed char>(*rax32 + al33);
    *rax34 = reinterpret_cast<signed char>(*rax35 + al36);
    *rax37 = reinterpret_cast<signed char>(*rax38 + al39);
    *rax40 = reinterpret_cast<signed char>(*rax41 + al42);
    *rax43 = reinterpret_cast<signed char>(*rax44 + al45);
    *rax46 = reinterpret_cast<signed char>(*rax47 + al48);
    *rax49 = reinterpret_cast<signed char>(*rax50 + al51);
    *rax52 = reinterpret_cast<signed char>(*rax53 + al54);
    *rax55 = reinterpret_cast<signed char>(*rax56 + al57);
    *rax58 = reinterpret_cast<signed char>(*rax59 + al60);
    *rax61 = reinterpret_cast<signed char>(*rax62 + al63);
    *rax64 = reinterpret_cast<signed char>(*rax65 + al66);
    *rax67 = reinterpret_cast<signed char>(*rax68 + al69);
    *rax70 = reinterpret_cast<signed char>(*rax71 + al72);
    *rax73 = reinterpret_cast<signed char>(*rax74 + al75);
    *rax76 = reinterpret_cast<signed char>(*rax77 + al78);
    *rax79 = reinterpret_cast<signed char>(*rax80 + al81);
    *rax82 = reinterpret_cast<signed char>(*rax83 + al84);
    *rax85 = reinterpret_cast<signed char>(*rax86 + al87);
    *rax88 = reinterpret_cast<signed char>(*rax89 + al90);
    *rax91 = reinterpret_cast<signed char>(*rax92 + al93);
    *rax94 = reinterpret_cast<signed char>(*rax95 + al96);
    *rax97 = reinterpret_cast<signed char>(*rax98 + al99);
    *rax100 = reinterpret_cast<signed char>(*rax101 + al102);
    *rax103 = reinterpret_cast<signed char>(*rax104 + al105);
    *rax106 = reinterpret_cast<signed char>(*rax107 + al108);
    *rax109 = reinterpret_cast<signed char>(*rax110 + al111);
    *rax112 = reinterpret_cast<signed char>(*rax113 + al114);
    *rax115 = reinterpret_cast<signed char>(*rax116 + al117);
    *rax118 = reinterpret_cast<signed char>(*rax119 + al120);
    *rax121 = reinterpret_cast<signed char>(*rax122 + al123);
    *rax124 = reinterpret_cast<signed char>(*rax125 + al126);
    *rax127 = reinterpret_cast<signed char>(*rax128 + al129);
    *rax130 = reinterpret_cast<signed char>(*rax131 + al132);
    *rax133 = reinterpret_cast<signed char>(*rax134 + al135);
    *rax136 = reinterpret_cast<signed char>(*rax137 + al138);
    *rax139 = reinterpret_cast<signed char>(*rax140 + al141);
    *rax142 = reinterpret_cast<signed char>(*rax143 + al144);
    *rax145 = reinterpret_cast<signed char>(*rax146 + al147);
    *rax148 = reinterpret_cast<signed char>(*rax149 + al150);
    *rax151 = reinterpret_cast<signed char>(*rax152 + al153);
    *rax154 = reinterpret_cast<signed char>(*rax155 + al156);
    *rax157 = reinterpret_cast<signed char>(*rax158 + al159);
    *rax160 = reinterpret_cast<signed char>(*rax161 + al162);
    *rax163 = reinterpret_cast<signed char>(*rax164 + al165);
    *rax166 = reinterpret_cast<signed char>(*rax167 + al168);
    *rax169 = reinterpret_cast<signed char>(*rax170 + al171);
    *rax172 = reinterpret_cast<signed char>(*rax173 + al174);
    *rax175 = reinterpret_cast<signed char>(*rax176 + al177);
    *rax178 = reinterpret_cast<signed char>(*rax179 + al180);
    *rax181 = reinterpret_cast<signed char>(*rax182 + al183);
    *rax184 = reinterpret_cast<signed char>(*rax185 + al186);
    *rax187 = reinterpret_cast<signed char>(*rax188 + al189);
    *rax190 = reinterpret_cast<signed char>(*rax191 + al192);
    *rax193 = reinterpret_cast<signed char>(*rax194 + al195);
    *rax196 = reinterpret_cast<signed char>(*rax197 + al198);
    *rax199 = reinterpret_cast<signed char>(*rax200 + al201);
    *rax202 = reinterpret_cast<signed char>(*rax203 + al204);
    *rax205 = reinterpret_cast<signed char>(*rax206 + al207);
    *rax208 = reinterpret_cast<signed char>(*rax209 + al210);
    *rax211 = reinterpret_cast<signed char>(*rax212 + al213);
    *rax214 = reinterpret_cast<signed char>(*rax215 + al216);
    *rax217 = reinterpret_cast<signed char>(*rax218 + al219);
    *rax220 = reinterpret_cast<signed char>(*rax221 + al222);
    *rax223 = reinterpret_cast<signed char>(*rax224 + al225);
    *rax226 = reinterpret_cast<signed char>(*rax227 + al228);
    *rax229 = reinterpret_cast<signed char>(*rax230 + al231);
    *rax232 = reinterpret_cast<signed char>(*rax233 + al234);
    *rax235 = reinterpret_cast<signed char>(*rax236 + al237);
    *rax238 = reinterpret_cast<signed char>(*rax239 + al240);
    *rax241 = reinterpret_cast<signed char>(*rax242 + al243);
    *rax244 = reinterpret_cast<signed char>(*rax245 + al246);
    *rax247 = reinterpret_cast<signed char>(*rax248 + al249);
    *rax250 = reinterpret_cast<signed char>(*rax251 + al252);
    *rax253 = reinterpret_cast<signed char>(*rax254 + al255);
    *rax256 = reinterpret_cast<signed char>(*rax257 + al258);
    *rax259 = reinterpret_cast<signed char>(*rax260 + al261);
    *rax262 = reinterpret_cast<signed char>(*rax263 + al264);
    *rax265 = reinterpret_cast<signed char>(*rax266 + al267);
    *rax268 = reinterpret_cast<signed char>(*rax269 + al270);
    *rax271 = reinterpret_cast<signed char>(*rax272 + al273);
    *rax274 = reinterpret_cast<signed char>(*rax275 + al276);
    *rax277 = reinterpret_cast<signed char>(*rax278 + al279);
    *rax280 = reinterpret_cast<signed char>(*rax281 + al282);
    *rax283 = reinterpret_cast<signed char>(*rax284 + al285);
    *rax286 = reinterpret_cast<signed char>(*rax287 + al288);
    *rax289 = reinterpret_cast<signed char>(*rax290 + al291);
    *rax292 = reinterpret_cast<signed char>(*rax293 + al294);
    *rax295 = reinterpret_cast<signed char>(*rax296 + al297);
    *rax298 = reinterpret_cast<signed char>(*rax299 + al300);
    *rax301 = reinterpret_cast<signed char>(*rax302 + al303);
    *rax304 = reinterpret_cast<signed char>(*rax305 + al306);
    *rax307 = reinterpret_cast<signed char>(*rax308 + al309);
    *rax310 = reinterpret_cast<signed char>(*rax311 + al312);
    *rax313 = reinterpret_cast<signed char>(*rax314 + al315);
    *rax316 = reinterpret_cast<signed char>(*rax317 + al318);
    *rax319 = reinterpret_cast<signed char>(*rax320 + al321);
    *rax322 = reinterpret_cast<signed char>(*rax323 + al324);
    *rax325 = reinterpret_cast<signed char>(*rax326 + al327);
    *rax328 = reinterpret_cast<signed char>(*rax329 + al330);
    *rax331 = reinterpret_cast<signed char>(*rax332 + al333);
    *rax334 = reinterpret_cast<signed char>(*rax335 + al336);
    *rax337 = reinterpret_cast<signed char>(*rax338 + al339);
    *rax340 = reinterpret_cast<signed char>(*rax341 + al342);
    *rax343 = reinterpret_cast<signed char>(*rax344 + al345);
    *rax346 = reinterpret_cast<signed char>(*rax347 + al348);
    *rax349 = reinterpret_cast<signed char>(*rax350 + al351);
    *rax352 = reinterpret_cast<signed char>(*rax353 + al354);
    *rax355 = reinterpret_cast<signed char>(*rax356 + al357);
    *rax358 = reinterpret_cast<signed char>(*rax359 + al360);
    *rax361 = reinterpret_cast<signed char>(*rax362 + al363);
    *rax364 = reinterpret_cast<signed char>(*rax365 + al366);
    *rax367 = reinterpret_cast<signed char>(*rax368 + al369);
    *rax370 = reinterpret_cast<signed char>(*rax371 + al372);
    *rax373 = reinterpret_cast<signed char>(*rax374 + al375);
    *rax376 = reinterpret_cast<signed char>(*rax377 + al378);
    *rax379 = reinterpret_cast<signed char>(*rax380 + al381);
    *rax382 = reinterpret_cast<signed char>(*rax383 + al384);
    *rax385 = reinterpret_cast<signed char>(*rax386 + al387);
    *rax388 = reinterpret_cast<signed char>(*rax389 + al390);
    *rax391 = reinterpret_cast<signed char>(*rax392 + al393);
    *rax394 = reinterpret_cast<signed char>(*rax395 + al396);
    *rax397 = reinterpret_cast<signed char>(*rax398 + al399);
    *rax400 = reinterpret_cast<signed char>(*rax401 + al402);
    *rax403 = reinterpret_cast<signed char>(*rax404 + al405);
    *rax406 = reinterpret_cast<signed char>(*rax407 + al408);
    *rax409 = reinterpret_cast<signed char>(*rax410 + al411);
    *rax412 = reinterpret_cast<signed char>(*rax413 + al414);
    *rax415 = reinterpret_cast<signed char>(*rax416 + al417);
    *rax418 = reinterpret_cast<signed char>(*rax419 + al420);
    *rax421 = reinterpret_cast<signed char>(*rax422 + al423);
    *rax424 = reinterpret_cast<signed char>(*rax425 + al426);
    *rax427 = reinterpret_cast<signed char>(*rax428 + al429);
    *rax430 = reinterpret_cast<signed char>(*rax431 + al432);
    *rax433 = reinterpret_cast<signed char>(*rax434 + al435);
    *rax436 = reinterpret_cast<signed char>(*rax437 + al438);
    *rax439 = reinterpret_cast<signed char>(*rax440 + al441);
    *rax442 = reinterpret_cast<signed char>(*rax443 + al444);
    *rax445 = reinterpret_cast<signed char>(*rax446 + al447);
    *rax448 = reinterpret_cast<signed char>(*rax449 + al450);
    *rax451 = reinterpret_cast<signed char>(*rax452 + al453);
    *rax454 = reinterpret_cast<signed char>(*rax455 + al456);
    *rax457 = reinterpret_cast<signed char>(*rax458 + al459);
    *rax460 = reinterpret_cast<signed char>(*rax461 + al462);
    *rax463 = reinterpret_cast<signed char>(*rax464 + al465);
    *rax466 = reinterpret_cast<signed char>(*rax467 + al468);
    *rax469 = reinterpret_cast<signed char>(*rax470 + al471);
    *rax472 = reinterpret_cast<signed char>(*rax473 + al474);
    *rax475 = reinterpret_cast<signed char>(*rax476 + al477);
}
