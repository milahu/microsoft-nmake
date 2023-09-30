int32_t sub_401000()
{
    sub_40b110(&data_413aa0, &data_413a28, nullptr, 0, 0, 0, 0);
    int32_t eax = sub_40add0(0x413aa0);
    data_413a3c = eax;
    return eax;
}

int32_t* sub_401030()
{
    if (data_413a3c != 0)
    {
        data_413a48 = (data_413a48 | 0x20);
        sub_401170();
        data_413a3c = 0;
    }
    if (((data_413a48 & 0x20) != 0 && sub_40c3a0(&data_413aa0) != 0))
    {
        if ((data_413a48 & 0x10) != 0)
        {
            sub_403220(data_413424, 0x444);
        }
        sub_403220(data_413424, 0x43d);
    }
    int32_t* eax_4 = sub_40ad20();
    if ((data_413a48 & 0x40) == 0)
    {
        eax_4[1] = sub_40add0(0x413aa0);
    }
    else
    {
        eax_4[1] = data_4133fc;
        data_4133fc = 0;
    }
    bool cond:2 = (data_413a48 & 0x10) == 0;
    int32_t* var_4 = eax_4;
    if ((cond:2 || ((!cond:2) && (data_413a48 & 0x20) != 0)))
    {
        sub_40b110(eax_4[1], &data_413a28, nullptr, 0, 0, 0, 0);
        if ((data_413a48 & 0x20) != 0)
        {
            int32_t* i = data_413a28;
            sub_4013d0(&data_413004, &var_4, 0x413a28);
            sub_4013d0(&data_413000, &var_4, 0);
            data_413a28 = i;
            if (i != 0)
            {
                do
                {
                    i = *i;
                    sub_40ada0(data_413a28);
                    data_413a28 = i;
                } while (i != 0);
            }
        }
    }
    return sub_40ae30(&data_413a38, var_4);
}

int32_t* sub_401170()
{
    data_413a44 = data_4133d0;
    int32_t* eax_1 = sub_40ad20();
    eax_1[1] = data_413a3c;
    int32_t* i = data_413a28;
    data_413a38 = eax_1;
    sub_4013d0(&data_413004, &data_413a38, 0x413a28);
    sub_4013d0(&data_413000, &data_413a38, 0);
    data_413a28 = i;
    if (i != 0)
    {
        do
        {
            i = *i;
            sub_40ada0(data_413a28);
            data_413a28 = i;
        } while (i != 0);
    }
    if ((data_413a38 == 0 && (data_413a48 & 0x20) == 0))
    {
        int32_t var_8_2 = data_413a3c;
        sub_403220(data_4133f4, 0x43b);
    }
    int32_t* eax_2 = sub_40c3a0(*(data_413a38 + 4));
    if (eax_2 != 0)
    {
        data_413a48 = (data_413a48 | 0x10);
    }
    return eax_2;
}

int32_t* sub_401230()
{
    if (data_413a3c == 0)
    {
        data_413a48 = (data_413a48 & 0xdf);
    }
    else
    {
        sub_401170();
        data_413a3c = 0;
    }
    if (data_413aa1 != 0)
    {
        data_413a44 = (data_413a44 | 0x20);
    }
    if (data_413a38 == 0)
    {
        sub_403220(data_413424, 0x40d);
    }
    int32_t* eax_5;
    if ((data_413a48 & 0x10) == 0)
    {
        int32_t* eax_6 = data_413a38;
        int32_t eax_7;
        if (*eax_6 == 0)
        {
            eax_7 = sub_401310(eax_6[1]);
            if (eax_7 != 0)
            {
                free(*(data_413a38 + 4));
                eax_5 = sub_40ada0(data_413a38);
            }
        }
        if ((*eax_6 != 0 || (*eax_6 == 0 && eax_7 == 0)))
        {
            eax_5 = data_413a38;
            data_411b10 = eax_5;
        }
    }
    else
    {
        if ((data_413a44 & 0x20) != 0)
        {
            sub_403220(data_413424, 0x440);
        }
        sub_401bc0(data_413a38);
        eax_5 = sub_40ada0(data_413a38);
    }
    data_413a38 = 0;
    data_413a48 = (data_413a48 | 0x80);
    return eax_5;
}

int32_t __stdcall sub_401310(int32_t arg1)
{
    int32_t esi = 0;
    if (_mbsicmp(arg1, ".SILENT") == 0)
    {
        int32_t eax;
        eax = data_413a48;
        eax = (eax | 2);
        esi = 1;
        data_413a48 = eax;
        sub_4086d0(0x73, 1);
    }
    if (_mbsicmp(arg1, ".IGNORE") == 0)
    {
        int32_t eax_1;
        eax_1 = data_413a48;
        eax_1 = (eax_1 | 4);
        data_413a48 = eax_1;
        sub_4086d0(0x69, 1);
        return 1;
    }
    if (_mbscmp(arg1, ".SUFFIXES") == 0)
    {
        int32_t eax_3;
        eax_3 = data_413a48;
        eax_3 = (eax_3 | 1);
        data_413a48 = eax_3;
        return 1;
    }
    if (_mbscmp(arg1, ".PRECIOUS") == 0)
    {
        int32_t eax_5;
        eax_5 = data_413a48;
        esi = 1;
        eax_5 = (eax_5 | 8);
        data_413a48 = eax_5;
    }
    return esi;
}

void __stdcall sub_4013d0(char* arg1, int32_t* arg2, int32_t arg3)
{
    int32_t var_8 = 0;
    int32_t var_4 = 0;
    int32_t* i_1 = nullptr;
    int32_t* i = *arg2;
    if (i != 0)
    {
        do
        {
            int32_t i_3 = _mbspbrk(i[1], arg1);
            if (i_3 == 0)
            {
                i_1 = i;
                i = *i;
            }
            else
            {
                int32_t* i_2;
                if (*arg1 != 0x24)
                {
                    i_3 = sub_40c3a0(i[1]);
                    if (i_3 == 0)
                    {
                        i_3 = sub_40cb30(i[1]);
                        i_2 = i_3;
                        var_4 = i[1];
                    }
                    i_1 = i;
                    i = *i;
                }
                else
                {
                    int32_t var_24_2 = arg3;
                    var_8 = sub_40b700(i[1]);
                    free(i[1]);
                }
                if ((*arg1 == 0x24 || (*arg1 != 0x24 && i_3 == 0)))
                {
                    int32_t eax_7 = *i;
                    if (i_1 == 0)
                    {
                        *arg2 = eax_7;
                        sub_40ada0(i);
                        i = *arg2;
                    }
                    else
                    {
                        *i_1 = eax_7;
                        sub_40ada0(i);
                        i = *i_1;
                    }
                    if (*arg1 == 0x24)
                    {
                        int32_t var_c = var_8;
                        char* j = sub_401550(&var_c);
                        if (j != 0)
                        {
                            do
                            {
                                i_2 = sub_40ad20();
                                i_2[1] = sub_40add0(j);
                                sub_40ae10(arg2, i_2);
                                if (i_1 == 0)
                                {
                                    i_1 = i_2;
                                }
                                j = sub_401550(&var_c);
                            } while (j != 0);
                        }
                        free(var_8);
                    }
                    else
                    {
                        if (i_2 != 0)
                        {
                            if (i_1 == 0)
                            {
                                i_1 = i_2;
                                if (*i_1 != 0)
                                {
                                    do
                                    {
                                        i_1 = *i_1;
                                    } while (*i_1 != 0);
                                }
                            }
                            sub_40ae30(&i_2, *arg2);
                            *arg2 = i_2;
                        }
                        free(var_4);
                    }
                }
            }
        } while (i != 0);
    }
}

char* __stdcall sub_401550(int32_t* arg1)
{
    char* edx = *arg1;
    while (true)
    {
        char eax = *edx;
        if ((eax != 0x20 && eax != 9))
        {
            char* eax_1 = edx;
            int32_t ebx;
            ebx = *edx;
            if (ebx == 0)
            {
                return 0;
            }
            if (ebx == 0x22)
            {
                edx = &edx[1];
                if (*edx != 0)
                {
                    while (*edx != 0x22)
                    {
                        edx = &edx[1];
                        if (*edx == 0)
                        {
                            break;
                        }
                    }
                }
            }
            else if (ebx != 0)
            {
                do
                {
                    ebx = *edx;
                    if (ebx == 0x20)
                    {
                        break;
                    }
                    if (ebx == 9)
                    {
                        break;
                    }
                    edx = &edx[1];
                } while (*edx != 0);
            }
            ebx = *edx;
            if ((ebx == 0x20 || ebx == 9))
            {
                *edx = 0;
            }
            if ((ebx != 0x20 && ebx != 9))
            {
                if (ebx == 0x22)
                {
                    edx[1] = 0;
                    *arg1 = &edx[2];
                    return eax_1;
                }
                if (ebx == 0)
                {
                    *arg1 = edx;
                    return eax_1;
                }
            }
            *arg1 = &edx[1];
            return eax_1;
        }
        edx = &edx[1];
    }
}

uint32_t sub_4015e0()
{
    uint32_t eax_1 = 0;
    if ((data_413a48 & 0x80) != 0)
    {
        data_413a48 = (data_413a48 & 0x7f);
    }
    if ((data_413a48 & 0x10) == 0)
    {
        char ecx = (data_413a48 & 2);
        if ((ecx == 0 && (data_413a48 & 4) == 0))
        {
            if ((data_413a48 & 1) == 0)
            {
                if ((data_413a48 & 8) == 0)
                {
                    data_413a40 = sub_40acf0(0x18);
                    eax_1 = data_413a38;
                    **&data_413a40 = eax_1;
                    *(data_413a40 + 4) = data_413a28;
                }
                else if (data_413a38 != 0)
                {
                    eax_1 = sub_401d00(&data_413a30, data_413a38);
                }
            }
            else if (data_413a38 != 0)
            {
                eax_1 = sub_401d00(&data_413a2c, data_413a38);
            }
            else
            {
                eax_1 = sub_401cc0();
            }
        }
        if (((ecx != 0 || (ecx == 0 && (data_413a48 & 4) != 0)) && data_413a38 != 0))
        {
            if (ecx != 0)
            {
                eax_1 = ".SILENT";
            }
            else if ((data_413a48 & 4) != 0)
            {
                eax_1 = ".IGNORE";
            }
            uint32_t var_4_3 = eax_1;
            eax_1 = sub_403220(data_413424, 0x442);
        }
    }
    else if (data_413a38 != 0)
    {
        eax_1 = sub_403220(data_413424, 0x43e);
    }
    data_413a48 = (data_413a48 | 0x40);
    data_413a38 = 0;
    data_413a28 = 0;
    return eax_1;
}

int32_t* sub_401710()
{
    int32_t* eax = nullptr;
    int32_t esi = 1;
    int32_t edi = 1;
    if ((data_413a48 & 0x10) != 0)
    {
        eax = data_413a38;
        *(data_413a34 + 0xc) = eax;
    }
    else
    {
        char ecx = (data_413a48 & 2);
        if ((ecx == 0 && (data_413a48 & 0xd) == 0))
        {
            eax = data_413a38;
            *(data_413a40 + 8) = eax;
            *(data_413a40 + 0xc) = data_413a28;
            int32_t ebx;
            ebx = data_413a44;
            *(data_413a40 + 0x10) = ebx;
            int32_t** i = data_411b10;
            if (i != 0)
            {
                do
                {
                    if (sub_401310(i[1]) != 0)
                    {
                        sub_403220(data_413424, 0x445);
                    }
                    sub_401bf0(i[1], edi, &data_413a40);
                    if (data_4133dc == 0)
                    {
                        esi = 0;
                        data_4133dc = i;
                    }
                    eax = *i;
                    data_411b10 = eax;
                    if (esi != 0)
                    {
                        eax = sub_40ada0(i);
                    }
                    if (edi != 0)
                    {
                        edi = 0;
                    }
                    i = data_411b10;
                } while (i != 0);
            }
        }
        if (((ecx != 0 || (ecx == 0 && (data_413a48 & 0xd) != 0)) && data_413a38 != 0))
        {
            if (ecx != 0)
            {
                eax = ".SILENT";
            }
            else if ((data_413a48 & 4) != 0)
            {
                eax = ".IGNORE";
            }
            else if ((data_413a48 & 8) != 0)
            {
                eax = ".PRECIOUS";
            }
            else if ((data_413a48 & 1) != 0)
            {
                eax = ".SUFFIXES";
            }
            int32_t* var_14_3 = eax;
            eax = sub_403220(data_413424, 0x441);
        }
    }
    data_411b10 = 0;
    data_413a38 = 0;
    data_413a28 = 0;
    data_413a40 = 0;
    data_413a48 = 0;
    return eax;
}

int32_t sub_401870()
{
    if (_mbschr(data_413a3c, 0x24) != 0)
    {
        int32_t* i = data_413a28;
        int32_t var_c_1 = 0x413a28;
        int32_t eax_3 = sub_40b700(data_413a3c);
        if (*eax_3 == 0)
        {
            sub_403220(data_413424, 0x3ec);
        }
        data_413a28 = i;
        if (i != 0)
        {
            do
            {
                i = *i;
                sub_40ada0(data_413a28);
                data_413a28 = i;
            } while (i != 0);
        }
        free(data_413a3c);
        data_413a3c = eax_3;
    }
    char* ecx = data_413a3c;
    int32_t eax_1;
    if (*ecx != 0)
    {
        do
        {
            eax_1 = *ecx;
            if ((*(eax_1 + 0x4149c0) & 1) == 0)
            {
                break;
            }
            ecx = &ecx[1];
        } while (*ecx != 0);
    }
    eax_1 = *ecx;
    if (eax_1 != 0)
    {
        int32_t var_c_4 = eax_1;
        sub_403220(data_413424, 0x3e9);
    }
    char* eax_8 = data_4133fc;
    char* ecx_2 = data_413a3c;
    data_4133b4 = 1;
    int32_t eax_9 = sub_4019f0(ecx_2, eax_8, 0);
    if (eax_9 == 0)
    {
        free(data_413a3c);
        eax_9 = free(data_4133fc);
    }
    data_4133fc = 0;
    data_413a3c = 0;
    return eax_9;
}

int32_t __stdcall sub_401980(char* arg1, char* arg2, char arg3)
{
    char* eax = arg1;
    if (*arg1 != 0)
    {
        do
        {
            void* ecx_1;
            ecx_1 = *eax;
            if ((*(ecx_1 + 0x4149c0) & 1) == 0)
            {
                break;
            }
            eax = &eax[1];
        } while (*eax != 0);
    }
    eax = *eax;
    int32_t ebx;
    ebx = arg3;
    if (eax != 0)
    {
        if ((ebx & 4) != 0)
        {
            return 0;
        }
        int32_t var_c_1 = eax;
        sub_403220(data_413424, 0x3e9);
    }
    return sub_4019f0(arg1, arg2, ebx);
}

int32_t __stdcall sub_4019f0(char* arg1, char* arg2, char arg3)
{
    int32_t var_4 = 0;
    int32_t var_8 = 1;
    char* ebx;
    char* ebp;
    if ((arg3 & 2) != 0)
    {
        ebp = arg2;
        if (*ebp == 0)
        {
            ebx = arg1;
        }
        else
        {
            ebx = arg1;
            if (sub_401e00(ebx, sub_40b690(ebp)) == 0xffffffff)
            {
                sub_403220(data_413424, 0x41f);
            }
        }
    }
    else if (data_4133b4 == 0)
    {
        ebx = arg1;
        ebp = arg2;
    }
    else
    {
        ebx = arg1;
        if ((data_4133d4 & 4) != 0)
        {
            ebp = arg2;
        }
        else if (getenv(ebx) == 0)
        {
            ebp = arg2;
        }
        else
        {
            void* eax_5 = sub_407b70(ebx);
            if (eax_5 != 0)
            {
                eax_5 = *(eax_5 + 0xc);
                if (((eax_5 & 2) != 0 || (((eax_5 & 2) == 0 && (data_4133d4 & 4) != 0) && (eax_5 & 4) != 0)))
                {
                    return 0;
                }
            }
            ebp = arg2;
            if (sub_401e00(ebx, sub_40b690(ebp)) == 0xffffffff)
            {
                sub_403220(data_413424, 0x41f);
            }
        }
    }
    data_4133b4 = 0;
    void* esi = sub_407b70(ebx);
    if (esi != 0)
    {
        void* eax_10;
        eax_10 = *(esi + 0xc);
        if (((eax_10 & 2) != 0 || (((eax_10 & 2) == 0 && (data_4133d4 & 4) != 0) && (eax_10 & 4) != 0)))
        {
            return 0;
        }
    }
    int32_t* eax_12 = sub_40ad20();
    eax_12[1] = ebp;
    int32_t* edi = eax_12;
    if (esi != 0)
    {
        var_4 = 1;
    }
    else
    {
        eax_12 = sub_40acf0(0x10);
        eax_12[1] = ebx;
        esi = eax_12;
    }
    eax_12 = *(esi + 0xc);
    eax_12 = (eax_12 & 0xef);
    *(esi + 0xc) = eax_12;
    *(esi + 0xc) = (arg3 | eax_12);
    sub_40ae10((esi + 8), edi);
    if (var_4 == 0)
    {
        sub_407bf0(esi);
    }
    if (_mbschr(ebp, 0x24) != 0)
    {
        *(esi + 0xc) = (*(esi + 0xc) | 1);
        int32_t eax_14;
        eax_14 = arg3;
        int32_t eax_15 = sub_40b110(ebp, nullptr, nullptr, ebx, 1, 0, eax_14);
        *(esi + 0xc) = (*(esi + 0xc) & 0xfe);
        var_8 = eax_15;
    }
    if (var_8 != 0)
    {
        return 1;
    }
    *(esi + 8) = 0;
    *(esi + 0xc) = (*(esi + 0xc) & 0x10);
    return 0;
}

void* __stdcall sub_401bc0(void* arg1)
{
    int32_t eax = sub_40acf0(0x14);
    *(eax + 8) = *(arg1 + 4);
    sub_40ae10(&data_413a34, eax);
    void* eax_2 = *eax;
    if (eax_2 != 0)
    {
        *(eax_2 + 4) = eax;
    }
    return eax_2;
}

int32_t* __stdcall sub_401bf0(char* arg1, int32_t arg2, int32_t* arg3)
{
    if (*arg3 == 0)
    {
        *arg3 = sub_40acf0(0x18);
    }
    int32_t edi;
    if (arg2 == 0)
    {
        edi = sub_401ed0(*arg3);
    }
    else
    {
        edi = sub_40acf0(8);
        *(edi + 4) = *arg3;
    }
    int32_t ebx = sub_40aec0(arg1, 0x80, 0x413828, 1);
    if (ebx == 0)
    {
        *edi = 0;
        int32_t* eax_9 = sub_40acf0(0x14);
        eax_9[1] = arg1;
        eax_9[4] = edi;
        eax_9[2] = data_413a44;
        return sub_40ae10(((sub_40ae50(arg1, 0x80, 1) << 2) + &data_413828), eax_9);
    }
    int32_t eax_6;
    eax_6 = *(ebx + 8);
    eax_6 = (eax_6 ^ data_413a44);
    if ((eax_6 & 0x20) != 0)
    {
        sub_403220(data_413424, 0x43f);
    }
    sub_40ae30((ebx + 0x10), edi);
    return free(arg1);
}

void sub_401cc0()
{
    int32_t* i = data_413a2c;
    if (i != 0)
    {
        do
        {
            data_413a2c = **&data_413a2c;
            free(i[1]);
            sub_40ada0(i);
            i = data_413a2c;
        } while (i != 0);
    }
}

void __stdcall sub_401d00(int32_t* arg1, int32_t* arg2)
{
    int32_t* i = arg2;
    if (i != 0)
    {
        do
        {
            if (_mbschr(i[1], 0x24) == 0)
            {
                arg2 = *arg2;
                *i = 0;
                sub_40ae30(arg1, i);
            }
            else
            {
                int32_t* j_2 = data_413a28;
                int32_t var_18_2 = 0x413a28;
                int32_t eax_5 = sub_40b700(i[1]);
                if (data_413a28 != j_2)
                {
                    int32_t* j;
                    do
                    {
                        j = *j_2;
                        int32_t* j_3 = j_2;
                        j_2 = j;
                        sub_40ada0(j_3);
                    } while (data_413a28 != j);
                }
                int32_t j_1 = _mbstok(eax_5, &data_413008);
                if (j_1 != 0)
                {
                    do
                    {
                        int32_t* eax_8 = sub_40ad20();
                        eax_8[1] = sub_40add0(j_1);
                        sub_40ae30(arg1, eax_8);
                        j_1 = _mbstok(0, &data_413008);
                    } while (j_1 != 0);
                }
                free(eax_5);
                free(i[1]);
                arg2 = *arg2;
                sub_40ada0(i);
            }
            i = arg2;
        } while (i != 0);
    }
}

int32_t __stdcall sub_401e00(int32_t arg1, int32_t arg2)
{
    int32_t i = 0xffffffff;
    int32_t edi = arg1;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = (edi + 1);
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    int32_t edi_1 = arg2;
    int32_t i_1 = 0xffffffff;
    while (i_1 != 0)
    {
        bool cond:1_1 = 0 != *edi_1;
        edi_1 = (edi_1 + 1);
        i_1 = (i_1 - 1);
        if ((!cond:1_1))
        {
            break;
        }
    }
    int32_t edi_2 = arg1;
    int32_t eax = sub_40acc0((((!i_1) + ((!i) - 1)) + 1));
    int32_t i_2 = 0xffffffff;
    while (i_2 != 0)
    {
        bool cond:2_1 = 0 != *edi_2;
        edi_2 = (edi_2 + 1);
        i_2 = (i_2 - 1);
        if ((!cond:2_1))
        {
            break;
        }
    }
    int32_t ecx_2 = (!i_2);
    __builtin_memcpy(eax, (edi_2 - ecx_2), ((ecx_2 >> 2) << 2));
    int32_t esi_2;
    int32_t edi_5;
    __builtin_memcpy(edi_5, esi_2, (ecx_2 & 3));
    void* edi_6 = &data_41300c;
    int32_t i_3 = 0xffffffff;
    while (i_3 != 0)
    {
        bool cond:3_1 = 0 != *edi_6;
        edi_6 = (edi_6 + 1);
        i_3 = (i_3 - 1);
        if ((!cond:3_1))
        {
            break;
        }
    }
    int32_t ecx_6 = (!i_3);
    int32_t i_4 = 0xffffffff;
    int32_t edi_8 = eax;
    while (i_4 != 0)
    {
        bool cond:4_1 = 0 != *edi_8;
        edi_8 = (edi_8 + 1);
        i_4 = (i_4 - 1);
        if ((!cond:4_1))
        {
            break;
        }
    }
    __builtin_memcpy((edi_8 - 1), (edi_6 - ecx_6), ((ecx_6 >> 2) << 2));
    int32_t esi_4;
    int32_t edi_10;
    __builtin_memcpy(edi_10, esi_4, (ecx_6 & 3));
    int32_t edi_11 = arg2;
    int32_t i_5 = 0xffffffff;
    while (i_5 != 0)
    {
        bool cond:5_1 = 0 != *edi_11;
        edi_11 = (edi_11 + 1);
        i_5 = (i_5 - 1);
        if ((!cond:5_1))
        {
            break;
        }
    }
    int32_t ecx_11 = (!i_5);
    int32_t i_6 = 0xffffffff;
    int32_t edi_13 = eax;
    while (i_6 != 0)
    {
        bool cond:6_1 = 0 != *edi_13;
        edi_13 = (edi_13 + 1);
        i_6 = (i_6 - 1);
        if ((!cond:6_1))
        {
            break;
        }
    }
    __builtin_memcpy((edi_13 - 1), (edi_11 - ecx_11), ((ecx_11 >> 2) << 2));
    int32_t esi_6;
    int32_t edi_15;
    __builtin_memcpy(edi_15, esi_6, (ecx_11 & 3));
    return _putenv(eax);
}

int32_t __stdcall sub_401ed0(int32_t* arg1)
{
    int32_t eax = sub_40acf0(8);
    int32_t eax_1 = sub_40acf0(0x18);
    *eax_1 = *arg1;
    *(eax_1 + 4) = arg1[1];
    *(eax_1 + 8) = arg1[2];
    *(eax_1 + 0xc) = arg1[3];
    int32_t ecx_3;
    ecx_3 = arg1[4];
    *(eax_1 + 0x10) = ecx_3;
    *(eax_1 + 0x14) = arg1[5];
    *(eax + 4) = eax_1;
    return eax;
}

int32_t sub_401f10()
{
    int32_t* i = data_4133dc;
    if (i != 0)
    {
        do
        {
            int32_t var_c;
            if (_mbspbrk(*(data_4133dc + 4), &data_413000) == 0)
            {
                char ecx_2 = data_4133d0;
                void* edx_2 = data_4133dc;
                var_c = 0;
                if ((sub_402080(*(edx_2 + 4), ecx_2, &var_c, 0) < 0 && (data_4133d4 & 8) != 0))
                {
                    sub_402c40(i);
                    return 0xff;
                }
            }
            else
            {
                sub_40ceb4(((data_413ee0 + 3) & 0xfffffffc));
                int32_t __saved_edi;
                int32_t* var_8 = &__saved_edi;
                int32_t var_10;
                if (sub_40cd20(*(data_4133dc + 4), &var_8, &var_10) == 0)
                {
                    int32_t var_20_2 = *(data_4133dc + 4);
                    sub_403220(0, 0x42d);
                }
                else
                {
                    int32_t j;
                    do
                    {
                        int32_t eax_9 = sub_404c90(&var_8);
                        int32_t eax_11 = sub_40c340(*(data_4133dc + 4), eax_9);
                        int32_t eax_12 = sub_404ca0(&var_8);
                        char ecx_5 = data_4133d0;
                        var_c = eax_12;
                        uint32_t eax_13 = sub_402080(eax_11, ecx_5, &var_c, 0);
                        free(eax_11);
                        if ((eax_13 < 0 && (data_4133d4 & 8) != 0))
                        {
                            sub_402c40(i);
                            return 0xffffffff;
                        }
                        j = sub_40ce00(&var_8, var_10);
                    } while (j != 0);
                }
            }
            data_4133dc = *i;
            sub_40ada0(i);
            i = data_4133dc;
        } while (i != 0);
    }
    return 0;
}

uint32_t __stdcall sub_402080(char* arg1, char arg2, int32_t* arg3, int32_t arg4)
{
    int32_t edi = 1;
    data_413010 = (data_413010 + 1);
    int32_t eax = sub_40aec0(arg1, 0x80, 0x413828, 1);
    int32_t ebx;
    ebx = arg2;
    if (eax == 0)
    {
        edi = 0;
        eax = sub_402c70(arg1, ebx);
    }
    int32_t var_10_2 = arg4;
    uint32_t eax_1 = sub_4020e0(eax, ebx, arg3, edi);
    data_413010 = (data_413010 - 1);
    return eax_1;
}

uint32_t __stdcall sub_4020e0(void* arg1, char arg2, int32_t* arg3, int32_t arg4)
{
    sub_40ceb4(0x148);
    int32_t ebx;
    int32_t var_8 = ebx;
    int32_t esi;
    int32_t var_c = esi;
    uint32_t var_28 = 0;
    int32_t* edi;
    int32_t* var_10 = edi;
    uint32_t eax_1;
    if (arg1 == 0)
    {
        eax_1 = 0;
        *arg3 = 0;
    }
    else
    {
        int32_t j_8;
        if ((*(arg1 + 9) & 1) != 0)
        {
            int32_t var_14_1 = *(arg1 + 4);
            int32_t var_18_1 = 0x42f;
            j_8 = 0;
            sub_403220(j_8, var_18_1);
        }
        if ((*(arg1 + 9) & 2) == 0)
        {
            sub_40ceb4(((data_413ee0 + 3) & 0xfffffffc));
            int32_t* var_20 = &var_10;
            int32_t* j_7 = nullptr;
            j_8 = 0;
            int32_t* var_48_1 = nullptr;
            int32_t* j_6 = nullptr;
            uint32_t var_8_1 = 0;
            uint32_t var_34 = 0;
            int32_t eax_11 = *(arg1 + 4);
            var_10 = nullptr;
            int32_t* var_38 = nullptr;
            int32_t* var_44_1 = nullptr;
            *(arg1 + 9) = (*(arg1 + 9) | 1);
            data_413a90 = eax_11;
            data_413a8c = eax_11;
            int32_t* i_2 = *(arg1 + 0x10);
            int32_t* i_1 = i_2;
            int32_t var_2c;
            if ((i_2 != 0 && (*(i_2[1] + 0x10) & 0x20) != 0))
            {
                int32_t* var_14_3 = &var_2c;
                int32_t* var_18_3 = &var_20;
                j_8 = *(arg1 + 4);
                if (sub_40cd20(j_8, var_18_3, var_14_3) != 0)
                {
                    var_8_1 = sub_404ca0(&var_20);
                }
            }
            if (i_1 != 0)
            {
                int32_t* j_3;
                uint32_t ecx_4;
                int32_t* i;
                do
                {
                    int32_t* esi_1 = nullptr;
                    void* ecx_3 = i_1[1];
                    void* var_14_5 = ecx_3;
                    ecx_4 = *(ecx_3 + 0x14);
                    if (ecx_4 != 0)
                    {
                        uint32_t eax_15 = var_8_1;
                        if (eax_15 <= ecx_4)
                        {
                            eax_15 = ecx_4;
                        }
                        var_8_1 = eax_15;
                    }
                    else
                    {
                        j_3 = *(arg1 + 4);
                        var_44_1 = (ecx_3 + 0x14);
                        void** j_4;
                        int32_t j_15;
                        j_4 = sub_402870(j_3, j_3);
                        void** j_2 = j_4;
                        void** j = j_4;
                        if (j != 0)
                        {
                            do
                            {
                                void* var_14_6 = nullptr;
                                var_10 = j[2];
                                j_15 = *0x10;
                                int32_t** var_18_5 = &var_10;
                                j_8 = j_15;
                                var_20 = j[1];
                                uint32_t eax_19 = sub_402080(var_20, j_8, var_18_5, var_14_6);
                                var_28 = (var_28 + eax_19);
                                if ((data_4133a4 != 0 && eax_19 != 0))
                                {
                                    var_14_6 = 1;
                                    int32_t* eax_20 = j[1];
                                    int32_t var_18_6 = 0x413828;
                                    j_8 = 0x80;
                                    var_20 = eax_20;
                                    if ((*(sub_40aec0(var_20, j_8, var_18_6, var_14_6) + 9) & 8) == 0)
                                    {
                                        data_4133b0 = 0;
                                        var_14_6 = j[1];
                                        int32_t var_18_7 = 0xfaa;
                                        j_8 = 0;
                                        sub_403220(j_8, var_18_7);
                                    }
                                    *(arg1 + 9) = (*(arg1 + 9) | 8);
                                }
                                int32_t* eax_23 = var_10;
                                if (esi_1 <= eax_23)
                                {
                                    esi_1 = eax_23;
                                }
                                if ((var_8_1 == 0 && (*(var_14_6 + 0x10) & 0x20) == 0))
                                {
                                    int32_t* var_14_7 = &var_2c;
                                    int32_t* var_18_8 = &var_20;
                                    j_8 = *(arg1 + 4);
                                    if (sub_40cd20(j_8, var_18_8, var_14_7) != 0)
                                    {
                                        uint32_t eax_26 = sub_404ca0(&var_20);
                                        var_8_1 = eax_26;
                                        *(arg1 + 0xc) = eax_26;
                                    }
                                }
                                if ((*(arg1 + 8) & 0x10) != 0)
                                {
                                label_4022e6:
                                    int32_t* eax_28 = sub_40ad20();
                                    eax_28[1] = sub_40add0(j[1]);
                                    sub_40ae30(&j_7, eax_28);
                                }
                                else
                                {
                                    if (var_10 > var_8_1)
                                    {
                                        goto label_4022e6;
                                    }
                                    if ((data_4133b8 != 0 && var_10 == var_8_1))
                                    {
                                        goto label_4022e6;
                                    }
                                }
                                int32_t* j_9 = sub_40ad20();
                                int32_t eax_32;
                                eax_32 = sub_40add0(j[1]);
                                j_3 = j_9;
                                j_9[1] = eax_32;
                                j_2 = &j_8;
                                sub_40ae30(j_2, j_3);
                                j = *j;
                            } while (j != 0);
                        }
                        int32_t* j_1 = j_2;
                        if (j_1 != 0)
                        {
                            do
                            {
                                free(j_1[1]);
                                int32_t* j_5 = *j_1;
                                j_3 = j_1;
                                free(j_3);
                                j_1 = j_5;
                            } while (j_1 != 0);
                        }
                        if ((j_3[4] & 0x20) == 0)
                        {
                            if (j_3[2] != 0)
                            {
                                if (j_6 == 0)
                                {
                                    j_6 = j_3;
                                }
                                else
                                {
                                    j_3 = *(arg1 + 4);
                                    int32_t var_18_14 = 0xfa4;
                                    j_8 = 0;
                                    sub_403220(j_8, var_18_14);
                                }
                            }
                            int32_t* eax_52 = var_38;
                            if (eax_52 <= esi_1)
                            {
                                eax_52 = esi_1;
                            }
                            var_38 = eax_52;
                        }
                        else if (j_3[2] != 0)
                        {
                            data_413a94 = j_7;
                            int32_t j_12 = j_8;
                            bool cond:1_1 = data_4133a4 == 0;
                            int32_t ecx_8 = *(arg1 + 4);
                            data_413a90 = ecx_8;
                            data_413a8c = ecx_8;
                            data_413a84 = 0;
                            data_413a88 = 0;
                            data_413a98 = j_12;
                            if (((((!cond:1_1) && (*(arg1 + 9) & 8) == 0) || ((cond:1_1 || ((!cond:1_1) && (*(arg1 + 9) & 8) != 0)) && var_28 == 0)) && esi_1 > var_8_1))
                            {
                            label_4023e4:
                                bool cond:5_1 = arg_14 != 0;
                                j_1 = data_414008;
                                data_414008 = 1;
                                if ((!cond:5_1))
                                {
                                    if (j_8 == 0)
                                    {
                                        arg_14 = 0;
                                    }
                                    else
                                    {
                                        arg_14 = *(j_8 + 4);
                                    }
                                }
                                int32_t var_14_13 = arg_14;
                                j_15 = j_3[4];
                                j_8 = j_3[3];
                                var_20 = j_3[2];
                                j_7 = *(arg1 + 4);
                                int32_t eax_41 = sub_4036c0(j_7, var_20, j_8, j_15);
                                var_28 = (var_28 + eax_41);
                                int32_t eax_42;
                                if ((*(arg1 + 8) & 4) == 0)
                                {
                                    int32_t* var_14_14 = &var_2c;
                                    int32_t** var_18_12 = &var_20;
                                    j_8 = *(arg1 + 4);
                                    eax_42 = sub_40cd20(j_8, var_18_12, var_14_14);
                                    if (eax_42 != 0)
                                    {
                                        var_34 = sub_404ca0(&var_20);
                                    }
                                }
                                if (((*(arg1 + 8) & 4) != 0 || ((*(arg1 + 8) & 4) == 0 && eax_42 == 0)))
                                {
                                    if (var_38 == 0)
                                    {
                                        sub_40cea0(&var_34);
                                    }
                                    else
                                    {
                                        var_34 = var_38;
                                    }
                                }
                                *(ecx_3 + 0x14) = var_34;
                                j_3 = j_8;
                                if (j_8 != j_7)
                                {
                                    sub_402c40(j_3);
                                    j_3 = j_7;
                                }
                                sub_402c40(j_3);
                                j_7 = nullptr;
                                j_8 = 0;
                                data_414008 = j_1;
                            }
                            if ((((cond:1_1 || ((!cond:1_1) && (*(arg1 + 9) & 8) != 0)) && var_28 != 0) || ((((!cond:1_1) && (*(arg1 + 9) & 8) == 0) || ((cond:1_1 || ((!cond:1_1) && (*(arg1 + 9) & 8) != 0)) && var_28 == 0)) && esi_1 <= var_8_1)))
                            {
                                if ((data_4133b8 != 0 && esi_1 == var_8_1))
                                {
                                    goto label_4023e4;
                                }
                                if ((var_8_1 == 0 && esi_1 == 0))
                                {
                                    goto label_4023e4;
                                }
                            }
                            if ((((((((cond:1_1 || ((!cond:1_1) && (*(arg1 + 9) & 8) != 0)) && var_28 != 0) || ((((!cond:1_1) && (*(arg1 + 9) & 8) == 0) || ((cond:1_1 || ((!cond:1_1) && (*(arg1 + 9) & 8) != 0)) && var_28 == 0)) && esi_1 <= var_8_1)) && *j_3 != 0) || ((((!cond:1_1) && (*(arg1 + 9) & 8) == 0) || ((cond:1_1 || ((!cond:1_1) && (*(arg1 + 9) & 8) != 0)) && var_28 == 0)) && esi_1 > var_8_1)) && data_4133a4 != 0) && (*(arg1 + 9) & 8) != 0))
                            {
                                j_3 = *(arg1 + 4);
                                int32_t var_18_13 = 0xfab;
                                j_8 = 0;
                                sub_403220(j_8, var_18_13);
                            }
                            if (((((cond:1_1 || ((!cond:1_1) && (*(arg1 + 9) & 8) != 0)) && var_28 != 0) || ((((!cond:1_1) && (*(arg1 + 9) & 8) == 0) || ((cond:1_1 || ((!cond:1_1) && (*(arg1 + 9) & 8) != 0)) && var_28 == 0)) && esi_1 <= var_8_1)) && *j_3 == 0))
                            {
                                goto label_4023e4;
                            }
                        }
                        if (((j_3[4] & 0x20) != 0 && *i_1 == 0))
                        {
                            break;
                        }
                    }
                    i = *i_1;
                    i_1 = i;
                } while (i != 0);
                if (((ecx_4 == 0 && (j_3[4] & 0x20) != 0) && *i_1 == 0))
                {
                    int32_t* eax_54;
                    eax_54 = *(arg1 + 9);
                    eax_54 = (eax_54 & 0xfe);
                    *(arg1 + 9) = eax_54;
                    eax_54 = (eax_54 | 2);
                    bool cond:3_1 = var_28 <= 0;
                    *(arg1 + 9) = eax_54;
                    if (cond:3_1)
                    {
                        eax_54 = (eax_54 & 0xfb);
                    }
                    else
                    {
                        eax_54 = (eax_54 | 4);
                    }
                    uint32_t ecx_13 = var_34;
                    *(arg1 + 9) = eax_54;
                    if (ecx_13 <= var_8_1)
                    {
                        ecx_13 = var_8_1;
                    }
                    *(arg1 + 0xc) = ecx_13;
                    *arg3 = ecx_13;
                    goto label_402853;
                }
            }
            data_413a84 = 0;
            data_413a88 = 0;
            uint32_t esi_2 = *arg3;
            if (esi_2 == 0)
            {
                uint32_t ecx_12 = *(arg1 + 0xc);
                if (ecx_12 != 0)
                {
                    esi_2 = ecx_12;
                }
                else
                {
                    int32_t* var_14_17 = &var_2c;
                    int32_t* var_18_15 = &var_20;
                    j_8 = *(arg1 + 4);
                    if (sub_40cd20(j_8, var_18_15, var_14_17) != 0)
                    {
                        esi_2 = sub_404ca0(&var_20);
                    }
                }
            }
            if ((*(arg1 + 8) & 1) != 0)
            {
                int32_t eax_59 = *(arg1 + 4);
                j_8 = (data_413010 * 2);
                sub_408d10(j_8, eax_59, esi_2);
            }
            int32_t* var_14_20 = &arg_14;
            int32_t* var_18_17 = &var_38;
            j_8 = &var_28;
            var_20 = &j_8;
            j_7 = &j_7;
            var_28 = esi_2;
            void var_14c;
            var_2c = &var_14c;
            int32_t* eax_62 = sub_40a500(arg1, var_2c, var_28, j_7, var_20, j_8, var_18_17, var_14_20);
            if ((eax_62 != 0 && j_6 == 0))
            {
                data_413a88 = &var_14c;
                var_48_1 = eax_62[3];
            }
            int32_t ecx_14 = *(arg1 + 4);
            int32_t* j_16 = j_7;
            data_413a90 = ecx_14;
            data_413a8c = ecx_14;
            int32_t j_13 = j_8;
            data_413a94 = j_16;
            bool cond:0_1 = data_4133a4 == 0;
            data_413a98 = j_13;
            if ((((!cond:0_1) && (*(arg1 + 9) & 8) == 0) || ((cond:0_1 || ((!cond:0_1) && (*(arg1 + 9) & 8) != 0)) && var_28 == 0)))
            {
                if (var_38 > esi_2)
                {
                label_40264f:
                    j_13 = data_414008;
                    data_414008 = 1;
                    var_8_1 = j_13;
                    if (j_6 != 0)
                    {
                        if (arg_14 == 0)
                        {
                            if (j_8 == 0)
                            {
                                arg_14 = 0;
                            }
                            else
                            {
                                arg_14 = *(j_8 + 4);
                            }
                        }
                        int32_t var_14_21 = arg_14;
                        j_16 = j_6[4];
                        char* j_18 = j_16;
                        j_8 = j_6[3];
                        var_20 = j_6[2];
                        j_7 = *(arg1 + 4);
                        int32_t eax_67;
                        eax_67 = sub_4036c0(j_7, var_20, j_8, j_18);
                        var_28 = (var_28 + eax_67);
                    }
                    else if (var_48_1 != 0)
                    {
                        j_16 = *(arg1 + 8);
                        int32_t var_14_22 = arg_14;
                        j_8 = eax_62[4];
                        int32_t* j_17 = *(arg1 + 4);
                        var_20 = var_48_1;
                        j_7 = j_17;
                        int32_t eax_69;
                        eax_69 = sub_4036c0(j_7, var_20, j_8, j_16);
                        var_28 = (var_28 + eax_69);
                    }
                    else if ((data_4133d4 & 0x10) != 0)
                    {
                        int32_t var_14_23 = arg_14;
                        j_16 = var_14_20[4];
                        j_8 = var_14_20[3];
                        var_20 = var_14_20[2];
                        j_7 = *(arg1 + 4);
                        int32_t eax_73;
                        eax_73 = sub_4036c0(j_7, var_20, j_8, j_16);
                        var_28 = (var_28 + eax_73);
                    }
                    else if ((arg4 == 0 && esi_2 == 0))
                    {
                        if (data_4133a4 == 0)
                        {
                            int32_t var_14_24 = *(arg1 + 4);
                            int32_t var_18_20 = 0x431;
                            j_8 = 0;
                            sub_403220(j_8, var_18_20);
                        }
                        else
                        {
                            var_28 = 1;
                        }
                    }
                    j_13 = var_8_1;
                    data_414008 = j_13;
                    if (((j_6 != 0 || (j_6 == 0 && var_48_1 != 0)) || ((j_6 == 0 && var_48_1 == 0) && data_413a98 == 0)))
                    {
                        sub_40cea0(&var_34);
                        var_34 = (var_34 + 2);
                    }
                    if (((j_6 == 0 && var_48_1 == 0) && data_413a98 != 0))
                    {
                        var_34 = var_38;
                    }
                    if ((var_44_1 != 0 && j_6 != 0))
                    {
                        *var_44_1 = var_34;
                    }
                }
                else
                {
                    if ((data_4133b8 != 0 && var_38 == esi_2))
                    {
                        goto label_40264f;
                    }
                    if ((esi_2 == 0 && var_38 == 0))
                    {
                        goto label_40264f;
                    }
                    if ((*(arg1 + 8) & 0x10) != 0)
                    {
                        goto label_40264f;
                    }
                }
            }
            if ((((((cond:0_1 || ((!cond:0_1) && (*(arg1 + 9) & 8) != 0)) && var_28 != 0) || ((((!cond:0_1) && (*(arg1 + 9) & 8) == 0) || ((cond:0_1 || ((!cond:0_1) && (*(arg1 + 9) & 8) != 0)) && var_28 == 0)) && var_38 <= esi_2)) && (data_4133d4 & 8) == 0) && (data_413010 == 1 && (*(arg1 + 9) & 8) == 0)))
            {
                int32_t var_14_26 = *(arg1 + 4);
                sub_403370(2);
            }
            if ((data_4133a4 != 0 && var_28 != 0))
            {
                data_4133b0 = 0;
                int32_t var_18_22;
                if ((*(arg1 + 9) & 8) != 0)
                {
                    int32_t var_14_27 = *(arg1 + 4);
                    var_18_22 = 0xfab;
                }
                if (((*(arg1 + 9) & 8) == 0 && data_413010 == 1))
                {
                    int32_t var_14_28 = *(arg1 + 4);
                    var_18_22 = 0xfaa;
                }
                if (((*(arg1 + 9) & 8) != 0 || ((*(arg1 + 9) & 8) == 0 && data_413010 == 1)))
                {
                    j_8 = 0;
                    sub_403220(j_8, var_18_22);
                }
            }
            if (((data_4133d4 & 8) == 0 || ((data_4133d4 & 8) != 0 && data_413010 != 1)))
            {
                eax_62 = *(arg1 + 9);
                eax_62 = (eax_62 & 0xfe);
                *(arg1 + 9) = eax_62;
                eax_62 = (eax_62 | 2);
                bool cond:4_1 = var_28 <= 0;
                *(arg1 + 9) = eax_62;
                if (cond:4_1)
                {
                    eax_62 = (eax_62 & 0xfb);
                }
                else
                {
                    eax_62 = (eax_62 | 4);
                }
                *(arg1 + 9) = eax_62;
                uint32_t eax_81 = var_34;
                if (eax_81 <= esi_2)
                {
                    eax_81 = esi_2;
                }
                int32_t* j_14 = j_7;
                *(arg1 + 0xc) = eax_81;
                *arg3 = eax_81;
                int32_t j_11 = j_8;
                if (j_8 != j_14)
                {
                    sub_402c40(j_11);
                    j_11 = j_7;
                }
                sub_402c40(j_11);
            label_402853:
                eax_1 = var_28;
            }
            if (((data_4133d4 & 8) != 0 && data_413010 == 1))
            {
                int32_t j_10 = j_8;
                if (j_8 != j_7)
                {
                    sub_402c40(j_10);
                    j_10 = j_7;
                }
                sub_402c40(j_10);
                eax_1 = (0 - 1);
            }
        }
        else
        {
            if ((arg2 & 1) != 0)
            {
                int32_t eax_3 = *(arg1 + 0xc);
                int32_t ecx_1 = *(arg1 + 4);
                j_8 = (data_413010 * 2);
                sub_408d10(j_8, ecx_1, eax_3);
            }
            *arg3 = *(arg1 + 0xc);
            int32_t eax_6;
            eax_6 = *(arg1 + 9);
            eax_6 = (eax_6 & 4);
            eax_1 = ((eax_6 - eax_6) + 1);
        }
    }
    return eax_1;
}

void* __stdcall sub_402870(int32_t* arg1, int32_t arg2)
{
    int32_t eax = data_413ee0;
    void* var_20 = nullptr;
    int32_t var_28 = sub_40acf0(eax);
    int32_t* i_2 = *arg1;
    int32_t var_4 = arg1[1];
    int32_t* i_1 = i_2;
    if (i_2 != 0)
    {
        int32_t* i;
        do
        {
            char* ecx_2 = i_1[1];
            char* eax_3 = ecx_2;
            if (*ecx_2 != 0)
            {
                do
                {
                    i_2 = *eax_3;
                    if (i_2 == 0x24)
                    {
                        break;
                    }
                    if (i_2 == 0x5e)
                    {
                        eax_3 = &eax_3[1];
                    }
                    eax_3 = &eax_3[1];
                } while (*eax_3 != 0);
            }
            char* var_c_1;
            if ((*ecx_2 == 0 || (*ecx_2 != 0 && *eax_3 == 0)))
            {
                var_c_1 = ecx_2;
            }
            if ((*ecx_2 != 0 && *eax_3 != 0))
            {
                int32_t* var_3c_1 = &var_4;
                data_413a84 = arg2;
                var_c_1 = sub_40b700(i_1[1]);
            }
            int32_t eax_8 = sub_40add0(var_c_1);
            int32_t var_14 = eax_8;
            char* var_1c;
            if (sub_402b20(&var_14, &var_1c) != 0)
            {
                int32_t j;
                do
                {
                    char* esi_1 = var_1c;
                    char* eax_10;
                    eax_10 = *var_1c;
                    if (eax_10 != 0x7b)
                    {
                        var_1c = nullptr;
                    }
                    else
                    {
                        if (eax_10 != 0)
                        {
                            do
                            {
                                eax_10 = *esi_1;
                                if (eax_10 == 0x7d)
                                {
                                    break;
                                }
                                if (eax_10 == 0x5e)
                                {
                                    esi_1 = &esi_1[1];
                                }
                                esi_1 = &esi_1[1];
                            } while (*esi_1 != 0);
                        }
                        if (*esi_1 != 0)
                        {
                            *esi_1 = 0;
                            esi_1 = &esi_1[1];
                            var_1c = &var_1c[1];
                        }
                    }
                    int32_t var_18_1 = 0;
                    sub_404cc0(&var_28, 0);
                    int32_t k = sub_40add0(esi_1);
                    int32_t eax_12 = _mbspbrk(esi_1, &data_413000);
                    int32_t var_24;
                    if ((eax_12 != 0 || (eax_12 == 0 && var_1c != 0)))
                    {
                        int32_t* var_3c_5 = &var_24;
                        int32_t eax_13 = sub_405930(var_1c, esi_1, var_28);
                        if (eax_13 != 0)
                        {
                            esi_1 = eax_13;
                            var_18_1 = 1;
                            free(k);
                            k = sub_40c340(eax_13, sub_404c90(&var_28));
                        }
                    }
                    do
                    {
                        int32_t eax_16 = sub_40acf0(0xc);
                        *(eax_16 + 4) = sub_40add0(k);
                        int32_t eax_18;
                        if (data_4133a8 != 0)
                        {
                            eax_18 = sub_40cd20(k, &var_28, &var_24);
                            if (eax_18 == 0)
                            {
                                *(eax_16 + 8) = 0;
                            }
                        }
                        if ((data_4133a8 == 0 || (data_4133a8 != 0 && eax_18 != 0)))
                        {
                            *(eax_16 + 8) = sub_404ca0(&var_28);
                        }
                        void** var_40_8 = &var_20;
                        if (data_4133a8 == 0)
                        {
                            sub_40ae30(var_40_8, eax_16);
                        }
                        else
                        {
                            sub_402ae0(var_40_8, eax_16);
                        }
                        free(k);
                        if (var_18_1 == 0)
                        {
                            break;
                        }
                        if (_mbspbrk(esi_1, &data_413000) == 0)
                        {
                            break;
                        }
                        if (sub_40ce00(&var_28, var_24) == 0)
                        {
                            break;
                        }
                        k = sub_40c340(esi_1, sub_404c90(&var_28));
                    } while (k != 0);
                    j = sub_402b20(&var_14, &var_1c);
                } while (j != 0);
            }
            if (i_1[1] != var_c_1)
            {
                free(var_c_1);
            }
            free(eax_8);
            i = *i_1;
            i_1 = i;
        } while (i != 0);
    }
    free(var_28);
    return var_20;
}

int32_t __stdcall sub_402ae0(void** arg1, void*** arg2)
{
    int32_t i = arg2[2];
    void** edx = *arg1;
    void** ecx = edx;
    if (edx != 0)
    {
        while (ecx[2] >= i)
        {
            edx = ecx;
            ecx = *ecx;
            if (ecx == 0)
            {
                break;
            }
        }
    }
    if (edx != ecx)
    {
        *edx = arg2;
        *arg2 = ecx;
        return i;
    }
    *arg1 = arg2;
    return i;
}

int32_t __stdcall sub_402b20(int32_t* arg1, char** arg2)
{
    char* edi = *arg1;
    if (*edi != 0)
    {
        do
        {
            char eax = *edi;
            if ((eax != 0x20 && eax != 9))
            {
                break;
            }
            edi = &edi[1];
        } while (*edi != 0);
    }
    *arg2 = edi;
    if (*edi == 0)
    {
        return 0;
    }
    *arg2 = edi;
    char** eax_2;
    eax_2 = *edi;
    if (eax_2 != 0x22)
    {
        if (eax_2 == 0x7b)
        {
            if (eax_2 != 0)
            {
                do
                {
                    eax_2 = *edi;
                    if (eax_2 != 0x22)
                    {
                        edi = &edi[1];
                        if (*edi == 0x7d)
                        {
                            break;
                        }
                    }
                    else if (eax_2 != 0)
                    {
                        while (*edi != 0x22)
                        {
                            edi = &edi[1];
                            if (*edi == 0)
                            {
                                break;
                            }
                        }
                    }
                } while (*edi != 0);
            }
            if (*edi == 0)
            {
                sub_403220(0, 0x423);
            }
            edi = &edi[1];
            if (*edi == 0x22)
            {
                while (true)
                {
                    if (*edi != 0)
                    {
                        edi = &edi[1];
                        if (*edi == 0x22)
                        {
                            break;
                        }
                        continue;
                    }
                    sub_403220(0, 0x40e);
                    break;
                }
                void* edi_1 = &edi[1];
                if (*edi_1 != 0)
                {
                    *edi_1 = 0;
                    edi_1 = (edi_1 + 1);
                }
                *arg1 = edi_1;
                return 1;
            }
        }
        if (*edi != 0)
        {
            do
            {
                eax_2 = *edi;
                if (eax_2 == 0x20)
                {
                    break;
                }
                if (eax_2 == 9)
                {
                    break;
                }
                edi = &edi[1];
            } while (*edi != 0);
            if (*edi != 0)
            {
                *edi = 0;
                edi = &edi[1];
            }
        }
        *arg1 = edi;
        return 1;
    }
    while (true)
    {
        if (*edi != 0)
        {
            edi = &edi[1];
            if (*edi == 0x22)
            {
                break;
            }
            continue;
        }
        sub_403220(0, 0x40e);
        break;
    }
    void* edi_2 = &edi[1];
    if (*edi_2 != 0)
    {
        *edi_2 = 0;
        edi_2 = (edi_2 + 1);
    }
    *arg1 = edi_2;
    return 1;
}

void __stdcall sub_402c40(int32_t* arg1)
{
    int32_t* i = arg1;
    int32_t* i_1 = i;
    if (i != 0)
    {
        do
        {
            i = *i;
            free(i_1[1]);
            sub_40ada0(i_1);
            i_1 = i;
        } while (i != 0);
    }
}

int32_t __stdcall sub_402c70(char* arg1, char arg2)
{
    int32_t eax = sub_40acf0(0x14);
    *(eax + 4) = sub_40add0(arg1);
    int32_t eax_1;
    eax_1 = arg2;
    *(eax + 8) = eax_1;
    *(eax + 9) = 0;
    *(eax + 0xc) = 0;
    *(eax + 0x10) = 0;
    sub_40ae10(((sub_40ae50(arg1, 0x80, 1) << 2) + &data_413828), eax);
    return eax;
}

int32_t __stdcall sub_402cc0(char* arg1)
{
    int32_t i_2 = 0;
    int32_t eax_1 = sub_40ca80(arg1, &data_413014);
    data_4133d8 = eax_1;
    if (eax_1 == 0)
    {
        char* var_24_1 = arg1;
        sub_403220(0, 0x41c);
    }
    int32_t eax_3 = data_4133d8;
    int32_t* var_4 = nullptr;
    if (fgets(0x413aa0, 0x400, eax_3) != 0)
    {
        int32_t i;
        do
        {
            int32_t edi_1 = 0x413aa0;
            int32_t j = 0xffffffff;
            while (j != 0)
            {
                bool cond:0_1 = 0 != *edi_1;
                edi_1 = (edi_1 + 1);
                j = (j - 1);
                if ((!cond:0_1))
                {
                    break;
                }
            }
            void* var_10 = ((!j) - 1);
            int32_t var_c;
            char* ecx_3;
            if ((!j) == 0x400)
            {
                ecx_3 = ((!j) + 0x413a9e);
                if (*ecx_3 != 0xa)
                {
                label_402d76:
                    void* eax_7 = (var_10 + 0x413a9e);
                    if (*eax_7 == 0x5c)
                    {
                        *ecx_3 = 0;
                        var_10 = (var_10 - 1);
                        *eax_7 = 0x20;
                    }
                    var_c = sub_40add0(0x413aa0);
                    sub_402e60(&var_c, &var_10);
                }
            }
            if (((!j) != 0x400 || ((!j) == 0x400 && *ecx_3 == 0xa)))
            {
                ecx_3 = (var_10 + 0x413a9f);
                if ((*ecx_3 == 0xa && *(var_10 + 0x413a9e) == 0x5c))
                {
                    goto label_402d76;
                }
                var_c = 0x413aa0;
            }
            sub_402f60(var_c, &i_2, &var_4);
            if (var_c != 0x413aa0)
            {
                free(var_c);
            }
            i = fgets(0x413aa0, 0x400, data_4133d8);
        } while (i != 0);
    }
    if (fclose(data_4133d8) == 0xffffffff)
    {
        char* var_24_8 = arg1;
        sub_403220(0, 0x424);
    }
    sub_408320(i_2, var_4);
    int32_t i_3 = i_2;
    i_2 = (i_2 - 1);
    if (i_3 != 0)
    {
        int32_t i_1;
        do
        {
            int32_t eax_16 = var_4[i_2];
            if (eax_16 != 0)
            {
                free(eax_16);
            }
            i_1 = i_2;
            i_2 = (i_2 - 1);
        } while (i_1 != 0);
    }
    return free(var_4);
}

int32_t __stdcall sub_402e60(int32_t* arg1, int32_t* arg2)
{
    int32_t eax = *arg2;
    if (*((eax + *arg1) - 1) != 0xa)
    {
        do
        {
            eax = fgets(0x413aa0, 0x400, data_4133d8);
            if (eax == 0)
            {
                break;
            }
            int32_t edi_1 = 0x413aa0;
            int32_t i = 0xffffffff;
            while (i != 0)
            {
                bool cond:0_1 = 0 != *edi_1;
                edi_1 = (edi_1 + 1);
                i = (i - 1);
                if ((!cond:0_1))
                {
                    break;
                }
            }
            if ((*((!i) + 0x413a9d) == 0x5c && *((!i) + 0x413a9e) == 0xa))
            {
                *((!i) + 0x413a9e) = 0;
                *((!i) + 0x413a9d) = 0x20;
            }
            int32_t edx_1 = *arg2;
            int32_t edi_2 = 0x413aa0;
            int32_t i_1 = 0xffffffff;
            while (i_1 != 0)
            {
                bool cond:1_1 = 0 != *edi_2;
                edi_2 = (edi_2 + 1);
                i_1 = (i_1 - 1);
                if ((!cond:1_1))
                {
                    break;
                }
            }
            *arg2 = (((!i_1) + edx_1) - 1);
            int32_t eax_4 = realloc(*arg1, ((!i_1) + edx_1));
            *arg1 = eax_4;
            if (eax_4 == 0)
            {
                sub_403220(data_4133f4, 0x419);
            }
            int32_t edi_3 = 0x413aa0;
            int32_t i_2 = 0xffffffff;
            while (i_2 != 0)
            {
                bool cond:2_1 = 0 != *edi_3;
                edi_3 = (edi_3 + 1);
                i_2 = (i_2 - 1);
                if ((!cond:2_1))
                {
                    break;
                }
            }
            int32_t ecx_5 = (!i_2);
            __builtin_memcpy((*arg1 + edx_1), (edi_3 - ecx_5), ((ecx_5 >> 2) << 2));
            int32_t esi_2;
            int32_t edi_7;
            __builtin_memcpy(edi_7, esi_2, (ecx_5 & 3));
            eax = *arg1;
        } while (*((*arg2 + eax) - 1) != 0xa);
    }
    return eax;
}

int32_t __stdcall sub_402f60(int32_t arg1, int32_t* arg2, int32_t* arg3)
{
    int32_t ebx = 0;
    int32_t eax = _mbschr(arg1, 0x22);
    int32_t var_8 = eax;
    if (eax == 0)
    {
        return sub_403120(arg1, arg2, arg3);
    }
    int32_t eax_3;
    if (arg1 != var_8)
    {
        eax_3 = var_8;
        if (*(eax_3 - 1) == 0x3d)
        {
            *eax_3 = 0x20;
            var_8 = (var_8 - 1);
            int32_t edi_1 = var_8;
            bool cond:0_1 = arg1 == edi_1;
            if (arg1 < edi_1)
            {
                do
                {
                    eax_3 = *edi_1;
                    if (eax_3 == 0x20)
                    {
                        break;
                    }
                    if (eax_3 == 9)
                    {
                        break;
                    }
                    if (eax_3 == 0xa)
                    {
                        break;
                    }
                    edi_1 = (edi_1 - 1);
                } while (arg1 < edi_1);
                cond:0_1 = arg1 == edi_1;
            }
            if ((!cond:0_1))
            {
                *edi_1 = 0;
                edi_1 = (edi_1 + 1);
                sub_403120(arg1, arg2, arg3);
            }
            var_8 = edi_1;
        }
    }
    if ((arg1 == var_8 || (arg1 != var_8 && *(eax_3 - 1) != 0x3d)))
    {
        *var_8 = 0;
        var_8 = (var_8 + 1);
        sub_403120(arg1, arg2, arg3);
    }
    int32_t edi_2 = var_8;
    int32_t i = 0xffffffff;
    int32_t ebp = var_8;
    while (i != 0)
    {
        bool cond:2_1 = 0 != *edi_2;
        edi_2 = (edi_2 + 1);
        i = (i - 1);
        if ((!cond:2_1))
        {
            break;
        }
    }
    int32_t var_4 = ((!i) - 1);
    if (*ebp != 0)
    {
        do
        {
            int32_t eax_6;
            eax_6 = *ebp;
            if (eax_6 == 0x22)
            {
                char* edi_3 = (ebp + 1);
                if (*edi_3 != 0x22)
                {
                    *ebp = 0;
                    ebp = (ebp + 1);
                    sub_4031b0(var_8, *arg2, arg3);
                    *arg2 = (*arg2 + 1);
                    sub_402f60((ebp + 1), arg2, arg3);
                    break;
                }
                int32_t i_1 = 0xffffffff;
                while (i_1 != 0)
                {
                    bool cond:1_1 = 0 != *edi_3;
                    edi_3 = &edi_3[1];
                    i_1 = (i_1 - 1);
                    if ((!cond:1_1))
                    {
                        break;
                    }
                }
                int32_t ecx_6 = (!i_1);
                __builtin_memcpy(ebp, (edi_3 - ecx_6), ((ecx_6 >> 2) << 2));
                int32_t esi_2;
                int32_t edi_6;
                __builtin_memcpy(edi_6, esi_2, (ecx_6 & 3));
            }
            else if (eax_6 == 0x5c)
            {
                eax_6 = *(ebp - 1);
                if (((eax_6 == 0x20 || eax_6 == 9) && *(ebp + 1) == 0xa))
                {
                    *ebp = 0;
                    var_4 = (var_4 - 2);
                    int32_t ebp_1 = var_4;
                    if (ebx == 0)
                    {
                        ebx = 1;
                        var_8 = sub_40add0(var_8);
                    }
                    sub_402e60(&var_8, &var_4);
                    ebp = (ebp_1 + var_8);
                }
            }
            ebp = (ebp + 1);
        } while (*ebp != 0);
    }
    uint32_t eax_13 = (var_4 + var_8);
    if (eax_13 == ebp)
    {
        eax_13 = sub_403220(0, 0x3ee);
    }
    if (ebx != 0)
    {
        eax_13 = free(var_8);
    }
    return eax_13;
}

int32_t __stdcall sub_403120(int32_t arg1, int32_t* arg2, int32_t* arg3)
{
    int32_t eax = _mbschr(arg1, 0x5c);
    if (eax != 0)
    {
        char ecx_1 = *(eax - 1);
        if (((ecx_1 == 0x20 || ecx_1 == 9) && *(eax + 1) == 0xa))
        {
            *eax = 0;
        }
    }
    int32_t eax_1 = _mbstok(arg1, &data_413018);
    if (eax_1 != 0)
    {
        while (*eax_1 != 0x40)
        {
            sub_4031b0(eax_1, *arg2, arg3);
            *arg2 = (*arg2 + 1);
            eax_1 = _mbstok(0, &data_413018);
            if (eax_1 == 0)
            {
                return eax_1;
            }
        }
        int32_t var_10_2 = (eax_1 + 1);
        eax_1 = sub_403220(0, 0xfa1);
    }
    return eax_1;
}

int32_t __stdcall sub_4031b0(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    int32_t eax = *arg3;
    int32_t esi;
    if (eax == 0)
    {
        esi = arg2;
        *arg3 = sub_40acf0(0x20);
    }
    else
    {
        esi = arg2;
        if ((esi & 7) == 0)
        {
            int32_t eax_2 = realloc(eax, ((esi << 2) + 0x20));
            *arg3 = eax_2;
            if (eax_2 == 0)
            {
                sub_403220(0, 0x41b);
            }
        }
    }
    int32_t eax_4 = sub_40add0(arg1);
    *(*arg3 + (esi << 2)) = eax_4;
    return eax_4;
}

uint32_t sub_403220(int32_t arg1, int32_t arg2)
{
    int32_t status = 2;
    uint32_t eax_2;
    if ((data_4133d4 & 0x20) != 0)
    {
        eax_2 = (COMBINE(0, arg2) / 0x3e8);
    }
    if (((data_4133d4 & 0x20) == 0 || ((data_4133d4 & 0x20) != 0 && eax_2 != 4)))
    {
        sub_403420();
        if (arg1 == 0)
        {
            fprintf((__p__iob("%s : ", "NMAKE") + 0x40));
        }
        else
        {
            fprintf((__p__iob("%s(%d) : ", data_4133f8, arg1) + 0x40));
        }
        uint32_t temp0_2 = (COMBINE(0, arg2) / 0x3e8);
        if (temp0_2 == 1)
        {
            sub_403370(0x14);
            if (arg2 == 0x41b)
            {
                status = 4;
            }
        }
        else
        {
            int32_t var_14_2;
            if (temp0_2 == 2)
            {
                var_14_2 = 0x15;
            }
            if (temp0_2 == 4)
            {
                var_14_2 = 0x16;
            }
            if ((temp0_2 == 2 || temp0_2 == 4))
            {
                sub_403370(var_14_2);
            }
        }
        fprintf((__p__iob(" U%04d: ", arg2) + 0x40));
        vfprintf((__p__iob(sub_403410(arg2), &arg_c) + 0x40));
        putc(0xa, (__p__iob() + 0x40));
        eax_2 = fflush((__p__iob() + 0x40));
        if (temp0_2 == 1)
        {
            fprintf((__p__iob("Stop.\n") + 0x40));
            sub_408a20();
            exit(status);
            /* no return */
        }
    }
    return eax_2;
}

int32_t sub_403370(int32_t arg1)
{
    int32_t eax = __p__iob();
    int32_t edi = (eax + 0x20);
    if ((data_4133d4 & 0x20) == 0)
    {
        sub_403420();
        if ((arg1 >= 0x14 && arg1 <= 0x19))
        {
            edi = (__p__iob() + 0x40);
        }
        if (arg1 == 0x18)
        {
            putc(0xa, edi);
        }
        vfprintf(edi, sub_403410(arg1), &arg_8);
        if (((arg1 < 0xa || (arg1 >= 0xa && arg1 > 0x17)) && arg1 != 0x78))
        {
            putc(0xa, edi);
        }
        eax = fflush(edi);
    }
    return eax;
}

int32_t sub_403400() __pure
{
    return;
}

char* __stdcall sub_403410(int32_t arg1)
{
    return sub_40a660(arg1);
}

void sub_403420()
{
    if (data_4133cc == 0)
    {
        data_4133cc = 1;
        void* var_4_1 = "1.50";
        int32_t var_8_1 = 0x18;
        int32_t var_c_1 = 1;
        void* var_4_2 = "1988-94";
        int32_t var_8_2 = 0x19;
        int32_t var_c_2 = 2;
        void* var_4_3 = "1.50";
        sub_403370(0x18);
        void* var_4_4 = "1988-94";
        sub_403370(0x19);
        fflush((__p__iob() + 0x40));
    }
}

int32_t sub_403490()
{
    int32_t i = 0x64;
    int32_t ebp = 0;
    do
    {
        void* var_b4_1 = "NMAKE";
        int32_t i_2 = i;
        i = (i + 1);
        sub_403370(i_2);
    } while (i < 0x67);
    int32_t i_1 = 0x67;
    void var_a0;
    do
    {
        if (i_1 == 0x6f)
        {
            i_1 = (i_1 + 1);
        }
        if (i_1 == 0x77)
        {
            i_1 = (i_1 + 1);
        }
        if (i_1 == 0x78)
        {
            break;
        }
        if (ebp != 0)
        {
            char* edi_4 = sub_403410(i_1);
            int32_t j = 0xffffffff;
            while (j != 0)
            {
                bool cond:0_1 = 0 != *edi_4;
                edi_4 = &edi_4[1];
                j = (j - 1);
                if ((!cond:0_1))
                {
                    break;
                }
            }
            int32_t ecx_5 = (!j);
            void var_50;
            __builtin_memcpy(&var_50, (edi_4 - ecx_5), ((ecx_5 >> 2) << 2));
            int32_t esi_3;
            int32_t edi_6;
            __builtin_memcpy(edi_6, esi_3, (ecx_5 & 3));
            void* var_b4_3 = &var_50;
            void* var_b8_1 = &var_a0;
            sub_403370(0x7d);
        }
        else
        {
            char* edi_1 = sub_403410(i_1);
            int32_t j_1 = 0xffffffff;
            while (j_1 != 0)
            {
                bool cond:1_1 = 0 != *edi_1;
                edi_1 = &edi_1[1];
                j_1 = (j_1 - 1);
                if ((!cond:1_1))
                {
                    break;
                }
            }
            int32_t ecx_1 = (!j_1);
            __builtin_memcpy(&var_a0, (edi_1 - ecx_1), ((ecx_1 >> 2) << 2));
            int32_t esi_1;
            int32_t edi_3;
            __builtin_memcpy(edi_3, esi_1, (ecx_1 & 3));
        }
        i_1 = (i_1 + 1);
        ebp = (-(ebp - ebp));
    } while (i_1 < 0x78);
    if (ebp != 0)
    {
        int32_t var_b4_4 = 0x413060;
        void* var_b8_2 = &var_a0;
        sub_403370(0x7d);
    }
    return sub_403370(0x78);
}

void __stdcall sub_403580(int32_t* arg1, int32_t* arg2, char* arg3)
{
    int32_t ebx = 1;
    char* edi = arg3;
    char* esi = edi;
    if (*edi != 0)
    {
        do
        {
            edi = &edi[1];
        } while (*edi != 0);
    }
    int32_t* ebp = arg2;
    *arg1 = 0;
    char* esi_3;
    while (true)
    {
        if (edi > esi)
        {
            char* esi_1 = &esi[_mbsspn(esi, &data_413008)];
            if (edi > esi_1)
            {
                *ebp = esi_1;
                ebp = &ebp[1];
                int32_t eax;
                if (*esi_1 != 0x22)
                {
                    esi_3 = _mbspbrk(esi_1, " \t"/");
                    if (esi_3 != 0)
                    {
                        while (edi > esi_3)
                        {
                            if (*esi_3 != 0x2f)
                            {
                                break;
                            }
                            if (ebx != 0)
                            {
                                break;
                            }
                            esi_3 = _mbspbrk(&esi_3[1], " \t"/");
                            if (esi_3 == 0)
                            {
                                break;
                            }
                        }
                        if ((esi_3 != 0 && *esi_3 == 0x22))
                        {
                            void* esi_5 = &esi_3[1];
                            if (edi > esi_5)
                            {
                                while (*esi_5 != 0x22)
                                {
                                    esi_5 = (esi_5 + 1);
                                    if (edi <= esi_5)
                                    {
                                        break;
                                    }
                                }
                            }
                            esi_3 = _mbspbrk(esi_5, &data_413008);
                        }
                    }
                    if (ebx == 0)
                    {
                        break;
                    }
                    ebx = 0;
                    if (esi_3 != 0)
                    {
                        if (*esi_3 == 0x2f)
                        {
                            *esi_3 = 0;
                            esi_3 = (esi_3 - 1);
                            ebp[-1] = sub_40add0(ebp[-1]);
                            esi_3[1] = 0x2f;
                        }
                        break;
                    }
                label_403695:
                    esi_3 = edi;
                label_403697:
                    *esi_3 = 0;
                    esi = &esi_3[1];
                }
                else
                {
                    esi = &esi_1[1];
                    if (edi > esi)
                    {
                        do
                        {
                            eax = *esi;
                            if (eax == 0x5c)
                            {
                                esi = &esi[1];
                            }
                            if (eax == 0x22)
                            {
                                break;
                            }
                            esi = &esi[1];
                        } while (edi > esi);
                        if (edi > esi)
                        {
                            esi_3 = _mbspbrk(&esi[1], &data_413008);
                            break;
                        }
                    }
                }
                eax = (*arg1 + 1);
                *arg1 = eax;
                if (eax < 0x7f)
                {
                    continue;
                }
            }
        }
        *ebp = 0;
        return;
    }
    if (esi_3 == 0)
    {
        goto label_403695;
    }
    goto label_403697;
}

int32_t __stdcall sub_4036c0(char* arg1, void** arg2, char arg3, char* arg4)
{
    data_413a50 = (data_413a50 + 1);
    bool cond:0 = (data_4133d4 & 8) == 0;
    int32_t var_10 = 0;
    char* ebx;
    char* var_1c = ebx;
    if ((!cond:0))
    {
        return 0;
    }
    char* var_2c = arg1;
    int32_t var_30 = 0xf;
    int32_t var_34 = 3;
    if ((data_4133d4 & 0x10) != 0)
    {
        int32_t eax;
        eax = arg3;
        sub_404c10(arg1, (eax & 4));
        return 0;
    }
    void** i = arg2;
    if (i != 0)
    {
        do
        {
            char* var_c;
            int32_t eax_4 = sub_406020(i[1], &var_c, &arg_c);
            char* ecx_1 = var_c;
            int32_t var_4_1 = eax_4;
            char var_15_1 = 0;
            data_413a4c = 0;
            char* var_14 = ecx_1;
            ebx = *ecx_1;
            if (ebx != 0)
            {
                do
                {
                    eax_4 = *ecx_1;
                    if ((eax_4 == 0x5e || eax_4 == 0x24))
                    {
                        ecx_1 = &ecx_1[1];
                    }
                    ecx_1 = &ecx_1[1];
                } while (*ecx_1 != 0);
            }
            while ((!(ebx != 0x21 && (ebx != 0x2d && (ebx != 0x40 && (ebx != 0x5e && (ebx != 0x20 && ebx != 9)))))))
            {
                if ((ebx - 0x21) <= 0x3d)
                {
                    int32_t ecx_2;
                    ecx_2 = *(ebx + 0x403a8b);
                    switch (ecx_2)
                    {
                        case 0:
                        {
                            var_15_1 = (var_15_1 | 4);
                            break;
                        }
                        case 1:
                        {
                            var_14 = &var_14[1];
                            var_15_1 = (var_15_1 | 2);
                            int32_t eax_8 = _ismbcdigit(*var_14);
                            int32_t eax_13;
                            if (eax_8 == 0)
                            {
                                data_413a4c = 0xff;
                            }
                            else
                            {
                                char* ebp_1 = var_14;
                                data_413a4c = strtol(var_14, &var_14, 0xa);
                                if (*_errno() == 0x22)
                                {
                                    char* var_2c_4 = ebp_1;
                                    *var_14 = 0;
                                    sub_403220(data_4133f4, 0x436);
                                }
                                eax_13 = _ismbcspace(*var_14);
                            }
                            if ((eax_8 == 0 || (eax_8 != 0 && eax_13 == 0)))
                            {
                                var_14 = (var_14 - 1);
                            }
                            if ((eax_8 != 0 && eax_13 != 0))
                            {
                                int32_t j;
                                do
                                {
                                    var_14 = &var_14[1];
                                    j = _ismbcspace(*var_14);
                                } while (j != 0);
                                var_14 = (var_14 - 1);
                            }
                            break;
                        }
                        case 2:
                        {
                            if ((data_4133d0 & 4) == 0)
                            {
                                var_15_1 = (var_15_1 | 1);
                            }
                            break;
                        }
                        case 3:
                        {
                            var_14 = &var_14[1];
                            char* eax_15;
                            eax_15 = *var_14;
                            int32_t eax_16;
                            if (eax_15 != 0x20)
                            {
                                eax_16 = 0;
                            }
                            if ((eax_15 == 0x20 || eax_15 == 9))
                            {
                                eax_16 = 1;
                            }
                            ebx = (ebx - ebx);
                            ebx = (ebx & 0x3e);
                            ebx = (ebx + 0x20);
                            break;
                        }
                    }
                }
                if (ebx == 0x5e)
                {
                    break;
                }
                var_14 = &var_14[1];
                ebx = *var_14;
            }
            int32_t eax_19;
            if ((var_15_1 & 4) != 0)
            {
                eax_19 = sub_4048b0(var_14, arg_c, arg3, var_15_1, arg4, &var_10);
                if (eax_19 != 0)
                {
                    ebx = var_14;
                    if (_mbschr(var_14, 0x24) != 0)
                    {
                        int32_t* var_2c_8 = &arg_c;
                        var_14 = sub_40b700(var_14);
                    }
                    if (ebx != var_14)
                    {
                        free(var_14);
                    }
                    if (((arg3 & 2) == 0 && (data_4133a4 != 0 && (var_10 != 0 && var_10 > data_413a4c))))
                    {
                        break;
                    }
                }
            }
            if (((var_15_1 & 4) == 0 || ((var_15_1 & 4) != 0 && eax_19 == 0)))
            {
                char* ebp_2 = var_14;
                if ((var_4_1 == 0 && _mbschr(var_14, 0x24) != 0))
                {
                    int32_t* var_2c_10 = &arg_c;
                    var_14 = sub_40b700(var_14);
                }
                sub_40c790(&data_411250, var_14, arg4);
                char eax_29 = (arg3 & 4);
                int32_t ecx_13;
                if (eax_29 != 0)
                {
                    ecx_13 = 0;
                }
                if ((eax_29 == 0 || (eax_29 != 0 && (var_15_1 & 8) != 0)))
                {
                    ecx_13 = 1;
                }
                int32_t edx_4;
                if ((eax_29 != 0 || ((eax_29 == 0 && (arg3 & 8) == 0) && (var_15_1 & 1) == 0)))
                {
                    edx_4 = 1;
                }
                if ((eax_29 == 0 && ((arg3 & 8) != 0 || ((arg3 & 8) == 0 && (var_15_1 & 1) != 0))))
                {
                    edx_4 = 0;
                }
                int32_t var_8;
                int32_t* var_2c_12 = &var_8;
                int32_t* eax_30;
                eax_30 = var_15_1;
                int32_t eax_32 = sub_403af0(0x411250, edx_4, ecx_13, (eax_30 & 2));
                ebx = arg3;
                var_10 = eax_32;
                ebx = (ebx & 2);
                if ((ebx == 0 && (eax_32 != 0 && (var_10 > data_413a4c && data_4133a4 == 0))))
                {
                    int32_t var_2c_13 = var_10;
                    int32_t var_30_11 = var_8;
                    sub_403220(0, 0x435);
                }
                if (ebp_2 != var_14)
                {
                    free(var_14);
                }
                free(var_c);
                if ((ebx == 0 && (data_4133a4 != 0 && (var_10 != 0 && var_10 > data_413a4c))))
                {
                    break;
                }
            }
            i = *i;
        } while (i != 0);
    }
    if (((arg3 & 2) == 0 && data_4133a4 != 0))
    {
        return var_10;
    }
    return 0;
}

int32_t __stdcall sub_403af0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    int32_t var_214 = 0xffffffff;
    int32_t var_218 = 0xffffffff;
    int32_t ebp = 0;
    data_413a54 = 0;
    if (data_413a58 == 0)
    {
        data_413a58 = sub_404830();
    }
    int32_t eax_3 = *arg_4;
    if (eax_3 == 0x2d)
    {
        arg3 = 1;
        arg_4 = &arg_4[1];
        if (_ismbcdigit(*arg_4) == 0)
        {
            data_413a4c = 0xff;
        }
        else
        {
            char* esi_1 = arg_4;
            data_413a4c = strtol(arg_4, &arg_4, 0xa);
            if (*_errno() == 0x22)
            {
                char* var_234_2 = esi_1;
                *arg_4 = 0;
                sub_403220(0, 0x436);
            }
            if (_ismbcspace(*arg_4) != 0)
            {
                int32_t i;
                do
                {
                    arg_4 = &arg_4[1];
                    i = _ismbcspace(*arg_4);
                } while (i != 0);
            }
        }
    }
    else if (eax_3 == 0x40)
    {
        arg_4 = &arg_4[1];
        if (arg2 != 0)
        {
            arg1 = 0;
        }
    }
    int32_t eax_71;
    if (*arg_4 == 0)
    {
    label_404166:
        eax_71 = 0;
    }
    else
    {
        char* edi_1 = arg_4;
        int32_t i_1 = 0xffffffff;
        while (i_1 != 0)
        {
            bool cond:0_1 = 0 != *edi_1;
            edi_1 = &edi_1[1];
            i_1 = (i_1 - 1);
            if ((!cond:0_1))
            {
                break;
            }
        }
        if (((!i_1) - 1) >= 0x800)
        {
            char* var_234_5 = arg_4;
            sub_403220(0, 0x447);
        }
        else
        {
            char* edi_2 = arg_4;
            int32_t i_2 = 0xffffffff;
            while (i_2 != 0)
            {
                bool cond:1_1 = 0 != *edi_2;
                edi_2 = &edi_2[1];
                i_2 = (i_2 - 1);
                if ((!cond:1_1))
                {
                    break;
                }
            }
            int32_t ecx_7 = (!i_2);
            __builtin_memcpy(0x40e108, (edi_2 - ecx_7), ((ecx_7 >> 2) << 2));
            int32_t esi_3;
            int32_t edi_4;
            __builtin_memcpy(edi_4, esi_3, (ecx_7 & 3));
        }
        if (arg1 != 0)
        {
            printf("\t%s\n", 0x40e108);
            fflush((__p__iob() + 0x20));
        }
        int32_t ebx_1;
        if ((data_41400c == 0 && data_414010 == 0))
        {
        label_403ce7:
            ebx_1 = 1;
        label_403cf5:
            int32_t eax_18 = sub_40add0(0x40e108);
            data_413a5c = eax_18;
            int32_t var_21c;
            char* var_20c;
            sub_403580(&var_21c, &var_20c, eax_18);
            if (((var_20c != 0 && data_413ff8 != 0) && _mbsicmp(var_20c, data_413ff8) == 0))
            {
                var_20c = *__p__pgmptr();
            }
            if (var_21c == 0)
            {
                goto label_404166;
            }
            data_413a54 = _mbsnbcpy(0x4130f8, var_20c, 0x100);
            int32_t edx_1 = var_21c;
            int32_t var_220;
            int32_t* var_234_10 = &var_220;
            int32_t* var_238_6 = &var_20c;
            if (arg2 == 0)
            {
                if (sub_404680(edx_1, var_238_6, var_234_10) == 0)
                {
                    goto label_404166;
                }
                if ((var_220 != 0 && arg4 != 0))
                {
                    *arg4 = sub_40add0(var_20c);
                }
                goto label_404160;
            }
            if (sub_404680(edx_1, var_238_6, var_234_10) != 0)
            {
                ebx_1 = 0;
            }
            else if (ebx_1 == 0)
            {
                int32_t esi_5 = 0;
                int32_t ebp_1 = 0x23;
                int32_t edi_5 = 0x11;
                *_errno() = 0;
                do
                {
                    int32_t eax_31 = _mbsicmp(var_20c, &data_413068[edi_5]);
                    if (eax_31 == 0)
                    {
                        ebx_1 = 1;
                        break;
                    }
                    if (eax_31 >= 0)
                    {
                        esi_5 = edi_5;
                    }
                    else
                    {
                        ebp_1 = edi_5;
                    }
                    int32_t eax_33;
                    int32_t edx_2;
                    edx_2 = HIGHD((esi_5 + ebp_1));
                    eax_33 = LOWD((esi_5 + ebp_1));
                    edi_5 = ((eax_33 - edx_2) >> 1);
                } while ((ebp_1 - esi_5) > 1);
                ebp = 1;
                if (ebx_1 == 0)
                {
                    _splitpath(data_413a54, 0x40e000, 0x40e908, 0x40e008, 0);
                    _makepath(data_413a54, 0x40e000, 0x40e908, 0x40e008, 0);
                    int32_t eax_39 = sub_405bc0(data_413a54, &data_411050);
                    if (eax_39 == 0)
                    {
                        *_errno() = 2;
                        var_220 = 0xffffffff;
                    }
                    else
                    {
                        int32_t eax_41;
                        if (*(eax_39 + 1) != 0x62)
                        {
                            eax_41 = _mbsicmp(eax_39, ".cmd");
                            if (eax_41 != 0)
                            {
                                char* esi_6 = var_20c;
                                if (*esi_6 != 0)
                                {
                                    do
                                    {
                                        int32_t eax_42 = *esi_6;
                                        esi_6 = &esi_6[1];
                                        esi_6[0xffffffff] = _mbctoupper(eax_42);
                                    } while (*esi_6 != 0);
                                }
                                bool cond:5_1 = data_414014 == 0;
                                char* esi_7 = var_20c;
                                var_20c = &data_411050;
                                int32_t eax_44;
                                if ((!cond:5_1))
                                {
                                    void var_210;
                                    eax_44 = sub_40ab40(&data_411050, &var_210);
                                    if (eax_44 == 0)
                                    {
                                        printf("NMAKE : Cannot execute command; …");
                                        *_errno() = 1;
                                        var_220 = 0xffffffff;
                                    }
                                }
                                if ((cond:5_1 || ((!cond:5_1) && eax_44 != 0)))
                                {
                                    var_220 = _spawnvp(0, 0x411050, &var_20c);
                                    var_20c = esi_7;
                                }
                            }
                        }
                        if ((*(eax_39 + 1) == 0x62 || (*(eax_39 + 1) != 0x62 && eax_41 == 0)))
                        {
                            ebx_1 = 1;
                        }
                    }
                }
            }
            if (var_214 != 0xffffffff)
            {
                int32_t eax_48 = *(__p__iob() + 0x10);
                if (_dup2(var_214, eax_48) == 0xffffffff)
                {
                    sub_403220(0, 0x411);
                }
                _close(var_214);
            }
            if (var_218 != 0xffffffff)
            {
                int32_t eax_52 = *(__p__iob() + 0x30);
                if (_dup2(var_218, eax_52) == 0xffffffff)
                {
                    sub_403220(0, 0x411);
                }
                _close(var_218);
            }
            char* var_204;
            if (ebx_1 != 0)
            {
                if (data_414014 != 0)
                {
                    printf("NMAKE : Cannot execute command; …");
                    *_errno() = 1;
                    var_220 = 0xffffffff;
                }
                else
                {
                    char* edi_6 = arg_4;
                    int32_t i_3 = 0xffffffff;
                    while (i_3 != 0)
                    {
                        bool cond:4_1 = 0 != *edi_6;
                        edi_6 = &edi_6[1];
                        i_3 = (i_3 - 1);
                        if ((!cond:4_1))
                        {
                            break;
                        }
                    }
                    int32_t ecx_17 = (!i_3);
                    __builtin_memcpy(0x40e108, (edi_6 - ecx_17), ((ecx_17 >> 2) << 2));
                    int32_t esi_9;
                    int32_t edi_8;
                    __builtin_memcpy(edi_8, esi_9, (ecx_17 & 3));
                    int32_t eax_57;
                    if (ebp != 0)
                    {
                        eax_57 = system(0x40e108);
                    }
                    else
                    {
                        int32_t eax_58 = var_21c;
                        if (eax_58 >= 0)
                        {
                            int32_t __saved_ebp;
                            void* i_4 = &&__saved_ebp[(eax_58 + 0xb)];
                            do
                            {
                                int32_t eax_59 = *(i_4 - 8);
                                i_4 = (i_4 - 4);
                                *(i_4 + 4) = eax_59;
                            } while (i_4 >= &var_204);
                        }
                        void* var_208_1 = &data_413310;
                        var_20c = data_413a58;
                        eax_57 = _spawnvp(0, var_20c, &var_20c);
                    }
                    var_220 = eax_57;
                }
            }
            if (var_220 == 0xc000004b)
            {
                fprintf((__p__iob("spawn returned 0xc000004b ... Be…") + 0x40));
                var_220 = 0;
            }
            if (var_220 == 0xffffffff)
            {
                if (arg3 != 0)
                {
                    var_220 = 0;
                }
                else
                {
                    int32_t eax_64 = *_errno();
                    if (eax_64 != 0)
                    {
                        int32_t var_238_14;
                        if (eax_64 == 2)
                        {
                            char* var_234_22 = var_20c;
                            var_238_14 = 0x439;
                        }
                        else if (eax_64 != 0xc)
                        {
                            int32_t var_234_21 = _strerror(0);
                            var_238_14 = 0x415;
                        }
                        else
                        {
                            char* eax_67 = var_204;
                            if (ebx_1 == 0)
                            {
                                eax_67 = var_20c;
                            }
                            char* var_234_23 = eax_67;
                            var_238_14 = 0x43a;
                        }
                        sub_403220(0, var_238_14);
                    }
                }
            }
            if ((var_220 != 0 && arg4 != 0))
            {
                *arg4 = sub_40add0(var_20c);
            }
            free(data_413a5c);
        label_404160:
            eax_71 = var_220;
        }
        if ((data_41400c != 0 || (data_41400c == 0 && data_414010 != 0)))
        {
            if (((data_4133d0 & 4) == 0 && sub_4043a0(&data_40e108, &var_214, &var_218) != 0))
            {
                goto label_403ce7;
            }
            ebx_1 = 0;
            goto label_403cf5;
        }
    }
    return eax_71;
}

int32_t sub_404180()
{
    sub_40ceb4(0x1108);
    void* __return_addr_1 = &*arg_908[3];
    arg_908 = data_413358;
    char* ebp = &data_40e10b;
    while (true)
    {
        int32_t eax;
        eax = *ebp;
        if ((eax != 0x20 && eax != 9))
        {
            if (_mbschr(ebp, 0x3d) == 0)
            {
                return 0x413060;
            }
            __return_addr = __return_addr_1;
            if (*ebp != 0x3d)
            {
                do
                {
                    __return_addr_1 = (__return_addr_1 + 1);
                    ebp = &ebp[1];
                    *(__return_addr_1 - 1) = _mbctoupper(ebp[0xffffffff]);
                } while (*ebp != 0x3d);
            }
            if (*ebp != 0)
            {
                do
                {
                    int32_t eax_1;
                    eax_1 = *ebp;
                    if (eax_1 != 0x25)
                    {
                        *__return_addr_1 = eax_1;
                        ebp = &ebp[1];
                        __return_addr_1 = (__return_addr_1 + 1);
                    }
                    else
                    {
                        void* esi_1 = &arg_4;
                        void* ebp_1 = &ebp[1];
                        if (*ebp_1 != 0x25)
                        {
                            do
                            {
                                eax_1 = *ebp_1;
                                if (eax_1 == 0)
                                {
                                    break;
                                }
                                esi_1 = (esi_1 + 1);
                                ebp_1 = (ebp_1 + 1);
                                *(esi_1 - 1) = _mbctoupper(eax_1);
                            } while (*ebp_1 != 0x25);
                        }
                        *esi_1 = 0;
                        ebp = (ebp_1 + 1);
                        if (*ebp_1 != 0)
                        {
                            arg_108 = 0;
                            eax_1 = getenv(&arg_4);
                            if (eax_1 != 0)
                            {
                                int32_t edi_7 = eax_1;
                                int32_t i = 0xffffffff;
                                while (i != 0)
                                {
                                    bool cond:5_1 = 0 != *edi_7;
                                    edi_7 = (edi_7 + 1);
                                    i = (i - 1);
                                    if ((!cond:5_1))
                                    {
                                        break;
                                    }
                                }
                                int32_t ecx_7 = (!i);
                                int32_t i_1 = 0xffffffff;
                                char* edi_9 = &arg_108;
                                while (i_1 != 0)
                                {
                                    bool cond:6_1 = 0 != *edi_9;
                                    edi_9 = &edi_9[1];
                                    i_1 = (i_1 - 1);
                                    if ((!cond:6_1))
                                    {
                                        break;
                                    }
                                }
                                __builtin_memcpy((edi_9 - 1), (edi_7 - ecx_7), ((ecx_7 >> 2) << 2));
                                int32_t esi_5;
                                int32_t edi_11;
                                __builtin_memcpy(edi_11, esi_5, (ecx_7 & 3));
                                char* edi_12 = &arg_108;
                                int32_t i_2 = 0xffffffff;
                                *__return_addr_1 = 0;
                                while (i_2 != 0)
                                {
                                    bool cond:7_1 = 0 != *edi_12;
                                    edi_12 = &edi_12[1];
                                    i_2 = (i_2 - 1);
                                    if ((!cond:7_1))
                                    {
                                        break;
                                    }
                                }
                                int32_t ecx_12 = (!i_2);
                                int32_t i_3 = 0xffffffff;
                                int32_t* edi_14 = &arg_908;
                                while (i_3 != 0)
                                {
                                    bool cond:8_1 = 0 != *edi_14;
                                    edi_14 = (edi_14 + 1);
                                    i_3 = (i_3 - 1);
                                    if ((!cond:8_1))
                                    {
                                        break;
                                    }
                                }
                                __builtin_memcpy((edi_14 - 1), (edi_12 - ecx_12), ((ecx_12 >> 2) << 2));
                                int32_t esi_7;
                                int32_t edi_16;
                                __builtin_memcpy(edi_16, esi_7, (ecx_12 & 3));
                                char* edi_17 = &arg_108;
                                int32_t i_4 = 0xffffffff;
                                while (i_4 != 0)
                                {
                                    bool cond:9_1 = 0 != *edi_17;
                                    edi_17 = &edi_17[1];
                                    i_4 = (i_4 - 1);
                                    if ((!cond:9_1))
                                    {
                                        break;
                                    }
                                }
                                __return_addr_1 = (((!i_4) + __return_addr_1) - 1);
                            }
                        }
                        else
                        {
                            void* edi_1 = &arg_4;
                            int32_t i_5 = 0xffffffff;
                            *__return_addr_1 = 0;
                            while (i_5 != 0)
                            {
                                bool cond:2_1 = 0 != *edi_1;
                                edi_1 = (edi_1 + 1);
                                i_5 = (i_5 - 1);
                                if ((!cond:2_1))
                                {
                                    break;
                                }
                            }
                            int32_t ecx_1 = (!i_5);
                            int32_t i_6 = 0xffffffff;
                            int32_t* edi_3 = &arg_908;
                            while (i_6 != 0)
                            {
                                bool cond:3_1 = 0 != *edi_3;
                                edi_3 = (edi_3 + 1);
                                i_6 = (i_6 - 1);
                                if ((!cond:3_1))
                                {
                                    break;
                                }
                            }
                            __builtin_memcpy((edi_3 - 1), (edi_1 - ecx_1), ((ecx_1 >> 2) << 2));
                            int32_t esi_3;
                            int32_t edi_5;
                            __builtin_memcpy(edi_5, esi_3, (ecx_1 & 3));
                            void* edi_6 = &arg_4;
                            int32_t i_7 = 0xffffffff;
                            while (i_7 != 0)
                            {
                                bool cond:4_1 = 0 != *edi_6;
                                edi_6 = (edi_6 + 1);
                                i_7 = (i_7 - 1);
                                if ((!cond:4_1))
                                {
                                    break;
                                }
                            }
                            __return_addr_1 = (((!i_7) + __return_addr_1) - 1);
                        }
                    }
                } while (*ebp != 0);
            }
            int32_t* edi_18 = &arg_908;
            int32_t i_8 = 0xffffffff;
            *__return_addr_1 = 0;
            while (i_8 != 0)
            {
                bool cond:0_1 = 0 != *edi_18;
                edi_18 = (edi_18 + 1);
                i_8 = (i_8 - 1);
                if ((!cond:0_1))
                {
                    break;
                }
            }
            int32_t ecx_18 = (!i_8);
            __builtin_memcpy(0x40e108, (edi_18 - ecx_18), ((ecx_18 >> 2) << 2));
            int32_t esi_9;
            int32_t edi_20;
            __builtin_memcpy(edi_20, esi_9, (ecx_18 & 3));
            int32_t* edi_21 = &arg_908;
            *__return_addr = 0;
            int32_t i_9 = 0xffffffff;
            while (i_9 != 0)
            {
                bool cond:1_1 = 0 != *edi_21;
                edi_21 = (edi_21 + 1);
                i_9 = (i_9 - 1);
                if ((!cond:1_1))
                {
                    break;
                }
            }
            return ((!i_9) + 0x40e107);
        }
        *__return_addr_1 = eax;
        __return_addr_1 = (__return_addr_1 + 1);
        ebp = &ebp[1];
    }
}

int32_t __stdcall sub_4043a0(char* arg1, int32_t* arg2, int32_t* arg3)
{
    int32_t i_1 = 0;
    int32_t i = 0xffffffff;
    char* ebp = arg1;
    char* edi = ebp;
    int32_t var_4 = 0;
    int32_t var_8 = 0;
    int32_t var_10 = 0;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = &edi[1];
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    int32_t esi = 1;
    if (((!i) - 1) < 0x7c)
    {
        esi = 0;
    }
    do
    {
        int32_t eax_1 = _mbspbrk(ebp, ""<>|");
        if (eax_1 == 0)
        {
            break;
        }
        void* eax_3 = (*eax_1 - 0x22);
        int32_t ecx_2;
        if (eax_3 <= 0x5a)
        {
            ecx_2 = *(eax_3 + 0x404620);
            switch (ecx_2)
            {
                case 0:
                {
                    int32_t eax_4 = _mbschr((eax_1 + 1), 0x22);
                    if (eax_4 == 0)
                    {
                        goto label_40450b;
                    }
                    ebp = (eax_4 + 1);
                    break;
                }
                case 1:
                {
                    if (var_4 != 0)
                    {
                        goto label_40450b;
                    }
                    if (esi == 0)
                    {
                        goto label_40450b;
                    }
                    if (var_10 == 0)
                    {
                        var_10 = sub_40add0(ebp);
                    }
                    *eax_1 = 0x20;
                    var_4 = 1;
                    ebp = (eax_1 + 1);
                    int32_t eax_8 = _dup(*(__p__iob() + 0x10));
                    *arg2 = eax_8;
                    if (eax_8 == 0xffffffff)
                    {
                        goto label_40450b;
                    }
                    if (sub_404af0((eax_1 + 1), 4) == 0)
                    {
                        goto label_40450b;
                    }
                    break;
                }
                case 2:
                {
                    if (var_8 != 0)
                    {
                        goto label_40450b;
                    }
                    if (esi == 0)
                    {
                        goto label_40450b;
                    }
                    if (var_10 == 0)
                    {
                        var_10 = sub_40add0(ebp);
                    }
                    *eax_1 = 0x20;
                    char* edi_4 = (eax_1 + 1);
                    var_8 = 1;
                    ebp = edi_4;
                    int32_t var_c_1;
                    if (*edi_4 != 0x3e)
                    {
                        var_c_1 = 2;
                    }
                    else
                    {
                        *edi_4 = 0x20;
                        edi_4 = &edi_4[1];
                        var_c_1 = 3;
                    }
                    int32_t eax_13 = _dup(*(__p__iob() + 0x30));
                    *arg3 = eax_13;
                    if (eax_13 == 0xffffffff)
                    {
                        goto label_40450b;
                    }
                    if (sub_404af0(edi_4, var_c_1) == 0)
                    {
                        goto label_40450b;
                    }
                    break;
                }
                case 3:
                {
                label_40450b:
                    i_1 = 1;
                    break;
                }
            }
        }
        if ((eax_3 > 0x5a || (eax_3 <= 0x5a && ecx_2 == 4)))
        {
            sub_403220(0, 0x411);
        }
    } while (i_1 == 0);
    if (i_1 != 0)
    {
        if (var_10 != 0)
        {
            int32_t edi_5 = var_10;
            int32_t i_2 = 0xffffffff;
            while (i_2 != 0)
            {
                bool cond:1_1 = 0 != *edi_5;
                edi_5 = (edi_5 + 1);
                i_2 = (i_2 - 1);
                if ((!cond:1_1))
                {
                    break;
                }
            }
            int32_t ecx_5 = (!i_2);
            __builtin_memcpy(ebp, (edi_5 - ecx_5), ((ecx_5 >> 2) << 2));
            int32_t esi_2;
            int32_t edi_8;
            __builtin_memcpy(edi_8, esi_2, (ecx_5 & 3));
            free(var_10);
        }
        if (var_4 != 0)
        {
            int32_t esi_3 = *arg2;
            if (esi_3 != 0xffffffff)
            {
                if (_dup2(esi_3, *(__p__iob() + 0x30)) == 0xffffffff)
                {
                    sub_403220(0, 0x411);
                }
                _close(*arg2);
                *arg2 = 0xffffffff;
            }
        }
        if (var_8 != 0)
        {
            int32_t esi_4 = *arg3;
            if (esi_4 != 0xffffffff)
            {
                if (_dup2(esi_4, *(__p__iob() + 0x30)) == 0xffffffff)
                {
                    sub_403220(0, 0x411);
                }
                _close(*arg3);
                *arg3 = 0xffffffff;
            }
        }
    }
    return i_1;
}

int32_t __stdcall sub_404680(int32_t arg1, int32_t* arg2, int32_t* arg3)
{
    char* ebx = *arg2;
    void* esi = arg2[1];
    if ((_ismbcalpha(*ebx) != 0 && (ebx[1] == 0x3a && ebx[2] == 0)))
    {
        sub_40cbd0((_mbctoupper(*ebx) - 0x40));
        *arg3 = 0;
        return 1;
    }
    int32_t* esi_2;
    if (_mbsicmp(ebx, &data_413358) != 0)
    {
        void* ebx_1;
        if (_mbsnbicmp(ebx, &data_41336c, 2) == 0)
        {
            ebx_1 = &ebx[2];
        }
        else
        {
            if (_mbsnbicmp(ebx, "chdir", 5) != 0)
            {
                return 0;
            }
            ebx_1 = &ebx[5];
        }
        sub_404bb0(arg1, arg2);
        if (arg1 > 2)
        {
            return 0;
        }
        char eax_15 = *ebx_1;
        void* var_14_6;
        if ((eax_15 == 0 && esi != 0))
        {
            int32_t eax_19;
            if (*__p___mb_cur_max() <= 1)
            {
                int32_t eax_21;
                eax_21 = *(*__p__pctype() + (*esi << 1));
                eax_19 = (eax_21 & 0x103);
            }
            else
            {
                eax_19 = _isctype(*esi, 0x103);
            }
            if ((eax_19 != 0 && (*(esi + 1) == 0x3a && *(esi + 2) == 0)))
            {
                return 0;
            }
            var_14_6 = esi;
        }
        if ((eax_15 != 0 || (eax_15 == 0 && esi == 0)))
        {
            if ((eax_15 != 0x2e && (eax_15 != 0x5c && eax_15 != 0x2f)))
            {
                return 0;
            }
            var_14_6 = ebx_1;
        }
        esi_2 = arg3;
        *esi_2 = _chdir(var_14_6);
    }
    else
    {
        if (arg1 == 1)
        {
            return 0;
        }
        char* eax_8 = sub_404180();
        if (*eax_8 == 0)
        {
            return 0;
        }
        int32_t eax_11 = _putenv(sub_40add0(eax_8));
        esi_2 = arg3;
        *esi_2 = eax_11;
        if (eax_11 == 0xffffffff)
        {
            sub_403220(data_413424, 0x41f);
        }
    }
    if (*esi_2 != 0)
    {
        *esi_2 = 1;
    }
    return 1;
}

int32_t sub_404830()
{
    sub_40ceb4(((data_413ee0 + 3) & 0xfffffffc));
    int32_t eax_3 = getenv("COMSPEC");
    if (eax_3 == 0)
    {
        int32_t eax_4 = getenv("PATH");
        if (eax_4 == 0)
        {
            eax_4 = 0x413060;
        }
        void var_8;
        void* var_14_1 = &var_8;
        int32_t __saved_edi;
        int32_t eax_5 = sub_405930(eax_4, "CMD.EXE", &__saved_edi);
        if (eax_5 == 0)
        {
            sub_403220(0, 0x420);
        }
        eax_3 = eax_5;
    }
    return eax_3;
}

int32_t __stdcall sub_4048b0(int32_t* arg1, int32_t arg2, char arg3, char arg4, char* arg5, int32_t* arg6)
{
    int32_t i = 0;
    char* esi = arg1;
    char var_11 = 0;
    if (*esi != 0)
    {
        do
        {
            int32_t ecx_1 = 0;
            if (*esi == 0x24)
            {
                if (esi[1] == 0x28)
                {
                    esi = &esi[1];
                    ecx_1 = 1;
                }
                char* edi_1 = &esi[1];
                void* eax_1;
                eax_1 = *edi_1;
                if (eax_1 != 0x3f)
                {
                    esi = edi_1;
                    if ((eax_1 == 0x2a && edi_1[1] == 0x2a))
                    {
                        if (ecx_1 == 0)
                        {
                        label_404959:
                            var_11 = 0x2a;
                            i = data_413a98;
                            break;
                        }
                        if ((_mbschr("DFBR", edi_1[2]) != 0 && edi_1[3] == 0x29))
                        {
                            goto label_404959;
                        }
                        if (edi_1[2] == 0x29)
                        {
                            goto label_404959;
                        }
                    }
                }
                else
                {
                    if (ecx_1 == 0)
                    {
                    label_404911:
                        var_11 = 0x3f;
                        i = data_413a94;
                        break;
                    }
                    if ((_mbschr("DFBR", esi[2]) != 0 && esi[3] == 0x29))
                    {
                        goto label_404911;
                    }
                    if (esi[2] == 0x29)
                    {
                        goto label_404911;
                    }
                }
            }
            esi = &esi[1];
        } while (*esi != 0);
    }
    if (*esi == 0)
    {
        return 0;
    }
    int32_t i_1 = i;
    while (i != 0)
    {
        data_413a28 = arg2;
        int32_t* eax_9;
        if (var_11 != 0x2a)
        {
            eax_9 = data_413a94;
        }
        else
        {
            eax_9 = data_413a98;
        }
        i = *eax_9;
        int32_t var_28_3 = 0x413a28;
        *eax_9 = 0;
        int32_t eax_11 = sub_40b700(arg1);
        sub_40c790(&data_411250, eax_11, arg5);
        char eax_13 = (arg3 & 4);
        int32_t ecx_2;
        if (eax_13 != 0)
        {
            ecx_2 = 0;
        }
        if ((eax_13 == 0 || (eax_13 != 0 && (arg4 & 8) != 0)))
        {
            ecx_2 = 1;
        }
        int32_t edx_1;
        if ((eax_13 != 0 || ((eax_13 == 0 && (arg3 & 8) == 0) && (arg4 & 1) == 0)))
        {
            edx_1 = 1;
        }
        if ((eax_13 == 0 && ((arg3 & 8) != 0 || ((arg3 & 8) == 0 && (arg4 & 1) != 0))))
        {
            edx_1 = 0;
        }
        int32_t var_c;
        int32_t* var_28_5 = &var_c;
        int32_t* eax_14;
        eax_14 = arg4;
        *arg6 = sub_403af0(0x411250, edx_1, ecx_2, (eax_14 & 2));
        int32_t eax_16;
        eax_16 = arg3;
        eax_16 = (eax_16 & 2);
        if (eax_16 == 0)
        {
            int32_t eax_17 = *arg6;
            if ((eax_17 != 0 && (data_413a4c < eax_17 && data_4133a4 == 0)))
            {
                int32_t var_28_6 = eax_17;
                int32_t var_2c_4 = var_c;
                sub_403220(0, 0x435);
            }
        }
        if (var_11 != 0x2a)
        {
            **&data_413a94 = i;
            data_413a94 = **&data_413a94;
        }
        else
        {
            **&data_413a98 = i;
            data_413a98 = **&data_413a98;
        }
        free(eax_11);
        if ((eax_16 == 0 && data_4133a4 != 0))
        {
            int32_t eax_23 = *arg6;
            if (eax_23 != 0)
            {
                if (data_413a4c < eax_23)
                {
                    break;
                }
            }
        }
    }
    if (var_11 != 0x2a)
    {
        data_413a94 = i_1;
    }
    else
    {
        data_413a98 = i_1;
    }
    return 1;
}

int32_t __stdcall sub_404af0(char* arg1, int32_t arg2)
{
    char var_1 = 0;
    char* edi = arg1;
    while (true)
    {
        char eax = *edi;
        if ((eax != 0x20 && eax != 9))
        {
            int32_t esi = _mbspbrk(edi, " \t<>\r");
            if (esi != 0)
            {
                int32_t eax_1;
                eax_1 = *esi;
                var_1 = eax_1;
                *esi = 0;
            }
            int32_t eax_2;
            void* ebx;
            if (arg2 == 4)
            {
                ebx = &data_413390;
                eax_2 = __p__iob();
            }
            else
            {
                ebx = &data_41338c;
                eax_2 = (__p__iob() + 0x20);
                if (arg2 != 2)
                {
                    ebx = &data_413388;
                }
            }
            int32_t eax_4 = freopen(edi, ebx, eax_2);
            int32_t ebx_1 = (ebx - ebx);
            if ((ebx_1 != 0xffffffff && arg2 == 3))
            {
                _lseek(*(eax_4 + 0x10), 0, 2);
            }
            if (*edi != 0)
            {
                do
                {
                    *edi = 0x20;
                    edi = &edi[1];
                } while (*edi != 0);
            }
            if (esi != 0)
            {
                eax_4 = var_1;
                *esi = eax_4;
            }
            return (ebx_1 + 1);
        }
        edi = &edi[1];
    }
}

int32_t __stdcall sub_404bb0(int32_t arg1, int32_t* arg2)
{
    int32_t ebx;
    int32_t var_4 = ebx;
    int32_t i = arg1;
    int32_t i_1 = (arg1 - 1);
    if (i != 0)
    {
        int32_t* edx_1 = arg2;
        do
        {
            char* edi_1 = *edx_1;
            char* eax = edi_1;
            if (*edi_1 != 0)
            {
                do
                {
                    ebx = *eax;
                    if (((ebx != 0x5c && ebx != 0x5e) && ebx != 0x22))
                    {
                        *edi_1 = ebx;
                    }
                    if (ebx == 0x22)
                    {
                        eax = &eax[1];
                    }
                    if ((ebx == 0x5c || ebx == 0x5e))
                    {
                        if (eax[1] == 0x22)
                        {
                            *edi_1 = ebx;
                            eax = &eax[1];
                            edi_1 = &edi_1[1];
                        }
                        void* ecx_1;
                        ecx_1 = *eax;
                        *edi_1 = ecx_1;
                    }
                    if ((((ebx != 0x5c && ebx != 0x5e) && ebx != 0x22) || ((ebx == 0x5c || ebx == 0x5e) && (eax[1] == 0x22 || eax[1] != 0x22))))
                    {
                        eax = &eax[1];
                        edi_1 = &edi_1[1];
                    }
                } while (*eax != 0);
            }
            edx_1 = &edx_1[1];
            i = i_1;
            i_1 = (i_1 - 1);
            *edi_1 = 0;
        } while (i != 0);
    }
    return i;
}

int32_t __stdcall sub_404c10(char* arg1, int32_t arg2)
{
    char* var_c = arg1;
    int32_t eax = sub_403370(5);
    if (arg2 == 0)
    {
        eax = sub_40ca80(arg1, &data_41339c);
        if (eax != 0)
        {
            int32_t esi_1 = *(eax + 0x10);
            void var_1;
            if (_read(esi_1, &var_1, 1) > 0)
            {
                _lseek(esi_1, 0, 0);
                _write(esi_1, &var_1, 1);
            }
            eax = _close(esi_1);
        }
    }
    return eax;
}

int32_t __stdcall sub_404c90(int32_t* arg1)
{
    return (*arg1 + 0x14);
}

int32_t __stdcall sub_404ca0(int32_t* arg1)
{
    char* ecx = *arg1;
    int32_t eax;
    if ((*ecx & 0x10) == 0)
    {
        eax = *(ecx + 0xc);
    }
    else
    {
        eax = *(ecx + 4);
        if (eax == 0xffffffff)
        {
            return *(ecx + 0xc);
        }
    }
    return eax;
}

int32_t __stdcall sub_404cc0(int32_t* arg1, int32_t arg2)
{
    char* ecx = *arg1;
    if ((*ecx & 0x10) == 0)
    {
        *(ecx + 0xc) = arg2;
        return arg2;
    }
    *(ecx + 4) = arg2;
    return arg2;
}

int32_t __stdcall sub_404cf0(int32_t arg1)
{
    int32_t ebx;
    if (data_413a80 != 0xffffffff)
    {
        ebx = 0x20;
        if (data_413a80 != 0x8140)
        {
            ebx = data_413a80;
        }
        data_413a80 = 0xffffffff;
    }
    else
    {
        ebx = getc(arg1);
        int32_t ecx_1;
        ecx_1 = ebx;
        if ((*((ecx_1 + __p__mbctype()) + 1) & 4) != 0)
        {
            int32_t ecx_4 = ((ebx << 8) | getc(arg1));
            data_413a80 = ecx_4;
            if (ecx_4 == 0x8140)
            {
                return 0x20;
            }
        }
    }
    return ebx;
}

int32_t __stdcall sub_404d70(int32_t arg1, int32_t arg2)
{
    int32_t eax = data_413a80;
    if (eax != 0xffffffff)
    {
        ungetc((eax & 0xff), arg2);
        int32_t eax_5 = ungetc(arg1, arg2);
        data_413a80 = 0xffffffff;
        return eax_5;
    }
    if ((arg1 & 0xffffff00) != 0)
    {
        data_413a80 = arg1;
        return arg1;
    }
    return ungetc(arg1, arg2);
}

int32_t sub_404de0()
{
    int32_t eax_1 = sub_404cf0(data_4133d8);
    while (true)
    {
        if (data_413a78 == 0)
        {
            if (data_4133f0 == 0)
            {
                break;
            }
            if ((data_4133f0 != 0 && eax_1 != 0x21))
            {
                break;
            }
        }
        data_4133f0 = 0;
        char* esi_1;
        if (data_413a78 != 0)
        {
            sub_404d70(eax_1, data_4133d8);
            esi_1 = data_413a78;
            data_413a78 = 0;
        }
        else
        {
            esi_1 = sub_404f80();
        }
        char var_1;
        char* edi_1 = sub_4050b0(esi_1, &var_1);
        if (var_1 == 9)
        {
            if (data_413408 != 0)
            {
                char* var_18_3 = esi_1;
                sub_403220(data_4133f4, 0x409);
            }
            if (sub_407680(edi_1) == 0x12)
            {
                eax_1 = 0x20;
                break;
            }
        }
        else if (var_1 == 0xa)
        {
            sub_4051e0(edi_1);
        }
        else if (var_1 == 0xb)
        {
            char* var_18_6 = edi_1;
            sub_403220(data_4133f4, 0x41a);
        }
        else if (var_1 == 0xc)
        {
            if (_mbsnbicmp(edi_1, &data_413f04, 2) == 0)
            {
                edi_1 = &edi_1[2];
                printf(&data_413f00);
            }
            char* var_18_10 = edi_1;
            sub_403370(0xd);
        }
        else if (var_1 != 0xd)
        {
            char* eax_3;
            eax_3 = var_1;
            sub_405530(edi_1, eax_3);
        }
        else
        {
            int32_t eax_7 = _mbstok(edi_1, &data_413008);
            if (_mbstok(0, &data_413008) != 0)
            {
                int32_t var_18_7 = eax_7;
                sub_403220(data_4133f4, 0x409);
            }
            void* eax_10 = sub_407b70(eax_7);
            if (eax_10 != 0)
            {
                *(eax_10 + 0xc) = (*(eax_10 + 0xc) | 0x10);
            }
        }
        data_4133f0 = 1;
        if (data_413a74 != esi_1)
        {
            free(esi_1);
        }
        int32_t eax_12 = data_4133d8;
        data_4133f4 = (data_4133f4 + 1);
        eax_1 = sub_404cf0(eax_12);
    }
    return eax_1;
}

char* sub_404f80()
{
    int32_t esi = 0;
    int32_t eax = sub_406880(1);
    if ((eax == 0xa || eax == 0xffffffff))
    {
        sub_403220(data_4133f4, 0x3fa);
    }
    sub_404d70(eax, data_4133d8);
    int32_t i;
    while (true)
    {
        int32_t i_1 = sub_4069d0(sub_404cf0(data_4133d8), 1);
        i = i_1;
        if (i_1 == 0x23)
        {
            break;
        }
        if (i == 0xa)
        {
            break;
        }
        if (i == 0xffffffff)
        {
            break;
        }
        if ((esi + 2) > data_413a7c)
        {
            data_413a7c = (data_413a7c + 0x400);
            int32_t eax_6 = data_413a7c;
            if (data_413a74 == 0)
            {
                data_413a74 = sub_40acf0((eax_6 + 1));
            }
            else
            {
                int32_t eax_10 = realloc(data_413a74, (eax_6 + 1));
                data_413a74 = eax_10;
                if (eax_10 == 0)
                {
                    sub_403220(data_4133f4, 0x419);
                }
            }
        }
        esi = (esi + 1);
        *((data_413a74 + esi) - 1) = i;
    }
    data_413a74[esi] = 0;
    if (i == 0x23)
    {
        int32_t i_2 = sub_404cf0(data_4133d8);
        i = i_2;
        if (i_2 != 0xa)
        {
            while (i != 0xffffffff)
            {
                int32_t i_3 = sub_404cf0(data_4133d8);
                i = i_3;
                if (i_3 == 0xa)
                {
                    break;
                }
            }
            if (i == 0xffffffff)
            {
                goto label_405090;
            }
        }
    }
    if (i == 0xffffffff)
    {
    label_405090:
        sub_404d70(i, data_4133d8);
    }
    return sub_40b690(data_413a74);
}

char* __stdcall sub_4050b0(char* arg1, char* arg2)
{
    char* var_4 = arg1;
    *arg2 = 0;
    if (*arg1 != 0)
    {
        do
        {
            char* eax_1;
            eax_1 = *var_4;
            if (eax_1 == 0x20)
            {
                break;
            }
            if (eax_1 == 9)
            {
                break;
            }
            var_4 = &var_4[1];
        } while (*var_4 != 0);
    }
    void* ebx_1 = (var_4 - arg1);
    if (*var_4 != 0)
    {
        do
        {
            char* eax_4;
            eax_4 = *var_4;
            if ((eax_4 != 0x20 && eax_4 != 9))
            {
                break;
            }
            var_4 = &var_4[1];
        } while (*var_4 != 0);
    }
    int32_t eax_6 = _mbsnbicmp(arg1, "INCLUDE", 7);
    if ((eax_6 != 0 || (eax_6 == 0 && ebx_1 != 7)))
    {
        int32_t eax_7 = _mbsnbicmp(arg1, "CMDSWITCHES", 0xb);
        if ((eax_7 != 0 || (eax_7 == 0 && ebx_1 != 0xb)))
        {
            int32_t eax_8 = _mbsnbicmp(arg1, "ERROR", 5);
            if ((eax_8 != 0 || (eax_8 == 0 && ebx_1 != 5)))
            {
                int32_t eax_9 = _mbsnbicmp(arg1, "MESSAGE", 7);
                if ((eax_9 != 0 || (eax_9 == 0 && ebx_1 != 7)))
                {
                    int32_t eax_10 = _mbsnbicmp(arg1, "UNDEF", 5);
                    if ((eax_10 != 0 || (eax_10 == 0 && ebx_1 != 5)))
                    {
                        *arg2 = sub_405360(arg1, ebx_1, &var_4);
                    }
                    if ((eax_10 == 0 && ebx_1 == 5))
                    {
                        *arg2 = 0xd;
                    }
                }
                if ((eax_9 == 0 && ebx_1 == 7))
                {
                    *arg2 = 0xc;
                }
            }
            if ((eax_8 == 0 && ebx_1 == 5))
            {
                *arg2 = 0xb;
            }
        }
        if ((eax_7 == 0 && ebx_1 == 0xb))
        {
            *arg2 = 0xa;
        }
    }
    if ((eax_6 == 0 && ebx_1 == 7))
    {
        *arg2 = 9;
    }
    if (*arg2 == 0)
    {
        int32_t var_18_2 = data_413a74;
        sub_403220(data_4133f4, 0x3f9);
    }
    return var_4;
}

void __stdcall sub_4051e0(char* arg1)
{
    char* ebx = arg1;
    if (*ebx != 0)
    {
        do
        {
            uint32_t eax;
            eax = *ebx;
            int32_t ecx_1 = eax;
            if (ecx_1 == 0x2b)
            {
                ebx = &ebx[1];
                if (*ebx != 0)
                {
                    do
                    {
                        eax = *ebx;
                        if (eax == 0x2d)
                        {
                            break;
                        }
                        if (_mbschr("DINS", _mbctoupper(eax)) != 0)
                        {
                            int32_t eax_5;
                            eax_5 = *ebx;
                            sub_4086d0(eax_5, 1);
                        }
                        else
                        {
                            int32_t eax_9;
                            if (data_413408 != 0)
                            {
                                eax_9 = _mbschr("ABCEKLMPQRTV", _mbctoupper(*ebx));
                                if (eax_9 != 0)
                                {
                                    eax_9 = *ebx;
                                    sub_4086d0(eax_9, 1);
                                }
                            }
                            if ((data_413408 == 0 || (data_413408 != 0 && eax_9 == 0)))
                            {
                                sub_403220(data_4133f4, 0x400);
                            }
                        }
                        ebx = &ebx[1];
                    } while (*ebx != 0);
                    if (*ebx == 0)
                    {
                        break;
                    }
                }
            }
            if ((ecx_1 == 0x2d || (ecx_1 == 0x2b && *ebx != 0)))
            {
                ebx = &ebx[1];
                if (*ebx == 0)
                {
                    break;
                }
                do
                {
                    eax = *ebx;
                    if (eax == 0x2b)
                    {
                        break;
                    }
                    if (_mbschr("DINS", _mbctoupper(eax)) != 0)
                    {
                        int32_t eax_14;
                        eax_14 = *ebx;
                        sub_4086d0(eax_14, 0);
                    }
                    else
                    {
                        int32_t eax_18;
                        if (data_413408 != 0)
                        {
                            eax_18 = _mbschr("ABCEKLMPQRTV", _mbctoupper(*ebx));
                            if (eax_18 != 0)
                            {
                                eax_18 = *ebx;
                                sub_4086d0(eax_18, 0);
                            }
                        }
                        if ((data_413408 == 0 || (data_413408 != 0 && eax_18 == 0)))
                        {
                            sub_403220(data_4133f4, 0x400);
                        }
                    }
                    ebx = &ebx[1];
                } while (*ebx != 0);
            }
            if (((ecx_1 != 0x2b && ecx_1 != 0x2d) && (eax != 0x20 && eax != 9)))
            {
                sub_403220(data_4133f4, 0x400);
            }
            if (*ebx == 0)
            {
                break;
            }
            ebx = &ebx[1];
        } while (*ebx != 0);
    }
}

int32_t __stdcall sub_405360(int32_t arg1, int32_t arg2, char** arg3)
{
    int32_t ebx;
    ebx = 0;
    if ((_mbsnbicmp(arg1, &data_413268, 2) == 0 && arg2 == 2))
    {
        int32_t eax;
        eax = 1;
        return eax;
    }
    if ((_mbsnbicmp(arg1, "IFDEF", 5) == 0 && arg2 == 5))
    {
        int32_t eax_1;
        eax_1 = 6;
        return eax_1;
    }
    if ((_mbsnbicmp(arg1, "IFNDEF", 6) == 0 && arg2 == 6))
    {
        int32_t eax_2;
        eax_2 = 7;
        return eax_2;
    }
    int32_t eax_3 = _mbsnbicmp(arg1, "ELSE", 4);
    if ((eax_3 != 0 || (eax_3 == 0 && arg2 != 4)))
    {
        if ((_mbsnbicmp(arg1, "ELSEIF", 6) == 0 && arg2 == 6))
        {
            int32_t eax_7;
            eax_7 = 3;
            return eax_7;
        }
        if ((_mbsnbicmp(arg1, "ELSEIFDEF", 9) == 0 && arg2 == 9))
        {
            int32_t eax_8;
            eax_8 = 4;
            return eax_8;
        }
        if ((_mbsnbicmp(arg1, "ELSEIFNDEF", 0xa) == 0 && arg2 == 0xa))
        {
            int32_t eax_9;
            eax_9 = 5;
            return eax_9;
        }
        if ((_mbsnbicmp(arg1, "ENDIF", 5) == 0 && arg2 == 5))
        {
            ebx = 8;
        }
    }
    int32_t eax_6;
    if ((eax_3 == 0 && arg2 == 4))
    {
        char* ecx_1 = *arg3;
        eax_3 = *ecx_1;
        if (eax_3 == 0)
        {
            eax_3 = 2;
            return eax_3;
        }
        char* edi_1 = ecx_1;
        if (eax_3 != 0)
        {
            do
            {
                eax_3 = *ecx_1;
                if (eax_3 == 0x20)
                {
                    break;
                }
                if (eax_3 == 9)
                {
                    break;
                }
                ecx_1 = &ecx_1[1];
            } while (*ecx_1 != 0);
        }
        int32_t ebp_2 = (ecx_1 - edi_1);
        if (*ecx_1 != 0)
        {
            do
            {
                eax_3 = *ecx_1;
                if ((eax_3 != 0x20 && eax_3 != 9))
                {
                    break;
                }
                ecx_1 = &ecx_1[1];
            } while (*ecx_1 != 0);
        }
        *arg3 = ecx_1;
        if ((_mbsnbicmp(edi_1, &data_413268, 2) == 0 && ebp_2 == 2))
        {
            int32_t eax_4;
            eax_4 = 3;
            return eax_4;
        }
        if ((_mbsnbicmp(edi_1, "IFDEF", 5) == 0 && ebp_2 == 5))
        {
            int32_t eax_5;
            eax_5 = 4;
            return eax_5;
        }
        if ((_mbsnbicmp(edi_1, "IFNDEF", 6) == 0 && ebp_2 == 6))
        {
            eax_6 = 5;
            return eax_6;
        }
    }
    eax_6 = ebx;
    return eax_6;
}

char* __stdcall sub_405530(char* arg1, char arg2)
{
    int32_t ebx;
    ebx = arg2;
    int32_t eax;
    eax = ebx;
    char* eax_1 = (eax - 1);
    char ecx;
    switch (eax_1)
    {
        case nullptr:
        case 5:
        case 6:
        {
            void* eax_2 = data_413a70;
            if (eax_2 == 0xf)
            {
                sub_403220(data_4133f4, 0x3fb);
                eax_2 = data_413a70;
            }
            *(eax_2 + 0x413a61) = 1;
            data_413a70 = (eax_2 + 1);
            if ((eax_2 != 0xffffffff && (*(eax_2 + 0x413a60) & 2) == 0))
            {
                *(eax_2 + 0x413a61) = 5;
                return sub_405710();
            }
            if (sub_409e80(arg1, ebx) == 0)
            {
                return sub_405710();
            }
            void* eax_8 = data_413a70;
            *(eax_8 + 0x413a60) = (*(eax_8 + 0x413a60) | 2);
            return eax_8;
            break;
        }
        case 1:
        {
            void* eax_10 = data_413a70;
            if ((eax_10 < 0 || (eax_10 >= 0 && (*(eax_10 + 0x413a60) & 9) == 0)))
            {
                sub_403220(data_4133f4, 0x3fd);
                eax_10 = data_413a70;
            }
            eax_1 = (eax_10 + 0x413a60);
            ecx = (*eax_1 & 0xfe);
            *eax_1 = ecx;
            ecx = (ecx & 0xf7);
            *eax_1 = ecx;
            if ((ecx & 4) != 0)
            {
                return sub_405710();
            }
            if ((ecx & 2) == 0)
            {
                ecx = (ecx | 2);
            }
            else
            {
                ecx = (ecx & 0xfd);
            }
            *eax_1 = ecx;
            if ((*eax_1 & 2) == 0)
            {
                return sub_405710();
            }
            break;
        }
        case 2:
        case 3:
        case 4:
        {
            void* eax_14 = data_413a70;
            if ((eax_14 < 0 || (eax_14 >= 0 && (*(eax_14 + 0x413a60) & 9) == 0)))
            {
                sub_403220(data_4133f4, 0x3fd);
                eax_14 = data_413a70;
            }
            ecx = (*(eax_14 + 0x413a60) & 0xfe);
            *(eax_14 + 0x413a60) = ecx;
            ecx = (ecx | 8);
            *(eax_14 + 0x413a60) = ecx;
            if ((ecx & 4) != 0)
            {
                return sub_405710();
            }
            if ((ecx & 2) != 0)
            {
                ecx = (ecx | 4);
                *(eax_14 + 0x413a60) = ecx;
                *(eax_14 + 0x413a60) = (ecx & 0xfd);
                return sub_405710();
            }
            if (sub_409e80(arg1, ebx) == 0)
            {
                return sub_405710();
            }
            void* eax_21 = data_413a70;
            *(eax_21 + 0x413a60) = (*(eax_21 + 0x413a60) | 2);
            return eax_21;
            break;
        }
        case 7:
        {
            int32_t eax_23 = data_413a70;
            if (eax_23 < 0)
            {
                sub_403220(data_4133f4, 0x3fd);
                eax_23 = data_413a70;
            }
            eax_1 = (eax_23 - 1);
            data_413a70 = eax_1;
            if (((eax_23 - 1) >= 0 && (eax_1[0x413a60] & 2) == 0))
            {
                eax_1 = sub_405710();
            }
            break;
        }
    }
    return eax_1;
}

int32_t sub_405710()
{
    int32_t ecx = data_4133d8;
    int32_t i;
    while (true)
    {
        i = sub_404cf0(ecx);
        int32_t edx_1 = data_4133d8;
        if (i != 0x21)
        {
            while (i != 0xffffffff)
            {
                data_4133f4 = (data_4133f4 + 1);
                while (true)
                {
                    if (i == 0x5c)
                    {
                        i = sub_4069d0(i, 1);
                        edx_1 = data_4133d8;
                        if ((i == 0x21 && data_4133f0 != 0))
                        {
                            break;
                        }
                        data_4133f0 = 0;
                    }
                    if (i == 0x23)
                    {
                        break;
                    }
                    if (i == 0xa)
                    {
                        break;
                    }
                    if (i == 0xffffffff)
                    {
                        break;
                    }
                    i = sub_404cf0(edx_1);
                    edx_1 = data_4133d8;
                }
                if ((i == 0x23 || i == 0x23))
                {
                    i = sub_404cf0(edx_1);
                    edx_1 = data_4133d8;
                    if (i != 0xa)
                    {
                        while (i != 0xffffffff)
                        {
                            i = sub_404cf0(edx_1);
                            edx_1 = data_4133d8;
                            if (i == 0xa)
                            {
                                break;
                            }
                        }
                        if (i == 0xffffffff)
                        {
                            break;
                        }
                    }
                }
                if (i == 0xffffffff)
                {
                    break;
                }
                if (i == 0x21)
                {
                    break;
                }
                i = sub_404cf0(edx_1);
                edx_1 = data_4133d8;
                if (i == 0x21)
                {
                    break;
                }
            }
        }
        if ((i == 0x21 || i == 0xffffffff))
        {
            if (i == 0xffffffff)
            {
                i = sub_403220(data_4133f4, 0x3fc);
            }
            break;
        }
        if ((i == 0x21 || (i != 0x21 && i != 0xffffffff)))
        {
            if ((data_413a78 != 0 && data_413a78 != data_413a74))
            {
                free(data_413a78);
            }
            char* eax_3 = sub_404f80();
            data_413a78 = eax_3;
            char var_1;
            sub_4050b0(eax_3, &var_1);
            i = data_4133f4;
            ecx = data_4133d8;
            if (var_1 <= 8)
            {
                break;
            }
            data_4133f4 = (i + 1);
        }
    }
    return i;
}

int32_t __stdcall sub_405860(int32_t arg1, int32_t arg2, int32_t arg3)
{
    sub_40ceb4(((data_413ee0 + 3) & 0xfffffffc));
    int32_t __saved_esi;
    void var_8;
    int32_t eax_5 = sub_405930(getenv(arg1, arg2, &__saved_esi, &var_8));
    if (eax_5 == 0)
    {
        return 0;
    }
    int32_t eax_7 = sub_40ca80(eax_5, &data_413014);
    data_4133d8 = eax_7;
    if (eax_7 == 0)
    {
        int32_t var_10_1 = eax_5;
        sub_403220(0, 0x41d);
    }
    free(eax_5);
    if (sub_405a20(arg3) != 0)
    {
        return 1;
    }
    if (fclose(data_4133d8) == 0xffffffff)
    {
        int32_t var_10_5 = eax_5;
        sub_403220(0, 0x424);
    }
    return 0;
}

int32_t __stdcall sub_405930(char* arg1, int32_t arg2, int32_t* arg3)
{
    if (sub_40cd20(arg2, &arg_c, arg3) != 0)
    {
        return sub_40add0(arg2);
    }
    char* ebx = arg1;
    if (ebx == 0)
    {
        return 0;
    }
    while (true)
    {
        char* ebp_1 = &data_413aa0;
        int32_t eax;
        while (true)
        {
            eax = *ebx;
            if (eax != 0)
            {
                ebx = &ebx[1];
                *ebp_1 = eax;
                if (eax != 0x3b)
                {
                    ebp_1 = &ebp_1[1];
                    continue;
                }
            }
            if (ebp_1 != 0x413aa0)
            {
                eax = ebp_1[0xffffffff];
                break;
            }
            if (*ebx == 0)
            {
                return 0;
            }
        }
        if ((eax != 0x5c && eax != 0x2f))
        {
            *ebp_1 = 0x5c;
            ebp_1 = &ebp_1[1];
        }
        *ebp_1 = 0;
        if (_mbspbrk(0x413aa0, &data_413000) == 0)
        {
            int32_t edi_1 = arg2;
            int32_t i = 0xffffffff;
            while (i != 0)
            {
                bool cond:0_1 = 0 != *edi_1;
                edi_1 = (edi_1 + 1);
                i = (i - 1);
                if ((!cond:0_1))
                {
                    break;
                }
            }
            int32_t ecx_1 = (!i);
            __builtin_memcpy(ebp_1, (edi_1 - ecx_1), ((ecx_1 >> 2) << 2));
            int32_t esi_2;
            int32_t edi_4;
            __builtin_memcpy(edi_4, esi_2, (ecx_1 & 3));
            if (sub_40cd20(0x413aa0, &arg_c, arg3) != 0)
            {
                break;
            }
        }
    }
    return sub_40add0(0x413aa0);
}

int32_t __stdcall sub_405a20(int32_t arg1)
{
    data_4133f4 = 0;
    if (fgets(0x413aa0, 0x400, data_4133d8) != 0)
    {
        int32_t i;
        do
        {
            if (data_413aa0 == 0x5b)
            {
                int32_t j = 0;
                int32_t edx_1 = _mbstok(0x413aa1, &data_413018);
                if (edx_1 != 0)
                {
                    while (j == 0)
                    {
                        int32_t edi_1 = edx_1;
                        int32_t k = 0xffffffff;
                        while (k != 0)
                        {
                            bool cond:0_1 = 0 != *edi_1;
                            edi_1 = (edi_1 + 1);
                            k = (k - 1);
                            if ((!cond:0_1))
                            {
                                break;
                            }
                        }
                        if (*(((!k) + edx_1) - 2) == 0x5d)
                        {
                            j = 1;
                            *(((!k) + edx_1) - 2) = 0;
                        }
                        if (_mbsicmp(edx_1, arg1) == 0)
                        {
                            return 1;
                        }
                        edx_1 = _mbstok(0, &data_413018);
                        if (edx_1 == 0)
                        {
                            break;
                        }
                    }
                }
            }
            int32_t eax_6 = data_4133d8;
            data_4133f4 = (data_4133f4 + 1);
            i = fgets(0x413aa0, 0x400, eax_6);
        } while (i != 0);
    }
    if ((*(data_4133d8 + 0xc) & 0x10) == 0)
    {
        data_413424 = data_4133f4;
        sub_403220(0, 0x41d);
    }
    return 0;
}

int32_t __stdcall sub_405b20(int32_t arg1, int32_t arg2, int32_t arg3, char* arg4)
{
    void var_104;
    _makepath(&var_104, 0, 0, arg1, arg2);
    _searchenv(&var_104, arg3, arg4);
    if ((*arg4 != 0 && _mbspbrk(arg1, &data_413f8c) != 0))
    {
        void* edi_1 = &var_104;
        int32_t i = 0xffffffff;
        while (i != 0)
        {
            bool cond:0_1 = 0 != *edi_1;
            edi_1 = (edi_1 + 1);
            i = (i - 1);
            if ((!cond:0_1))
            {
                break;
            }
        }
        int32_t ecx_1 = (!i);
        __builtin_memcpy(arg4, (edi_1 - ecx_1), ((ecx_1 >> 2) << 2));
        int32_t esi_2;
        int32_t edi_4;
        __builtin_memcpy(edi_4, esi_2, (ecx_1 & 3));
    }
    return _mbsrchr(arg4, 0x2e);
}

int32_t __stdcall sub_405bc0(int32_t arg1, char* arg2)
{
    int32_t eax = sub_405b20(arg1, ".com", "PATH", arg2);
    if (eax == 0)
    {
        eax = sub_405b20(arg1, ".exe", "PATH", arg2);
        if (eax == 0)
        {
            int32_t eax_1 = sub_405b20(arg1, ".bat", "PATH", arg2);
            eax = ((0 - 1) & eax_1);
        }
    }
    return eax;
}

void* __stdcall sub_405c20(void* arg1, int32_t* arg2, int32_t* arg3)
{
    int16_t var_400 = data_413fac;
    int32_t esi = 0;
    int32_t var_404 = 0;
    char var_3fe = data_413fae;
    if (sub_406490(&var_3fe, 0x3fe) == 0)
    {
        if ((*(data_4133d8 + 0xc) & 0x10) != 0)
        {
            void* var_41c_1 = &data_413fa8;
            sub_403220(data_4133f4, 0x409);
        }
        sub_403220(data_4133f4, 0x41d);
    }
    sub_405ef0(&var_400);
    void* ebx;
    if (data_413404 == 0)
    {
        ebx = arg1;
    }
    else
    {
        void* edi_1 = var_400;
        ebx = arg1;
        while (true)
        {
            int16_t* var_408_1 = &var_400;
            do
            {
                int16_t* eax_5 = var_408_1;
                ebx = (ebx + 1);
                var_408_1 = (var_408_1 + 1);
                eax_5 = *eax_5;
                *(ebx - 1) = eax_5;
                if (*arg3 == ebx)
                {
                    if (esi == 0)
                    {
                        edi_1 = 0x800;
                        int32_t eax_6 = sub_40acf0(0x800);
                        ebx = (eax_6 + 0x400);
                        esi = eax_6;
                        _mbsnbcpy(esi, *arg2, 0x400);
                        *arg3 = (esi + 0x800);
                    }
                    else
                    {
                        void* ebp_1 = (edi_1 + 0x400);
                        if (edi_1 <= ebp_1)
                        {
                            esi = realloc(esi, ebp_1);
                        }
                        if ((edi_1 > ebp_1 || (edi_1 <= ebp_1 && esi == 0)))
                        {
                            sub_403220(data_4133f4, 0x419);
                        }
                        ebx = (edi_1 + esi);
                        edi_1 = ebp_1;
                        *arg3 = (ebp_1 + esi);
                    }
                    *arg2 = esi;
                }
            } while (*var_408_1 != 0);
            if ((var_404 != 0 && (var_400 == 0x3c && *var_400[1] == 0x3c)))
            {
                if ((**&data_413404 != 0 && sub_406490(&var_400, 0x400) == 0))
                {
                    if ((*(data_4133d8 + 0xc) & 0x10) != 0)
                    {
                        void* var_41c_5 = &data_413fa8;
                        sub_403220(data_4133f4, 0x409);
                    }
                    sub_403220(data_4133f4, 0x41d);
                }
                int32_t ecx_5 = **&data_413404;
                data_413404 = ecx_5;
                if (ecx_5 == 0)
                {
                    break;
                }
                continue;
            }
            var_404 = 1;
            if (sub_406490(&var_400, 0x400) == 0)
            {
                if ((*(data_4133d8 + 0xc) & 0x10) != 0)
                {
                    void* var_41c_4 = &data_413fa8;
                    sub_403220(data_4133f4, 0x409);
                }
                sub_403220(data_4133f4, 0x41d);
            }
        }
    }
    *ebx = 0;
    return ebx;
}

int32_t __stdcall sub_405e60(int32_t arg1)
{
    int32_t esi = arg1;
    int32_t eax_1;
    while (true)
    {
        eax_1 = _mbschr(esi, 0xa);
        if (eax_1 == 0)
        {
            break;
        }
        if (*(eax_1 - 1) != 0x5e)
        {
            break;
        }
        esi = (eax_1 + 1);
        if (fgets(esi, ((arg1 - esi) + 0x400), data_4133d8) == 0)
        {
            if ((*(data_4133d8 + 0xc) & 0x10) != 0)
            {
                void* var_14_2 = &data_413fa8;
                sub_403220(data_4133f4, 0x409);
            }
            sub_403220(data_4133f4, 0x41d);
        }
        data_4133f4 = (data_4133f4 + 1);
    }
    return eax_1;
}

int32_t __stdcall sub_405ef0(int32_t arg1)
{
    sub_405e60(arg1);
    int32_t i_1 = sub_405f60(&arg1);
    int32_t i = i_1;
    if (i != 0)
    {
        do
        {
            int32_t eax = sub_40acf0(0xc);
            *(eax + 4) = sub_40add0(i);
            sub_405f40(&data_413404, eax);
            i_1 = sub_405f60(&arg1);
            i = i_1;
        } while (i != 0);
    }
    return i_1;
}

int32_t* __stdcall sub_405f40(int32_t* arg1, int32_t arg2)
{
    int32_t* eax = arg1;
    if (*eax != 0)
    {
        do
        {
            eax = *eax;
        } while (*eax != 0);
    }
    *eax = arg2;
    return eax;
}

int32_t __stdcall sub_405f60(int32_t* arg1)
{
    char* edi = &data_410f40;
    char* eax = *arg1;
    int32_t i = 0;
    do
    {
        int32_t eax_1 = _mbschr(eax, 0x3c);
        if (eax_1 == 0)
        {
            return 0;
        }
        eax = (eax_1 + 1);
        if (*eax == 0x3c)
        {
            i = 1;
        }
    } while (i == 0);
    void* eax_2 = &eax[1];
    if (*eax_2 != 0)
    {
        do
        {
            char edx_1 = *eax_2;
            void* ecx_1;
            switch (edx_1)
            {
                case 9:
                {
                    break;
                    break;
                }
                case 0xa:
                {
                    break;
                    break;
                }
                case 0x20:
                {
                    break;
                    break;
                }
                case 0x24:
                {
                    ecx_1 = (eax_2 + 1);
                    if (*ecx_1 == 0x28)
                    {
                        *edi = 0x24;
                        edi = &edi[1];
                        eax_2 = ecx_1;
                        *edi = 0x28;
                        if (*ecx_1 != 0xa)
                        {
                            do
                            {
                                ecx_1 = *eax_2;
                                if (ecx_1 == 0x29)
                                {
                                    break;
                                }
                                eax_2 = (eax_2 + 1);
                                *edi = ecx_1;
                                edi = &edi[1];
                            } while (*eax_2 != 0xa);
                        }
                        if (*eax_2 == 0xa)
                        {
                            break;
                        }
                    }
                    break;
                }
                case 0x2c:
                {
                    break;
                    break;
                }
                case 0x3c:
                {
                    break;
                    break;
                }
                case 0x3e:
                {
                    break;
                    break;
                }
                case 0x5e:
                {
                    break;
                    break;
                }
            }
            if ((edx_1 != 0x24 || (edx_1 == 0x24 && *ecx_1 != 0x28)))
            {
                *edi = edx_1;
                edi = &edi[1];
                eax_2 = (eax_2 + 1);
            }
        } while (*eax_2 != 0);
    }
    *edi = 0;
    *arg1 = eax_2;
    return 0x410f40;
}

int32_t __stdcall sub_406020(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    int32_t eax = _mbschr(arg1, 0xa);
    int32_t eax_27;
    if (eax == 0)
    {
        *arg2 = sub_40add0(arg1);
        eax_27 = 0;
    }
    else
    {
        *eax = 0;
        int32_t var_12c = arg3;
        *arg2 = sub_40b700(arg1);
        int32_t* var_10c_1 = (eax + 1);
        *eax = 0xa;
        if (*arg2 == arg1)
        {
            *arg2 = sub_40add0(arg1);
        }
        int32_t var_12c_2 = arg3;
        int32_t var_110 = *arg2;
        int32_t eax_5 = sub_40b700(var_10c_1);
        int32_t var_118 = eax_5;
        while (true)
        {
            int32_t eax_6 = sub_405f60(&var_110);
            if (eax_6 == 0)
            {
                break;
            }
            int32_t var_114_1 = 0;
            int32_t eax_7 = sub_40add0(eax_6);
            int32_t ebp_1 = eax_7;
            int32_t ebx_1;
            if (*eax_7 != 0)
            {
                ebx_1 = sub_40ca80(ebp_1, &data_41338c);
                if (ebx_1 != 0)
                {
                    sub_406430(*arg2);
                }
                else
                {
                    int32_t var_12c_10 = ebp_1;
                    sub_403220(data_4133f4, 0x41e);
                }
            }
            else
            {
                int32_t eax_8 = getenv(&data_413fc0);
                char var_104;
                if ((eax_8 == 0 || (eax_8 != 0 && *eax_8 == 0)))
                {
                    var_104 = 0;
                }
                if ((eax_8 != 0 && *eax_8 != 0))
                {
                    _mbsnbcpy(&var_104, eax_8, 0x101);
                }
                ebx_1 = sub_407450(&var_104);
                if (ebx_1 == 0)
                {
                    char* var_12c_6 = &var_104;
                    sub_403220(data_4133f4, 0x41e);
                }
                sub_4062a0(arg2, &var_104);
                free(ebp_1);
                ebp_1 = sub_40add0(&var_104);
            }
            var_110 = *arg2;
            sub_4063b0(ebx_1, &var_118);
            int32_t eax_15 = _mbschr(var_118, 0xa);
            int32_t edi_3;
            if (eax_15 != 0)
            {
                edi_3 = (eax_15 - var_118);
            }
            else
            {
                int32_t edi_4 = var_118;
                int32_t i = 0xffffffff;
                while (i != 0)
                {
                    bool cond:1_1 = 0 != *edi_4;
                    edi_4 = (edi_4 + 1);
                    i = (i - 1);
                    if ((!cond:1_1))
                    {
                        break;
                    }
                }
                edi_3 = ((!i) - 1);
            }
            int32_t eax_17;
            if (edi_3 > 3)
            {
                eax_17 = _mbsnbicmp(var_118, "keep", 4);
                if (eax_17 == 0)
                {
                    var_118 = (var_118 + 4);
                    var_114_1 = 1;
                }
            }
            if ((edi_3 <= 3 || (edi_3 > 3 && eax_17 != 0)))
            {
                int32_t eax_19;
                if (edi_3 > 5)
                {
                    eax_19 = _mbsnbicmp(var_118, "nokeep", 6);
                    if (eax_19 == 0)
                    {
                        var_118 = (var_118 + 6);
                    }
                }
                if (((edi_3 <= 5 || (edi_3 > 5 && eax_19 != 0)) && edi_3 != 0))
                {
                    sub_403220(data_4133f4, 0x446);
                }
            }
            if (*var_118 == 0xa)
            {
                var_118 = (var_118 + 1);
            }
            fclose(ebx_1);
            if (var_114_1 == 0)
            {
                int32_t* eax_22 = sub_40ad20();
                eax_22[1] = sub_40add0(ebp_1);
                sub_40ae30(&data_4133bc, eax_22);
            }
            free(ebp_1);
        }
        if (eax_5 != var_10c_1)
        {
            free(eax_5);
        }
        eax_27 = 1;
    }
    return eax_27;
}

int32_t __stdcall sub_4062a0(int32_t* arg1, int32_t arg2)
{
    int32_t i = 0xffffffff;
    int32_t edi = *arg1;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = (edi + 1);
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    int32_t edi_1 = arg2;
    int32_t i_1 = 0xffffffff;
    while (i_1 != 0)
    {
        bool cond:1_1 = 0 != *edi_1;
        edi_1 = (edi_1 + 1);
        i_1 = (i_1 - 1);
        if ((!cond:1_1))
        {
            break;
        }
    }
    sub_40ceb4(((((!i_1) + ((!i) - 1)) + 1) & 0xfffffffc));
    int32_t __saved_edi;
    int32_t* var_8 = &__saved_edi;
    char* edx_1 = *arg1;
    int32_t* esi = var_8;
    while (true)
    {
        char eax_3 = *edx_1;
        if (eax_3 != 0x3c)
        {
            *esi = eax_3;
            edx_1 = &edx_1[1];
            esi = (esi + 1);
        }
        else
        {
            if (edx_1[1] == 0x3c)
            {
                break;
            }
            *esi = 0x3c;
            edx_1 = &edx_1[1];
            esi = (esi + 1);
        }
    }
    int32_t edi_2 = arg2;
    int32_t i_2 = 0xffffffff;
    *esi = 0;
    while (i_2 != 0)
    {
        bool cond:2_1 = 0 != *edi_2;
        edi_2 = (edi_2 + 1);
        i_2 = (i_2 - 1);
        if ((!cond:2_1))
        {
            break;
        }
    }
    int32_t ecx_2 = (!i_2);
    int32_t i_3 = 0xffffffff;
    int32_t* edi_4 = var_8;
    while (i_3 != 0)
    {
        bool cond:3_1 = 0 != *edi_4;
        edi_4 = (edi_4 + 1);
        i_3 = (i_3 - 1);
        if ((!cond:3_1))
        {
            break;
        }
    }
    __builtin_memcpy((edi_4 - 1), (edi_2 - ecx_2), ((ecx_2 >> 2) << 2));
    int32_t esi_2;
    int32_t edi_6;
    __builtin_memcpy(edi_6, esi_2, (ecx_2 & 3));
    void* edi_7 = &edx_1[2];
    int32_t i_4 = 0xffffffff;
    while (i_4 != 0)
    {
        bool cond:4_1 = 0 != *edi_7;
        edi_7 = (edi_7 + 1);
        i_4 = (i_4 - 1);
        if ((!cond:4_1))
        {
            break;
        }
    }
    int32_t ecx_7 = (!i_4);
    int32_t i_5 = 0xffffffff;
    int32_t* edi_9 = var_8;
    while (i_5 != 0)
    {
        bool cond:5_1 = 0 != *edi_9;
        edi_9 = (edi_9 + 1);
        i_5 = (i_5 - 1);
        if ((!cond:5_1))
        {
            break;
        }
    }
    __builtin_memcpy((edi_9 - 1), (edi_7 - ecx_7), ((ecx_7 >> 2) << 2));
    int32_t esi_4;
    int32_t edi_11;
    __builtin_memcpy(edi_11, esi_4, (ecx_7 & 3));
    int32_t* edi_12 = var_8;
    int32_t i_6 = 0xffffffff;
    while (i_6 != 0)
    {
        bool cond:6_1 = 0 != *edi_12;
        edi_12 = (edi_12 + 1);
        i_6 = (i_6 - 1);
        if ((!cond:6_1))
        {
            break;
        }
    }
    int32_t eax_5 = realloc(*arg1, (!i_6));
    int32_t* edi_13 = var_8;
    *arg1 = eax_5;
    int32_t i_7 = 0xffffffff;
    while (i_7 != 0)
    {
        bool cond:7_1 = 0 != *edi_13;
        edi_13 = (edi_13 + 1);
        i_7 = (i_7 - 1);
        if ((!cond:7_1))
        {
            break;
        }
    }
    int32_t ecx_13 = (!i_7);
    __builtin_memcpy(*arg1, (edi_13 - ecx_13), ((ecx_13 >> 2) << 2));
    int32_t esi_6;
    int32_t edi_16;
    __builtin_memcpy(edi_16, esi_6, (ecx_13 & 3));
    return eax_5;
}

int32_t __stdcall sub_4063b0(int32_t arg1, int32_t* arg2)
{
    int32_t eax_4;
    while (true)
    {
        int32_t eax_2 = _mbschr(*arg2, 0xa);
        if (eax_2 != 0)
        {
            eax_4 = _mbsnbcmp(*arg2, &data_413fac, 2);
            if (eax_4 == 0)
            {
                *arg2 = (*arg2 + 2);
                if (eax_2 != 0)
                {
                    break;
                }
            }
            else
            {
                void* ebp_1 = *arg2;
                if (ebp_1 <= eax_2)
                {
                    do
                    {
                        ebp_1 = (ebp_1 + 1);
                        fputc(*(ebp_1 - 1), arg1);
                    } while (ebp_1 <= eax_2);
                }
                *arg2 = ebp_1;
                continue;
            }
        }
        eax_4 = _mbsnbcmp(*arg2, &data_413fac, 2);
        if (eax_4 == 0)
        {
            *arg2 = (*arg2 + 2);
        }
        break;
    }
    return eax_4;
}

int32_t __stdcall sub_406430(int32_t arg1)
{
    int32_t eax = _mbschr(arg1, 0x3c);
    int32_t edx = eax;
    if (*(eax + 1) != 0x3c)
    {
        int32_t eax_1;
        do
        {
            eax_1 = _mbschr((edx + 1), 0x3c);
            edx = eax_1;
        } while (*(eax_1 + 1) != 0x3c);
    }
    int32_t edi = (edx + 2);
    int32_t i = 0xffffffff;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = (edi + 1);
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    int32_t ecx = (!i);
    __builtin_memcpy(edx, (edi - ecx), ((ecx >> 2) << 2));
    int32_t esi_1;
    int32_t edi_3;
    __builtin_memcpy(edi_3, esi_1, (ecx & 3));
    return ecx;
}

int32_t __stdcall sub_406490(char* arg1, void* arg2)
{
    char* edi = arg1;
    void* esi_1 = (arg2 + edi);
    while (true)
    {
        int32_t eax_3 = sub_404de0();
        if (eax_3 != 0)
        {
            if (eax_3 == 0xffffffff)
            {
                eax_3 = 0;
                *edi = 0;
            }
            else
            {
                *edi = eax_3;
                edi = &edi[1];
                if (esi_1 == edi)
                {
                    edi[0xffffffff] = 0;
                    sub_404d70(eax_3, data_4133d8);
                    return edi;
                }
                if (eax_3 == 0xa)
                {
                    break;
                }
                data_4133f0 = 0;
                continue;
            }
        }
        return eax_3;
    }
    data_4133f4 = (data_4133f4 + 1);
    data_4133f0 = 1;
    *edi = 0;
    return edi;
}

int32_t __stdcall sub_406500(int32_t arg1, char arg2)
{
    if (data_4133c8 == 0)
    {
        int32_t ebx;
        ebx = arg2;
        if ((ebx != 0x18 && ebx != 0x19))
        {
            int32_t eax_3 = sub_406880(0);
            data_413aa0 = eax_3;
            data_413aa1 = 0;
            return sub_4065d0(eax_3, &data_413aa1, (arg1 + 0x413aa0));
        }
        int32_t var_c_3 = (arg1 + 0x413aa0);
        sub_406a80(ebx, &data_413aa0);
        int32_t eax_5;
        eax_5 = ebx;
        return eax_5;
    }
    data_4133c8 = 0;
    data_4133f4 = (data_4133f4 + 1);
    int32_t eax = sub_404de0();
    if (eax != 0x20)
    {
        data_4133f0 = 1;
    }
    if ((eax == 0x20 || eax == 9))
    {
        data_4133f0 = 0;
    }
    if (data_4133f0 == 0)
    {
        eax = 0x12;
        return eax;
    }
    if (eax != 0xffffffff)
    {
        sub_404d70(eax, data_4133d8);
        int32_t eax_2;
        eax_2 = 0x11;
        return eax_2;
    }
    return sub_4065d0(eax, &data_413aa0, (arg1 + 0x413aa0));
}

int32_t __stdcall sub_4065d0(int32_t arg1, char* arg2, int32_t arg3)
{
    int32_t eax = arg1;
    char* esi_2;
    while (true)
    {
        if ((eax + 1) <= 0x5f)
        {
            int32_t edx_1;
            edx_1 = *(eax + 0x40681d);
            switch (edx_1)
            {
                case 0:
                {
                    if ((*(data_4133d8 + 0xc) & 0x10) == 0)
                    {
                        sub_403220(data_4133f4, 0x40e);
                    }
                    if (data_413400 != 0)
                    {
                        sub_407550();
                    }
                    else
                    {
                        if (data_413a70 < 0)
                        {
                            uint32_t eax_1;
                            eax_1 = 0x17;
                            return eax_1;
                        }
                        sub_403220(data_4133f4, 0x3fc);
                    }
                    break;
                }
                case 2:
                {
                    data_4133f0 = 0;
                    int32_t eax_4 = sub_404de0();
                    if (eax_4 != 0x3a)
                    {
                        sub_404d70(eax_4, data_4133d8);
                        int32_t eax_5;
                        eax_5 = 0x14;
                        return eax_5;
                    }
                    *arg2 = eax_4;
                    eax_4 = 0x15;
                    arg2[1] = 0;
                    return eax_4;
                    break;
                }
                case 3:
                {
                    eax = 0x13;
                    data_4133f0 = 0;
                    return eax;
                    break;
                }
                case 4:
                {
                    eax = 0x16;
                    data_4133f0 = 0;
                    return eax;
                    break;
                }
                case 5:
                {
                    if ((data_413408 != 0 && data_4133f0 != 0))
                    {
                        eax = 0x17;
                        return eax;
                    }
                    break;
                }
            }
            if ((edx_1 == 0 || edx_1 == 1))
            {
                data_4133f4 = (data_4133f4 + 1);
                data_4133f0 = 1;
                eax = sub_404de0();
                if (((eax == 0x3b && data_413408 != 0) || ((eax != 0x3b || (eax == 0x3b && data_413408 == 0)) && eax == 0x23)))
                {
                    sub_406940(0);
                    data_4133f4 = (data_4133f4 + 1);
                    data_4133f0 = 1;
                    eax = sub_404de0();
                }
                if (eax != 0x20)
                {
                    data_4133f0 = 1;
                }
                if ((eax == 0x20 || eax == 9))
                {
                    data_4133f0 = 0;
                }
                if (data_4133f0 == 0)
                {
                    eax = 0x12;
                    return eax;
                }
                if (eax != 0xffffffff)
                {
                    sub_404d70(eax, data_4133d8);
                    int32_t eax_6;
                    eax_6 = 0x11;
                    return eax_6;
                }
                continue;
            }
            else if ((edx_1 == 5 || edx_1 == 6))
            {
                sub_404d70(eax, data_4133d8);
                esi_2 = (arg2 - 1);
                break;
            }
        }
        esi_2 = arg2;
        break;
    }
    sub_407070(esi_2, arg3);
    if ((data_4133f0 != 0 && _mbsicmp(0x413aa0, "include") == 0))
    {
        data_4133f0 = 0;
        int32_t eax_9 = sub_406880(0);
        if ((eax_9 != 0x3a && eax_9 != 0x3d))
        {
            if (data_413408 != 0)
            {
                char* var_10_5 = esi_2;
                sub_403220(data_4133f4, 0x409);
            }
            return sub_4075c0(eax_9);
        }
        sub_404d70(eax_9, data_4133d8);
        int32_t eax_13;
        eax_13 = 0x10;
        return eax_13;
    }
    char* eax_8;
    eax_8 = 0x10;
    data_4133f0 = 0;
    return eax_8;
}

int32_t __stdcall sub_406880(char arg1)
{
    int32_t ebx;
    ebx = arg1;
    int32_t eax_1;
    while (true)
    {
        if (ebx == 0)
        {
            eax_1 = sub_404de0();
        }
        else
        {
            eax_1 = sub_404cf0(data_4133d8);
        }
        if (((eax_1 == 0x20 || eax_1 == 9) || eax_1 == 0x5e))
        {
            if (eax_1 == 0x5e)
            {
                if (ebx == 0)
                {
                    eax_1 = sub_404de0();
                }
                else
                {
                    eax_1 = sub_404cf0(data_4133d8);
                }
                if ((eax_1 != 0x20 && eax_1 != 9))
                {
                    sub_404d70(eax_1, data_4133d8);
                    eax_1 = 0x5e;
                    break;
                }
            }
            data_4133f0 = 0;
        }
        if (eax_1 == 0x5c)
        {
            eax_1 = sub_4069d0(eax_1, ebx);
        }
        if (eax_1 == 0x20)
        {
            continue;
        }
        if ((eax_1 != 0x20 && eax_1 != 9))
        {
            break;
        }
        if (eax_1 != 9)
        {
            /* nop */
        }
    }
    if ((eax_1 == 0x3b && (data_4133f0 != 0 && data_413408 != 0)))
    {
        goto label_406922;
    }
    if (eax_1 != 0x23)
    {
        goto label_406937;
    }
label_406922:
    sub_406940(ebx);
    data_4133f0 = 1;
    eax_1 = 0xa;
label_406937:
    return eax_1;
}

int32_t __stdcall sub_406940(char arg1)
{
    int32_t edx = data_4133d8;
    int32_t ebx;
    ebx = arg1;
    while (true)
    {
        data_4133f0 = 0;
        while (true)
        {
            int32_t eax_1;
            if (ebx == 0)
            {
                eax_1 = sub_404de0();
            }
            else
            {
                eax_1 = sub_404cf0(edx);
            }
            edx = data_4133d8;
            if (eax_1 != 0xffffffff)
            {
                if (eax_1 != 0xa)
                {
                    continue;
                }
                else if (eax_1 != 0xffffffff)
                {
                    data_4133f0 = 1;
                    int32_t eax_2;
                    if (ebx == 0)
                    {
                        eax_2 = sub_404de0();
                    }
                    else
                    {
                        eax_2 = sub_404cf0(edx);
                    }
                    edx = data_4133d8;
                    if ((eax_2 == 0x3b && data_413408 != 0))
                    {
                        break;
                    }
                    if (eax_2 == 0x23)
                    {
                        break;
                    }
                    eax_1 = sub_404d70(eax_2, edx);
                }
            }
            return eax_1;
        }
        data_4133f4 = (data_4133f4 + 1);
    }
}

int32_t __stdcall sub_4069d0(int32_t arg1, char arg2)
{
    int32_t eax_4 = arg1;
    if (eax_4 == 0x5c)
    {
        int32_t ebx;
        ebx = arg2;
        while (true)
        {
            int32_t eax_1;
            if (ebx == 0)
            {
                eax_1 = sub_404de0();
            }
            else
            {
                eax_1 = sub_404cf0(data_4133d8);
            }
            int32_t ecx_1 = data_4133d8;
            if (eax_1 != 0xa)
            {
                sub_404d70(eax_1, ecx_1);
                eax_4 = 0x5c;
                break;
            }
            data_4133f0 = 1;
            data_4133f4 = (data_4133f4 + 1);
            int32_t eax_2;
            if (ebx == 0)
            {
                eax_2 = sub_404de0();
            }
            else
            {
                eax_2 = sub_404cf0(ecx_1);
            }
            if (((eax_2 == 0x3b && data_413408 != 0) || ((eax_2 != 0x3b || (eax_2 == 0x3b && data_413408 == 0)) && eax_2 == 0x23)))
            {
                sub_406940(ebx);
                int32_t eax_3 = data_4133d8;
                data_4133f4 = (data_4133f4 + 1);
                if (ebx == 0)
                {
                    eax_2 = sub_404de0();
                }
                else
                {
                    eax_2 = sub_404cf0(eax_3);
                }
            }
            if (eax_2 != 0x5c)
            {
                return eax_2;
            }
        }
    }
    return eax_4;
}

int32_t __stdcall sub_406a80(char arg1, void* arg2)
{
    int32_t var_4 = 0;
    void* esi = arg2;
    int32_t var_8 = esi;
    int32_t eax = sub_404de0();
    int32_t var_c = eax;
    char var_d;
    if (arg1 == 0x18)
    {
        var_d = 2;
    }
    else
    {
        if (((var_c != 0x20 && var_c != 9) && var_c != 0x5e))
        {
            var_d = 1;
        }
        int32_t eax_1;
        if (var_c == 0x5e)
        {
            eax_1 = sub_404de0();
        }
        if ((((var_c == 0x20 || var_c == 9) || (var_c == 0x5e && eax_1 == 0x20)) || (var_c == 0x5e && eax_1 == 9)))
        {
            var_d = 2;
            eax = sub_406880(0);
            var_c = eax;
        }
        if (((var_c == 0x5e && eax_1 != 0x20) && eax_1 != 9))
        {
            eax = sub_404d70(eax_1, data_4133d8);
            var_c = 0x5e;
        }
    }
    int32_t ebx;
    ebx = var_4;
    int32_t edi = var_4;
    while (true)
    {
        if (var_c == 0x22)
        {
            var_4 = (-(eax - eax));
        }
        int32_t ebp_1 = 1;
        if (var_c == 0x5e)
        {
            if ((var_4 == 0 && arg1 == 0x19))
            {
                int32_t eax_3 = sub_404de0();
                var_c = eax_3;
                if ((eax_3 - 0xa) <= 0x73)
                {
                    int32_t ecx_2;
                    ecx_2 = *(eax_3 + 0x406f42);
                    if (((ecx_2 == 0 || ecx_2 == 2) || ecx_2 == 7))
                    {
                    label_406c14:
                        ebx = 0;
                        ebp_1 = 0;
                    }
                    if (ecx_2 == 0xb)
                    {
                        /* nop */
                    }
                    if ((((((((ecx_2 == 1 || ecx_2 == 3) || ecx_2 == 4) || ecx_2 == 5) || ecx_2 == 6) || ecx_2 == 8) || ecx_2 == 9) || ecx_2 == 0xa))
                    {
                        *esi = 0x5e;
                        esi = (esi + 1);
                        if (arg_c == esi)
                        {
                            int32_t eax_7;
                            if (data_4133fc == 0)
                            {
                                data_4133fc = sub_40acf0(0x800);
                                edi = 0x800;
                                _mbsnbcpy(data_4133fc, var_8, 0x400);
                                esi = (data_4133fc + 0x400);
                                eax_7 = (data_4133fc + 0x800);
                            }
                            else
                            {
                                int32_t eax_9;
                                if (edi <= (edi + 0x400))
                                {
                                    eax_9 = realloc(data_4133fc, (edi + 0x400));
                                    data_4133fc = eax_9;
                                }
                                if ((edi > (edi + 0x400) || (edi <= (edi + 0x400) && eax_9 == 0)))
                                {
                                    sub_403220(data_4133f4, 0x419);
                                }
                                esi = (data_4133fc + edi);
                                eax_7 = (data_4133fc + (edi + 0x400));
                                edi = (edi + 0x400);
                            }
                            arg_c = eax_7;
                            var_8 = data_4133fc;
                        }
                        goto label_406c14;
                    }
                }
            }
            if (((var_4 != 0 || (var_4 == 0 && arg1 != 0x19)) && var_c == 0x5e))
            {
                sub_404d70(sub_404de0(), data_4133d8);
                var_c = 0x5e;
            }
        }
        if (ebp_1 != 0)
        {
            int32_t ecx_5;
            if ((var_c + 1) <= 0x5d)
            {
                ecx_5 = *(var_c + 0x407011);
                switch (ecx_5)
                {
                    case 0:
                    case 2:
                    {
                        ebx = 6;
                        break;
                    }
                    case 1:
                    case 3:
                    {
                        ebx = 5;
                        break;
                    }
                    case 4:
                    {
                        ebx = 1;
                        break;
                    }
                    case 5:
                    {
                        ebx = 7;
                        break;
                    }
                    case 6:
                    {
                        ebx = 8;
                        break;
                    }
                    case 7:
                    {
                        ebx = 9;
                        break;
                    }
                    case 8:
                    {
                        ebx = 0xb;
                        break;
                    }
                    case 9:
                    {
                        ebx = 4;
                        break;
                    }
                    case 0xb:
                    case 0xd:
                    {
                        ebx = 0xc;
                        break;
                    }
                    case 0xc:
                    {
                        ebx = 2;
                        break;
                    }
                    case 0xe:
                    case 0xf:
                    case 0x10:
                    case 0x11:
                    {
                        ebx = 0xd;
                        break;
                    }
                    case 0x12:
                    {
                        ebx = 3;
                        break;
                    }
                }
                if (ecx_5 == 0xa)
                {
                    if ((var_d != 0 || (var_d == 0 && data_413408 == 0)))
                    {
                        ebx = 0;
                    }
                    if ((var_d == 0 && data_413408 != 0))
                    {
                        ebx = 1;
                    }
                }
            }
            if (((var_c + 1) > 0x5d || ((var_c + 1) <= 0x5d && ecx_5 == 0x13)))
            {
                ebx = 0;
                eax = var_c;
                eax = *(eax + 0x4149c0);
                eax = (eax & 1);
                ebx = (0 - 1);
                ebx = (ebx & 0xa);
            }
        }
        if ((ebx == 0xc && (arg1 == 0x18 && var_c == 0x3c)))
        {
            int32_t eax_14 = sub_404de0();
            if (eax_14 != 0x3c)
            {
                sub_404d70(eax_14, data_4133d8);
            }
            else
            {
                ebx = 6;
                var_c = 0xa;
                esi = sub_405c20(esi, &var_8, &arg_c);
            }
            goto label_406d38;
        }
        if (ebx != 1)
        {
        label_406d38:
            int32_t ecx_7;
            ecx_7 = var_d;
            eax = ebx;
            eax = *((eax + (ecx_7 * 0xe)) + 0x414648);
            var_d = eax;
        }
        else if (var_d == 0)
        {
            var_4 = 0;
            sub_406940(0);
            data_4133f4 = (data_4133f4 + 1);
        }
        else
        {
            if (arg1 != 0x19)
            {
                goto label_406d38;
            }
            var_d = 0x40;
        }
        if ((ebx != 1 || (ebx == 1 && var_d != 0)))
        {
            if (var_d == 0x40)
            {
                break;
            }
            if ((var_d & 0x20) != 0)
            {
                int32_t var_24_6 = var_c;
                int32_t eax_17;
                eax_17 = var_d;
                sub_403220(data_4133f4, ((eax_17 & 0xdf) + 0x3e8));
            }
            if (var_d != 0)
            {
                eax = var_c;
                *esi = eax;
                esi = (esi + 1);
                if (arg_c == esi)
                {
                    int32_t eax_24;
                    if (data_4133fc == 0)
                    {
                        data_4133fc = sub_40acf0(0x800);
                        edi = 0x800;
                        _mbsnbcpy(data_4133fc, var_8, 0x400);
                        esi = (data_4133fc + 0x400);
                        eax_24 = (data_4133fc + 0x800);
                    }
                    else
                    {
                        int32_t eax_26;
                        if (edi <= (edi + 0x400))
                        {
                            eax_26 = realloc(data_4133fc, (edi + 0x400));
                            data_4133fc = eax_26;
                        }
                        if ((edi > (edi + 0x400) || (edi <= (edi + 0x400) && eax_26 == 0)))
                        {
                            sub_403220(data_4133f4, 0x419);
                        }
                        esi = (data_4133fc + edi);
                        eax_24 = (data_4133fc + (edi + 0x400));
                        edi = (edi + 0x400);
                    }
                    arg_c = eax_24;
                }
            }
            else
            {
                *(esi - 1) = 0x20;
                data_4133f4 = (data_4133f4 + 1);
                data_4133f0 = 1;
                int32_t eax_20 = sub_404de0();
                data_4133f0 = 0;
                if ((eax_20 == 0x20 || eax_20 == 9))
                {
                    var_d = 2;
                    while (true)
                    {
                        eax_20 = sub_404de0();
                        if (eax_20 == 0x20)
                        {
                            continue;
                        }
                        if ((eax_20 != 0x20 && eax_20 != 9))
                        {
                            break;
                        }
                        if (eax_20 != 9)
                        {
                            /* nop */
                        }
                    }
                }
                sub_404d70(eax_20, data_4133d8);
            }
        }
        eax = sub_404de0();
        var_c = eax;
    }
    sub_404d70(var_c, data_4133d8);
    if (var_8 < esi)
    {
        void* edi_1;
        do
        {
            edi_1 = (esi - 1);
            if (_ismbcspace(*edi_1) == 0)
            {
                break;
            }
            esi = edi_1;
        } while (var_8 < edi_1);
    }
    *esi = 0;
    int32_t eax_33;
    if (data_4133fc == 0)
    {
        eax_33 = sub_40add0(var_8);
        data_4133fc = eax_33;
    }
    else
    {
        eax_33 = realloc(data_4133fc, ((esi - data_4133fc) + 1));
        if (eax_33 != 0)
        {
            data_4133fc = eax_33;
            return eax_33;
        }
    }
    return eax_33;
}

char* __stdcall sub_407070(char* arg1, int32_t arg2)
{
    int32_t var_10 = 0;
    int32_t var_8 = 0;
    char* esi = arg1;
    char* eax = &esi[0xffffffff];
    int32_t eax_1 = *eax;
    char var_11;
    if (eax_1 == 0x22)
    {
        var_8 = 1;
        var_11 = 0x10;
    }
    else if (eax_1 == 0x24)
    {
        var_11 = 2;
    }
    else if (eax_1 == 0x7b)
    {
        var_11 = 8;
    }
    else
    {
        var_11 = 0;
    }
    void* ebx_1;
    while (true)
    {
        int32_t eax_2 = sub_404de0();
        ebx_1 = eax_2;
        int32_t var_c_1 = 1;
        char var_12;
        if (eax_2 == 0x5e)
        {
            int32_t eax_3 = sub_404de0();
            ebx_1 = eax_3;
            if ((eax_3 - 0xa) <= 0x73)
            {
                int32_t ecx_1;
                ecx_1 = *(eax_3 + 0x40730a);
                if (((((ecx_1 == 2 || ecx_1 == 3) || ecx_1 == 5) || ecx_1 == 6) || ecx_1 == 7))
                {
                    *esi = 0x5e;
                    esi = &esi[1];
                }
                if ((((((((ecx_1 == 2 || ecx_1 == 3) || ecx_1 == 5) || ecx_1 == 6) || ecx_1 == 7) || ecx_1 == 0) || ecx_1 == 1) || ecx_1 == 4))
                {
                    var_12 = 0;
                    var_c_1 = 0;
                }
                if (ecx_1 == 8)
                {
                    /* nop */
                }
            }
        }
        if (var_c_1 != 0)
        {
            int32_t ecx_2;
            if ((ebx_1 + 1) <= 0x7e)
            {
                ecx_2 = *(ebx_1 + 0x4073c9);
                switch (ecx_2)
                {
                    case 0:
                    case 2:
                    {
                        var_12 = 6;
                        break;
                    }
                    case 1:
                    case 3:
                    {
                        void* eax_5;
                        eax_5 = ((ebx_1 + 1) - (ebx_1 + 1));
                        eax_5 = (eax_5 & 5);
                        var_12 = eax_5;
                        break;
                    }
                    case 4:
                    {
                        var_12 = 0xe;
                        break;
                    }
                    case 5:
                    {
                        var_12 = 1;
                        break;
                    }
                    case 6:
                    {
                        var_12 = 7;
                        break;
                    }
                    case 7:
                    {
                        var_12 = 8;
                        break;
                    }
                    case 8:
                    {
                        var_12 = 9;
                        break;
                    }
                    case 9:
                    {
                        var_12 = 4;
                        break;
                    }
                    case 0xa:
                    {
                        var_12 = 3;
                        break;
                    }
                    case 0xb:
                    {
                        var_12 = 2;
                        break;
                    }
                    case 0xc:
                    {
                        var_12 = 0xd;
                        break;
                    }
                    case 0xd:
                    {
                        var_12 = 0xb;
                        break;
                    }
                }
                if (ecx_2 == 0xe)
                {
                    var_12 = 0xc;
                }
            }
            if (((ebx_1 + 1) > 0x7e || ((ebx_1 + 1) <= 0x7e && ecx_2 == 0xf)))
            {
                if ((data_413a48 & 0x80) == 0)
                {
                    void* eax_7;
                    eax_7 = ebx_1;
                    eax_7 = *(eax_7 + 0x4149c0);
                    eax_7 = (eax_7 & 1);
                    bool c_1 = eax_7 < 1;
                    eax_7 = 0;
                    eax_7 = (0 - 1);
                    eax_7 = (eax_7 & 0xa);
                    var_12 = eax_7;
                }
                else
                {
                    void* eax_6;
                    eax_6 = ebx_1;
                    if ((((*(eax_6 + 0x4149c0) & 1) != 0 || ((*(eax_6 + 0x4149c0) & 1) == 0 && ebx_1 == 0x2a)) || ((*(eax_6 + 0x4149c0) & 1) == 0 && ebx_1 == 0x40)))
                    {
                        var_12 = 0xa;
                    }
                    if ((((*(eax_6 + 0x4149c0) & 1) == 0 && ebx_1 != 0x2a) && ebx_1 != 0x40))
                    {
                        var_12 = 0;
                    }
                }
            }
        }
        void* eax_8;
        eax_8 = var_11;
        int32_t ecx_4;
        ecx_4 = var_12;
        eax_8 = *(((eax_8 * 0xf) + ecx_4) + 0x414700);
        var_11 = eax_8;
        if ((var_8 != 0 && eax_8 == 1))
        {
            var_11 = 0x10;
        }
        if (var_10 != 0)
        {
            if (var_12 != 6)
            {
                *esi = 0x5c;
                esi = &esi[1];
            }
            else
            {
                data_4133f0 = 1;
                data_4133f4 = (data_4133f4 + 1);
                int32_t eax_9 = sub_404de0();
                ebx_1 = eax_9;
                data_4133f0 = 0;
                if ((eax_9 == 0x20 || (eax_9 != 0x20 && ebx_1 == 9)))
                {
                    var_11 = 0x40;
                    while (true)
                    {
                        eax_8 = sub_404de0();
                        ebx_1 = eax_8;
                        if (eax_8 != 0x20)
                        {
                            if (ebx_1 != 9)
                            {
                                break;
                            }
                        }
                    }
                }
                if ((eax_9 != 0x20 && ebx_1 != 9))
                {
                    eax_8 = ((esi - 0x413aa1) - (esi - 0x413aa1));
                    eax_8 = (eax_8 + 1);
                    var_11 = eax_8;
                }
            }
        }
        var_10 = 0;
        if (var_11 == 0x40)
        {
            break;
        }
        if ((var_11 & 0x20) != 0)
        {
            eax_8 = var_11;
            void* var_20_1 = ebx_1;
            sub_403220(data_4133f4, ((eax_8 & 0xdf) + 0x3e8));
        }
        if (var_11 != 0xf)
        {
            *esi = ebx_1;
            esi = &esi[1];
        }
        else
        {
            var_10 = 1;
        }
    }
    if (esi >= arg2)
    {
        sub_403220(data_4133f4, 0x434);
    }
    sub_404d70(ebx_1, data_4133d8);
    *esi = 0;
    return sub_408a90(eax);
}

int32_t __stdcall sub_407450(char* arg1)
{
    int16_t var_104;
    if ((arg1 == 0 || (arg1 != 0 && *arg1 == 0)))
    {
        var_104 = data_413fe0;
    }
    if ((arg1 != 0 && *arg1 != 0))
    {
        char* edi_1 = arg1;
        int32_t i = 0xffffffff;
        while (i != 0)
        {
            bool cond:2_1 = 0 != *edi_1;
            edi_1 = &edi_1[1];
            i = (i - 1);
            if ((!cond:2_1))
            {
                break;
            }
        }
        int32_t ecx_1 = (!i);
        __builtin_memcpy(&var_104, (edi_1 - ecx_1), ((ecx_1 >> 2) << 2));
        int32_t esi_2;
        int32_t edi_3;
        __builtin_memcpy(edi_3, esi_2, (ecx_1 & 3));
    }
    _makepath(arg1, 0, &var_104, "nmXXXXXX", 0);
    int32_t eax_2 = _mktemp(arg1);
    int32_t eax_4;
    bool cond:3_1;
    if (eax_2 == 0)
    {
        if (data_413fc9 != 0x7a)
        {
            data_413fc9 = (data_413fc9 + 1);
        }
        else
        {
            data_413fc9 = 0x61;
        }
        _makepath(arg1, 0, &var_104, "nmXXXXXX", 0);
        cond:3_1 = _mktemp(arg1) == 0;
        eax_4 = 0;
    }
    if ((eax_2 != 0 || (eax_2 == 0 && (!cond:3_1))))
    {
        void* edi_4 = &data_413fd4;
        int32_t i_1 = 0xffffffff;
        while (i_1 != 0)
        {
            bool cond:0_1 = 0 != *edi_4;
            edi_4 = (edi_4 + 1);
            i_1 = (i_1 - 1);
            if ((!cond:0_1))
            {
                break;
            }
        }
        int32_t ecx_5 = (!i_1);
        int32_t i_2 = 0xffffffff;
        char* edi_6 = arg1;
        while (i_2 != 0)
        {
            bool cond:1_1 = 0 != *edi_6;
            edi_6 = &edi_6[1];
            i_2 = (i_2 - 1);
            if ((!cond:1_1))
            {
                break;
            }
        }
        __builtin_memcpy((edi_6 - 1), (edi_4 - ecx_5), ((ecx_5 >> 2) << 2));
        int32_t esi_4;
        int32_t edi_8;
        __builtin_memcpy(edi_8, esi_4, (ecx_5 & 3));
        eax_4 = sub_40ca80(arg1, &data_41338c);
    }
    return eax_4;
}

int32_t sub_407550()
{
    bool cond:0 = fclose(data_4133d8) != 0xffffffff;
    int32_t eax_1 = data_4133f8;
    if ((!cond:0))
    {
        int32_t var_4_1 = eax_1;
        sub_403220(0, 0x424);
        eax_1 = data_4133f8;
    }
    free(eax_1);
    int32_t eax_3 = (data_413400 - 1);
    data_413400 = eax_3;
    int32_t edx = (eax_3 * 3);
    int32_t ecx = (edx << 2);
    data_4133d8 = *((edx << 2) + &data_411a58);
    data_4133f8 = *(ecx + 0x411a54);
    int32_t eax_6 = *(ecx + 0x411a50);
    data_4133f4 = eax_6;
    return eax_6;
}

int32_t __stdcall sub_4075c0(int32_t arg1)
{
    if ((arg1 == 0xa || arg1 == 0xffffffff))
    {
        sub_403220(data_4133f4, 0x407);
    }
    int32_t eax_2 = data_4133d8;
    data_413aa0 = arg1;
    if (fgets(0x413aa1, 0x3ff, eax_2) == 0)
    {
        if ((*(data_4133d8 + 0xc) & 0x10) != 0)
        {
            void* var_c_1 = &data_413fa8;
            sub_403220(data_4133f4, 0x409);
        }
        sub_403220(data_4133f4, 0x41d);
    }
    int32_t edi = 0x413aa0;
    int32_t i = 0xffffffff;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = (edi + 1);
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    if (*((!i) + 0x413a9e) == 0xa)
    {
        *((!i) + 0x413a9e) = 0;
    }
    char* eax_7 = &data_413aa0;
    while (true)
    {
        void* ecx_1;
        ecx_1 = *eax_7;
        if ((ecx_1 != 0x20 && ecx_1 != 9))
        {
            return sub_407680(eax_7);
        }
        eax_7 = &eax_7[1];
    }
}

int32_t __stdcall sub_407680(char* arg1)
{
    int32_t edi = 0;
    sub_40ceb4(((data_413ee0 + 3) & 0xfffffffc));
    char* ebx = arg1;
    int32_t __saved_edi;
    int32_t* var_1c = &__saved_edi;
    char eax_3 = *ebx;
    if ((eax_3 == 0 || eax_3 == 0x23))
    {
        sub_403220(data_4133f4, 0x407);
    }
    int32_t eax_5;
    int32_t ecx;
    eax_5 = _mbspbrk(ebx, &data_413fec);
    int32_t esi = eax_5;
    if (esi == 0)
    {
        char* edi_2 = ebx;
        int32_t i = 0xffffffff;
        while (i != 0)
        {
            bool cond:0_1 = 0 != *edi_2;
            edi_2 = &edi_2[1];
            i = (i - 1);
            if ((!cond:0_1))
            {
                break;
            }
        }
        esi = &ebx[((!i) - 1)];
    }
    else
    {
        eax_5 = *esi;
        if (eax_5 == 0x23)
        {
            edi = eax_5;
        }
        *esi = 0;
        if (edi == 0)
        {
            char* edi_1 = (esi + 1);
            if (*edi_1 != 0)
            {
                do
                {
                    eax_5 = *edi_1;
                    if (eax_5 == 0x23)
                    {
                        break;
                    }
                    if ((eax_5 != 0x20 && eax_5 != 9))
                    {
                        char* var_30_1 = edi_1;
                        eax_5 = sub_403220(data_4133f4, 0x409);
                    }
                    edi_1 = &edi_1[1];
                } while (*edi_1 != 0);
            }
        }
    }
    ecx = *ebx;
    void var_20;
    if ((ecx == 0x3c && *(esi - 1) == 0x3e))
    {
        *(esi - 1) = 0;
        char* eax_8 = sub_40b690(&ebx[1]);
        char* esi_1 = eax_8;
        if (eax_8 == &ebx[1])
        {
            esi_1 = sub_40add0(&ebx[1]);
        }
        void* eax_10 = sub_407b70("INCLUDE");
        int32_t eax_12;
        if (eax_10 == 0)
        {
            eax_12 = 0;
        }
        else
        {
            eax_12 = *(*(eax_10 + 8) + 4);
        }
        char* edi_3;
        if (eax_12 == 0)
        {
            edi_3 = nullptr;
        }
        else
        {
            int32_t eax_13 = sub_40add0(eax_12);
            char* eax_14 = sub_40b690(eax_13);
            edi_3 = eax_14;
            if (eax_14 != eax_13)
            {
                free(eax_13);
            }
        }
        void* var_30_7 = &var_20;
        ebx = sub_405930(edi_3, esi_1, var_1c);
        if (ebx == 0)
        {
            char* var_30_8 = esi_1;
            sub_403220(data_4133f4, 0x41c);
        }
        if (edi_3 != 0)
        {
            free(edi_3);
        }
        free(esi_1);
    }
    if ((ecx != 0x3c || (ecx == 0x3c && *(esi - 1) != 0x3e)))
    {
        if ((ecx == 0x22 && *(esi - 1) == 0x22))
        {
            ebx = &ebx[1];
            *(esi - 1) = 0;
        }
        char* eax_17 = sub_40b690(ebx);
        int32_t var_10_1 = eax_17;
        if (eax_17 == ebx)
        {
            var_10_1 = sub_40add0(ebx);
        }
        if (sub_40cd20(var_10_1, &var_1c, &var_20) == 0)
        {
            int32_t eax_21 = _mbspbrk(var_10_1, &data_413fe8);
            int32_t var_38_6;
            int32_t var_18_1;
            if (eax_21 != 0)
            {
                int32_t var_30_22 = var_10_1;
                int32_t var_34_8 = 0x41c;
                var_38_6 = data_4133f4;
            }
            else
            {
                int32_t eax_22 = data_413400;
                var_18_1 = eax_22;
                if (eax_22 >= 0)
                {
                    void* i_1 = ((eax_22 * 0xc) + &data_411a54);
                    do
                    {
                        int32_t eax_24;
                        if (data_413400 != var_18_1)
                        {
                            eax_24 = *i_1;
                        }
                        else
                        {
                            eax_24 = data_4133f8;
                        }
                        int32_t eax_26 = sub_407ad0(eax_24);
                        if (eax_26 != 0)
                        {
                            int32_t edi_4 = var_10_1;
                            int32_t j = 0xffffffff;
                            while (j != 0)
                            {
                                bool cond:4_1 = 0 != *edi_4;
                                edi_4 = (edi_4 + 1);
                                j = (j - 1);
                                if ((!cond:4_1))
                                {
                                    break;
                                }
                            }
                            int32_t edi_5 = eax_26;
                            int32_t j_1 = 0xffffffff;
                            while (j_1 != 0)
                            {
                                bool cond:5_1 = 0 != *edi_5;
                                edi_5 = (edi_5 + 1);
                                j_1 = (j_1 - 1);
                                if ((!cond:5_1))
                                {
                                    break;
                                }
                            }
                            int32_t eax_27 = sub_40acf0((((!j_1) + ((!j) - 1)) + 1));
                            int32_t edi_6 = eax_26;
                            int32_t j_2 = 0xffffffff;
                            while (j_2 != 0)
                            {
                                bool cond:6_1 = 0 != *edi_6;
                                edi_6 = (edi_6 + 1);
                                j_2 = (j_2 - 1);
                                if ((!cond:6_1))
                                {
                                    break;
                                }
                            }
                            int32_t ecx_5 = (!j_2);
                            __builtin_memcpy(eax_27, (edi_6 - ecx_5), ((ecx_5 >> 2) << 2));
                            int32_t esi_4;
                            int32_t edi_9;
                            __builtin_memcpy(edi_9, esi_4, (ecx_5 & 3));
                            void* edi_10 = &data_413fe4;
                            int32_t j_3 = 0xffffffff;
                            while (j_3 != 0)
                            {
                                bool cond:7_1 = 0 != *edi_10;
                                edi_10 = (edi_10 + 1);
                                j_3 = (j_3 - 1);
                                if ((!cond:7_1))
                                {
                                    break;
                                }
                            }
                            int32_t ecx_9 = (!j_3);
                            int32_t j_4 = 0xffffffff;
                            int32_t edi_12 = eax_27;
                            while (j_4 != 0)
                            {
                                bool cond:8_1 = 0 != *edi_12;
                                edi_12 = (edi_12 + 1);
                                j_4 = (j_4 - 1);
                                if ((!cond:8_1))
                                {
                                    break;
                                }
                            }
                            __builtin_memcpy((edi_12 - 1), (edi_10 - ecx_9), ((ecx_9 >> 2) << 2));
                            int32_t esi_6;
                            int32_t edi_14;
                            __builtin_memcpy(edi_14, esi_6, (ecx_9 & 3));
                            int32_t edi_15 = var_10_1;
                            int32_t j_5 = 0xffffffff;
                            while (j_5 != 0)
                            {
                                bool cond:9_1 = 0 != *edi_15;
                                edi_15 = (edi_15 + 1);
                                j_5 = (j_5 - 1);
                                if ((!cond:9_1))
                                {
                                    break;
                                }
                            }
                            int32_t ecx_14 = (!j_5);
                            int32_t j_6 = 0xffffffff;
                            int32_t edi_17 = eax_27;
                            while (j_6 != 0)
                            {
                                bool cond:10_1 = 0 != *edi_17;
                                edi_17 = (edi_17 + 1);
                                j_6 = (j_6 - 1);
                                if ((!cond:10_1))
                                {
                                    break;
                                }
                            }
                            __builtin_memcpy((edi_17 - 1), (edi_15 - ecx_14), ((ecx_14 >> 2) << 2));
                            int32_t esi_8;
                            int32_t edi_19;
                            __builtin_memcpy(edi_19, esi_8, (ecx_14 & 3));
                            if (sub_40cd20(eax_27, &var_1c, &var_20) != 0)
                            {
                                ebx = eax_27;
                                free(eax_26);
                                break;
                            }
                            free(eax_26);
                            free(eax_27);
                        }
                        i_1 = (i_1 - 0xc);
                        var_18_1 = (var_18_1 - 1);
                    } while (i_1 >= 0x411a54);
                }
                free(var_10_1);
                if (var_18_1 < 0)
                {
                    char* var_30_21 = ebx;
                    int32_t var_34_7 = 0x41c;
                    var_38_6 = data_4133f4;
                }
            }
            if ((eax_21 != 0 || (eax_21 == 0 && var_18_1 < 0)))
            {
                sub_403220(var_38_6, 0x41c);
            }
        }
    }
    int32_t i_2 = 0;
    if (data_413400 > 0)
    {
        int32_t* esi_9 = &data_411a54;
        do
        {
            if (_mbsicmp(ebx, *esi_9) == 0)
            {
                char* var_30_24 = ebx;
                sub_403220(data_4133f4, 0x430);
            }
            esi_9 = &esi_9[3];
            i_2 = (i_2 + 1);
        } while (data_413400 > i_2);
    }
    int32_t esi_10 = data_4133f8;
    int32_t edx_10 = (data_413400 * 3);
    int32_t eax_39 = data_4133d8;
    data_413424 = 0;
    *((edx_10 << 2) + &data_411a58) = eax_39;
    int32_t ecx_20 = (edx_10 << 2);
    *(ecx_20 + 0x411a50) = data_4133f4;
    *(ecx_20 + 0x411a54) = esi_10;
    data_413400 = (data_413400 + 1);
    int32_t eax_40 = sub_40ca80(ebx, &data_413014);
    data_4133d8 = eax_40;
    if (eax_40 == 0)
    {
        char* var_30_25 = ebx;
        sub_403220(data_4133f4, 0x41c);
    }
    data_4133f8 = sub_40add0(ebx);
    data_4133f4 = 1;
    data_4133f0 = 1;
    int32_t eax_43 = sub_404de0();
    if (eax_43 != 0x20)
    {
        data_4133f0 = 1;
    }
    if ((eax_43 == 0x20 || eax_43 == 9))
    {
        data_4133f0 = 0;
    }
    if (data_4133f0 == 0)
    {
        eax_43 = 0x12;
        return eax_43;
    }
    sub_404d70(eax_43, data_4133d8);
    int32_t eax_44;
    eax_44 = 0x11;
    return eax_44;
}

int32_t __stdcall sub_407ad0(int32_t arg1)
{
    void var_104;
    void var_100;
    _splitpath(arg1, &var_104, &var_100, 0, 0);
    void* edi = &var_100;
    int32_t i = 0xffffffff;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = (edi + 1);
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    void* edi_1 = &var_104;
    int32_t i_1 = 0xffffffff;
    while (i_1 != 0)
    {
        bool cond:1_1 = 0 != *edi_1;
        edi_1 = (edi_1 + 1);
        i_1 = (i_1 - 1);
        if ((!cond:1_1))
        {
            break;
        }
    }
    int32_t eax = sub_40acc0(((!i_1) + ((!i) - 1)));
    int32_t edi_2 = eax;
    _makepath(eax, &var_104, &var_100, 0, 0);
    int32_t i_2 = 0xffffffff;
    while (i_2 != 0)
    {
        bool cond:2_1 = 0 != *edi_2;
        edi_2 = (edi_2 + 1);
        i_2 = (i_2 - 1);
        if ((!cond:2_1))
        {
            break;
        }
    }
    int32_t ecx_2;
    ecx_2 = *(((!i_2) + eax) - 2);
    if ((ecx_2 == 0x5c || ecx_2 == 0x2f))
    {
        *(((!i_2) + eax) - 2) = 0;
    }
    return eax;
}

void* __stdcall sub_407b70(char* arg1)
{
    char* ecx = arg1;
    if (*arg1 == 0)
    {
        data_413ff0 = 0x413428;
    }
    else
    {
        int32_t eax_1 = 0;
        do
        {
            eax_1 = (eax_1 + *ecx);
            ecx = &ecx[1];
        } while (*ecx != 0);
        data_413ff0 = (((eax_1 & 0xff) << 2) + &data_413428);
        void** i = *(((eax_1 & 0xff) << 2) + &data_413428);
        if (i != 0)
        {
            do
            {
                if (_mbscmp(i[1], arg1) == 0)
                {
                    int32_t eax_4;
                    eax_4 = i[3];
                    eax_4 = (eax_4 & 0x10);
                    return ((eax_4 - eax_4) & i);
                }
                i = *i;
            } while (i != 0);
            return 0;
        }
    }
    return 0;
}

int32_t* __stdcall sub_407bf0(int32_t* arg1)
{
    int32_t* eax = sub_40ae10(data_413ff0, arg1);
    data_413ff0 = 0;
    return eax;
}

void __stdcall sub_407c10(int32_t arg1)
{
    __builtin_memset(arg1, 0, 0x400);
}

int32_t sub_407c30(int32_t arg1, void* arg2, int32_t arg3) __noreturn
{
    data_41400c = sub_40aaf0();
    char eax_1 = sub_40ab20();
    data_414010 = eax_1;
    if (eax_1 != 0)
    {
        int32_t eax_2 = getenv("vc20chicspwn");
        bool cond:3_1 = eax_2 != 0;
        if (eax_2 != 0)
        {
            void* edi_1 = &data_414464;
            int32_t i = 2;
            int32_t esi_1 = eax_2;
            while (i != 0)
            {
                char temp1_1 = *esi_1;
                char temp2_1 = *edi_1;
                cond:3_1 = temp1_1 != temp2_1;
                esi_1 = (esi_1 + 1);
                edi_1 = (edi_1 + 1);
                i = (i - 1);
                if (temp1_1 != temp2_1)
                {
                    break;
                }
            }
            if ((!cond:3_1))
            {
                data_414014 = 1;
            }
        }
    }
    sub_40a630();
    sub_407c10(0x413428);
    data_413ee0 = 0x118;
    data_413edc = 0x104;
    bool cond:0 = data_413ff8 != 0;
    data_414004 = arg3;
    data_413ed4 = 0x100;
    data_413ed8 = 0x100;
    if ((!cond:0))
    {
        int32_t edi_2 = *__p__pgmptr();
        int32_t i_1 = 0xffffffff;
        while (i_1 != 0)
        {
            bool cond:1_1 = 0 != *edi_2;
            edi_2 = (edi_2 + 1);
            i_1 = (i_1 - 1);
            if ((!cond:1_1))
            {
                break;
            }
        }
        int32_t ecx_1 = (!i_1);
        __builtin_memcpy(0x410e30, (edi_2 - ecx_1), ((ecx_1 >> 2) << 2));
        int32_t esi_3;
        int32_t edi_4;
        __builtin_memcpy(edi_4, esi_3, (ecx_1 & 3));
        if (sub_408140(0x410e30, &data_413ff8) == 0)
        {
            data_413ff8 = "NMAKE";
        }
    }
    sub_40a890("nmake.err", *__p__pgmptr(1));
    signal(2, sub_408940);
    signal(0xf, sub_408940);
    int32_t var_10 = 0;
    int32_t var_14_1 = 0;
    int32_t var_10_1 = 0;
    int32_t status = sub_407f70(arg1, arg2);
    sub_408a20();
    if (data_4133b0 == 0)
    {
        status = 1;
    }
    exit(status);
    /* no return */
}

int32_t __stdcall sub_407d6e(int32_t arg1, int32_t arg2, int32_t arg3) __pure
{
    return;
}

int32_t sub_407d80() __pure
{
    return;
}

void* sub_407d90()
{
    sub_401980(sub_40add0(&data_4144c8), sub_40add0(&data_4144c4), 0);
    sub_401980(sub_40add0(&data_4144c0), sub_40add0(&data_4144c4), 0);
    sub_401980(sub_40add0(&data_4144bc), sub_40add0(&data_4144c4), 0);
    sub_401980(sub_40add0(&data_4144b8), sub_40add0(&data_4144b4), 0);
    sub_401980(sub_40add0(&data_4144b0), sub_40add0(&data_4144ac), 0);
    sub_401980(sub_40add0("COBOL"), sub_40add0("cobol"), 0);
    sub_401980(sub_40add0(&data_413274), sub_40add0(&data_414498), 0);
    sub_401980(sub_40add0("PASCAL"), sub_40add0(&data_41448c), 0);
    sub_401980(sub_40add0(&data_414488), sub_40add0(&data_414484), 0);
    sub_401980(sub_40add0("MAKE"), sub_40add0(data_413ff8), 0xc);
    void* i = data_414018;
    if (i != 0)
    {
        void** var_4_1 = &data_414018;
        void** ebx_3 = &data_414118;
        do
        {
            data_413a3c = sub_40add0(i);
            int32_t eax_21;
            eax_21 = data_414478;
            *data_413aa0 = eax_21;
            sub_401230();
            void* ebp_3 = *ebx_3;
            if (*ebp_3 != 0)
            {
                do
                {
                    int32_t edi_1 = *ebp_3;
                    int32_t j = 0xffffffff;
                    while (j != 0)
                    {
                        bool cond:0_1 = 0 != *edi_1;
                        edi_1 = (edi_1 + 1);
                        j = (j - 1);
                        if ((!cond:0_1))
                        {
                            break;
                        }
                    }
                    int32_t ecx_1 = (!j);
                    ebp_3 = (ebp_3 + 4);
                    __builtin_memcpy(0x413aa0, (edi_1 - ecx_1), ((ecx_1 >> 2) << 2));
                    int32_t esi_5;
                    int32_t edi_3;
                    __builtin_memcpy(edi_3, esi_5, (ecx_1 & 3));
                    sub_401030();
                } while (*ebp_3 != 0);
            }
            if (ebx_3 == &data_414118)
            {
                sub_4015e0();
            }
            ebx_3 = &ebx_3[1];
            sub_401710();
            var_4_1 = &var_4_1[1];
            i = *var_4_1;
        } while (i != 0);
    }
    return i;
}

int32_t __stdcall sub_407f70(int32_t arg1, void* arg2)
{
    data_4133c0 = 0;
    int32_t eax = sub_40add0("MAKEDIR");
    int32_t eax_1 = sub_40ce40();
    sub_401980(eax, eax_1, 0);
    int32_t i_2 = getenv("MAKEFLAGS");
    if (i_2 != 0)
    {
        int32_t i = 0xffffffff;
        void* edi_2 = (data_4133c4 + 0xa);
        while (i != 0)
        {
            bool cond:0_1 = 0 != *edi_2;
            edi_2 = (edi_2 + 1);
            i = (i - 1);
            if ((!cond:0_1))
            {
                break;
            }
        }
        _mbsnbcpy((data_4133c4 + 0xa), i_2, ((!i) - 1));
    }
    void* eax_5 = data_4133c4;
    data_4133b4 = 1;
    int32_t eax_7 = sub_40add0((eax_5 + 0xa));
    sub_401980(sub_40add0("MAKEFLAGS"), eax_7, 6);
    if (i_2 != 0)
    {
        int32_t i_1;
        do
        {
            char eax_9 = *i_2;
            if (eax_9 == 0)
            {
                break;
            }
            sub_4086d0(eax_9, 1);
            i_1 = i_2;
            i_2 = (i_2 + 1);
        } while (i_1 != 0xffffffff);
    }
    sub_408320((arg1 - 1), (arg2 + 4));
    if (data_4133cc == 0)
    {
        sub_403420();
    }
    if ((data_4133d4 & 2) == 0)
    {
        sub_407d90();
        data_4133f8 = "tools.ini";
        if (sub_405860("INIT", "tools.ini", data_413ff8) != 0)
        {
            data_413408 = 1;
            data_4133f4 = (data_4133f4 + 1);
            sub_408ae0();
            if (fclose(data_4133d8) == 0xffffffff)
            {
                int32_t var_10_5 = data_4133f8;
                sub_403220(0, 0x424);
            }
        }
    }
    if (_putenv(sub_40add0(data_4133c4)) == 0xffffffff)
    {
        sub_403220(0, 0x41f);
    }
    if (data_4133e0 == 0)
    {
        sub_4085f0();
    }
    sub_408270();
    sub_408190();
    data_413424 = 0;
    sub_40a3c0();
    if ((data_4133d4 & 1) != 0)
    {
        sub_409000();
        sub_4090a0();
        sub_409170();
    }
    if (data_413a74 != 0)
    {
        free(data_413a74);
    }
    int32_t eax_23 = sub_401f10();
    _chdir(eax_1);
    return eax_23;
}

int32_t __stdcall sub_408140(int32_t arg1, int32_t* arg2)
{
    void var_100;
    _splitpath(arg1, 0, 0, &var_100, 0);
    int32_t eax = sub_40add0(&var_100);
    int32_t edi = eax;
    *arg2 = eax;
    int32_t i = 0xffffffff;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = (edi + 1);
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    return ((!i) - 1);
}

int32_t sub_408190()
{
    void** i = data_4133e0;
    if (i != 0)
    {
        do
        {
            char* eax_1 = i[1];
            if ((*eax_1 != 0x2d || (*eax_1 == 0x2d && eax_1[1] != 0)))
            {
                int32_t eax_4 = sub_40add0(eax_1);
                data_4133f8 = eax_4;
                int32_t eax_5 = sub_40ca80(eax_4, &data_413014);
                data_4133d8 = eax_5;
                if (eax_5 == 0)
                {
                    int32_t var_14_2 = data_4133f8;
                    sub_403220(0, 0x41c);
                }
            }
            if ((*eax_1 == 0x2d && eax_1[1] == 0))
            {
                data_4133f8 = sub_40add0("STDIN");
                data_4133d8 = __p__iob();
            }
            data_4133f4 = 0;
            data_413408 = 0;
            sub_408ae0();
            if ((__p__iob() != data_4133d8 && fclose(data_4133d8) == 0xffffffff))
            {
                int32_t var_14_4 = data_4133f8;
                sub_403220(0, 0x424);
            }
            i = *i;
        } while (i != 0);
    }
    return sub_402c40(data_4133e0);
}

int32_t sub_408270()
{
    int32_t eax = __p__environ();
    int32_t* esi = *eax;
    if (*esi != 0)
    {
        do
        {
            eax = _mbschr(*esi, 0x3d);
            int32_t edi_1 = eax;
            if (edi_1 != 0)
            {
                eax = _mbsnbicmp(*esi, "MAKEFLAGS", 8);
                if (eax != 0)
                {
                    *edi_1 = 0;
                    eax = *esi;
                    if (*eax != 0)
                    {
                        int32_t eax_4 = _mbsupr(sub_40add0(eax));
                        int32_t eax_6 = sub_40add0((edi_1 + 1));
                        *edi_1 = 0x3d;
                        data_4133b4 = 0;
                        eax = sub_401980(eax_4, eax_6, 4);
                        if (eax == 0)
                        {
                            free(eax_4);
                            eax = free(eax_6);
                        }
                    }
                }
            }
            esi = &esi[1];
        } while (*esi != 0);
    }
    return eax;
}

void __stdcall sub_408320(int32_t arg1, int32_t* arg2)
{
    int32_t var_4 = 0;
    int32_t var_8 = 0;
    int32_t i = arg1;
    if (i != 0)
    {
        int32_t* edi_1 = arg2;
        do
        {
            char* ebx_1 = *edi_1;
            int32_t eax;
            eax = *ebx_1;
            if (eax == 0x40)
            {
                sub_402cc0(&ebx_1[1]);
            }
            else
            {
                if ((eax == 0x2d || eax == 0x2f))
                {
                    char* ebx_5 = &ebx_1[1];
                    eax = _mbsicmp(ebx_5, "help");
                    if (eax == 0)
                    {
                        var_4 = 1;
                        break;
                    }
                    if (*ebx_5 != 0)
                    {
                        while (true)
                        {
                            if (_mbsicmp(ebx_5, "nologo") == 0)
                            {
                                eax = ebx_5[2];
                                sub_4086d0(eax, 1);
                                break;
                            }
                            eax = *ebx_5;
                            if (eax == 0x3f)
                            {
                                var_8 = 1;
                                break;
                            }
                            if ((eax != 0x66 && eax != 0x46))
                            {
                                if ((eax != 0x78 && eax != 0x58))
                                {
                                    ebx_5 = &ebx_5[1];
                                    sub_4086d0(eax, 1);
                                    if (*ebx_5 == 0)
                                    {
                                        break;
                                    }
                                    continue;
                                }
                                void* ebx_6 = &ebx_5[1];
                                if (*ebx_6 == 0)
                                {
                                    int32_t i_2 = i;
                                    i = (i - 1);
                                    void* eax_12;
                                    if (i_2 != 1)
                                    {
                                        eax_12 = edi_1[1];
                                        edi_1 = &edi_1[1];
                                        if (eax_12 != 0)
                                        {
                                            ebx_6 = eax_12;
                                        }
                                    }
                                    if (((i_2 == 1 || (i_2 != 1 && eax_12 == 0)) || ((i_2 != 1 && eax_12 != 0) && *eax_12 == 0)))
                                    {
                                        sub_403220(0, 0x426);
                                    }
                                }
                                if ((*ebx_6 != 0x2d || (*ebx_6 == 0x2d && *(ebx_6 + 1) != 0)))
                                {
                                    int32_t eax_17 = fopen(ebx_6, &data_4144fc);
                                    if (eax_17 == 0)
                                    {
                                        void* var_1c_6 = ebx_6;
                                        sub_403220(0, 0x418);
                                    }
                                    int32_t eax_19 = *(__p__iob() + 0x50);
                                    _dup2(*(eax_17 + 0x10), eax_19);
                                    fclose(eax_17);
                                }
                                if ((*ebx_6 == 0x2d && *(ebx_6 + 1) == 0))
                                {
                                    _dup2(*(__p__iob(*(__p__iob() + 0x50)) + 0x30));
                                }
                                break;
                            }
                            void* ebx_7 = &ebx_5[1];
                            if (*ebx_7 == 0)
                            {
                                int32_t i_1 = i;
                                i = (i - 1);
                                void* eax_20;
                                if (i_1 != 1)
                                {
                                    eax_20 = edi_1[1];
                                    edi_1 = &edi_1[1];
                                    if (eax_20 != 0)
                                    {
                                        ebx_7 = eax_20;
                                    }
                                }
                                if (((i_1 == 1 || (i_1 != 1 && eax_20 == 0)) || ((i_1 != 1 && eax_20 != 0) && *eax_20 == 0)))
                                {
                                    sub_403220(0, 0x425);
                                }
                            }
                            int32_t* eax_21 = sub_40ad20();
                            eax_21[1] = sub_40add0(ebx_7);
                            sub_40ae30(&data_4133e0, eax_21);
                            break;
                        }
                    }
                }
                if ((eax != 0x2d && eax != 0x2f))
                {
                    int32_t ebp_1 = _mbschr(ebx_1, 0x3d);
                    if (ebp_1 == 0)
                    {
                        sub_408a90(*edi_1);
                        if (**edi_1 != 0)
                        {
                            int32_t* eax_9 = sub_40ad20();
                            eax_9[1] = sub_40add0(*edi_1);
                            sub_40ae30(&data_4133dc, eax_9);
                        }
                        *edi_1 = 0;
                    }
                    else
                    {
                        if (*edi_1 == ebp_1)
                        {
                            sub_403220(0, 0x427);
                        }
                        char* ecx_1 = (ebp_1 - 1);
                        *ebp_1 = 0;
                        while (true)
                        {
                            int32_t eax_1;
                            eax_1 = *ecx_1;
                            if ((eax_1 != 0x20 && eax_1 != 9))
                            {
                                break;
                            }
                            ecx_1 = (ecx_1 - 1);
                        }
                        ecx_1[1] = 0;
                        data_4133b4 = 1;
                        int32_t ebx_3 = *edi_1;
                        sub_401980(sub_40add0((_mbsspn(ebx_3, &data_413008, sub_40add0((_mbsspn((ebp_1 + 1), &data_413008, 2) + (ebp_1 + 1)))) + ebx_3)));
                        *edi_1 = 0;
                    }
                }
            }
            i = (i - 1);
            edi_1 = &edi_1[1];
        } while (i != 0);
    }
    if (var_4 != 0)
    {
        sub_403490();
        exit(0);
        /* no return */
    }
    if (var_8 == 0)
    {
        return;
    }
    sub_403490();
    exit(0);
    /* no return */
}

int32_t __stdcall sub_4085bc(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __pure
{
    return;
}

int32_t sub_4085f0()
{
    sub_40ceb4(((data_413ee0 + 3) & 0xfffffffc));
    int32_t eax_3 = _access("makefile", 4);
    if (eax_3 == 0)
    {
        int32_t* eax_4 = sub_40ad20();
        int32_t eax_5 = sub_40add0("makefile");
        eax_4[1] = eax_5;
        data_4133e0 = eax_4;
        return eax_5;
    }
    if (data_4133dc != 0)
    {
        void* esi_2 = *(data_4133dc + 4);
        eax_3 = _access(esi_2, 4);
        if (eax_3 == 0)
        {
            eax_3 = _mbsrchr(esi_2, 0x2e);
            if (eax_3 != 0)
            {
                int32_t __saved_edi;
                int32_t* var_118_1 = &__saved_edi;
                void var_108;
                eax_3 = sub_409ef0(&var_108, esi_2, eax_3);
            }
            if ((eax_3 == 0 || eax_3 == 0))
            {
                int32_t* ecx = data_4133dc;
                data_4133dc = *ecx;
                data_4133e0 = ecx;
                return eax_3;
            }
        }
    }
    else if ((data_4133d4 & 1) == 0)
    {
        eax_3 = sub_403220(0, 0x428);
    }
    return eax_3;
}

int32_t __stdcall sub_4086d0(char arg1, int32_t arg2)
{
    int32_t ebx = arg1;
    char* edi = &data_4133d0;
    char eax = _mbctoupper(ebx);
    int32_t esi = eax;
    int32_t eax_1 = (esi - 0x20);
    int32_t ecx_1;
    if (eax_1 <= 0x34)
    {
        ecx_1 = *(eax_1 + 0x408900);
        switch (ecx_1)
        {
            case 1:
            {
                ebx = 0x10;
                break;
            }
            case 2:
            {
                data_4133b8 = 1;
                return eax_1;
                break;
            }
            case 3:
            {
                ebx = 0x20;
                edi = &data_4133d4;
                data_4133cc = 1;
                break;
            }
            case 4:
            {
                ebx = 1;
                break;
            }
            case 5:
            {
                ebx = 4;
                break;
            }
            case 6:
            {
                ebx = 2;
                break;
            }
            case 7:
            {
                data_4133a4 = 1;
                return eax_1;
                break;
            }
            case 8:
            {
                ebx = 0x80;
                edi = &data_4133d4;
                data_4133cc = 1;
                break;
            }
            case 9:
            {
                ebx = 4;
                break;
            }
            case 0xa:
            {
                data_4133a8 = 1;
                return eax_1;
                break;
            }
            case 0xb:
            {
                ebx = 1;
                break;
            }
            case 0xc:
            {
                ebx = 8;
                break;
            }
        }
        if (ecx_1 == 0xd)
        {
            ebx = 2;
        }
        else if (ecx_1 == 0xe)
        {
            ebx = 8;
        }
        else if (ecx_1 == 0xf)
        {
            ebx = 0x10;
        }
        if (((((ecx_1 == 5 || ecx_1 == 0xb) || ecx_1 == 0xc) || ecx_1 == 0xd) || ecx_1 == 0xf))
        {
            edi = &data_4133d4;
        }
        if (ecx_1 == 0)
        {
        label_4088b8:
            return eax_1;
        }
    }
    if ((eax_1 > 0x34 || (eax_1 <= 0x34 && ecx_1 == 0x10)))
    {
        int32_t var_14_1 = ebx;
        eax_1 = sub_403220(0, 0x429);
        char var_1;
        ebx = var_1;
    }
    if ((((((((((eax_1 > 0x34 || (eax_1 <= 0x34 && ecx_1 == 0x10)) || (eax_1 <= 0x34 && ecx_1 == 1)) || (eax_1 <= 0x34 && ecx_1 == 3)) || (eax_1 <= 0x34 && ecx_1 == 4)) || (eax_1 <= 0x34 && ecx_1 == 6)) || (eax_1 <= 0x34 && ecx_1 == 8)) || (eax_1 <= 0x34 && ecx_1 == 9)) || (eax_1 <= 0x34 && ecx_1 == 0xe)) || (eax_1 <= 0x34 && ((((ecx_1 == 5 || ecx_1 == 0xb) || ecx_1 == 0xc) || ecx_1 == 0xd) || ecx_1 == 0xf))))
    {
        if (data_4133e8 == 0)
        {
            eax_1 = sub_407b70("MAKEFLAGS");
            data_4133e8 = eax_1;
            data_4133ec = *(eax_1 + 8);
        }
        if (arg2 != 0)
        {
            eax_1 = *edi;
            eax_1 = (eax_1 | ebx);
            *edi = eax_1;
            if (eax == 0x51)
            {
                eax_1 = (eax_1 | 0x20);
                *edi = eax_1;
            }
            eax_1 = _mbschr(*(data_4133ec + 4), esi);
            if (eax_1 == 0)
            {
                int32_t eax_4 = _mbschr(*(data_4133ec + 4), 0x20);
                if (eax_4 != 0)
                {
                    *eax_4 = eax;
                }
                eax_1 = _putenv(sub_40add0(data_4133c4));
                if (eax_1 == 0xffffffff)
                {
                    return sub_403220(data_4133f4, 0x41f);
                }
            }
            goto label_4088b8;
        }
        if (edi == 0x4133d0)
        {
            ebx = (!ebx);
            *edi = (*edi & ebx);
            int32_t eax_10 = _mbschr(*(data_4133ec + 4), esi);
            if (eax_10 != 0)
            {
                int32_t ecx_7;
                do
                {
                    ecx_7 = (eax_10 + 1);
                    *eax_10 = *ecx_7;
                    eax_10 = ecx_7;
                } while (*ecx_7 != 0);
            }
            eax_1 = _putenv(sub_40add0(data_4133c4));
            if (eax_1 == 0xffffffff)
            {
                eax_1 = sub_403220(data_4133f4, 0x41f);
            }
        }
        goto label_4088b8;
    }
}

uint32_t sub_408940()
{
    signal(2, 1);
    signal(0xf, 1);
    sub_408a20();
    if ((data_414008 != 0 && ((data_4133d0 & 4) == 0 && (data_4133d4 & 0x10) == 0)))
    {
        int32_t eax_1 = data_413a90;
        if ((((eax_1 != 0 && _access(eax_1, 0) != 0) && sub_4089e0(data_413a90) == 0) && _unlink(data_413a90) == 0))
        {
            int32_t var_8_3 = data_413a90;
            sub_403220(data_4133f4, 0xfa8);
        }
    }
    return sub_403220(0, 0x422);
}

int32_t __stdcall sub_4089e0(int32_t arg1)
{
    void** i = data_413a30;
    int32_t eax;
    if (i != 0)
    {
        do
        {
            if (_mbsicmp(i[1], arg1) == 0)
            {
                eax = 1;
                return eax;
            }
            i = *i;
        } while (i != 0);
    }
    eax = 0;
    return eax;
}

int32_t sub_408a20()
{
    int32_t eax = _fcloseall();
    void** i = data_4133bc;
    if (i != 0)
    {
        do
        {
            eax = _unlink(i[1]);
            if ((data_4133d0 & 4) != 0)
            {
                printf("\tdel %s\n", i[1]);
                eax = fflush((__p__iob() + 0x20));
            }
            i = *i;
        } while (i != 0);
    }
    return eax;
}

char* __stdcall sub_408a90(char* arg1)
{
    int32_t i = 0xffffffff;
    char* edi = arg1;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = &edi[1];
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    char* eax = &arg1[((!i) - 2)];
    int32_t ecx_1 = 0;
    if ((*arg1 == 0x22 && *eax == 0x22))
    {
        eax = (eax - 1);
        ecx_1 = 1;
    }
    if (eax > arg1)
    {
        do
        {
            char edx = *eax;
            if ((edx != 0x20 && edx != 0x2e))
            {
                break;
            }
            eax = (eax - 1);
        } while (eax > arg1);
    }
    if (ecx_1 != 0)
    {
        eax[1] = 0x22;
        eax = &eax[1];
    }
    eax[1] = 0;
    return eax;
}

int32_t sub_408ae0()
{
    data_4133c8 = 1;
    char var_2 = 0;
    data_413420 = (data_413420 + 1);
    int32_t edx = data_4133f4;
    data_413420 = (data_413420 + 1);
    *(data_413420 + 0x413410) = 0x17;
    void* eax_1 = data_413420;
    data_413424 = edx;
    *(eax_1 + 0x413410) = 0;
    int32_t eax_2 = sub_406500(0x400, 0);
    char var_1 = eax_2;
    int32_t ebx;
    ebx = *(data_413420 + 0x413410);
    if (ebx != 0x17)
    {
        do
        {
            if ((ebx & 0x40) != 0)
            {
                void* eax_3 = data_413420;
                data_413420 = (data_413420 - 1);
                eax_3 = *(eax_3 + 0x413410);
                &data_414630[(eax_3 & 0xf)]();
            }
            else if ((ebx & 0x10) == 0)
            {
                int32_t eax_11;
                eax_11 = ebx;
                int32_t edi_1 = (eax_11 << 3);
                eax_11 = var_1;
                uint32_t esi_1 = *((edi_1 + (eax_11 & 0xf)) + 0x4145d8);
                if ((esi_1 & 0x20) != 0)
                {
                    int32_t var_14_3 = 0x413aa0;
                    sub_403220(data_413424, (esi_1 + 0x3e8));
                }
                data_413420 = (data_413420 - 1);
                if ((esi_1 & 0x80) != 0)
                {
                    if (var_2 == 0)
                    {
                        var_2 = sub_406500(0x400, ebx);
                    }
                    uint32_t eax_12;
                    eax_12 = var_2;
                    int32_t ecx_2;
                    ecx_2 = *((edi_1 + (eax_12 & 0xf)) + 0x414618);
                    esi_1 = ((esi_1 & 0xf) + ecx_2);
                }
                char* eax_15 = &data_414588[esi_1];
                int32_t i_1;
                i_1 = *eax_15;
                if (i_1 != 0)
                {
                    int32_t i;
                    do
                    {
                        data_413420 = (data_413420 + 1);
                        i = i_1;
                        i_1 = (i_1 - 1);
                        ebx = eax_15[(i_1 + 1)];
                        *(data_413420 + 0x413410) = ebx;
                    } while (i != 1);
                }
            }
            else if (var_1 != ebx)
            {
                int32_t var_14_1 = 0x413aa0;
                sub_403220(data_413424, 0x409);
            }
            else
            {
                data_413420 = (data_413420 - 1);
                void* eax_6;
                eax_6 = *(data_413420 + 0x413410);
                if ((eax_6 & 0x40) != 0)
                {
                    data_413420 = (data_413420 - 1);
                    &data_414630[(eax_6 & 0xf)]();
                }
                int32_t eax_8 = data_4133f4;
                data_413424 = eax_8;
                if (var_2 == 0)
                {
                    void* eax_9;
                    eax_9 = *(data_413420 + 0x413410);
                    var_1 = sub_406500(0x400, eax_9);
                }
                else
                {
                    if (data_413aa0 == 0xa)
                    {
                        data_413424 = (eax_8 - 1);
                    }
                    eax_8 = var_2;
                    var_2 = 0;
                    var_1 = eax_8;
                }
            }
            eax_2 = data_413420;
            ebx = *(eax_2 + 0x413410);
        } while (ebx != 0x17);
    }
    data_413420 = (data_413420 - 1);
    return eax_2;
}

int32_t __stdcall sub_408cd0(int32_t arg1, int32_t arg2)
{
    int32_t i = 0xffffffff;
    int32_t edi = arg2;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = (edi + 1);
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    int32_t eax_1 = (((!i) + arg1) - 1);
    if (eax_1 > 0x28)
    {
        printf("\n\t\t\t");
        eax_1 = 0;
    }
    return eax_1;
}

int32_t __stdcall sub_408d10(int32_t arg1, int32_t arg2, int32_t arg3)
{
    if (arg3 != 0)
    {
        int32_t var_4 = arg3;
        int32_t eax_2 = ctime(&var_4, var_4);
        *(eax_2 + 0x18) = 0;
        int32_t var_8_2 = eax_2;
        int32_t var_c_1 = (0x28 - arg1);
        int32_t var_10_1 = arg2;
        void* var_14 = data_414810;
        int32_t var_18 = arg1;
        return sub_403370(4);
    }
    int32_t var_8 = arg2;
    void* var_c = data_414810;
    int32_t var_10 = arg1;
    return sub_403370(6);
}

int32_t __stdcall sub_408d80(int32_t arg1)
{
    int32_t edi = 0;
    int32_t var_c = sub_40acf0(data_413ee0);
    int32_t eax_2 = sub_403370(0xc);
    if (arg1 != 0)
    {
        int32_t i;
        do
        {
            int32_t var_8;
            if (_mbschr(*(arg1 + 4), 0x24) == 0)
            {
                if (_mbspbrk(*(arg1 + 4), &data_413000) == 0)
                {
                    printf(&data_414828, *(arg1 + 4));
                    edi = sub_408cd0(edi, *(arg1 + 4));
                }
                else if (sub_40cd20(*(arg1 + 4), &var_c, &var_8) != 0)
                {
                    int32_t eax_24 = sub_404c90(&var_c);
                    int32_t eax_26 = sub_40c340(*(arg1 + 4), eax_24);
                    printf(&data_414828, eax_26);
                    edi = sub_408cd0(edi, eax_26);
                    free(eax_26);
                    if (sub_40ce00(&var_c, var_8) != 0)
                    {
                        int32_t j;
                        do
                        {
                            int32_t eax_30 = sub_404c90(&var_c);
                            int32_t eax_32 = sub_40c340(*(arg1 + 4), eax_30);
                            printf(&data_414828, eax_32);
                            edi = sub_408cd0(edi, eax_32);
                            free(eax_32);
                            j = sub_40ce00(&var_c, var_8);
                        } while (j != 0);
                    }
                }
            }
            else
            {
                void* var_20_1 = &arg_8;
                int32_t eax_5 = sub_40b700(*(arg1 + 4));
                void* var_20_2 = &data_413008;
                int32_t var_24_3 = eax_5;
                while (true)
                {
                    int32_t eax_6 = _mbstok(var_24_3, &data_413008);
                    if (eax_6 == 0)
                    {
                        break;
                    }
                    if (_mbspbrk(eax_6, &data_413000) == 0)
                    {
                        printf(&data_414828, eax_6);
                        edi = sub_408cd0(edi, eax_6);
                    }
                    else if (sub_40cd20(eax_6, &var_c, &var_8) != 0)
                    {
                        int32_t eax_10 = sub_40c340(eax_6, sub_404c90(&var_c));
                        printf(&data_414828, eax_10);
                        edi = sub_408cd0(edi, eax_10);
                        free(eax_10);
                        if (sub_40ce00(&var_c, var_8) != 0)
                        {
                            int32_t j_1;
                            do
                            {
                                int32_t eax_15 = sub_40c340(eax_6, sub_404c90(&var_c));
                                printf(&data_414828, eax_15);
                                edi = sub_408cd0(edi, eax_15);
                                free(eax_15);
                                j_1 = sub_40ce00(&var_c, var_8);
                            } while (j_1 != 0);
                        }
                    }
                    void* var_20_18 = &data_413008;
                    var_24_3 = 0;
                }
                free(eax_5);
            }
            eax_2 = arg1;
            i = *eax_2;
            arg1 = i;
        } while (i != 0);
    }
    return eax_2;
}

int32_t sub_409000()
{
    int32_t* i = &data_413428;
    sub_403370(8);
    do
    {
        void** j = *i;
        if (j != 0)
        {
            do
            {
                void* eax_1 = j[2];
                if (eax_1 != 0)
                {
                    int32_t eax_2 = *(eax_1 + 4);
                    if (eax_2 != 0)
                    {
                        int32_t var_14_1 = eax_2;
                        int32_t var_18_1 = j[1];
                        sub_403370(0xe);
                        void** k = *j[2];
                        if (k != 0)
                        {
                            do
                            {
                                int32_t eax_5 = k[1];
                                if (eax_5 != 0)
                                {
                                    printf("\t\t%s\n", eax_5);
                                }
                                k = *k;
                            } while (k != 0);
                        }
                    }
                }
                j = *j;
            } while (j != 0);
        }
        i = &i[1];
    } while (i < 0x413828);
    putchar(0xa);
    return fflush((__p__iob() + 0x20));
}

int32_t sub_4090a0()
{
    sub_403370(7);
    void** i = data_413a34;
    if (i != 0)
    {
        do
        {
            printf(&data_414848, i[2]);
            sub_403370(0xa);
            int32_t* ebp_1 = i[3];
            if (ebp_1 != 0)
            {
                printf(&data_414844, ebp_1[1]);
                void** j = *ebp_1;
                if (j != 0)
                {
                    do
                    {
                        printf("\t\t\t%s\n", j[1]);
                        j = *j;
                    } while (j != 0);
                }
            }
            putchar(0xa);
            i = *i;
        } while (i != 0);
    }
    printf("%s: ", ".SUFFIXES");
    void** i_1 = data_413a2c;
    if (i_1 != 0)
    {
        do
        {
            printf(&data_414828, i_1[1]);
            i_1 = *i_1;
        } while (i_1 != 0);
    }
    putchar(0xa);
    return fflush((__p__iob() + 0x20));
}

int32_t sub_409170()
{
    sub_403370(9);
    int32_t* i = &data_413828;
    do
    {
        int32_t* j_1 = *i;
        int32_t* j = j_1;
        if (j_1 != 0)
        {
            do
            {
                int32_t* eax_2;
                eax_2 = *(*(j[4] + 4) + 0x10);
                eax_2 = (eax_2 & 0x20);
                printf("%s:%c", j[1], (((eax_2 - eax_2) & 0xffffffe6) + 0x3a));
                int32_t edx_3 = j[1];
                data_413a84 = edx_3;
                data_413a90 = edx_3;
                data_413a8c = edx_3;
                void** k = j[4];
                if (k != 0)
                {
                    do
                    {
                        int32_t* edi_1 = k[1];
                        int32_t ebp_1 = 0;
                        sub_403370(0xb);
                        int32_t ebx_1 = 1;
                        do
                        {
                            if ((edi_1[4] & ebx_1) != 0)
                            {
                                printf("-%c ", *(data_414814 + ebp_1));
                            }
                            ebp_1 = (ebp_1 + 1);
                            ebx_1 = (ebx_1 * 2);
                        } while (ebx_1 < 0x10);
                        int32_t var_1c_3 = edi_1[1];
                        sub_408d80(*edi_1);
                        sub_403370(0xa);
                        int32_t* edi_2 = edi_1[2];
                        if (edi_2 == 0)
                        {
                            putchar(0xa);
                        }
                        else
                        {
                            int32_t eax_8 = edi_2[1];
                            if (eax_8 != 0)
                            {
                                printf(&data_414844, eax_8);
                            }
                            void** edi_3 = *edi_2;
                            if (edi_3 != 0)
                            {
                                do
                                {
                                    int32_t eax_9 = edi_3[1];
                                    if (eax_9 != 0)
                                    {
                                        printf("\t\t\t%s\n", eax_9);
                                    }
                                    edi_3 = *edi_3;
                                } while (edi_3 != 0);
                            }
                        }
                        k = *k;
                    } while (k != 0);
                }
                j = *j;
                putchar(0xa);
            } while (j != 0);
        }
        i = &i[1];
    } while (i < 0x413a28);
    data_413a84 = 0;
    data_413a90 = 0;
    data_413a8c = 0;
    putchar(0xa);
    return fflush((__p__iob() + 0x20));
}

int32_t __stdcall sub_409300(char arg1)
{
    char* eax = data_40ea24;
    data_40ea24 = (data_40ea24 - 8);
    char ecx = *eax;
    int32_t* esi_1 = (data_40ea24 + 4);
    if ((ecx == 0x16 && **&data_40ea24 == 0x16))
    {
        int32_t eax_2;
        eax_2 = arg1;
        if ((eax_2 - 1) > 0x11)
        {
            return 0;
        }
        switch (eax_2)
        {
            case 1:
            {
                if ((*esi_1 != 0 || (*esi_1 == 0 && *(eax + 4) != 0)))
                {
                    *esi_1 = 1;
                    return 1;
                }
                if ((*esi_1 == 0 && *(eax + 4) == 0))
                {
                    *esi_1 = 0;
                }
                break;
            }
            case 2:
            {
                if ((*esi_1 != 0 && *(eax + 4) != 0))
                {
                    *esi_1 = 1;
                    return 1;
                }
                *esi_1 = 0;
                return 1;
                break;
            }
            case 3:
            {
                *esi_1 = (*esi_1 | *(eax + 4));
                return 1;
                break;
            }
            case 4:
            {
                *esi_1 = (*esi_1 ^ *(eax + 4));
                return 1;
                break;
            }
            case 5:
            {
                *esi_1 = (*esi_1 & *(eax + 4));
                return 1;
                break;
            }
            case 6:
            {
                int32_t eax_16 = (*(eax + 4) - *esi_1);
                *esi_1 = ((eax_16 - eax_16) + 1);
                return 1;
                break;
            }
            case 7:
            {
                int32_t eax_21 = (*(eax + 4) - *esi_1);
                *esi_1 = (-(eax_21 - eax_21));
                return 1;
                break;
            }
            case 8:
            {
                int32_t eax_26 = 1;
                if (*(eax + 4) >= *esi_1)
                {
                    eax_26 = 0;
                }
                *esi_1 = eax_26;
                return 1;
                break;
            }
            case 9:
            {
                int32_t eax_29 = 1;
                if (*(eax + 4) <= *esi_1)
                {
                    eax_29 = 0;
                }
                *esi_1 = eax_29;
                return 1;
                break;
            }
            case 0xa:
            {
                int32_t eax_32 = 1;
                if (*(eax + 4) > *esi_1)
                {
                    eax_32 = 0;
                }
                *esi_1 = eax_32;
                return 1;
                break;
            }
            case 0xb:
            {
                int32_t eax_35 = 1;
                if (*(eax + 4) < *esi_1)
                {
                    eax_35 = 0;
                }
                *esi_1 = eax_35;
                return 1;
                break;
            }
            case 0xc:
            {
                *esi_1 = (*esi_1 >> eax[4]);
                return 1;
                break;
            }
            case 0xd:
            {
                *esi_1 = (*esi_1 << eax[4]);
                return 1;
                break;
            }
            case 0xe:
            {
                *esi_1 = (*esi_1 - *(eax + 4));
                return 1;
                break;
            }
            case 0xf:
            {
                *esi_1 = (*esi_1 + *(eax + 4));
                return 1;
                break;
            }
            case 0x10:
            {
                if (*(eax + 4) == 0)
                {
                    sub_403220(data_4133f4, 0x437);
                }
                int32_t eax_45;
                int32_t edx_1;
                edx_1 = HIGHD(*esi_1);
                eax_45 = LOWD(*esi_1);
                *esi_1 = (COMBINE(edx_1, eax_45) % *(eax + 4));
                return 1;
                break;
            }
            case 0x11:
            {
                if (*(eax + 4) == 0)
                {
                    sub_403220(data_4133f4, 0x437);
                }
                int32_t eax_49;
                int32_t edx_3;
                edx_3 = HIGHD(*esi_1);
                eax_49 = LOWD(*esi_1);
                *(eax + 4);
                *esi_1 = (COMBINE(edx_3, eax_49) / *(eax + 4));
                return 1;
                break;
            }
            case 0x12:
            {
                *esi_1 = (*(eax + 4) * *esi_1);
                return 1;
                break;
            }
        }
    label_409367:
        return 1;
    }
    if ((ecx == 0x17 && **&data_40ea24 == 0x17))
    {
        int32_t ebx;
        ebx = arg1;
        if ((ebx == 7 || ebx == 6))
        {
            **&data_40ea24 = 0x16;
            int32_t eax_57 = _mbscmp(*esi_1, *(eax + 4));
            *esi_1 = (-(eax_57 - eax_57));
            if ((ebx == 6 && sub_4095c0(0x15) == 0))
            {
                return 0;
            }
            goto label_409367;
        }
    }
    return 0;
}

int32_t __stdcall sub_4095c0(char arg1)
{
    int32_t* ecx = (data_40ea24 + 4);
    if (**&data_40ea24 != 0x16)
    {
        return 0;
    }
    int32_t eax_1;
    eax_1 = arg1;
    if (eax_1 == 0x13)
    {
        *ecx = (-*ecx);
        return 1;
    }
    if (eax_1 == 0x14)
    {
        *ecx = (!*ecx);
        return 1;
    }
    if (eax_1 == 0x15)
    {
        *ecx = (-(eax_1 - eax_1));
        return 1;
    }
    return 0;
}

char* sub_409620()
{
    data_40ea18 = (data_40ea18 + 1);
    char* esi = data_40ea18;
    if (*esi != 0)
    {
        do
        {
            char* eax_1 = data_40ea18;
            if (*eax_1 == 0x22)
            {
                if (eax_1[1] != 0x22)
                {
                    break;
                }
                data_40ea18 = &eax_1[1];
            }
            data_40ea18 = (data_40ea18 + 1);
        } while (**&data_40ea18 != 0);
    }
    if (**&data_40ea18 == 0)
    {
        int32_t var_8_1 = 0x22;
        sub_403220(data_4133f4, 0x3fe);
    }
    **&data_40ea18 = 0;
    data_40ea18 = (data_40ea18 + 1);
    return esi;
}

char* sub_409690()
{
    data_40ea18 = (data_40ea18 + 1);
    char* esi = data_40ea18;
    if (*esi != 0)
    {
        do
        {
            char* eax_1;
            eax_1 = **&data_40ea18;
            char* edx_2;
            if (eax_1 == 0x5e)
            {
                edx_2 = (data_40ea18 + 1);
                if (*edx_2 == 0x5d)
                {
                    char* edi_1 = edx_2;
                    int32_t i = 0xffffffff;
                    while (i != 0)
                    {
                        bool cond:0_1 = 0 != *edi_1;
                        edi_1 = &edi_1[1];
                        i = (i - 1);
                        if ((!cond:0_1))
                        {
                            break;
                        }
                    }
                    memmove(data_40ea18, edx_2, (!i));
                }
            }
            if (((eax_1 != 0x5e || (eax_1 == 0x5e && *edx_2 != 0x5d)) && eax_1 == 0x5d))
            {
                break;
            }
            data_40ea18 = (data_40ea18 + 1);
        } while (**&data_40ea18 != 0);
    }
    if (**&data_40ea18 == 0)
    {
        int32_t var_10_2 = 0x5d;
        sub_403220(data_4133f4, 0x3fe);
    }
    **&data_40ea18 = 0;
    data_40ea18 = (data_40ea18 + 1);
    return esi;
}

uint32_t __stdcall sub_409730(char arg1)
{
    int32_t ebx;
    if (arg1 == 0x19)
    {
        ebx = 3;
    }
    else if (arg1 == 0)
    {
        ebx = 4;
    }
    else
    {
        ebx = 0;
        if (arg1 <= 0x15)
        {
            ebx = 2;
            ebx = (2 - 1);
        }
    }
    uint32_t eax_1;
    eax_1 = data_40ea1c;
    int32_t ecx;
    ecx = ebx;
    if (*(((eax_1 * 5) + ecx) + 0x414880) == 0)
    {
        eax_1 = sub_403220(data_4133f4, 0x3ff);
    }
    data_40ea1c = ebx;
    return eax_1;
}

int32_t __stdcall sub_409790(char arg1, int32_t arg2)
{
    int32_t ebx;
    ebx = arg1;
    sub_409730(ebx);
    data_40ea08 = ebx;
    data_40ea10 = ebx;
    data_40ea14 = arg2;
    return arg2;
}

char* __stdcall sub_4097c0(char* arg1)
{
    char* ecx = data_40ea18;
    char* eax = arg1;
    if (*eax != 0)
    {
        while (*ecx == *eax)
        {
            ecx = &ecx[1];
            eax = &eax[1];
            if (*eax == 0)
            {
                break;
            }
        }
        if (*eax != 0)
        {
            eax = 0;
            return eax;
        }
    }
    eax = 1;
    data_40ea18 = ecx;
    return eax;
}

uint32_t sub_409800()
{
    int32_t ebx;
    ebx = **&data_40ea18;
    if (((ebx == 0x20 || ebx == 9) && _ismbcspace(ebx) != 0))
    {
        int32_t i;
        do
        {
            data_40ea18 = (data_40ea18 + 1);
            ebx = **&data_40ea18;
            i = _ismbcspace(ebx);
        } while (i != 0);
    }
    char* eax_4;
    eax_4 = ebx;
    int32_t* esi;
    if ((eax_4[0x4149c0] & 0x80) == 0)
    {
        esi = &data_414948;
    }
    else
    {
        esi = &data_4148a0;
        if (data_4148a0 != 0)
        {
            do
            {
                if (sub_4097c0(*esi) != 0)
                {
                    break;
                }
                esi = &esi[2];
            } while (*esi != 0);
        }
    }
    if (*esi != 0)
    {
        eax_4 = esi[1];
        return sub_409790(eax_4, 0);
    }
    if (ebx == 0x2d)
    {
        data_40ea18 = (data_40ea18 + 1);
        if (data_40ea08 != 0x16)
        {
            return sub_409790(0x13, 0);
        }
        return sub_409790(0xe, 0);
    }
    if (ebx == 0x22)
    {
        return sub_409790(0x17, sub_409620());
    }
    if (ebx == 0x5b)
    {
        return sub_409790(0x18, sub_409690());
    }
    if (_ismbcdigit(ebx) != 0)
    {
        int32_t ebx_1 = data_40ea18;
        *_errno() = 0;
        int32_t eax_17 = strtol(data_40ea18, 0x40ea18, 0);
        if (*_errno() == 0x22)
        {
            int32_t var_10_7 = ebx_1;
            **&data_40ea18 = 0;
            sub_403220(data_4133f4, 0x436);
        }
        if (_mbctoupper(**&data_40ea18) == 0x4c)
        {
            data_40ea18 = (data_40ea18 + 1);
        }
        return sub_409790(0x16, eax_17);
    }
    if (ebx == 0)
    {
        data_40ea20 = 1;
        return sub_409790(0, 0);
    }
    if (_mbsnbicmp(data_40ea18, "DEFINED", 7) != 0)
    {
        if (_mbsnbicmp(data_40ea18, "EXIST", 5) != 0)
        {
            return sub_403220(data_4133f4, 0x3ff);
        }
        int32_t eax_35 = _mbschr(data_40ea18, 0x28);
        if (eax_35 == 0)
        {
            sub_403220(data_4133f4, 0x3ff);
        }
        char* eax_38 = (_mbscspn((eax_35 + 1), &data_4149a0) + (eax_35 + 1));
        data_40ea18 = eax_38;
        *eax_38 = 0;
        data_40ea18 = (data_40ea18 + 1);
        return sub_409790(0x16, sub_409de0((eax_35 + 1)));
    }
    int32_t eax_26 = _mbschr(data_40ea18, 0x28);
    if (eax_26 == 0)
    {
        sub_403220(data_4133f4, 0x3ff);
    }
    char* eax_29 = (_mbscspn((eax_26 + 1), &data_4149a0) + (eax_26 + 1));
    data_40ea18 = eax_29;
    *eax_29 = 0;
    data_40ea18 = (data_40ea18 + 1);
    return sub_409790(0x16, sub_409d70((eax_26 + 1)));
}

int32_t __stdcall sub_409a90(char* arg1)
{
    data_40ea24 = (data_40ea24 + 8);
    if (*arg1 != 0x18)
    {
        int32_t* ecx_2 = data_40ea24;
        int32_t eax_2 = *(arg1 + 4);
        *ecx_2 = *arg1;
        ecx_2[1] = eax_2;
        return eax_2;
    }
    int32_t var_4 = 0;
    int32_t eax_1 = sub_403af0(*(arg1 + 4), 0, 1, nullptr);
    *(data_40ea24 + 4) = eax_1;
    **&data_40ea24 = 0x16;
    return eax_1;
}

uint32_t sub_409ae0()
{
    char* i = &data_40ee30;
    if (data_40ea0c > 0x40ee30)
    {
        do
        {
            char ecx = *i;
            if (ecx > 0x15)
            {
                sub_409a90(i);
            }
            else
            {
                int32_t (__stdcall* eax_1)(char arg1) = sub_4095c0;
                if (ecx <= 0x12)
                {
                    eax_1 = sub_409300;
                }
                if (eax_1(ecx) == 0)
                {
                    sub_403220(data_4133f4, 0x438);
                }
            }
            i = &i[8];
        } while (i < data_40ea0c);
    }
    if (data_40ea24 == 0x40fe30)
    {
        char* eax_4 = data_40ea24;
        if (*eax_4 == 0x16)
        {
            return ((eax_4 - eax_4) + 1);
        }
    }
    return sub_403220(data_4133f4, 0x3ff);
}

int32_t sub_409b70()
{
    if (data_40ea24 < 0x40fe30)
    {
        sub_403220(data_4133f4, 0x3ff);
    }
    if (data_414954 < data_40ea0c)
    {
        sub_403220(data_4133f4, 0x412);
    }
    int32_t* eax_4 = data_40ea24;
    int32_t* ecx = data_40ea0c;
    int32_t eax_5 = eax_4[1];
    *ecx = *eax_4;
    ecx[1] = eax_5;
    data_40ea24 = (data_40ea24 - 8);
    data_40ea0c = (data_40ea0c + 8);
    return eax_5;
}

uint32_t sub_409be0()
{
    data_40ea24 = 0x40fe30;
    data_40ea0c = 0x40ee30;
    data_40ea1c = 3;
    data_40ea08 = 0x19;
    data_40ea20 = 0;
    sub_409790(0x19, 0);
    int32_t* edx = data_40ea24;
    int32_t ecx = data_40ea14;
    *edx = *data_40ea10;
    edx[1] = ecx;
    if (data_40ea20 == 0)
    {
        do
        {
            int32_t esi_1 = 0;
            sub_409800();
            if (data_40ea10 != 0x19)
            {
                void* ecx_1;
                ecx_1 = **&data_40ea24;
                void* edx_1;
                edx_1 = data_40ea10;
                char* eax_1;
                eax_1 = *(edx_1 + 0x414860);
                if (*(ecx_1 + 0x414860) >= eax_1)
                {
                    char* eax_6;
                    void* ecx_2;
                    do
                    {
                        void* eax_2;
                        eax_2 = data_40ea10;
                        if (*(eax_2 + 0x414860) != 0)
                        {
                            sub_409b70();
                        }
                        else
                        {
                            if (**&data_40ea24 != 0x19)
                            {
                                do
                                {
                                    sub_409b70();
                                } while (**&data_40ea24 != 0x19);
                            }
                            esi_1 = 1;
                            if (data_40ea24 >= 0x40fe30)
                            {
                                data_40ea24 = (data_40ea24 - 8);
                                break;
                            }
                            sub_403220(data_4133f4, 0x3ff);
                        }
                        ecx_2 = **&data_40ea24;
                        void* edx_2;
                        edx_2 = data_40ea10;
                        eax_6 = *(edx_2 + 0x414860);
                    } while (*(ecx_2 + 0x414860) >= eax_6);
                }
            }
            if (esi_1 == 0)
            {
                if (data_414950 != data_40ea24)
                {
                    data_40ea24 = (data_40ea24 + 8);
                    int32_t* edx_3 = data_40ea24;
                    int32_t ecx_3 = data_40ea14;
                    *edx_3 = *data_40ea10;
                    edx_3[1] = ecx_3;
                }
                else
                {
                    sub_403220(data_4133f4, 0x412);
                }
            }
        } while (data_40ea20 == 0);
    }
    if (data_40ea24 != 0x40fe28)
    {
        sub_403220(data_4133f4, 0x3ff);
    }
    return sub_409ae0();
}

int32_t __stdcall sub_409d70(int32_t arg1)
{
    int32_t eax = _mbstok(arg1, &data_413008);
    if (_mbstok(0, &data_413008) != 0)
    {
        int32_t var_c_1 = eax;
        sub_403220(data_4133f4, 0x409);
    }
    if (eax == 0)
    {
        sub_403220(data_4133f4, 0x417);
    }
    void* eax_4 = sub_407b70(eax);
    return ((eax_4 - eax_4) + 1);
}

int32_t __stdcall sub_409de0(int32_t arg1)
{
    int32_t esi = 0;
    int32_t eax = _mbstok(arg1, &data_413008);
    if (_mbstok(0, &data_413008) != 0)
    {
        int32_t var_14_1 = eax;
        sub_403220(data_4133f4, 0x409);
    }
    int32_t edi;
    int32_t var_4;
    if (eax == 0)
    {
        edi = var_4;
    }
    else
    {
        edi = sub_40ca30(eax);
    }
    if ((eax == 0 || (eax != 0 && edi == 0)))
    {
        sub_403220(data_4133f4, 0x417);
    }
    if (_access(edi, 0) == 0)
    {
        esi = 1;
    }
    free(edi);
    return esi;
}

uint32_t __stdcall sub_409e80(char* arg1, char arg2)
{
    if (*arg1 == 0)
    {
        sub_403220(data_4133f4, 0x3fa);
    }
    int32_t eax_2;
    eax_2 = arg2;
    if ((eax_2 - 4) > 3)
    {
        data_40ea18 = arg1;
        return sub_409be0();
    }
    if ((eax_2 == 4 || eax_2 == 6))
    {
        return sub_409d70(arg1);
    }
    if ((eax_2 == 5 || eax_2 == 7))
    {
        int32_t eax_6 = sub_409d70(arg1);
        return (-(eax_6 - eax_6));
    }
}

int32_t* __stdcall sub_409ef0(char* arg1, void* arg2, char* arg3)
{
    int32_t* i_2 = data_413a34;
    int32_t* i_1 = i_2;
    if (i_2 != 0)
    {
        int32_t* i;
        do
        {
            void* ecx_1 = i_1[2];
            void* var_10_1 = ecx_1;
            int32_t eax_1 = _mbsrchr(ecx_1, 0x2e);
            int32_t var_c_1 = eax_1;
            if (sub_40c980(eax_1, arg3) == 0)
            {
                char* ebx_2 = (var_10_1 + 1);
                *arg1 = 0;
                int32_t eax_2;
                if (*ebx_2 != 0)
                {
                    do
                    {
                        eax_2 = *ebx_2;
                        if (eax_2 == 0x7b)
                        {
                            break;
                        }
                        if (eax_2 == 0x5e)
                        {
                            ebx_2 = &ebx_2[1];
                        }
                        else if (eax_2 == 0x22)
                        {
                            ebx_2 = &ebx_2[1];
                            if (*ebx_2 != 0x22)
                            {
                                do
                                {
                                    ebx_2 = &ebx_2[1];
                                } while (*ebx_2 != 0x22);
                            }
                        }
                        ebx_2 = &ebx_2[1];
                    } while (*ebx_2 != 0);
                }
                eax_2 = *ebx_2;
                int32_t eax_11;
                int32_t ebp_3;
                void* esi_3;
                if (eax_2 != 0)
                {
                    char* edi_1 = ebx_2;
                    do
                    {
                        eax_2 = *edi_1;
                        if (eax_2 == 0x7d)
                        {
                            break;
                        }
                        if (eax_2 == 0x5e)
                        {
                            edi_1 = &edi_1[1];
                        }
                        edi_1 = &edi_1[1];
                    } while (*edi_1 != 0);
                    char* esi_1 = arg2;
                    ebp_3 = ((edi_1 - ebx_2) - 1);
                    if (*esi_1 == 0x22)
                    {
                        esi_1 = &esi_1[1];
                    }
                    void* var_c_2 = &ebx_2[1];
                    if (ebp_3 != 0)
                    {
                        while (true)
                        {
                            void* eax_4;
                            eax_4 = *var_c_2;
                            if ((eax_4 == 0x5c || eax_4 == 0x2f))
                            {
                                eax_4 = *esi_1;
                            }
                            int32_t eax_6;
                            int32_t eax_8;
                            if ((eax_4 != 0x5c && eax_4 != 0x2f))
                            {
                                eax_6 = _mbctoupper(*esi_1);
                                eax_8 = _mbctoupper(eax_4);
                            }
                            if (((eax_4 == 0x5c || ((eax_4 != 0x5c && eax_4 != 0x2f) && eax_6 == eax_8)) || eax_4 == 0x2f))
                            {
                                ebp_3 = (ebp_3 - 1);
                                esi_1 = &esi_1[1];
                                var_c_2 = (var_c_2 + 1);
                                if (ebp_3 == 0)
                                {
                                    break;
                                }
                                continue;
                            }
                            if (((((eax_4 != 0x5c && eax_4 != 0x2f) && eax_6 != eax_8) || eax_4 == 0x5c) || eax_4 == 0x2f))
                            {
                                ebp_3 = 0xffffffff;
                                break;
                            }
                        }
                    }
                    if (ebp_3 != 0xffffffff)
                    {
                        esi_3 = (arg2 + (edi_1 - ebx_2));
                        var_c_1 = ebx_2;
                        eax_11 = _mbschr(esi_3, 0x5c);
                        if (eax_11 == 0)
                        {
                            eax_11 = _mbschr(esi_3, 0x2f);
                        }
                        if (eax_11 == esi_3)
                        {
                            eax_11 = edi_1[0xffffffff];
                        }
                    }
                }
                if (((eax_2 == 0 || ((eax_2 != 0 && ebp_3 != 0xffffffff) && eax_11 == 0)) || ((((eax_2 != 0 && ebp_3 != 0xffffffff) && eax_11 == esi_3) && eax_11 != 0x5c) && eax_11 != 0x2f)))
                {
                    void* ebx_5;
                    if (*var_10_1 != 0x7b)
                    {
                        int32_t eax_21;
                        if (*ebx_2 == 0)
                        {
                            eax_21 = arg2;
                        }
                        else
                        {
                            eax_21 = _mbsrchr(arg2, 0x2e);
                            char ecx_19;
                            if (*eax_21 != 0x3a)
                            {
                                do
                                {
                                    ecx_19 = *eax_21;
                                    if (ecx_19 == 0x5c)
                                    {
                                        break;
                                    }
                                    if (ecx_19 == 0x2f)
                                    {
                                        break;
                                    }
                                    if (eax_21 <= arg2)
                                    {
                                        break;
                                    }
                                    eax_21 = (eax_21 - 1);
                                } while (*eax_21 != 0x3a);
                            }
                            ecx_19 = *eax_21;
                            if (((ecx_19 == 0x3a || ecx_19 == 0x5c) || ecx_19 == 0x2f))
                            {
                                eax_21 = (eax_21 + 1);
                            }
                        }
                        int32_t esi_9 = 0;
                        void* ebx_8 = (arg3 - eax_21);
                        if ((eax_21 != arg2 && *arg2 == 0x22))
                        {
                            esi_9 = 1;
                            *arg1 = 0x22;
                        }
                        ebx_5 = (ebx_8 + esi_9);
                        _mbsnbcpy(&arg1[esi_9], eax_21, ebx_8);
                        goto label_40a1e3;
                    }
                    char* ebx_3 = (var_10_1 + 1);
                    if (*ebx_3 != 0)
                    {
                        do
                        {
                            char* eax_12;
                            eax_12 = *ebx_3;
                            if (eax_12 == 0x7d)
                            {
                                break;
                            }
                            if (eax_12 == 0x5e)
                            {
                                ebx_3 = &ebx_3[1];
                            }
                            ebx_3 = &ebx_3[1];
                        } while (*ebx_3 != 0);
                    }
                    void* ebx_4 = (ebx_3 - (var_10_1 + 1));
                    if (ebx_3 == (var_10_1 + 1))
                    {
                        ebx_4 = 2;
                        _mbsnbcpy(arg1, &data_4149b8, 2);
                        var_10_1 = (var_10_1 + 2);
                    }
                    else
                    {
                        _mbsnbcpy(arg1, (var_10_1 + 1), ebx_4);
                        void* edx_1 = ((ebx_4 + (var_10_1 + 1)) + 1);
                        var_10_1 = edx_1;
                        if (*(edx_1 - 2) != 0x5c)
                        {
                            ebx_4 = (ebx_4 + 1);
                            *((ebx_4 + arg1) - 1) = 0x5c;
                        }
                    }
                    int32_t eax_14 = _mbsrchr(arg2, 0x5c);
                    int32_t eax_15 = _mbsrchr(arg2, 0x2f);
                    if (eax_15 <= eax_14)
                    {
                        eax_15 = eax_14;
                    }
                    if (eax_15 == 0)
                    {
                        void* edi_7 = arg2;
                        int32_t j = 0xffffffff;
                        while (j != 0)
                        {
                            bool cond:2_1 = 0 != *edi_7;
                            edi_7 = (edi_7 + 1);
                            j = (j - 1);
                            if ((!cond:2_1))
                            {
                                break;
                            }
                        }
                        int32_t ecx_14 = (!j);
                        __builtin_memcpy((arg1 + ebx_4), (edi_7 - ecx_14), ((ecx_14 >> 2) << 2));
                        int32_t esi_8;
                        int32_t edi_11;
                        __builtin_memcpy(edi_11, esi_8, (ecx_14 & 3));
                        ebx_5 = ((ebx_4 - arg2) + arg3);
                    }
                    else
                    {
                        int32_t edi_2 = (eax_15 + 1);
                        int32_t j_1 = 0xffffffff;
                        while (j_1 != 0)
                        {
                            bool cond:3_1 = 0 != *edi_2;
                            edi_2 = (edi_2 + 1);
                            j_1 = (j_1 - 1);
                            if ((!cond:3_1))
                            {
                                break;
                            }
                        }
                        int32_t ecx_10 = (!j_1);
                        __builtin_memcpy((arg1 + ebx_4), (edi_2 - ecx_10), ((ecx_10 >> 2) << 2));
                        int32_t esi_6;
                        int32_t edi_6;
                        __builtin_memcpy(edi_6, esi_6, (ecx_10 & 3));
                        ebx_5 = (ebx_4 + ((arg3 - eax_15) - 1));
                    }
                label_40a1e3:
                    void* esi_11 = (var_c_1 - var_10_1);
                    if ((ebx_5 + esi_11) > 0x101)
                    {
                        sub_403220(0, 0x434);
                    }
                    _mbsnbcpy((arg1 + ebx_5), var_10_1, esi_11);
                    if (*arg1 == 0x22)
                    {
                        char* eax_28 = (esi_11 + arg1);
                        esi_11 = (esi_11 + 1);
                        *(eax_28 + ebx_5) = 0x22;
                    }
                    *((arg1 + esi_11) + ebx_5) = 0;
                    int32_t eax_32 = sub_40aec0(arg1, 0x80, 0x413828, 1);
                    int32_t eax_33;
                    if (eax_32 == 0)
                    {
                        eax_33 = sub_40cbf0(arg1, &arg_10);
                    }
                    if ((eax_32 != 0 || (eax_32 == 0 && eax_33 != 0)))
                    {
                        sub_404cc0(&arg_10, *(eax_32 + 0xc));
                    }
                    if (((eax_32 != 0 || (eax_32 == 0 && eax_33 != 0)) || (eax_32 == 0 && eax_33 != 0)))
                    {
                        return i_1;
                    }
                }
            }
            i = *i_1;
            i_1 = i;
        } while (i != 0);
    }
    return 0;
}

void __stdcall sub_40a2a0(void** arg1, int32_t arg2)
{
    void** i = arg1;
    void** i_1 = i;
    if (i != 0)
    {
        do
        {
            if ((arg2 != 0 && (data_4133d4 & 1) != 0))
            {
                int32_t var_14_1 = i[2];
                sub_403220(0, 0xfa5);
            }
            free(i[2]);
            sub_402c40(i[3]);
            sub_402c40(i[4]);
            i = *i;
            void** i_2 = i_1;
            i_1 = i;
            free(i_2);
        } while (i != 0);
    }
}

int32_t __stdcall sub_40a310(void* arg1, void** arg2)
{
    void** i = arg2;
    if (i != 0)
    {
        do
        {
            if (_mbsicmp(i[2], *(arg1 + 8)) == 0)
            {
                free(*(arg1 + 8));
                int32_t* j = *(arg1 + 0xc);
                if (j != 0)
                {
                    do
                    {
                        *(arg1 + 0xc) = *j;
                        free(j[1]);
                        sub_40ada0(j);
                        j = *(arg1 + 0xc);
                    } while (j != 0);
                }
                free(arg1);
                return 1;
            }
            i = *i;
        } while (i != 0);
    }
    return 0;
}

char* __stdcall sub_40a390(char* arg1)
{
    char* eax = arg1;
    char ecx = *eax;
    if (ecx == 0x7b)
    {
        if (ecx != 0x7d)
        {
            do
            {
                char* ecx_1 = eax;
                eax = &eax[1];
                if (*ecx_1 == 0x5e)
                {
                    eax = &eax[1];
                }
            } while (*eax != 0x7d);
        }
        eax = &eax[1];
    }
    return eax;
}

int32_t* sub_40a3c0()
{
    int32_t* eax = data_413a34;
    data_413a34 = 0;
    int32_t* i_2 = data_413a2c;
    int32_t* j_2 = eax;
    int32_t* i_1 = i_2;
    int32_t var_10 = 0;
    if (i_2 != 0)
    {
        int32_t* i;
        do
        {
            int32_t ecx = i_1[1];
            int32_t edi_1 = ecx;
            int32_t j = 0xffffffff;
            while (j != 0)
            {
                bool cond:1_1 = 0 != *edi_1;
                edi_1 = (edi_1 + 1);
                j = (j - 1);
                if ((!cond:1_1))
                {
                    break;
                }
            }
            int32_t* j_1 = j_2;
            if (j_1 != 0)
            {
                do
                {
                    char* eax_3 = sub_40a390(j_1[2]);
                    int32_t eax_5 = _mbsnbicmp(ecx, eax_3, ((!j) - 1));
                    if (eax_5 == 0)
                    {
                        eax_5 = eax_3[((!j) - 1)];
                        if ((eax_5 == 0x2e || eax_5 == 0x7b))
                        {
                            int32_t* j_3 = j_1;
                            int32_t* eax_6 = j_1[1];
                            if (eax_6 == 0)
                            {
                                j_2 = *j_1;
                            }
                            else
                            {
                                *eax_6 = *j_1;
                            }
                            void* eax_8 = *j_1;
                            if (eax_8 != 0)
                            {
                                *(eax_8 + 4) = j_1[1];
                            }
                            j_1 = *j_1;
                            *j_3 = 0;
                            if (sub_40a310(j_3, data_413a34) == 0)
                            {
                                void** k = j_3[3];
                                if (k != 0)
                                {
                                    do
                                    {
                                        sub_40b110(k[1], &var_10, nullptr, 0, 0, 0, 0);
                                        k = *k;
                                    } while (k != 0);
                                }
                                j_3[4] = var_10;
                                var_10 = 0;
                                sub_40ae30(&data_413a34, j_3);
                            }
                        }
                    }
                    if ((eax_5 != 0 || ((eax_5 == 0 && eax_5 != 0x2e) && eax_5 != 0x7b)))
                    {
                        j_1 = *j_1;
                    }
                } while (j_1 != 0);
            }
            eax = i_1;
            i = *eax;
            i_1 = i;
        } while (i != 0);
    }
    if (j_2 != 0)
    {
        eax = sub_40a2a0(j_2, 1);
    }
    return eax;
}

int32_t* __stdcall sub_40a500(void* arg1, char* arg2, uint32_t arg3, int32_t* arg4, int32_t* arg5, int32_t* arg6, int32_t* arg7, int32_t* arg8)
{
    sub_40ceb4(((data_413ee0 + 3) & 0xfffffffc));
    int32_t __saved_edi;
    int32_t* var_10 = &__saved_edi;
    int32_t eax_4 = _mbsrchr(*(arg1 + 4), 0x2e);
    if (eax_4 != 0)
    {
        int32_t* var_20_1 = var_10;
        int32_t* eax_6 = sub_409ef0(arg2, *(arg1 + 4), eax_4);
        if (eax_6 != 0)
        {
            int32_t var_8 = sub_404ca0(&var_10);
            *arg8 = arg2;
            void** i = *arg5;
            int32_t* ecx_2;
            if (i != 0)
            {
                do
                {
                    int32_t eax_10;
                    eax_10 = _mbsicmp(i[1], arg2);
                    if (eax_10 == 0)
                    {
                        break;
                    }
                    i = *i;
                } while (i != 0);
                if (i != 0)
                {
                    *(arg1 + 8) = (*(arg1 + 8) & 0xfe);
                }
            }
            ecx_2 = *(arg1 + 8);
            uint32_t eax_11 = sub_402080(arg2, ecx_2, &var_8, 0);
            *arg6 = (*arg6 + eax_11);
            if (((*(arg1 + 8) & 0x10) == 0 && arg3 >= var_8))
            {
                if (data_4133b8 == 0)
                {
                label_40a605:
                    int32_t edx = var_8;
                    int32_t ecx_5 = *arg7;
                    if (ecx_5 <= edx)
                    {
                        ecx_5 = edx;
                    }
                    *arg7 = ecx_5;
                    return eax_6;
                }
                if (arg3 != var_8)
                {
                    goto label_40a605;
                }
            }
            if (i == 0)
            {
                int32_t* eax_12 = sub_40ad20();
                eax_12[1] = sub_40add0(arg2);
                sub_40ae30(arg4, eax_12);
                if (*arg5 == 0)
                {
                    *arg5 = *arg4;
                }
                goto label_40a5e8;
            }
        label_40a5e8:
            eax_11 = *(arg1 + 8);
            if (((eax_11 & 1) != 0 && (eax_11 & 0x10) == 0))
            {
                int32_t var_20_6 = *(arg1 + 4);
                char* var_24_5 = arg2;
                sub_403370(3);
            }
            goto label_40a605;
        }
    }
    return 0;
}

int32_t sub_40a630()
{
    int32_t i = 0;
    int32_t eax_1;
    do
    {
        eax_1 = _ismbcalnum(i);
        if (eax_1 != 0)
        {
            eax_1 = i;
            *(eax_1 + 0x4149c0) = (*(eax_1 + 0x4149c0) | 1);
        }
        i = (i + 1);
    } while (i <= 0x7f);
    return eax_1;
}

char* __stdcall sub_40a660(int32_t arg1)
{
    int32_t esi = data_414ac0;
    if (esi == 0)
    {
        int32_t eax_1 = data_414ac4;
        int32_t eax_2;
        if (eax_1 != 0)
        {
            eax_2 = fopen(eax_1, &data_413390);
            data_414ac0 = eax_2;
            if (eax_2 != 0)
            {
                sub_40cf7b(sub_40a9f0);
                esi = data_414ac0;
            }
        }
        if ((eax_1 == 0 || (eax_1 != 0 && eax_2 == 0)))
        {
            data_414ac0 = 0xffffffff;
            return 0x413060;
        }
    }
    else if (esi == 0xffffffff)
    {
        return 0x413060;
    }
    fseek(esi, sub_40aa70(arg1), 0);
    return sub_40a6f0(arg1, &data_40ea28, 0x400);
}

char* __stdcall sub_40a6f0(int32_t arg1, char* arg2, int32_t arg3)
{
    char* eax_5;
    while (true)
    {
        int32_t eax_2 = ftell(data_414ac0);
        if (fgets(arg2, arg3, data_414ac0) == 0)
        {
            return 0x413060;
        }
        int32_t var_8;
        eax_5 = sub_40a820(arg2, &var_8);
        if (arg1 != var_8)
        {
            int32_t eax_7;
            int32_t edx_1;
            edx_1 = HIGHD(var_8);
            eax_7 = LOWD(var_8);
            if ((COMBINE(edx_1, eax_7) % 0x3e8) != 0x3e7)
            {
                continue;
            }
            else if (arg1 != var_8)
            {
                int32_t eax_10;
                int32_t edx_3;
                edx_3 = HIGHD(arg1);
                eax_10 = LOWD(arg1);
                int32_t eax_13;
                int32_t edx_4;
                edx_4 = HIGHD(var_8);
                eax_13 = LOWD(var_8);
                if ((COMBINE(edx_3, eax_10) / 0xfffffc18) == (COMBINE(edx_4, eax_13) / 0xfffffc18))
                {
                    break;
                }
                continue;
            }
        }
        sub_40aa20(eax_2, arg1);
        break;
    }
    return sub_40a7a0(eax_5);
}

char* __stdcall sub_40a7a0(char* arg1)
{
    char* edi = arg1;
    char* eax_1;
    do
    {
        eax_1 = edi;
        edi = &edi[1];
    } while (*eax_1 != 0x22);
    char* ebx = edi;
    char* ebp = edi;
    if (*edi != 0x22)
    {
        do
        {
            int32_t eax_2 = __p__mbctype();
            int32_t ecx_1;
            ecx_1 = *edi;
            if ((*((ecx_1 + eax_2) + 1) & 4) != 0)
            {
                eax_2 = *edi;
                edi = &edi[1];
                *ebx = eax_2;
            }
            else if (*edi == 0x5c)
            {
                eax_2 = edi[1];
                edi = &edi[1];
                if (eax_2 == 0x6e)
                {
                    *edi = 0xa;
                }
                if (eax_2 == 0x74)
                {
                    *edi = 9;
                }
                if (((eax_2 != 0x6e && eax_2 != 0x74) && eax_2 != 0x22))
                {
                    *ebx = 0x5c;
                }
            }
            if (((*((ecx_1 + eax_2) + 1) & 4) != 0 || (((((*((ecx_1 + eax_2) + 1) & 4) == 0 && *edi == 0x5c) && eax_2 != 0x6e) && eax_2 != 0x74) && eax_2 != 0x22)))
            {
                ebx = &ebx[1];
            }
            if ((((*((ecx_1 + eax_2) + 1) & 4) == 0 && *edi == 0x5c) && eax_2 == 0x22))
            {
                *edi = 0x22;
            }
            eax_2 = *edi;
            edi = &edi[1];
            *ebx = eax_2;
            ebx = &ebx[1];
        } while (*edi != 0x22);
    }
    *ebx = 0;
    return ebp;
}

char* __stdcall sub_40a820(char* arg1, int32_t* arg2)
{
    int32_t ebx = 0;
    char* edi = arg1;
    if (*edi != 0)
    {
        do
        {
            int32_t eax_3;
            if (*__p___mb_cur_max() <= 1)
            {
                int32_t eax_5;
                eax_5 = *(*__p__pctype() + (*edi << 1));
                eax_3 = (eax_5 & 4);
            }
            else
            {
                eax_3 = _isctype(*edi, 4);
            }
            if (eax_3 == 0)
            {
                break;
            }
            edi = &edi[1];
            ebx = ((edi[0xffffffff] + (ebx * 0xa)) - 0x30);
        } while (*edi != 0);
    }
    *arg2 = ebx;
    return edi;
}

int32_t __stdcall sub_40a890(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t eax;
    int32_t eax_2;
    int32_t eax_3;
    int32_t eax_5;
    if (arg3 != 0)
    {
        void var_408;
        void var_204;
        _splitpath(arg2, &var_408, &var_204, 0, 0);
        void var_404;
        void var_304;
        _splitpath(arg1, 0, 0, &var_404, &var_304);
        void var_104;
        _makepath(&var_104, &var_408, &var_204, &var_404, &var_304);
        eax_3 = _access(&var_104, 0);
        if (eax_3 != 0)
        {
            _makepath(&var_104, 0, 0, &var_404, &var_304);
            eax_5 = _access(&var_104, 0);
            if (eax_5 != 0)
            {
                fprintf((__p__iob("WARNING:  missing %s; displaying…", arg1) + 0x40));
            }
            else
            {
                data_414ac4 = _strdup(&var_104);
                eax_2 = 0;
            }
        }
        else
        {
            data_414ac4 = _strdup(&var_104);
            eax_2 = 0;
        }
    }
    else
    {
        eax = _access(arg1, 0);
        if (eax == 0)
        {
            data_414ac4 = _strdup(arg1);
            eax_2 = 0;
        }
    }
    if ((((arg3 != 0 && eax_3 != 0) && eax_5 != 0) || (arg3 == 0 && eax != 0)))
    {
        eax_2 = 1;
    }
    return eax_2;
}

int32_t sub_40a9f0()
{
    int32_t eax_1 = data_414ac0;
    if (eax_1 != 0)
    {
        fclose(eax_1);
    }
    int32_t eax = data_414ac4;
    if (eax != 0)
    {
        eax = free(eax);
    }
    return eax;
}

int32_t __stdcall sub_40aa20(int32_t arg1, int32_t arg2)
{
    int32_t eax = 0;
    int32_t* edx = &data_414ac8;
    while (true)
    {
        int32_t ecx_1 = *edx;
        if (ecx_1 != 0)
        {
            if (arg2 == ecx_1)
            {
                break;
            }
            edx = &edx[2];
            eax = (eax + 1);
            if (edx < "WARNING:  missing %s; displaying…")
            {
                continue;
            }
        }
        if (eax >= 0x14)
        {
            break;
        }
        *((eax << 3) + &data_414ac8) = arg2;
        int32_t ecx_2 = (eax << 3);
        eax = arg1;
        *(ecx_2 + 0x414acc) = eax;
        break;
    }
    return eax;
}

int32_t __stdcall sub_40aa70(int32_t arg1)
{
    int32_t i = 0;
    int32_t i_1 = 0xffffffff;
    int32_t edi = 0x7fff;
    do
    {
        int32_t eax_1 = *((i << 3) + &data_414ac8);
        if (eax_1 == 0)
        {
            break;
        }
        int32_t esi_2 = (arg1 - eax_1);
        if (arg1 == eax_1)
        {
            i_1 = i;
            break;
        }
        if ((arg1 > eax_1 && edi > esi_2))
        {
            int32_t eax_2;
            int32_t edx_1;
            edx_1 = HIGHD(eax_1);
            eax_2 = LOWD(eax_1);
            int32_t eax_5;
            int32_t edx_2;
            edx_2 = HIGHD(arg1);
            eax_5 = LOWD(arg1);
            if ((COMBINE(edx_1, eax_2) / 0xfffffc18) == (COMBINE(edx_2, eax_5) / 0xfffffc18))
            {
                edi = esi_2;
                i_1 = i;
            }
        }
        i = (i + 1);
    } while (i < 0x14);
    if (i_1 < 0)
    {
        return 0;
    }
    return *((i_1 << 3) + &data_414acc);
}

FARPROC sub_40aaf0()
{
    HINSTANCE hModule = GetModuleHandleA("kernel32.dll");
    if (hModule != 0)
    {
        FARPROC eax;
        char ecx;
        eax = GetProcAddress(hModule, "IsTNT");
        eax = ((ecx - ecx) + 1);
        return eax;
    }
    hModule = 0;
    return hModule;
}

uint32_t sub_40ab20()
{
    uint32_t eax = GetVersion();
    if ((eax & 0x80000000) == 0)
    {
        eax = 0;
        return eax;
    }
    eax = (eax - eax);
    eax = (eax + 1);
    return eax;
}

int32_t __stdcall sub_40ab40(PSTR arg1, int32_t* arg2)
{
    void var_100;
    _splitpath(arg1, 0, 0, 0, &var_100);
    int32_t eax_15;
    if (_strnicmp(&var_100, ".com", 3) != 0)
    {
        void lpReOpenBuff;
        int32_t hFile_1 = OpenFile(arg1, &lpReOpenBuff, OF_SHARE_DENY_NONE);
        if (hFile_1 == 0xffffffff)
        {
            *arg2 = 3;
            goto label_40acad;
        }
        void lpBuffer;
        _lread(hFile_1, &lpBuffer, 2);
        if (_memicmp(&lpBuffer, &data_414bc8, 2) != 0)
        {
            _lclose(hFile_1);
            *arg2 = 2;
            goto label_40acad;
        }
        if (_llseek(hFile_1, 0x3c, 0) != 0x3c)
        {
            _lclose(hFile_1);
            *arg2 = 2;
            goto label_40acad;
        }
        int32_t var_18c;
        int32_t eax_7 = (_lread(hFile_1, &var_18c, 4) - 4);
        int32_t hFile;
        if ((-(eax_7 - eax_7)) == 0)
        {
            hFile = hFile_1;
        }
        else
        {
            if (_llseek(hFile_1, var_18c, 0) != var_18c)
            {
                _lclose(hFile_1);
                *arg2 = 2;
                goto label_40acad;
            }
            _lread(hFile_1, &lpBuffer, 4);
            hFile = hFile_1;
            if (_memicmp(&lpBuffer, &data_414bc4, 2) == 0)
            {
                _lclose(hFile);
                *arg2 = 0;
                eax_15 = 1;
                goto label_40acb9;
            }
        }
        _lclose(hFile);
    }
    *arg2 = 1;
label_40acad:
    eax_15 = 0;
label_40acb9:
    return eax_15;
}

int32_t __stdcall sub_40acc0(int32_t arg1)
{
    int32_t eax = malloc(arg1);
    if (eax == 0)
    {
        sub_403220(data_413424, 0x41b);
    }
    return eax;
}

int32_t __stdcall sub_40acf0(int32_t arg1)
{
    int32_t s = sub_40acc0(arg1);
    __builtin_memset(s, 0, ((arg1 >> 2) << 2));
    int32_t s_1;
    __builtin_memset(s_1, 0, (arg1 & 3));
    return s;
}

int32_t* sub_40ad20()
{
    int32_t* eax_1;
    if (data_40ee28 != 0)
    {
        eax_1 = data_40ee28;
        data_40ee28 = *eax_1;
    }
    else
    {
        if (data_414bdc < 8)
        {
            int32_t eax_2 = malloc(0x8000);
            data_414be0 = eax_2;
            if (eax_2 == 0)
            {
                sub_403220(data_413424, 0x41b);
            }
            data_414bdc = 0x8000;
        }
        data_414bdc = (data_414bdc - 8);
        eax_1 = data_414be0;
        data_414be0 = (data_414be0 + 8);
    }
    *eax_1 = 0;
    eax_1[1] = 0;
    return eax_1;
}

int32_t* __stdcall sub_40ada0(int32_t* arg1)
{
    if (data_40ee28 != 0)
    {
        *arg1 = data_40ee28;
        data_40ee28 = arg1;
        return arg1;
    }
    *arg1 = 0;
    data_40ee28 = arg1;
    return arg1;
}

int32_t __stdcall sub_40add0(int32_t arg1)
{
    int32_t i = 0xffffffff;
    int32_t edi = arg1;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = (edi + 1);
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    int32_t ecx = (!i);
    int32_t eax = sub_40acc0(ecx);
    __builtin_memcpy(eax, arg1, ((ecx >> 2) << 2));
    int32_t esi_1;
    int32_t edi_2;
    __builtin_memcpy(edi_2, esi_1, (ecx & 3));
    return eax;
}

int32_t* __stdcall sub_40ae10(int32_t* arg1, int32_t* arg2)
{
    *arg2 = *arg1;
    *arg1 = arg2;
    return arg1;
}

int32_t* __stdcall sub_40ae30(int32_t* arg1, int32_t arg2)
{
    int32_t* eax = arg1;
    if (*eax != 0)
    {
        do
        {
            eax = *eax;
        } while (*eax != 0);
    }
    *eax = arg2;
    return eax;
}

uint32_t __stdcall sub_40ae50(char* arg1, int32_t arg2, int32_t arg3)
{
    int32_t edi;
    if (arg3 == 0)
    {
        edi = 0;
        char* esi_1 = arg1;
        if (*esi_1 != 0)
        {
            do
            {
                edi = (edi + *esi_1);
                esi_1 = &esi_1[1];
            } while (*esi_1 != 0);
        }
    }
    else
    {
        edi = 0;
        char* esi = arg1;
        int32_t i = *esi;
        if (i != 0)
        {
            do
            {
                int32_t eax_1;
                if (i != 0x2f)
                {
                    eax_1 = _mbctoupper(i);
                }
                else
                {
                    eax_1 = 0x5c;
                }
                edi = (edi + eax_1);
                esi = &esi[1];
                i = *esi;
            } while (i != 0);
        }
    }
    return (COMBINE(0, edi) % arg2);
}

int32_t __stdcall sub_40aec0(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t esi = 0;
    int32_t eax_3;
    if (*arg1 != 0)
    {
        uint32_t eax_2 = sub_40ae50(arg1, arg2, arg4);
        if (arg4 == 0)
        {
            void** i = *(arg3 + (eax_2 << 2));
            if (i != 0)
            {
                do
                {
                    if (_mbscmp(i[1], arg1) == 0)
                    {
                        int32_t eax_25;
                        eax_25 = i[3];
                        eax_25 = (eax_25 & 0x10);
                        return ((eax_25 - eax_25) & i);
                    }
                    i = *i;
                } while (i != 0);
            }
        }
        else
        {
            eax_3 = sub_40c8d0(arg1, arg3, eax_2);
            if (eax_3 == 0)
            {
                int32_t eax_4 = _mbsnbcmp(arg1, &data_4149b8, 2);
                int32_t eax_5;
                int32_t ebp;
                if (eax_4 != 0)
                {
                    eax_5 = _mbsnbcmp(arg1, &data_414be8, 2);
                    if (eax_5 != 0)
                    {
                        char* edi_1 = arg1;
                        int32_t i_1 = 0xffffffff;
                        while (i_1 != 0)
                        {
                            bool cond:0_1 = 0 != *edi_1;
                            edi_1 = &edi_1[1];
                            i_1 = (i_1 - 1);
                            if ((!cond:0_1))
                            {
                                break;
                            }
                        }
                        ebp = sub_40acc0(((!i_1) + 2));
                        *ebp = data_4149b8;
                        char* edi_2 = arg1;
                        int32_t i_2 = 0xffffffff;
                        *(ebp + 2) = data_4149ba;
                        while (i_2 != 0)
                        {
                            bool cond:1_1 = 0 != *edi_2;
                            edi_2 = &edi_2[1];
                            i_2 = (i_2 - 1);
                            if ((!cond:1_1))
                            {
                                break;
                            }
                        }
                        int32_t ecx_6 = (!i_2);
                        int32_t i_3 = 0xffffffff;
                        int32_t edi_4 = ebp;
                        while (i_3 != 0)
                        {
                            bool cond:2_1 = 0 != *edi_4;
                            edi_4 = (edi_4 + 1);
                            i_3 = (i_3 - 1);
                            if ((!cond:2_1))
                            {
                                break;
                            }
                        }
                        __builtin_memcpy((edi_4 - 1), (edi_2 - ecx_6), ((ecx_6 >> 2) << 2));
                        int32_t esi_2;
                        int32_t edi_6;
                        __builtin_memcpy(edi_6, esi_2, (ecx_6 & 3));
                        esi = 1;
                    }
                }
                if ((eax_4 == 0 || (eax_4 != 0 && eax_5 == 0)))
                {
                    ebp = &arg1[2];
                }
                int32_t eax_10 = sub_40c8d0(ebp, arg3, sub_40ae50(ebp, arg2, arg4));
                if (eax_10 == 0)
                {
                    if ((arg1 - ebp) != 0xfffffffe)
                    {
                        *(ebp + 1) = 0x2f;
                    }
                    int32_t eax_16 = sub_40c8d0(ebp, arg3, sub_40ae50(ebp, arg2, arg4));
                    if (esi != 0)
                    {
                        free(ebp);
                    }
                    if (eax_16 != 0)
                    {
                        return eax_16;
                    }
                    int32_t ebp_1;
                    if (*arg1 == 0x22)
                    {
                        ebp_1 = sub_40ca30(arg1);
                    }
                    else
                    {
                        char* edi_9 = arg1;
                        int32_t i_4 = 0xffffffff;
                        while (i_4 != 0)
                        {
                            bool cond:3_1 = 0 != *edi_9;
                            edi_9 = &edi_9[1];
                            i_4 = (i_4 - 1);
                            if ((!cond:3_1))
                            {
                                break;
                            }
                        }
                        char* edi_10 = arg1;
                        ebp_1 = sub_40acf0(((!i_4) + 2));
                        int32_t i_5 = 0xffffffff;
                        int32_t eax_19;
                        eax_19 = data_414be4;
                        *ebp_1 = eax_19;
                        while (i_5 != 0)
                        {
                            bool cond:4_1 = 0 != *edi_10;
                            edi_10 = &edi_10[1];
                            i_5 = (i_5 - 1);
                            if ((!cond:4_1))
                            {
                                break;
                            }
                        }
                        int32_t ecx_17 = (!i_5);
                        int32_t i_6 = 0xffffffff;
                        int32_t edi_12 = ebp_1;
                        while (i_6 != 0)
                        {
                            bool cond:5_1 = 0 != *edi_12;
                            edi_12 = (edi_12 + 1);
                            i_6 = (i_6 - 1);
                            if ((!cond:5_1))
                            {
                                break;
                            }
                        }
                        __builtin_memcpy((edi_12 - 1), (edi_10 - ecx_17), ((ecx_17 >> 2) << 2));
                        int32_t esi_4;
                        int32_t edi_14;
                        __builtin_memcpy(edi_14, esi_4, (ecx_17 & 3));
                        int16_t* edi_15 = &data_414be4;
                        int32_t i_7 = 0xffffffff;
                        while (i_7 != 0)
                        {
                            bool cond:6_1 = 0 != *edi_15;
                            edi_15 = (edi_15 + 1);
                            i_7 = (i_7 - 1);
                            if ((!cond:6_1))
                            {
                                break;
                            }
                        }
                        int32_t ecx_22 = (!i_7);
                        int32_t i_8 = 0xffffffff;
                        int32_t edi_17 = ebp_1;
                        while (i_8 != 0)
                        {
                            bool cond:7_1 = 0 != *edi_17;
                            edi_17 = (edi_17 + 1);
                            i_8 = (i_8 - 1);
                            if ((!cond:7_1))
                            {
                                break;
                            }
                        }
                        __builtin_memcpy((edi_17 - 1), (edi_15 - ecx_22), ((ecx_22 >> 2) << 2));
                        int32_t esi_6;
                        int32_t edi_19;
                        __builtin_memcpy(edi_19, esi_6, (ecx_22 & 3));
                    }
                    int32_t eax_22 = sub_40c8d0(ebp_1, arg3, sub_40ae50(ebp_1, arg2, arg4));
                    free(ebp_1);
                    return eax_22;
                }
                if (esi != 0)
                {
                    free(ebp);
                }
                return eax_10;
            }
        }
    }
    if ((*arg1 == 0 || (*arg1 != 0 && arg4 == 0)))
    {
        eax_3 = 0;
    }
    return eax_3;
}

int32_t sub_40b110(char* arg1, void* arg2, void** arg3, int32_t arg4, int32_t arg5, int32_t arg6, char arg7)
{
    sub_40ceb4(0x110);
    int32_t edi = 0;
    if (arg2 == 0)
    {
        __return_addr = nullptr;
    }
    else if (arg3 != 0)
    {
        __return_addr = *arg3;
    }
    else
    {
        void* __return_addr_2 = *arg2;
        __return_addr = __return_addr_2;
        if ((__return_addr_2 != 0 && *__return_addr_2 != 0))
        {
            void* __return_addr_3;
            do
            {
                __return_addr_3 = *__return_addr;
                __return_addr = __return_addr_3;
            } while (*__return_addr_3 != 0);
        }
    }
    char* __return_addr_5 = arg1;
    if ((*__return_addr_5 != 0 && *__return_addr_5 != 0))
    {
        do
        {
            void* __return_addr_1;
            __return_addr_1 = *__return_addr_5;
            if (__return_addr_1 != 0x24)
            {
                if (__return_addr_1 == 0x22)
                {
                    edi = (-(edi - edi));
                }
                if ((edi == 0 && __return_addr_1 == 0x5e))
                {
                    __return_addr_5 = &__return_addr_5[1];
                    if (*__return_addr_5 == 0x22)
                    {
                        edi = (-(edi - edi));
                    }
                }
                __return_addr_1 = _mbsinc(__return_addr_5);
                __return_addr_5 = __return_addr_1;
                if (*__return_addr_1 != 0)
                {
                    continue;
                }
            }
            if (*__return_addr_5 == 0)
            {
                break;
            }
            if (__return_addr_5[1] == 0)
            {
                if ((arg7 & 4) != 0)
                {
                    if (arg3 != 0)
                    {
                        *arg3 = __return_addr;
                    }
                    return 0;
                }
                sub_403220(data_413424, 0x3ea);
            }
            char* ebx = _mbsinc(__return_addr_5);
            int32_t eax_1;
            if ((edi == 0 && *ebx == 0x5e))
            {
                int32_t eax_2 = _mbsinc(ebx);
                char ecx_2 = *eax_2;
                ebx = eax_2;
                eax_1 = ecx_2;
                if ((*(eax_1 + 0x4149c0) & 1) == 0)
                {
                    if ((arg7 & 4) != 0)
                    {
                        if (arg3 != 0)
                        {
                            *arg3 = __return_addr;
                        }
                        return 0;
                    }
                    int32_t var_14_4 = ecx_2;
                    sub_403220(data_413424, 0x3e9);
                }
            }
            eax_1 = *ebx;
            if (eax_1 == 0x24)
            {
                ebx = sub_40b5d0(ebx);
            }
            else
            {
                if (eax_1 != 0x28)
                {
                    __return_addr_1 = _mbschr("*@<?", eax_1);
                    if (__return_addr_1 == 0)
                    {
                        uint32_t eax_7;
                        eax_7 = *ebx;
                        if ((*(eax_7 + 0x4149c0) & 1) == 0)
                        {
                            if ((arg7 & 4) != 0)
                            {
                                if (arg3 != 0)
                                {
                                    *arg3 = __return_addr;
                                }
                                return 0;
                            }
                            sub_403220(data_413424, 0x3ea);
                        }
                        eax_7 = *ebx;
                        arg_d = 0;
                        arg_c = eax_7;
                    }
                }
                else
                {
                    ebx = sub_40b520(&ebx[1], &arg_c);
                    __return_addr_1 = _mbschr("*@<?", arg_c);
                }
                if (((eax_1 == 0x28 && __return_addr_1 == 0) || (eax_1 != 0x28 && __return_addr_1 == 0)))
                {
                    int32_t* __return_addr_4;
                    if (arg2 == 0)
                    {
                        arg_4 = 0;
                        __return_addr_4 = &arg_4;
                        arg_8 = sub_40add0(&data_414bec);
                    }
                    else
                    {
                        __return_addr_4 = sub_40ad20();
                    }
                    void* ebp_1 = sub_407b70(&arg_c);
                    if (ebp_1 != 0)
                    {
                        int32_t eax_11;
                        if (arg4 != 0)
                        {
                            eax_11 = _mbscmp(arg4, &arg_c);
                            if (eax_11 == 0)
                            {
                                int32_t* i = *(ebp_1 + 8);
                                int32_t ecx_5 = arg5;
                                if (arg6 != ecx_5)
                                {
                                    while (i != 0)
                                    {
                                        i = *i;
                                        ecx_5 = (ecx_5 - 1);
                                        if (arg6 == ecx_5)
                                        {
                                            break;
                                        }
                                    }
                                }
                                if (((arg6 == ecx_5 || (arg6 != ecx_5 && i != 0)) && i != 0))
                                {
                                    __return_addr_4[1] = i[1];
                                }
                                if ((((arg6 == ecx_5 || (arg6 != ecx_5 && i != 0)) && i == 0) || (arg6 != ecx_5 && i == 0)))
                                {
                                    __return_addr_4[1] = sub_40add0(0x413060);
                                }
                            }
                        }
                        if ((arg4 == 0 || (arg4 != 0 && eax_11 != 0)))
                        {
                            if ((*(ebp_1 + 0xc) & 1) == 0)
                            {
                                __return_addr_4[1] = *(*(ebp_1 + 8) + 4);
                            }
                            else
                            {
                                if ((arg7 & 4) != 0)
                                {
                                    if (arg3 != 0)
                                    {
                                        *arg3 = __return_addr;
                                    }
                                    return 0;
                                }
                                char* var_14_11 = &arg_c;
                                sub_403220(data_413424, 0x42e);
                            }
                        }
                    }
                    if (arg2 != 0)
                    {
                        if ((ebp_1 == 0 || (ebp_1 != 0 && (*(ebp_1 + 0xc) & 0x10) != 0)))
                        {
                            __return_addr_4[1] = sub_40add0(0x413060);
                        }
                        *__return_addr_4 = 0;
                        if (__return_addr == 0)
                        {
                            __return_addr_1 = arg2;
                        }
                        else
                        {
                            __return_addr_1 = __return_addr;
                        }
                        *__return_addr_1 = __return_addr_4;
                        __return_addr = __return_addr_4;
                    }
                    if (ebp_1 != 0)
                    {
                        __return_addr_1 = _mbschr(__return_addr_4[1], 0x24);
                        if (__return_addr_1 != 0)
                        {
                            *(ebp_1 + 0xc) = (*(ebp_1 + 0xc) | 1);
                            int32_t ecx_9;
                            if (arg4 != 0)
                            {
                                __return_addr_1 = _mbscmp(arg4, &arg_c);
                                if (__return_addr_1 != 0)
                                {
                                    ecx_9 = arg5;
                                }
                            }
                            if ((arg4 == 0 || (arg4 != 0 && __return_addr_1 == 0)))
                            {
                                ecx_9 = arg6;
                            }
                            __return_addr_1 = arg7;
                            sub_40b110(__return_addr_4[1], arg2, &__return_addr, &arg_c, (arg5 + 1), ecx_9, __return_addr_1);
                            *(ebp_1 + 0xc) = (*(ebp_1 + 0xc) & 0xfe);
                        }
                    }
                }
            }
            __return_addr_5 = &ebx[1];
        } while (*__return_addr_5 != 0);
    }
    if (arg3 != 0)
    {
        *arg3 = __return_addr;
    }
    return 1;
}

char* __stdcall sub_40b520(char* arg1, char* arg2)
{
    char* esi = arg1;
    char* edi = arg2;
    if (*esi != 0)
    {
        do
        {
            char eax = *esi;
            if (eax == 0x29)
            {
                break;
            }
            if (eax == 0x3a)
            {
                break;
            }
            if (eax == 0x5e)
            {
                eax = esi[1];
                esi = &esi[1];
                void* ecx_1;
                ecx_1 = eax;
                if ((*(ecx_1 + 0x4149c0) & 1) == 0)
                {
                    int32_t var_14_1 = eax;
                    sub_403220(data_413424, 0x3e9);
                }
            }
            eax = *esi;
            esi = &esi[1];
            *edi = eax;
            edi = &edi[1];
        } while (*esi != 0);
    }
    if (*esi != 0x29)
    {
        do
        {
            if (*esi == 0x5e)
            {
                esi = &esi[1];
            }
            if (*esi == 0)
            {
                break;
            }
            esi = &esi[1];
        } while (*esi != 0x29);
        if (*esi != 0x29)
        {
            sub_403220(data_413424, 0x3e8);
        }
    }
    *edi = 0;
    if ((edi - arg2) > 0x101)
    {
        sub_403220(data_413424, 0x434);
    }
    return esi;
}

char* __stdcall sub_40b5d0(char* arg1)
{
    char* eax = &arg1[1];
    char edx = *eax;
    if (edx != 0x5e)
    {
        char ecx;
        if (edx == 0x28)
        {
            void* edi_1 = &eax[1];
            ecx = *edi_1;
            if (ecx == 0x5e)
            {
                return edi_1;
            }
            if (ecx == 0x40)
            {
                eax = *(edi_1 + 1);
                if (eax == 0x5e)
                {
                    int32_t var_c_1 = *(edi_1 + 2);
                    sub_403220(data_413424, 0x3e9);
                }
                else
                {
                    if (eax == 0x29)
                    {
                        return (edi_1 + 1);
                    }
                    if (_mbschr("DFBR", eax) != 0)
                    {
                        int32_t eax_5;
                        eax_5 = *(edi_1 + 2);
                        if (eax_5 == 0x5e)
                        {
                            int32_t var_c_3 = *(edi_1 + 3);
                            sub_403220(data_413424, 0x3e9);
                            return arg1;
                        }
                        if (eax_5 == 0x29)
                        {
                            return (edi_1 + 2);
                        }
                    }
                }
            }
            if (((ecx != 0x5e && ecx != 0x40) && edx != 0x5e))
            {
                return edi_1;
            }
        }
        if ((edx != 0x28 || (edx == 0x28 && ecx == 0x40)))
        {
            eax = arg1;
        }
    }
    return eax;
}

char* __stdcall sub_40b690(char* arg1)
{
    int32_t* i_1 = nullptr;
    char* esi = arg1;
    if (_mbschr(esi, 0x24) != 0)
    {
        sub_40b110(esi, &i_1, nullptr, 0, 0, 0, 0);
        int32_t* i = i_1;
        int32_t* var_10_1 = &i_1;
        esi = sub_40b700(esi);
        i_1 = i;
        if (i != 0)
        {
            do
            {
                i = *i;
                sub_40ada0(i_1);
                i_1 = i;
            } while (i != 0);
        }
    }
    return esi;
}

int32_t __stdcall sub_40b700(int32_t* arg1)
{
    int32_t var_404 = 0x400;
    int32_t ebx = 0;
    char* edx = arg_4;
    int32_t ebp = 0;
    void var_400;
    void* var_408 = &var_400;
    void* const* var_40c = &__return_addr;
    void* var_410 = &var_400;
    if (*edx != 0)
    {
        do
        {
            if (*arg_4 != 0)
            {
                while (*arg_4 != 0x24)
                {
                    if (var_40c == var_410)
                    {
                        sub_40bb00(&var_408, &var_410, &var_40c, &var_404, &var_400);
                    }
                    char* eax_4;
                    eax_4 = *arg_4;
                    if (eax_4 == 0x22)
                    {
                        ebx = (-(ebx - ebx));
                    }
                    if ((ebx == 0 && eax_4 == 0x5e))
                    {
                        *var_410 = 0x5e;
                        var_410 = (var_410 + 1);
                        arg_4 = &arg_4[1];
                        if (*arg_4 == 0x22)
                        {
                            ebx = (-(ebx - ebx));
                        }
                    }
                    char* eax_6;
                    eax_6 = *arg_4;
                    *var_410 = eax_6;
                    arg_4 = &arg_4[1];
                    var_410 = (var_410 + 1);
                    if (*arg_4 == 0)
                    {
                        break;
                    }
                }
            }
            if (var_40c == var_410)
            {
                sub_40bb00(&var_408, &var_410, &var_40c, &var_404, &var_400);
            }
            char* eax_8 = arg_4;
            if (*eax_8 == 0)
            {
                break;
            }
            int32_t eax_10;
            if (eax_8[1] == 0x28)
            {
                eax_10 = _mbschr("*@<?", eax_8[2]);
                if (eax_10 != 0)
                {
                    sub_40bb90(&var_408, &arg_4, &var_410, &var_40c, &var_404, 3, &var_400);
                }
            }
            if ((eax_8[1] != 0x28 || (eax_8[1] == 0x28 && eax_10 == 0)))
            {
                void* edi_2 = &eax_8[2];
                if (eax_8[1] != 0x24)
                {
                    if (_mbschr("*@<?", arg_4[1]) != 0)
                    {
                        sub_40bb90(&var_408, &arg_4, &var_410, &var_40c, &var_404, 1, &var_400);
                    }
                    else
                    {
                        if (*arg1 == 0)
                        {
                            sub_403220(data_413424, 0x410);
                        }
                        bool cond:0_1 = _mbschr(*(*arg1 + 4), 0x24) == 0;
                        int32_t* eax_17 = *arg1;
                        char* edi_4;
                        if (cond:0_1)
                        {
                            edi_4 = eax_17[1];
                            *arg1 = *eax_17;
                        }
                        else
                        {
                            ebp = 1;
                            *arg1 = *eax_17;
                            edi_4 = sub_40b700(eax_17[1], arg1);
                        }
                        sub_40c060(&var_408, &arg_4, &var_410, &var_40c, edi_4, &var_404, &var_400);
                        if (ebp != 0)
                        {
                            ebp = 0;
                            free(edi_4);
                        }
                    }
                }
                else
                {
                    void* eax_11;
                    eax_11 = *edi_2;
                    if (eax_11 == 0x5e)
                    {
                        sub_40bb90(&var_408, &arg_4, &var_410, &var_40c, &var_404, 5, &var_400);
                    }
                    else if (eax_11 == 0x40)
                    {
                        sub_40bb90(&var_408, &arg_4, &var_410, &var_40c, &var_404, 2, &var_400);
                    }
                    else
                    {
                        if (eax_11 == 0x28)
                        {
                            eax_11 = *(edi_2 + 1);
                            edi_2 = (edi_2 + 1);
                            if ((eax_11 == 0x40 && eax_11 == 0x29))
                            {
                                sub_40bb90(&var_408, &arg_4, &var_410, &var_40c, &var_404, 2, &var_400);
                            }
                        }
                        eax_11 = *(edi_2 + 1);
                        if ((eax_11 != 0x46 && (eax_11 != 0x44 && (eax_11 != 0x42 && eax_11 != 0x52))))
                        {
                            goto label_40b991;
                        }
                        if (*(edi_2 + 2) == 0x29)
                        {
                            sub_40bb90(&var_408, &arg_4, &var_410, &var_40c, &var_404, 4, &var_400);
                        }
                        else
                        {
                        label_40b991:
                            sub_40bb90(&var_408, &arg_4, &var_410, &var_40c, &var_404, 5, &var_400);
                        }
                    }
                }
            }
        } while (*arg_4 != 0);
    }
    if (var_40c == var_410)
    {
        sub_40bb00(&var_408, &var_410, &var_40c, &var_404, &var_400);
    }
    *var_410 = 0;
    var_410 = (var_410 + 1);
    int32_t eax_24 = sub_40acc0((var_410 - var_408));
    if (eax_24 == 0)
    {
        sub_403220(data_413424, 0x419);
    }
    int32_t eax_27 = (var_410 - var_408);
    __builtin_memcpy(eax_24, var_408, ((eax_27 >> 2) << 2));
    int32_t esi_3;
    int32_t edi_6;
    __builtin_memcpy(edi_6, esi_3, (eax_27 & 3));
    return eax_24;
}

int32_t* __stdcall sub_40bb00(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t arg5)
{
    if (*arg1 == arg5)
    {
        int32_t eax_1 = sub_40acc0(*arg4);
        int32_t edx_1 = *arg4;
        __builtin_memcpy(eax_1, *arg1, ((edx_1 >> 2) << 2));
        int32_t esi_2;
        int32_t edi_2;
        __builtin_memcpy(edi_2, esi_2, (edx_1 & 3));
        *arg1 = eax_1;
    }
    int32_t esi_4 = (*arg4 + 0x400);
    int32_t eax_3 = realloc(*arg1, esi_4);
    *arg1 = eax_3;
    if (eax_3 == 0)
    {
        sub_403220(data_413424, 0x419);
    }
    *arg2 = (*arg4 + *arg1);
    *arg4 = esi_4;
    *arg3 = (*arg1 + esi_4);
    return arg3;
}

char* __stdcall sub_40bb90(int32_t* arg1, int32_t* arg2, char** arg3, int32_t* arg4, int32_t* arg5, int32_t arg6, int32_t arg7)
{
    int32_t esi = 0;
    int32_t edi = 1;
    char* i_1 = nullptr;
    char* i_3 = (arg6 - 1);
    int32_t var_10c = 0;
    int32_t var_108 = 0;
    if (i_3 <= 4)
    {
        if (i_3 == 2)
        {
            var_10c = 1;
            edi = 2;
        }
        else if (i_3 == 3)
        {
            var_10c = 1;
            edi = 4;
        }
        else if (i_3 == 4)
        {
            int32_t* esi_2 = arg3;
            if (*arg4 == *esi_2)
            {
                sub_40bb00(arg1, esi_2, arg4, arg5, arg7);
            }
            i_3 = *esi_2;
            *i_3 = 0x24;
            *esi_2 = (*esi_2 + 1);
            *arg2 = (*arg2 + 2);
        }
        char* i_4;
        int32_t* ebp_1;
        if ((i_3 == 1 || i_3 == 3))
        {
            ebp_1 = arg2;
            i_1 = data_413a84;
        }
        else if ((i_3 == nullptr || i_3 == 2))
        {
            ebp_1 = arg2;
            char* ecx_2 = (*ebp_1 + edi);
            i_4 = (*ecx_2 - 0x2a);
            int32_t edx_1;
            if (i_4 <= 0x16)
            {
                edx_1 = i_4[0x40bf10];
                switch (edx_1)
                {
                    case 0:
                    {
                        if (ecx_2[1] == 0x2a)
                        {
                            esi = 1;
                            i_1 = data_413a98;
                            edi = (edi + 2);
                        }
                        else
                        {
                            i_4 = data_413a8c;
                            edi = (edi + 1);
                            var_108 = 1;
                            i_1 = i_4;
                        }
                        break;
                    }
                    case 1:
                    {
                        edi = (edi + 1);
                        i_1 = data_413a88;
                        break;
                    }
                    case 2:
                    {
                        esi = 1;
                        edi = (edi + 1);
                        i_1 = data_413a94;
                        break;
                    }
                    case 3:
                    {
                        i_1 = data_413a90;
                        break;
                    }
                }
            }
            if ((((i_4 <= 0x16 && edx_1 == 3) || i_4 > 0x16) || (i_4 <= 0x16 && edx_1 == 4)))
            {
                edi = (edi + 1);
            }
        }
        if ((((i_3 == 3 || i_3 == 1) || i_3 == 2) || i_3 == nullptr))
        {
            if (i_1 == 0)
            {
                char* esi_1 = *ebp_1;
                if (*esi_1 != 0)
                {
                    do
                    {
                        i_4 = *esi_1;
                        if (i_4 == 0x20)
                        {
                            break;
                        }
                        if (i_4 == 9)
                        {
                            break;
                        }
                        esi_1 = &esi_1[1];
                    } while (*esi_1 != 0);
                }
                int32_t ebx;
                ebx = *esi_1;
                *esi_1 = 0;
                int32_t var_12c_1 = *ebp_1;
                sub_403220(data_413424, 0xfa6);
                *esi_1 = ebx;
                esi = 0;
                i_1 = sub_40add0(0x413060);
            }
            void var_104;
            int32_t i_5;
            if (esi != 0)
            {
                char* i = i_1;
                var_108 = 0x400;
                int32_t i_6 = sub_40acf0(0x400);
                int32_t i_2 = i_6;
                int32_t* var_114 = (i_6 + 0x400);
                i_1 = i_2;
                if (i != 0)
                {
                    do
                    {
                        char* ebx_1 = *(i + 4);
                        if (var_10c != 0)
                        {
                            ebx_1 = sub_40bf30(*ebp_1[edi], &var_104, ebx_1);
                        }
                        if (*ebx_1 != 0)
                        {
                            do
                            {
                                if (i_1 == var_114)
                                {
                                    sub_40bb00(&i_2, &i_1, &var_114, &var_108, 0);
                                }
                                int32_t* eax_7;
                                eax_7 = *ebx_1;
                                ebx_1 = &ebx_1[1];
                                *i_1 = eax_7;
                                i_1 = &i_1[1];
                            } while (*ebx_1 != 0);
                        }
                        if (i_1 == var_114)
                        {
                            sub_40bb00(&i_2, &i_1, &var_114, &var_108, 0);
                        }
                        *i_1 = 0;
                        if (*i != 0)
                        {
                            *i_1 = 0x20;
                            int32_t* ecx_6 = var_114;
                            i_1 = &i_1[1];
                            if (i_1 == ecx_6)
                            {
                                sub_40bb00(&i_2, &i_1, &var_114, &var_108, 0);
                            }
                            *i_1 = 0;
                        }
                        i = *i;
                    } while (i != 0);
                }
                i_5 = i_2;
            }
            else
            {
                if (var_108 != 0)
                {
                    i_1 = sub_40bf30(0x52, &var_104, i_1);
                }
                if (var_10c != 0)
                {
                    char* eax_16;
                    eax_16 = *ebp_1[edi];
                    i_5 = sub_40bf30(eax_16, &var_104, i_1);
                }
            }
            if (((esi == 0 && var_10c != 0) || esi != 0))
            {
                i_1 = i_5;
            }
            if ((((esi == 0 && var_10c != 0) || esi != 0) || (esi == 0 && var_10c == 0)))
            {
                sub_40c060(arg1, ebp_1, arg3, arg4, i_1, arg5, arg7);
                i_3 = data_413a90;
                if (i_1 != i_3)
                {
                    i_3 = i_1;
                    void var_3;
                    if ((data_413a84 != i_3 && (data_413a88 != i_3 && (i_1 < &var_104 || (i_1 >= &var_104 && i_1 >= &var_3)))))
                    {
                        i_3 = free(i_1);
                    }
                }
            }
        }
    }
    return i_3;
}

char* __stdcall sub_40bf30(char arg1, char* arg2, int32_t arg3)
{
    void* edx = nullptr;
    int32_t i = 0xffffffff;
    void* ebp = nullptr;
    int32_t edi = arg3;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = (edi + 1);
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    int32_t ecx = (!i);
    char* ebx = arg2;
    __builtin_memcpy(ebx, (edi - ecx), ((ecx >> 2) << 2));
    int32_t esi_1;
    int32_t edi_3;
    __builtin_memcpy(edi_3, esi_1, (ecx & 3));
    int32_t eax;
    eax = *ebx;
    char* edi_4 = ebx;
    eax = (eax - 0x22);
    int32_t i_1 = 0xffffffff;
    while (i_1 != 0)
    {
        bool cond:1_1 = 0 != *edi_4;
        edi_4 = &edi_4[1];
        i_1 = (i_1 - 1);
        if ((!cond:1_1))
        {
            break;
        }
    }
    void* ecx_5 = &ebx[((!i_1) - 2)];
    if (ecx_5 >= ebx)
    {
        while (true)
        {
            char eax_1 = *ecx_5;
            if ((eax_1 != 0x5c && eax_1 != 0x2f))
            {
                if ((eax_1 == 0x2e && ebp == 0))
                {
                    ebp = ecx_5;
                }
                ecx_5 = (ecx_5 - 1);
                if (ecx_5 < ebx)
                {
                    break;
                }
                continue;
            }
            edx = ecx_5;
            break;
        }
    }
    if ((arg1 - 0x42) <= 0x10)
    {
        int32_t ecx_6;
        ecx_6 = *(arg1 + 0x40bffe);
        switch (ecx_6)
        {
            case 0:
            {
                if (ebp != 0)
                {
                    *ebp = 0;
                }
                break;
            }
            case 1:
            {
                if (edx != 0)
                {
                    if ((ebx[1] == 0x3a && (ebx - edx) == 0xfffffffe))
                    {
                        edx = (edx + 1);
                    }
                    *edx = 0;
                }
                else if (ebx[1] != 0x3a)
                {
                    void* eax_3;
                    eax_3 = data_413fe0;
                    *ebx = eax_3;
                }
                else
                {
                    ebx[2] = 0;
                }
                break;
            }
            case 3:
            {
                if (ebp != 0)
                {
                    *ebp = 0;
                }
                break;
            }
        }
        if ((ecx_6 == 2 || ecx_6 == 0))
        {
            if (edx != 0)
            {
                ebx = (edx + 1);
            }
            else if (ebx[1] == 0x3a)
            {
                ebx = &ebx[2];
            }
        }
    }
    int32_t esi_2;
    if ((-(esi_2 - esi_2)) != 0)
    {
        int32_t eax_6 = _mbschr(ebx, 0);
        *eax_6 = 0x22;
        *(eax_6 + 1) = 0;
    }
    return ebx;
}

int32_t __stdcall sub_40c060(int32_t* arg1, int32_t* arg2, char** arg3, int32_t* arg4, char* arg5, int32_t* arg6, int32_t arg7)
{
    char* eax_1 = (*arg2 + 1);
    *arg2 = eax_1;
    if (*eax_1 == 0x5e)
    {
        *arg2 = &eax_1[1];
    }
    int32_t eax_4;
    char* ecx;
    eax_4 = _mbschr(*arg2, 0x3a);
    int32_t var_4 = eax_4;
    char* eax_5 = *arg2;
    char edx = *eax_5;
    if (edx != 0)
    {
        do
        {
            ecx = *eax_5;
            if (ecx == 0x29)
            {
                break;
            }
            if (ecx == 0x5e)
            {
                eax_5 = &eax_5[1];
            }
            eax_5 = &eax_5[1];
        } while (*eax_5 != 0);
    }
    if ((edx == 0x28 && (var_4 != 0 && var_4 < eax_5)))
    {
        int32_t eax_7 = sub_40c170(arg1, &var_4, arg3, arg4, arg5, arg6, arg7);
        *arg2 = var_4;
        return eax_7;
    }
    char* ebx_1 = arg5;
    if (*ebx_1 != 0)
    {
        do
        {
            if (*arg4 == *arg3)
            {
                sub_40bb00(arg1, arg3, arg4, arg6, arg7);
            }
            int32_t* eax_9;
            eax_9 = *ebx_1;
            ebx_1 = &ebx_1[1];
            **arg3 = eax_9;
            *arg3 = &*arg3[1];
        } while (*ebx_1 != 0);
    }
    char* eax_10 = *arg2;
    if (*eax_10 == 0x24)
    {
        *arg2 = &eax_10[1];
    }
    char* eax_12 = *arg2;
    ecx = *eax_12;
    if (ecx == 0x28)
    {
        do
        {
            eax_12 = (*arg2 + 1);
            *arg2 = eax_12;
        } while (*eax_12 != 0x29);
    }
    else if (ecx == 0x2a)
    {
        eax_12 = &eax_12[1];
        if (*eax_12 == 0x2a)
        {
            *arg2 = eax_12;
        }
    }
    *arg2 = (*arg2 + 1);
    return eax_12;
}

int32_t __stdcall sub_40c170(int32_t* arg1, int32_t* arg2, char** arg3, int32_t* arg4, char* arg5, int32_t* arg6, int32_t arg7)
{
    char* esi_1 = (*arg2 + 1);
    *arg2 = esi_1;
    if (*esi_1 != 0)
    {
        do
        {
            int32_t* eax;
            eax = *esi_1;
            if (eax == 0x3d)
            {
                break;
            }
            if (eax == 0x5e)
            {
                esi_1 = &esi_1[1];
            }
            esi_1 = &esi_1[1];
        } while (*esi_1 != 0);
    }
    if (*esi_1 != 0x3d)
    {
        sub_403220(data_4133f4, 0x3eb);
    }
    if (*arg2 == esi_1)
    {
        sub_403220(data_4133f4, 0x3ed);
    }
    char* ebx = esi_1;
    if (*esi_1 != 0)
    {
        do
        {
            int32_t* eax_3;
            eax_3 = *ebx;
            if (eax_3 == 0x29)
            {
                break;
            }
            if (eax_3 == 0x5e)
            {
                ebx = &ebx[1];
            }
            ebx = &ebx[1];
        } while (*ebx != 0);
    }
    if (*ebx != 0x29)
    {
        sub_403220(data_4133f4, 0x3e8);
    }
    int32_t eax_6 = sub_40acf0(((esi_1 - *arg2) + 1));
    char* ecx_3 = eax_6;
    int32_t var_c = eax_6;
    char* ebp = *arg2;
    if (*ebp != 0x3d)
    {
        do
        {
            if (*ebp == 0x5e)
            {
                ebp = &ebp[1];
            }
            eax_6 = *ebp;
            ebp = &ebp[1];
            *ecx_3 = eax_6;
            ecx_3 = &ecx_3[1];
        } while (*ebp != 0x3d);
    }
    int32_t edi = var_c;
    *ecx_3 = 0;
    int32_t i = 0xffffffff;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = (edi + 1);
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    void* ebp_1 = &ebp[1];
    int32_t eax_10 = sub_40acf0((ebx - esi_1));
    int32_t var_8 = eax_10;
    if (*ebp_1 != 0x29)
    {
        do
        {
            if (*ebp_1 == 0x5e)
            {
                ebp_1 = (ebp_1 + 1);
            }
            char ecx_5 = *ebp_1;
            ebp_1 = (ebp_1 + 1);
            *eax_10 = ecx_5;
            eax_10 = (eax_10 + 1);
        } while (*ebp_1 != 0x29);
    }
    *eax_10 = 0;
    char* ebp_2 = arg5;
    *arg2 = &ebx[1];
    if (*ebp_2 != 0)
    {
        do
        {
            void** eax_11;
            eax_11 = *ebp_2;
            if (*var_c == eax_11)
            {
                eax_11 = _mbsnbcmp(ebp_2, var_c, ((!i) - 1));
                if (eax_11 == 0)
                {
                    int32_t ebx_2 = var_8;
                    if (*ebx_2 != 0)
                    {
                        do
                        {
                            if (*arg4 == *arg3)
                            {
                                sub_40bb00(arg1, arg3, arg4, arg6, arg7);
                            }
                            eax_11 = *ebx_2;
                            ebx_2 = (ebx_2 + 1);
                            **arg3 = eax_11;
                            *arg3 = &*arg3[1];
                        } while (*ebx_2 != 0);
                    }
                    ebp_2 = &ebp_2[((!i) - 1)];
                }
            }
            if ((*var_c != eax_11 || (*var_c == eax_11 && eax_11 != 0)))
            {
                if (*arg4 == *arg3)
                {
                    sub_40bb00(arg1, arg3, arg4, arg6, arg7);
                }
                eax_11 = *ebp_2;
                ebp_2 = &ebp_2[1];
                **arg3 = eax_11;
                *arg3 = &*arg3[1];
            }
        } while (*ebp_2 != 0);
    }
    free(var_c);
    return free(var_8);
}

int32_t __stdcall sub_40c340(int32_t arg1, int32_t arg2)
{
    void var_208;
    void var_204;
    _splitpath(arg1, &var_208, &var_204, 0, 0);
    void var_104;
    _makepath(&var_104, &var_208, &var_204, arg2, 0);
    return sub_40add0(&var_104);
}

int32_t __stdcall sub_40c3a0(char* arg1)
{
    char* edx = arg1;
    int32_t esi = 0;
    char eax;
    if (*edx == 0x7b)
    {
        edx = &edx[1];
        if (*edx != 0)
        {
            do
            {
                eax = *edx;
                if (eax == 0x7d)
                {
                    break;
                }
                if (eax == 0x5e)
                {
                    edx = &edx[1];
                }
                edx = &edx[1];
            } while (*edx != 0);
            if (*edx != 0)
            {
                edx = &edx[1];
            }
        }
    }
    eax = *edx;
    if (eax == 0x2e)
    {
        char* edi_1 = edx;
        if (eax != 0)
        {
            do
            {
                eax = *edi_1;
                if (eax == 0x7b)
                {
                    break;
                }
                if (eax == 0x5e)
                {
                    edi_1 = &edi_1[1];
                }
                edi_1 = &edi_1[1];
            } while (*edi_1 != 0);
        }
        char* eax_1 = edx;
        if (edi_1 > edx)
        {
            do
            {
                char ecx = *edx;
                if (ecx == 0x5c)
                {
                    break;
                }
                if (ecx == 0x2f)
                {
                    break;
                }
                edx = &edx[1];
            } while (edi_1 > edx);
        }
        if ((*edi_1 == 0 || (*edi_1 != 0 && edi_1 != edx)))
        {
            int32_t eax_9 = _mbspbrk(&eax_1[1], &data_414bf0);
            if ((((eax_9 != 0 && *eax_9 == 0x2e) && _mbschr((eax_9 + 1), 0x2f) == 0) && _mbschr((eax_9 + 1), 0x5c) == 0))
            {
                if (_mbschr((eax_9 + 1), 0x2e) != 0)
                {
                    sub_403220(data_413424, 0x444);
                    return 0;
                }
                esi = 1;
            }
        }
        if ((*edi_1 != 0 && edi_1 == edx))
        {
            void* edi_2 = &edi_1[1];
            if (*edi_2 != 0)
            {
                do
                {
                    eax_1 = *edi_2;
                    if (eax_1 == 0x7d)
                    {
                        break;
                    }
                    if (eax_1 == 0x5e)
                    {
                        edi_2 = (edi_2 + 1);
                    }
                    edi_2 = (edi_2 + 1);
                } while (*edi_2 != 0);
                if ((((*edi_2 != 0 && *(edi_2 + 1) == 0x2e) && _mbschr((edi_2 + 2), 0x2f) == 0) && _mbschr((edi_2 + 2), 0x5c) == 0))
                {
                    if (_mbschr((edi_2 + 2), 0x2e) == 0)
                    {
                        return 1;
                    }
                    sub_403220(data_413424, 0x444);
                    return 0;
                }
            }
        }
    }
    return esi;
}

int32_t __stdcall sub_40c510(char* arg1, int32_t arg2, char* arg3, char* arg4)
{
    char* ebx = arg1;
    char* esi = arg3;
    void* ebp = &ebx[arg2];
    int32_t eax;
    eax = *esi;
    if (eax != 0)
    {
        while (ebp > ebx)
        {
            if (eax != 0x25)
            {
                *ebx = eax;
                ebx = &ebx[1];
            }
            else
            {
                eax = esi[1];
                esi = &esi[1];
                if (eax == 0x25)
                {
                    *ebx = 0x25;
                    ebx = &ebx[1];
                }
                else if (eax == 0x73)
                {
                    char* ecx_1 = arg4;
                    if (*ecx_1 != 0)
                    {
                        while (ebp > ebx)
                        {
                            eax = *ecx_1;
                            ecx_1 = &ecx_1[1];
                            *ebx = eax;
                            ebx = &ebx[1];
                            if (*ecx_1 == 0)
                            {
                                break;
                            }
                        }
                    }
                }
                else if (eax == 0x7c)
                {
                    void* ecx_2 = &esi[0xffffffff];
                    int32_t edi_1 = 0;
                    int32_t var_10c_1 = 0;
                    int32_t var_108_1 = 0;
                    int32_t var_104_1 = 0;
                    int32_t edx_1 = 0;
                    char var_100 = 0;
                    while (true)
                    {
                        int32_t eax_1 = esi[1];
                        esi = &esi[1];
                        if ((eax_1 - 0x46) <= 0x2a)
                        {
                            eax = *(eax_1 + 0x40c716);
                            switch ((eax & 0xff))
                            {
                                case 1:
                                {
                                    edi_1 = 1;
                                    break;
                                }
                                case 2:
                                {
                                    var_10c_1 = 1;
                                    break;
                                }
                                case 3:
                                {
                                    var_108_1 = 1;
                                    break;
                                }
                                case 4:
                                {
                                    var_104_1 = 1;
                                    break;
                                }
                            }
                            if (((eax & 0xff) == 0 && esi[0xffffffff] == 0x7c))
                            {
                                edi_1 = 1;
                                var_104_1 = 1;
                                var_108_1 = 1;
                                var_10c_1 = 1;
                            }
                        }
                        if (((eax_1 - 0x46) > 0x2a || ((eax_1 - 0x46) <= 0x2a && (eax & 0xff) == 5)))
                        {
                            edx_1 = 1;
                        }
                        if (edx_1 == 0)
                        {
                            if (*esi != 0x46)
                            {
                                continue;
                            }
                            else if (edx_1 == 0)
                            {
                                if (arg4 == 0)
                                {
                                    sub_403220(0, 0x449);
                                }
                                if (edi_1 != 0)
                                {
                                    sub_40c7d0(arg4, &var_100);
                                }
                                int32_t __saved_ebp;
                                if (var_104_1 != 0)
                                {
                                    char* edi_2 = &var_100;
                                    int32_t i = 0xffffffff;
                                    while (i != 0)
                                    {
                                        bool cond:0_1 = 0 != *edi_2;
                                        edi_2 = &edi_2[1];
                                        i = (i - 1);
                                        if ((!cond:0_1))
                                        {
                                            break;
                                        }
                                    }
                                    sub_40c890(arg4, ((&__saved_ebp + (!i)) + 0x1b));
                                }
                                if (var_108_1 != 0)
                                {
                                    char* edi_3 = &var_100;
                                    int32_t i_1 = 0xffffffff;
                                    while (i_1 != 0)
                                    {
                                        bool cond:1_1 = 0 != *edi_3;
                                        edi_3 = &edi_3[1];
                                        i_1 = (i_1 - 1);
                                        if ((!cond:1_1))
                                        {
                                            break;
                                        }
                                    }
                                    sub_40c850(arg4, ((&__saved_ebp + (!i_1)) + 0x1b));
                                }
                                if (var_10c_1 != 0)
                                {
                                    char* edi_4 = &var_100;
                                    int32_t i_2 = 0xffffffff;
                                    while (i_2 != 0)
                                    {
                                        bool cond:3_1 = 0 != *edi_4;
                                        edi_4 = &edi_4[1];
                                        i_2 = (i_2 - 1);
                                        if ((!cond:3_1))
                                        {
                                            break;
                                        }
                                    }
                                    sub_40c810(arg4, ((&__saved_ebp + (!i_2)) + 0x1b));
                                }
                                char* ecx_10 = &var_100;
                                if (var_100 != 0)
                                {
                                    while (ebp > ebx)
                                    {
                                        eax = *ecx_10;
                                        ecx_10 = &ecx_10[1];
                                        *ebx = eax;
                                        ebx = &ebx[1];
                                        if (*ecx_10 == 0)
                                        {
                                            break;
                                        }
                                    }
                                }
                                break;
                            }
                        }
                        if (ecx_2 > esi)
                        {
                            break;
                        }
                        while (ebp > ebx)
                        {
                            eax = *ecx_2;
                            ecx_2 = (ecx_2 + 1);
                            *ebx = eax;
                            ebx = &ebx[1];
                            if (ecx_2 > esi)
                            {
                                break;
                            }
                        }
                        break;
                    }
                }
                else
                {
                    *ebx = 0x25;
                    if (ebp == &ebx[1])
                    {
                        break;
                    }
                    eax = *esi;
                    ebx[1] = eax;
                    ebx = &ebx[2];
                }
            }
            eax = esi[1];
            esi = &esi[1];
            if (eax == 0)
            {
                break;
            }
        }
    }
    int32_t eax_5;
    if (((eax == 0 || (eax != 0 && ebp > ebx)) && ebp > ebx))
    {
        eax_5 = 0;
        *ebx = 0;
    }
    if ((((eax == 0 || (eax != 0 && ebp > ebx)) && ebp <= ebx) || (eax != 0 && ebp <= ebx)))
    {
        eax_5 = 1;
    }
    return eax_5;
}

uint32_t __stdcall sub_40c790(char* arg1, char* arg2, char* arg3)
{
    uint32_t eax = sub_40c510(arg1, 0x800, arg2, arg3);
    if (eax != 0)
    {
        char* var_8_1 = arg2;
        eax = sub_403220(0, 0x447);
    }
    return eax;
}

int32_t __stdcall sub_40c7d0(int32_t arg1, int32_t arg2)
{
    int32_t edi = arg2;
    _splitpath(arg1, edi, 0, 0, 0);
    int32_t i = 0xffffffff;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = (edi + 1);
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    int32_t eax = 1;
    if ((!i) == 1)
    {
        eax = 0;
    }
    return eax;
}

int32_t __stdcall sub_40c810(int32_t arg1, int32_t arg2)
{
    int32_t edi = arg2;
    _splitpath(arg1, 0, 0, 0, edi);
    int32_t i = 0xffffffff;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = (edi + 1);
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    int32_t eax = 1;
    if ((!i) == 1)
    {
        eax = 0;
    }
    return eax;
}

int32_t __stdcall sub_40c850(int32_t arg1, int32_t arg2)
{
    int32_t edi = arg2;
    _splitpath(arg1, 0, 0, edi, 0);
    int32_t i = 0xffffffff;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = (edi + 1);
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    int32_t eax = 1;
    if ((!i) == 1)
    {
        eax = 0;
    }
    return eax;
}

int32_t __stdcall sub_40c890(int32_t arg1, int32_t arg2)
{
    int32_t edi = arg2;
    _splitpath(arg1, 0, edi, 0, 0);
    int32_t i = 0xffffffff;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = (edi + 1);
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    int32_t eax = 1;
    if ((!i) == 1)
    {
        eax = 0;
    }
    return eax;
}

int32_t __stdcall sub_40c8d0(char* arg1, int32_t arg2, int32_t arg3)
{
    int32_t edx = *(arg2 + (arg3 << 2));
    int32_t ebx;
    int32_t var_c = ebx;
    int32_t var_4 = edx;
    if (edx != 0)
    {
        while (true)
        {
            char* esi_1 = arg1;
            char* edi_1 = *(var_4 + 4);
            if (*esi_1 != 0)
            {
                do
                {
                    int32_t eax_1;
                    eax_1 = *edi_1;
                    if (eax_1 == 0)
                    {
                        break;
                    }
                    ebx = *esi_1;
                    if ((ebx != 0x5c && ebx != 0x2f))
                    {
                        int32_t eax_3 = _mbctoupper(eax_1);
                        eax_1 = _mbctoupper(ebx);
                        if (eax_3 != eax_1)
                        {
                            break;
                        }
                    }
                    if ((((ebx == 0x5c || ebx == 0x2f) && eax_1 != 0x5c) && eax_1 != 0x2f))
                    {
                        break;
                    }
                    esi_1 = &esi_1[1];
                    edi_1 = &edi_1[1];
                } while (*esi_1 != 0);
            }
            if (((*esi_1 == 0 || *esi_1 == 0) && *edi_1 == 0))
            {
                return var_4;
            }
            if ((((*esi_1 == 0 || *esi_1 == 0) && *edi_1 != 0) || (*esi_1 != 0 && *esi_1 != 0)))
            {
                int32_t ecx = *var_4;
                var_4 = ecx;
                if (ecx == 0)
                {
                    break;
                }
            }
        }
    }
    return 0;
}

int32_t __stdcall sub_40c980(char* arg1, char* arg2)
{
    int32_t i = 0xffffffff;
    char* ebx = arg1;
    char* edi = ebx;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = &edi[1];
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    sub_40ceb4((((!i) + 3) & 0xfffffffc));
    int32_t __saved_edi;
    int32_t* var_8 = &__saved_edi;
    char* esi = arg2;
    int32_t i_1 = 0xffffffff;
    char* edi_1 = esi;
    while (i_1 != 0)
    {
        bool cond:1_1 = 0 != *edi_1;
        edi_1 = &edi_1[1];
        i_1 = (i_1 - 1);
        if ((!cond:1_1))
        {
            break;
        }
    }
    sub_40ceb4((((!i_1) + 3) & 0xfffffffc));
    if (*ebx == 0x22)
    {
        ebx = &ebx[1];
    }
    int32_t* ecx_2 = var_8;
    if (*ebx != 0)
    {
        do
        {
            char eax_4 = *ebx;
            ebx = &ebx[1];
            *ecx_2 = eax_4;
            ecx_2 = (ecx_2 + 1);
        } while (*ebx != 0);
    }
    if (*(ecx_2 - 1) == 0x22)
    {
        ecx_2 = (ecx_2 - 1);
    }
    *ecx_2 = 0;
    if (*esi == 0x22)
    {
        esi = &esi[1];
    }
    int32_t* ecx_3 = &__saved_edi;
    if (*esi != 0)
    {
        do
        {
            void* eax_5;
            eax_5 = *esi;
            esi = &esi[1];
            *ecx_3 = eax_5;
            ecx_3 = (ecx_3 + 1);
        } while (*esi != 0);
    }
    if (*(ecx_3 - 1) == 0x22)
    {
        ecx_3 = (ecx_3 - 1);
    }
    *ecx_3 = 0;
    return _mbsicmp(var_8, &__saved_edi);
}

int32_t __stdcall sub_40ca30(char* arg1)
{
    int32_t i = 0xffffffff;
    char* esi = arg1;
    char* edi = esi;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = &edi[1];
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    int32_t eax = sub_40acc0((!i));
    if (*esi == 0x22)
    {
        esi = &esi[1];
    }
    char* ecx_1 = eax;
    if (*esi != 0)
    {
        do
        {
            char edx_1 = *esi;
            esi = &esi[1];
            *ecx_1 = edx_1;
            ecx_1 = &ecx_1[1];
        } while (*esi != 0);
    }
    if (ecx_1[0xffffffff] == 0x22)
    {
        ecx_1 = &ecx_1[0xffffffff];
    }
    *ecx_1 = 0;
    return eax;
}

int32_t __stdcall sub_40ca80(char* arg1, int32_t arg2)
{
    if (*arg1 == 0x22)
    {
        void* edi_1 = &arg1[1];
        int32_t i = 0xffffffff;
        *_mbsrchr(arg1, 0x22) = 0;
        while (i != 0)
        {
            bool cond:0_1 = 0 != *edi_1;
            edi_1 = (edi_1 + 1);
            i = (i - 1);
            if ((!cond:0_1))
            {
                break;
            }
        }
        int32_t ecx_1 = (!i);
        __builtin_memcpy(arg1, (edi_1 - ecx_1), ((ecx_1 >> 2) << 2));
        int32_t esi_2;
        int32_t edi_4;
        __builtin_memcpy(edi_4, esi_2, (ecx_1 & 3));
    }
    return _fsopen(arg1, arg2, 0x20);
}

void __stdcall sub_40cae0(char* arg1, int32_t arg2)
{
    char* ebx = arg1;
    if (*arg1 != 0)
    {
        while (true)
        {
            int32_t eax_1 = __p__mbctype();
            int32_t ecx_1;
            ecx_1 = *ebx;
            eax_1 = *((ecx_1 + eax_1) + 1);
            eax_1 = (eax_1 & 4);
            if (((ebx - arg1) + ((eax_1 - eax_1) + 2)) > arg2)
            {
                *ebx = 0;
                break;
            }
            ebx = &ebx[((eax_1 - eax_1) + 2)];
            if (*ebx == 0)
            {
                return;
            }
        }
    }
}

int32_t* __stdcall sub_40cb30(int32_t arg1)
{
    sub_40ceb4(((data_413ee0 + 3) & 0xfffffffc));
    int32_t __saved_edi;
    int32_t* var_8 = &__saved_edi;
    int32_t var_10;
    int32_t eax_3 = sub_40cd20(arg1, &var_8, &var_10);
    if (eax_3 == 0)
    {
        return 0;
    }
    int32_t* var_c = sub_40ad20();
    var_c[1] = sub_40c340(arg1, eax_3);
    while (true)
    {
        sub_404c90(&var_8);
        int32_t eax_8 = sub_40ce00(&var_8, var_10);
        if (eax_8 == 0)
        {
            break;
        }
        int32_t* eax_9 = sub_40ad20();
        eax_9[1] = sub_40c340(arg1, eax_8);
        sub_40ae10(&var_c, eax_9);
    }
    return var_c;
}

int32_t __stdcall sub_40cbd0(int32_t arg1)
{
    return _chdrive(arg1);
}

int32_t __stdcall sub_40cbf0(int32_t arg1, int32_t* arg2)
{
    int32_t edx = arg1;
    int32_t i = 0xffffffff;
    int32_t edi = edx;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = (edi + 1);
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    if ((*edx == 0x22 && *(((!i) + edx) - 2) == 0x22))
    {
        edx = sub_40ca30(edx);
    }
    int32_t eax_3 = _findfirst(edx, *arg2);
    if (eax_3 != 0xffffffff)
    {
        _findclose(eax_3);
        return sub_404c90(arg2);
    }
    return 0;
}

int32_t __stdcall sub_40cc50(int32_t arg1)
{
    int32_t esi = 0;
    void var_304;
    void var_300;
    void var_200;
    void var_100;
    _splitpath(arg1, &var_304, &var_100, &var_300, &var_200);
    void* edi = &var_300;
    int32_t i = 0xffffffff;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = (edi + 1);
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    int32_t eax = data_413ed8;
    if (((!i) - 1) > eax)
    {
        esi = 1;
        sub_40cae0(&var_300, eax);
    }
    void* edi_1 = &var_200;
    int32_t i_1 = 0xffffffff;
    while (i_1 != 0)
    {
        bool cond:1_1 = 0 != *edi_1;
        edi_1 = (edi_1 + 1);
        i_1 = (i_1 - 1);
        if ((!cond:1_1))
        {
            break;
        }
    }
    int32_t eax_1 = data_413ed4;
    if (((!i_1) - 1) > eax_1)
    {
        esi = 1;
        eax_1 = sub_40cae0(&var_200, eax_1);
    }
    if (esi != 0)
    {
        eax_1 = _makepath(arg1, &var_304, &var_100, &var_300, &var_200);
    }
    return eax_1;
}

int32_t __stdcall sub_40cd20(int32_t arg1, int32_t* arg2, int32_t* arg3)
{
    int32_t ebx;
    int32_t var_108 = ebx;
    int32_t esi = arg1;
    int32_t ebx_1 = (ebx - ebx);
    if (ebx_1 != 0xffffffff)
    {
        int32_t edi_1 = esi;
        int32_t i = 0xffffffff;
        while (i != 0)
        {
            bool cond:1_1 = 0 != *edi_1;
            edi_1 = (edi_1 + 1);
            i = (i - 1);
            if ((!cond:1_1))
            {
                break;
            }
        }
        int32_t ecx_1;
        if ((*esi == 0x22 && *(((!i) + esi) - 2) == 0x22))
        {
            int32_t eax_2;
            eax_2 = sub_40ca30(esi);
            esi = eax_2;
        }
        void var_104;
        char* eax_3 = &var_104;
        if (*esi != 0)
        {
            do
            {
                if (*esi == 0x5e)
                {
                    esi = (esi + 1);
                }
                ecx_1 = *esi;
                esi = (esi + 1);
                *eax_3 = ecx_1;
                eax_3 = &eax_3[1];
            } while (*esi != 0);
        }
        esi = &var_104;
        *eax_3 = 0;
    }
    sub_40cc50(esi);
    int32_t eax_5 = _findfirst(esi, *arg2);
    *arg3 = eax_5;
    int32_t eax_6;
    if (eax_5 == 0xffffffff)
    {
        eax_6 = 0;
    }
    else
    {
        int32_t eax_7;
        int32_t eax_8;
        if (ebx_1 != 0xffffffff)
        {
            eax_7 = _mbschr(esi, 0x2a);
            if (eax_7 == 0)
            {
                eax_8 = _mbschr(esi, 0x3f);
            }
        }
        if ((ebx_1 == 0xffffffff || ((ebx_1 != 0xffffffff && eax_7 == 0) && eax_8 == 0)))
        {
            _findclose(*arg3);
        }
        eax_6 = (*arg2 + 0x14);
    }
    return eax_6;
}

int32_t __stdcall sub_40ce00(int32_t* arg1, int32_t arg2)
{
    if (_findnext(arg2, *arg1) == 0)
    {
        return sub_404c90(arg1);
    }
    _findclose(arg2);
    return 0;
}

int32_t sub_40ce40()
{
    void var_104;
    int32_t edi = _getcwd(&var_104, 0x101);
    int32_t i = 0xffffffff;
    while (i != 0)
    {
        bool cond:0_1 = 0 != *edi;
        edi = (edi + 1);
        i = (i - 1);
        if ((!cond:0_1))
        {
            break;
        }
    }
    int32_t eax_1 = sub_40acc0((!i));
    void* edi_1 = &var_104;
    int32_t i_1 = 0xffffffff;
    while (i_1 != 0)
    {
        bool cond:1_1 = 0 != *edi_1;
        edi_1 = (edi_1 + 1);
        i_1 = (i_1 - 1);
        if ((!cond:1_1))
        {
            break;
        }
    }
    int32_t ecx_1 = (!i_1);
    __builtin_memcpy(eax_1, (edi_1 - ecx_1), ((ecx_1 >> 2) << 2));
    int32_t esi_1;
    int32_t edi_4;
    __builtin_memcpy(edi_4, esi_1, (ecx_1 & 3));
    return eax_1;
}

int32_t __stdcall sub_40cea0(int32_t arg1)
{
    return time(arg1);
}

void* const __convention("regparm") sub_40ceb4(int32_t arg1)
{
    void* ecx = &arg_4;
    for (; arg1 >= 0x1000; arg1 = (arg1 - 0x1000))
    {
        ecx = (ecx - 0x1000);
        *ecx = *ecx;
    }
    void* ecx_1 = (ecx - arg1);
    *ecx_1 = *ecx_1;
    return __return_addr;
}

int32_t sub_40cee1(int32_t arg1)
{
    int32_t ecx = data_414bfc;
    if (ecx == 0)
    {
        uint32_t eax_1 = GetVersion();
        int32_t ecx_3 = data_414bfc;
        if ((eax_1 != 3 || (eax_1 == 3 && (eax_1 & 0x80000000) == 0)))
        {
            ecx = (ecx_3 - 1);
        }
        if ((eax_1 == 3 && (eax_1 & 0x80000000) != 0))
        {
            ecx = (ecx_3 + 1);
        }
    }
    data_414bfc = ecx;
    if (ecx > 0)
    {
        int32_t i = data_414c00;
        if (i > 0)
        {
            do
            {
                Sleep(0);
                i = data_414c00;
            } while (i > 0);
        }
        data_414c00 = (i + 1);
    }
    int32_t eax_3;
    if (data_411b18 != 0xffffffff)
    {
        eax_3 = __dllonexit(arg1, 0x411b18, 0x411b14);
    }
    else
    {
        eax_3 = _onexit(arg1);
    }
    if (data_414bfc > 0)
    {
        data_414c00 = (data_414c00 - 1);
    }
    return eax_3;
}

int32_t sub_40cf7b(int32_t arg1)
{
    int32_t eax = sub_40cee1(arg1);
    return (eax - eax);
}

int32_t _start() __noreturn
{
    int32_t var_8 = 0xffffffff;
    int32_t var_c = 0x412000;
    int32_t (* var_10)() = _except_handler3;
    int32_t* fsbase;
    int32_t var_14 = *fsbase;
    *fsbase = &var_14;
    int32_t edi;
    int32_t var_48 = edi;
    int32_t* var_1c = &var_48;
    int32_t var_8_1 = 0;
    data_411b14 = 0xffffffff;
    data_411b18 = data_411b14;
    int32_t eax_1 = __p__fmode();
    *eax_1 = data_414c10;
    int32_t eax_2 = __p__commode();
    *eax_2 = data_414c0c;
    sub_40d0ae();
    _initterm(0x414c1c, 0x414c20);
    void* var_2c;
    int32_t var_28;
    int32_t var_24;
    __getmainargs(&var_28, &var_2c, &var_24, data_414c04, data_414c08);
    _initterm(0x414c14, 0x414c18);
    int32_t eax_5 = __p___initenv();
    *eax_5 = var_24;
    sub_407c30(var_28, var_2c, var_24);
    /* no return */
}

int32_t __convention("regparm") sub_40d052(int32_t arg1) __noreturn
{
    exit(arg1);
    /* no return */
}

int32_t sub_40d075(int32_t* arg1 @ ebp)
{
    int32_t esp_6 = arg1[-6];
    *(esp_6 - 4) = arg1[-7];
    _exit();
    arg1[-1] = 0xffffffff;
    int32_t eax = arg1[-4];
    *esp_6;
    int32_t* fsbase;
    *fsbase = eax;
    *(esp_6 + 4);
    *(esp_6 + 8);
    *arg1;
    return eax;
}

int32_t __dllonexit()
{
    /* tailcall */
    return __dllonexit();
}

int32_t _XcptFilter()
{
    /* tailcall */
    return _XcptFilter();
}

int32_t _initterm()
{
    /* tailcall */
    return _initterm();
}

int32_t sub_40d0ae()
{
    return _controlfp(0x10000, 0x30000);
}

int32_t sub_40d0c1() __pure
{
    return;
}

int32_t _except_handler3()
{
    /* tailcall */
    return _except_handler3();
}

int32_t _controlfp()
{
    /* tailcall */
    return _controlfp();
}

