int32_t __convention("regparm") sub_402cb8(char* arg1, int32_t arg2, int32_t arg3)
{
    *arg1 = (*arg1 + arg1);
    *arg1 = (*arg1 + arg1);
    *arg1 = (*arg1 + arg1);
    *arg1 = (*arg1 + arg1);
    *arg1 = (*arg1 + arg1);
    *arg1 = (*arg1 + arg1);
    *arg1 = (*arg1 + arg1);
    *arg1 = (*arg1 + arg1);
    *arg1 = (*arg1 + arg1);
    *arg1 = (*arg1 + arg1);
    *arg1 = (*arg1 + arg1);
    *arg1 = (*arg1 + arg1);
    int32_t var_8 = arg3;
    var_8 = 0x424740;
    sub_40f012(&var_8, &data_42473c, nullptr, 0, 0, 0, 0, 0);
    int32_t eax = sub_40ecdb(&data_424740);
    data_424738 = eax;
    return eax;
}

int32_t __fastcall sub_402d01(int32_t* arg1)
{
    int32_t* var_8 = arg1;
    int32_t* var_c = arg1;
    if (data_424738 != 0)
    {
        data_424734 = (data_424734 | 0x20);
        sub_402e2d();
        data_424738 = 0;
    }
    if (((data_424734 & 0x20) != 0 && sub_411561(&data_424740) != 0))
    {
        if ((data_424734 & 0x10) != 0)
        {
            sub_405b2c(data_424730, 0x444);
        }
        sub_405b2c(data_424730, 0x43d);
    }
    int32_t* eax_2 = sub_40ec89();
    char edx = data_424734;
    int32_t* esi = eax_2;
    if ((edx & 0x40) == 0)
    {
        eax_2 = sub_40ecdb(&data_424740);
        edx = data_424734;
        esi[1] = eax_2;
    }
    else
    {
        esi[1] = data_42472c;
        data_42472c = 0;
    }
    eax_2 = edx;
    var_8 = esi;
    eax_2 = (eax_2 & 0x30);
    if (eax_2 != 0x10)
    {
        var_c = esi[1];
        sub_40f012(&var_c, &data_42473c, nullptr, 0, 0, 0, 0, 0);
        edx = data_424734;
    }
    if ((edx & 0x20) != 0)
    {
        int32_t* i = data_42473c;
        sub_4030a6(&data_401040, &var_8, &data_42473c);
        sub_4030a6(&data_401044, &var_8, nullptr);
        data_42473c = i;
        if (i != 0)
        {
            int32_t* i_2 = data_435698;
            int32_t* i_1 = i;
            do
            {
                i = *i;
                *i_1 = i_2;
                i_2 = i_1;
                data_42473c = i;
                i_1 = i;
            } while (i != 0);
            data_435698 = i_2;
        }
    }
    return sub_40ede0(&data_424728, var_8);
}

int32_t* sub_402e2d()
{
    data_41450f = data_41450e;
    int32_t* eax_1 = sub_40ec89();
    eax_1[1] = data_424738;
    int32_t* i = data_42473c;
    data_424728 = eax_1;
    sub_4030a6(&data_401040, &data_424728, &data_42473c);
    int32_t* i_1 = sub_4030a6(&data_401044, &data_424728, nullptr);
    data_42473c = i;
    if (i != 0)
    {
        int32_t* i_2 = data_435698;
        i_1 = i;
        do
        {
            i = *i;
            *i_1 = i_2;
            i_2 = i_1;
            data_42473c = i;
            i_1 = i;
        } while (i != 0);
        data_435698 = i_2;
    }
    void* ecx_1 = data_424728;
    if ((ecx_1 == 0 && (data_424734 & 0x20) == 0))
    {
        int32_t __saved_esi_1 = data_424738;
        i_1 = sub_405b2c(data_424724, 0x43b);
        ecx_1 = data_424728;
    }
    if ((ecx_1 != 0 || (ecx_1 == 0 && (data_424734 & 0x20) == 0)))
    {
        i_1 = sub_411561(*(ecx_1 + 4));
        if (i_1 != 0)
        {
            data_424734 = (data_424734 | 0x10);
        }
    }
    return i_1;
}

void sub_402eec()
{
    if (data_424738 == 0)
    {
        data_424734 = (data_424734 & 0xdf);
    }
    else
    {
        sub_402e2d();
        data_424738 = 0;
    }
    uint8_t ebx = data_41450f;
    if (data_424742 != 0)
    {
        ebx = (ebx | 0x20);
        data_41450f = ebx;
    }
    int32_t* esi = data_424728;
    if (esi == 0)
    {
        sub_405b2c(data_424730, 0x40d);
    }
    int32_t* eax;
    if ((data_424734 & 0x10) == 0)
    {
        if (*esi == 0)
        {
            eax = sub_402fcb(esi[1]);
            if (eax == 0)
            {
                esi = data_424728;
            }
            else
            {
                free(*(data_424728 + 4));
            }
        }
        if (((*esi == 0 && eax == 0) || *esi != 0))
        {
            data_414500 = esi;
        }
    }
    else
    {
        int32_t eax_1 = sub_40b5fe(0x18);
        *(eax_1 + 8) = esi[1];
        *(eax_1 + 0x14) = ((ebx >> 5) & 1);
        *eax_1 = data_424714;
        data_424714 = eax_1;
        void* ecx_4 = *eax_1;
        if (ecx_4 != 0)
        {
            *(ecx_4 + 4) = eax_1;
        }
    }
    if (((((data_424734 & 0x10) == 0 && *esi == 0) && eax != 0) || (data_424734 & 0x10) != 0))
    {
        int32_t** ecx_7 = data_424728;
        eax = data_435698;
        data_435698 = ecx_7;
        *ecx_7 = eax;
    }
    data_424728 = 0;
    data_424734 = (data_424734 | 0x80);
}

uint32_t __fastcall sub_402fcb(void* arg1)
{
    void* var_8 = arg1;
    void* esi = arg1;
    int32_t ebx = 0;
    *var_8[3] = 0;
    if (_wcsicmp(esi, u".SILENT") == 0)
    {
        data_424734 = (data_424734 | 2);
        sub_40cb79(0x73, 1);
        *var_8[3] = 1;
    }
    int32_t eax_1;
    int16_t edx_2;
    eax_1 = _wcsicmp(esi, u".IGNORE");
    uint32_t eax_2;
    if (eax_1 != 0)
    {
        void* const ecx_2 = u".SUFFIXES";
        int16_t* eax_3 = esi;
        while (true)
        {
            edx_2 = *eax_3;
            int16_t temp0_1 = *ecx_2;
            bool c_1 = edx_2 < temp0_1;
            if (edx_2 == temp0_1)
            {
                int16_t temp1_1;
                if (edx_2 != 0)
                {
                    edx_2 = eax_3[1];
                    temp1_1 = *(ecx_2 + 2);
                    c_1 = edx_2 < temp1_1;
                    if (edx_2 == temp1_1)
                    {
                        eax_3 = &eax_3[2];
                        ecx_2 = (ecx_2 + 4);
                        if (edx_2 != 0)
                        {
                            continue;
                        }
                    }
                }
                if ((edx_2 == 0 || (edx_2 != 0 && edx_2 == temp1_1)))
                {
                    eax_2 = 0;
                    break;
                }
            }
            eax_2 = ((eax_3 - eax_3) | 1);
            break;
        }
        if (eax_2 != 0)
        {
            eax_2 = u".PRECIOUS";
            while (true)
            {
                ecx_2 = *esi;
                int16_t temp2_1 = *eax_2;
                bool c_2 = ecx_2 < temp2_1;
                if (ecx_2 == temp2_1)
                {
                    if (ecx_2 == 0)
                    {
                        break;
                    }
                    ecx_2 = *(esi + 2);
                    int16_t temp3_1 = *(eax_2 + 2);
                    c_2 = ecx_2 < temp3_1;
                    if (ecx_2 == temp3_1)
                    {
                        esi = (esi + 4);
                        eax_2 = (eax_2 + 4);
                        if (ecx_2 == 0)
                        {
                            break;
                        }
                        continue;
                    }
                }
                ebx = ((0 - 0) | 1);
                break;
            }
            if (ebx != 0)
            {
                eax_2 = *var_8[3];
            }
            else
            {
                data_424734 = (data_424734 | 8);
            }
        }
        else
        {
            data_424734 = (data_424734 | 1);
        }
    }
    else
    {
        data_424734 = (data_424734 | 4);
        edx_2 = 1;
        sub_40cb79(0x69, edx_2);
    }
    if (((eax_1 == 0 || (eax_1 != 0 && eax_2 == 0)) || ((eax_1 != 0 && eax_2 != 0) && ebx == 0)))
    {
        eax_2 = 1;
    }
    return eax_2;
}

int32_t* __fastcall sub_4030a6(int16_t* arg1, int32_t* arg2, int32_t** arg3)
{
    int32_t var_28 = 0;
    int32_t* i_7 = arg2;
    int32_t* i = *i_7;
    int32_t* i_4 = nullptr;
    int32_t var_1c = 0;
    int32_t* i_2 = nullptr;
    int32_t* i_6 = i_7;
    int16_t* var_24 = arg1;
    int32_t* i_5 = nullptr;
    while (i != 0)
    {
        i_7 = wcspbrk(i[1], arg1);
        if (i_7 == 0)
        {
        label_40321d:
            i_2 = i;
            i = *i;
        }
        else
        {
            int16_t* ecx_1 = i[1];
            if (*var_24 == 0x24)
            {
                int32_t var_2c = 0;
                int16_t* var_14 = ecx_1;
                void var_10;
                sub_40f9d0(&var_10, &var_14, 0xff, arg3, 0, &var_2c);
                int32_t eax_1 = var_2c;
                int32_t var_44_3 = i[1];
                var_2c = 0;
                var_28 = eax_1;
                free(var_44_3);
            }
            else
            {
                i_7 = sub_411561(ecx_1);
                if (i_7 != 0)
                {
                    goto label_40321d;
                }
                i_7 = sub_41217c(i[1]);
                i_4 = i_7;
                i_5 = i_4;
                if (i_4 == 0)
                {
                    goto label_40321d;
                }
                var_1c = i[1];
            }
            int32_t eax_3 = *i;
            int32_t* i_3;
            if (i_2 == 0)
            {
                *i_6 = eax_3;
                *i = data_435698;
                i_3 = i_6;
            }
            else
            {
                *i_2 = eax_3;
                *i = data_435698;
                i_3 = i_2;
            }
            int32_t* i_1 = *i_3;
            data_435698 = i;
            int32_t var_44_4;
            if (*var_24 == 0x24)
            {
                int32_t var_20 = var_28;
                while (true)
                {
                    int16_t* eax_11 = sub_403236(&var_20);
                    if (eax_11 == 0)
                    {
                        break;
                    }
                    i_4 = sub_40ec89();
                    i_5 = i_4;
                    i_4[1] = sub_40ecdb(eax_11);
                    *i_4 = *i_6;
                    *i_6 = i_4;
                    if (i_2 == 0)
                    {
                        i_2 = i_4;
                    }
                }
                var_44_4 = var_28;
            }
            else
            {
                if (i_4 != 0)
                {
                    if (i_2 == 0)
                    {
                        int32_t* j_1 = *i_4;
                        i_2 = i_4;
                        if (j_1 != 0)
                        {
                            int32_t* j;
                            do
                            {
                                j = *j_1;
                                i_2 = j_1;
                                j_1 = j;
                            } while (j != 0);
                        }
                    }
                    sub_40ede0(&i_5, *i_6);
                    i_4 = i_5;
                    *i_6 = i_4;
                }
                var_44_4 = var_1c;
            }
            i_7 = free(var_44_4);
            i = i_1;
        }
        arg1 = var_24;
    }
    return i_7;
}

int16_t* __fastcall sub_403236(int32_t* arg1)
{
    int32_t var_10 = 0x20;
    int16_t* ecx = *arg1;
    int32_t var_14 = 9;
    while (true)
    {
        int16_t i_3 = *ecx;
        if ((i_3 != 0x20 && i_3 != 9))
        {
            int16_t* ebx = ecx;
            int16_t* eax_1;
            if (i_3 == 0)
            {
                eax_1 = nullptr;
            }
            else
            {
                int16_t i_1;
                if (i_3 != 0x22)
                {
                    int16_t i_2 = i_3;
                    int16_t i;
                    do
                    {
                        i_1 = i_2;
                        if (i_2 == 0x20)
                        {
                            break;
                        }
                        i_1 = i_2;
                        if (i_2 == 9)
                        {
                            break;
                        }
                        ecx = &ecx[1];
                        i = *ecx;
                        i_2 = i;
                        i_1 = i;
                    } while (i != 0);
                }
                else
                {
                    int16_t i_4;
                    while (true)
                    {
                        ecx = &ecx[1];
                        i_4 = *ecx;
                        if (i_4 == 0)
                        {
                            break;
                        }
                        if (i_4 == 0x22)
                        {
                            break;
                        }
                        if ((!(i_4 != 0 && i_4 != 0x22)))
                        {
                            /* nop */
                        }
                    }
                    i_1 = i_4;
                }
                int16_t* eax_2 = ecx;
                if (i_1 == 0x22)
                {
                    ecx = &ecx[1];
                }
                if (((i_1 == 0x20 || i_1 == 9) || (i_1 == 0x22 && *ecx != 0)))
                {
                    *ecx = 0;
                }
                if ((i_1 == 0x22 && *ecx == 0))
                {
                    ecx = eax_2;
                }
                if ((((i_1 != 0x20 && i_1 != 9) && i_1 != 0x22) && i_1 == 0))
                {
                    ecx = (ecx - 2);
                }
                eax_1 = ebx;
                *arg1 = &ecx[1];
            }
            return eax_1;
        }
        ecx = &ecx[1];
    }
}

int32_t sub_4032fc()
{
    int32_t eax;
    eax = data_424734;
    void* const ecx = nullptr;
    if (eax < 0)
    {
        eax = (eax & 0x7f);
        data_424734 = eax;
    }
    if ((eax & 0x10) == 0)
    {
        if ((eax & 6) == 0)
        {
            int32_t* ecx_2;
            if ((eax & 1) == 0)
            {
                if (((eax & 8) != 0 && data_424728 != 0))
                {
                    ecx_2 = &data_42471c;
                }
                if ((eax & 8) == 0)
                {
                    int32_t eax_2 = sub_40b5fe(0x20);
                    int32_t ecx_3 = data_424728;
                    data_424718 = eax_2;
                    *eax_2 = ecx_3;
                    *(data_424718 + 4) = data_42473c;
                    goto label_4033fa;
                }
            }
            if (((eax & 1) != 0 && data_424728 != 0))
            {
                ecx_2 = &data_424720;
            }
            if ((((eax & 1) != 0 && data_424728 != 0) || (((eax & 1) == 0 && (eax & 8) != 0) && data_424728 != 0)))
            {
                sub_4039c8(ecx_2);
                goto label_4033fa;
            }
            if (((eax & 1) != 0 && data_424728 == 0))
            {
                int32_t* i_1 = data_424720;
                int32_t* i = i_1;
                if (i != 0)
                {
                    do
                    {
                        data_424720 = *i_1;
                        free(i[1]);
                        *i = data_435698;
                        i_1 = data_424720;
                        data_435698 = i;
                        i = i_1;
                    } while (i != 0);
                    goto label_4033fa;
                }
            }
        }
        else if (data_424728 != 0)
        {
            if ((eax & 2) != 0)
            {
                ecx = u".SILENT";
            }
            else if ((eax & 4) != 0)
            {
                ecx = u".IGNORE";
            }
            void* const var_8_2 = ecx;
            sub_405b2c(data_424730, 0x442);
            goto label_4033fa;
        }
    }
    else if (data_424728 != 0)
    {
        sub_405b2c(data_424730, 0x43e);
    label_4033fa:
        eax = data_424734;
    }
    data_424728 = 0;
    eax = (eax | 0x40);
    data_42473c = 0;
    data_424734 = eax;
    return eax;
}

int32_t sub_403416()
{
    int32_t ecx;
    int32_t var_8 = ecx;
    int32_t eax;
    eax = data_424734;
    void* const ecx_1 = nullptr;
    char ebx = 1;
    *var_8[3] = 1;
    if ((eax & 0x10) != 0)
    {
        eax = data_424728;
        *(data_424714 + 0xc) = eax;
    }
    else if ((eax & 0xf) == 0)
    {
        int32_t* i_1 = data_414500;
        *(data_424718 + 8) = data_424728;
        *(data_424718 + 0xc) = data_42473c;
        eax = data_41450f;
        *(data_424718 + 0x10) = eax;
        if (i_1 != 0)
        {
            int32_t* i;
            do
            {
                char eax_2;
                int32_t ecx_7;
                eax_2 = sub_402fcb(i_1[1]);
                if (eax_2 != 0)
                {
                    sub_405b2c(data_424730, 0x445);
                    ecx_7 = 0x445;
                }
                int32_t var_14_1 = ecx_7;
                eax = sub_403907(i_1[1], *var_8[3]);
                if (data_424710 == 0)
                {
                    data_424710 = i_1;
                    ebx = 0;
                }
                i = *i_1;
                data_414500 = i;
                if (ebx != 0)
                {
                    eax = data_435698;
                    *i_1 = eax;
                    data_435698 = i_1;
                }
                *var_8[3] = 0;
                i_1 = i;
            } while (i != 0);
        }
    }
    else if (data_424728 != 0)
    {
        if ((eax & 2) != 0)
        {
            ecx_1 = u".SILENT";
        }
        else if ((eax & 4) != 0)
        {
            ecx_1 = u".IGNORE";
        }
        else if ((eax & 8) != 0)
        {
            ecx_1 = u".PRECIOUS";
        }
        else if ((eax & 1) != 0)
        {
            ecx_1 = u".SUFFIXES";
        }
        void* const var_14_2 = ecx_1;
        eax = sub_405b2c(data_424730, 0x441);
    }
    data_414500 = 0;
    data_424728 = 0;
    data_42473c = 0;
    data_424718 = 0;
    data_424734 = 0;
    return eax;
}

uint32_t sub_40354d()
{
    if (wcschr(data_424738, 0x24) != 0)
    {
        int32_t* i = data_42473c;
        int32_t var_c = data_424738;
        int16_t* var_8 = nullptr;
        void var_14;
        sub_40f9d0(&var_14, &var_c, 0xff, &data_42473c, 0, &var_8);
        int16_t* ebx_1 = var_8;
        var_8 = nullptr;
        if (*ebx_1 == 0)
        {
            sub_405b2c(data_424730, 0x3ec);
        }
        data_42473c = i;
        if (i != 0)
        {
            int32_t* i_2 = data_435698;
            int32_t* i_1 = i;
            do
            {
                i = *i;
                *i_1 = i_2;
                i_2 = i_1;
                data_42473c = i;
                i_1 = i;
            } while (i != 0);
            data_435698 = i_2;
        }
        free(data_424738);
        data_424738 = ebx_1;
    }
    int16_t* esi_1 = data_424738;
    uint32_t eax_2 = *esi_1;
    if (eax_2 != 0)
    {
        uint32_t ecx_4 = eax_2;
        uint32_t eax_4;
        do
        {
            if (sub_403b50(ecx_4) == 0)
            {
                break;
            }
            esi_1 = &esi_1[1];
            eax_4 = *esi_1;
            ecx_4 = eax_4;
        } while (eax_4 != 0);
    }
    uint32_t eax_5 = *esi_1;
    if (eax_5 != 0)
    {
        uint32_t var_24_3 = eax_5;
        sub_405b2c(data_424730, 0x3e9);
    }
    int16_t* edx_2 = data_42472c;
    int16_t* ecx_5 = data_424738;
    data_41450d = 1;
    uint32_t eax_6 = sub_4037a4(ecx_5, edx_2, 0);
    if (eax_6 == 0)
    {
        free(data_424738);
        eax_6 = free(data_42472c);
    }
    data_42472c = 0;
    data_424738 = 0;
    return eax_6;
}

uint32_t __fastcall sub_40367d(int16_t* arg1, int16_t* arg2, char arg3)
{
    int16_t* ebx = arg1;
    int16_t* str = arg2;
    int16_t* var_8 = ebx;
    uint32_t eax = *ebx;
    int16_t* edi = ebx;
    uint32_t ecx = eax;
    if (eax != 0)
    {
        uint32_t eax_2;
        do
        {
            if (sub_403b50(ecx) == 0)
            {
                break;
            }
            edi = &edi[1];
            eax_2 = *edi;
            ecx = eax_2;
        } while (eax_2 != 0);
        ebx = var_8;
    }
    uint32_t eax_3 = *edi;
    if (eax_3 != 0)
    {
        if ((arg3 & 4) == 0)
        {
            uint32_t var_24_1 = eax_3;
            sub_405b2c(data_424730, 0x3e9);
        }
        else
        {
            eax_3 = 0;
        }
    }
    if (((eax_3 != 0 && (arg3 & 4) == 0) || eax_3 == 0))
    {
        if ((arg3 & 0x40) != 0)
        {
            int32_t var_c_1 = 0;
            int32_t edi_1 = 0;
            wchar16* i = wcschr(str, 0x24);
            if (i != 0)
            {
                do
                {
                    edi_1 = (edi_1 + 1);
                    i = wcschr(&i[1], 0x24);
                } while (i != 0);
                if (edi_1 != 0)
                {
                    int16_t* str_2 = str;
                    do
                    {
                        i = *str_2;
                        str_2 = &str_2[1];
                    } while (i != 0);
                    int32_t eax_6 = ((((str_2 - &str_2[1]) >> 1) + 1) + edi_1);
                    int32_t eax_7;
                    int32_t edx_1;
                    edx_1 = HIGHD((eax_6 * 2));
                    eax_7 = LOWD((eax_6 * 2));
                    int32_t ecx_6;
                    ecx_6 = ((eax_6 * 2) >> 0x20) != 0;
                    int32_t str_1 = sub_40b5d9(((-ecx_6) | eax_7));
                    int16_t i_1 = *str;
                    void* edi_2 = &str[1];
                    int32_t str_3 = str_1;
                    if (i_1 != 0)
                    {
                        do
                        {
                            *str_3 = i_1;
                            str_3 = (str_3 + 2);
                            if (i_1 == 0x24)
                            {
                                *str_3 = 0x24;
                                str_3 = (str_3 + 2);
                            }
                            i_1 = *edi_2;
                            edi_2 = (edi_2 + 2);
                        } while (i_1 != 0);
                        ebx = var_8;
                    }
                    *str_3 = 0;
                    free(str);
                    str = str_1;
                }
            }
        }
        eax_3 = sub_4037a4(ebx, str, arg3);
    }
    return eax_3;
}

uint32_t __fastcall sub_4037a4(int16_t* arg1, int16_t* arg2, uint32_t arg3)
{
    int16_t* str = arg2;
    char var_5 = 0;
    int32_t var_10 = 0;
    char ebx = arg3;
    int16_t* str_1;
    if ((ebx & 2) == 0)
    {
        uint32_t eax_2;
        if (data_41450d == 0)
        {
        label_403842:
            data_41450d = 0;
            uint32_t esi_1 = sub_40b534(arg1);
            if (esi_1 != 0)
            {
                eax_2 = *(esi_1 + 0xc);
                if ((eax_2 & 2) == 0)
                {
                    eax_2 = (eax_2 & data_41450c);
                    if ((eax_2 & 4) == 0)
                    {
                        goto label_403873;
                    }
                    goto label_403864;
                }
            label_403864:
                eax_2 = 0;
            }
            else
            {
            label_403873:
                uint32_t edx = sub_40ec89();
                *(edx + 4) = str;
                if (esi_1 != 0)
                {
                    var_5 = 1;
                }
                else
                {
                    esi_1 = sub_40b5fe(0x10);
                    *(esi_1 + 4) = arg1;
                }
                uint32_t eax_5;
                eax_5 = *(esi_1 + 0xc);
                eax_5 = (eax_5 & 0xef);
                eax_5 = (eax_5 | ebx);
                *(esi_1 + 0xc) = eax_5;
                *edx = *(esi_1 + 8);
                *(esi_1 + 8) = edx;
                if (var_5 == 0)
                {
                    uint32_t* ecx_5 = data_4386a8;
                    *esi_1 = *ecx_5;
                    *ecx_5 = esi_1;
                    data_4386a8 = 0;
                }
                if (((ebx & 0x40) == 0 && wcschr(str, 0x24) != 0))
                {
                    *(esi_1 + 0xc) = (*(esi_1 + 0xc) | 1);
                    eax_2 = sub_40f012(&str, nullptr, nullptr, arg1, 1, 0, ebx, 0);
                    *(esi_1 + 0xc) = (*(esi_1 + 0xc) & 0xfe);
                    if (eax_2 == 0)
                    {
                        *(esi_1 + 0xc) = (*(esi_1 + 0xc) | 0x10);
                        *(esi_1 + 8) = 0;
                    }
                }
                eax_2 = 1;
            }
            return eax_2;
        }
        if ((data_41450c & 4) != 0)
        {
            goto label_403842;
        }
        int32_t eax_1 = _wgetenv_s(&var_10, 0, 0, arg1);
        if (eax_1 != 0)
        {
            goto label_403842;
        }
        if (var_10 <= eax_1)
        {
            goto label_403842;
        }
        eax_2 = sub_40b534(arg1);
        if (eax_2 != 0)
        {
            eax_2 = *(eax_2 + 0xc);
            if ((eax_2 & 2) != 0)
            {
                goto label_403864;
            }
            eax_2 = (eax_2 & data_41450c);
            if ((eax_2 & 4) != 0)
            {
                goto label_403864;
            }
        }
        str_1 = str;
        goto label_403820;
    }
    if (*arg2 == 0)
    {
        goto label_403842;
    }
    str_1 = arg2;
label_403820:
    if (_wputenv_s(arg1, sub_40f94d(str_1)) != 0)
    {
        sub_405b2c(data_424730, 0x41f);
    }
    goto label_403842;
}

int32_t __fastcall sub_403907(int16_t* arg1, char arg2)
{
    int16_t* var_8 = arg1;
    int32_t eax = data_424718;
    *var_8[3] = arg2;
    if (eax == 0)
    {
        eax = sub_40b5fe(0x20);
        data_424718 = eax;
    }
    int32_t ecx;
    int32_t edi;
    if (*var_8[3] == 0)
    {
        int32_t eax_2;
        eax_2 = sub_403afe(eax);
        edi = eax_2;
    }
    else
    {
        int32_t eax_1 = sub_40b5fe(8);
        ecx = data_424718;
        edi = eax_1;
        *(edi + 4) = ecx;
    }
    int32_t var_18 = ecx;
    int32_t var_1c = ecx;
    void** eax_3 = sub_40ee2d(arg1);
    int32_t eax_4;
    if (eax_3 == 0)
    {
        *edi = 0;
        int32_t* eax_5 = sub_40b5fe(0x20);
        int32_t ecx_7;
        ecx_7 = data_41450f;
        int32_t var_18_2 = ecx_7;
        eax_5[2] = ecx_7;
        eax_5[1] = arg1;
        eax_5[6] = edi;
        int32_t** ecx_9 = ((sub_40edf5(arg1) << 2) + &data_424510);
        eax_4 = *ecx_9;
        *eax_5 = eax_4;
        *ecx_9 = eax_5;
    }
    else
    {
        if (((eax_3[2] ^ data_41450f) & 0x20) != 0)
        {
            sub_405b2c(data_424730, 0x43f);
        }
        sub_40ede0(&eax_3[6], edi);
        eax_4 = free(arg1);
    }
    return eax_4;
}

void __fastcall sub_4039c8(int32_t* arg1)
{
    void** i = data_424728;
    int32_t* esi = arg1;
    void** i_3 = i;
    int32_t* var_14 = esi;
    void** i_2 = i;
    void** i_1 = i_3;
    while (i != 0)
    {
        wchar16* eax_1 = wcschr(i[1], 0x24);
        if (eax_1 == 0)
        {
            i = *i;
            *i_3 = (*i_3 & eax_1);
            i_2 = i;
            sub_40ede0(esi, i_3);
        }
        else
        {
            int32_t eax_2 = i[1];
            int32_t* j_3 = data_42473c;
            int32_t var_8 = 0;
            int32_t var_1c = eax_2;
            void var_2c;
            sub_40f9d0(&var_2c, &var_1c, 0xff, &data_42473c, 0, &var_8);
            int32_t edx_3 = var_8;
            var_8 = 0;
            if (j_3 != data_42473c)
            {
                int32_t* j_5 = data_435698;
                int32_t* j;
                do
                {
                    j = *j_3;
                    *j_3 = j_5;
                    j_5 = j_3;
                    j_3 = j;
                } while (j != data_42473c);
                data_435698 = j_5;
            }
            int32_t var_10 = 0;
            int32_t j_2 = wcstok_s(edx_3, &data_40104c, &var_10);
            int32_t j_4 = j_2;
            if (j_2 != 0)
            {
                int32_t j_1 = j_2;
                do
                {
                    int32_t* eax_3 = sub_40ec89();
                    eax_3[1] = sub_40ecdb(j_1);
                    sub_40ede0(var_14, eax_3);
                    j_1 = wcstok_s(0, &data_40104c, &var_10);
                } while (j_1 != 0);
                i = i_2;
                i_3 = i_1;
            }
            free(edx_3);
            free(i[1]);
            i = *i;
            esi = var_14;
            i_2 = i;
            *i_3 = data_435698;
            data_435698 = i_3;
        }
        i_3 = i;
        i_1 = i;
    }
}

int32_t __fastcall sub_403afe(int32_t* arg1)
{
    int32_t eax = sub_40b5fe(8);
    int32_t eax_1 = sub_40b5fe(0x20);
    int32_t edx = *arg1;
    *(eax + 4) = eax_1;
    *eax_1 = edx;
    *(eax_1 + 4) = arg1[1];
    *(eax_1 + 8) = arg1[2];
    *(eax_1 + 0xc) = arg1[3];
    int32_t ecx_2;
    ecx_2 = arg1[4];
    *(eax_1 + 0x10) = ecx_2;
    int32_t ecx_3 = arg1[7];
    *(eax_1 + 0x18) = arg1[6];
    *(eax_1 + 0x1c) = ecx_3;
    return eax;
}

int32_t sub_403b48()
{
    int32_t ecx;
    int32_t var_4 = ecx;
    return sub_40b5d9(ecx);
}

int32_t __fastcall sub_403b50(int32_t arg1)
{
    if (arg1 >= 0x80)
    {
        int32_t eax_1 = iswspace(arg1);
        int32_t eax_2 = (-eax_1);
        eax_2 = (eax_2 - eax_2);
        eax_2 = (eax_2 + 1);
        return eax_2;
    }
    uint32_t eax;
    eax = *(arg1 + 0x401090);
    eax = (eax & 1);
    return eax;
}

wchar16* __fastcall sub_403b75(wchar16* arg1, int32_t arg2)
{
    return wcschr(arg1, arg2);
}

int32_t __thiscall sub_403b80(uint8_t* arg1, int16_t arg2)
{
    uint8_t* var_8 = arg1;
    sub_403cac(arg1, 1);
    int32_t eax;
    eax = arg2;
    *(*(arg1 + 0x800) + (*(arg1 + 0x808) << 1)) = eax;
    *(arg1 + 0x808) = (*(arg1 + 0x808) + 1);
    return eax;
}

uint32_t __thiscall sub_403bb0(uint8_t* arg1, int16_t* arg2)
{
    uint8_t* var_8 = arg1;
    int16_t* esi = arg2;
    uint32_t eax = *esi;
    if (eax != 0)
    {
        int16_t edx_1 = eax;
        do
        {
            sub_403b80(arg1, edx_1);
            esi = &esi[1];
            eax = *esi;
            edx_1 = eax;
        } while (eax != 0);
    }
    return eax;
}

int32_t __thiscall sub_403be1(uint8_t* arg1, uint8_t* arg2, int32_t arg3)
{
    uint8_t* var_8 = arg1;
    sub_403cac(arg1, arg3);
    memcpy((*(arg1 + 0x800) + (*(arg1 + 0x808) << 1)), arg2, (arg3 * 2));
    *(arg1 + 0x808) = (*(arg1 + 0x808) + arg3);
    return arg3;
}

int32_t* __thiscall sub_403c20(uint8_t* arg1, int32_t* arg2, int32_t* arg3)
{
    uint8_t* var_8 = arg1;
    int32_t esi = *(arg1 + 0x800);
    *(arg1 + 0x800) = 0;
    int32_t edx = *(arg1 + 0x808);
    if (esi == arg1)
    {
        esi = sub_403d2a(edx);
        memcpy(esi, arg1, (*(arg1 + 0x808) * 2));
    }
    else if (edx != *(arg1 + 0x804))
    {
        esi = sub_403d5c(esi, edx);
    }
    int32_t var_1c_2;
    int32_t eax_5;
    if (arg3 != &var_8)
    {
        eax_5 = *arg3;
        *arg3 = esi;
        if (eax_5 != 0)
        {
            int32_t var_18_2 = 2;
            var_1c_2 = eax_5;
        }
    }
    if ((arg3 == &var_8 && esi != 0))
    {
        int32_t var_18_3 = 2;
        var_1c_2 = esi;
    }
    if (((arg3 == &var_8 && esi != 0) || (arg3 != &var_8 && eax_5 != 0)))
    {
        operator new(var_1c_2);
    }
    *arg2 = *arg3;
    arg2[1] = (*(arg1 + 0x808) - 1);
    return arg2;
}

int32_t __thiscall sub_403cac(uint8_t* arg1, int32_t arg2)
{
    int32_t eax_1 = (arg2 + *(arg1 + 0x808));
    int32_t ecx = *(arg1 + 0x804);
    if (eax_1 > ecx)
    {
        eax_1 = (eax_1 - ecx);
        int32_t edx_4 = ((((eax_1 - 1) & 0xfffffc00) + 0x400) + ecx);
        if (edx_4 != ecx)
        {
            int32_t ecx_1 = *(arg1 + 0x800);
            *(arg1 + 0x804) = edx_4;
            if (ecx_1 != arg1)
            {
                eax_1 = sub_403d5c(ecx_1, edx_4);
                *(arg1 + 0x800) = eax_1;
            }
            else
            {
                int32_t eax_2 = sub_403d2a(edx_4);
                int32_t ecx_3 = *(arg1 + 0x808);
                *(arg1 + 0x800) = eax_2;
                eax_1 = memcpy(eax_2, arg1, (ecx_3 * 2));
            }
        }
    }
    return eax_1;
}

int32_t sub_403d1e() __noreturn
{
    std::_Xout_of_range("invalid string_view position");
    /* no return */
}

int32_t __fastcall sub_403d2a(int32_t arg1)
{
    int32_t esi = 0;
    if (arg1 <= 0x7ffffffc)
    {
        esi = malloc((arg1 * 2));
    }
    if ((arg1 > 0x7ffffffc || (arg1 <= 0x7ffffffc && esi == 0)))
    {
        sub_405b2c(data_424730, 0x41b);
    }
    return esi;
}

int32_t __fastcall sub_403d5c(int32_t arg1, int32_t arg2)
{
    if (arg1 == 0)
    {
        /* tailcall */
        return sub_403d2a(arg2);
    }
    int32_t esi = 0;
    if (arg2 <= 0x7ffffffc)
    {
        esi = realloc(arg1, (arg2 * 2));
    }
    if ((arg2 > 0x7ffffffc || (arg2 <= 0x7ffffffc && esi == 0)))
    {
        sub_405b2c(data_424730, 0x41b);
    }
    return esi;
}

uint32_t sub_403d9c()
{
    __security_cookie;
    int32_t* i = data_424710;
    int32_t eax_2;
    uint32_t eax_7;
    uint32_t eax_10;
    if (i != 0)
    {
        int32_t* i_1 = i;
        uint32_t esi_2;
        do
        {
            int32_t edx_1;
            eax_2 = wcspbrk(i_1[1], &data_401044);
            int32_t var_270;
            if (eax_2 == 0)
            {
                edx_1 = data_41450e;
                var_270 = 0;
                int32_t var_26c_2 = 0;
                void* const var_284_5 = &data_401044;
                eax_7 = sub_403efa(*(data_424710 + 4), &var_270);
                if ((eax_7 < 0 && (data_41450c & 8) != 0))
                {
                    esi_2 = 0xff;
                    break;
                }
            }
            else
            {
                FindFileHandle var_264;
                void var_260;
                uint32_t j = sub_408256(*(data_424710 + 4), &var_260, &var_264);
                if (j == 0)
                {
                    int32_t var_284_4 = *(data_424710 + 4);
                    sub_405b2c(0, 0x42d);
                }
                else
                {
                    uint32_t eax_5;
                    do
                    {
                        int32_t eax_3 = sub_4114ed(*(data_424710 + 4), j);
                        int32_t eax_4;
                        int32_t edx_4;
                        eax_4 = sub_40823c(&var_260);
                        var_270 = eax_4;
                        void* var_284_2 = &var_260;
                        int32_t var_26c_1 = edx_4;
                        edx_4 = data_41450e;
                        eax_5 = sub_403efa(eax_3, &var_270);
                        free(eax_3);
                        if ((eax_5 < 0 && (data_41450c & 8) != 0))
                        {
                            break;
                        }
                        j = sub_4083e1(&var_260, var_264);
                    } while (j != 0);
                    if ((eax_5 < 0 && (data_41450c & 8) != 0))
                    {
                        esi_2 = 0xffffffff;
                        break;
                    }
                }
            }
            data_424710 = *i;
            *i = data_435698;
            data_435698 = i;
            i = data_424710;
            i_1 = i;
        } while (i != 0);
        if (((eax_2 == 0 && eax_7 < 0) && (data_41450c & 8) != 0))
        {
            sub_405322(i);
            eax_10 = esi_2;
        }
    }
    if ((i == 0 || (i != 0 && (!((eax_2 == 0 && eax_7 < 0) && (data_41450c & 8) != 0)))))
    {
        eax_10 = 0;
    }
    CookieCheckFunction(eax_10);
    return eax_10;
}

uint32_t __thiscall sub_403efa(int16_t* arg1, int32_t* arg2)
{
    int32_t* i_3 = arg1;
    int32_t edi = 0;
    i_3 = nullptr;
    char edx;
    uint32_t eax = sub_403f66(arg1, edx, arg2, 0, &i_3);
    int32_t* i = i_3;
    uint32_t ebx = eax;
    if (i != 0)
    {
        do
        {
            uint32_t eax_1 = sub_40543f(i);
            i = *i;
            edi = (edi + eax_1);
        } while (i != 0);
        int32_t* i_1 = i_3;
        ebx = (ebx + edi);
        while (i_1 != 0)
        {
            int32_t* ecx_1 = i_1[3];
            int32_t* i_2 = i_1;
            *ecx_1 = data_435698;
            int32_t** eax_3 = i_1[4];
            data_435698 = eax_3;
            *eax_3 = ecx_1;
            i_1 = *i_1;
            free(i_2);
        }
    }
    return ebx;
}

uint32_t __fastcall sub_403f66(int16_t* arg1, char arg2, int32_t* arg3, int32_t arg4, int32_t* arg5)
{
    char var_c = arg1;
    int16_t* var_10 = arg1;
    data_414504 = (data_414504 + 1);
    int16_t* var_1c = arg1;
    int16_t* var_20 = arg1;
    var_c = 1;
    void** eax = sub_40ee2d(arg1);
    if (eax == 0)
    {
        eax = sub_40534c(arg1, arg2);
        var_c = 0;
    }
    uint32_t eax_1 = sub_403fbc(eax, arg2, arg3, var_c, arg4, arg5);
    data_414504 = (data_414504 - 1);
    return eax_1;
}

uint32_t __fastcall sub_403fbc(void* arg1, char arg2, int32_t* arg3, char arg4, int32_t arg5, int32_t* arg6)
{
    __security_cookie;
    int32_t var_4d4 = arg5;
    int32_t var_4a0 = arg5;
    uint32_t eax_4 = 0;
    uint32_t var_46c = 0;
    uint32_t var_480 = 0;
    if (arg1 == 0)
    {
        *arg3 = 0;
        arg3[1] = 0;
    }
    else
    {
        void* var_478_1 = (arg1 + 4);
        if ((*(arg1 + 9) & 1) == 0)
        {
            var_478_1 = (arg1 + 4);
        }
        else
        {
            int32_t var_500_1 = *(arg1 + 4);
            sub_405b2c(0, 0x42f);
        }
        int32_t* ebx_1 = *(arg1 + 0x1c);
        int32_t* lpSystemTimeAsFileTime_6;
        int32_t* i_29;
        uint32_t esi_2;
        if (ebx_1 == 0)
        {
            eax_4 = *(arg1 + 9);
            void var_4d0;
            void var_464;
            if ((eax_4 & 2) == 0)
            {
                eax_4 = (eax_4 | 1);
                int16_t** var_4e4_1 = nullptr;
                int32_t* i_13 = nullptr;
                int32_t* i_9 = nullptr;
                int32_t* i_38 = nullptr;
                *(arg1 + 9) = eax_4;
                void** eax_11 = *(arg1 + 0x18);
                int32_t* var_494_1 = nullptr;
                int32_t* s;
                __builtin_memset(&s, 0, 0x18);
                void** var_4dc_1 = nullptr;
                int32_t* var_47c_1 = nullptr;
                int32_t* lpSystemTimeAsFileTime_11 = nullptr;
                int32_t* lpSystemTimeAsFileTime_4 = nullptr;
                int32_t* i_27 = nullptr;
                int32_t* lpSystemTimeAsFileTime_14 = nullptr;
                int32_t var_4c0_1 = 0;
                int32_t* lpSystemTimeAsFileTime_3 = nullptr;
                int16_t* ecx_7 = *(arg1 + 4);
                int32_t* i_11 = nullptr;
                int32_t* i_36 = nullptr;
                data_424f54 = ecx_7;
                data_424f58 = ecx_7;
                void** var_488_1 = eax_11;
                int32_t* lpSystemTimeAsFileTime;
                int32_t* i_25;
                int16_t* lpSystemTimeAsFileTime_10;
                int32_t* i_33;
                int32_t* var_4a4_1;
                if (eax_11 != 0)
                {
                    if ((*(eax_11[1] + 0x10) & 0x20) != 0)
                    {
                        if (sub_408256(ecx_7, &var_464, &var_4d0) == 0)
                        {
                            i_38 = nullptr;
                        }
                        else
                        {
                            int32_t* lpSystemTimeAsFileTime_15;
                            lpSystemTimeAsFileTime_15 = sub_40823c(&var_464);
                            lpSystemTimeAsFileTime_11 = lpSystemTimeAsFileTime_15;
                            i_36 = i_38;
                        }
                    }
                    void** eax_61 = var_488_1;
                    while (true)
                    {
                        int32_t* eax_14 = eax_61[1];
                        int32_t* lpSystemTimeAsFileTime_5 = nullptr;
                        int32_t* i_34 = nullptr;
                        var_47c_1 = eax_14;
                        void* esi_4 = var_478_1;
                        if ((eax_14[6] | var_47c_1[7]) != 0)
                        {
                            int32_t temp1_1 = var_47c_1[7];
                            if ((i_38 <= temp1_1 && (i_38 < temp1_1 || (i_38 >= temp1_1 && lpSystemTimeAsFileTime_11 <= var_47c_1[6]))))
                            {
                                i_38 = var_47c_1[7];
                                lpSystemTimeAsFileTime_11 = var_47c_1[6];
                                i_36 = i_38;
                            }
                        }
                        else
                        {
                            var_4e4_1 = &var_47c_1[6];
                            int32_t** eax_19;
                            int32_t* i_23;
                            eax_19 = sub_404df3(var_47c_1, *esi_4);
                            int32_t** esi_5 = eax_19;
                            int32_t** var_4c8_1 = esi_5;
                            int32_t** var_4e0_1 = esi_5;
                            int32_t* i_10;
                            int32_t edx_5;
                            if (esi_5 != 0)
                            {
                                while (true)
                                {
                                    int32_t* i_43 = esi_5[3];
                                    lpSystemTimeAsFileTime_14 = esi_5[2];
                                    edx_5 = var_47c_1[4];
                                    uint32_t eax_22 = sub_403f66(esi_5[1], edx_5, &lpSystemTimeAsFileTime_14, 0, &i_9);
                                    uint32_t ecx_14 = (var_46c + eax_22);
                                    bool cond:3_1 = data_424737 == 0;
                                    var_46c = ecx_14;
                                    var_480 = ecx_14;
                                    if (((!cond:3_1) && eax_22 != 0))
                                    {
                                        uint32_t var_500_7 = ecx_14;
                                        uint32_t var_504_2 = ecx_14;
                                        if ((*(sub_40ee2d(esi_5[1]) + 9) & 8) == 0)
                                        {
                                            int32_t var_500_8 = esi_5[1];
                                            data_414020 = 0;
                                            sub_405b2c(0, 0xfaa);
                                        }
                                        *(arg1 + 9) = (*(arg1 + 9) | 8);
                                    }
                                    int32_t* i_39 = i_43;
                                    int32_t* lpSystemTimeAsFileTime_13 = lpSystemTimeAsFileTime_14;
                                    if ((i_34 <= i_39 && (i_34 < i_39 || (i_34 >= i_39 && lpSystemTimeAsFileTime_5 <= lpSystemTimeAsFileTime_13))))
                                    {
                                        lpSystemTimeAsFileTime_5 = lpSystemTimeAsFileTime_13;
                                        i_34 = i_39;
                                    }
                                    int32_t* i_41 = i_36;
                                    uint32_t eax_28;
                                    if (((lpSystemTimeAsFileTime_11 | i_41) == 0 && (var_47c_1[4] & 0x20) == 0))
                                    {
                                        eax_28 = sub_408256(*var_478_1, &var_464, &var_4d0);
                                        if (eax_28 == 0)
                                        {
                                            i_39 = i_43;
                                            lpSystemTimeAsFileTime_13 = lpSystemTimeAsFileTime_14;
                                        }
                                    }
                                    int32_t* lpSystemTimeAsFileTime_16;
                                    if ((((((lpSystemTimeAsFileTime_11 | i_41) == 0 && (var_47c_1[4] & 0x20) == 0) && eax_28 == 0) || (lpSystemTimeAsFileTime_11 | i_41) != 0) || ((lpSystemTimeAsFileTime_11 | i_41) == 0 && (var_47c_1[4] & 0x20) != 0)))
                                    {
                                        lpSystemTimeAsFileTime_16 = lpSystemTimeAsFileTime_11;
                                    }
                                    if ((((lpSystemTimeAsFileTime_11 | i_41) == 0 && (var_47c_1[4] & 0x20) == 0) && eax_28 != 0))
                                    {
                                        int32_t* i_44;
                                        lpSystemTimeAsFileTime_16 = sub_40823c(&var_464);
                                        lpSystemTimeAsFileTime_13 = lpSystemTimeAsFileTime_14;
                                        i_41 = i_44;
                                        i_39 = i_43;
                                        lpSystemTimeAsFileTime_11 = lpSystemTimeAsFileTime_16;
                                        i_36 = i_41;
                                        *(arg1 + 0x10) = lpSystemTimeAsFileTime_16;
                                        *(arg1 + 0x14) = i_41;
                                    }
                                    if ((*(arg1 + 8) & 0x10) != 0)
                                    {
                                    label_4043a4:
                                        int32_t* eax_29 = sub_40ec89();
                                        int32_t* i_12 = var_494_1;
                                        int32_t* i_24 = &s;
                                        eax_29[1] = sub_40ecdb(var_4c8_1[1]);
                                        if (i_12 != 0)
                                        {
                                            int32_t* i;
                                            do
                                            {
                                                i = *i_12;
                                                i_24 = i_12;
                                                i_12 = i;
                                            } while (i != 0);
                                        }
                                        *i_24 = eax_29;
                                        var_494_1 = s;
                                    }
                                    else
                                    {
                                        if (i_41 < i_39)
                                        {
                                            goto label_4043a4;
                                        }
                                        if ((i_41 <= i_39 && lpSystemTimeAsFileTime_16 < lpSystemTimeAsFileTime_13))
                                        {
                                            goto label_4043a4;
                                        }
                                        if ((data_424736 != 0 && (lpSystemTimeAsFileTime_16 == lpSystemTimeAsFileTime_13 && i_41 == i_39)))
                                        {
                                            goto label_4043a4;
                                        }
                                    }
                                    int32_t* eax_32 = sub_40ec89();
                                    int32_t eax_34;
                                    eax_34 = sub_40ecdb(var_4c8_1[1]);
                                    eax_32[1] = eax_34;
                                    i_23 = &i_11;
                                    if (i_13 != 0)
                                    {
                                        int32_t* i_1;
                                        do
                                        {
                                            i_1 = *i_13;
                                            i_23 = i_13;
                                            i_13 = i_1;
                                        } while (i_1 != 0);
                                    }
                                    *i_23 = eax_32;
                                    esi_5 = *var_4c8_1;
                                    var_4c8_1 = esi_5;
                                    if (esi_5 == 0)
                                    {
                                        break;
                                    }
                                    i_13 = i_11;
                                }
                                i_10 = i_11;
                            }
                            int32_t* i_2 = i_9;
                            if (i_2 != 0)
                            {
                                int32_t ebx_2 = 0;
                                do
                                {
                                    uint32_t eax_36;
                                    eax_36 = sub_40543f(i_2);
                                    i_2 = *i_2;
                                    ebx_2 = (ebx_2 + eax_36);
                                } while (i_2 != 0);
                                int32_t* i_3 = i_9;
                                uint32_t eax_38 = (var_46c + ebx_2);
                                var_46c = eax_38;
                                var_480 = eax_38;
                                while (i_3 != 0)
                                {
                                    int32_t* ecx_22 = i_3[3];
                                    int32_t* i_8 = i_3;
                                    *ecx_22 = data_435698;
                                    int32_t** eax_40 = i_3[4];
                                    data_435698 = eax_40;
                                    *eax_40 = ecx_22;
                                    i_3 = *i_3;
                                    free(i_8);
                                }
                                i_9 = (i_9 & i_3);
                            }
                            int32_t** ebx_3 = var_4e0_1;
                            while (true)
                            {
                                int32_t** esi_9 = ebx_3;
                                if (ebx_3 == 0)
                                {
                                    break;
                                }
                                free(ebx_3[1]);
                                ebx_3 = *ebx_3;
                                free(esi_9);
                            }
                            edx_5 = var_47c_1[4];
                            int32_t eax_41 = var_47c_1[2];
                            int32_t* i_26;
                            if ((edx_5 & 0x20) == 0)
                            {
                                if (eax_41 != 0)
                                {
                                    if (var_4a4_1 == 0)
                                    {
                                        var_4a4_1 = var_47c_1;
                                    }
                                    else
                                    {
                                        int32_t var_500_20 = *var_478_1;
                                        sub_405b2c(0, 0xfa4);
                                    }
                                }
                                int32_t* i_30 = i_34;
                                if ((i_26 <= i_30 && (i_26 < i_30 || (i_26 >= i_30 && lpSystemTimeAsFileTime_3 <= lpSystemTimeAsFileTime_5))))
                                {
                                    lpSystemTimeAsFileTime_3 = lpSystemTimeAsFileTime_5;
                                    i_26 = i_30;
                                    lpSystemTimeAsFileTime_10 = lpSystemTimeAsFileTime_5;
                                    i_33 = i_30;
                                }
                                goto label_4047e9;
                            }
                            if (eax_41 == 0)
                            {
                            label_4047e9:
                                esi_2 = var_46c;
                            }
                            else
                            {
                                i_23 = data_424737;
                                data_424f48 = 0;
                                data_424f4c = 0;
                                int32_t* i_4 = i_10;
                                data_424f50 = var_494_1;
                                data_424f44 = i_4;
                                uint8_t* esi_11 = *var_478_1;
                                data_424f54 = esi_11;
                                data_424f58 = esi_11;
                                int32_t* lpSystemTimeAsFileTime_17;
                                if (((i_23 == 0 || (i_23 != 0 && (*(arg1 + 9) & 8) != 0)) && var_46c != 0))
                                {
                                    lpSystemTimeAsFileTime_17 = lpSystemTimeAsFileTime_11;
                                }
                                if ((((i_23 != 0 && (*(arg1 + 9) & 8) == 0) || ((i_23 == 0 || (i_23 != 0 && (*(arg1 + 9) & 8) != 0)) && var_46c == 0)) && i_36 >= i_34))
                                {
                                    lpSystemTimeAsFileTime_17 = lpSystemTimeAsFileTime_11;
                                    if ((i_36 <= i_34 && lpSystemTimeAsFileTime_17 < lpSystemTimeAsFileTime_5))
                                    {
                                        goto label_40459b;
                                    }
                                }
                                if ((((i_23 == 0 || (i_23 != 0 && (*(arg1 + 9) & 8) != 0)) && var_46c != 0) || (((i_23 != 0 && (*(arg1 + 9) & 8) == 0) || ((i_23 == 0 || (i_23 != 0 && (*(arg1 + 9) & 8) != 0)) && var_46c == 0)) && i_36 >= i_34)))
                                {
                                    if ((data_424736 != 0 && lpSystemTimeAsFileTime_17 == lpSystemTimeAsFileTime_5))
                                    {
                                        lpSystemTimeAsFileTime_17 = lpSystemTimeAsFileTime_11;
                                        if (i_36 == i_34)
                                        {
                                            goto label_40459b;
                                        }
                                    }
                                    if (((lpSystemTimeAsFileTime_17 | i_36) == 0 && (lpSystemTimeAsFileTime_5 | i_34) == 0))
                                    {
                                        goto label_40459b;
                                    }
                                    if (*var_47c_1 == 0)
                                    {
                                        goto label_40459b;
                                    }
                                }
                                if ((((i_23 != 0 && (*(arg1 + 9) & 8) == 0) || ((i_23 == 0 || (i_23 != 0 && (*(arg1 + 9) & 8) != 0)) && var_46c == 0)) && i_36 < i_34))
                                {
                                label_40459b:
                                    lpSystemTimeAsFileTime_17 = data_435478;
                                    char var_465_1 = lpSystemTimeAsFileTime_17;
                                    int32_t eax_47 = var_4d4;
                                    data_435478 = 1;
                                    if (eax_47 == 0)
                                    {
                                        if (i_4 == 0)
                                        {
                                            eax_47 = 0;
                                        }
                                        else
                                        {
                                            eax_47 = i_4[1];
                                        }
                                        var_4a0 = eax_47;
                                        var_4d4 = eax_47;
                                    }
                                    uint32_t ecx_26 = (var_46c + sub_405e74(esi_11, var_47c_1[2], var_47c_1[3], edx_5, eax_47));
                                    bool cond:17_1 = (*(arg1 + 8) & 4) != 0;
                                    var_46c = ecx_26;
                                    var_480 = ecx_26;
                                    uint32_t eax_51;
                                    int32_t* lpSystemTimeAsFileTime_1;
                                    if ((!cond:17_1))
                                    {
                                        eax_51 = sub_408256(*var_478_1, &var_464, &var_4d0);
                                        if (eax_51 != 0)
                                        {
                                            int32_t* i_28;
                                            lpSystemTimeAsFileTime_1 = sub_40823c(&var_464);
                                            i_23 = i_28;
                                        }
                                    }
                                    if (((cond:17_1 || ((!cond:17_1) && eax_51 == 0)) && (lpSystemTimeAsFileTime_3 | i_26) == 0))
                                    {
                                        GetSystemTimeAsFileTime(&lpSystemTimeAsFileTime);
                                        lpSystemTimeAsFileTime_1 = lpSystemTimeAsFileTime;
                                        i_23 = i_25;
                                    }
                                    if ((((!cond:17_1) && eax_51 != 0) || ((cond:17_1 || ((!cond:17_1) && eax_51 == 0)) && (lpSystemTimeAsFileTime_3 | i_26) == 0)))
                                    {
                                        i_27 = i_23;
                                        lpSystemTimeAsFileTime_4 = lpSystemTimeAsFileTime_1;
                                    }
                                    if (((cond:17_1 || ((!cond:17_1) && eax_51 == 0)) && (lpSystemTimeAsFileTime_3 | i_26) != 0))
                                    {
                                        lpSystemTimeAsFileTime_1 = lpSystemTimeAsFileTime_3;
                                        lpSystemTimeAsFileTime_4 = lpSystemTimeAsFileTime_3;
                                        i_23 = i_26;
                                        i_27 = i_26;
                                    }
                                    var_47c_1[6] = lpSystemTimeAsFileTime_1;
                                    var_47c_1[7] = i_23;
                                    if (i_4 != var_494_1)
                                    {
                                        if (i_4 != 0)
                                        {
                                            int32_t* i_14 = i_4;
                                            do
                                            {
                                                i_4 = *i_4;
                                                free(i_14[1]);
                                                *i_14 = data_435698;
                                                data_435698 = i_14;
                                                i_14 = i_4;
                                            } while (i_4 != 0);
                                        }
                                        int32_t* i_5 = var_494_1;
                                        if (i_5 != 0)
                                        {
                                            int32_t* i_15 = i_5;
                                            do
                                            {
                                                i_5 = *i_5;
                                                free(i_15[1]);
                                                *i_15 = data_435698;
                                                data_435698 = i_15;
                                                i_15 = i_5;
                                            } while (i_5 != 0);
                                        }
                                    }
                                    else if (i_4 != 0)
                                    {
                                        int32_t* i_16 = i_4;
                                        do
                                        {
                                            i_4 = *i_4;
                                            free(i_16[1]);
                                            *i_16 = data_435698;
                                            data_435698 = i_16;
                                            i_16 = i_4;
                                        } while (i_4 != 0);
                                    }
                                    i_23 = data_424737;
                                    var_494_1 = nullptr;
                                    s = nullptr;
                                    i_10 = nullptr;
                                    i_11 = nullptr;
                                    data_435478 = var_465_1;
                                }
                                if ((((((i_23 == 0 || (i_23 != 0 && (*(arg1 + 9) & 8) != 0)) && var_46c != 0) || (((i_23 != 0 && (*(arg1 + 9) & 8) == 0) || ((i_23 == 0 || (i_23 != 0 && (*(arg1 + 9) & 8) != 0)) && var_46c == 0)) && i_36 >= i_34)) && *var_47c_1 != 0) || (((i_23 != 0 && (*(arg1 + 9) & 8) == 0) || ((i_23 == 0 || (i_23 != 0 && (*(arg1 + 9) & 8) != 0)) && var_46c == 0)) && i_36 < i_34)))
                                {
                                    if (i_23 == 0)
                                    {
                                        goto label_4047e9;
                                    }
                                    if ((*(arg1 + 9) & 8) != 0)
                                    {
                                        int32_t var_500_18 = *var_478_1;
                                        sub_405b2c(0, 0xfab);
                                        *(arg1 + 9) = (*(arg1 + 9) & 0xf7);
                                    }
                                    esi_2 = var_46c;
                                    if (esi_2 != 0)
                                    {
                                        int32_t var_500_19 = *var_478_1;
                                        esi_2 = 0;
                                        data_414020 = 0;
                                        var_46c = 0;
                                        var_480 = 0;
                                        sub_405b2c(0, 0xfaa);
                                    }
                                }
                            }
                            if ((var_47c_1[4] & 0x20) != 0)
                            {
                                if (*var_488_1 == 0)
                                {
                                    int32_t* eax_67;
                                    eax_67 = *(arg1 + 9);
                                    eax_67 = (eax_67 & 0xfe);
                                    eax_67 = (eax_67 | 2);
                                    if (esi_2 <= 0)
                                    {
                                        eax_67 = (eax_67 & 0xfb);
                                    }
                                    else
                                    {
                                        eax_67 = (eax_67 | 4);
                                    }
                                    i_29 = i_36;
                                    *(arg1 + 9) = eax_67;
                                    if (i_27 < i_29)
                                    {
                                        lpSystemTimeAsFileTime_6 = lpSystemTimeAsFileTime_11;
                                    }
                                    else
                                    {
                                        if (i_27 <= i_29)
                                        {
                                            lpSystemTimeAsFileTime_6 = lpSystemTimeAsFileTime_11;
                                        }
                                        if ((i_27 > i_29 || (i_27 <= i_29 && lpSystemTimeAsFileTime_4 > lpSystemTimeAsFileTime_6)))
                                        {
                                            lpSystemTimeAsFileTime_6 = lpSystemTimeAsFileTime_4;
                                            i_29 = i_27;
                                        }
                                    }
                                    *(arg1 + 0x10) = lpSystemTimeAsFileTime_6;
                                    *(arg1 + 0x14) = i_29;
                                    goto label_40406d;
                                }
                                goto label_404806;
                            }
                        label_404806:
                            i_38 = i_36;
                            esi_4 = var_478_1;
                            i_13 = i_10;
                        }
                        eax_61 = *var_488_1;
                        var_488_1 = eax_61;
                        if (eax_61 == 0)
                        {
                            ecx_7 = *esi_4;
                            break;
                        }
                    }
                }
                data_424f48 = 0;
                data_424f4c = 0;
                int32_t* lpSystemTimeAsFileTime_20 = *arg3;
                int32_t* i_42 = arg3[1];
                int32_t* lpSystemTimeAsFileTime_12 = lpSystemTimeAsFileTime_20;
                int32_t* i_35 = i_42;
                if ((lpSystemTimeAsFileTime_20 | i_42) == 0)
                {
                    if ((*(arg1 + 0x10) | *(arg1 + 0x14)) != 0)
                    {
                        lpSystemTimeAsFileTime_20 = *(arg1 + 0x10);
                        i_42 = *(arg1 + 0x14);
                        lpSystemTimeAsFileTime_12 = lpSystemTimeAsFileTime_20;
                        i_35 = i_42;
                    }
                    else
                    {
                        uint32_t eax_68;
                        eax_68 = sub_408256(ecx_7, &var_464, &var_4d0);
                        if (eax_68 != 0)
                        {
                            ecx_7 = &var_464;
                            int32_t* lpSystemTimeAsFileTime_18;
                            int32_t* i_40;
                            lpSystemTimeAsFileTime_18 = sub_40823c(ecx_7);
                            lpSystemTimeAsFileTime_20 = lpSystemTimeAsFileTime_18;
                            lpSystemTimeAsFileTime_12 = lpSystemTimeAsFileTime_18;
                            i_42 = i_40;
                            i_35 = i_40;
                        }
                    }
                }
                if ((*(arg1 + 8) & 1) != 0)
                {
                    *var_478_1;
                    ecx_7 = sub_40d450((data_414504 * 2), lpSystemTimeAsFileTime_20, i_42);
                }
                int32_t* var_500_23 = &var_4a0;
                void var_214;
                void** eax_71 = sub_40eadd(arg1, &var_214, ecx_7, lpSystemTimeAsFileTime_20, i_42, &s, &i_11, &var_480, &lpSystemTimeAsFileTime_10);
                if ((eax_71 != 0 && var_4a4_1 == 0))
                {
                    void** eax_72 = eax_71[3];
                    data_424f4c = &var_214;
                    var_4dc_1 = eax_72;
                }
                bool cond:2_1 = data_424737 == 0;
                int32_t* i_7 = s;
                int32_t* i_6 = i_11;
                uint32_t edx_14 = var_480;
                int16_t* lpSystemTimeAsFileTime_7 = *var_478_1;
                data_424f54 = lpSystemTimeAsFileTime_7;
                data_424f58 = lpSystemTimeAsFileTime_7;
                data_424f50 = i_7;
                data_424f44 = i_6;
                uint32_t var_46c_1 = edx_14;
                if ((!cond:2_1))
                {
                    if ((*(arg1 + 9) & 8) != 0)
                    {
                        goto label_4049bc;
                    }
                label_4049ca:
                    int32_t* lpSystemTimeAsFileTime_19 = lpSystemTimeAsFileTime_12;
                    if (i_35 < i_33)
                    {
                        goto label_404a24;
                    }
                    if ((i_35 <= i_33 && lpSystemTimeAsFileTime_19 < lpSystemTimeAsFileTime_10))
                    {
                        goto label_404a24;
                    }
                    if ((data_424736 != 0 && (lpSystemTimeAsFileTime_19 == lpSystemTimeAsFileTime_10 && i_35 == i_33)))
                    {
                        goto label_404a24;
                    }
                    if ((lpSystemTimeAsFileTime_19 | i_35) == 0)
                    {
                        if ((lpSystemTimeAsFileTime_10 | i_33) != 0)
                        {
                            goto label_404a0d;
                        }
                    label_404a17:
                        lpSystemTimeAsFileTime_19 = lpSystemTimeAsFileTime_12;
                    label_404a24:
                        edx_14 = data_435478;
                        char var_465_2 = edx_14;
                        data_435478 = 1;
                        char var_508_4;
                        int32_t var_504_6;
                        int32_t var_500_24;
                        uint32_t eax_79;
                        void** edx_15;
                        if (var_4a4_1 == 0)
                        {
                            int32_t* i_31;
                            if (var_4dc_1 == 0)
                            {
                                if ((data_41450c & 0x10) != 0)
                                {
                                    if (var_47c_1 != 0)
                                    {
                                        uint32_t eax_85 = sub_405e74(*var_478_1, var_47c_1[2], var_47c_1[3], var_47c_1[4], var_4a0);
                                        var_46c_1 = (var_480 + eax_85);
                                        edx_14 = var_465_2;
                                    }
                                    goto label_404ba1;
                                }
                                if (arg4 != 0)
                                {
                                    goto label_404ba1;
                                }
                                int32_t eax_86 = (lpSystemTimeAsFileTime_19 | i_35);
                                if (eax_86 != 0)
                                {
                                    goto label_404ba1;
                                }
                                if (data_424737 == eax_86)
                                {
                                    int32_t var_500_28 = *var_478_1;
                                    sub_405b2c(0, 0x431);
                                    data_435478 = var_465_2;
                                }
                                else
                                {
                                    var_46c_1 = 1;
                                label_404ba1:
                                    data_435478 = edx_14;
                                }
                                if (data_424f44 == 0)
                                {
                                    goto label_404aae;
                                }
                                lpSystemTimeAsFileTime_7 = lpSystemTimeAsFileTime_10;
                                i_31 = i_33;
                                goto label_404acc;
                            }
                            if ((eax_71[5] == 0 || (eax_71[5] != 0 && (data_41450c & 0x40) != 0)))
                            {
                                var_500_24 = var_4a0;
                                var_504_6 = *(arg1 + 8);
                                var_508_4 = eax_71[4];
                                edx_15 = var_4dc_1;
                            }
                            if ((eax_71[5] != 0 && (data_41450c & 0x40) == 0))
                            {
                                int32_t* i_37 = i_35;
                                sub_405393(arg6, eax_71, arg1);
                            label_404a9c:
                                eax_79 = var_465_2;
                                data_435478 = eax_79;
                            label_404aae:
                                GetSystemTimeAsFileTime(&lpSystemTimeAsFileTime);
                                int32_t* lpSystemTimeAsFileTime_2 = lpSystemTimeAsFileTime;
                                lpSystemTimeAsFileTime_7 = (lpSystemTimeAsFileTime_2 + 2);
                                i_31 = (i_25 + 0);
                            label_404acc:
                                i_27 = i_31;
                                lpSystemTimeAsFileTime_4 = lpSystemTimeAsFileTime_7;
                                if ((var_4e4_1 != 0 && var_4a4_1 != 0))
                                {
                                    *var_4e4_1 = lpSystemTimeAsFileTime_7;
                                    var_4e4_1[1] = i_31;
                                }
                                edx_14 = var_46c_1;
                            }
                        }
                        else
                        {
                            int32_t eax_77 = var_4a0;
                            if (eax_77 == 0)
                            {
                                if (i_6 == 0)
                                {
                                    eax_77 = 0;
                                }
                                else
                                {
                                    eax_77 = i_6[1];
                                }
                            }
                            var_500_24 = eax_77;
                            edx_15 = var_4a4_1[2];
                            var_504_6 = var_4a4_1[4];
                            var_508_4 = var_4a4_1[3];
                        }
                        if ((((var_4a4_1 == 0 && var_4dc_1 != 0) && (eax_71[5] == 0 || (eax_71[5] != 0 && (data_41450c & 0x40) != 0))) || var_4a4_1 != 0))
                        {
                            eax_79 = sub_405e74(*var_478_1, edx_15, var_508_4, var_504_6, var_500_24);
                            var_46c_1 = (var_480 + eax_79);
                            goto label_404a9c;
                        }
                        goto label_404af0;
                    }
                label_404a0d:
                    if ((*(arg1 + 8) & 0x10) != 0)
                    {
                        goto label_404a17;
                    }
                    goto label_404c0d;
                }
            label_4049bc:
                if (edx_14 == 0)
                {
                    goto label_4049ca;
                }
            label_404c0d:
                if ((data_41450c & 8) == 0)
                {
                    if ((data_414504 == 1 && (*(arg1 + 9) & 8) == 0))
                    {
                        int16_t* lpSystemTimeAsFileTime_9 = lpSystemTimeAsFileTime_7;
                        sub_405c06(2);
                        edx_14 = var_480;
                    }
                    goto label_404af0;
                }
            label_404af0:
                if (data_424737 != 0)
                {
                    if (edx_14 != 0)
                    {
                        bool cond:10_1 = (*(arg1 + 9) & 8) == 0;
                        data_414020 = 0;
                        int32_t var_504_8;
                        if ((!cond:10_1))
                        {
                            int32_t var_500_26 = *var_478_1;
                            var_504_8 = 0xfab;
                        }
                        if ((cond:10_1 && data_414504 == 1))
                        {
                            int32_t var_500_29 = *var_478_1;
                            var_504_8 = 0xfaa;
                        }
                        if (((!cond:10_1) || (cond:10_1 && data_414504 == 1)))
                        {
                            sub_405b2c(0, var_504_8);
                        }
                    }
                    goto label_404c66;
                }
            label_404c66:
                if ((data_41450c & 8) == 0)
                {
                label_404d03:
                    lpSystemTimeAsFileTime_7 = *(arg1 + 9);
                    lpSystemTimeAsFileTime_7 = (lpSystemTimeAsFileTime_7 & 0xfe);
                    bool cond:9_1 = *(arg1 + 0x1c) != 0;
                    *(arg1 + 9) = lpSystemTimeAsFileTime_7;
                    if ((!cond:9_1))
                    {
                        lpSystemTimeAsFileTime_7 = (lpSystemTimeAsFileTime_7 | 2);
                        if (var_46c_1 <= 0)
                        {
                            lpSystemTimeAsFileTime_7 = (lpSystemTimeAsFileTime_7 & 0xfb);
                        }
                        else
                        {
                            lpSystemTimeAsFileTime_7 = (lpSystemTimeAsFileTime_7 | 4);
                        }
                        *(arg1 + 9) = lpSystemTimeAsFileTime_7;
                    }
                    int32_t* i_32 = i_35;
                    int32_t* lpSystemTimeAsFileTime_8;
                    if (i_27 < i_32)
                    {
                        lpSystemTimeAsFileTime_8 = lpSystemTimeAsFileTime_12;
                    }
                    else
                    {
                        if (i_27 <= i_32)
                        {
                            lpSystemTimeAsFileTime_8 = lpSystemTimeAsFileTime_12;
                        }
                        if ((i_27 > i_32 || (i_27 <= i_32 && lpSystemTimeAsFileTime_4 > lpSystemTimeAsFileTime_8)))
                        {
                            i_32 = i_27;
                            lpSystemTimeAsFileTime_8 = lpSystemTimeAsFileTime_4;
                        }
                    }
                    *(arg1 + 0x10) = lpSystemTimeAsFileTime_8;
                    *(arg1 + 0x14) = i_32;
                    *arg3 = lpSystemTimeAsFileTime_8;
                    arg3[1] = i_32;
                    if (i_6 != i_7)
                    {
                        if (i_6 != 0)
                        {
                            int32_t* i_21 = i_6;
                            do
                            {
                                i_6 = *i_6;
                                free(i_21[1]);
                                *i_21 = data_435698;
                                data_435698 = i_21;
                                i_21 = i_6;
                            } while (i_6 != 0);
                        }
                        if (i_7 != 0)
                        {
                            int32_t* i_18 = i_7;
                            do
                            {
                                i_7 = *i_7;
                                free(i_18[1]);
                                *i_18 = data_435698;
                                data_435698 = i_18;
                                i_18 = i_7;
                            } while (i_7 != 0);
                        }
                    }
                    else if (i_6 != 0)
                    {
                        int32_t* i_22 = i_6;
                        do
                        {
                            i_6 = *i_6;
                            free(i_22[1]);
                            *i_22 = data_435698;
                            data_435698 = i_22;
                            i_22 = i_6;
                        } while (i_6 != 0);
                    }
                    eax_4 = var_46c_1;
                }
                else
                {
                    if (data_414504 != 1)
                    {
                        goto label_404d03;
                    }
                    if (i_6 != i_7)
                    {
                        if (i_6 != 0)
                        {
                            int32_t* i_19 = i_6;
                            do
                            {
                                i_6 = *i_6;
                                free(i_19[1]);
                                *i_19 = data_435698;
                                data_435698 = i_19;
                                i_19 = i_6;
                            } while (i_6 != 0);
                        }
                        if (i_7 != 0)
                        {
                            int32_t* i_17 = i_7;
                            do
                            {
                                i_7 = *i_7;
                                free(i_17[1]);
                                *i_17 = data_435698;
                                data_435698 = i_17;
                                i_17 = i_7;
                            } while (i_7 != 0);
                        }
                    }
                    else if (i_6 != 0)
                    {
                        int32_t* i_20 = i_6;
                        do
                        {
                            i_6 = *i_6;
                            free(i_20[1]);
                            *i_20 = data_435698;
                            data_435698 = i_20;
                            i_20 = i_6;
                        } while (i_6 != 0);
                    }
                    int32_t eax_93 = data_424f40;
                    int32_t eax_94 = (-eax_93);
                    eax_4 = (eax_94 - eax_94);
                }
            }
            else
            {
                if ((arg2 & 1) != 0)
                {
                    *(arg1 + 4);
                    sub_40d450((data_414504 * 2), *(arg1 + 0x10), *(arg1 + 0x14));
                }
                int32_t ecx_4 = *(arg1 + 0x14);
                *arg3 = *(arg1 + 0x10);
                arg3[1] = ecx_4;
                if ((((data_41450c & 8) == 0 && (data_414504 == 1 && (*(arg1 + 9) & 4) == 0)) && sub_408256(*(arg1 + 4), &var_464, &var_4d0) != 0))
                {
                    int32_t var_500_4 = *(arg1 + 4);
                    sub_405c06(2);
                }
                eax_4 = ((*(arg1 + 9) >> 2) & 1);
            }
        }
        else
        {
            esi_2 = sub_405594(*ebx_1);
            sub_4055b2(ebx_1);
            *(arg1 + 0x1c) = 0;
            lpSystemTimeAsFileTime_6 = *(arg1 + 0x10);
            i_29 = *(arg1 + 0x14);
        label_40406d:
            *arg3 = lpSystemTimeAsFileTime_6;
            eax_4 = esi_2;
            arg3[1] = i_29;
        }
    }
    CookieCheckFunction(eax_4);
    return eax_4;
}

int32_t** __fastcall sub_404df3(int32_t* arg1, int32_t arg2)
{
    __security_cookie;
    void** i = *arg1;
    int32_t* var_274 = nullptr;
    int32_t var_288 = arg2;
    void** i_1 = i;
    int32_t** edi = nullptr;
    int32_t** var_26c = nullptr;
    int32_t var_28c = arg1[1];
    if (i != 0)
    {
        do
        {
            int16_t* ecx = i[1];
            int16_t j_4 = *ecx;
            int16_t j_3 = j_4;
            if (j_4 != 0)
            {
                int16_t j_2 = j_4;
                int16_t j;
                do
                {
                    j_3 = j_2;
                    if (j_2 == 0x24)
                    {
                        break;
                    }
                    if (j_2 == 0x5e)
                    {
                        ecx = &ecx[1];
                    }
                    ecx = &ecx[1];
                    j = *ecx;
                    j_2 = j;
                    j_3 = j;
                } while (j != 0);
                i = i_1;
                arg2 = var_288;
            }
            uint8_t* edi_1 = i[1];
            uint8_t* var_284_1 = edi_1;
            if (j_3 != 0)
            {
                data_424f48 = arg2;
                uint8_t* var_290 = edi_1;
                uint8_t* var_270 = nullptr;
                void var_2a0;
                sub_40f9d0(&var_2a0, &var_290, 1, &var_28c, 0, &var_270);
                edi_1 = var_270;
                var_284_1 = edi_1;
                var_270 = nullptr;
            }
            int32_t esi_1 = sub_40ecdb(edi_1);
            int32_t var_280 = esi_1;
            int16_t* var_268;
            if (sub_4051da(&var_280, &var_268) != 0)
            {
                char j_1;
                do
                {
                    int16_t* esi_2 = var_268;
                    int32_t edi_2 = esi_2;
                    uint32_t eax_5 = *esi_2;
                    int16_t k = eax_5;
                    if (eax_5 != 0x7b)
                    {
                        esi_2 = nullptr;
                    }
                    else
                    {
                        while (k != 0x7d)
                        {
                            if (k == 0x5e)
                            {
                                edi_2 = (edi_2 + 2);
                            }
                            edi_2 = (edi_2 + 2);
                            int16_t k_1 = *edi_2;
                            k = k_1;
                            if (k_1 == 0)
                            {
                                break;
                            }
                        }
                        if (k == 0x7d)
                        {
                            *edi_2 = 0;
                            edi_2 = (edi_2 + 2);
                            esi_2 = &esi_2[1];
                        }
                    }
                    if ((eax_5 != 0x7b || (eax_5 == 0x7b && k == 0x7d)))
                    {
                        var_268 = esi_2;
                    }
                    char var_25d_1 = 0;
                    int32_t var_258_1 = 0;
                    int32_t var_254_1 = 0;
                    int32_t var_248_1 = 0;
                    int32_t var_244_1 = 0;
                    int32_t str_2 = sub_40ecdb(edi_2);
                    int32_t str_1 = str_2;
                    int32_t eax_6 = wcspbrk(edi_2, &data_401044);
                    void var_25c;
                    void var_230;
                    int32_t eax_7;
                    int32_t str;
                    if ((eax_6 != 0 || (eax_6 == 0 && esi_2 != 0)))
                    {
                        eax_7 = sub_408404(esi_2, edi_2, &var_25c, &var_274);
                        if (eax_7 != 0)
                        {
                            var_25d_1 = 1;
                            free(str_2);
                            edi_2 = eax_7;
                            str = sub_4114ed(eax_7, &var_230);
                            str_1 = str;
                        }
                    }
                    if (((eax_6 == 0 && esi_2 == 0) || ((eax_6 != 0 || (eax_6 == 0 && esi_2 != 0)) && eax_7 == 0)))
                    {
                        str = str_1;
                    }
                    do
                    {
                        int32_t* ebx_1 = sub_40b5fe(0x10);
                        wchar16* eax_10 = wcschr(str, 0x20);
                        wchar16* eax_11;
                        if (eax_10 != 0)
                        {
                            eax_11 = wcschr(str, 0x22);
                            if (eax_11 == 0)
                            {
                                int32_t ecx_10 = (str + 2);
                                do
                                {
                                    eax_11 = *str;
                                    str = (str + 2);
                                } while (eax_11 != 0);
                                int32_t eax_13;
                                int32_t edx_4;
                                edx_4 = HIGHD(((((str - ecx_10) >> 1) + 3) * 2));
                                eax_13 = LOWD(((((str - ecx_10) >> 1) + 3) * 2));
                                int32_t ecx_11;
                                ecx_11 = (((((str - ecx_10) >> 1) + 3) * 2) >> 0x20) != 0;
                                int32_t eax_14 = sub_40b5d9(((-ecx_11) | eax_13));
                                ebx_1[1] = eax_14;
                                wcscpy_s(eax_14, (((str - ecx_10) >> 1) + 3), &data_401074);
                                wcscat_s(ebx_1[1], (((str - ecx_10) >> 1) + 3), str_1);
                                wcscat_s(ebx_1[1], (((str - ecx_10) >> 1) + 3), &data_401074);
                                str = str_1;
                            }
                        }
                        if ((eax_10 == 0 || (eax_10 != 0 && eax_11 != 0)))
                        {
                            ebx_1[1] = sub_40ecdb(str);
                        }
                        uint32_t var_27c_1;
                        uint32_t eax_16;
                        uint32_t edx_6;
                        if (data_424735 != 0)
                        {
                            eax_16 = sub_408256(str, &var_25c, &var_274);
                            if (eax_16 == 0)
                            {
                                ebx_1[3] = eax_16;
                                edx_6 = eax_16;
                                var_27c_1 = eax_16;
                            }
                        }
                        if ((data_424735 == 0 || (data_424735 != 0 && eax_16 != 0)))
                        {
                            uint32_t edx_7;
                            eax_16 = sub_40823c(&var_25c);
                            uint32_t var_294_1 = eax_16;
                            var_27c_1 = edx_7;
                            edx_6 = eax_16;
                            ebx_1[3] = edx_7;
                        }
                        bool cond:0_1 = data_424735 == 0;
                        ebx_1[2] = eax_16;
                        if (cond:0_1)
                        {
                            sub_40ede0(&var_26c, ebx_1);
                        }
                        else
                        {
                            int32_t** ecx_18 = var_26c;
                            int32_t** eax_17;
                            if (ecx_18 != 0)
                            {
                                eax_17 = ecx_18;
                                do
                                {
                                    int32_t temp2_1 = eax_17[3];
                                    if (var_27c_1 > temp2_1)
                                    {
                                        break;
                                    }
                                    if ((var_27c_1 >= temp2_1 && edx_6 > eax_17[2]))
                                    {
                                        break;
                                    }
                                    ecx_18 = eax_17;
                                    eax_17 = *eax_17;
                                } while (eax_17 != 0);
                                str = str_1;
                                if (ecx_18 != eax_17)
                                {
                                    *ecx_18 = ebx_1;
                                    *ebx_1 = eax_17;
                                }
                            }
                            if ((ecx_18 == 0 || (ecx_18 != 0 && ecx_18 == eax_17)))
                            {
                                var_26c = ebx_1;
                            }
                        }
                        free(str);
                        if (var_25d_1 == 0)
                        {
                            break;
                        }
                        if (wcspbrk(edi_2, &data_401044) == 0)
                        {
                            break;
                        }
                        if (sub_4083e1(&var_25c, var_274) == 0)
                        {
                            break;
                        }
                        str = sub_4114ed(edi_2, &var_230);
                        str_1 = str;
                    } while (str != 0);
                    j_1 = sub_4051da(&var_280, &var_268);
                } while (j_1 != 0);
                i = i_1;
                edi_1 = var_284_1;
            }
            if (edi_1 != i[1])
            {
                free(edi_1);
            }
            free(esi_1);
            i = *i;
            arg2 = var_288;
            i_1 = i;
        } while (i != 0);
        edi = var_26c;
    }
    CookieCheckFunction(edi);
    return edi;
}

uint32_t __fastcall sub_4051da(int32_t* arg1, int16_t** arg2)
{
    int16_t* esi = *arg1;
    uint32_t eax = *esi;
    int16_t edi = eax;
    if (eax != 0)
    {
        int16_t ecx = eax;
        do
        {
            if (ecx != 0x20)
            {
                edi = ecx;
                if (ecx != 9)
                {
                    break;
                }
            }
            esi = &esi[1];
            eax = *esi;
            ecx = eax;
            edi = eax;
        } while (eax != 0);
    }
    *arg2 = esi;
    if (edi == 0)
    {
        eax = 0;
    }
    else
    {
        int16_t ecx_1 = 0x22;
        int32_t var_c_1 = 0x22;
        if (edi != 0x22)
        {
            eax = edi;
        }
        uint32_t ecx_4;
        if (edi == 0x7b)
        {
            while (true)
            {
                esi = &esi[1];
                if (*esi == 0x22)
                {
                    esi = &esi[1];
                    int16_t i;
                    do
                    {
                        i = *esi;
                        if (i == 0)
                        {
                            break;
                        }
                        esi = &esi[1];
                    } while (i != 0x22);
                }
                uint32_t eax_1 = *esi;
                if (eax_1 == 0x7d)
                {
                    break;
                }
                if (eax_1 == 0)
                {
                    sub_405b2c(0, 0x423);
                    break;
                }
            }
            esi = &esi[1];
            ecx_4 = *esi;
            eax = ecx_4;
        }
        bool cond:0_1;
        if (((edi != 0x22 && edi != 0x7b) || (edi == 0x7b && ecx_4 != 0x22)))
        {
            int16_t i_2 = eax;
            if (eax != 0)
            {
                int16_t i_1 = eax;
                while (i_1 != 0x20)
                {
                    i_2 = i_1;
                    if (i_1 == 9)
                    {
                        break;
                    }
                    esi = &esi[1];
                    eax = *esi;
                    i_1 = eax;
                    i_2 = eax;
                    if (eax == 0)
                    {
                        break;
                    }
                }
                if (i_1 != 9)
                {
                    goto label_405313;
                }
            }
            cond:0_1 = i_2 == 0;
        }
        int16_t edx;
        if ((edi == 0x7b && ecx_4 == 0x22))
        {
            do
            {
                edx = ecx_4;
                if (ecx_4 == 0)
                {
                    break;
                }
                esi = &esi[1];
                eax = *esi;
                ecx_4 = eax;
                edx = eax;
            } while (eax != 0x22);
        }
        if (edi == 0x22)
        {
            do
            {
                edx = ecx_1;
                if (ecx_1 == 0)
                {
                    break;
                }
                esi = &esi[1];
                eax = *esi;
                ecx_1 = eax;
                edx = eax;
            } while (eax != 0x22);
        }
        if (((edi == 0x7b && ecx_4 == 0x22) || edi == 0x22))
        {
            if (edx == 0)
            {
                sub_405b2c(0, 0x40e);
            }
            esi = &esi[1];
            cond:0_1 = *esi == 0;
        }
        if ((!cond:0_1))
        {
        label_405313:
            *esi = 0;
            esi = &esi[1];
        }
        *arg1 = esi;
        eax = 1;
    }
    return eax;
}

void __fastcall sub_405322(int32_t* arg1)
{
    int32_t* i = arg1;
    int32_t* i_1 = arg1;
    while (i != 0)
    {
        i = *i;
        free(i_1[1]);
        *i_1 = data_435698;
        data_435698 = i_1;
        i_1 = i;
    }
}

int32_t __fastcall sub_40534c(uint8_t* arg1, char arg2)
{
    int32_t eax = sub_40b5fe(0x20);
    int32_t eax_1;
    int32_t ecx_1;
    eax_1 = sub_40ecdb(arg1);
    *(eax + 4) = eax_1;
    int32_t var_10 = ecx_1;
    *(eax + 8) = arg2;
    *(eax + 9) = 0;
    *(eax + 0x10) = 0;
    *(eax + 0x14) = 0;
    *(eax + 0x18) = 0;
    int32_t* ecx_3 = ((sub_40edf5(arg1) << 2) + &data_424510);
    *eax = *ecx_3;
    *ecx_3 = eax;
    return eax;
}

void* __fastcall sub_405393(int32_t* arg1, int32_t arg2, void* arg3)
{
    int32_t* var_8 = arg1;
    int32_t eax = arg2;
    void** i_1 = nullptr;
    int32_t var_8_1 = eax;
    void** i = *arg1;
    if (i != 0)
    {
        do
        {
            if (i[1] == eax)
            {
                eax = i[2];
                if (eax == *(arg3 + 8))
                {
                    break;
                }
                eax = arg2;
            }
            i_1 = i;
            i = *i;
        } while (i != 0);
    }
    if ((i == 0 || i == 0))
    {
        i = sub_40b5fe(0x14);
        i[1] = var_8_1;
        i[2] = *(arg3 + 8);
        if (i_1 != 0)
        {
            *i_1 = i;
        }
        else
        {
            void*** eax_4 = *arg1;
            if (eax_4 == 0)
            {
                *arg1 = i;
            }
            else
            {
                *eax_4 = i;
            }
        }
    }
    int32_t* eax_5 = sub_40ec89();
    eax_5[1] = sub_40ecdb(*(arg3 + 4));
    sub_40ede0(&i[3], eax_5);
    int32_t* eax_8 = sub_40ec89();
    eax_8[1] = sub_40ecdb(data_424f4c);
    sub_40ede0(&i[4], eax_8);
    *(arg3 + 0x1c) = arg1;
    return arg3;
}

uint32_t __fastcall sub_40543f(void* arg1)
{
    void* ebx = arg1;
    void* var_c = ebx;
    int32_t edi = 0;
    void** i = *(ebx + 0x10);
    int32_t var_10 = 0;
    if (i != 0)
    {
        do
        {
            int16_t* str_1 = i[1];
            int16_t* str_2 = str_1;
            void* eax_1;
            do
            {
                eax_1 = *str_2;
                str_2 = &str_2[1];
            } while (eax_1 != 0);
            edi = ((edi + 1) + ((str_2 - &str_2[1]) >> 1));
            if ((*str_1 != 0x22 && wcschr(str_1, 0x20) != 0))
            {
                edi = (edi + 2);
            }
            i = *i;
        } while (i != 0);
        ebx = var_c;
    }
    int32_t eax_4;
    int32_t edx_1;
    edx_1 = HIGHD(((edi + 1) * 2));
    eax_4 = LOWD(((edi + 1) * 2));
    int32_t ecx_3;
    ecx_3 = (((edi + 1) * 2) >> 0x20) != 0;
    int32_t edi_2 = sub_40b5d9(((-ecx_3) | eax_4));
    *edi_2 = 0;
    void** i_1 = *(ebx + 0x10);
    if (i_1 != 0)
    {
        do
        {
            int16_t* str = i_1[1];
            char var_5_1;
            wchar16* eax_6;
            if (*str != 0x22)
            {
                eax_6 = wcschr(str, 0x20);
                if (eax_6 != 0)
                {
                    var_5_1 = 1;
                    wcscat_s(edi_2, (edi + 1), &data_401074);
                }
            }
            if ((*str == 0x22 || (*str != 0x22 && eax_6 == 0)))
            {
                var_5_1 = 0;
            }
            wcscat_s(edi_2, (edi + 1), i_1[1]);
            void* const eax_7 = &data_401078;
            if (var_5_1 == 0)
            {
                eax_7 = &data_401080;
            }
            wcscat_s(edi_2, (edi + 1), eax_7);
            i_1 = *i_1;
        } while (i_1 != 0);
        ebx = var_c;
    }
    void* edx_2 = *(ebx + 4);
    void** ecx_7 = *(ebx + 0xc);
    int32_t var_28_3 = 0;
    uint32_t eax_8 = *(ebx + 8);
    char var_30_4 = *(edx_2 + 0x10);
    void** edx_3 = *(edx_2 + 0xc);
    data_424f4c = edi_2;
    uint32_t eax_9;
    int32_t ecx_8;
    eax_9 = sub_405eb6(ecx_7, edx_3, var_30_4, eax_8);
    if (eax_9 == 0)
    {
        void** i_2 = *(ebx + 0xc);
        if (i_2 != 0)
        {
            do
            {
                int32_t var_28_4 = ecx_8;
                int32_t var_2c_7 = ecx_8;
                void** eax_10;
                eax_10 = sub_40ee2d(i_2[1]);
                ecx_8 = *(eax_10 + 9);
                ecx_8 = (ecx_8 & 0xfb);
                eax_10[7] = 0;
                ecx_8 = (ecx_8 | 2);
                *(eax_10 + 9) = ecx_8;
                i_2 = *i_2;
            } while (i_2 != 0);
        }
    }
    free(edi_2);
    return eax_9;
}

int32_t __fastcall sub_405594(int32_t* arg1)
{
    int32_t* var_4 = arg1;
    int32_t* i = arg1;
    int32_t edi = 0;
    while (i != 0)
    {
        uint32_t eax_1 = sub_40543f(i);
        i = *i;
        edi = (edi + eax_1);
    }
    return edi;
}

void __fastcall sub_4055b2(int32_t* arg1)
{
    void** i = *arg1;
    while (i != 0)
    {
        int32_t* ecx = i[3];
        void** i_1 = i;
        *ecx = data_435698;
        int32_t** eax_2 = i[4];
        data_435698 = eax_2;
        *eax_2 = ecx;
        i = *i;
        free(i_1);
    }
    *arg1 = (*arg1 & i);
}

int32_t __fastcall sub_4055e1(int32_t* arg1, int32_t* arg2)
{
    int32_t eax = *arg1;
    if (*((eax + (*arg2 << 1)) - 2) != 0xa)
    {
        int32_t var_8_1 = 0;
        do
        {
            eax = fgetws(0x424740, 0x400, data_424f5c);
            if (eax == 0)
            {
                break;
            }
            int16_t* ecx = &data_424740;
            do
            {
                eax = *ecx;
                ecx = &ecx[1];
            } while (eax != 0);
            int32_t ecx_2 = ((ecx - 0x424742) >> 1);
            if ((*((ecx_2 << 1) + &data_42473c) == 0x5c && *((ecx_2 << 1) + &*(data_42473c + 2)) == 0xa))
            {
                *((ecx_2 << 1) + &*(data_42473c + 2)) = 0;
                *((ecx_2 << 1) + &data_42473c) = 0x20;
            }
            int32_t esi_1 = *arg2;
            int16_t* ecx_3 = &data_424740;
            do
            {
                eax = *ecx_3;
                ecx_3 = &ecx_3[1];
            } while (eax != 0);
            int32_t edx = (((ecx_3 - 0x424742) >> 1) + esi_1);
            int32_t ecx_6 = *arg1;
            *arg2 = edx;
            int32_t ecx_7 = sub_40b61c(ecx_6, ((edx << 1) + 2));
            if (ecx_7 == 0)
            {
                sub_405b2c(data_424724, 0x419);
            }
            int32_t eax_3 = (*arg2 - esi_1);
            *arg1 = ecx_7;
            wcscpy_s((ecx_7 + (esi_1 << 1)), (eax_3 + 1), 0x424740);
            eax = *arg1;
        } while (*((eax + (*arg2 << 1)) - 2) != 0xa);
    }
    return eax;
}

int32_t __fastcall sub_4056e9(uint8_t* arg1, int32_t arg2, int32_t* arg3)
{
    uint8_t* var_8 = arg1;
    uint8_t* var_c = arg1;
    if (*arg3 == 0)
    {
        *arg3 = sub_40b5d9(0x20);
    }
    else if ((arg2 & 7) == 0)
    {
        int32_t edi_1 = 0;
        if ((arg2 + 8) <= 0x3ffffffe)
        {
            edi_1 = realloc(*arg3, ((arg2 + 8) << 2));
        }
        if (((arg2 + 8) > 0x3ffffffe || ((arg2 + 8) <= 0x3ffffffe && edi_1 == 0)))
        {
            sub_405b2c(data_424730, 0x41b);
        }
        *arg3 = edi_1;
    }
    int32_t eax_5 = sub_40ecdb(arg1);
    *(*arg3 + (arg2 << 2)) = eax_5;
    return eax_5;
}

int32_t __fastcall sub_405757(wchar16* arg1, int32_t* arg2, int32_t* arg3)
{
    wchar16* var_8 = arg1;
    wchar16* eax = wcschr(arg1, 0x5c);
    if (eax != 0)
    {
        uint32_t ecx_1 = eax[-1];
        if (((ecx_1 == 0x20 || ecx_1 == 9) && eax[1] == 0xa))
        {
            *eax = 0;
        }
    }
    var_8 = nullptr;
    int32_t* var_14 = &var_8;
    void* const var_18_1 = &data_401734;
    wchar16* var_1c = arg1;
    int32_t eax_2;
    while (true)
    {
        eax_2 = wcstok_s(var_1c, &data_401734, var_14);
        if (eax_2 == 0)
        {
            break;
        }
        if (*eax_2 == 0x40)
        {
            int32_t var_14_2 = (eax_2 + 2);
            eax_2 = sub_405b2c(0, 0xfa1);
            break;
        }
        sub_4056e9(eax_2, *arg2, arg3);
        *arg2 = (*arg2 + 1);
        var_14 = &var_8;
        void* const var_18_2 = &data_401734;
        var_1c = nullptr;
    }
    return eax_2;
}

int32_t __fastcall sub_4057e3(wchar16* arg1, int32_t* arg2, int32_t* arg3)
{
    char var_5 = 0;
    int32_t* esi = arg2;
    int32_t* var_c = esi;
    wchar16* eax = wcschr(arg1, 0x22);
    int32_t eax_1;
    if (eax == 0)
    {
        eax_1 = sub_405757(arg1, esi, arg3);
    }
    else
    {
        void* esi_1;
        if (eax != arg1)
        {
            esi_1 = &eax[-1];
            if (*esi_1 != 0x3d)
            {
                esi = var_c;
            }
            else
            {
                *eax = 0x20;
                bool cond:0_1 = esi_1 == arg1;
                if (esi_1 > arg1)
                {
                    do
                    {
                        eax = *esi_1;
                        if (eax == 0x20)
                        {
                            break;
                        }
                        if (eax == 9)
                        {
                            break;
                        }
                        if (eax == 0xa)
                        {
                            break;
                        }
                        esi_1 = (esi_1 - 2);
                    } while (esi_1 > arg1);
                    if (eax != 0x20)
                    {
                        cond:0_1 = esi_1 == arg1;
                    }
                }
                if (((((esi_1 > arg1 && eax != 0x20) || esi_1 <= arg1) && (!cond:0_1)) || (esi_1 > arg1 && eax == 0x20)))
                {
                    *esi_1 = 0;
                    esi_1 = (esi_1 + 2);
                    sub_405757(arg1, var_c, arg3);
                }
            }
        }
        if (((eax != arg1 && *esi_1 != 0x3d) || eax == arg1))
        {
            *eax = 0;
            sub_405757(arg1, esi, arg3);
            esi_1 = &eax[1];
        }
        void* ebx_1 = esi_1;
        void* var_10 = esi_1;
        void* ecx_4 = (ebx_1 + 2);
        do
        {
            eax = *ebx_1;
            ebx_1 = (ebx_1 + 2);
        } while (eax != 0);
        int16_t i_2 = *esi_1;
        int32_t ebx_3 = ((ebx_1 - ecx_4) >> 1);
        void* edi_1 = esi_1;
        if (i_2 != 0)
        {
            int16_t i_1 = i_2;
            int16_t i;
            do
            {
                if (i_1 == 0x22)
                {
                    if (*(edi_1 + 2) != 0x22)
                    {
                        *edi_1 = 0;
                        edi_1 = (edi_1 + 2);
                        sub_4056e9(esi_1, *var_c, arg3);
                        *var_c = (*var_c + 1);
                        sub_4057e3(arg3);
                        break;
                    }
                    void* ecx_5 = edi_1;
                    *edi_1 = 0x22;
                    int16_t j;
                    do
                    {
                        ecx_5 = (ecx_5 + 2);
                        j = *(ecx_5 + 2);
                        *ecx_5 = j;
                    } while (j != 0);
                }
                else if (i_1 == 0x5c)
                {
                    int16_t eax_2 = *(edi_1 - 2);
                    if (((eax_2 == 0x20 || eax_2 == 9) && *(edi_1 + 2) == 0xa))
                    {
                        *edi_1 = 0;
                        int32_t var_14 = (ebx_3 - 2);
                        if (var_5 == 0)
                        {
                            var_5 = 1;
                            var_10 = sub_40ecdb(esi_1);
                        }
                        sub_4055e1(&var_10, &var_14);
                        esi_1 = var_10;
                        edi_1 = (esi_1 + ((ebx_3 - 2) << 1));
                        ebx_3 = var_14;
                    }
                }
                edi_1 = (edi_1 + 2);
                i = *edi_1;
                i_1 = i;
            } while (i != 0);
        }
        eax_1 = (esi_1 + (ebx_3 << 1));
        if (edi_1 == eax_1)
        {
            eax_1 = sub_405b2c(0, 0x3ee);
        }
        if (var_5 != 0)
        {
            eax_1 = free(esi_1);
        }
    }
    return eax_1;
}

int32_t __fastcall sub_405994(int32_t arg1)
{
    int32_t edi = 0;
    int32_t i = 0;
    int32_t i_1 = 0;
    int32_t eax = _wfsopen(arg1, u"rt,ccs=unicode", 0x20);
    data_424f5c = eax;
    if (eax == 0)
    {
        int32_t var_28_1 = arg1;
        eax = sub_405b2c(0, 0x41c);
    }
    int32_t var_14 = 0;
    if (fgetws(0x424740, 0x400, eax) != 0)
    {
        int32_t esi = 0x424740;
        while (true)
        {
            int16_t* ecx = &data_424740;
            int32_t eax_1;
            do
            {
                eax_1 = *ecx;
                ecx = &ecx[1];
            } while (eax_1 != 0);
            int32_t ecx_2 = ((ecx - 0x424742) >> 1);
            int32_t var_8 = ecx_2;
            if ((ecx_2 != 0x3ff || (ecx_2 == 0x3ff && data_424f3c == 0xa)))
            {
                if (*((ecx_2 << 1) + &*(data_42473c + 2)) != 0xa)
                {
                    goto label_405aa1;
                }
                if (*((ecx_2 << 1) + &data_42473c) != 0x5c)
                {
                    goto label_405aa1;
                }
            }
            if (((ecx_2 == 0x3ff && data_424f3c != 0xa) || ((ecx_2 != 0x3ff || (ecx_2 == 0x3ff && data_424f3c == 0xa)) && *((ecx_2 << 1) + &*(data_42473c + 2)) == 0xa)))
            {
                if (*((ecx_2 << 1) + &*(data_42473c + 2)) == 0xa)
                {
                    if (*((ecx_2 << 1) + &data_42473c) == 0x5c)
                    {
                        int32_t edx_1 = ((ecx_2 - 1) * 2);
                        if (edx_1 >= 0x800)
                        {
                            ___report_rangecheckfailure();
                            breakpoint();
                        }
                        var_8 = (ecx_2 - 1);
                        *(edx_1 + 0x424740) = 0;
                        *((ecx_2 << 1) + &data_42473c) = 0x20;
                    }
                    goto label_405a8a;
                }
            label_405a8a:
                int32_t var_c = sub_40ecdb(&data_424740);
                sub_4055e1(&var_c, &var_8);
                esi = var_c;
            label_405aa1:
                sub_4057e3(esi, &i_1, &var_14);
                if (esi != 0x424740)
                {
                    free(esi);
                }
                esi = 0x424740;
                if (fgetws(0x424740, 0x400, data_424f5c) == 0)
                {
                    i = i_1;
                    edi = var_14;
                    break;
                }
            }
        }
    }
    if (fclose(data_424f5c) == 0xffffffff)
    {
        int32_t var_28_7 = arg1;
        sub_405b2c(0, 0x424);
    }
    int32_t eax_5 = sub_40c7a4(i, edi);
    while (i != 0)
    {
        i = (i - 1);
        if (*(edi + (i << 2)) != 0)
        {
            eax_5 = free(*(edi + (i << 2)));
        }
    }
    return eax_5;
}

int32_t sub_405b2c(int32_t arg1, int32_t arg2)
{
    int32_t status = 2;
    int32_t eax_2;
    if ((data_41450c & 0x20) != 0)
    {
        eax_2 = (arg2 - 0xfa0);
    }
    if (((data_41450c & 0x20) == 0 || ((data_41450c & 0x20) != 0 && eax_2 >= 0x3e8)))
    {
        sub_405ca2();
        if (arg1 == 0)
        {
            sub_40d0d1(u"NMAKE : ");
        }
        else
        {
            int32_t var_10_1 = arg1;
            int32_t var_14_1 = data_424f64;
            sub_40d0d1(u"%s(%u) : ");
        }
        uint32_t temp0_1 = (COMBINE(0, arg2) / 0x3e8);
        if (temp0_1 == 1)
        {
            sub_405c06(0x14);
            if (arg2 == 0x41b)
            {
                status = 4;
            }
        }
        else
        {
            int32_t var_10_2;
            if (temp0_1 == 2)
            {
                var_10_2 = 0x15;
            }
            if (temp0_1 == 4)
            {
                var_10_2 = 0x16;
            }
            if ((temp0_1 == 2 || temp0_1 == 4))
            {
                sub_405c06(var_10_2);
            }
        }
        int32_t var_10_3 = arg2;
        sub_40d0d1(u" U%04d: ");
        sub_40d14a(sub_40cef8(arg2), &arg_c);
        sub_40d0e0();
        eax_2 = sub_40d0b3();
        if (temp0_1 == 1)
        {
            sub_40d0d1(u"Stop.\n");
            sub_40ce64();
            exit(status);
            /* no return */
        }
    }
    return eax_2;
}

void sub_405c06(int32_t arg1)
{
    int32_t ecx;
    int32_t var_c = ecx;
    if ((arg1 == 0xd || (arg1 != 0xd && (data_41450c & 0x20) == 0)))
    {
        sub_405ca2();
        int32_t ecx_1 = arg1;
        int32_t esi_1 = (ecx_1 - 0x14);
        if ((ecx_1 == 0x18 && esi_1 <= 5))
        {
            sub_40d0e0();
            ecx_1 = arg1;
        }
        if (((ecx_1 == 0x18 && esi_1 <= 5) || (ecx_1 != 0x18 && esi_1 <= 5)))
        {
            sub_40d14a(sub_40cef8(ecx_1), &arg_8);
        }
        if ((ecx_1 == 0x18 && esi_1 > 5))
        {
            sub_40d1c1();
            ecx_1 = arg1;
        }
        if (((ecx_1 == 0x18 && esi_1 > 5) || (ecx_1 != 0x18 && esi_1 > 5)))
        {
            sub_40d1ed(sub_40cef8(ecx_1), &arg_8);
        }
        if (((arg1 >= 0xa && arg1 <= 0x17) || ((arg1 < 0xa || (arg1 >= 0xa && arg1 > 0x17)) && arg1 == 0x7c)))
        {
            if (esi_1 <= 5)
            {
                goto label_405c8c;
            }
            goto label_405c9b;
        }
        if (((arg1 < 0xa || (arg1 >= 0xa && arg1 > 0x17)) && arg1 != 0x7c))
        {
            if (esi_1 <= 5)
            {
                sub_40d0e0();
            label_405c8c:
                sub_40d0b3();
            }
            else
            {
                sub_40d1c1();
            label_405c9b:
                sub_40d194();
            }
        }
    }
}

void sub_405ca2()
{
    if (data_424f60 != 0)
    {
        return;
    }
    void* const var_4 = u"14.33.31629.0";
    data_424f60 = 1;
    sub_405c06(0x18);
    sub_405c06(0x19);
    /* tailcall */
    return sub_40d0b3();
}

int32_t sub_405cce()
{
    int32_t i = 0x64;
    int32_t i_1 = 0x67;
    do
    {
        sub_405c06(i);
        i = (i + 1);
    } while (i < 0x67);
    int32_t eax_2;
    do
    {
        int32_t i_2;
        if (i_1 != 0x71)
        {
            i_2 = i_1;
        }
        int32_t i_3;
        if (i_1 == 0x79)
        {
            i_3 = 0x7a;
        }
        if (i_1 == 0x71)
        {
            i_3 = 0x72;
        }
        if ((i_1 == 0x71 || i_1 == 0x79))
        {
            i_2 = i_3;
        }
        eax_2 = sub_405c06(i_2);
        i_1 = (i_2 + 1);
    } while (i_1 <= 0x7c);
    return eax_2;
}

int32_t* __fastcall sub_405d0d(int32_t* arg1, void** arg2, int16_t* arg3)
{
    int32_t* var_8 = arg1;
    int32_t* var_c = arg1;
    int16_t* esi = arg3;
    int32_t* eax = arg1;
    int32_t* var_c_1 = eax;
    void** ebx = arg2;
    *var_8[3] = 1;
    int16_t* edi = esi;
    if (*esi != 0)
    {
        do
        {
            edi = &edi[1];
        } while (*edi != 0);
    }
    *eax = 0;
    if (esi < edi)
    {
        while (true)
        {
            eax = wcsspn(esi, &data_40104c);
            void* esi_1 = &esi[eax];
            if (esi_1 >= edi)
            {
                break;
            }
            if (ebx != 0)
            {
                *ebx = esi_1;
                ebx = &ebx[1];
            }
            if (*esi_1 != 0x22)
            {
                esi = wcspbrk(esi_1, u" \t"/");
                if (esi != 0)
                {
                    while (true)
                    {
                        if (esi < edi)
                        {
                            if ((*esi == 0x2f && *var_8[3] == 0))
                            {
                                esi = wcspbrk(&esi[1], u" \t"/");
                                if (esi != 0)
                                {
                                    continue;
                                }
                            }
                            if (((*esi != 0x2f || (*esi == 0x2f && *var_8[3] == 0)) && esi == 0))
                            {
                                break;
                            }
                        }
                        if (*esi != 0x22)
                        {
                            break;
                        }
                        do
                        {
                            esi = &esi[1];
                            if (esi >= edi)
                            {
                                break;
                            }
                        } while (*esi != 0x22);
                        esi = wcspbrk(esi, &data_40104c);
                        break;
                    }
                }
                if (*var_8[3] != 0)
                {
                    *var_8[3] = 0;
                    if (esi == 0)
                    {
                    label_405e4a:
                        esi = edi;
                    }
                    if ((esi != 0 && *esi == 0x2f))
                    {
                        if (ebx == 0)
                        {
                            goto label_405e58;
                        }
                        *esi = 0;
                        ebx[-1] = sub_40ecdb(ebx[-1]);
                        *esi = 0x2f;
                        esi = (esi - 2);
                    }
                }
            }
            else
            {
                esi = (esi_1 + 2);
                if (esi >= edi)
                {
                    goto label_405e58;
                }
                do
                {
                    uint32_t eax_1 = *esi;
                    if (eax_1 == 0x5c)
                    {
                        esi = &esi[1];
                    }
                    if ((eax_1 != 0x5c && eax_1 == 0x22))
                    {
                        break;
                    }
                    esi = &esi[1];
                } while (esi < edi);
                if (esi >= edi)
                {
                    goto label_405e58;
                }
                esi = wcspbrk(&esi[1], &data_40104c);
            }
            if (((((*esi_1 != 0x22 && *var_8[3] != 0) && esi == 0) || ((((*esi_1 != 0x22 && *var_8[3] == 0) || (((*esi_1 != 0x22 && *var_8[3] != 0) && esi != 0) && *esi == 0x2f)) || *esi_1 == 0x22) && esi != 0)) || (((*esi_1 != 0x22 && *var_8[3] != 0) && esi != 0) && *esi != 0x2f)))
            {
                if (ebx == 0)
                {
                    goto label_405e58;
                }
                *esi = 0;
                esi = &esi[1];
            label_405e58:
                eax = var_c_1;
                *eax = (*eax + 1);
                if (esi >= edi)
                {
                    break;
                }
                continue;
            }
            if (((((*esi_1 != 0x22 && *var_8[3] == 0) || (((*esi_1 != 0x22 && *var_8[3] != 0) && esi != 0) && *esi == 0x2f)) || *esi_1 == 0x22) && esi == 0))
            {
                goto label_405e4a;
            }
        }
    }
    if (ebx != 0)
    {
        *ebx = nullptr;
    }
    return eax;
}

uint32_t __fastcall sub_405e74(uint8_t* arg1, void** arg2, char arg3, int32_t arg4, int32_t arg5)
{
    int32_t* eax = sub_40ec89();
    int32_t var_14 = arg5;
    eax[1] = sub_40ecdb(arg1);
    uint32_t eax_2 = sub_405eb6(eax, arg2, arg3, arg4);
    *eax = data_435698;
    data_435698 = eax;
    return eax_2;
}

uint32_t __fastcall sub_405eb6(void** arg1, void** arg2, char arg3, int32_t arg4)
{
    data_424f40 = (data_424f40 + 1);
    uint32_t esi = 0;
    int32_t var_1c = 0;
    int32_t eax;
    eax = data_41450c;
    void** i_1 = arg2;
    void** i_2 = i_1;
    uint32_t var_14 = 0;
    void** i = arg1;
    uint32_t eax_1;
    if ((eax & 8) != 0)
    {
    label_405f00:
        eax_1 = 0;
    }
    else
    {
        if ((eax & 0x10) != 0)
        {
            if (i != 0)
            {
                i_1 = arg3;
                i_1 = (i_1 >> 2);
                i_1 = (i_1 & 1);
                do
                {
                    arg2 = i_1;
                    sub_4081ae(i[1], arg2);
                    i = *i;
                } while (i != 0);
            }
            goto label_405f00;
        }
        if (i_1 != 0)
        {
            eax = arg3;
            eax = (eax >> 6);
            int32_t eax_2 = (eax & 0xffffff01);
            int16_t var_24_1 = 0x2d;
            int32_t var_4c_1 = eax_2;
            int16_t var_28_1 = 0x40;
            int16_t var_40_1 = 0x5e;
            int16_t var_2c_1 = 0x20;
            int16_t var_30_1 = 9;
            do
            {
                int16_t* str_8;
                i_1 = sub_409c81(i_1[1], &str_8, &arg_4, eax_2);
                *i_1[1] = 0;
                data_434f70 = 0;
                int16_t* str_5 = str_8;
                int16_t* str = str_5;
                char var_18_1 = 0;
                int16_t* str_4 = str;
                uint32_t eax_4 = *str_5;
                while (true)
                {
                    int16_t edx_1 = eax_4;
                    if (eax_4 == 0x21)
                    {
                        *i_1[1] = (*i_1[1] | 4);
                    label_406170:
                        var_18_1 = *i_1[1];
                    }
                    else if (eax_4 == var_24_1)
                    {
                    label_4060dc:
                        *i_1[1] = (*i_1[1] | 2);
                        str_4 = &str[1];
                        var_18_1 = *i_1[1];
                        if (iswdigit(str[1]) == 0)
                        {
                            data_434f70 = 0xffffffff;
                        }
                        else
                        {
                            int16_t* str_11 = str_4;
                            data_434f70 = wcstoul(str_11, &str_4, 0xa);
                            if (*_errno() == 0x22)
                            {
                                int16_t* str_12 = str_11;
                                int32_t var_74_4 = data_424724;
                                *str_4 = 0;
                                sub_405b2c(var_74_4, 0x436);
                            }
                            void* str_10;
                            for (int32_t j = iswspace(*str_4); j != 0; j = iswspace(*str_10))
                            {
                                str_10 = &str_4[1];
                                str_4 = str_10;
                            }
                        }
                        str = (str_4 - 2);
                    }
                    else
                    {
                        if (eax_4 != var_28_1)
                        {
                            if (eax_4 != var_40_1)
                            {
                                if (eax_4 != var_2c_1)
                                {
                                    if (eax_4 != var_30_1)
                                    {
                                        break;
                                    }
                                    if (((edx_1 != var_24_1 && edx_1 != var_28_1) && eax_4 == 0x5e))
                                    {
                                        goto label_405fcc;
                                    }
                                    if (edx_1 == var_24_1)
                                    {
                                        goto label_4060dc;
                                    }
                                }
                            }
                            else
                            {
                            label_405fcc:
                                str = &str[1];
                                str_4 = str;
                                int16_t eax_5 = *str;
                                int32_t eax_6;
                                if ((eax_5 == var_2c_1 || (eax_5 != var_2c_1 && eax_5 == var_30_1)))
                                {
                                    eax_6 = 1;
                                }
                                if ((eax_5 != var_2c_1 && eax_5 != var_30_1))
                                {
                                    eax_6 = 0;
                                }
                                int32_t eax_7 = (-eax_6);
                                if (((eax_7 - eax_7) & 0xffc2) == 0)
                                {
                                    break;
                                }
                            }
                        }
                        if (((eax_4 == var_28_1 || (((((eax_4 != var_28_1 && eax_4 != var_40_1) && eax_4 != var_2c_1) && eax_4 == var_30_1) && edx_1 != var_24_1) && edx_1 == var_28_1)) && (data_41450e & 4) == 0))
                        {
                            *i_1[1] = (*i_1[1] | 1);
                            goto label_406170;
                        }
                    }
                    str = &str[1];
                    str_4 = str;
                    eax_4 = *str;
                }
                int16_t* str_7;
                int16_t* str_3;
                bool cond:2_1;
                if ((*i_1[1] & 4) != 0)
                {
                    eax_4 = sub_407ea5(str, arg_4, arg3, var_18_1, arg4, &var_14);
                    if (eax_4 == 0)
                    {
                        str = str_4;
                    }
                    else
                    {
                        int16_t* str_1 = str_4;
                        bool cond:0_1 = wcschr(str_1, 0x24) == 0;
                        int16_t* str_9 = str_4;
                        if ((!cond:0_1))
                        {
                            str_7 = str_9;
                            str_3 = nullptr;
                            void var_54;
                            sub_40f9d0(&var_54, &str_7, 0xff, &arg_4, 0, &str_3);
                            str_9 = str_3;
                            str_4 = str_9;
                        }
                        if (str_1 != str_9)
                        {
                            free(str_9);
                        }
                        esi = var_14;
                        cond:2_1 = (arg3 & 2) != 0;
                    }
                }
                if ((((*i_1[1] & 4) != 0 && eax_4 == 0) || (*i_1[1] & 4) == 0))
                {
                    int16_t* str_2 = str;
                    if (i_1 == 0)
                    {
                        if (wcschr(str, 0x24) == 0)
                        {
                            str = str_4;
                        }
                        else
                        {
                            str_7 = str_4;
                            str_3 = nullptr;
                            void var_5c;
                            sub_40f9d0(&var_5c, &str_7, 0xff, &arg_4, 0, &str_3);
                            str = str_3;
                            str_4 = str;
                        }
                    }
                    do
                    {
                        eax_4 = *str;
                        str = &str[1];
                    } while (eax_4 != 0);
                    int32_t esi_1 = (((str - &str[1]) >> 1) + 1);
                    if (esi_1 <= 0x8000)
                    {
                        esi_1 = 0x8000;
                    }
                    int32_t eax_23;
                    int32_t edx_6;
                    edx_6 = HIGHD((esi_1 * 2));
                    eax_23 = LOWD((esi_1 * 2));
                    int32_t ecx_14;
                    ecx_14 = ((esi_1 * 2) >> 0x20) != 0;
                    int32_t eax_24 = sub_40b5d9(((-ecx_14) | eax_23));
                    wcscpy_s(eax_24, esi_1, str_4);
                    char eax_25;
                    int16_t* str_13;
                    eax_25 = sub_4116d6(eax_24, esi_1, str_4, arg4);
                    if (eax_25 != 0)
                    {
                        int32_t var_6c_11 = 0x4017dc;
                        int32_t var_70_8 = 0x4017dc;
                        int16_t* str_6 = str_4;
                        sub_405b2c(0, 0x447);
                    }
                    i_1 = arg3;
                    str_13 = *i_1[1];
                    i_1 = (i_1 & 4);
                    str_13 = (str_13 >> 1);
                    str_13 = (str_13 & 1);
                    str_7 = str_13;
                    char var_9_1 = (arg3 & 2);
                    while (true)
                    {
                        char edx_8;
                        if ((i_1 == 0 || (i_1 != 0 && (*i_1[1] & 8) != 0)))
                        {
                            eax_25 = 1;
                            if (i_1 != 0)
                            {
                                goto label_40625e;
                            }
                            if (((arg3 & 8) == 0 && (1 & *i_1[1]) == 0))
                            {
                                goto label_40625e;
                            }
                            edx_8 = 0;
                            eax_25 = 1;
                        }
                        if ((i_1 != 0 && (*i_1[1] & 8) == 0))
                        {
                            eax_25 = 0;
                        label_40625e:
                            edx_8 = 1;
                        }
                        int32_t var_20;
                        esi = sub_40756c(eax_24, edx_8, eax_25, str_13, &var_20);
                        var_14 = esi;
                        if (var_9_1 != 0)
                        {
                            break;
                        }
                        if (esi == 0x103)
                        {
                            if (data_435479 == 0)
                            {
                                int32_t var_6c_14 = var_20;
                                sub_405b2c(0, 0xfac);
                                esi = 0;
                                var_14 = 0;
                            }
                            else if (var_1c < 0xa)
                            {
                                int32_t var_6c_13 = var_20;
                                sub_405b2c(0, 0xfad);
                                str_13 = str_7;
                                var_1c = (var_1c + 1);
                                continue;
                            }
                        }
                        if ((((esi == 0x103 && data_435479 == 0) || esi != 0x103) && esi == 0))
                        {
                            break;
                        }
                        if (esi <= data_434f70)
                        {
                            break;
                        }
                        if (data_424737 == 0)
                        {
                            uint32_t var_6c_15 = esi;
                            int32_t var_70_10 = var_20;
                            sub_405b2c(0, 0x435);
                        }
                        break;
                    }
                    if (str_2 != str_4)
                    {
                        free(str_4);
                    }
                    free(str_8);
                    free(eax_24);
                    cond:2_1 = var_9_1 != 0;
                }
                if (((!cond:2_1) && (data_424737 != 0 && (esi != 0 && esi > data_434f70))))
                {
                    goto label_4060a5;
                }
                eax_2 = var_4c_1;
                i_1 = *i_2;
                i_2 = i_1;
            } while (i_1 != 0);
        }
        if ((arg3 & 2) != 0)
        {
            goto label_405f00;
        }
    label_4060a5:
        if (data_424737 == 0)
        {
            goto label_405f00;
        }
        if (esi <= data_434f70)
        {
            goto label_405f00;
        }
        eax_1 = esi;
    }
    return eax_1;
}

int32_t __fastcall sub_406334(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_8 = arg1;
    int32_t var_c = arg1;
    int32_t i_1 = 0;
    int32_t esi = arg2;
    int32_t* edi = arg3;
    int32_t i;
    int16_t* ecx;
    int16_t* edx;
    if (arg1 == 0)
    {
        edx = *edi;
        if (*edx == 0x22)
        {
            ecx = edx;
            arg3 = &ecx[1];
            int32_t eax_1;
            do
            {
                eax_1 = *ecx;
                ecx = &ecx[1];
            } while (eax_1 != 0);
            if (edx[(((ecx - arg3) >> 1) - 1)] == 0x22)
            {
                i = (esi - 1);
                int32_t i_2 = i;
                if (i >= 1)
                {
                    int32_t eax_2;
                    do
                    {
                        eax_2 = wcspbrk(edi[i], &data_401074);
                        if (eax_2 != 0)
                        {
                            break;
                        }
                        i = (i_2 - 1);
                        i_2 = i;
                    } while (i >= 1);
                    if (eax_2 == 0)
                    {
                        arg1 = 0;
                    label_4063d2:
                        int32_t temp1_1;
                        do
                        {
                            edi[(esi + 2)] = edi[esi];
                            temp1_1 = esi;
                            esi = (esi - 1);
                        } while ((temp1_1 - 1) >= 0);
                        goto label_4063d9;
                    }
                }
            }
        }
        if (((*edx != 0x22 || (*edx == 0x22 && *((edx + (((ecx - arg3) >> 1) << 1)) - 2) != 0x22)) || ((*edx == 0x22 && *((edx + (((ecx - arg3) >> 1) << 1)) - 2) == 0x22) && i < 1)))
        {
            arg1 = 0;
        }
    }
    else
    {
        edi[esi] = &data_4017e0;
        edi[(esi + 1)] = arg1;
        esi = (esi + 2);
        edi[esi] = 0;
    }
    if ((arg1 != 0 || (((arg1 == 0 && *edx == 0x22) && *((edx + (((ecx - arg3) >> 1) << 1)) - 2) == 0x22) && i >= 1)))
    {
        edi[esi] = &data_401074;
        arg1 = 1;
        esi = (esi + 1);
        edi[esi] = 0;
    }
    if (esi >= 0)
    {
        goto label_4063d2;
    }
label_4063d9:
    *edi = data_424f6c;
    void* const eax_6 = u"/c "";
    if (arg1 == 0)
    {
        eax_6 = &data_4017f0;
    }
    edi[1] = eax_6;
    *_errno() = 0;
    int32_t eax_8 = _wspawnvp(1, *edi, edi);
    int32_t eax_9;
    if (eax_8 == 0xffffffff)
    {
        eax_9 = eax_8;
    }
    else
    {
        WaitForSingleObject(eax_8, 0xffffffff);
        arg3 = 0;
        do
        {
            GetExitCodeProcess(eax_8, &arg3);
            if (arg3 != 0x103)
            {
                break;
            }
            Sleep(0x3e8);
            i_1 = (i_1 + 1);
        } while (i_1 < 0xa);
        CloseHandle(eax_8);
        eax_9 = arg3;
    }
    return eax_9;
}

uint32_t sub_40644f()
{
    int32_t ecx;
    int32_t edx;
    ecx = __chkstk(0x106bc);
    int32_t __saved_ebp;
    int32_t var_8 = (__security_cookie ^ &__saved_ebp);
    void* const var_8_1 = nullptr;
    void* const var_14 = u"set ";
    char ebx = 0;
    int32_t var_18 = 0x8000;
    void var_106ac;
    void* var_1c = &var_106ac;
    int32_t var_106b4 = 0;
    int16_t* var_106b0 = nullptr;
    wcscpy_s(var_1c, var_18, var_14);
    int16_t var_106a4;
    int16_t* edi = &var_106a4;
    int16_t* str = &data_414518;
    while (true)
    {
        int16_t eax_2 = *str;
        if ((eax_2 != 0x20 && eax_2 != 9))
        {
            if ((eax_2 == 0x2f && str[1] == 0x41))
            {
                int16_t eax_3 = str[2];
                if ((eax_3 == 0x20 || eax_3 == 9))
                {
                    ebx = 1;
                    str = &str[3];
                }
            }
            uint32_t eax_5;
            if (wcschr(str, 0x3d) == 0)
            {
                eax_5 = 0x4017dc;
            }
            else
            {
                int16_t i_4 = *str;
                int16_t* var_106bc_1 = &var_106a4;
                void lpTempFileName;
                if (i_4 != 0x3d)
                {
                    int16_t i_2 = i_4;
                    int16_t i;
                    do
                    {
                        *edi = i_2;
                        edi = &edi[1];
                        if (edi >= &lpTempFileName)
                        {
                            break;
                        }
                        str = &str[1];
                        i = *str;
                        i_2 = i;
                    } while (i != 0x3d);
                    if (edi >= &lpTempFileName)
                    {
                        goto label_406a5f;
                    }
                }
                if (ebx != 0)
                {
                    uint32_t eax_6 = edi[-1];
                    if (eax_6 == 0x2a)
                    {
                    label_406828:
                        edi = &edi[-1];
                    }
                    else
                    {
                        if (eax_6 == 0x2f)
                        {
                            goto label_406828;
                        }
                        if (eax_6 == 0x25)
                        {
                            goto label_406828;
                        }
                        if (eax_6 == 0x2b)
                        {
                            goto label_406828;
                        }
                        if (eax_6 == 0x2d)
                        {
                            goto label_406828;
                        }
                        if (eax_6 == 0x26)
                        {
                            goto label_406828;
                        }
                        if (eax_6 == 0x5e)
                        {
                            goto label_406828;
                        }
                        if (eax_6 == 0x7c)
                        {
                            goto label_406828;
                        }
                        int16_t edx_1 = 0x3e;
                        if (eax_6 != 0x3e)
                        {
                            edx_1 = 0x3c;
                        }
                        if (((eax_6 == 0x3e || eax_6 == 0x3c) && edi[-2] == edx_1))
                        {
                            edi = &edi[-2];
                        }
                    }
                    void var_106a2;
                    if (var_106a4 == 0x22)
                    {
                        var_106bc_1 = &var_106a2;
                    }
                    *edi = 0x3d;
                    if (&edi[1] >= &lpTempFileName)
                    {
                    label_406a5f:
                        eax_5 = 0;
                    }
                    else
                    {
                        void* const var_14_2 = &data_401804;
                        int32_t var_18_2 = 0x106;
                        int16_t var_21c;
                        int16_t* var_1c_1 = &var_21c;
                        int32_t* var_20_1 = &var_106b4;
                        var_106b4 = 0;
                        int32_t eax_7 = _wgetenv_s(var_20_1, var_1c_1, var_18_2, var_14_2);
                        if ((eax_7 != 0 || (eax_7 == 0 && var_106b4 == 0)))
                        {
                            wcscpy_s(&var_21c, 0x106, &data_40180c);
                        }
                        if (GetTempFileNameW(&var_21c, &data_401810, 0, &lpTempFileName) == 0)
                        {
                            int16_t* var_14_5 = &var_21c;
                            sub_405b2c(data_424724, 0x43c);
                        }
                        wcscpy_s(&var_21c, 0x106, &lpTempFileName);
                        if ((wcschr(&var_21c, 0x20) != 0 && wcschr(&var_21c, 0x22) == 0))
                        {
                            int16_t* ebx_1 = &var_21c;
                            wchar16* eax_10;
                            do
                            {
                                eax_10 = *ebx_1;
                                ebx_1 = &ebx_1[1];
                            } while (eax_10 != 0);
                            void var_21a;
                            int32_t ebx_3 = ((ebx_1 - &var_21a) >> 1);
                            int32_t esi = (ebx_3 * 2);
                            memmove(&var_21a, &var_21c, esi);
                            var_21c = 0x22;
                            *(&var_21a + esi) = 0x22;
                            if (((ebx_3 << 1) + 4) >= 0x20c)
                            {
                                ___report_rangecheckfailure();
                                breakpoint();
                            }
                            *(&var_21c + ((ebx_3 << 1) + 4)) = 0;
                        }
                        if (sub_406334(&var_21c, ecx, edx) != 0)
                        {
                            goto label_406a5f;
                        }
                        int32_t _Stream = _wfsopen(&var_21c, &data_401818, 0x20);
                        if (_Stream == 0)
                        {
                            int16_t* var_14_12 = &var_21c;
                            sub_405b2c(0, 0x41c);
                        }
                        void var_29c;
                        if (fgetws(&var_29c, 0x40, _Stream) == 0)
                        {
                            int16_t* var_14_14 = &var_21c;
                            sub_405b2c(0, 0x41d);
                        }
                        if (fclose(_Stream) == 0xffffffff)
                        {
                            int16_t* var_14_16 = &var_21c;
                            sub_405b2c(0, 0x424);
                        }
                        if (_wremove(&var_21c) == 0xffffffff)
                        {
                            int16_t* var_14_18 = &var_21c;
                            sub_405b2c(0, 0x421);
                        }
                        int16_t* ecx_8 = &var_29c;
                        int32_t eax_14;
                        do
                        {
                            eax_14 = *ecx_8;
                            ecx_8 = &ecx_8[1];
                        } while (eax_14 != 0);
                        void var_29a;
                        if (&edi[(((ecx_8 - &var_29a) >> 1) + 2)] > &lpTempFileName)
                        {
                            goto label_406a5f;
                        }
                        wcscpy_s(&edi[1], ((&lpTempFileName - &edi[1]) >> 1), &var_29c);
                    }
                }
                else
                {
                    int16_t i_5 = *str;
                    if (i_5 != 0)
                    {
                        int16_t edx_3 = 0x25;
                        int16_t i_3 = i_5;
                        int32_t var_106b8_1 = 0x25;
                        int16_t i_1;
                        do
                        {
                            str = &str[1];
                            int16_t i_6;
                            if (i_3 == 0x5e)
                            {
                                i_6 = *str;
                                i_3 = i_6;
                                if (i_6 != 0)
                                {
                                    str = &str[1];
                                }
                            }
                            if (((i_3 == 0x5e && i_6 != 0) || (i_3 != 0x5e && i_3 != edx_3)))
                            {
                                *edi = i_3;
                                edi = &edi[1];
                                if (edi >= &lpTempFileName)
                                {
                                    goto label_406a5f;
                                }
                            }
                            if ((i_3 != 0x5e && i_3 == edx_3))
                            {
                                int16_t j_5 = *str;
                                void var_4a4;
                                void* ecx_17 = &var_4a4;
                                int16_t j_4 = j_5;
                                if (j_5 != edx_3)
                                {
                                    int16_t j_3 = j_5;
                                    int16_t j;
                                    do
                                    {
                                        j_4 = j_3;
                                        if (j_3 == 0)
                                        {
                                            break;
                                        }
                                        *ecx_17 = j_3;
                                        ecx_17 = (ecx_17 + 2);
                                        void var_2a2;
                                        if (ecx_17 == &var_2a2)
                                        {
                                            break;
                                        }
                                        str = &str[1];
                                        j = *str;
                                        j_3 = j;
                                        j_4 = j;
                                    } while (j != 0x25);
                                    if (j_3 != 0)
                                    {
                                        goto label_406a5f;
                                    }
                                }
                                str = &str[1];
                                *ecx_17 = 0;
                                void var_4a2;
                                if (j_4 == 0)
                                {
                                    void* ecx_25 = &var_4a4;
                                    int16_t j_1;
                                    do
                                    {
                                        j_1 = *ecx_25;
                                        ecx_25 = (ecx_25 + 2);
                                    } while (j_1 != 0);
                                    void* esi_3 = &edi[(((ecx_25 - &var_4a2) >> 1) + 1)];
                                    if (esi_3 < &lpTempFileName)
                                    {
                                        *edi = 0x25;
                                        wcscpy_s(&edi[1], ((&lpTempFileName - &edi[1]) >> 1), &var_4a4);
                                        edi = esi_3;
                                        break;
                                    }
                                    goto label_406a5f;
                                }
                                _wdupenv_s(&var_106b0, 0, &var_4a4);
                                int16_t* edx_4 = var_106b0;
                                int16_t j_2;
                                if (edx_4 == 0)
                                {
                                    void* ecx_22 = &var_4a4;
                                    do
                                    {
                                        j_2 = *ecx_22;
                                        ecx_22 = (ecx_22 + 2);
                                    } while (j_2 != 0);
                                    void* ebx_9 = &edi[(((ecx_22 - &var_4a2) >> 1) + 2)];
                                    if (ebx_9 >= &lpTempFileName)
                                    {
                                        goto label_406a5f;
                                    }
                                    *edi = 0x25;
                                    wcscpy_s(&edi[1], ((&lpTempFileName - &edi[1]) >> 1), &var_4a4);
                                    edi = ebx_9;
                                    edx_3 = 0x25;
                                    *(ebx_9 - 2) = 0x25;
                                }
                                else
                                {
                                    int16_t* ecx_18 = edx_4;
                                    do
                                    {
                                        j_2 = *ecx_18;
                                        ecx_18 = &ecx_18[1];
                                    } while (j_2 != var_106b4);
                                    void* ebx_7 = &edi[((ecx_18 - &ecx_18[1]) >> 1)];
                                    if (ebx_7 >= &lpTempFileName)
                                    {
                                        goto label_406a5f;
                                    }
                                    wcscpy_s(edi, ((&lpTempFileName - edi) >> 1), edx_4);
                                    edi = ebx_7;
                                    free(var_106b0);
                                    int16_t var_14_24 = 0x25;
                                    var_106b0 = nullptr;
                                    edx_3 = var_14_24;
                                }
                            }
                            i_1 = *str;
                            i_3 = i_1;
                        } while (i_1 != 0);
                    }
                    *edi = 0;
                }
                if ((ebx == 0 || (ebx != 0 && &edi[1] < &lpTempFileName)))
                {
                    wcscpy_s(0x414510, 0x8000, &var_106ac);
                    *var_106bc_1 = 0;
                    int16_t* ecx_12 = &var_106ac;
                    int16_t* eax_18;
                    do
                    {
                        eax_18 = *ecx_12;
                        ecx_12 = &ecx_12[1];
                    } while (eax_18 != 0);
                    void var_106aa;
                    eax_5 = &&data_414510[((ecx_12 - &var_106aa) >> 1)];
                }
            }
            CookieCheckFunction(eax_5);
            return eax_5;
        }
        str = &str[1];
    }
}

int32_t __fastcall sub_406a6c(int16_t* arg1)
{
    int16_t* str = arg1;
    int32_t ebx = sub_40ecdb(&data_4017dc);
    if (*str != 0)
    {
        do
        {
            wchar16* eax_1 = wcschr(str, 0x25);
            wchar16* eax_3;
            if (eax_1 != 0)
            {
                eax_3 = wcschr(&eax_1[1], 0x25);
                if (eax_3 != 0)
                {
                    *eax_1 = 0;
                    int16_t* var_8 = nullptr;
                    *eax_3 = 0;
                    int32_t eax_4 = sub_40ed85(ebx, str);
                    _wdupenv_s(&var_8, 0, &eax_1[1]);
                    int16_t* edx_2 = var_8;
                    if (edx_2 == 0)
                    {
                        *eax_1 = 0x25;
                        ebx = sub_40ed85(sub_40ed85(eax_4, eax_1), &data_401820);
                    }
                    else
                    {
                        ebx = sub_40ed85(eax_4, edx_2);
                        free(var_8);
                        var_8 = nullptr;
                    }
                    *eax_1 = 0x25;
                    *eax_3 = 0x25;
                    str = &eax_3[1];
                }
            }
            if ((eax_1 == 0 || (eax_1 != 0 && eax_3 == 0)))
            {
                int16_t* str_1 = str;
                ebx = sub_40ed85(ebx, str);
                int32_t eax_8;
                do
                {
                    eax_8 = *str_1;
                    str_1 = &str_1[1];
                } while (eax_8 != 0);
                str = &str[((str_1 - &str_1[1]) >> 1)];
            }
        } while (*str != 0);
    }
    return ebx;
}

uint32_t __fastcall sub_406b6a(int32_t arg1, int32_t* arg2, uint32_t arg3)
{
    int32_t var_8 = arg1;
    int32_t var_c = arg1;
    void* const var_10 = nullptr;
    int32_t esi;
    int32_t var_14 = esi;
    int32_t edi;
    int32_t var_18 = edi;
    int16_t* esi_1 = *arg2;
    int16_t* edi_1 = arg2[1];
    uint32_t var_1c = *esi_1;
    int32_t eax_2 = iswalpha(var_1c);
    var_1c = 0x3a;
    uint16_t edx = var_1c;
    uint32_t eax_7;
    int32_t* esp;
    if (((eax_2 == 0 || (eax_2 != 0 && esi_1[1] != edx)) || ((eax_2 != 0 && esi_1[1] == edx) && esi_1[2] != 0)))
    {
        var_1c = &data_401824;
        eax_7 = _wcsicmp(esi_1, var_1c);
        esp = &var_18;
        int32_t* esp_1;
        uint32_t edi_2;
        if (eax_7 != 0)
        {
            var_1c = 2;
            if (_wcsnicmp(esi_1, &data_40182c, var_1c) == 0)
            {
                var_1c = 4;
            }
            else
            {
                var_1c = 5;
                esp = &var_18;
                if (_wcsnicmp(esi_1, u"chdir", var_1c) != 0)
                {
                    goto label_406d18;
                }
                var_1c = 0xa;
            }
            esp = &var_18;
            void* esi_2 = (esi_1 + var_1c);
            if (arg1 > 2)
            {
                goto label_406d18;
            }
            sub_408124(arg1, arg2);
            eax_7 = *esi_2;
            if (eax_7 != 0)
            {
                if ((eax_7 != 0x2e && (eax_7 != 0x5c && eax_7 != 0x2f)))
                {
                    goto label_406d18;
                }
                int32_t eax_14 = sub_406a6c(esi_2);
                var_1c = eax_14;
                int32_t eax_15 = _wchdir(var_1c);
                edi_2 = arg3;
                var_1c = eax_14;
                *edi_2 = eax_15;
                free(var_1c);
                esp_1 = &var_18;
                goto label_406d04;
            }
            if (edi_1 == 0)
            {
                goto label_406d18;
            }
            var_1c = *edi_1;
            if (iswalpha(var_1c) != 0)
            {
                var_1c = 0x3a;
                esp = &var_18;
                if ((edi_1[1] == var_1c && edi_1[2] == 0))
                {
                    goto label_406d18;
                }
            }
            int32_t eax_12 = sub_406a6c(edi_1);
            var_1c = eax_12;
            int32_t eax_13 = _wchdir(var_1c);
            edi_2 = arg3;
            var_1c = eax_12;
            *edi_2 = eax_13;
            free(var_1c);
            esp_1 = &var_18;
            goto label_406d04;
        }
        if (arg1 != 1)
        {
            if (data_414510 == eax_7)
            {
                goto label_406d18;
            }
            eax_7 = sub_40644f();
            if (eax_7 == 0)
            {
                goto label_406d18;
            }
            if (*eax_7 == 0)
            {
                goto label_406d18;
            }
            var_1c = sub_40ecdb(eax_7);
            eax_7 = _wputenv(var_1c);
            edi_2 = arg3;
            esp = &var_18;
            *edi_2 = eax_7;
            if (eax_7 == 0xffffffff)
            {
                var_1c = 0x41f;
                sub_405b2c(data_424730, var_1c);
                esp_1 = &var_1c;
            label_406d04:
                *esp_1;
                esp = &esp_1[1];
            }
            if (*edi_2 == 0)
            {
                goto label_406bbe;
            }
            *edi_2 = 1;
            goto label_406bbe;
        }
    label_406d18:
        eax_7 = 0;
    }
    if (((eax_2 != 0 && esi_1[1] == edx) && esi_1[2] == 0))
    {
        var_1c = *esi_1;
        var_1c = (towupper(var_1c) - 0x40);
        _chdrive(var_1c);
        esp = &var_18;
        *arg3 = 0;
    label_406bbe:
        eax_7 = 1;
    }
    *esp;
    esp[1];
    esp[2];
    return eax_7;
}

int32_t __fastcall sub_406d21(int16_t* arg1, int32_t arg2)
{
    int16_t* esi = arg1;
    while (true)
    {
        uint32_t eax_1 = *esi;
        if ((eax_1 != 0x20 && eax_1 != 9))
        {
            int16_t var_14 = 0;
            int32_t eax_2 = wcspbrk(esi, u" \t<>\r");
            if (eax_2 != 0)
            {
                var_14 = *eax_2;
                *eax_2 = 0;
            }
            int32_t _Stream;
            int32_t ecx_1;
            if (arg2 != 4)
            {
                _Stream = __acrt_iob_func(1);
                int32_t ecx_2;
                ecx_2 = arg2 != 2;
                ecx_1 = (((ecx_2 - 1) & 0x1f8) + 0x109);
            }
            else
            {
                _Stream = __acrt_iob_func(0);
                ecx_1 = 0;
            }
            int32_t _FileHandle = 0;
            int32_t eax_4 = _wsopen_s(&_FileHandle, esi, ecx_1, 0x40, 0x180);
            bool edx = eax_4 == 0;
            bool var_5 = edx;
            if (eax_4 == 0)
            {
                int32_t eax_5 = _fileno(_Stream);
                if (_dup2(_FileHandle, eax_5) == 0xffffffff)
                {
                    sub_405b2c(0, 0x411);
                }
                _close(_FileHandle);
                edx = var_5;
            }
            if ((edx != 0 && arg2 == 3))
            {
                _lseek(_fileno(_Stream), 0, 2);
                edx = var_5;
            }
            if (*esi != 0)
            {
                do
                {
                    *esi = 0x20;
                    esi = &esi[1];
                } while (*esi != 0);
            }
            if (eax_2 != 0)
            {
                *eax_2 = var_14;
            }
            int32_t eax_8;
            eax_8 = edx;
            return eax_8;
        }
        esi = &esi[1];
    }
}

int32_t __fastcall sub_406e40(int16_t* arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    int16_t ebx;
    *ebx[1] = 0;
    char var_5 = nullptr;
    ebx = 0;
    int16_t* var_c = arg1;
    int32_t edi = 0;
    int32_t esi = wcspbrk(arg1, &data_40184c);
    int32_t eax_1;
    if (esi != 0)
    {
        while (true)
        {
            uint32_t eax_2 = *esi;
            int32_t edx;
            int16_t* esi_1;
            if (eax_2 == 0x3c)
            {
                if (*ebx[1] != 0)
                {
                label_406f8c:
                    ebx = 1;
                    if (edi != 0)
                    {
                        wcscpy_s(arg1, arg2, edi);
                        free(edi);
                    }
                    if ((*ebx[1] != 0 && *arg3 != 0xffffffff))
                    {
                        int32_t eax_11 = _fileno(__acrt_iob_func(0));
                        if (_dup2(*arg3, eax_11) == 0xffffffff)
                        {
                            sub_405b2c(0, 0x411);
                        }
                        _close(*arg3);
                        *arg3 = 0xffffffff;
                    }
                    if ((var_5 != 0 && *arg4 != 0xffffffff))
                    {
                        int32_t eax_16 = _fileno(__acrt_iob_func(1));
                        if (_dup2(*arg4, eax_16) == 0xffffffff)
                        {
                            sub_405b2c(0, 0x411);
                        }
                        _close(*arg4);
                        *arg4 = 0xffffffff;
                    }
                    break;
                }
                if (edi == 0)
                {
                    edi = sub_40ecdb(var_c);
                }
                *esi = 0x20;
                *ebx[1] = 1;
                esi_1 = (esi + 2);
                var_c = esi_1;
                eax_1 = _dup(_fileno(__acrt_iob_func(0)));
                *arg3 = eax_1;
                if (eax_1 == 0xffffffff)
                {
                    goto label_406f8c;
                }
                edx = 4;
            }
            else if (eax_2 == 0x3e)
            {
                if (var_5 != 0)
                {
                    goto label_406f8c;
                }
                if (edi == 0)
                {
                    edi = sub_40ecdb(var_c);
                }
                *esi = 0x20;
                esi_1 = (esi + 2);
                var_c = esi_1;
                var_5 = 1;
                int32_t var_10_1;
                if (*esi_1 != 0x3e)
                {
                    var_10_1 = 2;
                }
                else
                {
                    *esi_1 = 0x20;
                    esi_1 = &esi_1[1];
                    var_10_1 = 3;
                }
                eax_1 = _dup(_fileno(__acrt_iob_func(1)));
                *arg4 = eax_1;
                if (eax_1 == 0xffffffff)
                {
                    goto label_406f8c;
                }
                edx = var_10_1;
            }
            else
            {
                if (eax_2 == 0x7c)
                {
                    goto label_406f8c;
                }
                sub_405b2c(0, 0x411);
            label_406f75:
                esi = wcspbrk(var_c, &data_40184c);
                if (esi == 0)
                {
                    break;
                }
                continue;
            }
            if (sub_406d21(esi_1, edx) == 0)
            {
                goto label_406f8c;
            }
            goto label_406f75;
        }
    }
    eax_1 = ebx;
    return eax_1;
}

int32_t __fastcall sub_40704e(int16_t* arg1, void** arg2)
{
    int16_t* var_8 = arg1;
    int16_t* var_c = arg1;
    int16_t* edi = arg1;
    int32_t eax;
    if (edi == 0)
    {
        eax = 0;
    }
    else
    {
        int16_t i_5 = *edi;
        int16_t* edx = edi;
        int16_t i_3 = i_5;
        if (i_5 == 0x3b)
        {
            int16_t i;
            do
            {
                arg1 = &arg1[1];
                i = *arg1;
            } while (i == 0x3b);
            i_3 = i;
        }
        int16_t i_2 = i_3;
        if (i_3 != 0)
        {
            int16_t i_4 = i_3;
            int16_t i_1;
            do
            {
                i_2 = i_4;
                if (i_4 == 0x3b)
                {
                    break;
                }
                arg1 = &arg1[1];
                if (i_4 != 0x22)
                {
                    *edx = i_4;
                    edx = &edx[1];
                }
                else
                {
                    int16_t j_2 = *arg1;
                    if (j_2 != 0)
                    {
                        int16_t j_1 = j_2;
                        int16_t j;
                        do
                        {
                            arg1 = &arg1[1];
                            if (j_1 == 0x22)
                            {
                                break;
                            }
                            *edx = j_1;
                            edx = &edx[1];
                            j = *arg1;
                            j_1 = j;
                        } while (j != 0);
                    }
                }
                i_1 = *arg1;
                i_4 = i_1;
                i_2 = i_1;
            } while (i_1 != 0);
        }
        uint32_t i_6 = i_2;
        int32_t ecx = (-i_6);
        *arg2 = ((ecx - ecx) & &arg1[1]);
        *edx = 0;
        eax = edx != edi;
    }
    return eax;
}

int32_t __fastcall sub_407105(int16_t* arg1, uint8_t* arg2)
{
    __security_cookie;
    void* var_630 = nullptr;
    char var_619 = 0;
    if (*arg1 == 0x22)
    {
        int16_t* edx = arg1;
        int16_t i;
        do
        {
            i = *edx;
            edx = &edx[1];
        } while (i != 0);
        void* ebx_1 = &arg1[(((edx - &edx[1]) >> 1) - 1)];
        var_630 = ebx_1;
        if (0x22 == *ebx_1)
        {
            var_619 = 1;
            do
            {
                arg1 = &arg1[1];
            } while (0x22 == *arg1);
            if (ebx_1 > arg1)
            {
                void* eax_2;
                do
                {
                    eax_2 = (ebx_1 - 2);
                    if (0x22 != *eax_2)
                    {
                        break;
                    }
                    ebx_1 = eax_2;
                } while (eax_2 > arg1);
                var_630 = ebx_1;
            }
            *ebx_1 = 0;
        }
    }
    void ExeName;
    int16_t var_418;
    int16_t var_218;
    int16_t var_14;
    _wsplitpath_s(arg1, &var_14, 3, &var_418, 0x100, &ExeName, 0x100, &var_218, 0x100);
    int32_t var_624;
    int16_t* ebx_2;
    if (var_218 == 0)
    {
        if (_wgetenv_s(&var_624, 0, 0, u"PATHEXT") != 0)
        {
            goto label_407254;
        }
        int32_t eax_5 = var_624;
        if (eax_5 == 0)
        {
            goto label_407254;
        }
        int32_t eax_6;
        int32_t edx_4;
        edx_4 = HIGHD((eax_5 * 2));
        eax_6 = LOWD((eax_5 * 2));
        int32_t ecx_3;
        ecx_3 = ((eax_5 * 2) >> 0x20) != 0;
        ebx_2 = sub_40b5d9(((-ecx_3) | eax_6));
        if (_wgetenv_s(&var_624, ebx_2, var_624, u"PATHEXT") != 0)
        {
            free(ebx_2);
        label_407254:
            var_624 = 0x21;
            ebx_2 = sub_40b5d9(0x42);
            wcscpy_s(ebx_2, var_624, u".COM;.EXE;.BAT;.CMD;.VBS;.JS;.WS");
        }
        else if (ebx_2 == 0)
        {
            goto label_407254;
        }
    }
    else
    {
        int16_t* ecx = &var_218;
        int16_t i_1;
        do
        {
            i_1 = *ecx;
            ecx = &ecx[1];
        } while (i_1 != 0);
        ebx_2 = &var_218;
        void var_216;
        var_624 = (((ecx - &var_216) >> 1) + 1);
    }
    int32_t var_634;
    int32_t eax_20;
    int32_t esi_3;
    int32_t edi;
    if ((var_14 != 0 || (var_14 == 0 && var_418 != 0)))
    {
        int16_t* ecx_11 = &var_14;
        int32_t eax_3;
        do
        {
            eax_3 = *ecx_11;
            ecx_11 = &ecx_11[1];
        } while (eax_3 != 0);
        int16_t* edx_6 = &var_418;
        do
        {
            eax_3 = *edx_6;
            edx_6 = &edx_6[1];
        } while (eax_3 != 0);
        void var_416;
        void var_12;
        int32_t esi_5 = ((((edx_6 - &var_416) >> 1) + 1) + ((ecx_11 - &var_12) >> 1));
        int32_t eax_18;
        int32_t edx_9;
        edx_9 = HIGHD((esi_5 * 2));
        eax_18 = LOWD((esi_5 * 2));
        int32_t ecx_14;
        ecx_14 = ((esi_5 * 2) >> 0x20) != 0;
        edi = sub_40b5d9(((-ecx_14) | eax_18));
        var_634 = edi;
        eax_20 = _wmakepath_s(edi, esi_5, &var_14, &var_418, 0, 0);
        if (eax_20 != 0)
        {
            free(edi);
            esi_3 = 0;
            edi = 0;
            var_634 = 0;
        }
    }
    BOOL var_62c;
    if ((var_14 == 0 && var_418 == 0))
    {
        int32_t var_620;
        int32_t eax_9 = _wgetenv_s(&var_620, 0, 0, u"PATH");
        if ((eax_9 != 0 || (eax_9 == 0 && var_620 == eax_9)))
        {
            var_620 = 1;
        }
        BOOL eax_10 = NeedCurrentDirectoryForExePathW(&ExeName);
        var_62c = eax_10;
        int32_t eax_11 = var_620;
        if (eax_10 != 0)
        {
            eax_11 = (eax_11 + 2);
            var_620 = eax_11;
        }
        int32_t eax_12;
        int32_t edx_5;
        edx_5 = HIGHD((eax_11 * 2));
        eax_12 = LOWD((eax_11 * 2));
        int32_t ecx_7;
        ecx_7 = ((eax_11 * 2) >> 0x20) != 0;
        edi = sub_40b5d9(((-ecx_7) | eax_12));
        var_634 = edi;
        int32_t esi_2 = edi;
        int32_t eax_15;
        if (var_62c == 0)
        {
            eax_15 = var_620;
        }
        else
        {
            wcscpy_s(edi, var_620, &data_401870);
            esi_2 = (edi + 4);
            eax_15 = (var_620 - 2);
            var_620 = eax_15;
        }
        int32_t eax_16 = _wgetenv_s(&var_620, esi_2, eax_15, u"PATH");
        if ((eax_16 != 0 || (eax_16 == 0 && var_620 == eax_16)))
        {
            *esi_2 = 0;
        }
    }
    if ((((var_14 != 0 || (var_14 == 0 && var_418 != 0)) && eax_20 == 0) || (var_14 == 0 && var_418 == 0)))
    {
        esi_3 = 0;
    }
    BOOL var_640 = edi;
    int32_t ecx_10 = edi;
    int32_t eax_30;
    while (true)
    {
        if (sub_40704e(ecx_10, &var_62c) == 0)
        {
            free(esi_3);
            free(edi);
            if (ebx_2 != &var_218)
            {
                free(ebx_2);
            }
            eax_30 = 0;
            break;
        }
        int32_t eax_21 = var_624;
        int32_t eax_22;
        int32_t edx_10;
        edx_10 = HIGHD((eax_21 * 2));
        eax_22 = LOWD((eax_21 * 2));
        int32_t ecx_18;
        ecx_18 = ((eax_21 * 2) >> 0x20) != 0;
        esi_3 = sub_40b5d9(((-ecx_18) | eax_22));
        wcscpy_s(esi_3, var_624, ebx_2);
        int32_t var_638_1 = esi_3;
        int32_t ecx_21 = esi_3;
        char eax_27;
        while (true)
        {
            void* var_63c;
            eax_27 = sub_40704e(ecx_21, &var_63c);
            if (eax_27 == 0)
            {
                break;
            }
            int32_t eax_24 = _wmakepath_s(arg2, 0x104, 0, var_640, &ExeName, var_638_1);
            if ((eax_24 == 0 && _waccess_s(arg2, eax_24) == 0))
            {
                break;
            }
            void* eax_26 = var_63c;
            ecx_21 = eax_26;
            var_638_1 = eax_26;
        }
        if (eax_27 != 0)
        {
            if (var_619 != 0)
            {
                int16_t* edi_1 = arg2;
                int32_t eax_25;
                do
                {
                    eax_25 = *edi_1;
                    edi_1 = &edi_1[1];
                } while (eax_25 != 0);
                int32_t edi_3 = ((edi_1 - &edi_1[1]) >> 1);
                int32_t esi_6 = (edi_3 * 2);
                memmove(&arg2[2], arg2, esi_6);
                *arg2 = 0x22;
                *((esi_6 + arg2) + 2) = 0x22;
                *((arg2 + (edi_3 << 1)) + 4) = 0;
                edi = var_634;
                *var_630 = 0x22;
            }
            free(esi_3);
            free(edi);
            if (ebx_2 != &var_218)
            {
                free(ebx_2);
            }
            eax_30 = 1;
            break;
        }
        BOOL eax_28 = var_62c;
        ecx_10 = eax_28;
        var_640 = eax_28;
    }
    CookieCheckFunction(eax_30);
    return eax_30;
}

uint32_t __fastcall sub_40756c(int16_t* arg1, char arg2, char arg3, char arg4, int32_t* arg5)
{
    __security_cookie;
    bool cond:0 = data_424f6c != 0;
    int16_t ebx;
    ebx = arg2;
    int16_t* var_428 = arg1;
    *ebx[1] = ebx;
    if ((!cond:0))
    {
        int32_t eax_3 = sub_407e09();
        arg1 = var_428;
        data_424f6c = eax_3;
    }
    uint32_t i = *arg1;
    char var_44c = 1;
    int32_t lpBuffer = 0;
    char var_429;
    if (i == 0x2d)
    {
        var_429 = 1;
        var_428 = &arg1[1];
        if (iswdigit(arg1[1]) == 0)
        {
            data_434f70 = 0xffffffff;
        }
        else
        {
            int16_t* esi_1 = var_428;
            data_434f70 = wcstoul(esi_1, &var_428, 0xa);
            if (*_errno() == 0x22)
            {
                int16_t* var_464_2 = esi_1;
                *var_428 = 0;
                sub_405b2c(0, 0x436);
            }
            if (iswspace(*var_428) != 0)
            {
                do
                {
                    void* eax_11 = &var_428[1];
                    var_428 = eax_11;
                    i = iswspace(*eax_11);
                } while (i != 0);
            }
        }
        arg1 = var_428;
    }
    else
    {
        if (i == 0x40)
        {
            arg1 = &arg1[1];
            var_428 = arg1;
            ebx = arg3 != 0;
            ebx = (ebx - 1);
            ebx = (ebx & *ebx[1]);
        }
        *ebx[1] = arg4;
        var_429 = *ebx[1];
    }
    uint32_t eax_13;
    if (*arg1 == 0)
    {
        eax_13 = 0;
    }
    else
    {
        int16_t* edx_1 = arg1;
        do
        {
            i = *edx_1;
            edx_1 = &edx_1[1];
        } while (i != 0);
        if (((edx_1 - &edx_1[1]) >> 1) >= 0x8000)
        {
            data_414510 = 0;
        }
        else
        {
            wcscpy_s(0x414510, 0x8000, arg1);
            arg1 = var_428;
        }
        int32_t edi_1 = sub_40ecdb(arg1);
        int32_t var_43c_1 = edi_1;
        if (ebx != 0)
        {
            int32_t var_464_6 = edi_1;
            sub_40d1b2(u"\t%s\n");
            sub_40d194();
        }
        void** ebx_1 = nullptr;
        int32_t var_438;
        sub_405d0d(&var_438, nullptr, edi_1);
        uint32_t edi_3;
        if (var_438 == 0)
        {
        label_407722:
            edi_3 = 0;
        }
        else
        {
            int32_t eax_17;
            int32_t edx_4;
            edx_4 = HIGHD(((var_438 + 8) * 4));
            eax_17 = LOWD(((var_438 + 8) * 4));
            int32_t ecx_6;
            ecx_6 = (((var_438 + 8) * 4) >> 0x20) != 0;
            uint32_t ecx_8 = ((-ecx_6) | eax_17);
            ebx_1 = sub_40b5d9(ecx_8);
            if (ebx_1 == 0)
            {
                ebx_1 = nullptr;
            }
            else
            {
                memset(ebx_1, 0, ecx_8);
            }
            int32_t esi_3 = var_438;
            sub_405d0d(&var_438, ebx_1, edi_1);
            if (*ebx_1 != 0)
            {
                int32_t eax_19 = data_424f68;
                if (eax_19 != 0)
                {
                    int32_t eax_20 = _wcsicmp(*ebx_1, eax_19);
                    if (eax_20 == 0)
                    {
                        if (data_414508 == eax_20)
                        {
                            int32_t edi_2 = *__p__wpgmptr();
                            data_414508 = edi_2;
                            if (wcspbrk(edi_2, &data_401080) != 0)
                            {
                                int16_t* esi_4 = data_414508;
                                void* ecx_12 = &esi_4[1];
                                int32_t eax_22;
                                do
                                {
                                    eax_22 = *esi_4;
                                    esi_4 = &esi_4[1];
                                } while (eax_22 != 0);
                                int32_t eax_24;
                                int32_t edx_6;
                                edx_6 = HIGHD(((((esi_4 - ecx_12) >> 1) + 3) * 2));
                                eax_24 = LOWD(((((esi_4 - ecx_12) >> 1) + 3) * 2));
                                int32_t ecx_13;
                                ecx_13 = (((((esi_4 - ecx_12) >> 1) + 3) * 2) >> 0x20) != 0;
                                int32_t eax_25 = sub_40b5d9(((-ecx_13) | eax_24));
                                data_414508 = eax_25;
                                wcscpy_s(eax_25, (((esi_4 - ecx_12) >> 1) + 3), &data_401074);
                                wcscat_s(data_414508, (((esi_4 - ecx_12) >> 1) + 3), edi_2);
                                wcscat_s(data_414508, (((esi_4 - ecx_12) >> 1) + 3), &data_401074);
                            }
                            edi_1 = var_43c_1;
                        }
                        *ebx_1 = data_414508;
                    }
                }
            }
            uint32_t var_444;
            void* ecx_17;
            int32_t* esi_8;
            if (arg3 != 0)
            {
                int32_t eax_28 = wcspbrk(var_428, u"<>|&%");
                void* _FileHandle_3 = (-eax_28);
                _FileHandle_3 = (_FileHandle_3 - _FileHandle_3);
                _FileHandle_3 = (_FileHandle_3 + 1);
                void* _FileHandle_1 = _FileHandle_3;
                int32_t var_434_3 = 0;
                char var_421_1;
                void* _FileHandle_4;
                if (sub_406b6a(esi_3, ebx_1, &var_444) != 0)
                {
                    _FileHandle_4 = *ebx_1;
                    edi_3 = var_444;
                    var_421_1 = 0;
                    _FileHandle_1 = _FileHandle_4;
                }
                else
                {
                    int16_t* esi_9 = var_428;
                    int16_t* ecx_19 = esi_9;
                    void* edx_9 = &ecx_19[1];
                    int16_t i_1;
                    do
                    {
                        i_1 = *ecx_19;
                        ecx_19 = &ecx_19[1];
                    } while (i_1 != lpBuffer);
                    int32_t eax_29;
                    int32_t edi_4;
                    if ((((ecx_19 - edx_9) >> 1) >= 0x1000 || (((ecx_19 - edx_9) >> 1) < 0x1000 && _FileHandle_1 != 0)))
                    {
                        int32_t _FileHandle = 0xffffffff;
                        int16_t* edx_10 = esi_9;
                        _FileHandle_1 = 0xffffffff;
                        do
                        {
                            i_1 = *edx_10;
                            edx_10 = &edx_10[1];
                        } while (i_1 != lpBuffer);
                        eax_29 = sub_406e40(esi_9, (((edx_10 - &edx_10[1]) >> 1) + 1), &_FileHandle, &_FileHandle_1);
                        var_421_1 = eax_29;
                        if (eax_29 != 0)
                        {
                            edi_3 = var_444;
                            var_434_3 = 0x11;
                        }
                        else
                        {
                            int16_t* ecx_24 = var_428;
                            do
                            {
                                eax_29 = *ecx_24;
                                ecx_24 = &ecx_24[1];
                            } while (eax_29 != 0);
                            int32_t ecx_26 = ((ecx_24 - &ecx_24[1]) >> 1);
                            if (ecx_26 >= 0x8000)
                            {
                                int32_t var_464_15 = 0x4017dc;
                                int32_t var_468_9 = 0x4017dc;
                                int16_t* var_46c_6 = var_428;
                                ecx_26 = sub_405b2c(0, 0x447);
                            }
                            if ((_FileHandle != 0xffffffff || (_FileHandle == 0xffffffff && _FileHandle_1 != 0xffffffff)))
                            {
                                free(edi_1);
                                int32_t eax_30 = sub_40ecdb(var_428);
                                var_43c_1 = eax_30;
                                ecx_26 = sub_405d0d(&var_438, ebx_1, eax_30);
                            }
                            int32_t var_464_18 = ecx_26;
                            int16_t str;
                            eax_29 = sub_407105(*ebx_1, &str);
                            if (eax_29 == 0)
                            {
                                edi_3 = var_444;
                                var_434_3 = 0x12;
                            }
                            else
                            {
                                if (str == 0x22)
                                {
                                    int16_t* esi_10 = &str;
                                    do
                                    {
                                        eax_29 = *esi_10;
                                        esi_10 = &esi_10[1];
                                    } while (eax_29 != 0);
                                    void var_216;
                                    int32_t esi_12 = ((esi_10 - &var_216) >> 1);
                                    int32_t eax_31 = (esi_12 * 2);
                                    void var_21a;
                                    if (*(&var_21a + eax_31) == 0x22)
                                    {
                                        memmove(&str, &var_216, eax_31);
                                        if (((esi_12 << 1) + 0xfffffffc) >= 0x208)
                                        {
                                            ___report_rangecheckfailure();
                                            breakpoint();
                                        }
                                        *(&str + ((esi_12 << 1) + 0xfffffffc)) = 0;
                                    }
                                }
                                *ebx_1 = &str;
                                if (wcschr(&str, 0x20) != 0)
                                {
                                    int16_t var_420 = 0x22;
                                    void var_41e;
                                    wcscpy_s(&var_41e, 0x103, &str);
                                    wcscat_s(&var_420, 0x104, &data_401074);
                                    *ebx_1 = &var_420;
                                }
                                *_errno() = 0;
                                *__doserrno() = 0;
                                edi_3 = _wspawnvp(0, &str, ebx_1);
                                if (edi_3 == 0xffffffff)
                                {
                                    eax_29 = _errno();
                                    if (*eax_29 != 0xc)
                                    {
                                        eax_29 = __doserrno();
                                    }
                                    if (*eax_29 == 0xc1)
                                    {
                                        var_434_3 = 0x13;
                                    }
                                }
                            }
                            if ((eax_29 == 0 || ((eax_29 != 0 && edi_3 == 0xffffffff) && *eax_29 == 0xc1)))
                            {
                                var_421_1 = 1;
                            }
                        }
                        if (_FileHandle != 0xffffffff)
                        {
                            int32_t eax_36 = _fileno(__acrt_iob_func(0));
                            if (_dup2(_FileHandle, eax_36) == 0xffffffff)
                            {
                                sub_405b2c(0, 0x411);
                            }
                            _close(_FileHandle);
                        }
                        if (_FileHandle_1 != 0xffffffff)
                        {
                            int32_t eax_39 = _fileno(__acrt_iob_func(1));
                            if (_dup2(_FileHandle_1, eax_39) == 0xffffffff)
                            {
                                sub_405b2c(0, 0x411);
                            }
                            _close(_FileHandle_1);
                        }
                        _FileHandle_4 = *ebx_1;
                        _FileHandle_1 = _FileHandle_4;
                        if (var_421_1 != 0)
                        {
                            esi_9 = var_428;
                            edi_4 = var_434_3;
                        }
                    }
                    if ((((ecx_19 - edx_9) >> 1) < 0x1000 && _FileHandle_1 == 0))
                    {
                        var_421_1 = 1;
                        edi_4 = 0x10;
                        _FileHandle_1 = *ebx_1;
                    }
                    if (((((ecx_19 - edx_9) >> 1) < 0x1000 && _FileHandle_1 == 0) || ((((ecx_19 - edx_9) >> 1) >= 0x1000 || (((ecx_19 - edx_9) >> 1) < 0x1000 && _FileHandle_1 != 0)) && var_421_1 != 0)))
                    {
                        int16_t* ecx_41 = esi_9;
                        do
                        {
                            eax_29 = *ecx_41;
                            ecx_41 = &ecx_41[1];
                        } while (eax_29 != lpBuffer);
                        if (((ecx_41 - &ecx_41[1]) >> 1) >= 0x1000)
                        {
                            void* var_464_29 = sub_40cef8(edi_4);
                            void* var_468_15 = sub_40cef8(0xf);
                            int16_t* var_46c_10 = var_428;
                            sub_405b2c(0, 0x447);
                        }
                        else
                        {
                            wcscpy_s(0x414510, 0x8000, esi_9);
                        }
                        int32_t eax_43 = sub_406334(0, var_438, ebx_1);
                        _FileHandle_4 = _FileHandle_1;
                        edi_3 = eax_43;
                    }
                }
                if (edi_3 == 0xffffffff)
                {
                    if (var_429 != 0)
                    {
                        goto label_407722;
                    }
                    int32_t eax_45 = *_errno();
                    if (eax_45 == 0)
                    {
                        goto label_407d5a;
                    }
                    if (eax_45 != 2)
                    {
                        if (eax_45 == 0xc)
                        {
                            void* _FileHandle_5 = _FileHandle_4;
                            sub_405b2c(0, 0x43a);
                        }
                        else
                        {
                            uint32_t dwMessageId;
                            if (*__doserrno() == 0)
                            {
                                dwMessageId = *_errno();
                                void var_3a8;
                                _wcserror_s(&var_3a8, 0xc8, dwMessageId);
                                void* var_464_32 = &var_3a8;
                            }
                            else
                            {
                                lpBuffer = 0;
                                dwMessageId = *__doserrno();
                                FormatMessageW(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS, nullptr, dwMessageId, 0x400, &lpBuffer, 0, nullptr);
                                if (dwMessageId > 0)
                                {
                                    dwMessageId = (dwMessageId | 0x80070000);
                                }
                                int32_t lpBuffer_1 = lpBuffer;
                            }
                            uint32_t dwMessageId_1 = dwMessageId;
                            void* _FileHandle_2 = _FileHandle_1;
                            sub_405b2c(0, 0x415);
                        }
                        goto label_407d5a;
                    }
                    void* _FileHandle_6 = _FileHandle_4;
                    sub_405b2c(0, 0x439);
                }
                if (edi_3 != 0)
                {
                label_407d5a:
                    esi_8 = arg5;
                    if (esi_8 != 0)
                    {
                        void** ecx_45 = &ebx_1[2];
                        if (var_421_1 == 0)
                        {
                            ecx_45 = ebx_1;
                        }
                        ecx_17 = *ecx_45;
                        goto label_407d79;
                    }
                }
            }
            else
            {
                if (sub_406b6a(esi_3, ebx_1, &var_444) == 0)
                {
                    goto label_407722;
                }
                edi_3 = var_444;
                if (edi_3 != 0)
                {
                    esi_8 = arg5;
                    if (esi_8 != 0)
                    {
                        ecx_17 = *ebx_1;
                    label_407d79:
                        *esi_8 = sub_40ecdb(ecx_17);
                    }
                }
            }
        }
        int32_t ecx_46 = var_438;
        char eax_55;
        if (ecx_46 == 0xfffffff8)
        {
            eax_55 = 1;
            var_44c = 1;
        }
        else
        {
            int32_t eax_54 = 0;
            if (ebx_1 == 0)
            {
                eax_55 = 1;
            }
            else
            {
                while (ebx_1[eax_54] != 0)
                {
                    if (ebx_1[eax_54] == var_43c_1)
                    {
                        var_44c = 0;
                        break;
                    }
                    eax_54 = (eax_54 + 1);
                    if (eax_54 >= (ecx_46 + 8))
                    {
                        break;
                    }
                }
            }
        }
        if (((ecx_46 == 0xfffffff8 && ebx_1 != 0) || (ecx_46 != 0xfffffff8 && ebx_1 != 0)))
        {
            free(ebx_1);
            eax_55 = var_44c;
        }
        if ((var_43c_1 != 0 && eax_55 != 0))
        {
            free(var_43c_1);
        }
        if ((edi_3 == 0 && arg5 != 0))
        {
            *arg5 = 0;
        }
        eax_13 = edi_3;
    }
    CookieCheckFunction(eax_13);
    return eax_13;
}

int32_t sub_407e09()
{
    __security_cookie;
    uint8_t* var_218 = nullptr;
    _wdupenv_s(&var_218, 0, u"COMSPEC");
    uint8_t* ecx = var_218;
    int32_t eax_3;
    if (ecx != 0)
    {
        int32_t eax_2 = sub_40ecdb(ecx);
        free(var_218);
        eax_3 = eax_2;
    }
    else
    {
        int16_t var_214;
        _wsearchenv(u"CMD.EXE", u"PATH", &var_214);
        if (var_214 == 0)
        {
            sub_405b2c(0, 0x420);
        }
        eax_3 = sub_40ecdb(&var_214);
    }
    CookieCheckFunction(eax_3);
    return eax_3;
}

uint32_t __fastcall sub_407ea5(int16_t* arg1, int32_t arg2, char arg3, char arg4, int32_t arg5, uint32_t* arg6)
{
    int32_t ebx = 0;
    int16_t* edx = arg1;
    int16_t* var_c = nullptr;
    int16_t* var_10 = edx;
    void* esi = edx;
    uint32_t edi = *edx;
    int32_t var_14 = 0;
    uint32_t eax = edi;
    if (edi == 0)
    {
        goto label_407f36;
    }
    int16_t ecx = edi;
    var_c = 0x3f;
    int16_t eax_1;
    int16_t eax_2;
    void* edi_1;
    do
    {
        if (ecx == 0x24)
        {
            eax_1 = *(esi + 2);
            if (eax_1 == 0x28)
            {
                esi = (esi + 2);
            }
            edi_1 = (esi + 2);
            eax_2 = *edi_1;
            if (eax_2 != 0x3f)
            {
                esi = edi_1;
                if ((eax_2 == 0x2a && *(esi + 2) == 0x2a))
                {
                    if (eax_1 != 0x28)
                    {
                        break;
                    }
                    if ((wcschr(u"DFBR", *(esi + 4)) != 0 && *(esi + 6) == 0x29))
                    {
                        break;
                    }
                    if (*(esi + 4) == 0x29)
                    {
                        break;
                    }
                    int32_t var_40_3 = 0x28;
                }
            }
            else
            {
                if (eax_1 != 0x28)
                {
                    break;
                }
                if ((wcschr(u"DFBR", *(esi + 4)) != 0 && *(esi + 6) == 0x29))
                {
                    break;
                }
                if (*(esi + 4) == 0x29)
                {
                    break;
                }
            }
        }
        esi = (esi + 2);
        eax = *esi;
        ecx = eax;
    } while (eax != 0);
    int16_t esi_1;
    if ((((ecx == 0x24 && eax_2 == 0x2a) && *(esi + 2) == 0x2a) && eax_1 != 0x28))
    {
        ebx = data_424f44;
        eax = *edi_1;
        edx = var_10;
        var_14 = ebx;
        esi_1 = 0x2a;
    }
    else
    {
        if ((!((ecx == 0x24 && eax_2 == 0x3f) && eax_1 != 0x28)))
        {
            goto label_407f3e;
        }
        ebx = data_424f50;
        eax = *esi;
        edx = var_10;
        var_14 = ebx;
    label_407f36:
        esi_1 = var_c;
    }
    if (eax == 0)
    {
    label_407f3e:
        eax = 0;
    }
    else
    {
        if (ebx != 0)
        {
            eax = arg4;
            *ebx[1] = arg3;
            eax = (eax >> 1);
            eax = (eax & 1);
            char var_24_1 = eax;
            eax = arg3;
            eax = (eax & 4);
            *ebx[1] = (*ebx[1] & 2);
            ebx = eax;
            int32_t i;
            do
            {
                data_42473c = arg2;
                int32_t* eax_8 = data_424f44;
                if (esi_1 != 0x2a)
                {
                    eax_8 = data_424f50;
                }
                i = *eax_8;
                *eax_8 = 0;
                var_c = nullptr;
                int16_t* var_20 = edx;
                void var_30;
                sub_40f9d0(&var_30, &var_20, 0xff, &data_42473c, 0, &var_c);
                int16_t* eax_9 = var_c;
                var_c = nullptr;
                char eax_10 = sub_4116d6(&data_424f70, 0x8000, eax_9, arg5);
                if (eax_10 != 0)
                {
                    int32_t var_40_6 = 0x4017dc;
                    int32_t var_44_2 = 0x4017dc;
                    int16_t* var_48_1 = eax_9;
                    sub_405b2c(0, 0x447);
                }
                char edx_3;
                if ((ebx == 0 || (ebx != 0 && (arg4 & 8) != 0)))
                {
                    eax_10 = 1;
                    if (ebx != 0)
                    {
                        goto label_408054;
                    }
                    if (((arg3 & 8) == 0 && (1 & arg4) == 0))
                    {
                        goto label_408054;
                    }
                    edx_3 = 0;
                    eax_10 = 1;
                }
                if ((ebx != 0 && (arg4 & 8) == 0))
                {
                    eax_10 = 0;
                label_408054:
                    edx_3 = 1;
                }
                int32_t var_28;
                uint32_t eax_11 = sub_40756c(&data_424f70, edx_3, eax_10, var_24_1, &var_28);
                *arg6 = eax_11;
                if ((*ebx[1] == 0 && (eax_11 != 0 && (eax_11 > data_434f70 && data_424737 == *ebx[1]))))
                {
                    uint32_t var_40_8 = eax_11;
                    int32_t var_44_4 = var_28;
                    sub_405b2c(0, 0x435);
                }
                int32_t* eax_12;
                if (esi_1 != 0x2a)
                {
                    eax_12 = data_424f50;
                    data_424f50 = i;
                }
                else
                {
                    eax_12 = data_424f44;
                    data_424f44 = i;
                }
                *eax_12 = i;
                free(eax_9);
                if ((*ebx[1] == 0 && data_424737 != *ebx[1]))
                {
                    uint32_t eax_14 = *arg6;
                    if ((eax_14 != 0 && eax_14 > data_434f70))
                    {
                        break;
                    }
                }
                edx = var_10;
            } while (i != 0);
            ebx = var_14;
        }
        if (esi_1 != 0x2a)
        {
            data_424f50 = ebx;
        }
        else
        {
            data_424f44 = ebx;
        }
        eax = 1;
    }
    return eax;
}

void __fastcall sub_408124(int32_t arg1, int32_t* arg2)
{
    int32_t i = arg1;
    int32_t* ebx = arg2;
    int32_t* var_8 = ebx;
    if (i != 0)
    {
        do
        {
            int16_t* ecx = *ebx;
            i = (i - 1);
            int16_t* edi_1 = ecx;
            uint32_t eax = *ecx;
            if (eax != 0)
            {
                int16_t edx = eax;
                do
                {
                    if ((edx == 0x5c || edx == 0x5e))
                    {
                        void* eax_1 = &edi_1[1];
                        int16_t eax_2;
                        if (*eax_1 != 0x22)
                        {
                            eax_2 = edx;
                        }
                        else
                        {
                            *ecx = edx;
                            edi_1 = eax_1;
                            eax_2 = *eax_1;
                            ecx = &ecx[1];
                        }
                        *ecx = eax_2;
                    }
                    if (((edx != 0x5c && edx != 0x5e) && edx != 0x22))
                    {
                        *ecx = edx;
                    }
                    if (((((edx != 0x5c && edx != 0x5e) && edx != 0x22) || edx == 0x5c) || edx == 0x5e))
                    {
                        ecx = &ecx[1];
                    }
                    edi_1 = &edi_1[1];
                    eax = *edi_1;
                    edx = eax;
                } while (eax != 0);
                ebx = var_8;
            }
            ebx = &ebx[1];
            *ecx = 0;
            var_8 = ebx;
        } while (i != 0);
    }
}

HANDLE __fastcall sub_4081ae(int16_t* arg1, char arg2)
{
    if (*arg1 == 0x22)
    {
        *wcsrchr(arg1, 0x22) = 0;
        int16_t* ecx = arg1;
        int16_t i = arg1[1];
        *arg1 = i;
        while (i != 0)
        {
            ecx = &ecx[1];
            i = ecx[1];
            *ecx = i;
        }
    }
    int16_t* var_20 = arg1;
    HANDLE eax_2 = sub_405c06(5);
    if (arg2 == 0)
    {
        void var_c;
        GetSystemTimeAsFileTime(&var_c);
        eax_2 = CreateFileW(arg1, FILE_WRITE_ATTRIBUTES, FILE_SHARE_NONE, nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
        if (eax_2 != 0xffffffff)
        {
            SetFileTime(eax_2, nullptr, nullptr, &var_c);
            eax_2 = CloseHandle(eax_2);
        }
    }
    return eax_2;
}

int32_t __fastcall sub_40823c(char* arg1)
{
    int32_t eax_1;
    if ((*arg1 & 0x10) != 0)
    {
        eax_1 = *(arg1 + 4);
    }
    if (((*arg1 & 0x10) == 0 || (((*arg1 & 0x10) != 0 && eax_1 == 0) && *(arg1 + 8) == 0)))
    {
        *(arg1 + 0x18);
        eax_1 = *(arg1 + 0x14);
    }
    return eax_1;
}

uint32_t __fastcall sub_408256(int16_t* arg1, int32_t* arg2, int32_t** arg3)
{
    __security_cookie;
    int16_t* ebx = arg1;
    void var_218;
    void* esi = &var_218;
    int32_t eax_3 = wcspbrk(ebx, u""^*?");
    bool cond:0 = eax_3 != 0;
    int32_t var_224 = 0;
    if (eax_3 != 0)
    {
        int16_t* ecx_1 = ebx;
        void* edx = &ecx_1[1];
        do
        {
            eax_3 = *ecx_1;
            ecx_1 = &ecx_1[1];
        } while (eax_3 != 0);
        if ((((ecx_1 - edx) >> 1) + 1) > 0x104)
        {
            int32_t eax_5;
            int32_t edx_1;
            edx_1 = HIGHD(((((ecx_1 - edx) >> 1) + 1) * 2));
            eax_5 = LOWD(((((ecx_1 - edx) >> 1) + 1) * 2));
            int32_t ecx_4;
            ecx_4 = (((((ecx_1 - edx) >> 1) + 1) * 2) >> 0x20) != 0;
            esi = sub_40b5d9(((-ecx_4) | eax_5));
            if (esi == 0)
            {
                sub_405b2c(data_424730, 0x41b);
            }
        }
        int16_t i_2 = *ebx;
        int16_t* edx_2 = esi;
        if (i_2 != 0)
        {
            int16_t i_1 = i_2;
            int16_t i;
            do
            {
                if ((i_1 != 0x5e && i_1 != 0x22))
                {
                    *edx_2 = i_1;
                    edx_2 = &edx_2[1];
                }
                ebx = &ebx[1];
                i = *ebx;
                i_1 = i;
            } while (i != 0);
        }
        ebx = esi;
        *edx_2 = 0;
    }
    FindFileHandle eax_7 = FindFirstFileW(ebx, arg2);
    *arg3 = eax_7;
    char eax_8;
    uint32_t eax_11;
    if (eax_7 != 0xffffffff)
    {
        eax_8 = sub_408582(ebx, arg2);
        if (eax_8 != 0)
        {
            wchar16* eax_9;
            wchar16* eax_10;
            if (cond:0 != 0)
            {
                eax_9 = wcschr(ebx, 0x2a);
                if (eax_9 == 0)
                {
                    eax_10 = wcschr(ebx, 0x3f);
                }
            }
            if ((cond:0 == 0 || ((cond:0 != 0 && eax_9 == 0) && eax_10 == 0)))
            {
                FindClose(*arg3);
                *arg3 = 0xffffffff;
            }
            if (esi != &var_218)
            {
                free(esi);
            }
            if (((*arg2 & 0x10) == 0 && (arg2[5] == 0 && arg2[6] == 0)))
            {
                arg2[5] = 0xffffffff;
                arg2[6] = 0xffffffff;
            }
            eax_11 = &arg2[0xb];
        }
    }
    if ((eax_7 == 0xffffffff || (eax_7 != 0xffffffff && eax_8 == 0)))
    {
        if (esi != &var_218)
        {
            free(esi);
        }
        eax_11 = 0;
    }
    CookieCheckFunction(eax_11);
    return eax_11;
}

char (*)[0x104] __fastcall sub_4083e1(struct WIN32_FIND_DATAW* arg1, FindFileHandle arg2)
{
    char (* eax_1)[0x104];
    if (FindNextFileW(arg2, arg1) != 0)
    {
        eax_1 = &arg1->cFileName;
    }
    else
    {
        FindClose(arg2);
        eax_1 = nullptr;
    }
    return eax_1;
}

int32_t __fastcall sub_408404(int16_t* arg1, uint8_t* arg2, int32_t* arg3, int32_t** arg4)
{
    int16_t* var_8 = arg1;
    int16_t* edi = arg1;
    int32_t eax_2;
    uint8_t* ecx_1;
    if (sub_408256(arg2, arg3, arg4) != 0)
    {
        ecx_1 = arg2;
    label_408422:
        eax_2 = sub_40ecdb(ecx_1);
    }
    else
    {
        if (edi != 0)
        {
        label_40842d:
            int16_t* esi_1 = &data_424740;
            int16_t i;
            uint32_t eax_1;
            int16_t ecx_2;
            do
            {
            label_408432:
                i = *edi;
                do
                {
                    if (i != 0)
                    {
                        ecx_2 = i;
                        int16_t j;
                        do
                        {
                            edi = &edi[1];
                            eax_1 = ecx_2;
                            if (0x22 != ecx_2)
                            {
                                break;
                            }
                            j = *edi;
                            ecx_2 = j;
                        } while (j != 0);
                        if (0x22 != ecx_2)
                        {
                            *esi_1 = eax_1;
                            if (eax_1 != 0x3b)
                            {
                                esi_1 = &esi_1[1];
                                break;
                            }
                        }
                    }
                    if (esi_1 != 0x424740)
                    {
                        uint32_t eax_3 = esi_1[-1];
                        if ((eax_3 != 0x5c && eax_3 != 0x2f))
                        {
                            *esi_1 = 0x5c;
                            esi_1 = &esi_1[1];
                        }
                        *esi_1 = 0;
                        if (wcspbrk(0x424740, &data_401044) != 0)
                        {
                            goto label_40842d;
                        }
                        wcscpy_s(esi_1, (0x400 - ((esi_1 - 0x424740) >> 1)), arg2);
                        esi_1 = &data_424740;
                        if (sub_408256(&data_424740, arg3, arg4) == 0)
                        {
                            goto label_408432;
                        }
                        ecx_1 = &data_424740;
                        goto label_408422;
                    }
                    i = *edi;
                } while (i != 0);
            } while (((i != 0 && 0x22 != ecx_2) && eax_1 != 0x3b));
        }
        eax_2 = 0;
    }
    return eax_2;
}

int32_t __fastcall sub_4084f3(int16_t* arg1, int32_t* arg2)
{
    int16_t* var_8 = arg1;
    int16_t* lpFileName = arg1;
    char ebx = 0;
    int16_t i;
    do
    {
        i = *arg1;
        arg1 = &arg1[1];
    } while (i != 0);
    if ((*lpFileName == 0x22 && lpFileName[(((arg1 - &arg1[1]) >> 1) - 1)] == 0x22))
    {
        lpFileName = sub_411c06(lpFileName);
        ebx = 1;
    }
    int32_t hFindFile_1 = FindFirstFileW(lpFileName, arg2);
    int32_t hFindFile = hFindFile_1;
    if (hFindFile_1 != 0xffffffff)
    {
        hFindFile_1 = sub_408582(lpFileName, arg2);
        if (hFindFile_1 != 0)
        {
            FindClose(hFindFile);
            if (((*arg2 & 0x10) == 0 && (arg2[5] == 0 && arg2[6] == 0)))
            {
                arg2[5] = 0xffffffff;
                arg2[6] = 0xffffffff;
            }
            hFindFile_1 = 1;
        }
    }
    if ((hFindFile_1 == 0xffffffff || (hFindFile_1 != 0xffffffff && hFindFile_1 == 0)))
    {
        if (ebx != 0)
        {
            free(lpFileName);
        }
        hFindFile_1 = 0;
    }
    return hFindFile_1;
}

HANDLE __fastcall sub_408582(int16_t* arg1, int32_t* arg2)
{
    int32_t* ebx = arg2;
    int32_t* var_c = ebx;
    int16_t* str = arg1;
    BOOL eax_14;
    HANDLE edi;
    if (((*ebx & 0x400) != 0 && ebx[9] == 0xa000000c))
    {
        void* lpFileName = &ebx[0xb];
        wchar16* edx = wcsrchr(str, 0x5c);
        wchar16* var_10_1 = edx;
        int32_t var_8_1 = 0;
        if (edx != 0)
        {
            int16_t* str_1 = str;
            void* eax_2;
            do
            {
                eax_2 = *str_1;
                str_1 = &str_1[1];
            } while (eax_2 != 0);
            void* eax_3;
            do
            {
                eax_3 = *edx;
                edx = &edx[1];
            } while (eax_3 != 0);
            void* lpFileName_2 = lpFileName;
            void* var_18_1 = (lpFileName_2 + 2);
            void* eax_4;
            do
            {
                eax_4 = *lpFileName_2;
                lpFileName_2 = (lpFileName_2 + 2);
            } while (eax_4 != 0);
            void* lpFileName_3 = lpFileName_2;
            int32_t eax_9 = ((((lpFileName_2 - var_18_1) >> 1) - ((edx - &edx[1]) >> 1)) + (((str_1 - &str_1[1]) >> 1) + 2));
            int32_t eax_10;
            int32_t edx_3;
            edx_3 = HIGHD((eax_9 * 2));
            eax_10 = LOWD((eax_9 * 2));
            int32_t ecx_4;
            ecx_4 = ((eax_9 * 2) >> 0x20) != 0;
            int32_t lpFileName_4 = sub_40b5d9(((-ecx_4) | eax_10));
            ebx = var_c;
            int32_t lpFileName_1 = lpFileName_4;
            if (lpFileName_4 == 0)
            {
                sub_405b2c(data_424730, 0x41b);
                lpFileName_4 = lpFileName_1;
            }
            int16_t* lpFileName_5 = lpFileName_4;
            if (str != var_10_1)
            {
                do
                {
                    lpFileName_4 = *str;
                    str = &str[1];
                    *lpFileName_5 = lpFileName_4;
                    lpFileName_5 = &lpFileName_5[1];
                } while (str != var_10_1);
                ebx = var_c;
            }
            *lpFileName_5 = 0x5c;
            int16_t i_2 = *lpFileName;
            void* ecx_8 = &lpFileName_5[1];
            if (i_2 != 0)
            {
                int16_t i_1 = i_2;
                int16_t i;
                do
                {
                    lpFileName = (lpFileName + 2);
                    *ecx_8 = i_1;
                    ecx_8 = (ecx_8 + 2);
                    i = *lpFileName;
                    i_1 = i;
                } while (i != 0);
            }
            lpFileName = lpFileName_1;
            *ecx_8 = 0;
        }
        edi = CreateFileW(lpFileName, 0x80000000, FILE_SHARE_READ, nullptr, OPEN_EXISTING, SECURITY_ANONYMOUS, nullptr);
        if (var_10_1 != 0)
        {
            free(lpFileName);
        }
        if (edi != 0xffffffff)
        {
            eax_14 = GetFileTime(edi, &ebx[1], &ebx[3], &ebx[5]);
            if (eax_14 != 0)
            {
                CloseHandle(edi);
            }
        }
    }
    HANDLE eax;
    if (((((((*ebx & 0x400) != 0 && ebx[9] == 0xa000000c) && edi != 0xffffffff) && eax_14 != 0) || (*ebx & 0x400) == 0) || ((*ebx & 0x400) != 0 && ebx[9] != 0xa000000c)))
    {
        eax = 1;
    }
    if (((*ebx & 0x400) != 0 && ebx[9] == 0xa000000c))
    {
        if ((edi != 0xffffffff && eax_14 == 0))
        {
            CloseHandle(edi);
        }
        if (((edi != 0xffffffff && eax_14 == 0) || edi == 0xffffffff))
        {
            eax = 0;
        }
    }
    return eax;
}

uint32_t __fastcall sub_4086f8(int32_t arg1)
{
    int32_t var_c = arg1;
    int32_t var_10 = arg1;
    uint32_t eax_2;
    while (true)
    {
        int16_t eax_1 = getwc(data_424f5c);
        int32_t ecx = data_434f78;
        eax_2 = eax_1;
        if (ecx == 0)
        {
            if (data_414021 == ecx)
            {
                break;
            }
            if ((data_414021 != ecx && eax_2 != 0x21))
            {
                break;
            }
        }
        data_414021 = 0;
        int16_t* edi_1;
        if (ecx != 0)
        {
            ungetwc(eax_2, data_424f5c);
            edi_1 = data_434f78;
            data_434f78 = 0;
        }
        else
        {
            edi_1 = sub_4088a1();
        }
        *var_10[3] = edi_1 != data_434f7c;
        void* eax_4 = sub_4089dd(edi_1, &*var_10[2]);
        char edx_2 = *var_10[2];
        void* esi_1 = eax_4;
        if (edx_2 == 9)
        {
            if (data_424f61 != 0)
            {
                int16_t* var_1c_3 = edi_1;
                sub_405b2c(data_424724, 0x409);
            }
            if (sub_40afb3(esi_1) == 0x12)
            {
                eax_2 = 0x20;
                break;
            }
        }
        else if (edx_2 == 0xa)
        {
            sub_408b74(esi_1);
        }
        else if (edx_2 == 0xb)
        {
            void* var_1c_4 = esi_1;
            sub_405b2c(data_424724, 0x41a);
        }
        else if (edx_2 == 0xc)
        {
            if (_wcsnicmp(esi_1, &data_4018c8, 2) == 0)
            {
                sub_40d1b2(&data_4018d0);
                esi_1 = (esi_1 + 4);
            }
            void* var_1c_5 = esi_1;
            sub_405c06(0xd);
        }
        else if (edx_2 != 0xd)
        {
            sub_408ecf(esi_1, edx_2);
        }
        else
        {
            var_c = 0;
            int32_t eax_7 = wcstok_s(esi_1, &data_40104c, &var_c);
            if (wcstok_s(0, &data_40104c, &var_c) != 0)
            {
                int32_t var_1c_8 = eax_7;
                sub_405b2c(data_424724, 0x409);
            }
            void* eax_9 = sub_40b534(eax_7);
            if (eax_9 != 0)
            {
                *(eax_9 + 0xc) = (*(eax_9 + 0xc) | 0x10);
            }
        }
        bool cond:1_1 = *var_10[3] == 0;
        data_414021 = 1;
        if ((!cond:1_1))
        {
            free(edi_1);
        }
        data_424724 = (data_424724 + 1);
    }
    return eax_2;
}

int32_t sub_4088a1()
{
    uint32_t ecx;
    ecx = 1;
    uint32_t esi = sub_40a552(ecx);
    if ((esi == 0xa || esi == 0xffff))
    {
        sub_405b2c(data_424724, 0x3fa);
    }
    int32_t edi = 0;
    int16_t eax_1 = sub_40a62b(esi, 1);
    uint32_t esi_1;
    while (true)
    {
        esi_1 = eax_1;
        if (esi_1 == 0x23)
        {
            break;
        }
        if (esi_1 == 0xa)
        {
            break;
        }
        if (esi_1 == 0xffff)
        {
            break;
        }
        int32_t ecx_3 = data_434f74;
        int32_t eax_3;
        if ((ecx_3 < 2 || (ecx_3 >= 2 && edi > (ecx_3 - 2))))
        {
            int32_t ecx_4 = data_434f7c;
            data_434f74 = (ecx_3 + 0x400);
            if (ecx_4 != 0)
            {
                eax_3 = sub_40b61c(ecx_4, (((ecx_3 + 0x400) << 1) + 2));
            }
            else
            {
                int32_t eax_5;
                int32_t edx_2;
                edx_2 = HIGHD(((ecx_3 + 0x401) * 2));
                eax_5 = LOWD(((ecx_3 + 0x401) * 2));
                ecx_4 = (((ecx_3 + 0x401) * 2) >> 0x20) != 0;
                eax_3 = sub_40b5d9(((-ecx_4) | eax_5));
            }
            data_434f7c = eax_3;
        }
        if ((ecx_3 >= 2 && edi <= (ecx_3 - 2)))
        {
            eax_3 = data_434f7c;
        }
        int32_t var_10_1 = data_424f5c;
        *(eax_3 + (edi << 1)) = esi_1;
        edi = (edi + 1);
        eax_1 = sub_40a62b(getwc(var_10_1), 1);
    }
    *(data_434f7c + (edi << 1)) = 0;
    if (esi_1 == 0x23)
    {
        int16_t eax_8 = getwc(data_424f5c);
        while (true)
        {
            esi_1 = eax_8;
            if (esi_1 == 0xa)
            {
                break;
            }
            if (esi_1 == 0xffff)
            {
                break;
            }
            eax_8 = getwc(data_424f5c);
        }
    }
    if ((esi_1 == 0xffff || (esi_1 == 0x23 && esi_1 == 0xffff)))
    {
        ungetwc(esi_1, data_424f5c);
    }
    /* tailcall */
    return sub_40f94d(data_434f7c);
}

void* __fastcall sub_4089dd(int16_t* arg1, char* arg2)
{
    int16_t* edi = arg1;
    void* ebx = edi;
    int16_t* var_18 = edi;
    *arg2 = 0;
    int16_t* esi = edi;
    void* var_c = ebx;
    uint32_t eax_1 = *edi;
    int16_t i_3 = eax_1;
    if (eax_1 != 0)
    {
        uint32_t var_1c_1 = eax_1;
        int16_t* ecx_1 = edi;
        int16_t* eax_2 = edi;
        int16_t i_4 = i_3;
        int16_t i;
        do
        {
            i_3 = i_4;
            if (i_4 == 0x20)
            {
                break;
            }
            esi = eax_2;
            i_3 = i_4;
            if (i_4 == 9)
            {
                break;
            }
            ebx = &ecx_1[1];
            i = *ebx;
            esi = ebx;
            var_c = ebx;
            i_4 = i;
            void* var_20_1 = ebx;
            i_3 = i;
            int16_t* var_1c_2 = esi;
            eax_2 = ebx;
            ecx_1 = ebx;
        } while (i != 0);
        edi = var_18;
    }
    int32_t esi_2 = ((esi - edi) >> 1);
    if (i_3 != 0)
    {
        int16_t i_1 = i_3;
        while ((!(i_1 != 0x20 && i_1 != 9)))
        {
            ebx = (ebx + 2);
            var_c = ebx;
            int16_t i_2 = *ebx;
            i_1 = i_2;
            if (i_2 == 0)
            {
                break;
            }
        }
        edi = var_18;
    }
    int32_t eax_3 = _wcsnicmp(edi, u"INCLUDE", 7);
    if ((eax_3 != 0 || (eax_3 == 0 && esi_2 != 7)))
    {
        int32_t eax_4 = _wcsnicmp(edi, u"CMDSWITCHES", 0xb);
        if ((eax_4 != 0 || (eax_4 == 0 && esi_2 != 0xb)))
        {
            int32_t eax_5 = _wcsnicmp(edi, u"ERROR", 5);
            if ((eax_5 != 0 || (eax_5 == 0 && esi_2 != 5)))
            {
                int32_t eax_6 = _wcsnicmp(edi, u"MESSAGE", 7);
                if ((eax_6 != 0 || (eax_6 == 0 && esi_2 != 7)))
                {
                    int32_t eax_7 = _wcsnicmp(edi, u"UNDEF", 5);
                    if ((eax_7 != 0 || (eax_7 == 0 && esi_2 != 5)))
                    {
                        char eax_8 = sub_408cf3(edi, esi_2, &var_c);
                        *arg2 = eax_8;
                        if (eax_8 == 0)
                        {
                            int32_t var_30_2 = data_434f7c;
                            sub_405b2c(data_424724, 0x3f9);
                        }
                        ebx = var_c;
                    }
                    if ((eax_7 == 0 && esi_2 == 5))
                    {
                        *arg2 = 0xd;
                    }
                }
                if ((eax_6 == 0 && esi_2 == 7))
                {
                    *arg2 = 0xc;
                }
            }
            if ((eax_5 == 0 && esi_2 == 5))
            {
                *arg2 = 0xb;
            }
        }
        if ((eax_4 == 0 && esi_2 == 0xb))
        {
            *arg2 = 0xa;
        }
    }
    if ((eax_3 == 0 && esi_2 == 7))
    {
        *arg2 = 9;
    }
    return ebx;
}

uint32_t __fastcall sub_408b74(int16_t* arg1)
{
    int16_t* esi = arg1;
    uint32_t eax = *esi;
    if (eax != 0)
    {
        int16_t edx_1 = eax;
        do
        {
            uint32_t eax_1 = edx_1;
            int16_t ecx;
            int16_t edx_2;
            if (eax_1 == 0x2b)
            {
                esi = &esi[1];
                eax = *esi;
                edx_2 = eax;
                if (eax != 0)
                {
                    uint32_t ecx_1 = eax;
                    do
                    {
                        edx_2 = ecx_1;
                        if (ecx_1 == 0x2d)
                        {
                            break;
                        }
                        wchar16* eax_6 = wcschr(u"DINSU", towupper(ecx_1));
                        wchar16* eax_10;
                        if ((eax_6 == 0 && data_424f61 != eax_6))
                        {
                            eax_10 = wcschr(u"ABCEKLPQRTY", towupper(*esi));
                        }
                        if ((eax_6 != 0 || ((eax_6 == 0 && data_424f61 != eax_6) && eax_10 != 0)))
                        {
                            uint32_t ecx_3;
                            ecx_3 = *esi;
                            sub_40cb79(ecx_3, 1);
                        }
                        if ((eax_6 == 0 && (data_424f61 == eax_6 || (data_424f61 != eax_6 && eax_10 == 0))))
                        {
                            sub_405b2c(data_424724, 0x400);
                        }
                        esi = &esi[1];
                        eax = *esi;
                        ecx_1 = eax;
                        edx_2 = eax;
                    } while (eax != 0);
                }
                ecx = edx_2;
            }
            else
            {
                eax = (eax_1 - 0x2d);
            }
            uint32_t edx_4;
            if ((eax_1 == 0x2d || (eax_1 == 0x2b && edx_2 != 0)))
            {
                esi = &esi[1];
                eax = *esi;
                ecx = eax;
                if (eax != 0)
                {
                    edx_4 = eax;
                    while (edx_4 != 0x2b)
                    {
                        wchar16* eax_13 = wcschr(u"DINSU", towupper(edx_4));
                        wchar16* eax_17;
                        if ((eax_13 == 0 && data_424f61 != eax_13))
                        {
                            eax_17 = wcschr(u"ABCEKLMPQRTV", towupper(*esi));
                        }
                        if ((eax_13 != 0 || ((eax_13 == 0 && data_424f61 != eax_13) && eax_17 != 0)))
                        {
                            uint32_t ecx_7;
                            ecx_7 = *esi;
                            sub_40cb79(ecx_7, 0);
                        }
                        if ((eax_13 == 0 && (data_424f61 == eax_13 || (data_424f61 != eax_13 && eax_17 == 0))))
                        {
                            sub_405b2c(data_424724, 0x400);
                        }
                        esi = &esi[1];
                        eax = *esi;
                        edx_4 = eax;
                        ecx = eax;
                        if (eax == 0)
                        {
                            break;
                        }
                    }
                }
            }
            if ((eax_1 != 0x2b && eax_1 != 0x2d))
            {
                ecx = edx_1;
                if (edx_1 != 0x20)
                {
                    ecx = edx_1;
                    if (edx_1 != 9)
                    {
                        eax = sub_405b2c(data_424724, 0x400);
                        ecx = *esi;
                    }
                }
            }
            if ((((((eax_1 == 0x2b && edx_2 == 0) || ((eax_1 == 0x2d || (eax_1 == 0x2b && edx_2 != 0)) && eax == 0)) || (((eax_1 == 0x2d || (eax_1 == 0x2b && edx_2 != 0)) && eax != 0) && edx_4 != 0x2b)) || (eax_1 != 0x2b && eax_1 != 0x2d)) && ecx == 0))
            {
                break;
            }
            esi = &esi[1];
            eax = *esi;
            edx_1 = eax;
        } while (eax != 0);
    }
    return eax;
}

int32_t __fastcall sub_408cf3(int32_t arg1, int32_t arg2, int16_t** arg3)
{
    int32_t var_8 = arg1;
    int32_t var_c = arg1;
    char ebx = 0;
    int32_t eax_1 = _wcsnicmp(arg1, &data_401964, 2);
    if ((eax_1 != 0 || (eax_1 == 0 && arg2 != 2)))
    {
        eax_1 = _wcsnicmp(arg1, u"IFDEF", 5);
        if ((eax_1 != 0 || (eax_1 == 0 && arg2 != 5)))
        {
            eax_1 = _wcsnicmp(arg1, u"IFNDEF", 6);
            if ((eax_1 != 0 || (eax_1 == 0 && arg2 != 6)))
            {
                int32_t eax_2 = _wcsnicmp(arg1, u"ELSE", 4);
                if ((eax_2 != 0 || (eax_2 == 0 && arg2 != 4)))
                {
                    eax_1 = _wcsnicmp(arg1, u"ELSEIF", 6);
                    if ((eax_1 != 0 || (eax_1 == 0 && arg2 != 6)))
                    {
                        eax_1 = _wcsnicmp(arg1, u"ELSEIFDEF", 9);
                        if ((eax_1 != 0 || (eax_1 == 0 && arg2 != 9)))
                        {
                            eax_1 = _wcsnicmp(arg1, u"ELSEIFNDEF", 0xa);
                            if ((eax_1 != 0 || (eax_1 == 0 && arg2 != 0xa)))
                            {
                                eax_1 = _wcsnicmp(arg1, u"ENDIF", 5);
                                if ((eax_1 == 0 && arg2 == 5))
                                {
                                    ebx = 8;
                                }
                            }
                            if ((eax_1 == 0 && arg2 == 0xa))
                            {
                            label_408ea8:
                                ebx = 5;
                            }
                        }
                        if ((eax_1 == 0 && arg2 == 9))
                        {
                        label_408e8c:
                            ebx = 4;
                        }
                    }
                    if ((eax_1 == 0 && arg2 == 6))
                    {
                    label_408e6e:
                        ebx = 3;
                    }
                }
                if ((eax_2 == 0 && arg2 == 4))
                {
                    int16_t* ecx_1 = *arg3;
                    eax_1 = *ecx_1;
                    if (eax_1 == 0)
                    {
                        ebx = 2;
                    }
                    else
                    {
                        int16_t* var_8_2 = ecx_1;
                        int16_t edx = eax_1;
                        uint32_t eax_3;
                        do
                        {
                            eax_3 = edx;
                            if (edx == 0x20)
                            {
                                break;
                            }
                            eax_3 = edx;
                            if (edx == 9)
                            {
                                break;
                            }
                            ecx_1 = &ecx_1[1];
                            eax_3 = *ecx_1;
                            edx = eax_3;
                            uint32_t var_c_1 = eax_3;
                        } while (eax_3 != 0);
                        int32_t esi_4 = ((ecx_1 - var_8_2) >> 1);
                        if (eax_3 != 0)
                        {
                            int16_t i = eax_3;
                            while ((!(i != 0x20 && i != 9)))
                            {
                                ecx_1 = &ecx_1[1];
                                int16_t i_1 = *ecx_1;
                                i = i_1;
                                if (i_1 == 0)
                                {
                                    break;
                                }
                            }
                        }
                        *arg3 = ecx_1;
                        eax_1 = _wcsnicmp(var_8_2, &data_401964, 2);
                        if ((eax_1 == 0 && esi_4 == 2))
                        {
                            goto label_408e6e;
                        }
                        eax_1 = _wcsnicmp(var_8_2, u"IFDEF", 5);
                        if (eax_1 == 0)
                        {
                            if (esi_4 == 5)
                            {
                                goto label_408e8c;
                            }
                            goto label_408e46;
                        }
                    label_408e46:
                        eax_1 = _wcsnicmp(var_8_2, u"IFNDEF", 6);
                        if ((eax_1 == 0 && esi_4 == 6))
                        {
                            goto label_408ea8;
                        }
                    }
                }
            }
            if ((eax_1 == 0 && arg2 == 6))
            {
                ebx = 7;
            }
        }
        if ((eax_1 == 0 && arg2 == 5))
        {
            ebx = 6;
        }
    }
    if ((eax_1 == 0 && arg2 == 2))
    {
        ebx = 1;
    }
    eax_1 = ebx;
    return eax_1;
}

void* __fastcall sub_408ecf(int16_t* arg1, char arg2)
{
    void* eax = (arg2 - 1);
    int16_t* esi = arg1;
    if (eax <= 7)
    {
        int16_t* var_8_1;
        int32_t eax_5;
        bool cond:2_1;
        switch (eax)
        {
            case nullptr:
            case 5:
            case 6:
            {
                int32_t eax_1 = data_414024;
                if (eax_1 != 0xf)
                {
                    goto label_408f01;
                }
                var_8_1 = 0x3fb;
            label_408ef7:
                eax_1 = sub_405b2c(data_424724, var_8_1);
                arg1 = var_8_1;
            label_408f01:
                data_414024 = (eax_1 + 1);
                *(eax_1 + 0x434f81) = 1;
                if (eax_1 == 0xffffffff)
                {
                    goto label_408f25;
                }
                if ((*(eax_1 + 0x434f80) & 2) != 0)
                {
                    goto label_408f25;
                }
                *(eax_1 + 0x434f81) = 5;
            label_408f20:
                /* tailcall */
                return sub_408fff(arg1);
            }
            case 1:
            {
                eax = data_414024;
                if (eax < 0)
                {
                label_408f6d:
                    var_8_1 = 0x3fd;
                    goto label_408ef7;
                }
                arg1 = (eax + 0x434f80);
                eax = *arg1;
                if ((eax & 9) == 0)
                {
                    goto label_408f6d;
                }
                eax = (eax & 0xf6);
                *arg1 = eax;
                if ((eax & 4) != 0)
                {
                    goto label_408f20;
                }
                if ((eax & 2) == 0)
                {
                    eax = (eax | 2);
                }
                else
                {
                    eax = (eax & 0xfd);
                }
                cond:2_1 = (eax & 2) != 0;
                *arg1 = eax;
                break;
            }
            case 2:
            case 3:
            case 4:
            {
                arg1 = data_414024;
                if (arg1 < 0)
                {
                    goto label_408f6d;
                }
                eax = arg1[0x21a7c0];
                if ((eax & 9) == 0)
                {
                    goto label_408f6d;
                }
                eax = (eax & 0xfe);
                eax = (eax | 8);
                arg1[0x21a7c0] = eax;
                if ((eax & 4) != 0)
                {
                    goto label_408f20;
                }
                if ((eax & 2) != 0)
                {
                    eax = (eax & 0xfd);
                    eax = (eax | 4);
                    arg1[0x21a7c0] = eax;
                    goto label_408f20;
                }
                arg1 = esi;
            label_408f25:
                if (sub_40e3f9(arg1, arg2) == 0)
                {
                    goto label_408f20;
                }
                eax = data_414024;
                *(eax + 0x434f80) = (*(eax + 0x434f80) | 2);
                break;
            }
            case 7:
            {
                eax_5 = data_414024;
                break;
            }
        }
        if (eax == 7)
        {
            if (eax_5 < 0)
            {
                var_8_1 = 0x401;
                goto label_408ef7;
            }
            eax = (eax_5 - 1);
            data_414024 = eax;
            if ((eax_5 - 1) >= 0)
            {
                cond:2_1 = (*(eax + 0x434f80) & 2) != 0;
            }
        }
        if (((((eax == 7 && eax_5 >= 0) && (eax_5 - 1) >= 0) || eax == 1) && (!cond:2_1)))
        {
            goto label_408f20;
        }
    }
    return eax;
}

uint32_t __fastcall sub_408fff(int32_t arg1)
{
    int32_t var_8 = arg1;
    uint32_t eax_2;
    while (true)
    {
        eax_2 = getwc(data_424f5c);
        if (eax_2 != 0x21)
        {
            while (true)
            {
                if (eax_2 != 0xffff)
                {
                    data_424724 = (data_424724 + 1);
                    while (true)
                    {
                        if (eax_2 == 0x5c)
                        {
                            eax_2 = sub_40a62b(0x5c, 1);
                            if ((eax_2 == 0x21 && data_414021 != 0))
                            {
                                break;
                            }
                            data_414021 = 0;
                        }
                        if (eax_2 != 0x23)
                        {
                            if (eax_2 == 0xa)
                            {
                                break;
                            }
                            if (eax_2 == 0xffff)
                            {
                                break;
                            }
                            eax_2 = getwc(data_424f5c);
                        }
                        else
                        {
                            while (true)
                            {
                                eax_2 = getwc(data_424f5c);
                                if (eax_2 == 0xa)
                                {
                                    break;
                                }
                                if (eax_2 == 0xffff)
                                {
                                    break;
                                }
                                if ((!(eax_2 != 0xa && eax_2 != 0xffff)))
                                {
                                    /* nop */
                                }
                            }
                            if (eax_2 != 0xffff)
                            {
                                break;
                            }
                        }
                    }
                    if (eax_2 != 0xffff)
                    {
                        if (eax_2 != 0xa)
                        {
                            break;
                        }
                        if (eax_2 != 0xffff)
                        {
                            if (eax_2 == 0x21)
                            {
                                break;
                            }
                            eax_2 = getwc(data_424f5c);
                            if (eax_2 != 0x21)
                            {
                                continue;
                            }
                        }
                    }
                    if (eax_2 == 0x21)
                    {
                        break;
                    }
                    if (eax_2 != 0xffff)
                    {
                        return eax_2;
                    }
                }
                return sub_405b2c(data_424724, 0x3fc);
            }
        }
        int32_t eax_7 = data_434f78;
        if ((eax_7 != 0 && eax_7 != data_434f7c))
        {
            free(eax_7);
        }
        int16_t* eax_8 = sub_4088a1();
        data_434f78 = eax_8;
        eax_2 = sub_4089dd(eax_8, &*var_8[3]);
        if (*var_8[3] <= 8)
        {
            break;
        }
        data_424724 = (data_424724 + 1);
    }
    return eax_2;
}

int32_t sub_409117()
{
    char ebx = 0;
    data_424724 = 0;
    int32_t eax_3;
    while (true)
    {
        int32_t var_10;
        if (fgetws(0x424740, 0x400, data_424f5c, nullptr, var_10, 0) == 0)
        {
            if (feof(data_424f5c) == 0)
            {
                data_424730 = data_424724;
                sub_405b2c(0, 0x41d);
            }
            eax_3 = 0;
            break;
        }
        if (data_424740 == 0x5b)
        {
            int32_t var_8 = 0;
            int32_t* var_18_1 = &var_8;
            void* const var_1c_1 = &data_401734;
            int32_t var_20_1 = 0x424742;
            int32_t eax_1;
            while (true)
            {
                eax_1 = wcstok_s(var_20_1, &data_401734, var_18_1);
                if (eax_1 == 0)
                {
                    break;
                }
                if (ebx != 0)
                {
                    break;
                }
                int32_t edx_1 = eax_1;
                var_10 = (edx_1 + 2);
                int32_t eax_2;
                do
                {
                    eax_2 = *edx_1;
                    edx_1 = (edx_1 + 2);
                } while (eax_2 != 0);
                int32_t edx_3 = ((edx_1 - var_10) >> 1);
                if (*((eax_1 + (edx_3 << 1)) - 2) == 0x5d)
                {
                    ebx = 1;
                    *((eax_1 + (edx_3 << 1)) - 2) = 0;
                }
                if (_wcsicmp(eax_1, u"nmake") == 0)
                {
                    break;
                }
                var_18_1 = &var_8;
                void* const var_1c_3 = &data_401734;
                var_20_1 = 0;
            }
            if (eax_1 != 0)
            {
                eax_3 = 1;
                break;
            }
            ebx = 0;
        }
        data_424724 = (data_424724 + 1);
    }
    return eax_3;
}

int32_t sub_409200()
{
    __security_cookie;
    int16_t var_210;
    _wsearchenv(u"tools.ini", u"INIT", &var_210);
    int32_t eax_2;
    if (var_210 != 0)
    {
        int32_t eax_3 = _wfsopen(&var_210, u"rt,ccs=unicode", 0x20);
        data_424f5c = eax_3;
        if (eax_3 == 0)
        {
            int16_t* var_214_1 = &var_210;
            sub_405b2c(0, 0x41d);
        }
        if (sub_409117() != 0)
        {
            eax_2 = 1;
        }
        else
        {
            eax_2 = fclose(data_424f5c);
            if (eax_2 == 0xffffffff)
            {
                int16_t* var_214_3 = &var_210;
                sub_405b2c(0, 0x424);
            }
        }
    }
    if ((var_210 == 0 || (var_210 != 0 && eax_2 == 0)))
    {
        eax_2 = 0;
    }
    CookieCheckFunction(eax_2);
    return eax_2;
}

uint32_t __fastcall sub_4092b2(uint32_t arg1, int32_t arg2)
{
    uint32_t esi = arg1;
    int32_t edi = (esi + (arg2 << 1));
    uint32_t eax_2;
    while (true)
    {
        eax_2 = sub_4086f8(arg1);
        if (eax_2 != 0)
        {
            arg1 = esi;
            if (eax_2 == 0xffff)
            {
                *esi = 0;
                break;
            }
            *esi = eax_2;
            esi = (esi + 2);
            if (esi == edi)
            {
                int32_t var_c_1 = data_424f5c;
                *arg1 = 0;
                ungetwc(eax_2, var_c_1);
            }
            else if (eax_2 == 0xa)
            {
                data_424724 = (data_424724 + 1);
                data_414021 = 1;
                *esi = 0;
            }
            else
            {
                data_414021 = 0;
                continue;
            }
        }
        eax_2 = esi;
        break;
    }
    return eax_2;
}

wchar16* __fastcall sub_409321(wchar16* arg1)
{
    wchar16* var_4 = arg1;
    int32_t var_10 = 0xa;
    wchar16* str = arg1;
    wchar16* eax_4;
    while (true)
    {
        eax_4 = wcschr(str, 0xa);
        if (eax_4 == 0)
        {
            break;
        }
        if ((eax_4 > arg1 && eax_4[-1] != 0x5e))
        {
            break;
        }
        if (fgetws(&eax_4[1], (0x400 - ((&eax_4[1] - arg1) >> 1)), data_424f5c) == 0)
        {
            if (feof(data_424f5c) != 0)
            {
                void* const var_10_3 = &data_4019dc;
                sub_405b2c(data_424724, 0x409);
            }
            sub_405b2c(data_424724, 0x41d);
        }
        data_424724 = (data_424724 + 1);
        int32_t var_10_4 = 0xa;
        str = &eax_4[1];
    }
    return eax_4;
}

int32_t __fastcall sub_4093b5(int32_t* arg1)
{
    int32_t* var_8 = arg1;
    int32_t* var_c = arg1;
    int32_t* ebx = arg1;
    *var_8[3] = 0;
    int32_t* var_c_1 = ebx;
    int16_t* edi = &data_435480;
    void* str = *ebx;
    int32_t eax_4;
    while (true)
    {
        wchar16* eax_1 = wcschr(str, 0x3c);
        if (eax_1 == 0)
        {
            eax_4 = 0;
            break;
        }
        str = &eax_1[1];
        if (*str == 0x3c)
        {
            void* edx_1 = (str + 2);
            int16_t eax_2 = *edx_1;
            if (eax_2 != 0)
            {
                ebx = 0;
                int16_t i;
                do
                {
                    int16_t j = eax_2;
                    while (j != 0x3e)
                    {
                        switch (j)
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
                            case 0x22:
                            {
                                ebx = ebx == 0;
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
                            case 0x5e:
                            {
                                break;
                                break;
                            }
                        }
                        if ((j == 0x20 && ebx == 0))
                        {
                            break;
                        }
                        if (j != 0x24)
                        {
                            edx_1 = (edx_1 + 2);
                        }
                        else
                        {
                            bool cond:0_1 = *(edx_1 + 2) != 0x28;
                            edx_1 = (edx_1 + 2);
                            if ((!cond:0_1))
                            {
                                break;
                            }
                        }
                        *edi = j;
                        edi = &edi[1];
                        int16_t j_2 = *edx_1;
                        j = j_2;
                        if (j_2 == 0)
                        {
                            break;
                        }
                    }
                    if (j == 0x3e)
                    {
                        break;
                    }
                    *edi = 0x24;
                    edi = &edi[1];
                    *edi = 0x28;
                    int16_t i_1 = *edx_1;
                    if (i_1 == 0xa)
                    {
                        break;
                    }
                    i = i_1;
                    int16_t j_1;
                    do
                    {
                        eax_2 = i;
                        if (i == 0x29)
                        {
                            break;
                        }
                        edx_1 = (edx_1 + 2);
                        *edi = i;
                        edi = &edi[1];
                        j_1 = *edx_1;
                        i = j_1;
                    } while (j_1 != 0xa);
                } while (i == 0x29);
                ebx = var_c_1;
            }
            eax_4 = 0x435480;
            *edi = 0;
            *ebx = edx_1;
            break;
        }
    }
    return eax_4;
}

int16_t* __fastcall sub_4094e3(int16_t* arg1, int32_t* arg2, int32_t* arg3)
{
    __security_cookie;
    int16_t* edi = arg1;
    int32_t var_824 = 0;
    void* var_820 = nullptr;
    char var_811 = 0;
    int32_t var_818 = 0;
    int16_t i_4;
    wcscpy_s(&i_4, 0x400, &data_4019e4);
    int32_t (* const var_830)() = feof;
    void var_80c;
    if (sub_4092b2(&var_80c, 0x3fe) == 0)
    {
        if (feof(data_424f5c) != 0)
        {
            void* const var_844_2 = &data_4019dc;
            sub_405b2c(data_424724, 0x409);
        }
        sub_405b2c(data_424724, 0x41d);
    }
    int16_t* var_81c = &i_4;
    sub_409321(&i_4);
    uint8_t* eax_7;
    while (true)
    {
        eax_7 = sub_4093b5(&var_81c);
        if (eax_7 == 0)
        {
            break;
        }
        int32_t eax_5 = sub_40b5fe(0xc);
        *(eax_5 + 4) = sub_40ecdb(eax_7);
        int32_t* i_5 = &data_4353a0;
        int32_t* i_2 = data_4353a0;
        if (i_2 != 0)
        {
            int32_t* i;
            do
            {
                i = *i_2;
                i_5 = i_2;
                i_2 = i;
            } while (i != 0);
        }
        *i_5 = eax_5;
    }
    if (data_4353a0 != eax_7)
    {
        var_81c = wcsncpy_s;
        while (true)
        {
            int16_t i_3 = i_4;
            int16_t* ebx_2 = &i_4;
            int16_t i_1;
            do
            {
                ebx_2 = &ebx_2[1];
                *edi = i_3;
                edi = &edi[1];
                if (edi == *arg3)
                {
                    int32_t eax_12;
                    int32_t esi_2;
                    if (var_818 == 0)
                    {
                        esi_2 = sub_40b5d9(0x1000);
                        var_818 = esi_2;
                        var_81c(esi_2, 0x800, *arg2, 0x400);
                        edi = (esi_2 + 0x800);
                        var_820 = 0x800;
                        eax_12 = (esi_2 + 0x1000);
                    }
                    else
                    {
                        void* ebx_3 = (var_820 + 0x400);
                        void* esi_3 = (var_820 * 2);
                        int32_t eax_13;
                        if (ebx_3 >= var_820)
                        {
                            eax_13 = sub_40b61c(var_818, (esi_3 + 0x800));
                            var_824 = eax_13;
                        }
                        if ((ebx_3 < var_820 || (ebx_3 >= var_820 && eax_13 == 0)))
                        {
                            sub_405b2c(data_424724, 0x419);
                            eax_13 = var_824;
                        }
                        var_818 = eax_13;
                        edi = (esi_3 + eax_13);
                        esi_2 = var_818;
                        var_820 = ebx_3;
                        eax_12 = (eax_13 + (ebx_3 << 1));
                    }
                    *arg3 = eax_12;
                    *arg2 = esi_2;
                }
                i_1 = *ebx_2;
                i_3 = i_1;
            } while (i_1 != 0);
            int16_t var_80e;
            if ((var_811 != i_1 && (i_4 == 0x3c && var_80e == 0x3c)))
            {
                if ((**&data_4353a0 != 0 && sub_4092b2(&i_4, 0x400) == 0))
                {
                    if (feof(data_424f5c) != 0)
                    {
                        void* const var_844_4 = &data_4019dc;
                        sub_405b2c(data_424724, 0x409);
                    }
                    sub_405b2c(data_424724, 0x41d);
                }
                int32_t eax_19 = **&data_4353a0;
                data_4353a0 = eax_19;
                if (eax_19 == 0)
                {
                    break;
                }
                continue;
            }
            var_811 = 1;
            if (sub_4092b2(&i_4, 0x400) == 0)
            {
                if (feof(data_424f5c) != 0)
                {
                    void* const var_844_6 = &data_4019dc;
                    sub_405b2c(data_424724, 0x409);
                }
                sub_405b2c(data_424724, 0x41d);
            }
        }
    }
    *edi = 0;
    CookieCheckFunction(edi);
    return edi;
}

int32_t __fastcall sub_409808(int32_t* arg1, int16_t* arg2)
{
    __security_cookie;
    int16_t* edi = *arg1;
    int16_t* esi = edi;
    int32_t* eax_2;
    do
    {
        eax_2 = *esi;
        esi = &esi[1];
    } while (eax_2 != 0);
    int16_t* ecx_1 = arg2;
    do
    {
        eax_2 = *ecx_1;
        ecx_1 = &ecx_1[1];
    } while (eax_2 != 0);
    void* esi_3 = (((esi - &esi[1]) >> 1) + (((ecx_1 - &ecx_1[1]) >> 1) - 1));
    __alloca_probe_16((esi_3 * 2));
    int32_t __saved_edi;
    int32_t* eax_4 = &__saved_edi;
    while (true)
    {
        int16_t ecx_5 = *edi;
        int16_t edx_1;
        if (ecx_5 != 0x3c)
        {
            edx_1 = ecx_5;
        }
        else
        {
            if (edi[1] == 0x3c)
            {
                *eax_4 = 0;
                wcscat_s(&__saved_edi, esi_3, arg2);
                wcscat_s(&__saved_edi, esi_3, &edi[2]);
                int32_t* esi_5 = &__saved_edi;
                int16_t i;
                do
                {
                    i = *esi_5;
                    esi_5 = (esi_5 + 2);
                } while (i != 0);
                int32_t eax_6 = sub_40b61c(*arg1, ((((esi_5 - &*__saved_edi[2]) >> 1) + 1) * 2));
                *arg1 = eax_6;
                int32_t eax_7 = wcscpy_s(eax_6, (((esi_5 - &*__saved_edi[2]) >> 1) + 1), &__saved_edi);
                CookieCheckFunction(eax_7);
                return eax_7;
            }
            edx_1 = 0x3c;
        }
        edi = &edi[1];
        *eax_4 = edx_1;
        eax_4 = (eax_4 + 2);
    }
}

int32_t __fastcall sub_4098ec(int16_t* arg1, int16_t* arg2, char arg3)
{
    int16_t* edi = arg1;
    int16_t* var_10 = arg1;
    int16_t* esi = edi;
    uint32_t eax = *edi;
    uint32_t ecx = eax;
    int32_t eax_1;
    if (eax != 0)
    {
        uint32_t eax_2;
        do
        {
            eax_1 = iswspace(ecx);
            if (eax_1 == 0)
            {
                break;
            }
            esi = &esi[1];
            eax_2 = *esi;
            ecx = eax_2;
        } while (eax_2 != 0);
    }
    int32_t eax_4;
    if ((eax == 0 || (eax != 0 && eax_1 != 0)))
    {
        void* const eax_3 = &data_4019f4;
        if (arg3 == 0)
        {
            eax_3 = &data_4017e0;
        }
        int16_t* var_24_2 = arg2;
        void* const var_28_1 = eax_3;
        eax_4 = sub_40d1b2(u"\techo. %s %s\n");
    }
    if ((eax != 0 && eax_1 == 0))
    {
        int16_t* ecx_2 = arg2;
        int32_t var_18_1 = 0;
        do
        {
            eax_1 = *ecx_2;
            ecx_2 = &ecx_2[1];
        } while (eax_1 != 0);
        eax_4 = (0x3f4 - ((ecx_2 - &ecx_2[1]) >> 1));
        int32_t var_14_1 = eax_4;
        if (*edi != 0)
        {
            int32_t ecx_4;
            ecx_4 = arg3;
            arg_7 = ecx_4;
            do
            {
                wcsncpy_s(0x4386e0, 0x400, edi, eax_4);
                int16_t* esi_1 = &data_4386e0;
                int16_t i;
                do
                {
                    i = *esi_1;
                    esi_1 = &esi_1[1];
                } while (i != 0);
                int16_t* ecx_5 = edi;
                int32_t esi_3 = ((esi_1 - 0x4386e2) >> 1);
                do
                {
                    i = *ecx_5;
                    ecx_5 = &ecx_5[1];
                } while (i != 0);
                if (var_14_1 < ((ecx_5 - &ecx_5[1]) >> 1))
                {
                    i = data_4386e0;
                    int16_t* var_c_1 = &data_4386e0;
                    if (i != 0)
                    {
                        int32_t edi_1 = 0;
                        uint32_t i_1 = i;
                        uint32_t i_2;
                        do
                        {
                            if (iswspace(i_1) != 0)
                            {
                                esi_3 = ((edi_1 >> 1) + 1);
                            }
                            edi_1 = (edi_1 + 2);
                            int16_t* eax_7 = &var_c_1[1];
                            var_c_1 = eax_7;
                            i_2 = *eax_7;
                            i_1 = i_2;
                        } while (i_2 != 0);
                        edi = var_10;
                    }
                }
                int32_t esi_6 = (esi_3 * 2);
                if (esi_6 >= 0x800)
                {
                    ___report_rangecheckfailure();
                    breakpoint();
                }
                *(esi_6 + 0x4386e0) = 0;
                void* const eax_8 = &data_4019f4;
                if (arg_7 == 0)
                {
                    eax_8 = &data_4017e0;
                }
                int16_t* var_24_5 = arg2;
                void* const var_28_3 = eax_8;
                int32_t var_2c_1 = 0x4386e0;
                sub_40d1b2(u"\techo %s %s %s\n");
                edi = (edi + esi_6);
                arg_7 = 1;
                var_10 = edi;
                eax_4 = var_14_1;
            } while (*edi != 0);
        }
    }
    return eax_4;
}

int32_t __fastcall sub_409a5d(FILE* arg1, int16_t* arg2, int32_t* arg3, char arg4, char arg5)
{
    int32_t* edi = arg3;
    int16_t* esi = arg2;
    int16_t* var_10 = esi;
    wchar16* eax = wcsstr(*edi, &data_4019e4);
    char var_5 = 0;
    int32_t var_18;
    if ((eax != 0 && (eax == *edi || (eax != *edi && eax[-1] == 0xa))))
    {
        wchar16* eax_1 = wcschr(&eax[2], 0xa);
        if (eax_1 != 0)
        {
            *eax_1 = 0;
        }
        int32_t eax_2 = sub_40ecdb(&eax[2]);
        var_18 = eax_2;
        if (eax_1 != 0)
        {
            *eax_1 = 0xa;
        }
        int32_t var_14 = 0;
        int32_t i = wcstok_s(eax_2, &data_401a70, &var_14);
        if (i != 0)
        {
            char* edi_1 = arg5;
            do
            {
                if (_wcsicmp(i, u"keep") == 0)
                {
                    *edi_1 = 1;
                }
                else
                {
                    int32_t eax_5 = _wcsicmp(i, u"nokeep");
                    if (eax_5 == 0)
                    {
                        *edi_1 = eax_5;
                    }
                    else if (_wcsicmp(i, u"unicode") != 0)
                    {
                        sub_405b2c(data_424724, 0x446);
                    }
                    else
                    {
                        var_5 = 1;
                    }
                }
                i = wcstok_s(0, &data_401a70, &var_14);
            } while (i != 0);
            edi = arg3;
        }
        free(var_18);
        if (var_5 != 0)
        {
            fwrite(&data_401a6c, 2, 1, arg1);
        }
        esi = var_10;
    }
    int32_t i_1 = wcsncmp(*edi, &data_4019e4, 2);
    if (i_1 != 0)
    {
        arg5 = 0;
        do
        {
            i_1 = wcschr(*edi, 0xa);
            if (i_1 == 0)
            {
                return i_1;
            }
            if (arg4 != 0)
            {
                int16_t* ecx_8 = *edi;
                *i_1 = 0;
                sub_4098ec(ecx_8, esi, arg5);
                *i_1 = 0xa;
            }
            char* esi_2 = *edi;
            if (var_5 != 0)
            {
                fwrite(esi_2, ((i_1 - esi_2) >> 1), 2, arg1);
                fwrite(&data_401a68, 4, 1, arg1);
            }
            else
            {
                if (esi_2 < i_1)
                {
                    do
                    {
                        uint32_t _ElementSize = WideCharToMultiByte(0, 0, esi_2, 1, &var_18, 4, nullptr, nullptr);
                        if (_ElementSize != 0)
                        {
                            fwrite(&var_18, _ElementSize, 1, arg1);
                        }
                        esi_2 = &esi_2[2];
                    } while (esi_2 < i_1);
                    edi = arg3;
                }
                fwrite(&data_401a64, 2, 1, arg1);
            }
            arg5 = 1;
            *edi = (i_1 + 2);
            i_1 = wcsncmp((i_1 + 2), &data_4019e4, 2);
            esi = var_10;
        } while (i_1 != 0);
    }
    *edi = (*edi + 4);
    return i_1;
}

int32_t __fastcall sub_409c81(uint8_t* arg1, int32_t* arg2, int32_t** arg3, char arg4)
{
    __security_cookie;
    int32_t** str_2 = arg3;
    int32_t* edi = arg2;
    int32_t* var_444 = edi;
    wchar16* eax_3 = wcschr(arg1, 0xa);
    int32_t i;
    if (eax_3 == 0)
    {
        *edi = sub_40ecdb(arg1);
        i = 0;
    }
    else
    {
        uint8_t* var_434 = arg1;
        *eax_3 = 0;
        int32_t** str_4 = str_2;
        int16_t j = 0;
        int32_t var_424 = 0;
        void var_44c;
        sub_40f9d0(&var_44c, &var_434, 0xff, str_4, 0, &var_424);
        *edi = var_424;
        *eax_3 = 0xa;
        if (*edi == arg1)
        {
            *edi = sub_40ecdb(arg1);
        }
        var_424 = *edi;
        int32_t** str_8 = nullptr;
        int32_t** str_5 = str_2;
        void* var_440 = &eax_3[1];
        void var_454;
        sub_40f9d0(&var_454, &var_440, 0xff, str_5, 0, &str_8);
        int32_t** str_7 = str_8;
        str_8 = nullptr;
        str_2 = str_7;
        i = sub_4093b5(&var_424);
        if (i != 0)
        {
            do
            {
                char var_41d = 0;
                int32_t esi_1 = sub_40ecdb(i);
                int32_t var_430_1 = esi_1;
                int32_t _Stream;
                if (*esi_1 != 0)
                {
                    int32_t _Stream_2 = sub_411c7b(esi_1, &data_4019ec);
                    _Stream = _Stream_2;
                    if (_Stream_2 == 0)
                    {
                        int32_t var_468_8 = esi_1;
                        sub_405b2c(data_424724, 0x41e);
                    }
                    else
                    {
                        int32_t var_468_9 = 0x3c;
                        int32_t str = *edi;
                        while (true)
                        {
                            wchar16* eax_14 = wcschr(str, 0x3c);
                            if (eax_14 == 0)
                            {
                                break;
                            }
                            if (eax_14[1] == 0x3c)
                            {
                                uint8_t* ecx_13 = &eax_14[2];
                                var_424 = &ecx_13[2];
                                void* eax_15;
                                do
                                {
                                    eax_15 = *ecx_13;
                                    ecx_13 = &ecx_13[2];
                                } while (eax_15 != j);
                                memmove(eax_14, &eax_14[2], ((((ecx_13 - var_424) >> 1) << 1) + 2));
                                esi_1 = var_430_1;
                                break;
                            }
                            int32_t var_468_10 = 0x3c;
                            str = &eax_14[1];
                        }
                    }
                }
                else
                {
                    var_434 = nullptr;
                    int16_t var_214;
                    int32_t eax_8 = _wgetenv_s(&var_434, &var_214, 0x103, &data_401804);
                    if ((eax_8 != 0 || (eax_8 == 0 && var_434 == eax_8)))
                    {
                        wcscpy_s(&var_214, 0x103, &data_40180c);
                    }
                    _Stream = 0;
                    void lpTempFileName;
                    int32_t _Stream_1;
                    if (GetTempFileNameW(&var_214, &data_401810, 0, &lpTempFileName) == 0)
                    {
                        _Stream_1 = _Stream;
                    }
                    else
                    {
                        wcscpy_s(&var_214, 0x103, &lpTempFileName);
                        _Stream_1 = _wfsopen(&var_214, &data_4019ec, 0x20);
                        _Stream = _Stream_1;
                    }
                    if (_Stream_1 == 0)
                    {
                        int16_t* var_468_5 = &var_214;
                        sub_405b2c(data_424724, 0x41e);
                    }
                    if ((wcschr(&var_214, 0x20) != 0 && wcschr(&var_214, 0x22) == 0))
                    {
                        int16_t* edi_1 = &var_214;
                        wchar16* eax_11;
                        do
                        {
                            eax_11 = *edi_1;
                            edi_1 = &edi_1[1];
                        } while (eax_11 != 0);
                        void var_212;
                        int32_t edi_3 = ((edi_1 - &var_212) >> 1);
                        uint32_t esi_2 = (edi_3 * 2);
                        memmove(&var_212, &var_214, esi_2);
                        var_214 = 0x22;
                        *(&var_212 + esi_2) = 0x22;
                        if (((edi_3 << 1) + 4) >= 0x206)
                        {
                            ___report_rangecheckfailure();
                            breakpoint();
                        }
                        esi_1 = var_430_1;
                        *(&var_214 + ((edi_3 << 1) + 4)) = 0;
                        edi = var_444;
                    }
                    sub_409808(edi, &var_214);
                    free(esi_1);
                    esi_1 = sub_40ecdb(&var_214);
                    var_430_1 = esi_1;
                }
                var_424 = *edi;
                sub_409a5d(_Stream, esi_1, &str_2, arg4, &var_41d);
                int32_t** str_1 = str_2;
                wchar16* eax_18 = wcschr(str_1, 0xa);
                void* str_6;
                if (eax_18 != 0)
                {
                    str_6 = &eax_18[1];
                }
                else
                {
                    int16_t* str_3 = str_1;
                    do
                    {
                        eax_18 = *str_3;
                        str_3 = &str_3[1];
                    } while (eax_18 != j);
                    str_6 = (str_1 + (((str_3 - &str_3[1]) >> 1) << 1));
                }
                str_2 = str_6;
                fclose(_Stream);
                if (var_41d == 0)
                {
                    int32_t* eax_19 = sub_40ec89();
                    eax_19[1] = sub_40ecdb(var_430_1);
                    sub_40ede0(&data_435474, eax_19);
                }
                free(var_430_1);
                i = sub_4093b5(&var_424);
            } while (i != 0);
        }
        if (str_7 != &eax_3[1])
        {
            free(str_7);
        }
        i = 1;
    }
    CookieCheckFunction(i);
    return i;
}

int32_t __fastcall sub_40a0bf(int32_t arg1)
{
    if (fclose(data_424f5c) == 0xffff)
    {
        int32_t var_8_1 = data_424f64;
        sub_405b2c(0, 0x424);
    }
    free(data_424f64, arg1);
    int32_t eax_2 = (data_4353a4 - 1);
    void* ecx_1 = (eax_2 * 0xc);
    data_4353a4 = eax_2;
    data_424f5c = *(ecx_1 + 0x4353b8);
    data_424f64 = *(ecx_1 + 0x4353b4);
    int32_t eax_5 = *(ecx_1 + 0x4353b0);
    data_424724 = eax_5;
    return eax_5;
}

uint32_t __fastcall sub_40a127(int32_t arg1)
{
    char ebx = arg1;
    while (true)
    {
        data_414021 = 0;
        while (true)
        {
            int16_t eax_1;
            if (ebx == 0)
            {
                eax_1 = sub_4086f8(arg1);
            }
            else
            {
                eax_1 = getwc(data_424f5c, nullptr);
            }
            uint32_t eax_4 = eax_1;
            arg1 = 0xffff;
            if (eax_4 != 0xffff)
            {
                if (eax_4 != 0xa)
                {
                    continue;
                }
                else
                {
                    data_414021 = 1;
                    int16_t eax_2;
                    if (ebx == 0)
                    {
                        eax_2 = sub_4086f8(0xffff);
                    }
                    else
                    {
                        int32_t var_8_2 = data_424f5c;
                        eax_2 = getwc(var_8_2, nullptr);
                        arg1 = var_8_2;
                    }
                    uint32_t eax_3 = eax_2;
                    if ((eax_3 == 0x3b && data_424f61 != 0))
                    {
                        break;
                    }
                    if (eax_3 == 0x23)
                    {
                        break;
                    }
                    eax_4 = ungetwc(eax_3, data_424f5c, nullptr);
                }
            }
            return eax_4;
        }
        data_424724 = (data_424724 + 1);
    }
}

uint32_t __fastcall sub_40a1ac(int32_t arg1)
{
    int32_t var_4 = arg1;
    int32_t esi;
    esi = arg1;
    if ((esi == 0xa || esi == 0xffff))
    {
        sub_405b2c(data_424724, 0x407);
    }
    int32_t var_10 = data_424f5c;
    data_424740 = esi;
    if (fgetws(0x424742, 0x3ff, var_10) == 0)
    {
        if (feof(data_424f5c) != 0)
        {
            void* const var_10_2 = &data_4019dc;
            sub_405b2c(data_424724, 0x409);
        }
        sub_405b2c(data_424724, 0x41d);
    }
    int16_t* ecx_3 = &data_424740;
    int16_t* edx = &data_424740;
    int32_t eax;
    do
    {
        eax = *edx;
        edx = &edx[1];
    } while (eax != 0);
    if (*((((edx - 0x424742) >> 1) << 1) + &*(data_42473c + 2)) == 0xa)
    {
        if (((((edx - 0x424742) >> 1) << 1) + 0xfffffffe) >= 0x800)
        {
            ___report_rangecheckfailure();
            breakpoint();
        }
        *((((edx - 0x424742) >> 1) << 1) + &*(data_42473c + 2)) = 0;
    }
    while (true)
    {
        uint32_t eax_2 = *ecx_3;
        if ((eax_2 != 0x20 && eax_2 != 9))
        {
            return sub_40afb3(ecx_3);
        }
        ecx_3 = &ecx_3[1];
    }
}

int32_t __fastcall sub_40a290(uint32_t arg1, void* arg2, int32_t arg3)
{
    uint32_t var_c = arg1;
    void* edi = arg2;
    arg2 = data_414021;
    int32_t eax_4;
    while (true)
    {
        uint32_t eax_1 = arg1;
        char ebx;
        if (eax_1 != 0xa)
        {
            if (eax_1 == 0x3a)
            {
                data_414021 = 0;
                arg1 = sub_4086f8(arg1);
                if (arg1 == 0x3a)
                {
                    *edi = 0x3a;
                    *(edi + 2) = 0;
                    eax_4 = 0x15;
                    break;
                }
                ebx = 0x14;
                goto label_40a3b6;
            }
            if (eax_1 == 0x3b)
            {
                eax_4 = 0x13;
            label_40a49d:
                data_414021 = 0;
                break;
            }
            if (eax_1 == 0x3d)
            {
                eax_4 = 0x16;
                goto label_40a49d;
            }
            if ((((eax_1 == 0x5b && data_424f61 == 0) || eax_1 == 0x5e) || ((eax_1 == 0x5b && data_424f61 != 0) && arg2 == 0)))
            {
                ungetwc(arg1, data_424f5c);
                edi = (edi - 2);
            label_40a3ed:
                sub_40ad10((edi - 2), arg3);
                uint32_t esi_1;
                if (data_414021 != 0)
                {
                    eax_4 = _wcsicmp(0x424740, u"include");
                    if (eax_4 == 0)
                    {
                        data_414021 = eax_4;
                        esi_1 = sub_40a552(u"cho. %s %s\n");
                        if ((esi_1 == 0x3a || esi_1 == 0x3d))
                        {
                            ungetwc(esi_1, data_424f5c);
                        }
                        if ((esi_1 != 0x3a && esi_1 != 0x3d))
                        {
                            if (data_424f61 != 0)
                            {
                                void* var_1c_4 = edi;
                                sub_405b2c(data_424724, 0x409);
                            }
                            eax_4 = sub_40a1ac(esi_1);
                        }
                    }
                }
                if ((data_414021 == 0 || (data_414021 != 0 && eax_4 != 0)))
                {
                    data_414021 = 0;
                }
                if (((data_414021 == 0 || (data_414021 != 0 && eax_4 != 0)) || ((data_414021 != 0 && eax_4 == 0) && (esi_1 == 0x3a || esi_1 == 0x3d))))
                {
                    eax_4 = 0x10;
                }
                break;
            }
            if (eax_1 == 0xffff)
            {
                uint32_t var_1c_1 = data_424f5c;
                eax_4 = feof(var_1c_1);
                arg1 = var_1c_1;
                if (eax_4 == 0)
                {
                    sub_405b2c(data_424724, 0x40e);
                    arg1 = 0x40e;
                }
                if (data_4353a4 != 0)
                {
                    sub_40a0bf(arg1);
                }
            }
            if ((((eax_1 == 0x5b && data_424f61 != 0) && arg2 != 0) || ((eax_1 == 0xffff && data_4353a4 == 0) && data_414024 < 0)))
            {
                eax_4 = 0x17;
                break;
            }
            if (((eax_1 == 0xffff && data_4353a4 == 0) && data_414024 >= 0))
            {
                sub_405b2c(data_424724, 0x3fc);
                arg1 = 0x3fc;
            }
            if (((eax_1 != 0x5b && eax_1 != 0x5e) && eax_1 != 0xffff))
            {
                goto label_40a3ed;
            }
        }
        data_424724 = (data_424724 + 1);
        data_414021 = 1;
        eax_4 = sub_4086f8(arg1);
        arg1 = eax_4;
        if (((arg1 == 0x3b && data_424f61 != 0) || ((arg1 != 0x3b || (arg1 == 0x3b && data_424f61 == 0)) && arg1 == 0x23)))
        {
            arg1 = 0;
            int32_t ecx = sub_40a127(arg1);
            data_424724 = (data_424724 + 1);
            data_414021 = 1;
            eax_4 = sub_4086f8(ecx);
            arg1 = eax_4;
        }
        if ((arg1 != 0x20 && arg1 != 9))
        {
            arg2 = 1;
            data_414021 = 1;
            if (arg1 == 0xffff)
            {
                continue;
            }
            else
            {
                ebx = 0x11;
            }
        label_40a3b6:
            ungetwc(arg1, data_424f5c);
            eax_4 = ebx;
            break;
        }
        eax_4 = 0x12;
        goto label_40a49d;
    }
    return eax_4;
}

int32_t __fastcall sub_40a4ad(uint32_t arg1, char arg2)
{
    uint32_t ecx;
    void* edx;
    if (data_424f62 != 0)
    {
        data_424724 = (data_424724 + 1);
        data_424f62 = 0;
        uint32_t eax_1 = sub_4086f8(arg1);
        if ((eax_1 == 0x20 || eax_1 == 9))
        {
            data_414021 = 0;
            eax_1 = 0x12;
            return eax_1;
        }
        if ((eax_1 != 0x20 && eax_1 != 9))
        {
            ecx = 0xffff;
            data_414021 = 1;
            if (eax_1 != 0xffff)
            {
                ungetwc(eax_1, data_424f5c, nullptr);
                int32_t eax_3;
                eax_3 = 0x11;
                return eax_3;
            }
            edx = &data_424740;
        }
    }
    else
    {
        if ((arg2 == 0x18 || arg2 == 0x19))
        {
            int32_t var_8_1 = 0x424f40;
            arg1 = arg2;
            sub_40a6dc(arg1);
            int32_t eax_5;
            eax_5 = arg2;
            return eax_5;
        }
        if ((arg2 != 0x18 && arg2 != 0x19))
        {
            arg1 = 0;
            ecx = sub_40a552(arg1);
            edx = &data_424742;
            data_424740 = ecx;
            data_424742 = 0;
        }
    }
    return sub_40a290(ecx, edx, 0x424f40);
}

uint32_t __fastcall sub_40a552(uint32_t arg1)
{
    char ebx = arg1;
    int16_t esi = 0x5e;
    uint32_t eax_2;
    while (true)
    {
        int16_t eax_1;
        if (ebx == 0)
        {
            eax_1 = sub_4086f8(arg1);
        }
        else
        {
            eax_1 = getwc(data_424f5c);
        }
        eax_2 = eax_1;
        if (eax_2 == 0x5e)
        {
            int16_t eax_3;
            if (ebx == 0)
            {
                eax_3 = sub_4086f8(9);
            }
            else
            {
                eax_3 = getwc(data_424f5c);
            }
            eax_2 = eax_3;
            if ((eax_2 != 0x20 && eax_2 != 9))
            {
                ungetwc(eax_2, data_424f5c);
                break;
            }
        }
        if (((eax_2 == 0x20 || eax_2 == 9) || eax_2 == 0x5e))
        {
            data_414021 = 0;
        }
        if (eax_2 == 0x5c)
        {
            eax_2 = sub_40a62b(0x5c, ebx);
        }
        arg1 = eax_2;
        if (eax_2 != 0x20)
        {
            if (eax_2 != 9)
            {
                esi = arg1;
                if (((arg1 == 0x3b && data_414021 != 0) && data_424f61 != 0))
                {
                    goto label_40a603;
                }
                if (((arg1 != 0x3b || (arg1 == 0x3b && data_414021 != 0)) && esi == 0x23))
                {
                label_40a603:
                    arg1 = ebx;
                    sub_40a127(arg1);
                    esi = 0xa;
                    data_414021 = 1;
                }
                break;
            }
        }
    }
    eax_2 = esi;
    return eax_2;
}

int32_t __fastcall sub_40a62b(uint32_t arg1, char arg2)
{
    int32_t eax;
    uint32_t eax_2;
    if (arg1 == 0x5c)
    {
        do
        {
            int16_t eax_1;
            int32_t ecx;
            if (arg2 == 0)
            {
                eax_1 = sub_4086f8(arg1);
            }
            else
            {
                int32_t var_10_1 = data_424f5c;
                eax_1 = getwc(var_10_1);
                ecx = var_10_1;
            }
            eax_2 = eax_1;
            if (eax_2 != 0xa)
            {
                break;
            }
            data_424724 = (data_424724 + 1);
            data_414021 = 1;
            if (arg2 == 0)
            {
                eax = sub_4086f8(ecx);
            }
            else
            {
                eax = getwc(data_424f5c);
            }
            arg1 = eax;
            if (((arg1 == 0x3b && data_424f61 != 0) || ((arg1 != 0x3b || (arg1 == 0x3b && data_424f61 == 0)) && arg1 == 0x23)))
            {
                arg1 = arg2;
                int32_t ecx_2 = sub_40a127(arg1);
                data_424724 = (data_424724 + 1);
                if (arg2 == 0)
                {
                    eax = sub_4086f8(ecx_2);
                }
                else
                {
                    eax = getwc(data_424f5c);
                }
                arg1 = eax;
            }
        } while (arg1 == 0x5c);
    }
    if ((arg1 != 0x5c || (arg1 == 0x5c && eax_2 == 0xa)))
    {
        eax = arg1;
    }
    if ((arg1 == 0x5c && eax_2 != 0xa))
    {
        ungetwc(eax_2, data_424f5c);
        eax = 0x5c;
    }
    return eax;
}

int32_t __fastcall sub_40a6dc(int32_t arg1)
{
    uint8_t* var_24 = nullptr;
    int16_t* i = &data_424740;
    void* var_10 = nullptr;
    int32_t ebx;
    *ebx[1] = arg1;
    char var_6 = *ebx[1];
    ebx = 0;
    int32_t var_1c = 0;
    bool var_5 = nullptr;
    uint8_t* var_18 = &data_424740;
    uint8_t* var_20 = &data_424740;
    uint32_t esi = sub_4086f8(arg1);
    uint32_t var_c = esi;
    uint32_t ecx = 0x5e;
    if (*ebx[1] == 0x18)
    {
        *ebx[1] = (*ebx[1] - 0x16);
    }
    else
    {
        if (((esi != 0x20 && esi != 9) && esi != 0x5e))
        {
            *ebx[1] = 1;
        }
        if (esi == 0x5e)
        {
            uint32_t eax_2 = sub_4086f8(0x5e);
            if ((eax_2 != 0x20 && eax_2 != 9))
            {
                ungetwc(eax_2, data_424f5c);
                ecx = 0x5e;
                *ebx[1] = 1;
                esi = 0x5e;
                goto label_40a77a;
            }
        }
        if (((esi == 0x20 || esi == 9) || esi == 0x5e))
        {
            ecx = 0;
            *ebx[1] = 2;
            int16_t eax_3 = sub_40a552(ecx);
            ecx = 0x5e;
            esi = eax_3;
        label_40a77a:
            var_c = esi;
        }
    }
    void* var_14 = arg_4;
    while (true)
    {
        char edx_1;
        if (esi != 0x22)
        {
            var_5 = ebx;
            if (esi != 0x5e)
            {
                goto label_40a905;
            }
            if ((ebx == 0 && var_6 == 0x19))
            {
                int16_t eax_5;
                eax_5 = sub_4086f8(0x5e);
                esi = eax_5;
                uint32_t eax_6 = esi;
                var_c = esi;
                if (eax_6 > 0x29)
                {
                    ecx = ebx;
                    var_5 = ecx;
                    if (eax_6 == 0x2d)
                    {
                    label_40a82f:
                        *i = 0x5e;
                        i = &i[1];
                        if (i == var_14)
                        {
                            int32_t ecx_1 = data_42472c;
                            void* eax_23;
                            if (ecx_1 == 0)
                            {
                                int32_t eax_21 = sub_40b5d9(0x1000);
                                data_42472c = eax_21;
                                wcsncpy_s(eax_21, 0x800, var_18, 0x400);
                                void* eax_22 = data_42472c;
                                var_1c = 0x800;
                                i = (eax_22 + 0x800);
                                eax_23 = (eax_22 + 0x1000);
                            }
                            else
                            {
                                int32_t esi_1 = (var_1c + 0x400);
                                uint8_t* eax_24;
                                if (esi_1 >= var_1c)
                                {
                                    eax_24 = sub_40b61c(ecx_1, (esi_1 * 2));
                                    var_24 = eax_24;
                                }
                                if ((esi_1 < var_1c || (esi_1 >= var_1c && eax_24 == 0)))
                                {
                                    sub_405b2c(data_424724, 0x419);
                                    eax_24 = var_24;
                                }
                                data_42472c = eax_24;
                                i = &eax_24[(var_1c << 1)];
                                var_1c = esi_1;
                                eax_23 = &eax_24[(esi_1 << 1)];
                            }
                            var_14 = eax_23;
                            arg_4 = eax_23;
                            uint8_t* eax_25 = data_42472c;
                            var_18 = eax_25;
                            var_20 = eax_25;
                        }
                    }
                    else
                    {
                        if (eax_6 == 0x40)
                        {
                            goto label_40a82f;
                        }
                        if (eax_6 != 0x5c)
                        {
                            if ((eax_6 != 0x5e && (eax_6 != 0x7b && eax_6 != 0x7d)))
                            {
                                goto label_40a905;
                            }
                            goto label_40a82f;
                        }
                    }
                }
                else
                {
                    if (eax_6 == 0x29)
                    {
                        goto label_40a82f;
                    }
                    var_5 = ebx;
                    if (eax_6 != 0xa)
                    {
                        if (eax_6 == 0x21)
                        {
                            goto label_40a82f;
                        }
                        if ((eax_6 != 0x22 && eax_6 != 0x23))
                        {
                            if ((eax_6 != 0x24 && eax_6 != 0x28))
                            {
                                goto label_40a905;
                            }
                            goto label_40a82f;
                        }
                    }
                }
                edx_1 = 0;
                var_5 = ebx;
                goto label_40a9f0;
            }
            ungetwc(sub_4086f8(0x5e), data_424f5c);
            esi = 0x5e;
            ecx = ebx;
            var_c = 0x5e;
            var_5 = ecx;
            goto label_40a905;
        }
        ecx = var_5;
        var_5 = ecx == 0;
    label_40a905:
        uint32_t eax_28 = esi;
        void* ecx_4;
        if (eax_28 > 0x3b)
        {
            uint32_t eax_56;
            int32_t ecx_7;
            if (eax_28 > 0x44)
            {
                if (eax_28 == 0x46)
                {
                label_40a9ee:
                    edx_1 = 0xd;
                label_40a9f0:
                    ecx_4 = var_10;
                    void* esi_2;
                    if (ecx_4 <= 0)
                    {
                    label_40ab18:
                        ecx_7 = (*ebx[1] * 0xf);
                        eax_56 = edx_1;
                    label_40ab1e:
                        *ebx[1] = *((ecx_7 + eax_56) + 0x4012c0);
                    label_40ab25:
                        ecx_4 = var_10;
                    label_40ab28:
                        ebx = *ebx[1];
                        esi_2 = ecx_4;
                        if (*ebx[1] == 0)
                        {
                            data_424724 = (data_424724 + 1);
                            i[-1] = 0x20;
                            data_414021 = 1;
                            int16_t eax_70;
                            int32_t ecx_11;
                            eax_70 = sub_4086f8(ecx_4);
                            uint32_t eax_71 = eax_70;
                            data_414021 = 0;
                            if ((eax_71 == 0x20 || eax_71 == 9))
                            {
                                *ebx[1] = 2;
                                while (true)
                                {
                                    int16_t eax_72;
                                    eax_72 = sub_4086f8(ecx_11);
                                    eax_71 = eax_72;
                                    if (eax_71 == 0x20)
                                    {
                                        continue;
                                    }
                                    if ((eax_71 != 0x20 && eax_71 != 9))
                                    {
                                        break;
                                    }
                                    if (eax_71 != 9)
                                    {
                                        /* nop */
                                    }
                                }
                            }
                            void* var_34_6 = data_424f5c;
                            ungetwc(eax_71, var_34_6);
                            ecx_4 = var_34_6;
                        label_40ac82:
                            ebx = var_5;
                            goto label_40ac8a;
                        }
                    }
                    else
                    {
                        if (edx_1 != 0xe)
                        {
                            if (edx_1 != 9)
                            {
                                goto label_40ab18;
                            }
                            *ebx[1] = *((*ebx[1] * 0xf) + 0x4012c9);
                            if (*ebx[1] != 1)
                            {
                                goto label_40ab28;
                            }
                            ecx_4 = (ecx_4 - 1);
                            var_10 = ecx_4;
                        label_40ab11:
                            *ebx[1] = 2;
                            goto label_40ab28;
                        }
                        *ebx[1] = *((*ebx[1] * 0xf) + 0x4012c6);
                        if ((*ebx[1] & 0x20) != 0)
                        {
                            goto label_40ab28;
                        }
                        if (*ebx[1] == 0)
                        {
                            goto label_40ab11;
                        }
                        if (*ebx[1] == 0x40)
                        {
                            goto label_40ab11;
                        }
                        sub_405b2c(data_424724, 0x40e);
                        ecx_4 = var_10;
                        ebx = *ebx[1];
                        esi_2 = ecx_4;
                    }
                    char var_7_1;
                    if (*ebx[1] == 0xd)
                    {
                        ecx_4 = (ecx_4 + 1);
                        *ebx[1] = 2;
                        var_10 = ecx_4;
                    label_40ab7d:
                        var_7_1 = *ebx[1];
                    label_40ab83:
                        *i = var_c;
                        i = &i[1];
                        if (i == var_14)
                        {
                            uint8_t* eax_69;
                            if (data_42472c == 0)
                            {
                                int32_t eax_68 = sub_40b5d9(0x1000);
                                data_42472c = eax_68;
                                wcsncpy_s(eax_68, 0x800, var_18, 0x400);
                                eax_69 = data_42472c;
                                var_1c = 0x800;
                                i = &eax_69[0x800];
                                ecx_4 = &eax_69[0x1000];
                            }
                            else
                            {
                                if ((var_1c + 0x400) >= var_1c)
                                {
                                    ebx = ((var_1c + 0x400) * 2);
                                    eax_69 = sub_40b61c(data_42472c, ebx);
                                    var_24 = eax_69;
                                    if (eax_69 != 0)
                                    {
                                        i = &eax_69[(var_1c << 1)];
                                        data_42472c = eax_69;
                                        var_1c = (var_1c + 0x400);
                                        ecx_4 = &eax_69[ebx];
                                    }
                                }
                                if (((var_1c + 0x400) < var_1c || ((var_1c + 0x400) >= var_1c && eax_69 == 0)))
                                {
                                    /* tailcall */
                                    return sub_40ad10(0x419, sub_405b2c(data_424724, 0x419));
                                }
                            }
                            *ebx[1] = var_7_1;
                            var_14 = ecx_4;
                            var_18 = eax_69;
                            arg_4 = ecx_4;
                            var_20 = eax_69;
                        }
                        goto label_40ac82;
                    }
                    if (*ebx[1] == 0x40)
                    {
                        esi = var_c;
                        break;
                    }
                    var_10 = esi_2;
                    *ebx[1] = ebx;
                    var_7_1 = *ebx[1];
                    if ((ebx & 0x20) == 0)
                    {
                        goto label_40ab83;
                    }
                    uint32_t var_34_5 = var_c;
                    ecx_4 = sub_405b2c(data_424724, ((ebx & 0xffffffdf) + 0x3e8));
                    var_10 = esi_2;
                    goto label_40ab7d;
                }
                if (eax_28 == 0x52)
                {
                    goto label_40a9ee;
                }
                if (eax_28 == 0x5c)
                {
                    edx_1 = 3;
                    goto label_40a9f0;
                }
                if (eax_28 == 0xffff)
                {
                label_40aae9:
                    edx_1 = 6;
                    goto label_40a9f0;
                }
            label_40aad6:
                char eax_57 = sub_403b50(esi);
                edx_1 = (-eax_57);
                edx_1 = ((edx_1 - edx_1) & 0xa);
                goto label_40a9f0;
            }
            switch (eax_28)
            {
                case 0x3c:
                {
                label_40aa50:
                    ebx = 0xc;
                    edx_1 = 0xc;
                    if (var_6 != 0x18)
                    {
                        goto label_40a9f0;
                    }
                    if (esi != 0x3c)
                    {
                        goto label_40a9f0;
                    }
                    uint32_t eax_51 = sub_4086f8(ecx);
                    if (eax_51 != 0x3c)
                    {
                        ungetwc(eax_51, data_424f5c);
                    }
                    else
                    {
                        i = sub_4094e3(i, &var_20, &arg_4);
                        var_c = 0xa;
                        void* eax_53 = arg_4;
                        ebx = 6;
                        data_424724 = (data_424724 - 1);
                        var_14 = eax_53;
                        var_18 = var_20;
                    }
                    ecx_7 = (*ebx[1] * 0xf);
                    eax_56 = ebx;
                    goto label_40ab1e;
                }
                case 0x3d:
                {
                    edx_1 = 2;
                    goto label_40a9f0;
                }
                case 0x3f:
                {
                    goto label_40aa50;
                }
                case 0x40:
                {
                    goto label_40aa50;
                }
                case 0x42:
                {
                    goto label_40a9ee;
                }
                case 0x44:
                {
                    goto label_40a9ee;
                }
            }
            goto label_40aad6;
        }
        if (eax_28 != 0x3b)
        {
            if (eax_28 > 0x28)
            {
                if (eax_28 == 0x29)
                {
                    edx_1 = 9;
                    goto label_40a9f0;
                }
                if (eax_28 == 0x2a)
                {
                    edx_1 = 0xb;
                    goto label_40a9f0;
                }
                if (eax_28 == 0x2c)
                {
                    edx_1 = 0xe;
                    goto label_40a9f0;
                }
                if (eax_28 != 0x3a)
                {
                    goto label_40aad6;
                }
                edx_1 = 4;
                goto label_40a9f0;
            }
            if (eax_28 == 0x28)
            {
                edx_1 = 8;
                goto label_40a9f0;
            }
            if (eax_28 == 9)
            {
            label_40a967:
                edx_1 = 5;
                goto label_40a9f0;
            }
            if (eax_28 == 0xa)
            {
                goto label_40aae9;
            }
            if (eax_28 == 0x20)
            {
                goto label_40a967;
            }
            if (eax_28 == 0x23)
            {
                if (*ebx[1] == 0)
                {
                    goto label_40a9aa;
                }
                if (var_6 == 0x19)
                {
                    break;
                }
                *ebx[1] = *((*ebx[1] * 0xf) + 0x4012c1);
                goto label_40ab25;
            }
            if (eax_28 != 0x24)
            {
                goto label_40aad6;
            }
            edx_1 = 7;
            goto label_40a9f0;
        }
        if (*ebx[1] != 0)
        {
        label_40a9c1:
            edx_1 = 0;
            goto label_40a9f0;
        }
        if (data_424f61 == *ebx[1])
        {
            goto label_40a9c1;
        }
    label_40a9aa:
        ebx = 0;
        ecx = 0;
        var_5 = false;
        ecx_4 = sub_40a127(ecx);
        data_424724 = (data_424724 + 1);
    label_40ac8a:
        esi = sub_4086f8(ecx_4);
        var_c = esi;
        ecx = 0x5e;
    }
    ungetwc(esi, data_424f5c);
    for (; i > var_18; i = &i[-1])
    {
        if (iswspace(i[-1]) == 0)
        {
            break;
        }
    }
    int32_t ecx_14 = data_42472c;
    *i = 0;
    int32_t eax_76;
    if (ecx_14 == 0)
    {
        eax_76 = sub_40ecdb(var_18);
    }
    else
    {
        eax_76 = sub_40b61c(ecx_14, ((((i - ecx_14) >> 1) << 1) + 2));
    }
    if ((ecx_14 == 0 || (ecx_14 != 0 && eax_76 != 0)))
    {
        data_42472c = eax_76;
    }
    return eax_76;
}

int16_t* __fastcall sub_40ad10(int16_t* arg1, int32_t arg2)
{
    int16_t* eax = arg1;
    int16_t ebx;
    *ebx[1] = 0;
    void* edi = &eax[1];
    char var_5 = nullptr;
    uint32_t eax_1 = *eax;
    void* var_c = edi;
    if (eax_1 == 0x22)
    {
        var_5 = 1;
        ebx = 0x10;
    }
    else if (eax_1 == 0x24)
    {
        ebx = 2;
    }
    else if (eax_1 == 0x7b)
    {
        ebx = 8;
    }
    else
    {
        ebx = 0;
    }
    uint32_t esi_1;
    while (true)
    {
        int16_t eax_6;
        int32_t ecx;
        eax_6 = sub_4086f8(arg1);
        esi_1 = eax_6;
        char edx;
        if (esi_1 == 0x5e)
        {
            esi_1 = sub_4086f8(ecx);
            if (esi_1 > 0x29)
            {
                if (esi_1 == 0x5c)
                {
                    goto label_40adf1;
                }
                if ((esi_1 != 0x5e && (esi_1 != 0x7b && esi_1 != 0x7d)))
                {
                    goto label_40ad86;
                }
            }
            else if (esi_1 != 0x29)
            {
                if (esi_1 == 0xa)
                {
                    goto label_40adf1;
                }
                if (esi_1 == 0x23)
                {
                    goto label_40adf1;
                }
                if ((esi_1 != 0x24 && esi_1 != 0x28))
                {
                    goto label_40ad86;
                }
            }
            *edi = 0x5e;
            edi = (edi + 2);
            var_c = edi;
        label_40adf1:
            edx = 0;
        }
        else
        {
        label_40ad86:
            uint32_t eax_13 = esi_1;
            switch (eax_13)
            {
                case 9:
                {
                label_40ae23:
                    edx = ((var_5 != 0 - 1) & 5);
                    break;
                }
                case 0xa:
                {
                label_40ae91:
                    edx = 6;
                    break;
                }
                case 0x20:
                {
                    goto label_40ae23;
                }
                case 0x22:
                {
                    edx = 0xe;
                    if (ebx == 0x12)
                    {
                        var_5 = 1;
                    }
                    break;
                }
                case 0x23:
                {
                    edx = 1;
                    break;
                }
                case 0x24:
                {
                    edx = 7;
                    break;
                }
                case 0x29:
                {
                    edx = 9;
                    break;
                }
                case 0x3a:
                {
                    edx = 4;
                    break;
                }
                case 0x3b:
                {
                    edx = 3;
                    break;
                }
                case 0x3d:
                {
                    edx = 2;
                    break;
                }
                case 0x5c:
                {
                    edx = 0xd;
                    break;
                }
                case 0x7b:
                {
                    edx = 0xb;
                    break;
                }
                case 0x7d:
                {
                    edx = 0xc;
                    break;
                }
            }
            if ((((((((eax_13 > 0x29 && eax_13 != 0x3a) && eax_13 != 0x3b) && eax_13 != 0x3d) && eax_13 != 0x5c) && eax_13 != 0x7b) && eax_13 != 0x7d) && eax_13 == 0xffff))
            {
                goto label_40ae91;
            }
            if (eax_13 == 0x28)
            {
                edx = 8;
            }
            if ((((((((((eax_13 <= 0x29 && eax_13 != 0x29) && eax_13 != 9) && eax_13 != 0xa) && eax_13 != 0x20) && eax_13 != 0x22) && eax_13 != 0x23) && eax_13 != 0x24) && eax_13 != 0x28) || ((((((eax_13 > 0x29 && eax_13 != 0x3a) && eax_13 != 0x3b) && eax_13 != 0x3d) && eax_13 != 0x5c) && eax_13 != 0x7b) && eax_13 != 0x7d)))
            {
                if ((data_424734 & 0x80) == 0)
                {
                    char eax_38 = sub_403b50(esi_1);
                    edx = (-eax_38);
                    edx = ((edx - edx) & 0xa);
                }
                else
                {
                    if (sub_403b50(esi_1) == 0)
                    {
                        if (esi_1 == 0x2a)
                        {
                            goto label_40ae7d;
                        }
                        if (esi_1 != 0x40)
                        {
                            goto label_40adf1;
                        }
                        goto label_40ae7d;
                    }
                label_40ae7d:
                    edx = 0xa;
                }
            }
        }
        arg1 = (ebx * 0xf);
        ebx = *((arg1 + edx) + 0x4011a0);
        if ((var_5 != 0 && ebx == 1))
        {
            ebx = (ebx + 0xf);
        }
        if (*ebx[1] != 0)
        {
            if (edx != 6)
            {
                *edi = 0x5c;
                edi = (edi + 2);
                var_c = edi;
            }
            else
            {
                data_424724 = (data_424724 + 1);
                data_414021 = 1;
                int16_t eax_41;
                eax_41 = sub_4086f8(arg1);
                esi_1 = eax_41;
                data_414021 = 0;
                if ((esi_1 == 0x20 || esi_1 == 9))
                {
                    ebx = 0x40;
                    while (true)
                    {
                        int16_t eax_42;
                        eax_42 = sub_4086f8(arg1);
                        esi_1 = eax_42;
                        if (esi_1 == 0x20)
                        {
                            continue;
                        }
                        if ((esi_1 != 0x20 && esi_1 != 9))
                        {
                            break;
                        }
                        if (esi_1 != 9)
                        {
                            /* nop */
                        }
                    }
                    edi = var_c;
                }
                if ((esi_1 != 0x20 && esi_1 != 9))
                {
                    ebx = edi != 0x424742;
                }
            }
        }
        *ebx[1] = 0;
        if (edi >= arg2)
        {
            sub_405b2c(data_424724, 0x434);
            arg1 = 0x434;
        }
        if (ebx == 0x40)
        {
            break;
        }
        if ((ebx & 0x20) != 0)
        {
            uint32_t var_28_1 = esi_1;
            arg1 = sub_405b2c(data_424724, ((ebx & 0xffffffdf) + 0x3e8));
        }
        if (ebx != 0xf)
        {
            *edi = esi_1;
            edi = (edi + 2);
            var_c = edi;
        }
        else
        {
            *ebx[1] = 1;
        }
    }
    ungetwc(esi_1, data_424f5c);
    *edi = 0;
    return sub_40cea2(eax);
}

uint32_t __fastcall sub_40afb3(int16_t* arg1)
{
    __security_cookie;
    int16_t* edi = arg1;
    int16_t eax_2 = *edi;
    if ((eax_2 != 0 && eax_2 != 0x23))
    {
        int32_t (* const var_260)() = wcspbrk;
        wchar16* var_270 = nullptr;
        int32_t esi = wcspbrk(edi, &data_401a88);
        int16_t var_264 = 0x20;
        wchar16* ebx_2;
        if (esi == 0)
        {
            void var_274;
            void var_25c;
            uint32_t eax_7;
            wchar16* esi_1;
            while (true)
            {
                int16_t* ecx_12 = edi;
                ebx_2 = nullptr;
                int32_t eax_3;
                do
                {
                    eax_3 = *ecx_12;
                    ecx_12 = &ecx_12[1];
                } while (eax_3 != 0);
                esi = &edi[((ecx_12 - &ecx_12[1]) >> 1)];
            label_40b06a:
                if (esi > edi)
                {
                label_40b071:
                    int32_t ecx_4 = (esi - 2);
                    int16_t eax_6 = *ecx_4;
                    if ((eax_6 == var_264 || (eax_6 != var_264 && eax_6 == 9)))
                    {
                        esi = ecx_4;
                        if (ecx_4 > edi)
                        {
                            break;
                        }
                    }
                    ebx_2 = var_270;
                }
                *esi = 0;
                eax_7 = *edi;
                if (eax_7 != 0x3c)
                {
                    break;
                }
                if (*(esi - 2) != 0x3e)
                {
                    break;
                }
                *(esi - 2) = 0;
                esi_1 = sub_40f94d(&edi[1]);
                if (esi_1 == &edi[1])
                {
                    esi_1 = sub_40ecdb(&edi[1]);
                }
                void* eax_10 = sub_40b534(u"INCLUDE");
                if (eax_10 != 0)
                {
                    uint8_t* ecx_8 = *(*(eax_10 + 8) + 4);
                    if (ecx_8 != 0)
                    {
                        int32_t eax_12 = sub_40ecdb(ecx_8);
                        ebx_2 = sub_40f94d(eax_12);
                        if (ebx_2 != eax_12)
                        {
                            free(eax_12);
                        }
                    }
                }
                edi = sub_408404(ebx_2, esi_1, &var_25c, &var_274);
                if (edi != 0)
                {
                    break;
                }
                wchar16* var_288_4 = esi_1;
                sub_405b2c(data_424724, 0x41c);
            }
            if (eax_7 != 0x3c)
            {
                if ((eax_7 == 0x22 && *(esi - 2) == 0x22))
                {
                    *(esi - 2) = 0;
                    edi = &edi[1];
                }
                int32_t ebx_3 = sub_40f94d(edi);
                if (ebx_3 == edi)
                {
                    ebx_3 = sub_40ecdb(edi);
                }
                if (sub_408256(ebx_3, &var_25c, &var_274) != 0)
                {
                    goto label_40b326;
                }
                if (var_260(ebx_3, &data_401a90) != 0)
                {
                    int32_t var_288_15 = ebx_3;
                label_40b31e:
                    sub_405b2c(data_424724, 0x41c);
                label_40b326:
                    int32_t edx_12 = data_4353a4;
                    int32_t esi_6 = 0;
                    if (edx_12 > 0)
                    {
                        int32_t* ebx_4 = &data_4353b4;
                    label_40b33c:
                        if (_wcsicmp(edi, *ebx_4) != 0)
                        {
                            goto label_40b35c;
                        }
                        int16_t* var_288_17 = edi;
                        sub_405b2c(data_424724, 0x430);
                    label_40b35c:
                        edx_12 = data_4353a4;
                        esi_6 = (esi_6 + 1);
                        ebx_4 = &ebx_4[3];
                        if (esi_6 < edx_12)
                        {
                            goto label_40b33c;
                        }
                        goto label_40b36c;
                    }
                label_40b36c:
                    int32_t eax_27 = data_424f5c;
                    void* ecx_37 = (edx_12 * 0xc);
                    bool cond:0 = data_424f63 == 0;
                    data_4353a4 = (edx_12 + 1);
                    data_424730 = 0;
                    *(ecx_37 + 0x4353b8) = eax_27;
                    *(ecx_37 + 0x4353b0) = data_424724;
                    *(ecx_37 + 0x4353b4) = data_424f64;
                    if (cond:0)
                    {
                        goto label_40b3ba;
                    }
                    int16_t* var_288_18 = edi;
                    sub_40d1b2(u"Included: %s\n");
                label_40b3ba:
                    int32_t eax_30 = sub_411c7b(edi, u"rt,ccs=unicode");
                    data_424f5c = eax_30;
                    if (eax_30 != 0)
                    {
                        goto label_40b3de;
                    }
                    int16_t* var_288_19 = edi;
                    sub_405b2c(data_424724, 0x41c);
                label_40b3de:
                    int32_t eax_31;
                    int32_t ecx_41;
                    eax_31 = sub_40ecdb(edi);
                    data_424f64 = eax_31;
                    data_424724 = 1;
                    data_414021 = 1;
                    uint32_t eax_33 = sub_4086f8(ecx_41);
                    if (eax_33 == 0x20)
                    {
                    label_40b43e:
                        data_414021 = 0;
                        eax_33 = 0x12;
                    label_40b437:
                        CookieCheckFunction(eax_33);
                        return eax_33;
                    }
                    if (eax_33 == 9)
                    {
                        goto label_40b43e;
                    }
                    int32_t var_288_20 = data_424f5c;
                    data_414021 = 1;
                    ungetwc(eax_33, var_288_20);
                    data_424724 = (data_424724 - 1);
                    eax_33 = 0x11;
                    goto label_40b437;
                }
                int32_t edx_5 = data_4353a4;
                int32_t eax_19 = edx_5;
                int32_t var_26c_1 = eax_19;
                if (eax_19 < 0)
                {
                    goto label_40b2ff;
                }
                int32_t* ecx_22 = ((eax_19 * 0xc) + 0x4353b4);
                int32_t* var_264_1 = ecx_22;
            label_40b1f6:
                int32_t ecx_23;
                if (eax_19 != edx_5)
                {
                    ecx_23 = *ecx_22;
                }
                else
                {
                    ecx_23 = data_424f64;
                }
                int32_t eax_20 = sub_40b45a(ecx_23);
                int32_t var_268_1 = eax_20;
                if (eax_20 != 0)
                {
                    int32_t ecx_24 = eax_20;
                    int32_t edx_6 = (ecx_24 + 2);
                label_40b21e:
                    eax_20 = *ecx_24;
                    ecx_24 = (ecx_24 + 2);
                    if (eax_20 != 0)
                    {
                        goto label_40b21e;
                    }
                    int32_t edx_7 = ebx_3;
                    int32_t esi_2 = (edx_7 + 2);
                label_40b232:
                    eax_20 = *edx_7;
                    edx_7 = (edx_7 + 2);
                    if (eax_20 != var_270)
                    {
                        goto label_40b232;
                    }
                    int32_t esi_4 = ((((edx_7 - esi_2) >> 1) + 2) + ((ecx_24 - edx_6) >> 1));
                    int32_t eax_22;
                    int32_t edx_10;
                    edx_10 = HIGHD((esi_4 * 2));
                    eax_22 = LOWD((esi_4 * 2));
                    int32_t ecx_27;
                    ecx_27 = ((esi_4 * 2) >> 0x20) != 0;
                    int32_t eax_23 = sub_40b5d9(((-ecx_27) | eax_22));
                    wcscpy_s(eax_23, esi_4, var_268_1);
                    wcscat_s(eax_23, esi_4, &data_401a98);
                    wcscat_s(eax_23, esi_4, ebx_3);
                    if (sub_408256(eax_23, &var_25c, &var_274) != 0)
                    {
                        edi = eax_23;
                        free(var_268_1);
                    label_40b2ff:
                        free(ebx_3);
                        if (var_26c_1 >= 0)
                        {
                            goto label_40b326;
                        }
                        int16_t* var_288_14 = edi;
                        goto label_40b31e;
                    }
                    free(var_268_1);
                    free(eax_23);
                }
                eax_19 = (var_26c_1 - 1);
                ecx_22 = (var_264_1 - 0xc);
                var_26c_1 = eax_19;
                var_264_1 = ecx_22;
                if (eax_19 < 0)
                {
                    goto label_40b2ff;
                }
                edx_5 = data_4353a4;
                goto label_40b1f6;
            }
            if (ebx_2 != 0)
            {
                free(ebx_2);
            }
            free(esi_1);
            goto label_40b326;
        }
        int16_t ecx_2 = *esi;
        *esi = 0;
        if (ecx_2 != 0x23)
        {
            int16_t* ebx_1 = (esi + 2);
            while (true)
            {
                int16_t eax_5 = *ebx_1;
                if (eax_5 == 0)
                {
                    break;
                }
                if (eax_5 == 0x23)
                {
                    break;
                }
                if ((eax_5 != 0x20 && eax_5 != 9))
                {
                    int16_t* var_288_1 = ebx_1;
                    sub_405b2c(data_424724, 0x409);
                }
                ebx_1 = &ebx_1[1];
            }
        }
        ebx_2 = nullptr;
        goto label_40b06a;
    }
    sub_405b2c(data_424724, 0x407);
    /* tailcall */
    return sub_40b45a(0x407);
}

int32_t __fastcall sub_40b45a(int32_t arg1)
{
    __security_cookie;
    void var_214;
    void var_10;
    _wsplitpath_s(arg1, &var_10, 3, &var_214, 0x100, 0, 0, 0, 0);
    void* ecx = &var_10;
    int16_t i;
    do
    {
        i = *ecx;
        ecx = (ecx + 2);
    } while (i != 0);
    void* edx = &var_214;
    do
    {
        i = *edx;
        edx = (edx + 2);
    } while (i != 0);
    void var_212;
    void var_e;
    int32_t esi_1 = ((((edx - &var_212) >> 1) + 1) + ((ecx - &var_e) >> 1));
    int32_t eax_3;
    int32_t edx_3;
    edx_3 = HIGHD((esi_1 * 2));
    eax_3 = LOWD((esi_1 * 2));
    int32_t ecx_3;
    ecx_3 = ((esi_1 * 2) >> 0x20) != 0;
    int32_t eax_4 = sub_40b5d9(((-ecx_3) | eax_3));
    _wmakepath_s(eax_4, esi_1, &var_10, &var_214, 0, 0);
    int32_t ecx_6 = eax_4;
    int32_t edx_4 = (ecx_6 + 2);
    int16_t i_1;
    do
    {
        i_1 = *ecx_6;
        ecx_6 = (ecx_6 + 2);
    } while (i_1 != 0);
    int32_t ecx_8 = ((ecx_6 - edx_4) >> 1);
    int16_t eax_5 = *((eax_4 + (ecx_8 << 1)) - 2);
    if ((0x5c == eax_5 || (0x5c != eax_5 && 0x2f == eax_5)))
    {
        *((eax_4 + (ecx_8 << 1)) - 2) = 0;
    }
    CookieCheckFunction(eax_4);
    return eax_4;
}

void* __fastcall sub_40b534(int16_t* arg1)
{
    int16_t* edx = arg1;
    int16_t i_3 = *arg1;
    int32_t eax_5;
    void** i_1;
    if (i_3 == 0)
    {
        data_4386a8 = 0x434f90;
    }
    else
    {
        int32_t ecx = 0;
        int16_t i_2 = i_3;
        int16_t i;
        do
        {
            edx = &edx[1];
            ecx = (ecx + i_2);
            i = *edx;
            i_2 = i;
        } while (i != 0);
        i_1 = *((ecx << 2) + &data_434f90);
        data_4386a8 = ((ecx << 2) + &data_434f90);
        for (; i_1 != 0; i_1 = *i_1)
        {
            int16_t* eax_3 = i_1[1];
            int16_t* edx_1 = arg1;
            while (true)
            {
                i_2 = *eax_3;
                int16_t temp0_1 = *edx_1;
                bool c_1 = i_2 < temp0_1;
                if (i_2 == temp0_1)
                {
                    int16_t temp1_1;
                    if (i_2 != 0)
                    {
                        i_2 = eax_3[1];
                        temp1_1 = edx_1[1];
                        c_1 = i_2 < temp1_1;
                        if (i_2 == temp1_1)
                        {
                            eax_3 = &eax_3[2];
                            edx_1 = &edx_1[2];
                            if (i_2 != 0)
                            {
                                continue;
                            }
                        }
                    }
                    if ((i_2 == 0 || (i_2 != 0 && i_2 == temp1_1)))
                    {
                        eax_5 = 0;
                        break;
                    }
                }
                eax_5 = ((eax_3 - eax_3) | 1);
                break;
            }
            if (eax_5 == 0)
            {
                break;
            }
        }
    }
    void* eax_10;
    if ((i_3 == 0 || (i_3 != 0 && i_1 == 0)))
    {
        eax_10 = nullptr;
    }
    if ((i_3 != 0 && i_1 != 0))
    {
        eax_5 = i_1[3];
        eax_5 = (eax_5 & 0x10);
        uint32_t eax_6 = eax_5;
        int32_t eax_7 = (-eax_6);
        eax_10 = ((!(eax_7 - eax_7)) & i_1);
    }
    return eax_10;
}

void sub_40b5c8()
{
    __builtin_memset(0x434f90, 0, 0x400);
}

int32_t __fastcall sub_40b5d9(int32_t arg1)
{
    int32_t eax = malloc(arg1);
    if (eax == 0)
    {
        sub_405b2c(data_424730, 0x41b);
    }
    return eax;
}

int32_t __fastcall sub_40b5fe(uint32_t arg1)
{
    uint32_t var_4 = arg1;
    int32_t eax = sub_40b5d9(arg1);
    memset(eax, 0, arg1);
    return eax;
}

int32_t __fastcall sub_40b61c(int32_t arg1, int32_t arg2)
{
    int32_t esi;
    if (arg1 == 0)
    {
        esi = sub_40b5d9(arg2);
    }
    else
    {
        esi = realloc(arg1, arg2);
        if (esi == 0)
        {
            sub_405b2c(data_424730, 0x41b);
        }
    }
    return esi;
}

uint32_t __fastcall sub_40b652(int16_t* arg1, int16_t* arg2)
{
    __security_cookie;
    int32_t i = 0;
    int16_t* var_6c4 = arg2;
    int16_t* var_6b8 = &data_438ee8;
    int32_t var_6b4 = 0;
    int32_t var_6cc = 0;
    int32_t** var_6bc = &data_438ee4;
    enum LOAD_LIBRARY_FLAGS dwFlags = LOAD_LIBRARY_AS_IMAGE_RESOURCE | LOAD_LIBRARY_AS_DATAFILE_EXCLUSIVE;
    uint32_t eax_18;
    if (arg1 == 0)
    {
    label_40bc1c:
        eax_18 = 0x80070057;
    }
    else
    {
        if (*arg1 == 0)
        {
            goto label_40bc1c;
        }
        if (arg2 == 0)
        {
            goto label_40bc1c;
        }
        if (*arg2 == 0)
        {
            goto label_40bc1c;
        }
        data_438ee4 = 0;
        void var_218;
        if (wcsncpy_s(&var_218, 0x104, arg1, 0xffffffff) != 0)
        {
        label_40bc15:
            eax_18 = 0x80004005;
        }
        else
        {
            void* ecx = &var_218;
            int32_t eax_2;
            do
            {
                eax_2 = *ecx;
                ecx = (ecx + 2);
            } while (eax_2 != 0);
            void var_21a;
            void var_216;
            if ((*(&var_21a + (((ecx - &var_216) >> 1) << 1)) != 0x5c && wcsncat_s(&var_218, 0x104, &data_401a98, 0xffffffff) != 0))
            {
                goto label_40bc15;
            }
            uint32_t var_6d8 = 0x80070002;
            void* var_6ac = &var_218;
            int16_t** var_6a8_1 = &var_6c4;
            int32_t* var_6a4_1 = &dwFlags;
            int32_t* var_6a0_1 = &var_6bc;
            int32_t* var_69c_1 = &var_6b8;
            int32_t* var_698_1 = &var_6cc;
            int32_t* var_694_1 = &var_6b4;
            int32_t lpBuffer = 0;
            void var_434;
            void* edi_1 = &var_434;
            *edi_1 = 0;
            *(edi_1 + 4) = 0;
            uint32_t eax_4 = GetEnvironmentVariableW(u"VSLANG", &lpBuffer, 6);
            if ((eax_4 != 0 && eax_4 < 6))
            {
                <lambda_8e3c08aa9d5457651d5f58bced74548d>::operator()(&var_6ac, &lpBuffer, 0xa, &var_6d8);
            }
            if (((eax_4 == 0 || (eax_4 != 0 && eax_4 >= 6)) || ((eax_4 != 0 && eax_4 < 6) && var_6d8 != 0)))
            {
                void* eax_5 = data_4386c4;
                HINSTANCE hModule;
                FARPROC esi;
                if (eax_5 != 0)
                {
                    esi = DecodePointer(eax_5);
                }
                else
                {
                    hModule = GetModuleHandleW(u"kernel32.dll");
                    if (hModule != 0)
                    {
                        esi = GetProcAddress(hModule, "SetThreadPreferredUILanguages");
                        data_4386c4 = EncodePointer(esi);
                    }
                }
                if ((eax_5 != 0 || (eax_5 == 0 && hModule != 0)))
                {
                    if (esi == 0)
                    {
                        i = 0;
                    }
                    else
                    {
                        uint32_t eax_9 = GetEnvironmentVariableW(u"VS_UNICODE_OUTPUT", nullptr, 0);
                        if ((eax_9 == 0 && esi(0x100, eax_9, eax_9) == 0))
                        {
                            goto label_40bc15;
                        }
                        void* eax_11 = data_4386c0;
                        void* var_6d0 = nullptr;
                        int32_t var_6c8 = 0;
                        HINSTANCE hModule_1;
                        FARPROC edi_4;
                        if (eax_11 != 0)
                        {
                            edi_4 = DecodePointer(eax_11);
                        }
                        else
                        {
                            hModule_1 = GetModuleHandleW(u"kernel32.dll");
                            if (hModule_1 != 0)
                            {
                                edi_4 = GetProcAddress(hModule_1, "GetThreadPreferredUILanguages");
                                data_4386c0 = EncodePointer(edi_4);
                            }
                        }
                        if ((eax_11 != 0 || (eax_11 == 0 && hModule_1 != 0)))
                        {
                            if (edi_4 == 0)
                            {
                                goto label_40b9b4;
                            }
                            if (edi_4(0x34, &var_6c8, 0, &var_6d0) == 0)
                            {
                                goto label_40bc15;
                            }
                            void* lpMem = HeapAlloc(GetProcessHeap(), HEAP_NONE, (var_6d0 * 2));
                            if (lpMem != 0)
                            {
                                if (edi_4(0x34, &var_6c8, lpMem, &var_6d0) == 0)
                                {
                                    goto label_40bc15;
                                }
                                void* lpMem_1 = lpMem;
                                uint32_t edi_5;
                                if (*lpMem == 0)
                                {
                                    edi_5 = var_6d8;
                                }
                                else
                                {
                                    do
                                    {
                                        <lambda_8e3c08aa9d5457651d5f58bced74548d>::operator()(&var_6ac, lpMem_1, 0x10, &var_6d8);
                                        edi_5 = var_6d8;
                                        if (edi_5 == 0)
                                        {
                                            break;
                                        }
                                        lpMem_1 = (lpMem_1 + 0xa);
                                    } while (*lpMem_1 != 0);
                                }
                                HeapFree(GetProcessHeap(), HEAP_NONE, lpMem);
                                if (edi_5 == 0)
                                {
                                    goto label_40b910;
                                }
                                goto label_40b9b4;
                            }
                            eax_18 = 0x8007000e;
                        }
                        if ((eax_11 == 0 && hModule_1 == 0))
                        {
                        label_40b9b4:
                            <lambda_8e3c08aa9d5457651d5f58bced74548d>::operator()(&var_6ac, u"1033", 0xa, &var_6d8);
                            uint32_t ebx_2 = var_6d8;
                            if (ebx_2 == 0)
                            {
                                goto label_40b910;
                            }
                            void var_420;
                            int32_t eax_26 = wcsncpy_s(&var_420, 0x104, &var_218, 0xffffffff);
                            int32_t eax_27;
                            if (eax_26 == 0)
                            {
                                eax_27 = wcsncat_s(&var_420, 0x104, &data_401b54, 0xffffffff);
                                if (eax_27 == 0)
                                {
                                    char lpFindFileData;
                                    FindFileHandle hFindFile = FindFirstFileW(&var_420, &lpFindFileData);
                                    if (hFindFile != 0xffffffff)
                                    {
                                        void* esi_2 = &var_218;
                                        FindFileHandle eax_28;
                                        do
                                        {
                                            eax_28 = *esi_2;
                                            esi_2 = (esi_2 + 2);
                                        } while (eax_28 != 0);
                                        while (true)
                                        {
                                            if (FindNextFileW(hFindFile, &lpFindFileData) == 0)
                                            {
                                                break;
                                            }
                                            if ((lpFindFileData & 0x10) != 0)
                                            {
                                                void* const ecx_9 = &data_40180c;
                                                void var_664;
                                                void* eax_30 = &var_664;
                                                int32_t eax_32;
                                                int16_t edx;
                                                while (true)
                                                {
                                                    edx = *eax_30;
                                                    int16_t temp1_1 = *ecx_9;
                                                    bool c_1 = edx < temp1_1;
                                                    if (edx == temp1_1)
                                                    {
                                                        int16_t temp2_1;
                                                        if (edx != 0)
                                                        {
                                                            edx = *(eax_30 + 2);
                                                            temp2_1 = *(ecx_9 + 2);
                                                            c_1 = edx < temp2_1;
                                                            if (edx == temp2_1)
                                                            {
                                                                eax_30 = (eax_30 + 4);
                                                                ecx_9 = (ecx_9 + 4);
                                                                if (edx != 0)
                                                                {
                                                                    continue;
                                                                }
                                                            }
                                                        }
                                                        if ((edx == 0 || (edx != 0 && edx == temp2_1)))
                                                        {
                                                            eax_32 = 0;
                                                            break;
                                                        }
                                                    }
                                                    eax_32 = ((eax_30 - eax_30) | 1);
                                                    break;
                                                }
                                                if (eax_32 != 0)
                                                {
                                                    void* const ecx_10 = &data_401b58;
                                                    void* eax_33 = &var_664;
                                                    int32_t eax_35;
                                                    while (true)
                                                    {
                                                        edx = *eax_33;
                                                        int16_t temp3_1 = *ecx_10;
                                                        bool c_2 = edx < temp3_1;
                                                        if (edx == temp3_1)
                                                        {
                                                            int16_t temp4_1;
                                                            if (edx != 0)
                                                            {
                                                                edx = *(eax_33 + 2);
                                                                temp4_1 = *(ecx_10 + 2);
                                                                c_2 = edx < temp4_1;
                                                                if (edx == temp4_1)
                                                                {
                                                                    eax_33 = (eax_33 + 4);
                                                                    ecx_10 = (ecx_10 + 4);
                                                                    if (edx != 0)
                                                                    {
                                                                        continue;
                                                                    }
                                                                }
                                                            }
                                                            if ((edx == 0 || (edx != 0 && edx == temp4_1)))
                                                            {
                                                                eax_35 = 0;
                                                                break;
                                                            }
                                                        }
                                                        eax_35 = ((eax_33 - eax_33) | 1);
                                                        break;
                                                    }
                                                    if (eax_35 != 0)
                                                    {
                                                        int32_t var_6ec_15 = 1;
                                                        void var_6b0;
                                                        void* var_6f0_9 = &var_6b0;
                                                        int16_t var_6d4;
                                                        int16_t* var_6f4_9 = &var_6d4;
                                                        if (sub_40d01f(&var_664, u"%hu%c") != 0xffffffff)
                                                        {
                                                            int32_t eax_37 = (((esi_2 - &var_216) >> 1) * 2);
                                                            if (eax_37 >= 0x208)
                                                            {
                                                                ___report_rangecheckfailure();
                                                                breakpoint();
                                                            }
                                                            *(&var_420 + eax_37) = 0;
                                                            if ((wcsncat_s(&var_420, 0x104, &var_664, 0xffffffff) == 0 && wcsncat_s(&var_420, 0x104, &data_401a98, 0xffffffff) == 0))
                                                            {
                                                                int32_t hFile = wcsncat_s(&var_420, 0x104, var_6c4, 0xffffffff);
                                                                if (hFile == 0)
                                                                {
                                                                    HINSTANCE eax_40 = LoadLibraryExW(&var_420, hFile, dwFlags);
                                                                    if (eax_40 != 0)
                                                                    {
                                                                        *var_6bc = eax_40;
                                                                        int16_t* ecx_12 = var_6b8;
                                                                        if (ecx_12 != 0)
                                                                        {
                                                                            int32_t** eax_42;
                                                                            eax_42 = var_6d4;
                                                                            *ecx_12 = eax_42;
                                                                        }
                                                                        if (var_6cc != 0)
                                                                        {
                                                                            wcscpy_s(var_6cc, var_6b4, &var_420);
                                                                        }
                                                                        ebx_2 = 0;
                                                                        break;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        FindClose(hFindFile);
                                        eax_18 = ebx_2;
                                    }
                                    else
                                    {
                                        eax_18 = GetLastError();
                                        if (eax_18 > 0)
                                        {
                                            eax_18 = (eax_18 | 0x80070000);
                                        }
                                    }
                                }
                            }
                            if ((eax_26 != 0 || (eax_26 == 0 && eax_27 != 0)))
                            {
                                eax_18 = 0x80070003;
                            }
                        }
                    }
                }
                if ((((eax_5 != 0 || (eax_5 == 0 && hModule != 0)) && esi == 0) || (eax_5 == 0 && hModule == 0)))
                {
                    uint16_t eax_22 = GetUserDefaultUILanguage();
                    int16_t ecx_6 = (eax_22 & 0x3ff);
                    if ((ecx_6 == 1 || ecx_6 == 0xd))
                    {
                        eax_22 = 0x409;
                    }
                    uint16_t var_440 = eax_22;
                    int16_t var_43c = 0x409;
                    int16_t var_43e_1 = ((eax_22 & 0x3ff) | 0x400);
                    do
                    {
                        void var_42c;
                        _itow_s(&var_440[i], &var_42c, 6, 0xa);
                        <lambda_8e3c08aa9d5457651d5f58bced74548d>::operator()(&var_6ac, &var_42c, 0xa, &var_6d8);
                        if (var_6d8 == 0)
                        {
                            break;
                        }
                        i = (i + 1);
                    } while (i < 3);
                    if (var_6d8 == 0)
                    {
                        goto label_40b910;
                    }
                    goto label_40b9b4;
                }
            }
            if (((eax_4 != 0 && eax_4 < 6) && var_6d8 == 0))
            {
            label_40b910:
                eax_18 = 0;
            }
        }
    }
    CookieCheckFunction(eax_18);
    return eax_18;
}

int16_t* __thiscall <lambda_8e3c08aa9d5457651d5f58bced74548d>::operator()(int32_t* arg1, int16_t* arg2, int32_t arg3, int32_t* arg4)
{
    __security_cookie;
    int16_t* eax_2 = arg2;
    if (*eax_2 != 0)
    {
        int16_t* var_220;
        eax_2 = wcstoul(eax_2, &var_220, arg3);
        int16_t var_224_1 = eax_2;
        if (*var_220 == 0)
        {
            void var_14;
            _itow_s(eax_2, &var_14, 6, 0xa);
            void lpLibFileName;
            eax_2 = wcsncpy_s(&lpLibFileName, 0x104, *arg1, 0xffffffff);
            if (eax_2 == 0)
            {
                eax_2 = wcsncat_s(&lpLibFileName, 0x104, &var_14, 0xffffffff);
                if (eax_2 == 0)
                {
                    eax_2 = wcsncat_s(&lpLibFileName, 0x104, &data_401a98, 0xffffffff);
                    if (eax_2 == 0)
                    {
                        eax_2 = wcsncat_s(&lpLibFileName, 0x104, *arg1[1], 0xffffffff);
                        if (eax_2 == 0)
                        {
                            eax_2 = LoadLibraryExW(&lpLibFileName, nullptr, *arg1[2]);
                            if (eax_2 != 0)
                            {
                                **arg1[3] = eax_2;
                                int16_t* eax_7 = *arg1[4];
                                if (eax_7 != 0)
                                {
                                    *eax_7 = var_224_1;
                                }
                                eax_2 = arg1[5];
                                int32_t ecx_4 = *eax_2;
                                if (ecx_4 != 0)
                                {
                                    eax_2 = wcscpy_s(ecx_4, *arg1[6], &lpLibFileName);
                                }
                                *arg4 = 0;
                            }
                            else if (*arg4 == 0x80070002)
                            {
                                eax_2 = GetLastError();
                                if (eax_2 > 0)
                                {
                                    eax_2 = (eax_2 | 0x80070000);
                                }
                                *arg4 = eax_2;
                            }
                        }
                    }
                }
            }
        }
    }
    CookieCheckFunction(eax_2);
    return eax_2;
}

int32_t sub_40bda6() __pure
{
    return;
}

int32_t __fastcall sub_40bda9(int32_t arg1)
{
    data_414068 = arg1;
}

int32_t __fastcall sub_40bdb0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    if (data_424f60 == 0)
    {
        sub_405ca2();
    }
    sub_40d1b2(u"\nNMAKE : fatal error U1038: Int…");
    sub_40d194();
    __builtin_memcpy(arg2, *arg1, 0x50);
    if (arg3 != 0)
    {
        __builtin_memcpy(arg3, arg1[1], 0x2cc);
    }
    int32_t ecx_1 = 0;
    if ((**arg1 != 0x80000003 && data_414068 == 0))
    {
        ecx_1 = 1;
    }
    return ecx_1;
}

int32_t sub_40be1b(int32_t arg1, int32_t arg2) __noreturn
{
    int32_t var_4 = 0x554;
    int32_t var_8 = 0x413080;
    enum _EXCEPTION_DISPOSITION (* var_10)(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, struct _CONTEXT* arg3, int32_t arg4) = __except_handler4;
    int32_t* fsbase;
    int32_t var_14 = *fsbase;
    int32_t ebp;
    var_4 = ebp;
    void* const var_56c_15 = nullptr;
    int32_t esi;
    int32_t var_570_11 = esi;
    uint32_t __security_cookie_1 = __security_cookie;
    int32_t var_8_2 = (0x413080 ^ __security_cookie_1);
    int16_t* eax_37 = (__security_cookie_1 ^ &var_4);
    int16_t* var_20 = eax_37;
    int16_t* var_578 = eax_37;
    int32_t* var_1c = &var_578;
    void* const var_57c_1 = &data_40be2a;
    int32_t var_8_3 = 0xfffffffe;
    int32_t var_c = var_8_2;
    *fsbase = &var_14;
    int32_t edi = arg2;
    int32_t var_27c = edi;
    SetErrorMode(SEM_FAILCRITICALERRORS);
    void var_278;
    memset(&var_278, 0, 0x50);
    void var_568;
    memset(&var_568, 0, 0x2cc);
    int32_t var_8_1 = 0;
    int32_t var_580 = 2;
    setlocale(2, ".ACP");
    sub_40d088();
    _set_invalid_parameter_handler(sub_40bda6);
    int32_t esi_1 = 1;
    int32_t ebx = arg1;
    while (true)
    {
        int32_t var_280_1 = esi_1;
        if (esi_1 >= ebx)
        {
            break;
        }
        int16_t* ecx_2 = *(edi + (esi_1 << 2));
        uint32_t eax_1 = *ecx_2;
        if ((eax_1 == 0x2d || eax_1 == 0x2f))
        {
            uint8_t* edi_1 = (edi + (esi_1 << 2));
            int32_t ecx_4;
            if (_wcsicmp(&ecx_2[1], u"errorreport:none") != 0)
            {
                if (_wcsicmp((*edi_1 + 2), u"errorreport:prompt") == 0)
                {
                    ecx_4 = 1;
                    goto label_40bec6;
                }
                int32_t eax_13 = _wcsicmp((*edi_1 + 2), u"errorreport:queue");
                int32_t var_56c_5;
                int32_t eax_16;
                if (eax_13 != 0)
                {
                    eax_16 = _wcsicmp((*edi_1 + 2), u"errorreport:send");
                    if (eax_16 == 0)
                    {
                        var_56c_5 = 3;
                    }
                    else
                    {
                        uint32_t var_56c_8;
                        void* eax_23;
                        uint8_t* ecx_9;
                        if (_wcsicmp((*edi_1 + 2), u"errorreport:test") == 0)
                        {
                            data_43547b = 1;
                            var_56c_8 = (((ebx - esi_1) << 2) + 0xfffffffc);
                            eax_23 = &edi_1[4];
                            edi = var_27c;
                            ecx_9 = (edi + (esi_1 << 2));
                        }
                        else
                        {
                            if (_wcsicmp((*edi_1 + 2), u"errorreport:internal") != 0)
                            {
                                goto label_40beef;
                            }
                            data_43547a = 1;
                            var_56c_8 = (((ebx - esi_1) << 2) + 0xfffffffc);
                            edi = var_27c;
                            ecx_9 = (edi + (esi_1 << 2));
                            eax_23 = &ecx_9[4];
                        }
                        memmove(ecx_9, eax_23, var_56c_8);
                        ebx = (ebx - 1);
                        arg1 = ebx;
                        esi_1 = (esi_1 - 1);
                        int32_t var_280_3 = esi_1;
                    }
                }
                else
                {
                    var_56c_5 = 2;
                }
                if ((eax_13 == 0 || (eax_13 != 0 && eax_16 == 0)))
                {
                    ecx_4 = var_56c_5;
                    goto label_40bec6;
                }
            }
            else
            {
                ecx_4 = 0;
            label_40bec6:
                sub_40bda9(ecx_4);
                memmove(edi_1, &edi_1[4], (((ebx - esi_1) << 2) + 0xfffffffc));
                ebx = (ebx - 1);
                arg1 = ebx;
                esi_1 = (esi_1 - 1);
                int32_t var_280_2 = esi_1;
            label_40beef:
                edi = var_27c;
            }
        }
        esi_1 = (esi_1 + 1);
    }
    if (data_43547b != 0)
    {
        *nullptr = 0;
    }
    sub_40b5c8();
    if (data_424f68 == 0)
    {
        int16_t* esi_2 = *__p__wpgmptr();
        int32_t var_56c_10 = 0x20;
        if (sub_403b75(esi_2, 0x20) != 0)
        {
            int16_t* ebx_1 = esi_2;
            void* ecx_12 = &ebx_1[1];
            int32_t var_56c_11 = 2;
            wchar16* eax_31;
            do
            {
                eax_31 = *ebx_1;
                ebx_1 = &ebx_1[1];
            } while (eax_31 != 0);
            int32_t ecx_13;
            ecx_13 = (((((ebx_1 - ecx_12) >> 1) + 3) * 2) >> 0x20) != 0;
            int32_t eax_34 = sub_403b48();
            wcscpy_s(eax_34, (((ebx_1 - ecx_12) >> 1) + 3), &data_401074);
            var_578 = esi_2;
            wcscat_s(eax_34, (((ebx_1 - ecx_12) >> 1) + 3), var_578);
            wcscat_s(eax_34, (((ebx_1 - ecx_12) >> 1) + 3), &data_401074);
            esi_2 = eax_34;
            ebx = arg1;
            edi = var_27c;
        }
        data_424f68 = sub_40ecdb(esi_2);
    }
    int32_t var_570_9 = 2;
    signal(2, sub_40cdb4);
    int32_t (* var_574_4)() = sub_40cdb4;
    var_578 = 0xf;
    signal(var_578, var_574_4);
    uint32_t status = sub_40c388(ebx, edi);
    sub_40ce64();
    if (data_414020 == 0)
    {
        status = 1;
    }
    exit(status);
    /* no return */
}

int32_t sub_40c0d0(void* arg1 @ ebp)
{
    int32_t esp_51 = *(arg1 - 0x18);
    *(esp_51 - 4) = *(arg1 - 0x268);
    *(esp_51 - 8) = *(arg1 - 0x270);
    *(esp_51 - 0xc) = *(arg1 - 0x274);
    *(esp_51 - 0x10) = u"\n  Version 14.33.31629.0\n\n  E…";
    sub_40d1b2();
    *(esp_51 - 4) = 0x1c;
    *(esp_51 - 8) = (arg1 - 0x298);
    *(esp_51 - 0xc) = *(arg1 - 0x268);
    if (VirtualQuery() != 0)
    {
        *(esp_51 - 4) = 0x104;
        *(esp_51 - 8) = (arg1 - 0x224);
        *(esp_51 - 0xc) = *(arg1 - 0x294);
        if (GetModuleFileNameW() != 0)
        {
            *(esp_51 - 4) = (arg1 - 0x224);
            *(esp_51 - 8) = *(arg1 - 0x294);
            *(esp_51 - 0xc) = u" (%p) "%s"";
            sub_40d1b2();
        }
    }
    int32_t edi = *(arg1 - 0x264);
    *(esp_51 - 4) = edi;
    *(esp_51 - 8) = u"\n  NumberParameters         = %…";
    sub_40d1b2();
    *(esp_51 - 4);
    void* esp_19 = esp_51;
    int32_t esi = 0;
    if (edi != 0)
    {
        do
        {
            *(esp_19 - 4) = *((arg1 + (esi << 2)) - 0x260);
            *(esp_19 - 8) = esi;
            *(esp_19 - 0xc) = u"  ExceptionInformation[%2u] = %p…";
            sub_40d1b2();
            esi = (esi + 1);
        } while (esi < edi);
    }
    *(esp_19 - 4) = *(arg1 - 0x54c);
    *(esp_19 - 8) = *(arg1 - 0x558);
    *(esp_19 - 0xc) = *(arg1 - 0x550);
    *(esp_19 - 0x10) = *(arg1 - 0x55c);
    *(esp_19 - 0x14) = *(arg1 - 0x554);
    *(esp_19 - 0x18) = *(arg1 - 0x560);
    *(esp_19 - 0x1c) = *(arg1 - 0x4d8);
    *(esp_19 - 0x20) = *(arg1 - 0x4d4);
    *(esp_19 - 0x24) = *(arg1 - 0x4d0);
    *(esp_19 - 0x28) = *(arg1 - 0x49c);
    *(esp_19 - 0x2c) = *(arg1 - 0x4cc);
    *(esp_19 - 0x30) = *(arg1 - 0x4a8);
    *(esp_19 - 0x34) = *(arg1 - 0x4a4);
    *(esp_19 - 0x38) = *(arg1 - 0x4ac);
    *(esp_19 - 0x3c) = *(arg1 - 0x4c8);
    *(esp_19 - 0x40) = *(arg1 - 0x4bc);
    *(esp_19 - 0x44) = *(arg1 - 0x4c4);
    *(esp_19 - 0x48) = *(arg1 - 0x4b8);
    *(esp_19 - 0x4c) = *(arg1 - 0x4b0);
    *(esp_19 - 0x50) = *(arg1 - 0x4c0);
    *(esp_19 - 0x54) = *(arg1 - 0x4a0);
    *(esp_19 - 0x58) = *(arg1 - 0x4b4);
    *(esp_19 - 0x5c) = u"\nCONTEXT:\n  Eax    = %p  Esp  …";
    sub_40d1b2();
    sub_40d194();
    *(arg1 - 4) = 0xfffffffe;
    int32_t* fsbase;
    *fsbase = *(arg1 - 0x10);
    *esp_19;
    *(esp_19 + 4);
    *(esp_19 + 8);
    *(esp_19 + 0xc);
    *arg1;
    return 0x40e;
}

void* const sub_40c226()
{
    int32_t edi = 0;
    sub_40367d(sub_40ecdb(&data_4023a8), sub_40ecdb(&data_4023b0), 0);
    sub_40367d(sub_40ecdb(&data_4023b8), sub_40ecdb(&data_4023b0), 0);
    sub_40367d(sub_40ecdb(&data_4023c0), sub_40ecdb(&data_4023b0), 0);
    sub_40367d(sub_40ecdb(&data_4023c8), sub_40ecdb(&data_4023d0), 0);
    sub_40367d(sub_40ecdb(&data_4023d8), sub_40ecdb(&data_4023e0), 0);
    sub_40367d(sub_40ecdb(u"_NMAKE_VER"), sub_40ecdb(u"14.33.31629.0"), 2);
    sub_40367d(sub_40ecdb(u"MAKE"), sub_40ecdb(data_424f68), 0x4c);
    void* const i = u".SUFFIXES";
    int32_t esi_7 = 0;
    do
    {
        int32_t eax_14 = sub_40ecdb(i);
        int32_t* esi_8 = *(esi_7 + 0x401390);
        data_424738 = eax_14;
        wcscpy_s(0x424740, 0x400, *esi_8);
        sub_402eec();
        void* esi_9 = &esi_8[1];
        while (true)
        {
            int32_t eax_15 = *esi_9;
            if (eax_15 == 0)
            {
                break;
            }
            sub_402d01(wcscpy_s(0x424740, 0x400, eax_15));
            esi_9 = (esi_9 + 4);
        }
        if (edi == 0)
        {
            sub_4032fc();
        }
        sub_403416();
        edi = (edi + 1);
        esi_7 = (edi << 2);
        i = *(esi_7 + &data_401460);
    } while (i != 0);
    return i;
}

uint32_t __fastcall sub_40c388(int32_t arg1, int32_t arg2)
{
    int16_t* var_8 = nullptr;
    int32_t eax = sub_40ecdb(u"MAKEDIR");
    int32_t eax_1 = _wgetcwd(0, 0);
    if (eax_1 == 0)
    {
        sub_405b2c(0, 0x41b);
    }
    sub_40367d(eax, eax_1, 0x42);
    _wdupenv_s(&var_8, 0, u"MAKEFLAGS");
    int16_t* edi = var_8;
    if (edi != 0)
    {
        void* ecx_3 = u"MAKEFLAGS=                  ";
        int16_t i;
        do
        {
            i = *ecx_3;
            ecx_3 = (ecx_3 + 2);
        } while (i != 0);
        wcsncpy_s(u"                  ", (((ecx_3 - u"AKEFLAGS=                  ") >> 1) - 9), edi, 0xffffffff);
    }
    data_41450d = 1;
    int32_t eax_3 = sub_40ecdb(u"                  ");
    sub_40367d(sub_40ecdb(u"MAKEFLAGS"), eax_3, 6);
    if (edi != 0)
    {
        void* i_1;
        do
        {
            uint32_t ecx_7 = *edi;
            if (ecx_7 == 0)
            {
                break;
            }
            sub_40cb79(ecx_7, 1);
            i_1 = (edi + 1);
            edi = (i_1 + 1);
        } while (i_1 != 0xffffffff);
    }
    free(var_8);
    var_8 = nullptr;
    int32_t var_c;
    if ((_wgetenv_s(&var_c, 0, 0, u"NTMAKEENV") == 0 && var_c != 0))
    {
        data_435479 = 1;
    }
    sub_40c7a4((arg1 - 1), (arg2 + 4));
    if (data_424f60 == 0)
    {
        sub_405ca2();
    }
    if ((data_41450c & 2) == 0)
    {
        int32_t var_24_1 = sub_40c226();
        data_424f64 = u"tools.ini";
        if (sub_409200() != 0)
        {
            data_424724 = (data_424724 + 1);
            data_424f61 = 1;
            sub_40d23d();
            if (fclose(data_424f5c) == 0xffffffff)
            {
                int32_t var_24_3 = data_424f64;
                sub_405b2c(0, 0x424);
            }
        }
    }
    if (_wputenv_s(u"MAKEFLAGS", sub_40ecdb(u"                  ")) != 0)
    {
        sub_405b2c(0, 0x41f);
    }
    if (data_435470 == 0)
    {
        sub_40caa9();
    }
    sub_40c58e(sub_40c6d8());
    data_424730 = 0;
    sub_40e8bd();
    if ((data_41450c & 1) != 0)
    {
        sub_40d740();
        sub_40d7b1();
        sub_40d851();
    }
    int32_t eax_10 = data_434f7c;
    if (eax_10 != 0)
    {
        free(eax_10);
    }
    uint32_t eax_11 = sub_403d9c();
    _wchdir(eax_1);
    return eax_11;
}

int32_t __fastcall sub_40c58e(int32_t arg1)
{
    int32_t var_c = arg1;
    int32_t lpFileSize = arg1;
    void** i = data_435470;
    if (i != 0)
    {
        do
        {
            int16_t* ecx = i[1];
            if ((*ecx != 0x2d || (*ecx == 0x2d && ecx[1] != 0)))
            {
                int32_t eax_3 = sub_40ecdb(ecx);
                data_424f64 = eax_3;
                int32_t _Stream = _wfsopen(eax_3, u"rt,ccs=unicode", 0x20);
                data_424f5c = _Stream;
                if (_Stream == 0)
                {
                    int32_t var_1c_1 = data_424f64;
                    sub_405b2c(0, 0x41c);
                    _Stream = data_424f5c;
                }
                lpFileSize = 0;
                int32_t var_c_1 = 0;
                intptr_t hFile = _get_osfhandle(_fileno(_Stream));
                if ((hFile != 0xffffffff && GetFileSizeEx(hFile, &lpFileSize) != 0))
                {
                    int32_t lpFileSize_1 = lpFileSize;
                    int32_t eax_8 = ((var_c_1 + 0) - 1);
                    if ((eax_8 <= 0 && (eax_8 < 0 || (eax_8 >= 0 && (lpFileSize_1 - 1) <= 0x7ffffffd))))
                    {
                        setvbuf(data_424f5c, 0, 0, (lpFileSize_1 + 1));
                    }
                }
            }
            if ((*ecx == 0x2d && ecx[1] == 0))
            {
                data_424f64 = sub_40ecdb(u"STDIN");
                data_424f5c = __acrt_iob_func(0);
            }
            data_424724 = 0;
            data_424f61 = 0;
            sub_40d23d();
            int32_t eax_9 = __acrt_iob_func(0);
            FILE* _Stream_1 = data_424f5c;
            if ((_Stream_1 != eax_9 && fclose(_Stream_1) == 0xffffffff))
            {
                int32_t var_1c_7 = data_424f64;
                sub_405b2c(0, 0x424);
            }
            i = *i;
        } while (i != 0);
        i = data_435470;
    }
    return sub_405322(i);
}

wchar16* sub_40c6d8()
{
    int32_t ecx;
    int32_t var_8 = ecx;
    int32_t var_c = ecx;
    int32_t* esi = *__p__wenviron();
    wchar16* str = *esi;
    if (str != 0)
    {
        int32_t var_8_1 = 0;
        do
        {
            wchar16* eax_1 = wcschr(str, 0x3d);
            if ((eax_1 != 0 && _wcsnicmp(*esi, u"MAKEFLAGS", 8) != 0))
            {
                *eax_1 = 0;
                int16_t* ecx_2 = *esi;
                if (*ecx_2 != 0)
                {
                    int32_t eax_3 = sub_40ecdb(ecx_2);
                    int32_t ebx_1 = eax_3;
                    int32_t edx_1 = (eax_3 + 2);
                    int16_t j;
                    do
                    {
                        j = *eax_3;
                        eax_3 = (eax_3 + 2);
                    } while (j != 0);
                    _wcsupr_s(ebx_1, (((eax_3 - edx_1) >> 1) + 1));
                    int32_t eax_7 = sub_40ecdb(&eax_1[1]);
                    *eax_1 = 0x3d;
                    data_41450d = 0;
                    if (sub_40367d(ebx_1, eax_7, 4) == 0)
                    {
                        free(ebx_1);
                        free(eax_7);
                    }
                }
            }
            esi = &esi[1];
            str = *esi;
        } while (str != 0);
    }
    return str;
}

int32_t __fastcall sub_40c7a4(int32_t arg1, int32_t arg2)
{
    int32_t eax = arg1;
    int32_t var_2c = arg2;
    int32_t var_24 = eax;
    char var_2d = 0;
    int32_t edi = 0;
    if (eax != 0)
    {
        int32_t (* const var_14_1)() = __acrt_iob_func;
        int32_t (* const var_10_1)() = _wfopen_s;
        int32_t (* const var_c_1)(FILE* _Stream) = fclose;
        int32_t (* const var_1c_1)() = _wcsicmp;
        int32_t (* const var_20_1)() = wcsspn;
        wchar16* (* const var_28_1)(wchar16 const* str, wchar16 ch) = wcschr;
        while (true)
        {
            int16_t* str = *(arg2 + (edi << 2));
            uint32_t eax_1 = *str;
            uint32_t ecx_1;
            if (eax_1 == 0x40)
            {
                eax = sub_405994(&str[1]);
            label_40ca7d:
                arg2 = var_2c;
            label_40ca81:
                ecx_1 = var_2d;
            label_40ca85:
                edi = (edi + 1);
                if (edi < var_24)
                {
                    continue;
                }
                if ((edi >= var_24 && ecx_1 == 0))
                {
                    break;
                }
            }
            else
            {
                if ((eax_1 != 0x2d && eax_1 != 0x2f))
                {
                    wchar16* eax_2 = wcschr(str, 0x3d);
                    if (eax_2 == 0)
                    {
                        eax = sub_40cea2(str);
                        if (*str != 0)
                        {
                            int32_t* eax_8 = sub_40ec89();
                            int32_t eax_10;
                            if (wcschr(str, 0x20) == 0)
                            {
                                eax_10 = sub_40ecdb(str);
                            }
                            else
                            {
                                eax_10 = sub_40ed1f(str);
                            }
                            eax_8[1] = eax_10;
                            eax = sub_40ede0(&data_424710, eax_8);
                        }
                    }
                    else
                    {
                        if (eax_2 == str)
                        {
                            sub_405b2c(0, 0x427);
                        }
                        *eax_2 = 0;
                        void* eax_3 = &eax_2[-1];
                        while (true)
                        {
                            uint32_t ecx_4 = *eax_3;
                            if ((ecx_4 != 0x20 && ecx_4 != 9))
                            {
                                break;
                            }
                            eax_3 = (eax_3 - 2);
                        }
                        data_41450d = 1;
                        *(eax_3 + 2) = 0;
                        int16_t* eax_5 = sub_40ecdb(&eax_2[(1 + wcsspn(&eax_2[1], &data_40104c))]);
                        eax = sub_40367d(sub_40ecdb(&str[wcsspn(str, &data_40104c)]), eax_5, 2);
                    }
                    arg2 = var_2c;
                    *(arg2 + (edi << 2)) = 0;
                    goto label_40ca81;
                }
                void* esi_5 = &str[1];
                eax = _wcsicmp(esi_5, u"help");
                if (eax != 0)
                {
                    if (*esi_5 == 0)
                    {
                        goto label_40ca7d;
                    }
                    while (true)
                    {
                        eax = _wcsicmp(esi_5, u"nologo");
                        if (eax == 0)
                        {
                            void* const ecx_10;
                            ecx_10 = *(esi_5 + 4);
                            eax = sub_40cb79(ecx_10, 1);
                            break;
                        }
                        ecx_1 = *esi_5;
                        if (ecx_1 == 0x3f)
                        {
                            arg2 = var_2c;
                            ecx_1 = 1;
                            var_2d = 1;
                            break;
                        }
                        if ((ecx_1 != 0x66 && ecx_1 != 0x46))
                        {
                            if ((ecx_1 != 0x78 && ecx_1 != 0x58))
                            {
                                eax = sub_40cb79(ecx_1, 1);
                                esi_5 = (esi_5 + 2);
                                if (*esi_5 == 0)
                                {
                                    break;
                                }
                                continue;
                            }
                            void* esi_6 = (esi_5 + 2);
                            int16_t eax_11 = *esi_6;
                            int16_t ecx_11 = eax_11;
                            if (eax_11 == 0)
                            {
                                edi = (edi + 1);
                                int16_t eax_12;
                                if (edi < var_24)
                                {
                                    esi_6 = *(var_2c + (edi << 2));
                                    eax_12 = *esi_6;
                                    ecx_11 = eax_12;
                                }
                                if ((edi >= var_24 || (edi < var_24 && eax_12 == 0)))
                                {
                                    sub_405b2c(0, 0x426);
                                    ecx_11 = *esi_6;
                                }
                            }
                            if ((ecx_11 != 0x2d || (ecx_11 == 0x2d && *(esi_6 + 2) != 0)))
                            {
                                FILE* _Stream;
                                if (var_10_1(&_Stream, esi_6, &data_402498) != 0)
                                {
                                    void* var_44_1 = esi_6;
                                    sub_405b2c(0, 0x418);
                                }
                                sub_40d10c(_Stream);
                                eax = var_c_1(_Stream);
                            }
                            if ((ecx_11 == 0x2d && *(esi_6 + 2) == 0))
                            {
                                eax = sub_40d10c(var_14_1(1));
                            }
                            break;
                        }
                        void* ebx_2 = (esi_5 + 2);
                        if (*ebx_2 == 0)
                        {
                            edi = (edi + 1);
                            if (edi < var_24)
                            {
                                ebx_2 = *(var_2c + (edi << 2));
                            }
                            if ((edi >= var_24 || (edi < var_24 && *ebx_2 == 0)))
                            {
                                sub_405b2c(0, 0x425);
                            }
                        }
                        int32_t* eax_15 = sub_40ec89();
                        eax_15[1] = sub_40ecdb(ebx_2);
                        eax = sub_40ede0(&data_435470, eax_15);
                        break;
                    }
                    if (eax == 0)
                    {
                        goto label_40ca7d;
                    }
                    goto label_40ca85;
                }
            }
            sub_405cce();
            exit(0);
            /* no return */
        }
    }
    return eax;
}

int32_t sub_40caa9()
{
    __security_cookie;
    int32_t eax_2 = _waccess(u"makefile", 4);
    if (eax_2 == 0)
    {
        int32_t* eax_3 = sub_40ec89();
        eax_2 = sub_40ecdb(u"makefile");
        eax_3[1] = eax_2;
        data_435470 = eax_3;
    }
    else
    {
        void* esi_1 = data_424710;
        if (esi_1 != 0)
        {
            wchar16* str = *(esi_1 + 4);
            eax_2 = _waccess(str, 4);
            if (eax_2 == 0)
            {
                int16_t* eax_4 = wcsrchr(str, 0x2e);
                void var_468;
                void var_218;
                if (eax_4 != 0)
                {
                    eax_2 = sub_40e456(&var_218, 0x101, str, eax_4, &var_468);
                }
                if ((eax_4 == 0 || (eax_4 != 0 && eax_2 == 0)))
                {
                    int32_t* ecx_4 = data_424710;
                    eax_2 = *ecx_4;
                    data_424710 = eax_2;
                    data_435470 = ecx_4;
                }
            }
        }
        else if ((data_41450c & 1) == 0)
        {
            eax_2 = sub_405b2c(0, 0x428);
        }
    }
    CookieCheckFunction(eax_2);
    return eax_2;
}

uint32_t __fastcall sub_40cb79(int32_t arg1, char arg2)
{
    char* esi = &data_41450e;
    char var_c = 0;
    uint32_t edi = towupper(arg1);
    uint32_t eax_2 = edi;
    if (eax_2 > 0x4c)
    {
        char ebx_1;
        if (eax_2 == 0x52)
        {
            var_c = 2;
        label_40cbdf:
            ebx_1 = data_41450c;
            esi = &data_41450c;
        }
        if ((eax_2 <= 0x52 && eax_2 != 0x52))
        {
            uint32_t temp2_1 = eax_2;
            eax_2 = (eax_2 - 0x4e);
            if (temp2_1 == 0x4e)
            {
                var_c = 4;
                goto label_40cce4;
            }
            uint32_t temp5_1 = eax_2;
            eax_2 = (eax_2 - 1);
            if (temp5_1 != 1)
            {
                uint32_t temp9_1 = eax_2;
                eax_2 = (eax_2 - 1);
                if (temp9_1 == 1)
                {
                    var_c = 1;
                    goto label_40cbdf;
                }
                uint32_t temp12_1 = eax_2;
                eax_2 = (eax_2 - 1);
                if (temp12_1 != 1)
                {
                    goto label_40ccb7;
                }
                var_c = 8;
                goto label_40cbdf;
            }
            data_424735 = 1;
        }
        if (eax_2 > 0x52)
        {
            uint32_t temp0_1 = eax_2;
            eax_2 = (eax_2 - 0x53);
            if (temp0_1 != 0x53)
            {
                uint32_t temp1_1 = eax_2;
                eax_2 = (eax_2 - 1);
                if (temp1_1 == 1)
                {
                    var_c = 0x10;
                    goto label_40cbdf;
                }
                uint32_t temp4_1 = eax_2;
                eax_2 = (eax_2 - 1);
                if (temp4_1 == 1)
                {
                    var_c = 0x40;
                    goto label_40cce4;
                }
                uint32_t temp8_1 = eax_2;
                eax_2 = (eax_2 - 4);
                if (temp8_1 == 4)
                {
                    var_c = 0x40;
                    goto label_40cbdf;
                }
            label_40ccb7:
                uint32_t var_20_1 = arg1;
                eax_2 = sub_405b2c(0, 0x429);
                goto label_40cce4;
            }
            var_c = 8;
        label_40cce4:
            ebx_1 = data_41450e;
        }
        if ((eax_2 > 0x52 || eax_2 == 0x52))
        {
            void* ecx_1;
            if (data_4353ac != 0)
            {
                ecx_1 = data_4353a8;
            }
            else
            {
                eax_2 = sub_40b534(u"MAKEFLAGS");
                data_4353ac = eax_2;
                ecx_1 = *(eax_2 + 8);
                data_4353a8 = ecx_1;
            }
            if (arg2 != 0)
            {
                ebx_1 = (ebx_1 | var_c);
                *esi = ebx_1;
                if (edi == 0x51)
                {
                    *esi = (ebx_1 | 0x20);
                }
                if (wcschr(*(ecx_1 + 4), edi) == 0)
                {
                    int16_t* eax_10 = wcschr(*(data_4353a8 + 4), 0x20);
                    if (eax_10 != 0)
                    {
                        *eax_10 = edi;
                    }
                }
            label_40cd91:
                eax_2 = _wputenv_s(u"MAKEFLAGS", sub_40ecdb(u"                  "));
                if (eax_2 != 0)
                {
                    eax_2 = sub_405b2c(data_424724, 0x41f);
                }
            }
            else if (esi == 0x41450e)
            {
                *esi = ((!var_c) & ebx_1);
                wchar16* eax_12 = wcschr(*(ecx_1 + 4), edi);
                if (eax_12 != 0)
                {
                    wchar16 i;
                    do
                    {
                        i = eax_12[1];
                        *eax_12 = i;
                        eax_12 = &eax_12[1];
                    } while (i != 0);
                }
                goto label_40cd91;
            }
        }
    }
    else
    {
        if (eax_2 == 0x4c)
        {
            var_c = 0x80;
        label_40cbd8:
            data_424f60 = 1;
            goto label_40cbdf;
        }
        if (eax_2 > 0x44)
        {
            uint32_t temp3_1 = eax_2;
            eax_2 = (eax_2 - 0x45);
            if (temp3_1 == 0x45)
            {
                var_c = 4;
                goto label_40cbdf;
            }
            int32_t eax_3 = (eax_2 - 1);
            eax_2 = (eax_3 - 1);
            if (eax_3 == 1)
            {
                data_424f63 = 1;
            }
            else
            {
                int32_t eax_4 = (eax_2 - 1);
                eax_2 = (eax_4 - 1);
                if (eax_4 == 1)
                {
                    var_c = 2;
                    goto label_40cce4;
                }
                int32_t eax_5 = (eax_2 - 1);
                eax_2 = (eax_5 - 1);
                if (eax_5 != 1)
                {
                    goto label_40ccb7;
                }
                data_424737 = 1;
            }
        }
        else
        {
            if (eax_2 == 0x44)
            {
                var_c = 1;
                goto label_40cce4;
            }
            uint32_t temp7_1 = eax_2;
            eax_2 = (eax_2 - 0x20);
            if (temp7_1 != 0x20)
            {
                uint32_t temp11_1 = eax_2;
                eax_2 = (eax_2 - 0x21);
                if (temp11_1 == 0x21)
                {
                    var_c = 0x10;
                    goto label_40cce4;
                }
                uint32_t temp14_1 = eax_2;
                eax_2 = (eax_2 - 1);
                if (temp14_1 != 1)
                {
                    uint32_t temp15_1 = eax_2;
                    eax_2 = (eax_2 - 1);
                    if (temp15_1 != 1)
                    {
                        goto label_40ccb7;
                    }
                    var_c = 0x20;
                    goto label_40cbd8;
                }
                data_424736 = 1;
            }
        }
    }
    return eax_2;
}

int32_t sub_40cdb4()
{
    signal(2, 1);
    signal(0xf, 1);
    if ((data_435478 != 0 && ((data_41450e & 4) == 0 && (data_41450c & 0x10) == 0)))
    {
        int32_t eax_1 = data_424f54;
        if ((eax_1 != 0 && _waccess(eax_1, 0) != 0))
        {
            void** i = data_42471c;
            int32_t edi_1 = data_424f54;
            int32_t eax_3;
            if (i != 0)
            {
                do
                {
                    eax_3 = _wcsicmp(i[1], edi_1);
                    if (eax_3 == 0)
                    {
                        break;
                    }
                    i = *i;
                } while (i != 0);
                if (eax_3 != 0)
                {
                    edi_1 = data_424f54;
                }
            }
            if ((((i != 0 && eax_3 != 0) || i == 0) && _wunlink(edi_1) == 0))
            {
                int32_t var_c_4 = data_424f54;
                sub_405b2c(data_424724, 0xfa8);
            }
        }
    }
    sub_405b2c(0, 0x422);
    /* tailcall */
    return sub_40ce64();
}

int32_t sub_40ce64()
{
    int32_t eax = _fcloseall();
    for (void** i = data_435474; i != 0; i = *i)
    {
        eax = _wunlink(i[1]);
        if ((data_41450e & 4) != 0)
        {
            int32_t var_8_2 = i[1];
            sub_40d1b2(u"\tdel %s\n");
            eax = sub_40d194();
        }
    }
    return eax;
}

int16_t* __fastcall sub_40cea2(int16_t* arg1)
{
    int16_t* edx = arg1;
    char ebx = 0;
    int16_t i;
    do
    {
        i = *edx;
        edx = &edx[1];
    } while (i != 0);
    int16_t* i_1 = &arg1[(-1 + ((edx - &edx[1]) >> 1))];
    if ((*arg1 == 0x22 && *i_1 == 0x22))
    {
        ebx = 1;
        goto label_40cede;
    }
    for (; i_1 > arg1; i_1 = (i_1 - 2))
    {
        uint32_t edx_3 = *i_1;
        if ((edx_3 != 0x20 && edx_3 != 0x2e))
        {
            break;
        }
    label_40cede:
    }
    if (ebx != 0)
    {
        i_1 = &i_1[1];
        *i_1 = 0x22;
    }
    i_1[1] = 0;
    return i_1;
}

void* __fastcall sub_40cef8(int32_t arg1)
{
    __security_cookie;
    void* esi = nullptr;
    HINSTANCE hModule;
    if (data_438ee0 != 0)
    {
        hModule = data_438ee4;
    }
    else
    {
        void var_414;
        void var_214;
        void var_10;
        _wsplitpath_s(*__p__wpgmptr(), &var_10, 3, &var_414, 0x100, &var_214, 0x100, 0, 0);
        void var_61c;
        _wmakepath_s(&var_61c, 0x104, &var_10, &var_414, 0, 0);
        int32_t eax_3 = wcsncat_s(&var_214, 0x100, u"UI.DLL", 0xffffffff);
        uint32_t eax_4;
        if (eax_3 == 0)
        {
            eax_4 = sub_40b652(&var_61c, &var_214);
            if (eax_4 >= 0)
            {
                hModule = data_438ee4;
            }
        }
        if ((eax_3 != 0 || (eax_3 == 0 && eax_4 < 0)))
        {
            hModule = nullptr;
            data_438ee4 = 0;
        }
        data_438ee0 = 1;
    }
    HRSRC hResInfo = FindResourceExW(hModule, 6, ((arg1 >> 4) + 1), data_438ee8);
    if (hResInfo != 0)
    {
        int32_t* edx_2 = LoadResource(hModule, hResInfo);
        if (edx_2 != 0)
        {
            int32_t i_1 = (arg1 & 0xf);
            if (i_1 != 0)
            {
                int32_t i;
                do
                {
                    edx_2 = ((edx_2 + (*edx_2 << 1)) + 2);
                    i = i_1;
                    i_1 = (i_1 - 1);
                } while (i != 1);
            }
            uint32_t esi_1 = *edx_2;
            int32_t esi_2 = (-esi_1);
            esi = ((esi_2 - esi_2) & (edx_2 + 2));
        }
    }
    CookieCheckFunction(esi);
    return esi;
}

int32_t sub_40d019() __pure
{
    return 0x4386b8;
}

int32_t sub_40d01f(int32_t arg1, int32_t arg2)
{
    return __stdio_common_vswscanf((data_4386b8 | 1), data_4386bc, arg1, 0xffffffff, arg2, 0, &arg_c);
}

BOOL __fastcall sub_40d049(FILE* arg1)
{
    FILE* lpMode = arg1;
    intptr_t eax_1 = _get_osfhandle(_fileno(arg1));
    BOOL eax_3;
    if ((GetFileType(eax_1) & 0xffff7fff) != 2)
    {
        eax_3 = 0;
    }
    else
    {
        eax_3 = GetConsoleMode(eax_1, &lpMode) != 0;
    }
    return eax_3;
}

BOOL sub_40d088()
{
    data_43547d = sub_40d049(__acrt_iob_func(1));
    BOOL eax_3 = sub_40d049(__acrt_iob_func(2));
    data_43547c = eax_3;
    return eax_3;
}

int32_t sub_40d0b3()
{
    if (data_43547c == 0)
    {
        return fflush(__acrt_iob_func(2));
    }
    return 0;
}

int32_t sub_40d0d1(int32_t arg1)
{
    /* tailcall */
    return sub_40d14a(arg1, &arg_8);
}

uint32_t sub_40d0e0()
{
    int16_t eax;
    if (data_43547c == 0)
    {
        eax = fputwc(0xa, __acrt_iob_func(2));
    }
    else
    {
        eax = _putwch(0xa);
    }
    return eax;
}

BOOL __fastcall sub_40d10c(FILE* arg1)
{
    int32_t eax_1 = _fileno(__acrt_iob_func(2));
    _dup2(_fileno(arg1), eax_1);
    BOOL eax_4 = sub_40d049(__acrt_iob_func(2));
    data_43547c = eax_4;
    return eax_4;
}

int32_t __fastcall sub_40d14a(int32_t arg1, int32_t arg2)
{
    int32_t eax;
    if (data_43547c == 0)
    {
        int32_t eax_1 = __acrt_iob_func(2);
        eax = __stdio_common_vfwprintf(data_4386c8, data_4386cc, eax_1, arg1, 0, arg2);
    }
    else
    {
        eax = __conio_common_vcwprintf(data_4386c8, data_4386cc, arg1, 0, arg2);
    }
    return eax;
}

int32_t sub_40d194()
{
    if (data_43547d == 0)
    {
        return fflush(__acrt_iob_func(1));
    }
    return 0;
}

int32_t sub_40d1b2(int32_t arg1)
{
    /* tailcall */
    return sub_40d1ed(arg1, &arg_8);
}

uint32_t sub_40d1c1()
{
    int16_t eax;
    if (data_43547d == 0)
    {
        eax = fputwc(0xa, __acrt_iob_func(1));
    }
    else
    {
        eax = _putwch(0xa);
    }
    return eax;
}

int32_t __fastcall sub_40d1ed(int32_t arg1, int32_t arg2)
{
    int32_t eax;
    if (data_43547d == 0)
    {
        int32_t eax_1 = __acrt_iob_func(1);
        eax = __stdio_common_vfwprintf(data_4386c8, data_4386cc, eax_1, arg1, 0, arg2);
    }
    else
    {
        eax = __conio_common_vcwprintf(data_4386c8, data_4386cc, arg1, 0, arg2);
    }
    return eax;
}

int32_t sub_40d237() __pure
{
    return 0x4386c8;
}

int32_t sub_40d23d()
{
    void* eax = data_414028;
    data_424f62 = 1;
    *(eax + 0x435391) = 0x17;
    data_414028 = (eax + 2);
    if ((eax + 2) >= 0x10)
    {
        ___report_rangecheckfailure();
        breakpoint();
    }
    *(eax + 0x435392) = 0;
    data_424730 = data_424724;
    int32_t eax_3;
    uint32_t ecx;
    uint32_t i_1;
    eax_3 = sub_40a4ad(ecx, 0);
    void* edx_1 = data_414028;
    i_1 = eax_3;
    int16_t ebx;
    *ebx[1] = 0;
    char var_5 = i_1;
    ebx = *(edx_1 + 0x435390);
    if (ebx != 0x17)
    {
        do
        {
            if ((ebx & 0x40) != 0)
            {
                int32_t eax_5 = (*(edx_1 + 0x435390) & 0xf);
                data_414028 = (edx_1 - 1);
                eax_3 = &data_401580[eax_5]();
            }
            if ((((ebx & 0x40) == 0 && (ebx & 0x10) != 0) && ebx != i_1))
            {
                int32_t var_20_1 = 0x424740;
                eax_3 = sub_405b2c(data_424730, 0x409);
            }
            if (((ebx & 0x40) != 0 || (((ebx & 0x40) == 0 && (ebx & 0x10) != 0) && ebx != i_1)))
            {
                edx_1 = data_414028;
            }
            if ((ebx & 0x40) == 0)
            {
                if (((ebx & 0x10) != 0 && ebx == i_1))
                {
                    i_1 = *(edx_1 + 0x43538f);
                    edx_1 = (edx_1 - 1);
                    data_414028 = edx_1;
                    if ((i_1 & 0x40) != 0)
                    {
                        data_414028 = (edx_1 - 1);
                        i_1 = &data_401580[(i_1 & 0xf)]();
                        edx_1 = data_414028;
                    }
                    eax_3 = data_424724;
                    data_424730 = eax_3;
                    if (*ebx[1] == 0)
                    {
                        edx_1 = *(edx_1 + 0x435390);
                        char eax_10;
                        eax_10 = sub_40a4ad(i_1, edx_1);
                        edx_1 = data_414028;
                        i_1 = eax_10;
                        eax_3 = data_424724;
                        var_5 = i_1;
                        data_424730 = eax_3;
                    }
                    else
                    {
                        if (data_424740 == 0xa)
                        {
                            eax_3 = (eax_3 - 1);
                            data_424730 = eax_3;
                        }
                        i_1 = *ebx[1];
                        *ebx[1] = 0;
                        var_5 = i_1;
                    }
                }
                if ((ebx & 0x10) == 0)
                {
                    uint32_t esi_1 = ebx;
                    eax_3 = *(((i_1 & 0xf) + (esi_1 << 3)) + 0x401540);
                    if ((eax_3 & 0x20) != 0)
                    {
                        int32_t var_20_2 = 0x424740;
                        i_1 = sub_405b2c(data_424730, (eax_3 + 0x3e8));
                        edx_1 = data_414028;
                    }
                    edx_1 = (edx_1 - 1);
                    data_414028 = edx_1;
                    if (eax_3 < 0)
                    {
                        if (*ebx[1] == 0)
                        {
                            edx_1 = ebx;
                            char eax_15 = sub_40a4ad(i_1, edx_1);
                            edx_1 = data_414028;
                            *ebx[1] = eax_15;
                        }
                        eax_3 = ((eax_3 & 0xf) + *(((*ebx[1] & 0xf) + (esi_1 << 3)) + 0x401520));
                    }
                    char* esi_2 = &data_4014d0[eax_3];
                    i_1 = *esi_2;
                    if (i_1 != 0)
                    {
                        uint32_t i;
                        do
                        {
                            eax_3 = esi_2[i_1];
                            edx_1 = (edx_1 + 1);
                            *(edx_1 + 0x435390) = eax_3;
                            i = i_1;
                            i_1 = (i_1 - 1);
                        } while (i != 1);
                        data_414028 = edx_1;
                    }
                }
            }
            if ((((ebx & 0x40) != 0 || (((ebx & 0x40) == 0 && (ebx & 0x10) != 0) && ebx != i_1)) || ((ebx & 0x40) == 0 && (ebx & 0x10) == 0)))
            {
                i_1 = var_5;
            }
            ebx = *(edx_1 + 0x435390);
        } while (ebx != 0x17);
    }
    data_414028 = (edx_1 - 1);
    return eax_3;
}

int32_t __fastcall sub_40d421(int32_t arg1, int16_t* arg2)
{
    int16_t i;
    do
    {
        i = *arg2;
        arg2 = &arg2[1];
    } while (i != 0);
    int32_t ecx = (arg1 + ((arg2 - &arg2[1]) >> 1));
    if (ecx > 0x28)
    {
        sub_40d1b2(u"\n\t\t\t");
        ecx = 0;
    }
    return ecx;
}

uint32_t __thiscall sub_40d450(int32_t arg1, int32_t arg2, int32_t arg3)
{
    __security_cookie;
    uint32_t eax_5;
    int32_t edx;
    if ((arg2 | arg3) == 0)
    {
        int32_t var_70 = edx;
        int32_t var_74 = 0x20;
        int32_t var_78_1 = (arg1 + 0x1a);
        eax_5 = sub_405c06(6);
    }
    else
    {
        void var_60;
        eax_5 = FileTimeToLocalFileTime(&arg2, &var_60);
        if (eax_5 != 0)
        {
            void var_58;
            eax_5 = FileTimeToSystemTime(&var_60, &var_58);
            if (eax_5 != 0)
            {
                void lpDateStr;
                eax_5 = GetDateFormatW(0x400, 0, &var_58, u"ddd, MMM dd yyyy", &lpDateStr, 0x14);
                if (eax_5 != 0)
                {
                    void lpTimeStr;
                    eax_5 = GetTimeFormatW(0x400, 0, &var_58, u"HH:mm:ss", &lpTimeStr, 0xc);
                    if (eax_5 != 0)
                    {
                        int32_t var_70_3 = edx;
                        int32_t var_74_5 = 0x20;
                        int32_t var_78_2 = arg1;
                        void* var_7c_3 = &lpTimeStr;
                        void* var_80_1 = &lpDateStr;
                        eax_5 = sub_405c06(4);
                    }
                }
            }
        }
    }
    CookieCheckFunction(eax_5);
    return eax_5;
}

uint32_t __fastcall sub_40d50a(void** arg1, int32_t* arg2)
{
    __security_cookie;
    void** i = arg1;
    void** i_1 = arg1;
    int32_t* var_274 = arg2;
    uint32_t j = sub_405c06(0xc);
    uint32_t j_3 = 0;
    uint32_t j_4 = 0;
    while (i != 0)
    {
        wchar16* eax_2 = wcschr(i[1], 0x24);
        int32_t ecx_1 = i[1];
        int32_t* var_268;
        void var_25c;
        if (eax_2 == 0)
        {
            int32_t eax_10 = wcspbrk(ecx_1, &data_401044);
            if (eax_10 == 0)
            {
                int32_t var_298_11 = i[1];
                sub_40d1b2(&data_40251c);
                j = sub_40d421(j_3, i[1]);
                j_3 = j;
            }
            else
            {
                j = sub_408256(i[1], &var_25c, &var_268);
                if (j != 0)
                {
                    do
                    {
                        int32_t eax_11 = sub_4114ed(i[1], j);
                        int32_t var_298_9 = eax_11;
                        sub_40d1b2(&data_40251c);
                        j_3 = sub_40d421(j_3, eax_11);
                        free(eax_11);
                        j = sub_4083e1(&var_25c, var_268);
                    } while (j != 0);
                }
            }
            if ((eax_10 == 0 || (eax_10 != 0 && j != 0)))
            {
                j_4 = j_3;
            }
        }
        else
        {
            int32_t var_26c = 0;
            int32_t var_264 = 0;
            int32_t var_278 = ecx_1;
            void var_284;
            sub_40f9d0(&var_284, &var_278, 1, &var_274, 0, &var_264);
            int32_t eax_3 = var_264;
            var_264 = 0;
            int32_t j_1 = wcstok_s(eax_3, &data_40104c, &var_26c);
            if (j_1 != 0)
            {
                uint32_t j_5 = j_4;
                do
                {
                    if (wcspbrk(j_1, &data_401044) == 0)
                    {
                        int32_t j_2 = j_1;
                        sub_40d1b2(&data_40251c);
                        j_5 = sub_40d421(j_5, j_1);
                    }
                    else
                    {
                        for (uint32_t k = sub_408256(j_1, &var_25c, &var_268); k != 0; k = sub_4083e1(&var_25c, var_268))
                        {
                            int32_t eax_6 = sub_4114ed(j_1, k);
                            int32_t var_298_4 = eax_6;
                            sub_40d1b2(&data_40251c);
                            j_5 = sub_40d421(j_5, eax_6);
                            free(eax_6);
                        }
                    }
                    j_1 = wcstok_s(0, &data_40104c, &var_26c);
                } while (j_1 != 0);
                j_4 = j_5;
                i = i_1;
            }
            j = free(eax_3);
            j_3 = j_4;
        }
        i = *i;
        i_1 = i;
    }
    CookieCheckFunction(j);
    return j;
}

int32_t sub_40d740()
{
    sub_405c06(8);
    int32_t* i = &data_434f90;
    do
    {
        for (void** j = *i; j != 0; j = *j)
        {
            void* eax_1 = j[2];
            if ((eax_1 != 0 && *(eax_1 + 4) != 0))
            {
                int32_t var_10_1 = *(eax_1 + 4);
                int32_t var_14_1 = j[1];
                sub_405c06(0xe);
                for (void** k = *j[2]; k != 0; k = *k)
                {
                    if (k[1] != 0)
                    {
                        int32_t var_10_2 = k[1];
                        sub_40d1b2(u"\t\t%s\n");
                    }
                }
            }
        }
        i = &i[1];
    } while (i < 0x435390);
    sub_40d1c1();
    /* tailcall */
    return sub_40d194();
}

int32_t sub_40d7b1()
{
    sub_405c06(7);
    void** i = data_424714;
    if (i != 0)
    {
        do
        {
            void* const eax_1 = u"%s::";
            if (i[5] == 0)
            {
                eax_1 = &data_40253c;
            }
            int32_t var_c_1 = i[2];
            sub_40d1b2(eax_1);
            sub_405c06(0xa);
            void** edi_1 = i[3];
            if (edi_1 != 0)
            {
                int32_t var_c_2 = edi_1[1];
                void* const var_10_2 = &data_402544;
                while (true)
                {
                    sub_40d1b2(var_10_2);
                    edi_1 = *edi_1;
                    if (edi_1 == 0)
                    {
                        break;
                    }
                    var_c_2 = edi_1[1];
                    var_10_2 = u"\t\t\t%s\n";
                }
            }
            sub_40d1c1();
            i = *i;
        } while (i != 0);
    }
    void* const __saved_edi = u".SUFFIXES";
    sub_40d1b2(u"%s: ");
    for (void** i_1 = data_424720; i_1 != 0; i_1 = *i_1)
    {
        __saved_edi = i_1[1];
        sub_40d1b2(&data_40251c);
    }
    sub_40d1c1();
    /* tailcall */
    return sub_40d194();
}

int32_t sub_40d851()
{
    sub_405c06(9);
    void* i = nullptr;
    void* i_1 = nullptr;
    do
    {
        void** j = *(i + 0x424510);
        void** j_1 = j;
        if (j != 0)
        {
            do
            {
                void* eax_2;
                eax_2 = *(*(j[6] + 4) + 0x10);
                eax_2 = (eax_2 & 0x20);
                uint32_t eax_3 = eax_2;
                int32_t eax_4 = (-eax_3);
                int32_t var_24_1 = (((eax_4 - eax_4) & 0x1a) + 0x20);
                int32_t var_28_1 = j[1];
                sub_40d1b2(u"%s:%c");
                int32_t eax_8 = j[1];
                void** k = j[6];
                data_424f48 = eax_8;
                data_424f54 = eax_8;
                data_424f58 = eax_8;
                if (k != 0)
                {
                    do
                    {
                        int32_t* edi_1 = k[1];
                        sub_405c06(0xb);
                        void* const esi_1 = u"dinsb";
                        int32_t eax_9 = 1;
                        int32_t var_14_1 = 1;
                        do
                        {
                            if ((edi_1[4] & eax_9) != 0)
                            {
                                uint32_t var_24_2 = *esi_1;
                                sub_40d1b2(u"-%c ");
                                eax_9 = var_14_1;
                            }
                            eax_9 = (eax_9 * 2);
                            esi_1 = (esi_1 + 2);
                            var_14_1 = eax_9;
                        } while (eax_9 < 0x10);
                        sub_40d50a(*edi_1, edi_1[1]);
                        sub_405c06(0xa);
                        void** edi_2 = edi_1[2];
                        if (edi_2 == 0)
                        {
                            sub_40d1c1();
                        }
                        else
                        {
                            void* const var_28_2;
                            int32_t var_24_3;
                            if (edi_2[1] != 0)
                            {
                                var_24_3 = edi_2[1];
                                var_28_2 = &data_402544;
                                goto label_40d938;
                            }
                            while (true)
                            {
                                edi_2 = *edi_2;
                                if (edi_2 == 0)
                                {
                                    break;
                                }
                                if (edi_2[1] != 0)
                                {
                                    var_24_3 = edi_2[1];
                                    var_28_2 = u"\t\t\t%s\n";
                                label_40d938:
                                    sub_40d1b2(var_28_2);
                                }
                            }
                        }
                        k = *k;
                    } while (k != 0);
                    j = j_1;
                }
                j = *j;
                j_1 = j;
                sub_40d1c1();
            } while (j != 0);
            i = i_1;
        }
        i = (i + 4);
        i_1 = i;
    } while (i < 0x200);
    sub_40d1c1();
    int32_t eax_11 = sub_40d194();
    data_424f48 = 0;
    data_424f54 = 0;
    data_424f58 = 0;
    return eax_11;
}

uint32_t __stdcall sub_40d9a6(char arg1)
{
    char* edi = data_435690;
    int32_t eax;
    eax = *edi;
    data_435690 = &edi[0xfffffff8];
    if (eax != 0x16)
    {
        if (eax != 0x17)
        {
        label_40db9c:
            eax = 0;
        }
        else
        {
            if (edi[0xfffffff8] != eax)
            {
                goto label_40db9c;
            }
            int16_t* ecx_6 = *(edi + 4);
            int16_t* eax_11 = *(edi - 4);
            int32_t ecx_8;
            while (true)
            {
                int16_t edx = *eax_11;
                int16_t temp2_1 = *ecx_6;
                bool c_2 = edx < temp2_1;
                if (edx == temp2_1)
                {
                    int16_t temp5_1;
                    if (edx != 0)
                    {
                        edx = eax_11[1];
                        temp5_1 = ecx_6[1];
                        c_2 = edx < temp5_1;
                        if (edx == temp5_1)
                        {
                            eax_11 = &eax_11[2];
                            ecx_6 = &ecx_6[2];
                            if (edx != 0)
                            {
                                continue;
                            }
                        }
                    }
                    if ((edx == 0 || (edx != 0 && edx == temp5_1)))
                    {
                        ecx_8 = 0;
                        break;
                    }
                }
                ecx_8 = ((ecx_6 - ecx_6) | 1);
                break;
            }
            uint32_t eax_12 = arg1;
            if (eax_12 == 6)
            {
                eax = ecx_8 != 0;
            }
            else if (eax_12 == 7)
            {
                eax = ecx_8 == 0;
            }
            else if (eax_12 == 8)
            {
                eax = ecx_8 > 0;
            }
            else
            {
                int32_t eax_19;
                if (eax_12 == 9)
                {
                    eax_19 = ecx_8;
                }
                if (eax_12 == 0xa)
                {
                    eax_19 = (!ecx_8);
                }
                if ((eax_12 == 9 || eax_12 == 0xa))
                {
                    eax = (eax_19 >> 0x1f);
                }
                if ((eax_12 != 9 && eax_12 != 0xa))
                {
                    if (eax_12 != 0xb)
                    {
                        goto label_40db9c;
                    }
                    eax = ecx_8 <= 0;
                }
            }
            *(edi - 4) = eax;
            edi[0xfffffff8] = 0x16;
        label_40db98:
            eax = 1;
        }
        return eax;
    }
    if (edi[0xfffffff8] != eax)
    {
        goto label_40db9c;
    }
    if ((arg1 - 1) > 0x11)
    {
        goto label_40db9c;
    }
    int32_t ecx_1;
    switch (arg1)
    {
        case 1:
        {
            eax = 0;
            break;
        }
        case 2:
        {
            eax = 0;
            if (*(edi - 4) == 0)
            {
                goto label_40dafa;
            }
            break;
        }
        case 3:
        {
            *(edi - 4) = (*(edi - 4) | *(edi + 4));
            break;
        }
        case 4:
        {
            *(edi - 4) = (*(edi - 4) ^ *(edi + 4));
            break;
        }
        case 5:
        {
            *(edi - 4) = (*(edi - 4) & *(edi + 4));
            break;
        }
        case 6:
        {
            ecx_1 = *(edi + 4) != *(edi - 4);
            break;
        }
        case 8:
        {
            ecx_1 = *(edi - 4) > *(edi + 4);
            break;
        }
        case 9:
        {
            ecx_1 = *(edi - 4) < *(edi + 4);
            break;
        }
        case 0xa:
        {
            ecx_1 = *(edi - 4) >= *(edi + 4);
            break;
        }
        case 0xb:
        {
            ecx_1 = *(edi - 4) <= *(edi + 4);
            break;
        }
        case 0xc:
        {
            *(edi - 4) = (*(edi - 4) >> *(edi + 4));
            break;
        }
        case 0xd:
        {
            *(edi - 4) = (*(edi - 4) << *(edi + 4));
            break;
        }
        case 0xe:
        {
            *(edi - 4) = (*(edi - 4) - *(edi + 4));
            break;
        }
        case 0xf:
        {
            *(edi - 4) = (*(edi - 4) + *(edi + 4));
            break;
        }
        case 0x10:
        {
            if (*(edi + 4) == 0)
            {
                sub_405b2c(data_424724, 0x437);
            }
            int32_t eax_7;
            int32_t edx_1;
            edx_1 = HIGHD(*(edi - 4));
            eax_7 = LOWD(*(edi - 4));
            *(edi + 4);
            *(edi - 4) = (COMBINE(edx_1, eax_7) % *(edi + 4));
            break;
        }
    }
    if (((((arg1 == 6 || arg1 == 8) || arg1 == 9) || arg1 == 0xa) || arg1 == 0xb))
    {
        *(edi - 4) = ecx_1;
    }
    if (((arg1 == 1 && *(edi - 4) != 0) || (((arg1 == 1 && *(edi - 4) == 0) || arg1 == 2) && *(edi + 4) != 0)))
    {
        eax = 1;
        goto label_40dafa;
    }
    if ((((arg1 == 1 && *(edi - 4) == 0) || arg1 == 2) && *(edi + 4) == 0))
    {
        goto label_40dafa;
    }
    if (arg1 == 7)
    {
        int32_t eax_3 = (*(edi + 4) - *(edi - 4));
        int32_t eax_4 = (-eax_3);
        eax = ((eax_4 - eax_4) + 1);
    label_40dafa:
        *(edi - 4) = eax;
    }
    if (arg1 == 0x12)
    {
        eax = (*(edi - 4) * *(edi + 4));
        goto label_40dafa;
    }
    if (arg1 == 0x11)
    {
        if (*(edi + 4) == 0)
        {
            sub_405b2c(data_424724, 0x437);
        }
        int32_t eax_9;
        int32_t edx_3;
        edx_3 = HIGHD(*(edi - 4));
        eax_9 = LOWD(*(edi - 4));
        *(edi + 4);
        eax = (COMBINE(edx_3, eax_9) / *(edi + 4));
        goto label_40dafa;
    }
    goto label_40db98;
}

int32_t __stdcall sub_40dbee(char arg1)
{
    char* ecx = data_435690;
    int32_t eax;
    uint32_t eax_1;
    if (*ecx == 0x16)
    {
        eax_1 = arg1;
        if (eax_1 == 0x13)
        {
            *(ecx + 4) = (-*(ecx + 4));
        }
        if (eax_1 == 0x14)
        {
            *(ecx + 4) = (!*(ecx + 4));
        }
        if (eax_1 == 0x15)
        {
            eax = *(ecx + 4) == (eax_1 - 0x15);
            *(ecx + 4) = eax;
        }
        if (((eax_1 == 0x13 || eax_1 == 0x14) || eax_1 == 0x15))
        {
            eax = 1;
        }
    }
    if ((*ecx != 0x16 || (((*ecx == 0x16 && eax_1 != 0x13) && eax_1 != 0x14) && eax_1 != 0x15)))
    {
        eax = 0;
    }
    return eax;
}

void* sub_40dc2c()
{
    void* esi_1 = (data_435694 + 2);
    int16_t* ecx = esi_1;
    data_435694 = ecx;
    int16_t i_2 = *ecx;
    void* edx_1;
    int16_t i_1;
    if (i_2 != 0)
    {
        i_1 = i_2;
        edx_1 = esi_1;
        int16_t* edi_1 = esi_1;
        int16_t i;
        do
        {
            if (i_1 == 0x22)
            {
                edx_1 = &edi_1[1];
                if (*edx_1 != 0x22)
                {
                    break;
                }
            }
            ecx = (edx_1 + 2);
            data_435694 = ecx;
            edx_1 = ecx;
            i = *ecx;
            edi_1 = ecx;
            i_1 = i;
        } while (i != 0);
    }
    if ((i_2 == 0 || (i_2 != 0 && (!(i_1 == 0x22 && *edx_1 != 0x22)))))
    {
        int32_t var_10_1 = 0x22;
        sub_405b2c(data_424724, 0x3fe);
        ecx = data_435694;
    }
    *ecx = 0;
    data_435694 = (data_435694 + 2);
    return esi_1;
}

int16_t* sub_40dca7()
{
    int16_t* edi_1 = (data_435694 + 2);
    int16_t* edx = edi_1;
    int16_t* var_c = edi_1;
    data_435694 = edx;
    int16_t i_1 = *edx;
    int16_t i = i_1;
    if (i_1 != 0)
    {
        int16_t i_2 = i_1;
        int16_t* ebx_1 = edi_1;
        do
        {
            if ((i_2 != 0x5e || (i_2 == 0x5e && ebx_1[1] != 0x5d)))
            {
                i = i_2;
                if (i_2 == 0x5d)
                {
                    break;
                }
            }
            if ((i_2 == 0x5e && ebx_1[1] == 0x5d))
            {
                void* ecx = &ebx_1[1];
                void* edx_1 = (ecx + 2);
                int16_t j;
                do
                {
                    j = *ecx;
                    ecx = (ecx + 2);
                } while (j != 0);
                memmove(edi_1, &ebx_1[1], ((((ecx - edx_1) >> 1) << 1) + 2));
                edx = data_435694;
            }
            edx = &edx[1];
            data_435694 = edx;
            edi_1 = edx;
            ebx_1 = edi_1;
            i = *edx;
            i_2 = i;
        } while (i != 0);
        edi_1 = var_c;
    }
    if (i == 0)
    {
        int32_t var_20_2 = 0x5d;
        sub_405b2c(data_424724, 0x3fe);
        edx = data_435694;
    }
    *edx = 0;
    data_435694 = (data_435694 + 2);
    return edi_1;
}

uint32_t __fastcall sub_40dd70(int32_t arg1, int32_t arg2)
{
    int32_t var_4 = arg1;
    int16_t ebx;
    *ebx[1] = arg1;
    if (*ebx[1] == 0x19)
    {
        ebx = 3;
    }
    else if (*ebx[1] == 0)
    {
        ebx = 4;
    }
    else if (*ebx[1] <= 0x15)
    {
        ebx = *ebx[1] > 0x12;
        ebx = (ebx + 1);
    }
    else
    {
        ebx = 0;
    }
    uint32_t eax_1 = ebx;
    if (*(((data_43547e * 5) + eax_1) + 0x40159c) == 0)
    {
        eax_1 = sub_405b2c(data_424724, 0x3ff);
    }
    data_435688 = arg2;
    data_43547e = ebx;
    data_435682 = *ebx[1];
    data_435684 = *ebx[1];
    return eax_1;
}

void* sub_40ddde()
{
    int16_t* eax = data_435694;
    int32_t var_8 = 0x20;
    while (true)
    {
        int16_t ecx_1 = *eax;
        if ((ecx_1 != 0x20 && ecx_1 != 9))
        {
            if (ecx_1 != 0x28)
            {
                sub_405b2c(data_424724, 0x3ff);
                eax = data_435694;
            }
            void* eax_1 = &eax[1];
            while (true)
            {
                data_435694 = eax_1;
                void* esi_1 = eax_1;
                int16_t ecx_3 = *eax_1;
                if ((ecx_3 != 0x20 && ecx_3 != 9))
                {
                    if (ecx_3 != 0x22)
                    {
                        void* edx_3 = esi_1;
                        int32_t var_c_1 = 0x29;
                        while (true)
                        {
                            int16_t ecx_6 = *eax_1;
                            eax_1 = (eax_1 + 2);
                            data_435694 = eax_1;
                            if (ecx_6 == 0)
                            {
                                sub_405b2c(data_424724, 0x3ff);
                                eax_1 = data_435694;
                            }
                            else
                            {
                                if (ecx_6 == 0x29)
                                {
                                    break;
                                }
                                if (ecx_6 == 0x20)
                                {
                                    continue;
                                }
                                if (ecx_6 == 9)
                                {
                                    continue;
                                }
                            }
                            edx_3 = eax_1;
                        }
                        *edx_3 = 0;
                    }
                    else
                    {
                        void* eax_2 = sub_40dc2c();
                        int16_t* ecx_4 = data_435694;
                        esi_1 = eax_2;
                        int16_t edx_2;
                        while (true)
                        {
                            edx_2 = *ecx_4;
                            if ((edx_2 != 0x20 && edx_2 != 9))
                            {
                                break;
                            }
                            ecx_4 = &ecx_4[1];
                            data_435694 = ecx_4;
                        }
                        if (edx_2 != 0x29)
                        {
                            sub_405b2c(data_424724, 0x3ff);
                            ecx_4 = data_435694;
                        }
                        data_435694 = &ecx_4[1];
                    }
                    return esi_1;
                }
                eax_1 = (eax_1 + 2);
            }
        }
        eax = &eax[1];
        data_435694 = eax;
    }
}

uint32_t sub_40deff()
{
    int32_t ecx;
    int32_t var_8 = ecx;
    int16_t* ecx_1 = data_435694;
    while (true)
    {
        uint32_t esi_1 = *ecx_1;
        if ((esi_1 != 0x20 && esi_1 != 9))
        {
            void** edi;
            if ((esi_1 >= 0x80 || (esi_1 < 0x80 && (*(esi_1 + 0x401090) & 2) == 0)))
            {
                edi = &data_414118;
            }
            if ((esi_1 < 0x80 && (*(esi_1 + 0x401090) & 2) != 0))
            {
                void* i = data_414070;
                edi = &data_414070;
                if (i != 0)
                {
                    do
                    {
                        uint32_t eax_2 = *i;
                        int16_t* ebx_1 = ecx_1;
                        uint32_t var_8_1 = eax_2;
                        ecx_1 = data_435694;
                        if (eax_2 != 0)
                        {
                            int16_t j = eax_2;
                            while (*ebx_1 == j)
                            {
                                i = (i + 2);
                                ebx_1 = &ebx_1[1];
                                int16_t j_1 = *i;
                                j = j_1;
                                if (j_1 == 0)
                                {
                                    break;
                                }
                            }
                            ecx_1 = data_435694;
                        }
                        if (*i == 0)
                        {
                            ecx_1 = ebx_1;
                            data_435694 = ecx_1;
                            break;
                        }
                        edi = &edi[2];
                        i = *edi;
                    } while (i != 0);
                }
            }
            uint32_t eax_21;
            void* edx_1;
            if (*edi != 0)
            {
                ecx_1 = edi[1];
                edx_1 = nullptr;
            label_40e11f:
                eax_21 = sub_40dd70(ecx_1, edx_1);
            }
            else
            {
                if (esi_1 == 0x2d)
                {
                    bool cond:0_1 = data_435682 != 0x16;
                    data_435694 = &ecx_1[1];
                    ecx_1 = cond:0_1;
                    ecx_1 = (ecx_1 - 1);
                    ecx_1 = (ecx_1 & 0xfb);
                    ecx_1 = (ecx_1 + 0x13);
                    edx_1 = nullptr;
                    goto label_40e11f;
                }
                if (esi_1 == 0x22)
                {
                    void* eax_3;
                    eax_3 = sub_40dc2c();
                    edx_1 = eax_3;
                    ecx_1 = 0x17;
                    goto label_40e11f;
                }
                if (esi_1 == 0x5b)
                {
                    int16_t* eax_4;
                    eax_4 = sub_40dca7();
                    edx_1 = eax_4;
                    ecx_1 = 0x18;
                    goto label_40e11f;
                }
                if (iswdigit(esi_1) != 0)
                {
                    int32_t ebx_2 = data_435694;
                    *_errno() = 0;
                    void* edi_1 = wcstol(data_435694, 0x435694, 0);
                    if (*_errno() == 0x22)
                    {
                        int32_t var_18_2 = ebx_2;
                        int32_t var_20_2 = data_424724;
                        **&data_435694 = 0;
                        sub_405b2c(var_20_2, 0x436);
                    }
                    if (towupper(**&data_435694) == 0x4c)
                    {
                        data_435694 = (data_435694 + 2);
                    }
                    edx_1 = edi_1;
                    goto label_40e11d;
                }
                if (esi_1 == 0)
                {
                    edx_1 = nullptr;
                    data_43547f = 1;
                    ecx_1 = 0;
                    goto label_40e11f;
                }
                if (_wcsnicmp(data_435694, u"DEFINED", 7) == 0)
                {
                    data_435694 = (data_435694 + 0xe);
                    char eax_14;
                    eax_14 = sub_40e38a(sub_40ddde());
                    edx_1 = eax_14;
                label_40e11d:
                    ecx_1 = 0x16;
                    goto label_40e11f;
                }
                int32_t eax_15 = _wcsnicmp(data_435694, u"EXISTS", 6);
                int32_t eax_16;
                if (eax_15 != 0)
                {
                    eax_16 = _wcsnicmp(data_435694, u"EXIST", 5);
                    if (eax_16 != 0)
                    {
                        eax_21 = sub_405b2c(data_424724, 0x3ff);
                    }
                    else
                    {
                        data_435694 = (data_435694 + 0xa);
                    }
                }
                else
                {
                    data_435694 = (data_435694 + 0xc);
                }
                if ((eax_15 == 0 || (eax_15 != 0 && eax_16 == 0)))
                {
                    int32_t eax_18 = _waccess(sub_40ddde(), 0);
                    int32_t eax_19 = (-eax_18);
                    edx_1 = ((eax_19 - eax_19) + 1);
                    goto label_40e11d;
                }
            }
            return eax_21;
        }
        ecx_1 = &ecx_1[1];
        data_435694 = ecx_1;
    }
}

int32_t sub_40e13d()
{
    char* edx = data_435690;
    char* i = &data_4356a0;
    uint32_t eax;
    if (data_43568c > 0x4356a0)
    {
        do
        {
            eax = *i;
            if (eax <= 0x15)
            {
                int32_t (__stdcall* ecx_2)(char arg1) = sub_40dbee;
                if (eax <= 0x12)
                {
                    ecx_2 = sub_40d9a6;
                }
                if (ecx_2(eax) == 0)
                {
                    sub_405b2c(data_424724, 0x438);
                }
                edx = data_435690;
            }
            else
            {
                int16_t* ecx_1 = *(i + 4);
                edx = &edx[8];
                data_435690 = edx;
                if (eax != 0x18)
                {
                    *edx = *i;
                    *(edx + 4) = ecx_1;
                }
                else
                {
                    edx = 0;
                    eax = sub_40756c(ecx_1, edx, 1, 0, nullptr);
                    edx = data_435690;
                    *(edx + 4) = eax;
                    *edx = 0x16;
                }
            }
            i = &i[8];
        } while (i < data_43568c);
    }
    if ((edx == 0x4376a0 && *edx == 0x16))
    {
        eax = *(edx + 4) != 0;
        return eax;
    }
    sub_405b2c(data_424724, 0x3ff);
    int32_t eax_1;
    eax_1 = 0;
    return eax_1;
}

int32_t sub_40e1ef()
{
    int32_t* edx = data_435690;
    if (edx < 0x4376a0)
    {
        sub_405b2c(data_424724, 0x3ff);
        edx = data_435690;
    }
    int32_t* esi = data_43568c;
    if (esi > 0x437698)
    {
        sub_405b2c(data_424724, 0x412);
        edx = data_435690;
        esi = data_43568c;
    }
    int32_t eax = *edx;
    int32_t ecx_3 = edx[1];
    *esi = eax;
    esi[1] = ecx_3;
    data_43568c = &esi[2];
    data_435690 = (edx - 8);
    return eax;
}

int32_t sub_40e260()
{
    data_43568c = 0x4356a0;
    data_435690 = 0x4376a0;
    int32_t ecx;
    ecx = 0x19;
    data_43547f = 0;
    data_43547e = 3;
    data_435682 = 0x19;
    sub_40dd70(ecx, 0);
    int32_t* edx = data_435690;
    int32_t ecx_1 = data_435688;
    *edx = *data_435684;
    edx[1] = ecx_1;
    while (data_43547f == 0)
    {
        sub_40deff();
        int32_t ecx_2 = *data_435684;
        char* edx_1 = data_435690;
        int16_t ebx;
        if (ecx_2 != 0x19)
        {
            while (true)
            {
                ebx = *edx_1;
                *ebx[1] = *(ecx_2 + 0x4015c0);
                if (*ebx[1] > *(ebx + 0x4015c0))
                {
                    break;
                }
                if (*ebx[1] == 0)
                {
                    break;
                }
                sub_40e1ef();
                edx_1 = data_435690;
                ecx_2 = *data_435684;
            }
        }
        if ((ecx_2 == 0x19 || (ecx_2 != 0x19 && *ebx[1] > *(ebx + 0x4015c0))))
        {
            if (edx_1 != 0x438698)
            {
                int32_t eax_3 = data_435688;
                edx = &edx_1[8];
                *edx = ecx_2;
                edx[1] = eax_3;
            }
            else
            {
                sub_405b2c(data_424724, 0x412);
                edx = data_435690;
                continue;
            }
        }
        if ((ecx_2 != 0x19 && *ebx[1] <= *(ebx + 0x4015c0)))
        {
            if (ebx != 0x19)
            {
                do
                {
                    sub_40e1ef();
                    edx_1 = data_435690;
                } while (*edx_1 != 0x19);
            }
            if (edx_1 < 0x4376a0)
            {
                sub_405b2c(data_424724, 0x3ff);
                edx_1 = data_435690;
            }
            edx = (edx_1 - 8);
        }
        if ((((ecx_2 == 0x19 || (ecx_2 != 0x19 && *ebx[1] > *(ebx + 0x4015c0))) && edx_1 != 0x438698) || (ecx_2 != 0x19 && *ebx[1] <= *(ebx + 0x4015c0))))
        {
            data_435690 = edx;
        }
    }
    if (edx != 0x437698)
    {
        sub_405b2c(data_424724, 0x3ff);
    }
    /* tailcall */
    return sub_40e13d();
}

void* __fastcall sub_40e38a(int32_t arg1)
{
    int32_t var_8 = arg1;
    int32_t var_c = arg1;
    var_8 = 0;
    int32_t eax = wcstok_s(arg1, &data_40104c, &var_8);
    if (wcstok_s(0, &data_40104c, &var_8) != 0)
    {
        int32_t var_18_2 = eax;
        sub_405b2c(data_424724, 0x409);
    }
    if (eax == 0)
    {
        sub_405b2c(data_424724, 0x417);
    }
    void* eax_2;
    eax_2 = sub_40b534(eax) != 0;
    return eax_2;
}

void* __fastcall sub_40e3f9(int16_t* arg1, char arg2)
{
    int16_t* var_4 = arg1;
    if (*arg1 == 0)
    {
        sub_405b2c(data_424724, 0x3fa);
    }
    uint32_t eax = arg2;
    void* eax_5;
    if ((eax == 4 || eax == 6))
    {
        eax_5 = sub_40e38a(arg1);
    }
    if ((eax == 5 || eax == 7))
    {
        eax_5 = sub_40e38a(arg1);
        char temp2_1 = eax_5;
        eax_5 = (-eax_5);
        eax_5 = (eax_5 - eax_5);
        eax_5 = (eax_5 + 1);
    }
    if ((((eax != 4 && eax != 5) && eax != 6) && eax != 7))
    {
        data_435694 = arg1;
        eax_5 = sub_40e260();
    }
    return eax_5;
}

void** __fastcall sub_40e456(int16_t* arg1, int32_t arg2, int16_t* arg3, int16_t* arg4, int32_t* arg5)
{
    int32_t __saved_ebp_1;
    int32_t __saved_ebp = __saved_ebp_1;
    void** i = data_424714;
    void** i_1 = i;
    void* const var_38 = nullptr;
    int32_t esi;
    int32_t var_3c = esi;
    int32_t edi;
    int32_t var_40 = edi;
    int32_t* esp_1 = &var_40;
    int16_t* edi_1 = arg1;
    int16_t* var_8 = edi_1;
    void** i_2;
    if (i != 0)
    {
        int16_t var_30_1 = 0x7b;
        int16_t var_1c_1 = 0x5c;
        int16_t var_20_1 = 0x2f;
        int16_t var_34_1 = 0x3a;
        do
        {
            void* ebx_1 = i[2];
            *(esp_1 - 4) = 0x2e;
            *(esp_1 - 8) = ebx_1;
            void* var_10_1 = ebx_1;
            int16_t* eax = wcsrchr();
            int16_t* var_2c_1 = eax;
            int32_t eax_1 = sub_411aec(eax, arg4);
            if (eax_1 == 0)
            {
                int16_t* ebx_2 = (ebx_1 + 2);
                *edi_1 = eax_1;
                int16_t* esi_1 = ebx_2;
                *(esp_1 - 4) = 0x5e;
                int16_t edx_1 = *(esp_1 - 4);
                void* esp_6 = esp_1;
                int16_t j_10 = *esi_1;
                if (j_10 == 0)
                {
                    goto label_40e613;
                }
                int16_t j_8 = j_10;
                while (j_8 != var_30_1)
                {
                    if (j_8 == edx_1)
                    {
                        esi_1 = &esi_1[1];
                    }
                    else
                    {
                        *(esp_6 - 4) = 0x22;
                        int16_t j = *(esp_6 - 4);
                        if (j_8 == j)
                        {
                            do
                            {
                                esi_1 = &esi_1[1];
                            } while (*esi_1 != j);
                        }
                    }
                    esi_1 = &esi_1[1];
                    int16_t j_11 = *esi_1;
                    j_8 = j_11;
                    if (j_11 == 0)
                    {
                        break;
                    }
                }
                if (j_8 != var_30_1)
                {
                    goto label_40e613;
                }
                *(esp_6 - 4) = 0x5e;
                int16_t edi_2 = *(esp_6 - 4);
                *(esp_6 - 4) = 0x7d;
                int16_t* edx_2 = esi_1;
                int16_t j_1 = j_8;
                while (j_1 != *(esp_6 - 4))
                {
                    if (j_1 == edi_2)
                    {
                        edx_2 = &edx_2[1];
                    }
                    edx_2 = &edx_2[1];
                    int16_t j_5 = *edx_2;
                    j_1 = j_5;
                    if (j_5 == 0)
                    {
                        break;
                    }
                }
                int32_t j_9 = (((edx_2 - esi_1) - 2) >> 1);
                void* ecx_1 = arg3;
                *(esp_6 - 4) = 0x22;
                esp_1 = esp_6;
                int32_t j_2 = j_9;
                int32_t j_4 = j_2;
                if (*arg3 == *(esp_6 - 4))
                {
                    ecx_1 = &arg3[1];
                }
                void* edi_4 = &esi_1[1];
                if (j_2 != 0)
                {
                    void* ecx_2 = (ecx_1 - edi_4);
                    void* var_2c_3 = ecx_2;
                    int16_t eax_4;
                    int32_t eax_6;
                    do
                    {
                        eax_4 = *edi_4;
                        if ((eax_4 == var_1c_1 || (eax_4 != var_1c_1 && eax_4 == var_20_1)))
                        {
                            int16_t eax_7 = *(ecx_2 + edi_4);
                            if ((eax_7 != var_1c_1 && eax_7 != var_20_1))
                            {
                                break;
                            }
                        }
                        if ((eax_4 != var_1c_1 && eax_4 != var_20_1))
                        {
                            *(esp_1 - 4) = 1;
                            *(esp_1 - 8) = (ecx_2 + edi_4);
                            *(esp_1 - 0xc) = edi_4;
                            eax_6 = _wcsnicmp();
                            if (eax_6 != 0)
                            {
                                break;
                            }
                            ecx_2 = var_2c_3;
                            j_2 = j_4;
                        }
                        j_2 = (j_2 - 1);
                        edi_4 = (edi_4 + 2);
                        j_4 = j_2;
                    } while (j_2 != 0);
                    if (((eax_4 != var_1c_1 && eax_4 != var_20_1) && eax_6 != 0))
                    {
                        goto label_40e887;
                    }
                }
                var_2c_1 = esi_1;
                *(esp_1 - 4) = 0x5c;
                void* edi_5 = &arg3[(1 + j_9)];
                *(esp_1 - 4) = *(esp_1 - 4);
                *(esp_1 - 8) = edi_5;
                int32_t eax_11 = wcschr();
                *(esp_1 - 4);
                if (eax_11 == 0)
                {
                    *(esp_1 - 4) = 0x2f;
                    *(esp_1 - 4) = *(esp_1 - 4);
                    *(esp_1 - 8) = edi_5;
                    eax_11 = wcschr();
                    *(esp_1 - 4);
                    edi_1 = var_8;
                }
                int16_t eax_14;
                int16_t ecx_5;
                int16_t ecx_6;
                if (eax_11 == edi_5)
                {
                    *(esp_1 - 4) = 0x5c;
                    ecx_5 = *(esp_1 - 4);
                    eax_14 = edx_2[-1];
                    if (eax_14 != ecx_5)
                    {
                        edi_1 = var_8;
                        *(esp_1 - 4) = 0x2f;
                        ecx_6 = *(esp_1 - 4);
                    }
                }
                if ((eax_11 == 0 || ((eax_11 == edi_5 && eax_14 != ecx_5) && eax_14 != ecx_6)))
                {
                    *(esp_1 - 4) = 0x5e;
                    edx_1 = *(esp_1 - 4);
                    esp_6 = esp_1;
                label_40e613:
                    *(esp_6 - 4) = 0x7b;
                    void* esp_68;
                    int32_t esi_6;
                    if (*var_10_1 == *(esp_6 - 4))
                    {
                        int16_t j_6 = *ebx_2;
                        int16_t* esi_3 = ebx_2;
                        if (j_6 != 0)
                        {
                            *(esp_6 - 4) = 0x7d;
                            int16_t j_3 = j_6;
                            while (j_3 != *(esp_6 - 4))
                            {
                                if (j_3 == edx_1)
                                {
                                    esi_3 = &esi_3[1];
                                }
                                esi_3 = &esi_3[1];
                                int16_t j_7 = *esi_3;
                                j_3 = j_7;
                                if (j_7 == 0)
                                {
                                    break;
                                }
                            }
                            edi_1 = var_8;
                        }
                        int32_t esi_5 = ((esi_3 - ebx_2) >> 1);
                        void* esp_38;
                        if (esi_5 == 0)
                        {
                            *(esp_6 - 4) = 0x22;
                            void* esp_44;
                            if (*arg3 != *(esp_6 - 4))
                            {
                                *(esp_6 - 4) = 2;
                                esi_5 = *(esp_6 - 4);
                                *(esp_6 - 4) = esi_5;
                                *(esp_6 - 8) = &data_40261c;
                                esp_44 = (esp_6 - 8);
                            }
                            else
                            {
                                *(esp_6 - 4) = 3;
                                esi_5 = *(esp_6 - 4);
                                *(esp_6 - 4) = esi_5;
                                *(esp_6 - 8) = &data_402614;
                                esp_44 = (esp_6 - 8);
                            }
                            *(esp_44 - 4) = arg2;
                            *(esp_44 - 8) = edi_1;
                            wcsncpy_s();
                            esp_38 = (esp_44 + 8);
                        }
                        else
                        {
                            *(esp_6 - 4) = esi_5;
                            *(esp_6 - 8) = ebx_2;
                            *(esp_6 - 0xc) = arg2;
                            *(esp_6 - 0x10) = edi_1;
                            wcsncpy_s();
                            ebx_2 = &ebx_2[esi_5];
                            *(esp_6 - 4) = 0x5c;
                            int16_t eax_16 = *(esp_6 - 4);
                            esp_38 = esp_6;
                            if (ebx_2[-1] != eax_16)
                            {
                                edi_1[esi_5] = eax_16;
                                esi_5 = (esi_5 + 1);
                            }
                        }
                        *(esp_38 - 4) = 0x5c;
                        var_10_1 = &ebx_2[1];
                        *(esp_38 - 4) = *(esp_38 - 4);
                        *(esp_38 - 8) = arg3;
                        int32_t eax_20 = wcsrchr();
                        *(esp_38 - 0xc) = 0x2f;
                        int32_t edi_7 = eax_20;
                        *(esp_38 - 0xc) = *(esp_38 - 0xc);
                        *(esp_38 - 0x10) = arg3;
                        int32_t eax_22 = wcsrchr();
                        if (eax_22 > edi_7)
                        {
                            edi_7 = eax_22;
                        }
                        void* eax_29;
                        void* esp_62;
                        if (edi_7 != 0)
                        {
                            *(esp_38 - 4) = (edi_7 + 2);
                            *(esp_38 - 8) = (arg2 - esi_5);
                            *(esp_38 - 0xc) = &var_8[esi_5];
                            wcscpy_s();
                            esp_62 = esp_38;
                            eax_29 = ((arg4 - edi_7) - 2);
                        }
                        else
                        {
                            *(esp_38 - 4) = 0x22;
                            int16_t* edi_8 = &arg3[1];
                            if (*arg3 != *(esp_38 - 4))
                            {
                                edi_8 = arg3;
                            }
                            *(esp_38 - 4) = edi_8;
                            *(esp_38 - 8) = (arg2 - esi_5);
                            *(esp_38 - 0xc) = &var_8[esi_5];
                            wcscpy_s();
                            esp_62 = esp_38;
                            eax_29 = (arg4 - edi_8);
                        }
                        esp_68 = (esp_62 + 0xc);
                        esi_6 = (esi_5 + (eax_29 >> 1));
                    }
                    else
                    {
                        int16_t* edi_9;
                        if (*esi_1 == 0)
                        {
                            edi_9 = arg3;
                        }
                        else
                        {
                            *(esp_6 - 4) = 0x2e;
                            *(esp_6 - 8) = arg3;
                            edi_9 = wcsrchr();
                            *(esp_6 - 4) = 0x3a;
                            int16_t eax_37 = *edi_9;
                            int16_t ecx_11 = eax_37;
                            int16_t eax_38;
                            int16_t edx_3;
                            int16_t esi_8;
                            if (eax_37 == *(esp_6 - 4))
                            {
                                *(esp_6 - 4) = 0x5c;
                                eax_38 = *(esp_6 - 4);
                                *(esp_6 - 4) = 0x2f;
                                esi_8 = *(esp_6 - 4);
                            }
                            else
                            {
                                *(esp_6 - 4) = 0x2f;
                                edx_3 = eax_37;
                                esi_8 = *(esp_6 - 4);
                                while (true)
                                {
                                    *(esp_6 - 4) = 0x5c;
                                    eax_38 = *(esp_6 - 4);
                                    ecx_11 = edx_3;
                                    if (edx_3 == eax_38)
                                    {
                                        break;
                                    }
                                    ecx_11 = edx_3;
                                    if (edx_3 == esi_8)
                                    {
                                        break;
                                    }
                                    ecx_11 = edx_3;
                                    if (edi_9 <= arg3)
                                    {
                                        break;
                                    }
                                    edi_9 = (edi_9 - 2);
                                    int16_t eax_39 = *edi_9;
                                    edx_3 = eax_39;
                                    ecx_11 = eax_39;
                                    if (eax_39 == var_34_1)
                                    {
                                        *(esp_6 - 4) = 0x5c;
                                        eax_38 = *(esp_6 - 4);
                                        break;
                                    }
                                }
                            }
                            int16_t edx_4;
                            if ((eax_37 == *(esp_6 - 4) || (eax_37 != *(esp_6 - 4) && edx_3 != eax_38)))
                            {
                                *(esp_6 - 4) = 0x3a;
                                edx_4 = *(esp_6 - 4);
                                if (ecx_11 == edx_4)
                                {
                                label_40e790:
                                    edi_9 = &edi_9[1];
                                }
                            }
                            if ((((eax_37 == *(esp_6 - 4) || (eax_37 != *(esp_6 - 4) && edx_3 != eax_38)) && ecx_11 != edx_4) || (eax_37 != *(esp_6 - 4) && edx_3 == eax_38)))
                            {
                                if (ecx_11 == eax_38)
                                {
                                    goto label_40e790;
                                }
                                if (ecx_11 == esi_8)
                                {
                                    goto label_40e790;
                                }
                            }
                        }
                        int32_t eax_40 = 0;
                        int32_t var_14_1 = 0;
                        int32_t esi_11 = ((arg4 - edi_9) >> 1);
                        if (edi_9 != arg3)
                        {
                            *(esp_6 - 4) = 0x22;
                            int16_t ecx_12 = *(esp_6 - 4);
                            if (*arg3 == ecx_12)
                            {
                                *var_8 = ecx_12;
                                eax_40 = 1;
                                var_14_1 = 1;
                            }
                        }
                        int32_t ebx_9 = (arg2 - eax_40);
                        if (esi_11 >= ebx_9)
                        {
                            *(esp_6 - 4) = 0x434;
                            *(esp_6 - 8) = 0;
                            sub_405b2c();
                            eax_40 = var_14_1;
                            *(esp_6 - 4);
                        }
                        *(esp_6 - 4) = esi_11;
                        *(esp_6 - 8) = edi_9;
                        *(esp_6 - 0xc) = ebx_9;
                        *(esp_6 - 0x10) = &var_8[eax_40];
                        wcsncpy_s();
                        esp_68 = esp_6;
                        esi_6 = (esi_11 + var_14_1);
                    }
                    void* eax_43 = var_10_1;
                    int32_t ebx_12 = ((var_2c_1 - eax_43) >> 1);
                    int32_t edi_11 = (arg2 - esi_6);
                    if (ebx_12 >= edi_11)
                    {
                        *(esp_68 - 4) = 0x434;
                        *(esp_68 - 8) = 0;
                        sub_405b2c();
                        eax_43 = var_10_1;
                        *(esp_68 - 4);
                    }
                    *(esp_68 - 4) = ebx_12;
                    *(esp_68 - 8) = eax_43;
                    *(esp_68 - 0xc) = edi_11;
                    edi_1 = var_8;
                    *(esp_68 - 0x10) = &edi_1[esi_6];
                    wcsncpy_s();
                    *(esp_68 - 4) = 0x22;
                    int16_t ecx_16 = *(esp_68 - 4);
                    if (*edi_1 == ecx_16)
                    {
                        int16_t* eax_45 = var_8;
                        int32_t edi_12 = (ebx_12 + esi_6);
                        if (eax_45[(edi_12 - 1)] != ecx_16)
                        {
                            if (((arg2 - ebx_12) - esi_6) <= 1)
                            {
                                *(esp_68 - 4) = 0x434;
                                *(esp_68 - 8) = 0;
                                sub_405b2c();
                                *(esp_68 - 4) = 0x22;
                                ecx_16 = *(esp_68 - 4);
                            }
                            eax_45 = var_8;
                            ebx_12 = (ebx_12 + 1);
                            eax_45[edi_12] = ecx_16;
                        }
                        edi_1 = eax_45;
                    }
                    *(esp_68 - 4) = 0;
                    edi_1[(ebx_12 + esi_6)] = 0;
                    *(esp_68 - 8) = 0;
                    void** eax_50 = sub_40ee2d(edi_1);
                    esp_1 = esp_68;
                    char eax_51;
                    if (eax_50 != 0)
                    {
                        int32_t ecx_19 = eax_50[4];
                        int32_t edx_6 = eax_50[5];
                        arg5[1] = ecx_19;
                        arg5[2] = edx_6;
                        arg5[5] = ecx_19;
                        arg5[6] = edx_6;
                    }
                    else
                    {
                        eax_51 = sub_4084f3(edi_1, arg5);
                    }
                    if ((eax_50 != 0 || (eax_50 == 0 && eax_51 != 0)))
                    {
                        i_2 = i_1;
                        goto label_40e89c;
                    }
                }
                if ((eax_11 == edi_5 && eax_14 == ecx_5))
                {
                    goto label_40e887;
                }
                if (eax_11 != edi_5)
                {
                label_40e887:
                    edi_1 = var_8;
                }
            }
            i = *i_1;
            i_1 = i;
        } while (i != 0);
    }
    i_2 = nullptr;
label_40e89c:
    *esp_1;
    esp_1[1];
    esp_1[2];
    return i_2;
}

void** sub_40e8bd()
{
    int32_t __saved_ebp_1;
    int32_t __saved_ebp = __saved_ebp_1;
    void** i = data_424720;
    int32_t ecx = 0;
    int32_t var_10 = 0;
    void** i_2 = i;
    void* const var_24 = nullptr;
    int32_t esi;
    int32_t var_28 = esi;
    int32_t* i_1 = data_424714;
    int32_t* i_3 = i_1;
    data_424714 = 0;
    int32_t edi;
    int32_t var_2c = edi;
    int32_t* esp_1 = &var_2c;
    if (i != 0)
    {
        do
        {
            int16_t* eax = i[1];
            int16_t* edx_1 = eax;
            int16_t* var_20_1 = eax;
            do
            {
                eax = *edx_1;
                edx_1 = &edx_1[1];
            } while (eax != 0);
            int32_t* j = i_1;
            int32_t edx_3 = ((edx_1 - &edx_1[1]) >> 1);
            int32_t var_18_1 = edx_3;
            int32_t* j_1 = j;
            if (i_1 != 0)
            {
                do
                {
                    int16_t* edi_1 = j[2];
                    *(esp_1 - 4) = 0x7b;
                    int32_t* var_c = &j[2];
                    int16_t eax_2 = *(esp_1 - 4);
                    if (*edi_1 == eax_2)
                    {
                        int16_t ecx_2 = eax_2;
                        uint32_t k;
                        do
                        {
                            if (ecx_2 == 0x5e)
                            {
                                edi_1 = &edi_1[1];
                            }
                            edi_1 = &edi_1[1];
                            k = *edi_1;
                            ecx_2 = k;
                        } while (k != 0x7d);
                        edi_1 = &edi_1[1];
                    }
                    *(esp_1 - 4) = edx_3;
                    *(esp_1 - 8) = edi_1;
                    *(esp_1 - 0xc) = var_20_1;
                    int32_t eax_3 = _wcsnicmp();
                    uint32_t eax_5;
                    int16_t ecx_3;
                    if (eax_3 == 0)
                    {
                        eax_5 = edi_1[var_18_1];
                        if (eax_5 != 0x2e)
                        {
                            *(esp_1 - 4) = 0x7b;
                            ecx_3 = *(esp_1 - 4);
                        }
                        if ((eax_5 == 0x2e || (eax_5 != 0x2e && eax_5 == ecx_3)))
                        {
                            int32_t* j_2 = j_1;
                            int32_t* edx_4 = j_1[1];
                            int32_t* i_4 = *j_1;
                            if (edx_4 == 0)
                            {
                                i_1 = i_4;
                                i_3 = i_1;
                            }
                            else
                            {
                                *edx_4 = i_4;
                            }
                            void* edx_5 = *j_1;
                            if (edx_5 != 0)
                            {
                                *(edx_5 + 4) = j_1[1];
                            }
                            j_1 = *j_1;
                            *j_2 = 0;
                            void** k_1 = data_424714;
                            int32_t eax_8;
                            if (k_1 != 0)
                            {
                                do
                                {
                                    *(esp_1 - 4) = *var_c;
                                    *(esp_1 - 8) = k_1[2];
                                    eax_8 = _wcsicmp();
                                    *(esp_1 - 4);
                                    if (eax_8 == 0)
                                    {
                                        break;
                                    }
                                    k_1 = *k_1;
                                } while (k_1 != 0);
                            }
                            if ((k_1 == 0 || (k_1 != 0 && eax_8 != 0)))
                            {
                                void** k_2 = j_2[3];
                                if (k_2 != 0)
                                {
                                    int32_t* esi_1 = var_c;
                                    do
                                    {
                                        var_c = k_2[1];
                                        int32_t* eax_9;
                                        eax_9 = j_2[5];
                                        data_4386ac = eax_9;
                                        if (eax_9 != 0)
                                        {
                                            data_4386b0 = *esi_1;
                                        }
                                        *(esp_1 - 4) = 0;
                                        *(esp_1 - 8) = 0;
                                        *(esp_1 - 0xc) = 0;
                                        *(esp_1 - 0x10) = 0;
                                        *(esp_1 - 0x14) = 0;
                                        *(esp_1 - 0x18) = 0;
                                        sub_40f012(&var_c, &var_10);
                                        k_2 = *k_2;
                                        data_4386ac = 0;
                                    } while (k_2 != 0);
                                    i_1 = i_3;
                                }
                                int32_t** k_5 = &data_424714;
                                j_2[4] = var_10;
                                var_10 = 0;
                                int32_t** k_4 = data_424714;
                                if (k_4 != 0)
                                {
                                    int32_t* k_3;
                                    do
                                    {
                                        k_3 = *k_4;
                                        k_5 = k_4;
                                        k_4 = k_3;
                                    } while (k_3 != 0);
                                }
                                *k_5 = j_2;
                            }
                            if ((k_1 != 0 && eax_8 == 0))
                            {
                                *(esp_1 - 4) = *var_c;
                                free();
                                void* esp_18 = esp_1;
                                while (true)
                                {
                                    int32_t* edi_2 = j_2[3];
                                    *esp_18;
                                    if (edi_2 == 0)
                                    {
                                        break;
                                    }
                                    j_2[3] = *edi_2;
                                    *esp_18 = edi_2[1];
                                    free();
                                    esp_18 = (esp_18 + 4);
                                    *edi_2 = data_435698;
                                    data_435698 = edi_2;
                                }
                                *esp_18 = j_2;
                                free();
                                *(esp_18 + 4);
                                esp_1 = (esp_18 + 8);
                            }
                            j = j_1;
                        }
                    }
                    if ((eax_3 != 0 || ((eax_3 == 0 && eax_5 != 0x2e) && eax_5 != ecx_3)))
                    {
                        j = *j;
                        j_1 = j;
                    }
                    edx_3 = var_18_1;
                } while (j != 0);
            }
            i = *i_2;
            i_2 = i;
        } while (i != 0);
        ecx = 0;
    }
    if (i_1 != 0)
    {
        int32_t* i_5 = i_1;
        do
        {
            if ((data_41450c & 1) != 0)
            {
                *(esp_1 - 4) = i_1[2];
                *(esp_1 - 8) = 0xfa5;
                *(esp_1 - 0xc) = ecx;
                sub_405b2c();
            }
            *(esp_1 - 4) = i_1[2];
            free();
            sub_405322(i_1[3]);
            sub_405322(i_1[4]);
            i_1 = *i_1;
            *esp_1 = i_5;
            i = free();
            i_5 = i_1;
            esp_1[1] = 0;
            ecx = esp_1[1];
            esp_1 = &esp_1[2];
        } while (i_1 != 0);
    }
    *esp_1;
    esp_1[1];
    esp_1[2];
    return i;
}

void** __fastcall sub_40eadd(void* arg1, int16_t* arg2, int32_t arg3, int32_t arg4, int32_t* arg5, int32_t* arg6, int32_t* arg7, int32_t* arg8, int16_t** arg9)
{
    __security_cookie;
    wchar16* eax_6 = wcsrchr(*(arg1 + 4), 0x2e);
    void** eax_7;
    void** eax_15;
    if (eax_6 != 0)
    {
        void var_260;
        eax_7 = sub_40e456(arg2, 0x101, *(arg1 + 4), eax_6, &var_260);
        if (eax_7 != 0)
        {
            int32_t eax_8;
            int32_t edx;
            eax_8 = sub_40823c(&var_260);
            *arg9 = arg2;
            int32_t* esi_1 = arg6;
            int32_t var_288 = eax_8;
            int32_t var_284_1 = edx;
            while (true)
            {
                esi_1 = *esi_1;
                if (esi_1 == 0)
                {
                    break;
                }
                int32_t eax_9;
                eax_9 = _wcsicmp(esi_1[1], arg2);
                if (eax_9 == 0)
                {
                    *(arg1 + 8) = (*(arg1 + 8) & 0xfe);
                    break;
                }
            }
            edx = *(arg1 + 8);
            int32_t* var_27c = nullptr;
            uint32_t eax_10 = sub_403f66(arg2, edx, &var_288, 0, &var_27c);
            int32_t* ecx_5 = var_27c;
            if (ecx_5 != 0)
            {
                uint32_t var_278_2 = (eax_10 + sub_405594(ecx_5));
                sub_4055b2(&var_27c);
                eax_10 = var_278_2;
            }
            int32_t edx_1 = var_288;
            *arg7 = (*arg7 + eax_10);
            int32_t ecx_8 = var_284_1;
            if ((((arg4 > ecx_8 || (arg4 <= ecx_8 && arg3 >= edx_1)) && (*(arg1 + 8) & 0x10) == 0) && arg4 >= ecx_8))
            {
                if (data_424736 == 0)
                {
                label_40ec52:
                    int32_t esi_4 = arg8[1];
                    int32_t eax_14 = *arg8;
                    if ((esi_4 < ecx_8 || ((esi_4 >= ecx_8 && esi_4 <= ecx_8) && eax_14 <= edx_1)))
                    {
                        eax_14 = edx_1;
                        esi_4 = ecx_8;
                    }
                    *arg8 = eax_14;
                    eax_15 = eax_7;
                    arg8[1] = esi_4;
                }
                else
                {
                    if (arg3 != edx_1)
                    {
                        goto label_40ec52;
                    }
                    if (arg4 != ecx_8)
                    {
                        goto label_40ec52;
                    }
                }
            }
            if (((((*(arg1 + 8) & 0x10) != 0 || ((*(arg1 + 8) & 0x10) == 0 && arg4 < ecx_8)) || ((((*(arg1 + 8) & 0x10) == 0 && arg4 >= ecx_8) && arg4 <= ecx_8) && arg3 < edx_1)) || ((((*(arg1 + 8) & 0x10) == 0 && arg4 >= ecx_8) && (arg4 > ecx_8 || (arg4 <= ecx_8 && arg3 >= edx_1))) && data_424736 != 0)))
            {
                if (esi_1 == 0)
                {
                    int32_t* eax_12 = sub_40ec89();
                    eax_12[1] = sub_40ecdb(arg2);
                    sub_40ede0(arg5, eax_12);
                    edx_1 = var_288;
                    if (*arg6 == 0)
                    {
                        *arg6 = *arg5;
                    }
                    ecx_8 = var_284_1;
                    goto label_40ec2f;
                }
            label_40ec2f:
                eax_10 = *(arg1 + 8);
                eax_10 = (eax_10 & 0x11);
                if (eax_10 == 1)
                {
                    int32_t var_29c_4 = *(arg1 + 4);
                    int16_t* var_2a0_3 = arg2;
                    sub_405c06(3);
                    ecx_8 = var_284_1;
                    edx_1 = var_288;
                }
                goto label_40ec52;
            }
        }
    }
    if ((eax_6 == 0 || (eax_6 != 0 && eax_7 == 0)))
    {
        eax_15 = nullptr;
    }
    CookieCheckFunction(eax_15);
    return eax_15;
}

int32_t* sub_40ec89()
{
    int32_t* edx = data_435698;
    if (edx != 0)
    {
        data_435698 = *edx;
    }
    else
    {
        int32_t esi_1 = data_4386a4;
        if (esi_1 >= 8)
        {
            edx = data_4386a0;
        }
        else
        {
            esi_1 = 0x8000;
            edx = sub_40b5d9(0x8000);
        }
        data_4386a0 = &edx[2];
        data_4386a4 = (esi_1 - 8);
    }
    *edx = 0;
    edx[1] = 0;
    return edx;
}

int32_t __fastcall sub_40ecdb(uint8_t* arg1)
{
    int16_t* edi = arg1;
    void* ecx = &edi[1];
    int16_t i;
    do
    {
        i = *edi;
        edi = &edi[1];
    } while (i != 0);
    int32_t eax_1;
    int32_t edx;
    edx = HIGHD(((((edi - ecx) >> 1) + 1) * 2));
    eax_1 = LOWD(((((edi - ecx) >> 1) + 1) * 2));
    int32_t ecx_1;
    ecx_1 = (((((edi - ecx) >> 1) + 1) * 2) >> 0x20) != 0;
    int32_t eax_2 = sub_40b5d9(((-ecx_1) | eax_1));
    memcpy(eax_2, arg1, ((((edi - ecx) >> 1) + 1) * 2));
    return eax_2;
}

int32_t __fastcall sub_40ed1f(uint8_t* arg1)
{
    uint8_t* var_8 = arg1;
    int16_t* ebx = arg1;
    uint8_t* eax;
    do
    {
        eax = *ebx;
        ebx = &ebx[1];
    } while (eax != 0);
    int32_t ebx_2 = ((ebx - &ebx[1]) >> 1);
    int32_t eax_2;
    int32_t edx;
    edx = HIGHD(((ebx_2 + 3) * 2));
    eax_2 = LOWD(((ebx_2 + 3) * 2));
    int32_t ecx_1;
    ecx_1 = (((ebx_2 + 3) * 2) >> 0x20) != 0;
    int32_t eax_3 = sub_40b5d9(((-ecx_1) | eax_2));
    int32_t esi = (ebx_2 * 2);
    *eax_3 = 0x22;
    memcpy((eax_3 + 2), arg1, esi);
    *((esi + eax_3) + 2) = 0x22;
    *((eax_3 + (ebx_2 << 1)) + 4) = 0;
    return eax_3;
}

int32_t __fastcall sub_40ed85(int16_t* arg1, int16_t* arg2)
{
    int16_t* var_8 = arg1;
    int16_t* esi = arg1;
    int16_t i;
    do
    {
        i = *esi;
        esi = &esi[1];
    } while (i != 0);
    int16_t* ecx_1 = arg2;
    do
    {
        i = *ecx_1;
        ecx_1 = &ecx_1[1];
    } while (i != 0);
    int32_t edi_1 = ((((ecx_1 - &ecx_1[1]) >> 1) + 1) + ((esi - &esi[1]) >> 1));
    int32_t eax = sub_403d5c(arg1, edi_1);
    wcscat_s(eax, edi_1, arg2);
    return eax;
}

void __fastcall sub_40ede0(int32_t* arg1, int32_t arg2)
{
    int32_t* i_1 = *arg1;
    if (i_1 != 0)
    {
        int32_t* i;
        do
        {
            i = *i_1;
            arg1 = i_1;
            i_1 = i;
        } while (i != 0);
    }
    *arg1 = arg2;
}

int32_t __fastcall sub_40edf5(int16_t* arg1)
{
    int16_t* edi = arg1;
    int32_t esi = 0;
    while (true)
    {
        uint32_t eax_4 = *edi;
        if (eax_4 == 0)
        {
            break;
        }
        int16_t eax_1;
        if (eax_4 != 0x2f)
        {
            eax_1 = towupper(eax_4);
        }
        else
        {
            eax_1 = 0x5c;
        }
        esi = (esi + eax_1);
        edi = &edi[1];
    }
    return (esi & 0x7f);
}

void** __fastcall sub_40ee2d(int16_t* arg1)
{
    int16_t* edi = arg1;
    char var_5 = 0;
    void** eax_1;
    if (*edi == 0)
    {
        eax_1 = nullptr;
    }
    else
    {
        int16_t* var_20_1 = arg1;
        eax_1 = sub_411a34(edi, sub_40edf5(arg1));
        if (eax_1 == 0)
        {
            int32_t eax_2;
            int32_t ecx_1;
            eax_2 = wcsncmp(edi, &data_40261c, 2);
            int32_t eax_3;
            int32_t ebx_1;
            void* esi_5;
            if (eax_2 != 0)
            {
                eax_3 = wcsncmp(edi, &data_402624, 2);
                if (eax_3 != 0)
                {
                    int16_t* esi_1 = edi;
                    void* ecx_2 = &esi_1[1];
                    do
                    {
                        eax_3 = *esi_1;
                        esi_1 = &esi_1[1];
                    } while (eax_3 != 0);
                    int32_t eax_5;
                    int32_t edx_1;
                    edx_1 = HIGHD(((((esi_1 - ecx_2) >> 1) + 3) * 2));
                    eax_5 = LOWD(((((esi_1 - ecx_2) >> 1) + 3) * 2));
                    int32_t ecx_3;
                    ecx_3 = (((((esi_1 - ecx_2) >> 1) + 3) * 2) >> 0x20) != 0;
                    ebx_1 = sub_40b5d9(((-ecx_3) | eax_5));
                    wcscpy_s(ebx_1, (((esi_1 - ecx_2) >> 1) + 3), &data_40261c);
                    ecx_1 = wcscat_s(ebx_1, (((esi_1 - ecx_2) >> 1) + 3), edi);
                    var_5 = 1;
                    esi_5 = &edi[2];
                }
            }
            if ((eax_2 == 0 || (eax_2 != 0 && eax_3 == 0)))
            {
                esi_5 = &edi[2];
                ebx_1 = esi_5;
            }
            int32_t var_20_4 = ecx_1;
            eax_1 = sub_411a34(ebx_1, sub_40edf5(ebx_1));
            if (eax_1 == 0)
            {
                if (ebx_1 != esi_5)
                {
                    *(ebx_1 + 2) = 0x2f;
                }
                int32_t var_20_7 = ebx_1;
                int32_t esi_6 = sub_411a34(ebx_1, sub_40edf5(ebx_1));
                if (var_5 != 0)
                {
                    free(ebx_1);
                }
                if (esi_6 == 0)
                {
                    int32_t ecx_13;
                    int16_t* ebx_2;
                    if (*edi == 0x22)
                    {
                        int32_t eax_10;
                        eax_10 = sub_411c06(edi);
                        ebx_2 = eax_10;
                    }
                    else
                    {
                        int16_t* esi_7 = edi;
                        void* ecx_14 = &esi_7[1];
                        int32_t eax_9;
                        do
                        {
                            eax_9 = *esi_7;
                            esi_7 = &esi_7[1];
                        } while (eax_9 != 0);
                        int32_t eax_12;
                        int32_t edx_2;
                        edx_2 = HIGHD(((((esi_7 - ecx_14) >> 1) + 3) * 2));
                        eax_12 = LOWD(((((esi_7 - ecx_14) >> 1) + 3) * 2));
                        int32_t ecx_15;
                        ecx_15 = (((((esi_7 - ecx_14) >> 1) + 3) * 2) >> 0x20) != 0;
                        ebx_2 = sub_40b5d9(((-ecx_15) | eax_12));
                        wcscpy_s(ebx_2, (((esi_7 - ecx_14) >> 1) + 3), &data_401074);
                        wcscat_s(ebx_2, (((esi_7 - ecx_14) >> 1) + 3), edi);
                        ecx_13 = wcscat_s(ebx_2, (((esi_7 - ecx_14) >> 1) + 3), &data_401074);
                    }
                    int32_t var_20_11 = ecx_13;
                    esi_6 = sub_411a34(ebx_2, sub_40edf5(ebx_2));
                    free(ebx_2);
                }
                eax_1 = esi_6;
            }
            else if (var_5 != 0)
            {
                free(ebx_1);
            }
        }
    }
    return eax_1;
}

int32_t __fastcall sub_40efd4(int16_t arg1)
{
    int32_t i = 3;
    void* const eax = nullptr;
    void* const edx = &data_401734;
    if (0x20 != arg1)
    {
        while (i != 1)
        {
            edx = (edx + 2);
            i = (i - 1);
            if (*edx == arg1)
            {
                break;
            }
        }
    }
    if ((0x20 == arg1 || (0x20 != arg1 && i != 1)))
    {
        eax = edx;
    }
    int32_t eax_2;
    if (eax == 0)
    {
        eax_2 = 0xffffffff;
    }
    else
    {
        eax_2 = ((eax - &data_401734) >> 1);
    }
    eax_2 = eax_2 != 0xffffffff;
    return eax_2;
}

uint32_t __fastcall sub_40f012(int32_t* arg1, int32_t*** arg2, int32_t* arg3, uint32_t arg4, int32_t arg5, int32_t arg6, char arg7, char arg8)
{
    __security_cookie;
    int32_t* edi = arg1;
    int32_t* var_228 = edi;
    char var_215 = 0;
    int32_t* i_6;
    if (arg2 == 0)
    {
        i_6 = nullptr;
    }
    else if (arg3 != 0)
    {
        i_6 = *arg3;
    }
    else
    {
        int32_t** i_10 = *arg2;
        i_6 = i_10;
        if (i_10 != 0)
        {
            int32_t* i_4 = *i_10;
            if (i_4 != 0)
            {
                int32_t* i;
                do
                {
                    i_6 = i_4;
                    i = *i_4;
                    i_4 = i;
                } while (i != 0);
            }
        }
    }
    int16_t* ecx_1 = *edi;
    uint32_t i_7 = *ecx_1;
    if (i_7 != 0)
    {
        int16_t i_8 = i_7;
        int16_t* edx_1 = ecx_1;
        while (true)
        {
            int16_t i_5 = i_8;
            int16_t i_1;
            do
            {
                i_7 = i_5;
                if (i_7 == 0x24)
                {
                    break;
                }
                if (i_7 != 0x22)
                {
                    edx_1 = var_215;
                }
                else
                {
                    edx_1 = var_215 == 0;
                    var_215 = edx_1;
                }
                if (arg8 != 0)
                {
                    if (i_7 == 0x2c)
                    {
                        break;
                    }
                    if (i_7 == 0x29)
                    {
                        break;
                    }
                }
                if ((edx_1 == 0 && i_7 == 0x5e))
                {
                    *edi = &ecx_1[1];
                    if (ecx_1[1] == 0x22)
                    {
                        var_215 = 1;
                    }
                }
                ecx_1 = (*edi + 2);
                *edi = ecx_1;
                edx_1 = ecx_1;
                i_1 = *ecx_1;
                i_5 = i_1;
            } while (i_1 != 0);
            if (i_7 == 0x24)
            {
                if (*edx_1 == 0)
                {
                    break;
                }
                ecx_1 = arg7;
                ecx_1 = (ecx_1 & 4);
                char var_216_1 = ecx_1;
                if ((edx_1[1] == 0 && ecx_1 == 0))
                {
                    sub_405b2c(data_424730, 0x3ea);
                    var_216_1 = 0;
                }
                if (((edx_1[1] == 0 && ecx_1 == 0) || edx_1[1] != 0))
                {
                    int16_t* eax_6 = (*edi + 2);
                    *edi = eax_6;
                    if (var_215 != 0)
                    {
                        goto label_40f19f;
                    }
                    if (*eax_6 != 0x5e)
                    {
                        goto label_40f19f;
                    }
                    *edi = &eax_6[1];
                    int32_t ecx_4;
                    ecx_4 = eax_6[1];
                    i_7 = sub_403b50(ecx_4);
                    if ((i_7 != 0 || (i_7 == 0 && var_216_1 == i_7)))
                    {
                        uint32_t var_248_1 = **edi;
                        sub_405b2c(data_424730, 0x3e9);
                    label_40f19f:
                        int16_t* ecx_5 = *edi;
                        uint32_t eax_10 = *ecx_5;
                        if (eax_10 != 0x24)
                        {
                            int32_t var_224 = 0;
                            char var_21d = 0;
                            int32_t var_214;
                            void* eax_21;
                            int32_t* i_3;
                            int32_t edi_1;
                            bool cond:1_1;
                            if (eax_10 != 0x28)
                            {
                                if (wcschr(u"*@<?", eax_10) != 0)
                                {
                                    if (data_4386ac == 0)
                                    {
                                        goto label_40f5ba;
                                    }
                                    if ((data_41450c & 0x40) != 0)
                                    {
                                        goto label_40f5ba;
                                    }
                                    uint32_t eax_17 = **edi;
                                    if (eax_17 == 0x3c)
                                    {
                                        goto label_40f5ba;
                                    }
                                    int32_t var_248_9 = data_4386b0;
                                    int16_t var_e_1 = eax_17;
                                    int16_t var_c_1 = 0;
                                    int16_t var_10;
                                    int16_t* var_24c_4 = &var_10;
                                    var_10 = 0x24;
                                    sub_405b2c(0, 0x44c);
                                }
                                uint32_t ecx_11;
                                ecx_11 = **edi;
                                i_7 = sub_403b50(ecx_11);
                                if ((i_7 == 0 && var_216_1 == i_7))
                                {
                                    sub_405b2c(data_424730, 0x3ea);
                                }
                                if (((i_7 == 0 && var_216_1 == i_7) || i_7 != 0))
                                {
                                    int16_t* eax_19;
                                    eax_19 = **edi;
                                    var_214 = eax_19;
                                    *var_214[2] = 0;
                                label_40f3c9:
                                    int32_t var_238 = 0;
                                    int32_t var_234_1 = 0;
                                    int32_t* i_11;
                                    if (arg2 != 0)
                                    {
                                        i_11 = sub_40ec89();
                                    }
                                    else
                                    {
                                        i_11 = &var_238;
                                    }
                                    eax_21 = sub_40b534(&var_214);
                                    var_224 = eax_21;
                                    int32_t* esi_4;
                                    int32_t eax_23;
                                    if (eax_21 != 0)
                                    {
                                        if (arg4 != 0)
                                        {
                                            int32_t* edx_5 = &var_214;
                                            void* ecx_14 = arg4;
                                            while (true)
                                            {
                                                i_7 = *ecx_14;
                                                int16_t temp1_1 = *edx_5;
                                                bool c_1 = i_7 < temp1_1;
                                                if (i_7 == temp1_1)
                                                {
                                                    int16_t temp2_1;
                                                    if (i_7 != 0)
                                                    {
                                                        i_7 = *(ecx_14 + 2);
                                                        temp2_1 = *(edx_5 + 2);
                                                        c_1 = i_7 < temp2_1;
                                                        if (i_7 == temp2_1)
                                                        {
                                                            ecx_14 = (ecx_14 + 4);
                                                            edx_5 = &edx_5[1];
                                                            if (i_7 != 0)
                                                            {
                                                                continue;
                                                            }
                                                        }
                                                    }
                                                    if ((i_7 == 0 || (i_7 != 0 && i_7 == temp2_1)))
                                                    {
                                                        i_7 = 0;
                                                        break;
                                                    }
                                                }
                                                i_7 = ((i_7 - i_7) | 1);
                                                break;
                                            }
                                            if (i_7 != 0)
                                            {
                                                goto label_40f479;
                                            }
                                            int32_t ecx_15 = arg5;
                                            void** i_2 = *(eax_21 + 8);
                                            if (arg5 != arg6)
                                            {
                                                while (i_2 != 0)
                                                {
                                                    i_2 = *i_2;
                                                    ecx_15 = (ecx_15 - 1);
                                                    if (ecx_15 == arg6)
                                                    {
                                                        break;
                                                    }
                                                }
                                            }
                                            if (((arg5 == arg6 || (arg5 != arg6 && i_2 != 0)) && i_2 != 0))
                                            {
                                                eax_23 = i_2[1];
                                            }
                                            if ((((arg5 == arg6 || (arg5 != arg6 && i_2 != 0)) && i_2 == 0) || (arg5 != arg6 && i_2 == 0)))
                                            {
                                                eax_23 = sub_40ecdb(&data_4017dc);
                                            }
                                            esi_4 = &i_11[1];
                                            goto label_40f4ce;
                                        }
                                    label_40f479:
                                        i_7 = *(eax_21 + 0xc);
                                        if (((i_7 & 1) != 0 && var_216_1 == 0))
                                        {
                                            int32_t* var_248_10 = &var_214;
                                            sub_405b2c(data_424730, 0x42e);
                                            esi_4 = &i_11[1];
                                        }
                                        if ((i_7 & 1) == 0)
                                        {
                                            esi_4 = &i_11[1];
                                            if ((i_7 & 0x10) != 0)
                                            {
                                                goto label_40f4c9;
                                            }
                                            eax_23 = *(*(var_224 + 8) + 4);
                                            goto label_40f4ce;
                                        }
                                    }
                                    else
                                    {
                                        esi_4 = &i_11[1];
                                    label_40f4c9:
                                        eax_23 = sub_40ecdb(&data_4017dc);
                                    label_40f4ce:
                                        *esi_4 = eax_23;
                                    }
                                    if (((((eax_21 != 0 && arg4 == 0) && (i_7 & 1) != 0) && var_216_1 == 0) || eax_21 == 0))
                                    {
                                        if (*esi_4 == 0)
                                        {
                                            sub_405b2c(data_424730, 0x410);
                                        }
                                        if (arg2 != 0)
                                        {
                                            int32_t* i_9 = i_6;
                                            if (i_9 == 0)
                                            {
                                                *arg2 = i_11;
                                            }
                                            else
                                            {
                                                *i_9 = i_11;
                                            }
                                            i_6 = i_11;
                                            goto label_40f507;
                                        }
                                    label_40f507:
                                        int32_t edi_3 = var_224;
                                        if ((edi_3 != 0 && wcschr(*esi_4, 0x24) != 0))
                                        {
                                            *(edi_3 + 0xc) = (*(edi_3 + 0xc) | 1);
                                            var_224 = *esi_4;
                                            uint32_t eax_28 = arg4;
                                            int32_t eax_30;
                                            int32_t eax_31;
                                            if (eax_28 != 0)
                                            {
                                                int32_t* ecx_19 = &var_214;
                                                while (true)
                                                {
                                                    int16_t edx_7 = *eax_28;
                                                    int16_t temp3_1 = *ecx_19;
                                                    bool c_2 = edx_7 < temp3_1;
                                                    if (edx_7 == temp3_1)
                                                    {
                                                        int16_t temp4_1;
                                                        if (edx_7 != 0)
                                                        {
                                                            edx_7 = *(eax_28 + 2);
                                                            temp4_1 = *(ecx_19 + 2);
                                                            c_2 = edx_7 < temp4_1;
                                                            if (edx_7 == temp4_1)
                                                            {
                                                                eax_28 = (eax_28 + 4);
                                                                ecx_19 = &ecx_19[1];
                                                                if (edx_7 != 0)
                                                                {
                                                                    continue;
                                                                }
                                                            }
                                                        }
                                                        if ((edx_7 == 0 || (edx_7 != 0 && edx_7 == temp4_1)))
                                                        {
                                                            eax_30 = 0;
                                                            break;
                                                        }
                                                    }
                                                    eax_30 = ((eax_28 - eax_28) | 1);
                                                    break;
                                                }
                                                eax_31 = arg5;
                                            }
                                            if ((eax_28 == 0 || (eax_28 != 0 && eax_30 == 0)))
                                            {
                                                eax_31 = arg6;
                                            }
                                            sub_40f012(&i_6, &var_214, (arg5 + 1), eax_31, arg7, 0);
                                            *(edi_3 + 0xc) = (*(edi_3 + 0xc) & 0xfe);
                                        }
                                        edi = var_228;
                                    }
                                }
                            }
                            else
                            {
                                i_7 = sub_40f779(&ecx_5[1], &var_214, &var_21d, &var_224);
                                cond:1_1 = var_21d != 0;
                                *edi = i_7;
                                if (cond:1_1)
                                {
                                    edi_1 = var_224;
                                    i_3 = &data_4015e0;
                                    do
                                    {
                                        if (i_3[1] == edi_1)
                                        {
                                            i_7 = sub_411f70(*i_3, &var_214, i_3[1]);
                                            if (i_7 == 0)
                                            {
                                                break;
                                            }
                                        }
                                        i_3 = &i_3[4];
                                    } while (i_3 != u"DFBR");
                                    if (((!(i_3[1] == edi_1 && i_7 == 0)) && var_216_1 == 0))
                                    {
                                        int32_t* var_248_6 = &var_214;
                                        sub_405b2c(data_424730, 0x450);
                                    label_40f2bf:
                                        edi = var_228;
                                        *edi = (*edi - 2);
                                    }
                                }
                            }
                            if (((((eax_10 != 0x28 && ((i_7 == 0 && var_216_1 == i_7) || i_7 != 0)) && ((((eax_21 != 0 && arg4 == 0) && (i_7 & 1) != 0) && var_216_1 == 0) || eax_21 == 0)) && arg2 == 0) || (((eax_10 == 0x28 && cond:1_1) && (!(i_3[1] == edi_1 && i_7 == 0))) && var_216_1 == 0)))
                            {
                                if (arg3 == 0)
                                {
                                    goto label_40f5ba;
                                }
                                *arg3 = i_6;
                                goto label_40f5ba;
                            }
                            if (eax_10 == 0x28)
                            {
                                if (((cond:1_1 && i_3[1] == edi_1) && i_7 == 0))
                                {
                                    int32_t ecx_9 = i_3[2];
                                    if (ecx_9 == 0)
                                    {
                                        goto label_40f2bf;
                                    }
                                    int32_t edi_2 = 1;
                                    do
                                    {
                                        var_224 = edi_2;
                                        int32_t eax_14;
                                        eax_14 = *((i_3 + edi_2) + 0xb);
                                        i_7 = sub_40f606(var_228, arg2, &i_6, arg4, arg5, arg6, arg7, *i_3, eax_14, edi_2, ecx_9);
                                        if (i_7 == 0)
                                        {
                                            break;
                                        }
                                        ecx_9 = i_3[2];
                                        edi_2 = (edi_2 + 1);
                                    } while (var_224 < ecx_9);
                                    if (i_7 != 0)
                                    {
                                        goto label_40f2bf;
                                    }
                                }
                                if ((!cond:1_1))
                                {
                                    if (wcschr(u"*@<?", var_214) == 0)
                                    {
                                        goto label_40f3c9;
                                    }
                                    if (data_4386ac == 0)
                                    {
                                        goto label_40f5ba;
                                    }
                                    if ((data_41450c & 0x40) != 0)
                                    {
                                        goto label_40f5ba;
                                    }
                                    void* esi_2 = (var_224 + 4);
                                    __alloca_probe_16((esi_2 * 2));
                                    int32_t* var_248_4 = &var_214;
                                    int32_t __saved_edi;
                                    sub_41214e(&__saved_edi, esi_2, u"$(%s)");
                                    int32_t var_258_1 = data_4386b0;
                                    int32_t* var_25c_1 = &__saved_edi;
                                    sub_405b2c(0, 0x44c);
                                    goto label_40f3c9;
                                }
                            }
                        }
                        else
                        {
                            *edi = sub_40f8b3(ecx_5);
                        label_40f5ba:
                            ecx_1 = (*edi + 2);
                            *edi = ecx_1;
                            edx_1 = ecx_1;
                            i_7 = *ecx_1;
                            i_8 = i_7;
                            if (i_7 == 0)
                            {
                                break;
                            }
                            continue;
                        }
                    }
                }
                if (arg3 != 0)
                {
                    *arg3 = i_6;
                }
                i_7 = 0;
                break;
            }
            if (arg3 == 0)
            {
                break;
            }
            *arg3 = i_6;
            break;
        }
    }
    if ((i_7 == 0 || ((i_7 != 0 && i_7 != 0x24) && arg3 != 0)))
    {
        i_7 = 1;
    }
    CookieCheckFunction(i_7);
    return i_7;
}

uint32_t __fastcall sub_40f606(int32_t* arg1, int32_t*** arg2, int32_t* arg3, uint32_t arg4, int32_t arg5, int32_t arg6, char arg7, int32_t arg8, char arg9, int32_t arg10, int32_t arg11)
{
    int32_t esi = *arg1;
    uint32_t eax_1;
    if (sub_40f012(arg1, arg2, arg3, arg4, arg5, arg6, arg7, 1) == 0)
    {
    label_40f76e:
        eax_1 = 0;
    }
    else
    {
        if ((arg9 == 0 && *arg1 == esi))
        {
            if ((arg7 & 4) != 0)
            {
                goto label_40f76e;
            }
            int32_t var_24_1 = arg8;
            int32_t var_28_1 = arg10;
            sub_405b2c(data_424730, 0x44e);
        }
        char ebx = (arg7 & 4);
        if (**arg1 == 0)
        {
            if (ebx != 0)
            {
                goto label_40f76e;
            }
            sub_405b2c(data_424730, 0x3e8);
            ebx = 0;
        }
        int16_t* eax_2 = *arg1;
        uint32_t ecx_1 = *eax_2;
        *arg1 = &eax_2[1];
        if ((ecx_1 != 0x2c && ecx_1 != 0x29))
        {
            if (ebx != 0)
            {
                goto label_40f76e;
            }
            sub_405b2c(data_424730, 0x3e8);
        }
        int32_t esi_1 = arg11;
        if (arg10 >= esi_1)
        {
            if (arg10 != esi_1)
            {
                goto label_40f76a;
            }
            if (ecx_1 == 0x29)
            {
                goto label_40f76a;
            }
            if (ebx != 0)
            {
                goto label_40f76e;
            }
            int32_t ebx_1 = 0;
            int16_t i;
            do
            {
                ebx_1 = (ebx_1 + 1);
                sub_40f012(arg1, arg2, arg3, arg4, arg5, arg6, arg7, 1);
                if (**arg1 == 0)
                {
                    sub_405b2c(data_424730, 0x3e8);
                }
                int16_t* eax_5 = *arg1;
                i = *eax_5;
                *arg1 = &eax_5[1];
            } while (i == 0x2c);
            esi_1 = arg11;
            int32_t var_24_3 = (ebx_1 + esi_1);
            goto label_40f753;
        }
        if (ecx_1 == 0x2c)
        {
            goto label_40f76a;
        }
        if (ebx != 0)
        {
            goto label_40f76e;
        }
        int32_t var_24_2 = arg10;
    label_40f753:
        int32_t var_28_6 = esi_1;
        int32_t var_2c_2 = arg8;
        sub_405b2c(data_424730, 0x44f);
    label_40f76a:
        eax_1 = 1;
    }
    return eax_1;
}

int16_t* __fastcall sub_40f779(int16_t* arg1, int16_t* arg2, char* arg3, int32_t* arg4)
{
    int16_t* var_8 = arg1;
    int16_t* esi = arg1;
    int16_t* edi = arg2;
    uint32_t eax = *esi;
    if (eax != 0)
    {
        uint32_t ecx = eax;
        while (ecx != 0x29)
        {
            if (ecx == 0x3a)
            {
                break;
            }
            if (sub_40efd4(ecx) != 0)
            {
                break;
            }
            if (ecx == 0x5e)
            {
                esi = &esi[1];
                ecx = *esi;
                if (sub_403b50(ecx) == 0)
                {
                    uint32_t var_18_1 = *esi;
                    sub_405b2c(data_424730, 0x3e9);
                }
            }
            int16_t eax_2 = *esi;
            esi = &esi[1];
            *edi = eax_2;
            edi = &edi[1];
            uint32_t eax_4 = *esi;
            ecx = eax_4;
            if (eax_4 == 0)
            {
                break;
            }
        }
    }
    int32_t* ebx_1 = arg4;
    *ebx_1 = ((edi - arg2) >> 1);
    *edi = 0;
    int16_t i_5 = *esi;
    char eax_8 = sub_40efd4(i_5);
    *arg3 = eax_8;
    if (eax_8 == 0)
    {
        int16_t i_2 = i_5;
        if (i_5 != 0x29)
        {
            int16_t i_3 = i_5;
            int16_t i;
            do
            {
                int16_t i_4 = i_3;
                if (i_3 == 0x5e)
                {
                    esi = &esi[1];
                    i_4 = *esi;
                }
                i_2 = i_4;
                if (i_4 == 0)
                {
                    break;
                }
                esi = &esi[1];
                i = *esi;
                i_3 = i;
                i_2 = i;
            } while (i != 0x29);
            ebx_1 = arg4;
        }
        if (i_2 != 0x29)
        {
            sub_405b2c(data_424730, 0x3e8);
        }
        if (*ebx_1 > 0x101)
        {
            sub_405b2c(data_424730, 0x434);
        }
    }
    else
    {
        char i_1;
        do
        {
            esi = &esi[1];
            if (*esi == 0)
            {
                sub_405b2c(data_424730, 0x410);
            }
            char* ecx_2;
            ecx_2 = *esi;
            i_1 = sub_40efd4(ecx_2);
        } while (i_1 != 0);
    }
    return esi;
}

void* __fastcall sub_40f8b3(int16_t* arg1)
{
    if (*arg1 == 0)
    {
        goto label_40f947;
    }
    uint32_t eax_1 = arg1[1];
    void* eax_2;
    if (eax_1 == 0x5e)
    {
        eax_2 = &arg1[1];
    }
    else
    {
        if (eax_1 != 0x28)
        {
            goto label_40f947;
        }
        uint32_t eax_3 = arg1[2];
        if ((eax_3 == 0x5e || (eax_3 != 0x5e && eax_3 != 0x40)))
        {
            eax_2 = &arg1[2];
        }
        if ((eax_3 != 0x5e && eax_3 == 0x40))
        {
            uint32_t eax_4 = arg1[3];
            uint32_t eax_5;
            wchar16* eax_6;
            int16_t eax_7;
            if (eax_4 == 0x5e)
            {
                eax_5 = arg1[4];
            }
            else if (eax_4 != 0x29)
            {
                eax_6 = wcschr(u"DFBR", eax_4);
                if (eax_6 != 0)
                {
                    eax_7 = arg1[4];
                    if (eax_7 == 0x5e)
                    {
                        eax_5 = arg1[5];
                    }
                }
            }
            if ((eax_4 == 0x5e || (((eax_4 != 0x5e && eax_4 != 0x29) && eax_6 != 0) && eax_7 == 0x5e)))
            {
                uint32_t var_10_2 = eax_5;
                sub_405b2c(data_424730, 0x3e9);
            label_40f947:
                eax_2 = arg1;
            }
            if ((eax_4 != 0x5e && eax_4 != 0x29))
            {
                if ((eax_6 != 0 && eax_7 != 0x5e))
                {
                    eax_2 = &arg1[4];
                    if (eax_7 != 0x29)
                    {
                        goto label_40f947;
                    }
                }
                if (eax_6 == 0)
                {
                    goto label_40f947;
                }
            }
            if (eax_4 == 0x29)
            {
                eax_2 = &arg1[3];
            }
        }
    }
    return eax_2;
}

wchar16* __fastcall sub_40f94d(wchar16* arg1)
{
    wchar16* str = arg1;
    if (wcschr(str, 0x24) != 0)
    {
        wchar16* str_2 = str;
        int32_t* i_1 = nullptr;
        sub_40f012(&str_2, &i_1, nullptr, 0, 0, 0, 0, 0);
        int32_t* i = i_1;
        wchar16* str_1 = str;
        wchar16* str_3 = nullptr;
        void var_1c;
        sub_40f9d0(&var_1c, &str_1, 0xff, &i_1, 0, &str_3);
        str = str_3;
        i_1 = i;
        if (i != 0)
        {
            int32_t* i_3 = data_435698;
            int32_t* i_2 = i;
            do
            {
                i = *i;
                *i_2 = i_3;
                i_3 = i_2;
                i_1 = i;
                i_2 = i;
            } while (i != 0);
            data_435698 = i_3;
        }
    }
    return str;
}

int32_t* __fastcall sub_40f9d0(int32_t* arg1, int32_t* arg2, char arg3, int32_t** arg4, char arg5, int32_t* arg6)
{
    void var_860;
    int32_t var_c = (__security_cookie ^ &var_860);
    int32_t* edi = arg2;
    void** var_858 = edi;
    int32_t eax_1;
    eax_1 = arg3;
    char var_845 = eax_1;
    char var_850 = eax_1;
    int16_t* edx = *edi;
    int32_t var_18 = 0;
    void var_820;
    void* var_20 = &var_820;
    int32_t var_1c = 0x400;
    int16_t i_6 = *edx;
    int16_t i_2 = 0;
    bool var_859 = false;
    int16_t i_5 = i_6;
    if (i_6 != 0)
    {
        while (true)
        {
            int16_t i_3 = i_5;
            uint32_t i_4;
            int16_t i;
            do
            {
                i_4 = i_3;
                if (i_4 == 0x24)
                {
                    break;
                }
                bool ecx;
                if (i_4 != 0x22)
                {
                    ecx = var_859;
                }
                else
                {
                    ecx = var_859 == 0;
                    var_859 = ecx;
                }
                if (arg5 != 0)
                {
                    if (i_4 == 0x2c)
                    {
                        break;
                    }
                    if ((i_4 != 0x2c && i_4 == 0x29))
                    {
                        break;
                    }
                }
                if ((ecx == 0 && i_4 == 0x5e))
                {
                    sub_403b80(&var_820, 0x5e);
                    *edi = (*edi + 2);
                    if (**edi == 0x22)
                    {
                        var_859 = true;
                    }
                }
                int16_t* eax_5 = *edi;
                int16_t ecx_2 = *eax_5;
                *edi = &eax_5[1];
                sub_403b80(&var_820, ecx_2);
                edx = *edi;
                i = *edx;
                i_3 = i;
            } while (i != 0);
            if (i_4 != 0x24)
            {
                break;
            }
            void* eax_10 = &edx[1];
            void* esi_1 = (eax_10 + 2);
            void* var_84c = eax_10;
            int32_t var_86c_3;
            wchar16* eax_9;
            if (*eax_10 == 0x28)
            {
                eax_9 = wcschr(u"*@<?", *esi_1);
                if (eax_9 == 0)
                {
                    edx = *edi;
                    eax_10 = var_84c;
                }
                else
                {
                    var_86c_3 = 3;
                label_40fb12:
                    sub_41008c(&var_820, edi, var_86c_3);
                }
            }
            if ((((*eax_10 == 0x28 && eax_9 == 0) || *eax_10 != 0x28) && *eax_10 != 0x24))
            {
                if (wcschr(u"*@<?", edx[1]) != 0)
                {
                    var_86c_3 = 1;
                    goto label_40fb12;
                }
                void* eax_16 = *edi;
                char eax_19;
                if (*(eax_16 + 2) == 0x28)
                {
                    void* eax_18 = wcspbrk((eax_16 + 4), u" \t\n:)");
                    var_84c = eax_18;
                    eax_19 = sub_40efd4(*eax_18);
                    if (eax_19 != 0)
                    {
                        int32_t eax_20 = *edi;
                        void* ecx_9 = (var_84c + 2);
                        int32_t edi_1 = (eax_20 + 4);
                        var_84c = ecx_9;
                        int32_t esi_5 = (((eax_18 - eax_20) >> 1) - 2);
                        *var_858 = ecx_9;
                        ecx_9 = *ecx_9;
                        if (sub_40efd4(ecx_9) != 0)
                        {
                            void* esi_6 = var_84c;
                            char i_1;
                            do
                            {
                                esi_6 = (esi_6 + 2);
                                *var_858 = esi_6;
                                ecx_9 = *esi_6;
                                i_1 = sub_40efd4(ecx_9);
                            } while (i_1 != 0);
                        }
                        void* var_86c_6 = ecx_9;
                        void* var_870_2 = ecx_9;
                        bool cond:0_1 = *((eax_20 + (esi_5 << 1)) + 2) == 0x69;
                        char eax_24;
                        int32_t ecx_10;
                        eax_24 = sub_411d59(edi_1, esi_5, u"subst", 5);
                        char eax_25;
                        if (eax_24 == 0)
                        {
                            int32_t var_86c_7 = ecx_10;
                            int32_t var_870_3 = ecx_10;
                            int32_t ecx_11;
                            eax_25 = sub_411d59(edi_1, esi_5, u"substi", 6);
                            if (eax_25 == 0)
                            {
                                int32_t var_86c_8 = ecx_11;
                                int32_t var_870_4 = ecx_11;
                                char eax_26;
                                int32_t ecx_12;
                                eax_26 = sub_411d59(edi_1, esi_5, u"strip", 5);
                                if (eax_26 != 0)
                                {
                                    edi = var_858;
                                    sub_410b3b(&var_820, var_850, arg4);
                                }
                                else
                                {
                                    int32_t var_86c_10 = ecx_12;
                                    int32_t var_870_6 = ecx_12;
                                    char eax_27;
                                    int32_t ecx_14;
                                    eax_27 = sub_411d59(edi_1, esi_5, u"filter", 6);
                                    char var_86c_28;
                                    char eax_28;
                                    if (eax_27 == 0)
                                    {
                                        int32_t var_86c_11 = ecx_14;
                                        int32_t var_870_7 = ecx_14;
                                        int32_t ecx_15;
                                        eax_28 = sub_411d59(edi_1, esi_5, u"filteri", 7);
                                        if (eax_28 == 0)
                                        {
                                            int32_t var_86c_12 = ecx_15;
                                            int32_t var_870_8 = ecx_15;
                                            char eax_29;
                                            int32_t ecx_16;
                                            eax_29 = sub_411d59(edi_1, esi_5, u"filterout", 9);
                                            char eax_30;
                                            if (eax_29 == 0)
                                            {
                                                int32_t var_86c_13 = ecx_16;
                                                int32_t var_870_9 = ecx_16;
                                                int32_t ecx_17;
                                                eax_30 = sub_411d59(edi_1, esi_5, u"filterouti", 0xa);
                                                if (eax_30 == 0)
                                                {
                                                    int32_t var_86c_14 = ecx_17;
                                                    int32_t var_870_10 = ecx_17;
                                                    char eax_31;
                                                    int32_t ecx_18;
                                                    eax_31 = sub_411d59(edi_1, esi_5, u"findstring", 0xa);
                                                    char eax_32;
                                                    if (eax_31 == 0)
                                                    {
                                                        int32_t var_86c_15 = ecx_18;
                                                        int32_t var_870_11 = ecx_18;
                                                        int32_t ecx_19;
                                                        eax_32 = sub_411d59(edi_1, esi_5, u"findstringi", 0xb);
                                                        if (eax_32 == 0)
                                                        {
                                                            int32_t var_86c_16 = ecx_19;
                                                            int32_t var_870_12 = ecx_19;
                                                            char eax_33;
                                                            int32_t ecx_20;
                                                            eax_33 = sub_411d59(edi_1, esi_5, u"abspath", 7);
                                                            if (eax_33 != 0)
                                                            {
                                                                edi = var_858;
                                                                sub_410d86(&var_820, var_850, arg4);
                                                            }
                                                            else
                                                            {
                                                                int32_t var_86c_18 = ecx_20;
                                                                int32_t var_870_14 = ecx_20;
                                                                char eax_34;
                                                                int32_t ecx_22;
                                                                eax_34 = sub_411d59(edi_1, esi_5, u"basename", 8);
                                                                if (eax_34 != 0)
                                                                {
                                                                    edi = var_858;
                                                                    sub_410ed7(&var_820, var_850, arg4);
                                                                }
                                                                else
                                                                {
                                                                    int32_t var_86c_20 = ecx_22;
                                                                    int32_t var_870_16 = ecx_22;
                                                                    char eax_35;
                                                                    int32_t ecx_24;
                                                                    eax_35 = sub_411d59(edi_1, esi_5, u"patsubst", 8);
                                                                    char eax_36;
                                                                    if (eax_35 == 0)
                                                                    {
                                                                        int32_t var_86c_21 = ecx_24;
                                                                        int32_t var_870_17 = ecx_24;
                                                                        int32_t ecx_25;
                                                                        eax_36 = sub_411d59(edi_1, esi_5, u"patsubsti", 9);
                                                                        if (eax_36 == 0)
                                                                        {
                                                                            int32_t var_86c_22 = ecx_25;
                                                                            int32_t var_870_18 = ecx_25;
                                                                            char eax_37;
                                                                            int32_t ecx_26;
                                                                            eax_37 = sub_411d59(edi_1, esi_5, u"lowercase", 9);
                                                                            if (eax_37 != 0)
                                                                            {
                                                                                edi = var_858;
                                                                                sub_411131(&var_820, var_850, arg4);
                                                                            }
                                                                            else
                                                                            {
                                                                                int32_t var_86c_24 = ecx_26;
                                                                                int32_t var_870_20 = ecx_26;
                                                                                if (sub_411d59(edi_1, esi_5, u"uppercase", 9) == 0)
                                                                                {
                                                                                    sub_405b2c(data_424730, 0x410);
                                                                                    edi = var_858;
                                                                                }
                                                                                else
                                                                                {
                                                                                    edi = var_858;
                                                                                    sub_41119f(&var_820, var_850, arg4);
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    if ((eax_35 != 0 || (eax_35 == 0 && eax_36 != 0)))
                                                                    {
                                                                        edi = var_858;
                                                                        sub_410fc5(&var_820, edi, var_850, arg4, cond:0_1);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    if ((eax_31 != 0 || (eax_31 == 0 && eax_32 != 0)))
                                                    {
                                                        edi = var_858;
                                                        sub_410ce1(&var_820, edi, var_850, arg4, cond:0_1);
                                                    }
                                                }
                                            }
                                            if ((eax_29 != 0 || (eax_29 == 0 && eax_30 != 0)))
                                            {
                                                var_86c_28 = 0;
                                                goto label_40feed;
                                            }
                                        }
                                    }
                                    if ((eax_27 != 0 || (eax_27 == 0 && eax_28 != 0)))
                                    {
                                        var_86c_28 = 1;
                                    label_40feed:
                                        edi = var_858;
                                        sub_410bc6(&var_820, edi, var_850, arg4, cond:0_1, var_86c_28);
                                    }
                                }
                            }
                        }
                        if ((eax_24 != 0 || (eax_24 == 0 && eax_25 != 0)))
                        {
                            edi = var_858;
                            sub_410a88(&var_820, edi, var_850, arg4, cond:0_1);
                        }
                    }
                }
                if ((*(eax_16 + 2) != 0x28 || (*(eax_16 + 2) == 0x28 && eax_19 == 0)))
                {
                    int32_t** ecx_34 = arg4;
                    if (*ecx_34 == 0)
                    {
                        sub_405b2c(data_424730, 0x410);
                        ecx_34 = arg4;
                    }
                    int32_t** esi_7 = *ecx_34;
                    *ecx_34 = *esi_7;
                    wchar16* eax_40 = wcschr(esi_7[1], 0x24);
                    uint8_t* ecx_35 = esi_7[1];
                    if (eax_40 == 0)
                    {
                        uint8_t* var_86c_32 = ecx_35;
                        uint8_t* var_870_31 = ecx_35;
                        uint8_t* var_870_32 = ecx_35;
                        do
                        {
                            eax_40 = *ecx_35;
                            ecx_35 = &ecx_35[2];
                        } while (eax_40 != i_2);
                        sub_4105d7(&var_820, edi, var_870_32, ((ecx_35 - &ecx_35[2]) >> 1));
                    }
                    else
                    {
                        uint8_t* var_840_2 = ecx_35;
                        var_84c = nullptr;
                        uint8_t** eax_41 = sub_40f9d0(var_850, arg4, 0, &var_84c);
                        sub_4105d7(&var_820, edi, *eax_41, eax_41[1]);
                        if (var_84c != 0)
                        {
                            operator new(var_84c);
                        }
                    }
                }
            }
            if (((((*eax_10 == 0x28 && eax_9 == 0) || *eax_10 != 0x28) && *eax_10 != 0x24) || (*eax_10 == 0x28 && eax_9 != 0)))
            {
                edx = *edi;
                int16_t i_7 = *edx;
                i_5 = i_7;
                if (i_7 == 0)
                {
                    break;
                }
                continue;
            }
            if ((((*eax_10 == 0x28 && eax_9 == 0) || *eax_10 != 0x28) && *eax_10 == 0x24))
            {
                uint32_t eax_11 = *esi_1;
                int32_t var_86c_4;
                if (eax_11 == 0x5e)
                {
                label_40fb75:
                    var_86c_4 = 5;
                }
                else
                {
                    if (var_845 != 1)
                    {
                        goto label_40fb75;
                    }
                    if (eax_11 == 0x40)
                    {
                        var_86c_4 = 2;
                    }
                    else
                    {
                        if (eax_11 == 0x28)
                        {
                            esi_1 = (esi_1 + 2);
                        }
                        uint32_t eax_12 = *(esi_1 + 2);
                        if ((eax_12 != 0x46 && (eax_12 != 0x44 && (eax_12 != 0x42 && eax_12 != 0x52))))
                        {
                            goto label_40fb75;
                        }
                        if (*(esi_1 + 4) != 0x29)
                        {
                            goto label_40fb75;
                        }
                        var_86c_4 = 4;
                    }
                }
                var_86c_3 = var_86c_4;
                goto label_40fb12;
            }
        }
    }
    sub_403b80(&var_820, 0);
    sub_403c20(&var_820, arg1, arg6);
    CookieCheckFunction(arg1);
    return arg1;
}

int32_t* __fastcall sub_410022(int32_t* arg1, int32_t* arg2, char arg3, int32_t** arg4, char arg5, int32_t* arg6)
{
    int32_t* var_8 = arg1;
    sub_40f9d0(arg1, arg2, arg3, arg4, 1, arg6);
    if (**arg2 == 0)
    {
        sub_405b2c(data_424730, 0x410);
    }
    int16_t* eax_1 = *arg2;
    uint32_t ecx_1 = *eax_1;
    *arg2 = &eax_1[1];
    if (((arg5 == 0 && ecx_1 != 0x2c) || (arg5 != 0 && ecx_1 != 0x29)))
    {
        sub_405b2c(data_424730, 0x410);
    }
    return arg1;
}

int32_t __fastcall sub_41008c(uint8_t* arg1, int32_t* arg2, int32_t arg3)
{
    uint8_t* var_8 = arg1;
    uint8_t* var_c = arg1;
    void* const __return_addr_1 = __return_addr;
    int32_t __saved_ebp;
    int32_t eax_1 = (__security_cookie ^ &__saved_ebp);
    int32_t var_14 = eax_1;
    void** i = nullptr;
    char var_82a = 0;
    char var_829 = 0;
    int32_t var_830 = 1;
    int32_t edx_6;
    int32_t edx_7;
    switch (arg3)
    {
        case 1:
        {
            edx_7 = 1;
            break;
        }
        case 2:
        {
            edx_6 = 1;
            break;
        }
        case 3:
        {
            edx_7 = 2;
            var_82a = 1;
            break;
        }
        case 4:
        {
            edx_6 = 4;
            var_830 = 4;
            var_82a = 1;
            break;
        }
    }
    uint8_t* ecx;
    if ((arg3 == 2 || arg3 == 4))
    {
        ecx = data_424f48;
    }
    else if ((arg3 == 1 || arg3 == 3))
    {
        int32_t edi_1 = *arg2;
        uint32_t ecx_1 = *(edi_1 + (edx_7 << 1));
        if (ecx_1 == 0x2a)
        {
            if (*((edi_1 + (edx_7 << 1)) + 2) == 0x2a)
            {
                i = data_424f44;
                edx_7 = (edx_7 + 1);
            }
            else
            {
                ecx = data_424f58;
                var_829 = 1;
            }
        }
        if (ecx_1 == 0x3c)
        {
            ecx = data_424f4c;
        }
        if (ecx_1 == 0x3f)
        {
            i = data_424f50;
        }
        if ((((ecx_1 == 0x2a && *((edi_1 + (edx_7 << 1)) + 2) == 0x2a) || ecx_1 == 0x3f) || (((ecx_1 != 0x2a && ecx_1 != 0x3c) && ecx_1 != 0x3f) && ecx_1 != 0x40)))
        {
            ecx = nullptr;
        }
        if (ecx_1 == 0x40)
        {
            ecx = data_424f54;
        }
        edx_6 = (edx_7 + 1);
        var_830 = edx_6;
    }
    if ((((arg3 == 1 || arg3 == 2) || arg3 == 3) || arg3 == 4))
    {
        uint8_t* var_848 = nullptr;
        void* edi_2 = nullptr;
        void var_83c;
        uint8_t* ecx_6;
        uint8_t* esi_2;
        if ((ecx != 0 && i == 0))
        {
            uint8_t* edi_6 = ecx;
            uint8_t* var_840_1 = ecx;
            uint8_t* esi_3 = ecx;
            void* ecx_16;
            do
            {
                ecx_16 = *edi_6;
                edi_6 = &edi_6[2];
            } while (ecx_16 != 0);
            edi_2 = ((edi_6 - &edi_6[2]) >> 1);
            char var_82b = 0;
            if (var_829 != 0)
            {
                int32_t* eax_8 = sub_410488(&var_83c, 0x52, esi_3, edi_2, 0, &var_82b);
                edx_6 = var_830;
                esi_3 = *eax_8;
                edi_2 = eax_8[1];
                var_840_1 = esi_3;
            }
            var_829 = 0;
            if (var_82a == 0)
            {
                ecx_6 = var_840_1;
            }
            else
            {
                edx_6 = *(*arg2 + (edx_6 << 1));
                int32_t* eax_11 = sub_410488(&var_83c, edx_6, esi_3, edi_2, 0, &var_829);
                ecx_6 = *eax_11;
                edi_2 = eax_11[1];
                var_840_1 = ecx_6;
            }
            if ((var_82b != 0 || (var_82b == 0 && var_829 != 0)))
            {
                esi_2 = sub_403d2a((edi_2 + 2));
                uint32_t edi_8 = (edi_2 * 2);
                *esi_2 = 0x22;
                memcpy(&esi_2[2], var_840_1, edi_8);
                ecx_6 = esi_2;
                *((edi_8 + esi_2) + 2) = 0x22;
                edi_2 = (edi_2 + 2);
            }
            if ((var_82b == 0 && var_829 == 0))
            {
                esi_2 = nullptr;
            }
        }
        if (((ecx != 0 && i != 0) || (ecx == 0 && i != 0)))
        {
            int32_t var_24_1 = 0x400;
            void var_828;
            void* var_28_1 = &var_828;
            int32_t var_20_1 = 0;
            while (i != 0)
            {
                if (var_82a == 0)
                {
                    sub_403bb0(&var_828, i[1]);
                }
                else
                {
                    int16_t* edi_3 = i[1];
                    var_829 = 0;
                    void* ecx_7;
                    do
                    {
                        ecx_7 = *edi_3;
                        edi_3 = &edi_3[1];
                    } while (ecx_7 != 0);
                    edx_6 = *(*arg2 + (edx_6 << 1));
                    uint8_t* var_844;
                    sub_410488(&var_844, edx_6, i[1], ((edi_3 - &edi_3[1]) >> 1), 0, &var_829);
                    if (var_829 != 0)
                    {
                        sub_403b80(&var_828, 0x22);
                    }
                    int32_t var_840;
                    sub_403be1(&var_828, var_844, var_840);
                    if (var_829 != 0)
                    {
                        sub_403b80(&var_828, 0x22);
                    }
                }
                if (*i != 0)
                {
                    sub_403b80(&var_828, 0x20);
                }
                i = *i;
                edx_6 = var_830;
            }
            sub_403b80(&var_828, 0);
            int32_t* eax_7 = sub_403c20(&var_828, &var_83c, &var_848);
            esi_2 = var_848;
            ecx_6 = *eax_7;
            edi_2 = eax_7[1];
        }
        if ((ecx == 0 && i == 0))
        {
            int16_t* esi_1 = *arg2;
            int16_t i_3 = *esi_1;
            int16_t i_2 = i_3;
            if (i_3 != 0)
            {
                int16_t i_1;
                do
                {
                    i_2 = i_3;
                    if (i_3 == 0x20)
                    {
                        break;
                    }
                    i_2 = i_3;
                    if (i_3 == 9)
                    {
                        break;
                    }
                    esi_1 = &esi_1[1];
                    i_1 = *esi_1;
                    i_3 = i_1;
                    i_2 = i_1;
                } while (i_1 != 0);
                edi_2 = nullptr;
            }
            *esi_1 = 0;
            int32_t var_85c_1 = *arg2;
            sub_405b2c(data_424730, 0xfa6);
            *esi_1 = i_2;
            esi_2 = nullptr;
            ecx_6 = nullptr;
        }
        eax_1 = sub_4105d7(arg1, arg2, ecx_6, edi_2);
        if (esi_2 != 0)
        {
            eax_1 = operator new(esi_2);
        }
    }
    if (((((arg3 != 1 && arg3 != 2) && arg3 != 3) && arg3 != 4) && arg3 == 5))
    {
        eax_1 = sub_403b80(arg1, 0x24);
        *arg2 = (*arg2 + 4);
    }
    CookieCheckFunction(eax_1);
    return eax_1;
}

int32_t* __fastcall sub_410488(int32_t* arg1, int16_t arg2, int16_t* arg3, void* arg4, char arg5, char* arg6)
{
    void* ecx = arg4;
    if (ecx == 0)
    {
        *arg6 = ecx;
        *arg1 = arg3;
        arg1[1] = ecx;
    }
    else
    {
        void* ebx_1 = nullptr;
        int16_t* edi_1 = arg3;
        if ((arg5 != 0 || (arg5 == 0 && *edi_1 != 0x22)))
        {
            *arg6 = 0;
        }
        if ((arg5 == 0 && *edi_1 == 0x22))
        {
            *arg6 = 1;
            int32_t eax_2;
            eax_2 = edi_1[(ecx - 1)] == 0x22;
            void var_10;
            int32_t* eax_4 = sub_411d29(&arg3, &var_10, 1, (ecx - (eax_2 + 1)));
            edi_1 = *eax_4;
            ecx = eax_4[1];
            arg3 = edi_1;
            arg4 = ecx;
        }
        char* edx = 0xffffffff;
        arg6 = 0xffffffff;
        arg5 = (ecx - 1);
        if ((ecx - 1) >= 0)
        {
            while (true)
            {
                uint32_t eax_7 = edi_1[arg5];
                int16_t var_c_1 = eax_7;
                if ((eax_7 != 0x5c && var_c_1 != 0x2f))
                {
                    if ((var_c_1 == 0x2e && arg6 == 0xffffffff))
                    {
                        arg6 = arg5;
                    }
                    int32_t temp5_1 = arg5;
                    arg5 = (arg5 - 1);
                    if ((temp5_1 - 1) < 0)
                    {
                        break;
                    }
                    continue;
                }
                edx = arg5;
                break;
            }
        }
        uint32_t eax_10 = arg2;
        char* var_20_2;
        if (((eax_10 != 0x42 && eax_10 != 0x44) && eax_10 != 0x46))
        {
            if ((eax_10 == 0x52 && arg6 != 0xffffffff))
            {
                var_20_2 = arg6;
                goto label_4105c9;
            }
            *arg1 = edi_1;
            arg1[1] = ecx;
        }
        if (eax_10 == 0x44)
        {
            if (edx != 0xffffffff)
            {
                if ((edx == 2 && edi_1[1] == 0x3a))
                {
                    edx = 3;
                }
                var_20_2 = edx;
                goto label_4105c9;
            }
            if (edi_1[1] != 0x3a)
            {
                *arg1 = &data_40180c;
                arg1[1] = 1;
            }
            else
            {
                var_20_2 = 2;
            label_4105c9:
                sub_411d29(&arg3, arg1, ebx_1, var_20_2);
            }
        }
        if ((eax_10 == 0x42 || eax_10 == 0x46))
        {
            if (edx != 0xffffffff)
            {
                ebx_1 = &edx[1];
            }
            else if ((ecx > 1 && edi_1[1] == 0x3a))
            {
                ebx_1 = 2;
            }
            if ((arg2 == 0x42 && arg6 != 0xffffffff))
            {
                ecx = (arg6 - ebx_1);
            }
            var_20_2 = ecx;
            goto label_4105c9;
        }
    }
    return arg1;
}

wchar16* __fastcall sub_4105d7(uint8_t* arg1, int32_t* arg2, uint8_t* arg3, int32_t arg4)
{
    int16_t* str = (*arg2 + 2);
    *arg2 = str;
    if (*str == 0x5e)
    {
        str = &str[1];
        *arg2 = str;
    }
    wchar16* eax_1 = wcschr(str, 0x3a);
    int16_t* ecx = *arg2;
    wchar16* edi = eax_1;
    wchar16* var_8 = edi;
    int16_t i_1 = *ecx;
    if (i_1 != 0)
    {
        int16_t i = i_1;
        while (i != 0x29)
        {
            if (i == 0x5e)
            {
                ecx = &ecx[1];
            }
            ecx = &ecx[1];
            int16_t i_2 = *ecx;
            i = i_2;
            if (i_2 == 0)
            {
                break;
            }
        }
        edi = var_8;
    }
    wchar16* eax_3;
    if (((**arg2 != 0x28 || (**arg2 == 0x28 && edi == 0)) || ((**arg2 == 0x28 && edi != 0) && edi >= ecx)))
    {
        sub_403be1(arg1, arg3, arg4);
        int16_t* ecx_3 = *arg2;
        int16_t* edx_1 = ecx_3;
        uint32_t eax_4 = *ecx_3;
        int16_t edi_1 = eax_4;
        if (eax_4 == 0x24)
        {
            ecx_3 = &ecx_3[1];
            edx_1 = ecx_3;
            *arg2 = ecx_3;
            edi_1 = *edx_1;
        }
        if (edi_1 == 0x28)
        {
            do
            {
                ecx_3 = &ecx_3[1];
                *arg2 = ecx_3;
            } while (*ecx_3 != 0x29);
            edx_1 = ecx_3;
        }
        else if ((edi_1 == 0x2a && ecx_3[1] == 0x2a))
        {
            edx_1 = &ecx_3[1];
        }
        eax_3 = &edx_1[1];
    }
    if (((**arg2 == 0x28 && edi != 0) && edi < ecx))
    {
        sub_4106c2(arg1, &var_8, arg3, arg4);
        eax_3 = var_8;
    }
    *arg2 = eax_3;
    return eax_3;
}

int32_t __fastcall sub_4106c2(uint8_t* arg1, int32_t* arg2, uint8_t* arg3, int32_t arg4)
{
    uint8_t* var_8 = arg1;
    uint8_t* var_c = arg1;
    void* const __return_addr_1 = __return_addr;
    __security_cookie;
    int32_t* esi = arg2;
    *esi = (*esi + 2);
    int16_t* edi = *esi;
    int32_t* var_40 = esi;
    int16_t* var_30 = edi;
    int32_t var_3c = 0x3d;
    int16_t i_10 = *edi;
    int32_t var_34 = 0x5e;
    int16_t i_7 = i_10;
    if (i_10 != 0)
    {
        int16_t i_4 = i_10;
        int16_t i;
        do
        {
            i_7 = i_4;
            if (i_4 == 0x3d)
            {
                break;
            }
            if (i_4 == 0x5e)
            {
                edi = &edi[1];
            }
            edi = &edi[1];
            i = *edi;
            i_4 = i;
            i_7 = i;
        } while (i != 0);
        esi = var_40;
        var_30 = edi;
    }
    if (i_7 != 0x3d)
    {
        sub_405b2c(data_424724, 0x3eb);
    }
    if (edi == *esi)
    {
        sub_405b2c(data_424724, 0x3ed);
    }
    int16_t i_11 = *edi;
    int16_t* var_38 = edi;
    int16_t i_8 = i_11;
    int32_t var_44 = 0x29;
    if (i_11 != 0)
    {
        int16_t i_5 = i_11;
        int16_t i_1;
        do
        {
            i_8 = i_5;
            if (i_5 == 0x29)
            {
                break;
            }
            if (i_5 == 0x5e)
            {
                edi = &edi[1];
            }
            edi = &edi[1];
            i_1 = *edi;
            i_5 = i_1;
            i_8 = i_1;
        } while (i_1 != 0);
        esi = var_40;
        var_38 = edi;
        edi = var_30;
    }
    if (i_8 != 0x29)
    {
        sub_405b2c(data_424724, 0x3e8);
    }
    int32_t eax_2 = sub_403d2a((((edi - *esi) >> 1) + 1));
    int16_t* esi_1 = *esi;
    int32_t edx = eax_2;
    int32_t var_30_1 = eax_2;
    int16_t i_6 = *esi_1;
    if (i_6 != 0x3d)
    {
        int16_t i_2;
        do
        {
            int16_t i_12 = i_6;
            if (i_6 == 0x5e)
            {
                esi_1 = &esi_1[1];
                i_12 = *esi_1;
            }
            esi_1 = &esi_1[1];
            *edx = i_12;
            edx = (edx + 2);
            i_2 = *esi_1;
            i_6 = i_2;
        } while (i_2 != 0x3d);
        eax_2 = var_30_1;
    }
    *edx = 0;
    int32_t eax_3 = sub_403d2a(((var_38 - edi) >> 1));
    void* esi_2 = &esi_1[1];
    int32_t ecx_13 = eax_3;
    int16_t i_13 = *esi_2;
    if (i_13 != 0x29)
    {
        int16_t i_9 = i_13;
        int16_t i_3;
        do
        {
            int16_t i_14 = i_9;
            if (i_9 == 0x5e)
            {
                esi_2 = (esi_2 + 2);
                i_14 = *esi_2;
            }
            esi_2 = (esi_2 + 2);
            *ecx_13 = i_14;
            ecx_13 = (ecx_13 + 2);
            i_3 = *esi_2;
            i_9 = i_3;
        } while (i_3 != 0x29);
    }
    *ecx_13 = 0;
    *var_40 = &var_38[1];
    uint8_t* var_2c = nullptr;
    int32_t var_1c = 0;
    int32_t var_18 = 0;
    sub_4120cf(&var_2c, eax_3, ((ecx_13 - eax_3) >> 1));
    uint8_t* eax_6 = &var_2c;
    if (var_18 >= 8)
    {
        eax_6 = var_2c;
    }
    int16_t* esi_3 = var_30_1;
    sub_410902(arg1, arg3, arg4, esi_3, ((edx - eax_2) >> 1), eax_6, var_1c);
    if (var_18 >= 8)
    {
        uint8_t* edx_2 = var_2c;
        void* ecx_19 = ((var_18 << 1) + 2);
        uint8_t* eax_7 = edx_2;
        if (ecx_19 >= 0x1000)
        {
            edx_2 = *(eax_7 - 4);
            ecx_19 = (ecx_19 + 0x23);
            if (((eax_7 - edx_2) - 4) > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }
        void* var_54_2 = ecx_19;
        operator new(edx_2);
    }
    free(esi_3);
    int32_t eax_10 = free(eax_3);
    CookieCheckFunction(eax_10);
    return eax_10;
}

int32_t* __thiscall sub_410902(uint8_t* arg1, uint8_t* arg2, int32_t arg3, int16_t* arg4, int32_t* arg5, uint8_t* arg6, int32_t arg7)
{
    int32_t* eax = arg5;
    uint8_t* edi = arg1;
    if (eax == 0)
    {
        eax = sub_403be1(arg1, arg2, arg3);
    }
    else
    {
        int32_t esi_1 = arg3;
        if (esi_1 != 0)
        {
            uint8_t* ebx_1 = arg2;
            while (true)
            {
                uint8_t* var_28_2 = arg1;
                int32_t eax_1 = sub_411cc2(&arg2, arg4, eax);
                if (eax_1 != 0xffffffff)
                {
                    void var_10;
                    int32_t* eax_2 = sub_411d29(&arg2, &var_10, 0, eax_1);
                    sub_403be1(edi, *eax_2, eax_2[1]);
                    sub_403be1(edi, arg6, arg7);
                    void var_18;
                    eax = sub_411d29(&arg2, &var_18, (arg5 + eax_1), 0xffffffff);
                    ebx_1 = *eax;
                    esi_1 = eax[1];
                }
                else
                {
                    arg1 = edi;
                    eax = sub_403be1(arg1, ebx_1, esi_1);
                    ebx_1 = nullptr;
                    esi_1 = 0;
                }
                arg3 = esi_1;
                arg2 = ebx_1;
                if (esi_1 == 0)
                {
                    break;
                }
                eax = arg5;
            }
        }
    }
    return eax;
}

int32_t __thiscall sub_4109a9(uint8_t* arg1, uint8_t* arg2, int32_t arg3, int16_t* arg4, int32_t arg5, uint8_t* arg6, int32_t arg7)
{
    int32_t i;
    if (arg5 == 0)
    {
        i = sub_403be1(arg1, arg2, arg3);
    }
    else
    {
        int16_t eax_2 = towupper(*arg4);
        i = arg3;
        while (i != 0)
        {
            int32_t esi_1 = 0;
            if (i != 0)
            {
                do
                {
                    int16_t* ecx_1 = arg4;
                    uint32_t eax_5 = *(arg2 + (esi_1 << 1));
                    int16_t eax_6;
                    if (eax_5 != *ecx_1)
                    {
                        eax_6 = towupper(eax_5);
                        if (eax_6 == eax_2)
                        {
                            ecx_1 = arg4;
                        }
                    }
                    if ((((eax_5 != *ecx_1 && eax_6 == eax_2) || eax_5 == *ecx_1) && _wcsnicmp(&arg2[(esi_1 << 1)], ecx_1, arg5) == 0))
                    {
                        void var_10;
                        uint8_t** eax_10 = sub_411d29(&arg2, &var_10, 0, esi_1);
                        sub_403be1(arg1, *eax_10, eax_10[1]);
                        sub_403be1(arg1, arg6, arg7);
                        void var_18;
                        int32_t* eax_13 = sub_411d29(&arg2, &var_18, (arg5 + esi_1), 0xffffffff);
                        i = eax_13[1];
                        arg2 = *eax_13;
                        goto label_410a35;
                    }
                    i = arg3;
                    esi_1 = (esi_1 + 1);
                } while (esi_1 < i);
            }
            sub_403be1(arg1, arg2, i);
            i = 0;
            arg2 = nullptr;
        label_410a35:
            arg3 = i;
        }
    }
    return i;
}

int32_t* __fastcall sub_410a88(uint8_t* arg1, int32_t* arg2, char arg3, int32_t** arg4, char arg5)
{
    int32_t __saved_ebp;
    int32_t var_c = (__security_cookie ^ &__saved_ebp);
    uint8_t* var_1c = arg1;
    int32_t var_18 = 0;
    void var_14;
    void* edi = &var_14;
    *edi = 0;
    *(edi + 4) = 0;
    int16_t* var_2c;
    sub_410022(&var_2c, arg2, arg3, arg4, 0, &var_18);
    uint8_t* var_24;
    sub_410022(&var_24, arg2, arg3, arg4, 0, &var_14);
    uint8_t* var_34;
    void var_10;
    sub_410022(&var_34, arg2, arg3, arg4, 1, &var_10);
    uint8_t* ecx_3 = var_1c;
    uint8_t* var_48 = var_24;
    int16_t* var_50_3 = var_2c;
    uint8_t* var_58 = var_34;
    int32_t* eax_2;
    int32_t var_30;
    int32_t* var_28;
    int32_t var_20;
    if (arg5 == 0)
    {
        eax_2 = sub_410902(ecx_3, var_58, var_30, var_50_3, var_28, var_48, var_20);
    }
    else
    {
        eax_2 = sub_4109a9(ecx_3, var_58, var_30, var_50_3, var_28, var_48, var_20);
    }
    int32_t i = 3;
    int32_t* edi_3 = &var_c;
    do
    {
        edi_3 = &edi_3[-1];
        i = (i - 1);
        if (*edi_3 != 0)
        {
            eax_2 = operator new(*edi_3);
        }
    } while (i != 0);
    CookieCheckFunction(eax_2);
    return eax_2;
}

int16_t* __thiscall sub_410b3b(uint8_t* arg1, char arg2, int32_t** arg3)
{
    int32_t var_8 = 0;
    int16_t* var_20;
    int32_t* edx;
    sub_410022(&var_20, edx, arg2, arg3, 1, &var_8);
    int32_t var_1c;
    int32_t esi = var_1c;
    int16_t* eax = var_20;
    int16_t* var_18 = eax;
    int32_t var_14 = esi;
    if (esi != 0)
    {
        while (true)
        {
            uint8_t* var_10 = nullptr;
            int32_t var_c_1 = 0;
            eax = sub_41127b(&var_10, &var_18, eax, esi);
            esi = var_14;
            if (var_c_1 != 0)
            {
                eax = sub_403be1(arg1, var_10, var_c_1);
                if (esi == 0)
                {
                    break;
                }
                eax = sub_403b80(arg1, 0x20);
            }
            if (esi == 0)
            {
                break;
            }
            eax = var_18;
        }
    }
    if (var_8 != 0)
    {
        eax = operator new(var_8);
    }
    return eax;
}

int32_t __fastcall sub_410bc6(uint8_t* arg1, int32_t* arg2, char arg3, int32_t** arg4, char arg5, char arg6)
{
    int32_t var_2c = 0;
    int32_t var_28 = 0;
    int16_t* var_3c;
    sub_410022(&var_3c, arg2, arg3, arg4, 0, &var_2c);
    int16_t* var_34;
    sub_410022(&var_34, arg2, arg3, arg4, 1, &var_28);
    int32_t var_30;
    int32_t eax = var_30;
    int16_t* ecx_2 = var_34;
    int16_t* var_24 = ecx_2;
    int32_t var_20 = eax;
    if (eax != 0)
    {
        int16_t ebx;
        *ebx[1] = arg6;
        while (true)
        {
            uint8_t* var_c = nullptr;
            int32_t var_8_1 = 0;
            sub_41127b(&var_c, &var_24, ecx_2, eax);
            if (var_8_1 != 0)
            {
                uint32_t var_38;
                uint32_t eax_1 = var_38;
                int16_t* ecx_4 = var_3c;
                int16_t* var_1c = ecx_4;
                uint32_t var_18_1 = eax_1;
                if (eax_1 != 0)
                {
                    while (true)
                    {
                        int32_t var_14 = 0;
                        int32_t var_10_1 = 0;
                        sub_41127b(&var_14, &var_1c, ecx_4, eax_1);
                        int32_t var_58_4 = var_10_1;
                        int32_t var_5c_3 = var_14;
                        int32_t var_44 = 0;
                        int32_t var_40_1 = 0;
                        eax_1 = sub_411319(arg5, &var_44, var_c, var_8_1);
                        if (eax_1 != 0)
                        {
                            break;
                        }
                        eax_1 = var_18_1;
                        if (eax_1 == 0)
                        {
                            break;
                        }
                        ecx_4 = var_1c;
                    }
                }
                if ((eax_1 == 0 || (eax_1 != 0 && eax_1 == 0)))
                {
                    eax_1 = 0;
                }
                if ((eax_1 != 0 && eax_1 != 0))
                {
                    eax_1 = 1;
                }
                if (eax_1 == *ebx[1])
                {
                    if (ebx != 0)
                    {
                        sub_403b80(arg1, 0x20);
                    }
                    sub_403be1(arg1, var_c, var_8_1);
                    ebx = 1;
                }
            }
            eax = var_20;
            if (eax == 0)
            {
                break;
            }
            ecx_2 = var_24;
        }
    }
    int32_t i = 2;
    int16_t** edi_1 = &var_24;
    do
    {
        edi_1 = &edi_1[-1];
        i = (i - 1);
        if (*edi_1 != 0)
        {
            eax = operator new(*edi_1);
        }
    } while (i != 0);
    return eax;
}

int32_t __fastcall sub_410ce1(uint8_t* arg1, int32_t* arg2, char arg3, int32_t** arg4, char arg5)
{
    int32_t var_18 = 0;
    int32_t var_14 = 0;
    uint8_t* var_10;
    sub_410022(&var_10, arg2, arg3, arg4, 0, &var_18);
    int32_t var_20;
    sub_410022(&var_20, arg2, arg3, arg4, 1, &var_14);
    int32_t eax;
    int32_t esi_1;
    uint8_t* edi_1;
    int32_t var_c;
    if (arg5 == 0)
    {
        esi_1 = var_c;
        edi_1 = var_10;
        int32_t* var_34_3 = &var_20;
        eax = sub_411cc2(&var_20, edi_1, esi_1);
    }
    else
    {
        int32_t var_1c;
        eax = sub_41120d(var_10, var_c, var_20, var_1c);
        if (eax != 0)
        {
            esi_1 = var_c;
            edi_1 = var_10;
        }
    }
    if (((arg5 != 0 && eax != 0) || (arg5 == 0 && eax != 0xffffffff)))
    {
        eax = sub_403be1(arg1, edi_1, esi_1);
    }
    int32_t i = 2;
    uint8_t** edi_2 = &var_10;
    do
    {
        edi_2 = &edi_2[-1];
        i = (i - 1);
        if (*edi_2 != 0)
        {
            eax = operator new(*edi_2);
        }
    } while (i != 0);
    return eax;
}

uint32_t __thiscall sub_410d86(uint8_t* arg1, char arg2, int32_t** arg3)
{
    __security_cookie;
    int32_t var_24 = 0;
    uint32_t var_40;
    int32_t* edx;
    sub_410022(&var_40, edx, arg2, arg3, 1, &var_24);
    int32_t lpBuffer = sub_403d2a(0x8000);
    int32_t var_3c;
    int32_t edi = var_3c;
    uint32_t eax_3 = var_40;
    uint32_t var_34 = eax_3;
    int32_t var_30 = edi;
    if (edi != 0)
    {
        while (true)
        {
            uint8_t* var_2c = nullptr;
            void* var_28_1 = nullptr;
            eax_3 = sub_41127b(&var_2c, &var_34, eax_3, edi);
            edi = var_30;
            if (var_28_1 != 0)
            {
                int32_t* lpFileName_1 = nullptr;
                int32_t var_10_1 = 0;
                int32_t var_c_1 = 0;
                sub_4120cf(&lpFileName_1, var_2c, var_28_1);
                int32_t* lpFileName = &lpFileName_1;
                if (var_c_1 >= 8)
                {
                    lpFileName = lpFileName_1;
                }
                uint32_t eax_4 = GetFullPathNameW(lpFileName, 0x8000, lpBuffer, nullptr);
                char ebx_2 = (-eax_4);
                if (var_c_1 >= 8)
                {
                    int32_t* lpFileName_2 = lpFileName_1;
                    void* ecx_4 = ((var_c_1 << 1) + 2);
                    int32_t* lpFileName_3 = lpFileName_2;
                    if (ecx_4 >= 0x1000)
                    {
                        lpFileName_2 = lpFileName_3[-1];
                        ecx_4 = (ecx_4 + 0x23);
                        if (((lpFileName_3 - lpFileName_2) - 4) > 0x1f)
                        {
                            _invalid_parameter_noinfo_noreturn();
                            /* no return */
                        }
                    }
                    void* var_50_3 = ecx_4;
                    operator new(lpFileName_2);
                }
                if ((ebx_2 - ebx_2) != 0xff)
                {
                    sub_405b2c(data_424730, 0x410);
                }
                eax_3 = sub_403bb0(arg1, lpBuffer);
                if (edi == 0)
                {
                    break;
                }
                eax_3 = sub_403b80(arg1, 0x20);
            }
            if (edi == 0)
            {
                break;
            }
            eax_3 = var_34;
        }
    }
    if (lpBuffer != 0)
    {
        eax_3 = operator new(lpBuffer);
    }
    if (var_24 != 0)
    {
        eax_3 = operator new(var_24);
    }
    CookieCheckFunction(eax_3);
    return eax_3;
}

int16_t* __thiscall sub_410ed7(uint8_t* arg1, char arg2, int32_t** arg3)
{
    int32_t var_8 = 0;
    uint8_t* ebx = arg1;
    uint8_t* var_c = ebx;
    int16_t* var_2c;
    int32_t* edx;
    sub_410022(&var_2c, edx, arg2, arg3, 1, &var_8);
    int32_t var_28;
    int32_t edi = var_28;
    int16_t* eax = var_2c;
    int16_t* var_24 = eax;
    int32_t var_20 = edi;
    if (edi != 0)
    {
        while (true)
        {
            uint8_t* var_14 = nullptr;
            int16_t* var_10_1 = nullptr;
            sub_41127b(&var_14, &var_24, eax, edi);
            eax = var_10_1;
            edi = var_20;
            if (eax != 0)
            {
                uint8_t* edx_2 = var_14;
                void* ecx_2 = (eax - 1);
                void* esi_1 = 0xffffffff;
                uint8_t* var_34 = edx_2;
                int16_t* var_30_1 = eax;
                if (ecx_2 >= 0)
                {
                    void* temp1_1;
                    do
                    {
                        uint32_t ebx_1 = *(edx_2 + (ecx_2 << 1));
                        if (ebx_1 == 0x5c)
                        {
                            break;
                        }
                        if (ebx_1 == 0x2f)
                        {
                            break;
                        }
                        if ((ebx_1 == 0x2e && esi_1 == 0xffffffff))
                        {
                            esi_1 = ecx_2;
                        }
                        temp1_1 = ecx_2;
                        ecx_2 = (ecx_2 - 1);
                    } while ((temp1_1 - 1) >= 0);
                    if (esi_1 == 0xffffffff)
                    {
                        ebx = var_c;
                    }
                }
                uint8_t* var_1c;
                int16_t* var_18;
                if (((ecx_2 >= 0 && esi_1 == 0xffffffff) || ecx_2 < 0))
                {
                    var_1c = edx_2;
                    var_18 = eax;
                }
                if ((ecx_2 >= 0 && esi_1 != 0xffffffff))
                {
                    sub_411d29(&var_34, &var_1c, 0, esi_1);
                    eax = var_18;
                    edx_2 = var_1c;
                    ebx = var_c;
                }
                eax = sub_403be1(ebx, edx_2, eax);
                if (edi == 0)
                {
                    break;
                }
                eax = sub_403b80(ebx, 0x20);
            }
            if (edi == 0)
            {
                break;
            }
            eax = var_24;
        }
    }
    if (var_8 != 0)
    {
        eax = operator new(var_8);
    }
    return eax;
}

int16_t* __fastcall sub_410fc5(uint8_t* arg1, int32_t* arg2, char arg3, int32_t** arg4, char arg5)
{
    int32_t __saved_ebp;
    int32_t var_c = (__security_cookie ^ &__saved_ebp);
    int32_t var_18 = 0;
    void var_14;
    void* edi = &var_14;
    *edi = 0;
    *(edi + 4) = 0;
    int32_t var_50;
    sub_410022(&var_50, arg2, arg3, arg4, 0, &var_18);
    int32_t var_28;
    sub_410022(&var_28, arg2, arg3, arg4, 0, &var_14);
    int16_t* i_2;
    void var_10;
    sub_410022(&i_2, arg2, arg3, arg4, 1, &var_10);
    int32_t var_44;
    int32_t edi_3 = var_44;
    int16_t* i = i_2;
    int16_t* i_3 = i;
    int32_t var_3c = edi_3;
    if (edi_3 != 0)
    {
        while (true)
        {
            uint8_t* var_30 = nullptr;
            int32_t var_2c_1 = 0;
            i = sub_41127b(&var_30, &i_3, i, edi_3);
            edi_3 = var_3c;
            if (var_2c_1 != 0)
            {
                int32_t var_4c;
                int32_t var_6c_4 = var_4c;
                int32_t var_70_2 = var_50;
                uint8_t* var_38 = nullptr;
                int32_t var_34_1 = 0;
                char eax_2 = sub_411319(arg5, &var_38, var_30, var_2c_1);
                uint8_t* var_70_6;
                int32_t var_6c_8;
                char eax_3;
                uint8_t* ebx_1;
                if (eax_2 == 0)
                {
                    ebx_1 = arg1;
                    var_6c_8 = var_2c_1;
                    var_70_6 = var_30;
                }
                else
                {
                    int16_t* i_4;
                    i = i_4;
                    int32_t var_1c = 0;
                    ebx_1 = arg1;
                    if (i != 0)
                    {
                        int32_t esi_2;
                        do
                        {
                            eax_3 = sub_411493(&var_1c, var_28, i);
                            if (eax_3 != 0)
                            {
                                break;
                            }
                            esi_2 = var_1c;
                            sub_403b80(ebx_1, *(var_28 + (esi_2 << 1)));
                            i = i_4;
                            var_1c = (esi_2 + 1);
                        } while ((esi_2 + 1) < i);
                        if (eax_3 != 0)
                        {
                            sub_403be1(ebx_1, var_38, var_34_1);
                            void var_58;
                            uint8_t** eax_8 = sub_411d29(&var_28, &var_58, (var_1c + 1), 0xffffffff);
                            var_6c_8 = eax_8[1];
                            var_70_6 = *eax_8;
                        }
                    }
                }
                if ((eax_2 == 0 || ((eax_2 != 0 && i != 0) && eax_3 != 0)))
                {
                    i = sub_403be1(ebx_1, var_70_6, var_6c_8);
                }
                if (edi_3 == 0)
                {
                    break;
                }
                i = sub_403b80(ebx_1, 0x20);
            }
            if (edi_3 == 0)
            {
                break;
            }
            i = i_3;
        }
    }
    int32_t i_1 = 3;
    int32_t* edi_4 = &var_c;
    do
    {
        edi_4 = &edi_4[-1];
        i_1 = (i_1 - 1);
        if (*edi_4 != 0)
        {
            i = operator new(*edi_4);
        }
    } while (i_1 != 0);
    CookieCheckFunction(i);
    return i;
}

int32_t __thiscall sub_411131(uint8_t* arg1, char arg2, int32_t** arg3)
{
    int32_t var_8 = 0;
    int16_t* i_1;
    int32_t* edx;
    sub_410022(&i_1, edx, arg2, arg3, 1, &var_8);
    int32_t var_c;
    sub_403cac(arg1, var_c);
    int16_t* i = i_1;
    int32_t eax = var_c;
    for (void* ebx = &i[eax]; i != ebx; i = &i[1])
    {
        eax = sub_403b80(arg1, towlower(*i));
    }
    if (var_8 != 0)
    {
        eax = operator new(var_8);
    }
    return eax;
}

int32_t __thiscall sub_41119f(uint8_t* arg1, char arg2, int32_t** arg3)
{
    int32_t var_8 = 0;
    int16_t* i_1;
    int32_t* edx;
    sub_410022(&i_1, edx, arg2, arg3, 1, &var_8);
    int32_t var_c;
    sub_403cac(arg1, var_c);
    int16_t* i = i_1;
    int32_t eax = var_c;
    for (void* ebx = &i[eax]; i != ebx; i = &i[1])
    {
        eax = sub_403b80(arg1, towupper(*i));
    }
    if (var_8 != 0)
    {
        eax = operator new(var_8);
    }
    return eax;
}

int32_t __stdcall sub_41120d(int16_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t eax;
    if (arg2 <= arg4)
    {
        int16_t eax_3 = towupper(*arg1);
        int32_t i = 0;
        do
        {
            int32_t eax_5 = arg3;
            int16_t* ecx_2 = arg1;
            uint32_t edx_1 = *(eax_5 + (i << 1));
            int16_t eax_4;
            if (*ecx_2 != edx_1)
            {
                eax_4 = towupper(edx_1);
                if (eax_3 == eax_4)
                {
                    eax_5 = arg3;
                    ecx_2 = arg1;
                }
            }
            if ((((*ecx_2 != edx_1 && eax_3 == eax_4) || *ecx_2 == edx_1) && _wcsnicmp(ecx_2, (eax_5 + (i << 1)), arg2) == 0))
            {
                eax = 1;
                goto label_411274;
            }
            i = (i + 1);
        } while (i <= (arg4 - arg2));
    }
    eax = 0;
label_411274:
    return eax;
}

int16_t* __fastcall sub_41127b(int32_t* arg1, int32_t* arg2, int16_t* arg3, int32_t arg4)
{
    int32_t var_20 = 3;
    int32_t eax = sub_411e40(arg3, arg4, arg1, &data_401734);
    int16_t* eax_1;
    if (eax == 0xffffffff)
    {
        eax_1 = arg3;
        *arg2 = 0;
        arg2[1] = 0;
        *arg1 = eax_1;
        arg1[1] = arg4;
    }
    else
    {
        void var_14;
        int32_t* eax_2 = sub_411d29(&arg3, &var_14, 0, eax);
        int32_t ecx_3 = *eax_2;
        arg1[1] = eax_2[1];
        *arg1 = ecx_3;
        int32_t eax_6 = sub_411d7e(arg3, arg4, (eax + 1), &data_401734, 3);
        int32_t* eax_7;
        if (eax_6 != 0xffffffff)
        {
            eax_7 = sub_411d29(&arg3, &var_14, eax_6, 0xffffffff);
        }
        else
        {
            int32_t var_c = 0;
            eax_7 = &var_c;
            int32_t var_8_1 = 0;
        }
        eax_1 = eax_7[1];
        *arg2 = *eax_7;
        arg2[1] = eax_1;
    }
    return eax_1;
}

uint32_t __fastcall sub_411319(char arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    char ebx = 0;
    int32_t esi = arg4;
    uint32_t ecx = 0;
    uint32_t var_10 = 0;
    uint32_t eax = 0;
    uint32_t var_c = 0;
    uint32_t var_18 = 0;
    uint32_t edx = 0;
    char eax_1;
    uint32_t eax_4;
    uint32_t esi_1;
    bool cond:0_1;
    if (esi != 0)
    {
        uint32_t var_20_1 = 0;
        var_18 = 0;
        void var_1c;
        int16_t* var_14;
        while (true)
        {
            if (eax >= arg3)
            {
                eax = var_20_1;
                break;
            }
            eax_1 = sub_411493(&var_10, arg_c, esi);
            if (eax_1 != 0)
            {
                sub_411d29(&arg_c, &var_14, (var_10 + 1), 0xffffffff);
                sub_411d29(&arg_4, &var_1c, var_c, 0xffffffff);
                esi_1 = var_10;
                break;
            }
            uint32_t ecx_3 = *(arg_c + (var_10 << 1));
            eax_4 = *(arg_4 + (var_c << 1));
            if (ecx_3 != eax_4)
            {
                if (arg1 == 0)
                {
                    break;
                }
                esi = towupper(eax_4);
                if (towupper(ecx_3) != esi)
                {
                    break;
                }
                esi = arg4;
            }
            edx = (var_10 + 1);
            ecx = edx;
            var_10 = edx;
            eax = (var_c + 1);
            var_20_1 = edx;
            var_c = eax;
            var_18 = edx;
            if (ecx >= esi)
            {
                eax = edx;
                var_18 = edx;
                break;
            }
        }
        if (((eax < arg3 && eax_1 != 0) && var_18 >= esi_1))
        {
            int32_t var_24;
            int32_t* eax_10 = sub_411d29(&var_1c, &var_24, 0, (var_18 - esi_1));
            int32_t ecx_9 = *eax_10;
            int32_t eax_11 = eax_10[1];
            arg2[1] = eax_11;
            *arg2 = ecx_9;
            sub_411d29(&var_1c, &var_24, eax_11, 0xffffffff);
            if (arg1 != 0)
            {
                eax_4 = _wcsnicmp(var_24, var_14, esi_1);
            }
            else
            {
                if (var_20_1 != esi_1)
                {
                    goto label_41148a;
                }
                eax_4 = sub_411f70(var_24, var_14, var_20_1);
            }
            cond:0_1 = eax_4 != 0;
        }
        if ((((eax < arg3 && eax_1 != 0) && var_18 < esi_1) || ((!(eax < arg3 && eax_1 != 0)) && eax < arg3)))
        {
            *arg2 = 0;
            eax_4 = 0;
            arg2[1] = 0;
            goto label_411490;
        }
    }
    if ((esi == 0 || ((esi != 0 && (!(eax < arg3 && eax_1 != 0))) && eax >= arg3)))
    {
        if ((eax + 1) == esi)
        {
            var_18 = edx;
            if (*(arg_c + (ecx << 1)) == 0x25)
            {
                *arg2 = 0;
                eax_4 = 1;
                arg2[1] = 0;
            label_411490:
                return eax_4;
            }
        }
        *arg2 = 0;
        arg2[1] = 0;
        if (var_18 != esi)
        {
            goto label_41148a;
        }
        cond:0_1 = var_c != arg3;
    }
    if (((((esi != 0 && eax < arg3) && eax_1 != 0) && var_18 >= esi_1) || ((esi == 0 || ((esi != 0 && (!(eax < arg3 && eax_1 != 0))) && eax >= arg3)) && ((eax + 1) != esi || (eax + 1) == esi))))
    {
        if (cond:0_1)
        {
            goto label_41148a;
        }
        ebx = 1;
    label_41148a:
        eax_4 = ebx;
        goto label_411490;
    }
}

int32_t __thiscall sub_411493(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    int32_t* var_8 = arg1;
    int32_t eax = *arg1;
    int16_t esi = *(arg2 + (eax << 1));
    if (esi == 0x25)
    {
        eax = 1;
    }
    else
    {
        int32_t var_8_1 = 0x5c;
        if (esi == 0x5c)
        {
            int32_t ecx = (eax + 1);
            if (ecx < arg3)
            {
                int16_t esi_1 = *((arg2 + (eax << 1)) + 2);
                if ((esi_1 == 0x25 || ((esi_1 == 0x5c && (eax + 2) < arg3) && *(arg2 + ((eax + 2) << 1)) == 0x25)))
                {
                    *arg1 = ecx;
                }
            }
        }
        eax = 0;
    }
    return eax;
}

int32_t __fastcall sub_4114ed(int32_t arg1, int32_t arg2)
{
    __security_cookie;
    void var_214;
    void var_10;
    _wsplitpath_s(arg1, &var_10, 3, &var_214, 0x100, 0, 0, 0, 0);
    void var_41c;
    _wmakepath_s(&var_41c, 0x104, &var_10, &var_214, arg2, 0);
    int32_t eax_2 = sub_40ecdb(&var_41c);
    CookieCheckFunction(eax_2);
    return eax_2;
}

int32_t __fastcall sub_411561(int16_t* arg1)
{
    int16_t* i_11 = arg1;
    char ebx = 0;
    int16_t i_12 = *i_11;
    int16_t* i_4 = i_11;
    int16_t i_10 = i_12;
    if (i_12 == 0x7b)
    {
        i_11 = &i_11[1];
        i_4 = i_11;
        int16_t i_9 = *i_11;
        int16_t i_7 = i_9;
        if (i_9 != 0)
        {
            int16_t i_6 = i_9;
            int16_t i;
            do
            {
                i_7 = i_6;
                if (i_6 == 0x7d)
                {
                    break;
                }
                if (i_6 == 0x5e)
                {
                    i_11 = &i_11[1];
                }
                i_11 = &i_11[1];
                i = *i_11;
                i_6 = i;
                i_7 = i;
            } while (i != 0);
            i_4 = i_11;
            ebx = 0;
        }
        i_10 = i_7;
        if (i_7 != 0)
        {
            i_11 = &i_11[1];
            i_4 = i_11;
            i_10 = *i_11;
        }
    }
    int32_t eax;
    if (i_10 == 0x2e)
    {
        int16_t* i_13 = i_11;
        int16_t i_1 = 0x2e;
        while (i_1 != 0x7b)
        {
            if (i_1 == 0x5e)
            {
                i_13 = &i_13[1];
            }
            i_13 = &i_13[1];
            int16_t i_5 = *i_13;
            i_1 = i_5;
            if (i_5 == 0)
            {
                break;
            }
        }
        int16_t* i_2 = i_4;
        int16_t* i_8 = i_2;
        int32_t var_8 = 0x5c;
        int32_t var_c_1 = 0x2f;
        ebx = 0;
        for (; i_2 < i_13; i_2 = &i_2[1])
        {
            int16_t eax_1 = *i_2;
            if (eax_1 == 0x5c)
            {
                break;
            }
            if (eax_1 == 0x2f)
            {
                break;
            }
        }
        void* str;
        if ((*i_13 == 0 || (*i_13 != 0 && i_2 != i_13)))
        {
            eax = wcspbrk(&i_8[1], &data_402644);
            if ((eax != 0 && *eax == 0x2e))
            {
                str = (eax + 2);
            label_411697:
                if ((wcschr(str, 0x2f) == 0 && wcschr(str, 0x5c) == 0))
                {
                    if (wcschr(str, 0x2e) == 0)
                    {
                        ebx = 1;
                    }
                    else
                    {
                        sub_405b2c(data_424730, 0x444);
                    }
                }
            }
        }
        if ((*i_13 != 0 && i_2 == i_13))
        {
            int16_t* ecx = &i_13[1];
            eax = *ecx;
            if (eax != 0)
            {
                int16_t i_3 = eax;
                while (i_3 != 0x7d)
                {
                    if (i_3 == 0x5e)
                    {
                        ecx = &ecx[1];
                    }
                    ecx = &ecx[1];
                    eax = *ecx;
                    i_3 = eax;
                    if (eax == 0)
                    {
                        break;
                    }
                }
                if ((i_3 == 0x7d && ecx[1] == 0x2e))
                {
                    str = &ecx[2];
                    goto label_411697;
                }
            }
        }
    }
    eax = ebx;
    return eax;
}

uint32_t __fastcall sub_4116d6(int16_t* arg1, int32_t arg2, int16_t* arg3, int32_t arg4)
{
    __security_cookie;
    int16_t* edi = arg3;
    int16_t* esi = arg1;
    uint32_t eax_3 = *edi;
    void* ebx = &esi[arg2];
    void* var_220 = ebx;
    if (eax_3 != 0)
    {
        int32_t var_224_1 = 0;
        int32_t var_228_1 = 0x25;
        while (true)
        {
            int16_t* ecx_11 = edi;
            if (esi >= ebx)
            {
                break;
            }
            if (eax_3 == 0x25)
            {
                edi = &edi[1];
                uint32_t edx = *edi;
                if (edx == 0)
                {
                    edi = ecx_11;
                label_411a05:
                    edi = &edi[1];
                    eax_3 = *edi;
                    if (eax_3 == 0)
                    {
                        break;
                    }
                    continue;
                }
                else
                {
                    if (edx == 0x25)
                    {
                        *esi = 0x25;
                        goto label_411774;
                    }
                    if (edx == 0x73)
                    {
                        int32_t eax_20 = arg4;
                        if (eax_20 != 0)
                        {
                            int32_t i;
                            do
                            {
                                int16_t ecx_12 = *eax_20;
                                if (ecx_12 == 0)
                                {
                                    break;
                                }
                                if (esi >= ebx)
                                {
                                    break;
                                }
                                *esi = ecx_12;
                                esi = &esi[1];
                                i = (eax_20 + 1);
                                eax_20 = (i + 1);
                            } while (i != 0xffffffff);
                        }
                        goto label_411a05;
                    }
                    if (edx == 0x7c)
                    {
                        char var_218_1 = 0;
                        char var_217_1 = 0;
                        char var_216_1 = 0;
                        char var_215_1 = 0;
                        int16_t var_214 = 0;
                        while (true)
                        {
                            int16_t* edx_1 = edi;
                            int16_t* var_22c_1 = edi;
                            edi = &edi[1];
                            uint32_t eax_5 = *edi;
                            if (eax_5 == 0)
                            {
                                edi = edx_1;
                            }
                            else
                            {
                                int16_t* ebx_2;
                                if ((eax_5 == 0x46 && *edx_1 == 0x7c))
                                {
                                    ebx_2 = 1;
                                    *ebx_2[1] = 1;
                                    var_215_1 = 1;
                                    var_216_1 = 1;
                                    var_217_1 = 1;
                                    var_218_1 = 1;
                                }
                                if (eax_5 == 0x64)
                                {
                                    *ebx_2[1] = var_216_1;
                                    ebx_2 = 1;
                                    var_215_1 = 1;
                                }
                                if (eax_5 == 0x65)
                                {
                                    var_218_1 = 1;
                                }
                                if (eax_5 == 0x66)
                                {
                                    var_217_1 = 1;
                                }
                                if (((eax_5 == 0x65 || eax_5 == 0x66) || (eax_5 == 0x46 && *edx_1 != 0x7c)))
                                {
                                    *ebx_2[1] = var_216_1;
                                }
                                if (eax_5 == 0x70)
                                {
                                    *ebx_2[1] = 1;
                                    var_216_1 = 1;
                                }
                                if ((((eax_5 == 0x65 || eax_5 == 0x66) || (eax_5 == 0x46 && *edx_1 != 0x7c)) || eax_5 == 0x70))
                                {
                                    ebx_2 = var_215_1;
                                }
                                if (((((((eax_5 == 0x46 && *edx_1 == 0x7c) || eax_5 == 0x64) || eax_5 == 0x65) || eax_5 == 0x66) || (eax_5 == 0x46 && *edx_1 != 0x7c)) || eax_5 == 0x70))
                                {
                                    if (eax_5 == 0x46)
                                    {
                                        int32_t eax_12 = arg4;
                                        if (eax_12 == 0)
                                        {
                                            sub_405b2c(eax_12, 0x449);
                                            eax_12 = arg4;
                                        }
                                        if (ebx_2 != 0)
                                        {
                                            _wsplitpath_s(eax_12, &var_214, 0x104, 0, 0, 0, 0, 0, 0);
                                        }
                                        void var_212;
                                        int32_t ebx_3;
                                        if (*ebx_2[1] == 0)
                                        {
                                            ebx_3 = arg4;
                                        }
                                        else
                                        {
                                            int16_t* ecx_1 = &var_214;
                                            do
                                            {
                                                eax_12 = *ecx_1;
                                                ecx_1 = &ecx_1[1];
                                            } while (eax_12 != 0);
                                            int32_t ecx_3 = ((ecx_1 - &var_212) >> 1);
                                            ebx_3 = arg4;
                                            _wsplitpath_s(ebx_3, 0, 0, &&var_214[ecx_3], (0x104 - ecx_3), 0, 0, 0, 0);
                                        }
                                        if (var_217_1 != 0)
                                        {
                                            int16_t* ecx_4 = &var_214;
                                            do
                                            {
                                                eax_12 = *ecx_4;
                                                ecx_4 = &ecx_4[1];
                                            } while (eax_12 != 0);
                                            int32_t ecx_6 = ((ecx_4 - &var_212) >> 1);
                                            _wsplitpath_s(ebx_3, 0, 0, 0, 0, &&var_214[ecx_6], (0x104 - ecx_6), 0, 0);
                                        }
                                        if (var_218_1 != 0)
                                        {
                                            int16_t* ecx_7 = &var_214;
                                            do
                                            {
                                                eax_12 = *ecx_7;
                                                ecx_7 = &ecx_7[1];
                                            } while (eax_12 != 0);
                                            int32_t ecx_9 = ((ecx_7 - &var_212) >> 1);
                                            _wsplitpath_s(ebx_3, 0, 0, 0, 0, 0, 0, &&var_214[ecx_9], (0x104 - ecx_9));
                                        }
                                        ebx = var_220;
                                        if (var_214 != 0)
                                        {
                                            int16_t* ecx_10 = (&var_214 - esi);
                                            while (esi < ebx)
                                            {
                                                eax_12 = *(ecx_10 + esi);
                                                *esi = eax_12;
                                                esi = &esi[1];
                                                if (*(ecx_10 + esi) == 0)
                                                {
                                                    break;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                    continue;
                                }
                            }
                            ebx = var_220;
                            while (ecx_11 <= edi)
                            {
                                if (esi >= ebx)
                                {
                                    break;
                                }
                                int16_t eax_19 = *ecx_11;
                                ecx_11 = &ecx_11[1];
                                *esi = eax_19;
                                esi = &esi[1];
                            }
                            break;
                        }
                        goto label_411a05;
                    }
                    *esi = 0x25;
                    esi = &esi[1];
                    if (esi == ebx)
                    {
                        break;
                    }
                    eax_3 = *edi;
                }
            }
            *esi = eax_3;
        label_411774:
            esi = &esi[1];
            goto label_411a05;
        }
    }
    if (((eax_3 == 0 || (eax_3 != 0 && esi < ebx)) && esi < ebx))
    {
        *esi = 0;
        eax_3 = 0;
    }
    if ((((eax_3 == 0 || (eax_3 != 0 && esi < ebx)) && esi >= ebx) || (eax_3 != 0 && esi >= ebx)))
    {
        eax_3 = 1;
    }
    CookieCheckFunction(eax_3);
    return eax_3;
}

void** __thiscall sub_411a34(int16_t* arg1, int16_t* arg2)
{
    int16_t* var_8 = arg1;
    int16_t* var_c = arg1;
    void** i = *((arg2 << 2) + &data_424510);
    int16_t* var_c_1 = arg1;
    void** i_1 = i;
    int16_t* eax_1;
    int16_t* ebx_1;
    if (i != 0)
    {
        do
        {
            ebx_1 = arg1;
            eax_1 = i[1];
            arg2 = eax_1;
            if (*arg1 != 0)
            {
                do
                {
                    uint32_t ecx = *eax_1;
                    if (ecx == 0)
                    {
                        break;
                    }
                    int16_t edx_1 = *ebx_1;
                    if ((edx_1 != 0x5c && edx_1 != 0x2f))
                    {
                        int16_t eax_2 = towupper(ecx);
                        eax_1 = arg2;
                        if (towupper(*ebx_1) != eax_2)
                        {
                            break;
                        }
                    }
                    if ((((edx_1 == 0x5c || edx_1 == 0x2f) && ecx != 0x5c) && ecx != 0x2f))
                    {
                        break;
                    }
                    ebx_1 = &ebx_1[1];
                    eax_1 = &eax_1[1];
                    arg2 = eax_1;
                } while (*ebx_1 != 0);
                i = i_1;
                arg1 = var_c_1;
            }
            if ((*ebx_1 == 0 && *eax_1 == 0))
            {
                break;
            }
            i = *i;
            i_1 = i;
        } while (i != 0);
    }
    void** i_2;
    if ((i == 0 || (i != 0 && (!(*ebx_1 == 0 && *eax_1 == 0)))))
    {
        i_2 = nullptr;
    }
    if (((i != 0 && *ebx_1 == 0) && *eax_1 == 0))
    {
        i_2 = i;
    }
    return i_2;
}

int32_t __fastcall sub_411aec(int16_t* arg1, int16_t* arg2)
{
    int32_t __saved_ebp;
    int32_t var_8 = (__security_cookie ^ &__saved_ebp);
    int16_t* edi = arg2;
    int16_t* esi = arg1;
    int32_t var_c = 0;
    int32_t eax_1;
    do
    {
        eax_1 = *arg1;
        arg1 = &arg1[1];
    } while (eax_1 != 0);
    __alloca_probe_16(((((arg1 - &arg1[1]) >> 1) << 1) + 2));
    int16_t* ecx_2 = edi;
    int16_t i;
    do
    {
        i = *ecx_2;
        ecx_2 = &ecx_2[1];
    } while (i != 0);
    __alloca_probe_16(((((ecx_2 - &ecx_2[1]) >> 1) << 1) + 2));
    int16_t i_7 = *esi;
    int16_t i_5 = i_7;
    if (i_7 == 0x22)
    {
        esi = &esi[1];
        i_5 = *esi;
    }
    int32_t __saved_edi;
    int32_t* eax_4 = &__saved_edi;
    if (i_5 != 0)
    {
        int16_t i_1 = i_5;
        int16_t i_3;
        int32_t* var_10_1;
        do
        {
            *eax_4 = i_1;
            var_10_1 = eax_4;
            eax_4 = (eax_4 + 2);
            i_3 = i_1;
            i_1 = *((esi - &__saved_edi) + eax_4);
        } while (i_1 != 0);
        if ((eax_4 != &__saved_edi && i_3 == 0x22))
        {
            eax_4 = var_10_1;
        }
    }
    *eax_4 = 0;
    int16_t i_8 = *edi;
    int16_t i_6 = i_8;
    if (i_8 == 0x22)
    {
        edi = &edi[1];
        i_6 = *edi;
    }
    int32_t* eax_5 = &__saved_edi;
    if (i_6 != 0)
    {
        int16_t i_2 = i_6;
        int16_t i_4;
        int32_t* esi_3;
        do
        {
            i_4 = i_2;
            esi_3 = eax_5;
            *eax_5 = i_2;
            eax_5 = (eax_5 + 2);
            i_2 = *((edi - &__saved_edi) + eax_5);
        } while (i_2 != 0);
        if ((eax_5 != &__saved_edi && i_4 == 0x22))
        {
            eax_5 = esi_3;
        }
    }
    *eax_5 = 0;
    int32_t eax_6 = _wcsicmp(&__saved_edi, &__saved_edi);
    CookieCheckFunction(eax_6);
    return eax_6;
}

int32_t __fastcall sub_411c06(int16_t* arg1)
{
    int16_t* esi = arg1;
    void* edx = &arg1[1];
    int16_t i;
    do
    {
        i = *arg1;
        arg1 = &arg1[1];
    } while (i != 0);
    int32_t eax_1;
    int32_t edx_1;
    edx_1 = HIGHD(((((arg1 - edx) >> 1) + 1) * 2));
    eax_1 = LOWD(((((arg1 - edx) >> 1) + 1) * 2));
    int32_t ecx_2;
    ecx_2 = (((((arg1 - edx) >> 1) + 1) * 2) >> 0x20) != 0;
    int32_t eax_2 = sub_40b5d9(((-ecx_2) | eax_1));
    int16_t i_4 = *esi;
    int16_t i_3 = i_4;
    if (i_4 == 0x22)
    {
        esi = &esi[1];
        i_3 = *esi;
    }
    int32_t ecx_5 = eax_2;
    if (i_3 != 0)
    {
        int16_t i_2 = i_3;
        int16_t i_1;
        do
        {
            *ecx_5 = i_2;
            ecx_5 = (ecx_5 + 2);
            i_1 = *((esi - eax_2) + ecx_5);
            i_2 = i_1;
        } while (i_1 != 0);
    }
    if (*(ecx_5 - 2) == 0x22)
    {
        ecx_5 = (ecx_5 - 2);
    }
    *ecx_5 = 0;
    return eax_2;
}

int32_t __fastcall sub_411c7b(int16_t* arg1, int32_t arg2)
{
    if (*arg1 == 0x22)
    {
        *wcsrchr(arg1, 0x22) = 0;
        int16_t* ecx = arg1;
        int16_t i = arg1[1];
        *arg1 = i;
        while (i != 0)
        {
            ecx = &ecx[1];
            i = ecx[1];
            *ecx = i;
        }
    }
    return _wfsopen(arg1, arg2, 0x20);
}

int32_t __thiscall sub_411cc2(int32_t* arg1, int16_t* arg2, int32_t arg3)
{
    int32_t* var_8 = arg1;
    int32_t eax = arg1[1];
    int16_t* ebx = *arg1;
    int16_t* eax_5;
    if ((arg3 <= eax && arg3 != 0))
    {
        int16_t* ecx = ebx;
        void* eax_3 = &ebx[((eax - arg3) + 1)];
        void* edx_2 = (eax_3 - ebx);
        while (true)
        {
            eax_5 = sub_411f47(ecx, (edx_2 >> 1), arg2);
            if (eax_5 == 0)
            {
                break;
            }
            if (sub_411f70(eax_5, arg2, arg3) == 0)
            {
                break;
            }
            edx_2 = (eax_3 - &eax_5[1]);
            ecx = &eax_5[1];
        }
    }
    int32_t esi_1;
    if ((arg3 > eax || ((arg3 <= eax && arg3 != 0) && eax_5 == 0)))
    {
        esi_1 = 0xffffffff;
    }
    if (arg3 <= eax)
    {
        if ((arg3 != 0 && eax_5 != 0))
        {
            esi_1 = ((eax_5 - ebx) >> 1);
        }
        if (arg3 == 0)
        {
            esi_1 = 0;
        }
    }
    return esi_1;
}

int32_t* __thiscall sub_411d29(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    int32_t edx = arg1[1];
    if (edx < arg3)
    {
        sub_403d1e();
        /* no return */
    }
    int32_t edx_1 = (edx - arg3);
    if (edx_1 >= arg4)
    {
        edx_1 = arg4;
    }
    *arg2 = (*arg1 + (arg3 << 1));
    arg2[1] = edx_1;
    return arg2;
}

int32_t __stdcall sub_411d59(int32_t arg1, int32_t arg2, int16_t* arg3, int32_t arg4)
{
    int32_t eax;
    if (arg2 == arg4)
    {
        eax = sub_411f70(arg1, arg3, arg2);
        if (eax == 0)
        {
            eax = 1;
        }
    }
    if ((arg2 != arg4 || (arg2 == arg4 && eax != 0)))
    {
        eax = 0;
    }
    return eax;
}

int32_t __fastcall sub_411d7e(int32_t arg1, int32_t arg2, int32_t arg3, int16_t* arg4, int32_t arg5)
{
    __security_cookie;
    int32_t eax_8;
    if (arg3 >= arg2)
    {
    label_411e05:
        eax_8 = 0xffffffff;
    }
    else
    {
        void var_110;
        memset(&var_110, 0, 0x100);
        int32_t edi_1 = (arg1 + (arg2 << 1));
        int16_t* ecx = arg4;
        int16_t* i = (arg1 + (arg3 << 1));
        char eax_6 = sub_411f17(&var_110, ecx, &ecx[arg5]);
        int32_t esi_1;
        if (eax_6 == 0)
        {
            for (; i < edi_1; i = &i[1])
            {
                if (sub_411f47(arg4, arg5, i) == 0)
                {
                    break;
                }
            }
            if (i >= edi_1)
            {
                esi_1 = 0xffffffff;
            }
        }
        else
        {
            if (i >= edi_1)
            {
                goto label_411e05;
            }
            uint32_t eax_7;
            do
            {
                eax_7 = *i;
                if (eax_7 >= 0x100)
                {
                    break;
                }
                if (*(&var_110 + eax_7) == 0)
                {
                    break;
                }
                i = &i[1];
            } while (i < edi_1);
            if (eax_7 < 0x100)
            {
                goto label_411e05;
            }
        }
        if (((eax_6 == 0 && i < edi_1) || eax_6 != 0))
        {
            esi_1 = ((i - arg1) >> 1);
        }
        eax_8 = esi_1;
    }
    CookieCheckFunction(eax_8);
    return eax_8;
}

int32_t __fastcall sub_411e40(int16_t* arg1, int32_t arg2, int16_t* arg3, int32_t arg4)
{
    __security_cookie;
    int32_t eax_7;
    if (arg4 == 0)
    {
    label_411efb:
        eax_7 = 0xffffffff;
    }
    else
    {
        if (arg2 == 0)
        {
            goto label_411efb;
        }
        void var_110;
        memset(&var_110, 0, 0x100);
        int16_t* ecx = arg3;
        void* ebx_1 = &arg1[arg2];
        if (sub_411f17(&var_110, ecx, &ecx[arg4]) == 0)
        {
            int16_t* esi_1 = arg1;
            int16_t* eax_5;
            if (arg1 < ebx_1)
            {
                do
                {
                    eax_5 = sub_411f47(arg3, arg4, esi_1);
                    if (eax_5 != 0)
                    {
                        break;
                    }
                    esi_1 = &esi_1[1];
                } while (esi_1 < ebx_1);
            }
            int32_t esi_2;
            if ((arg1 >= ebx_1 || (arg1 < ebx_1 && eax_5 == 0)))
            {
                esi_2 = 0xffffffff;
            }
            if ((arg1 < ebx_1 && eax_5 != 0))
            {
                esi_2 = ((esi_1 - arg1) >> 1);
            }
            eax_7 = esi_2;
        }
        else
        {
            int16_t* ecx_3 = arg1;
            if (arg1 >= ebx_1)
            {
                goto label_411efb;
            }
            uint32_t eax_6;
            do
            {
                eax_6 = *ecx_3;
                if ((eax_6 < 0x100 && *(&var_110 + eax_6) != 0))
                {
                    break;
                }
                ecx_3 = &ecx_3[1];
            } while (ecx_3 < ebx_1);
            if ((!(eax_6 < 0x100 && *(&var_110 + eax_6) != 0)))
            {
                goto label_411efb;
            }
            eax_7 = ((ecx_3 - arg1) >> 1);
        }
    }
    CookieCheckFunction(eax_7);
    return eax_7;
}

uint32_t __thiscall sub_411f17(int32_t arg1, int16_t* arg2, int32_t arg3)
{
    int16_t* edx = arg2;
    uint32_t eax;
    while (true)
    {
        if (edx == arg3)
        {
            eax = 1;
            break;
        }
        eax = *edx;
        if (eax >= 0x100)
        {
            eax = 0;
            break;
        }
        edx = &edx[1];
        *(eax + arg1) = 1;
    }
    return eax;
}

int16_t* __fastcall sub_411f47(int16_t* arg1, int32_t arg2, int16_t* arg3)
{
    int16_t* esi = nullptr;
    if (arg2 != 0)
    {
        while (true)
        {
            if (*arg1 == *arg3)
            {
                esi = arg1;
                break;
            }
            if (arg2 == 1)
            {
                break;
            }
            arg2 = (arg2 - 1);
            arg1 = &arg1[1];
        }
    }
    return esi;
}

void __fastcall sub_411f70(int32_t arg1, int16_t* arg2, int32_t arg3)
{
    int32_t esi = arg3;
    if (esi != 0)
    {
        int16_t* ecx = (arg1 - arg2);
        while (*(ecx + arg2) == *arg2)
        {
            arg2 = &arg2[1];
            int32_t temp1_1 = esi;
            esi = (esi - 1);
            if (temp1_1 == 1)
            {
                break;
            }
        }
    }
}

int32_t sub_411fa4() __noreturn
{
    std::_Xlength_error("string too long");
    /* no return */
}

int32_t* __fastcall std::bad_alloc::bad_alloc(int32_t* arg1)
{
    arg1[1] = 0;
    arg1[2] = 0;
    arg1[1] = "bad array new length";
    *arg1 = 0x402674;
    return arg1;
}

int32_t __fastcall std::exception::~exception(int32_t* arg1)
{
    *arg1 = 0x402674;
    return __std_exception_destroy(&arg1[1]);
}

int32_t* __thiscall std::exception::`scalar deleting destructor'(int32_t* arg1, char arg2)
{
    *arg1 = 0x402674;
    __std_exception_destroy(&arg1[1]);
    if ((arg2 & 1) != 0)
    {
        operator new(arg1);
    }
    return arg1;
}

int32_t* __thiscall stdext::threads::thread_resource_error::thread_resource_error(int32_t* arg1, void* arg2)
{
    std::exception::exception(arg1, arg2);
    *arg1 = 0x402674;
    return arg1;
}

char const* const __fastcall std::exception::what(void* arg1)
{
    char const* const eax = *(arg1 + 4);
    if (eax == 0)
    {
        eax = "Unknown exception";
    }
    return eax;
}

int32_t* __thiscall std::exception::exception(int32_t* arg1, void* arg2)
{
    *arg1 = 0x402674;
    arg1[1] = 0;
    arg1[2] = 0;
    __std_exception_copy((arg2 + 4), &arg1[1]);
    return arg1;
}

int32_t sub_41205d() __noreturn
{
    void pExceptionObject;
    std::bad_alloc::bad_alloc(&pExceptionObject);
    _CxxThrowException(&pExceptionObject, &data_413140);
    /* no return */
}

int32_t __stdcall sub_412079(int32_t arg1)
{
    if (arg1 <= 0x7fffffff)
    {
        int32_t ecx_1 = (arg1 * 2);
        int32_t eax_4;
        if ((ecx_1 >= 0x1000 && (ecx_1 + 0x23) > ecx_1))
        {
            int32_t eax_2 = sub_40b5d9((ecx_1 + 0x23));
            if (eax_2 == 0)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
            eax_4 = ((eax_2 + 0x23) & 0xffffffe0);
            *(eax_4 - 4) = eax_2;
        }
        if (ecx_1 < 0x1000)
        {
            if (ecx_1 == 0)
            {
                eax_4 = 0;
            }
            else
            {
                eax_4 = sub_40b5d9(ecx_1);
            }
        }
        if ((ecx_1 < 0x1000 || (ecx_1 >= 0x1000 && (ecx_1 + 0x23) > ecx_1)))
        {
            return eax_4;
        }
    }
    sub_41205d();
    /* no return */
}

int32_t __thiscall sub_4120cf(uint8_t* arg1, uint8_t* arg2, void* arg3)
{
    uint8_t* var_8 = arg1;
    int32_t esi = 0x7ffffffe;
    uint8_t* edi = arg1;
    uint8_t** var_8_1 = edi;
    if (arg3 > 0x7ffffffe)
    {
        sub_411fa4();
        /* no return */
    }
    *(edi + 0x14) = 7;
    int32_t eax;
    int16_t* esi_1;
    if (arg3 < 8)
    {
        esi_1 = (arg3 * 2);
        *(edi + 0x10) = arg3;
        eax = memmove(edi, arg2, esi_1);
    }
    else
    {
        int32_t eax_2 = (arg3 | 7);
        if (eax_2 <= 0x7ffffffe)
        {
            esi = 0xa;
            if (eax_2 >= 0xa)
            {
                esi = eax_2;
            }
        }
        edi = sub_412079((esi + 1));
        var_8_1[5] = esi;
        esi_1 = (arg3 * 2);
        *var_8_1 = edi;
        var_8_1[4] = arg3;
        eax = memcpy(edi, arg2, esi_1);
    }
    *(esi_1 + edi) = 0;
    return eax;
}

int32_t sub_41214e(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t eax = __stdio_common_vswprintf_s(data_4386c8, data_4386cc, arg1, arg2, arg3, 0, &arg_10);
    if (eax < 0)
    {
        eax = 0xffffffff;
    }
    return eax;
}

uint32_t __fastcall sub_41217c(int16_t* arg1)
{
    __security_cookie;
    FindFileHandle var_260;
    void var_25c;
    uint32_t eax_2 = sub_408256(arg1, &var_25c, &var_260);
    if (eax_2 != 0)
    {
        int32_t* edi_1 = sub_40ec89();
        edi_1[1] = sub_4114ed(arg1, eax_2);
        while (true)
        {
            char (* eax_7)[0x104] = sub_4083e1(&var_25c, var_260);
            if (eax_7 == 0)
            {
                break;
            }
            int32_t** eax_5 = sub_40ec89();
            int32_t eax_6 = sub_4114ed(arg1, eax_7);
            *eax_5 = edi_1;
            edi_1 = eax_5;
            eax_5[1] = eax_6;
        }
        eax_2 = edi_1;
    }
    CookieCheckFunction(eax_2);
    return eax_2;
}

int32_t free()
{
    /* tailcall */
    return free();
}

int32_t pre_c_initialization()
{
    _set_app_type(1);
    _set_fmode(0x4000);
    *__p__commode() = 0;
    if (___scrt_initialize_onexit_tables(1) != 0)
    {
        __fnclex();
        sub_412bf1();
        _atexit(sub_412c1d);
        if (_configure_wide_argv(1) == 0)
        {
            sub_4129c0();
            if (sub_412a0d() != 0)
            {
                __setusermatherr(sub_4129b3);
            }
            __initialize_default_precision();
            _configthreadlocale(0);
            if (sub_4129cc() != 0)
            {
                _initialize_wide_environment();
            }
            j_sub_4129b3();
            return 0;
        }
    }
    ___scrt_fastfail(7);
    breakpoint();
}

int32_t sub_4122d3(int32_t arg1 @ esi)
{
    int32_t __saved_ebp = 0x14;
    int32_t var_8 = 0x4130a0;
    enum _EXCEPTION_DISPOSITION (* var_10)(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, struct _CONTEXT* arg3, int32_t arg4) = __except_handler4;
    int32_t* fsbase;
    int32_t var_14 = *fsbase;
    int32_t var_30 = arg1;
    uint32_t __security_cookie_1 = __security_cookie;
    int32_t var_8_3 = (0x4130a0 ^ __security_cookie_1);
    var_4;
    int32_t var_38 = (__security_cookie_1 ^ &var_4);
    int32_t* var_1c = &var_38;
    void* const var_3c_3 = &data_4122df;
    int32_t var_8_4 = 0xfffffffe;
    int32_t var_c = var_8_3;
    *fsbase = &var_14;
    if (___scrt_initialize_crt(1) != 0)
    {
        char var_1d_1 = nullptr;
        int32_t var_8_1 = 0;
        char eax_1 = ___scrt_acquire_startup_lock();
        int32_t eax_2 = data_4144bc;
        if (eax_2 != 1)
        {
            if (eax_2 != 0)
            {
                char var_1d_2 = 1;
            }
            else
            {
                data_4144bc = 1;
                if (_initterm_e(0x40100c, 0x40101c) != 0)
                {
                    int32_t var_8_2 = 0xfffffffe;
                    *fsbase = var_14;
                    return 0xff;
                }
                _initterm(0x401000, 0x401008);
                data_4144bc = 2;
            }
            ___scrt_release_startup_lock(eax_1);
            if ((data_438ef0 != 0 && ___scrt_is_nonwritable_in_current_image(0x438ef0) != 0))
            {
                data_438ef0(0, 2, 0);
            }
            if ((data_438eec != 0 && ___scrt_is_nonwritable_in_current_image(0x438eec) != 0))
            {
                _register_thread_local_exe_atexit_callback(data_438eec);
            }
            wchar16** eax_7 = _get_initial_wide_environment();
            int32_t esi_1 = *__p___wargv();
            wchar16** var_3c_2 = eax_7;
            sub_40be1b(*__p___argc(), esi_1);
            /* no return */
        }
    }
    ___scrt_fastfail(7);
    exit(arg1);
    /* no return */
}

int32_t sub_41240e(void* arg1 @ ebp)
{
    int32_t* esp_5 = *(arg1 - 0x18);
    if (sub_412b45() == 0)
    {
        *(esp_5 - 4) = *(arg1 - 0x20);
        _exit();
        /* no return */
    }
    if (*(arg1 - 0x19) == 0)
    {
        _c_exit();
    }
    *(arg1 - 4) = 0xfffffffe;
    int32_t eax_1 = *(arg1 - 0x20);
    int32_t* fsbase;
    *fsbase = *(arg1 - 0x10);
    *esp_5;
    esp_5[1];
    esp_5[2];
    esp_5[3];
    *arg1;
    return eax_1;
}

int32_t _start()
{
    ___security_init_cookie();
    int32_t esi;
    /* tailcall */
    return sub_4122d3(esi);
}

void __convention("regparm") CookieCheckFunction(uint32_t arg1)
{
    int32_t ecx;
    if (ecx != __security_cookie)
    {
        /* tailcall */
        return ___report_gsfailure(arg1);
    }
}

int32_t operator new(int32_t arg1)
{
    return free(arg1);
}

BOOL ___raise_securityfailure(struct EXCEPTION_POINTERS* arg1)
{
    SetUnhandledExceptionFilter(nullptr);
    UnhandledExceptionFilter(arg1);
    return TerminateProcess(GetCurrentProcess(), 0xc0000409);
}

void ___report_gsfailure(uint64_t stack_cookie) __noreturn
{
    BOOL eax;
    int32_t ecx;
    int32_t edx;
    eax = IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE);
    bool p = /* bool p = unimplemented  {test eax, eax} */;
    bool a = /* undefined */;
    bool z = (eax & eax) == 0;
    if (z)
    {
        data_4142a0 = eax;
        data_41429c = ecx;
        data_414298 = edx;
        data_414294 = nullptr;
        int32_t esi;
        data_414290 = esi;
        int32_t edi;
        data_41428c = edi;
        int16_t ss;
        data_4142b8 = ss;
        int16_t cs;
        data_4142ac = cs;
        int16_t ds;
        data_414288 = ds;
        int16_t es;
        data_414284 = es;
        int16_t fs;
        data_414280 = fs;
        int16_t gs;
        data_41427c = gs;
        bool d;
        int32_t var_32c = ((((0) ? 1 : 0) << 0xb) | ((((d) ? 1 : 0) << 0xa) | (((((eax & eax) < 0) ? 1 : 0) << 7) | ((((z) ? 1 : 0) << 6) | ((((a) ? 1 : 0) << 4) | ((((p) ? 1 : 0) << 2) | (((0) ? 1 : 0) << 0)))))));
        data_4142b0 = var_32c;
        int32_t ebp;
        data_4142a4 = ebp;
        data_4142a8 = __return_addr;
        data_4142b4 = &stack_cookie;
        data_4141f0 = 0x10001;
        data_4141ac = data_4142a8;
        data_4141a0 = 0xc0000409;
        data_4141a4 = 1;
        data_4141b0 = 1;
        int32_t var_32c_1 = 4;
        data_4141b4 = 2;
        int32_t var_32c_2 = 4;
        uint32_t __security_cookie_1 = __security_cookie;
        &__security_cookie_1[1] = data_414014;
        ___raise_securityfailure(&data_401030);
        return;
    }
    trap(0xd);
}

BOOL ___report_rangecheckfailure()
{
    int32_t ebp;
    int32_t var_4 = ebp;
    int32_t esi;
    int32_t edi;
    return ___report_securityfailure(&var_4, esi, edi);
}

BOOL ___report_securityfailure(int32_t arg1 @ ebp, int32_t arg2 @ esi, int32_t arg3 @ edi)
{
    BOOL eax;
    int32_t ecx;
    int32_t edx;
    eax = IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE);
    bool p = /* bool p = unimplemented  {test eax, eax} */;
    bool a = /* undefined */;
    bool z = (eax & eax) == 0;
    if (z)
    {
        data_4142a0 = eax;
        data_41429c = ecx;
        data_414298 = edx;
        data_414294 = nullptr;
        data_414290 = arg2;
        data_41428c = arg3;
        int16_t ss;
        data_4142b8 = ss;
        int16_t cs;
        data_4142ac = cs;
        int16_t ds;
        data_414288 = ds;
        int16_t es;
        data_414284 = es;
        int16_t fs;
        data_414280 = fs;
        int16_t gs;
        data_41427c = gs;
        bool d;
        int32_t var_324 = ((((0) ? 1 : 0) << 0xb) | ((((d) ? 1 : 0) << 0xa) | (((((eax & eax) < 0) ? 1 : 0) << 7) | ((((z) ? 1 : 0) << 6) | ((((a) ? 1 : 0) << 4) | ((((p) ? 1 : 0) << 2) | (((0) ? 1 : 0) << 0)))))));
        data_4142b0 = var_324;
        data_4142a4 = arg1;
        data_4142a8 = __return_addr;
        data_4142b4 = &arg_4;
        data_4141ac = data_4142a8;
        data_4141a0 = 0xc0000409;
        data_4141a4 = 1;
        data_4141b0 = 1;
        int32_t var_324_1 = 4;
        data_4141b4 = arg_4;
        return ___raise_securityfailure(&data_401030);
    }
    trap(0xd);
}

enum _EXCEPTION_DISPOSITION __except_handler4(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, struct _CONTEXT* arg3, int32_t arg4)
{
    int32_t mxcsr;
    *arg1 = __filter_x86_sse2_floating_point_exception_default(mxcsr, *arg1);
    return _except_handler4_common(&__security_cookie, CookieCheckFunction, arg1, arg2, arg3, arg4);
}

int32_t* __thiscall type_info::`scalar deleting destructor'(int32_t* arg1, char arg2)
{
    *arg1 = 0x40103c;
    if ((arg2 & 1) != 0)
    {
        operator new(arg1);
    }
    return arg1;
}

void* find_pe_section(void* arg1, int32_t arg2)
{
    void* ecx_1 = (*(arg1 + 0x3c) + arg1);
    void* edx_1 = ((ecx_1 + 0x18) + *(ecx_1 + 0x14));
    void* esi_1 = ((*(ecx_1 + 6) * 0x28) + edx_1);
    if (edx_1 != esi_1)
    {
        while ((!(arg2 >= *(edx_1 + 0xc) && arg2 < (*(edx_1 + 8) + *(edx_1 + 0xc)))))
        {
            edx_1 = (edx_1 + 0x28);
            if (edx_1 == esi_1)
            {
                break;
            }
        }
    }
    void* eax_5;
    if ((edx_1 == esi_1 || (edx_1 != esi_1 && (!(arg2 >= *(edx_1 + 0xc) && arg2 < (*(edx_1 + 8) + *(edx_1 + 0xc)))))))
    {
        eax_5 = nullptr;
    }
    if (((edx_1 != esi_1 && arg2 >= *(edx_1 + 0xc)) && arg2 < (*(edx_1 + 8) + *(edx_1 + 0xc))))
    {
        eax_5 = edx_1;
    }
    return eax_5;
}

int32_t ___scrt_acquire_startup_lock()
{
    int32_t eax;
    if (___asan_report_present() != 0)
    {
        void* fsbase;
        int32_t edx_1 = *(*(fsbase + 0x18) + 4);
        while (true)
        {
            eax = 0;
            if (0 == data_4144c0)
            {
                data_4144c0 = edx_1;
            }
            else
            {
                eax = data_4144c0;
            }
            if (eax == 0)
            {
                break;
            }
            if (edx_1 == eax)
            {
                eax = 1;
                return eax;
            }
        }
    }
    eax = 0;
    return eax;
}

int32_t ___scrt_initialize_crt(int32_t arg1)
{
    if (arg1 == 0)
    {
        data_4144c4 = 1;
    }
    uint64_t xcr0;
    ___isa_available_init(xcr0);
    if ((sub_4129cc() != 0 && sub_4129cc() != 0))
    {
        int32_t eax_1;
        eax_1 = 1;
        return eax_1;
    }
    int32_t eax;
    eax = 0;
    return eax;
}

int32_t ___scrt_initialize_onexit_tables(int32_t arg1)
{
    if (data_4144c5 != 0)
    {
        int32_t eax;
        eax = 1;
        return eax;
    }
    if ((arg1 != 0 && arg1 != 1))
    {
        ___scrt_fastfail(5);
        breakpoint();
    }
    int32_t eax_1 = ___asan_report_present();
    if ((eax_1 == 0 || (eax_1 != 0 && arg1 != 0)))
    {
        __builtin_memset(&data_4144c8, 0xff, 0x18);
    }
    if (arg1 == 0)
    {
        if (eax_1 != 0)
        {
            eax_1 = _initialize_onexit_table(0x4144c8);
        }
        if (eax_1 == 0)
        {
            eax_1 = _initialize_onexit_table(0x4144d4);
        }
    }
    if (((eax_1 == 0 || (eax_1 != 0 && arg1 != 0)) || (arg1 == 0 && eax_1 == 0)))
    {
        data_4144c5 = 1;
        eax_1 = 1;
    }
    if ((arg1 == 0 && ((eax_1 != 0 && eax_1 != 0) || eax_1 == 0)))
    {
        eax_1 = 0;
    }
    return eax_1;
}

void* ___scrt_is_nonwritable_in_current_image(int32_t arg1)
{
    int32_t __saved_ebp = 8;
    int32_t var_8 = 0x4130c0;
    enum _EXCEPTION_DISPOSITION (* var_10)(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, struct _CONTEXT* arg3, int32_t arg4) = __except_handler4;
    int32_t* fsbase;
    int32_t var_14 = *fsbase;
    uint32_t __security_cookie_1 = __security_cookie;
    int32_t var_8_4 = (0x4130c0 ^ __security_cookie_1);
    var_4;
    int32_t var_2c = (__security_cookie_1 ^ &var_4);
    int32_t* var_1c = &var_2c;
    void* const var_30_1 = &data_41280c;
    int32_t var_8_5 = 0xfffffffe;
    int32_t var_c = var_8_4;
    *fsbase = &var_14;
    int32_t var_8_1 = 0;
    void* eax = find_pe_section(&__dos_header, (arg1 - 0x400000));
    if ((eax == 0 || (eax != 0 && *(eax + 0x24) < 0)))
    {
        int32_t var_8_3 = 0xfffffffe;
        eax = 0;
    }
    if ((eax != 0 && *(eax + 0x24) >= 0))
    {
        int32_t var_8_2 = 0xfffffffe;
        eax = 1;
    }
    *fsbase = var_14;
    return eax;
}

int32_t sub_412865(void* arg1 @ ebp)
{
    int32_t ecx;
    ecx = ***(arg1 - 0x14) == 0xc0000005;
    return ecx;
}

int32_t ___scrt_release_startup_lock(char arg1)
{
    int32_t eax = ___asan_report_present();
    if ((eax != 0 && arg1 == 0))
    {
        int32_t temp0_1 = data_4144c0;
        data_4144c0 = 0;
        eax = temp0_1;
    }
    return eax;
}

int32_t ___scrt_uninitialize_crt(int32_t arg1, char arg2)
{
    if ((data_4144c4 == 0 || (data_4144c4 != 0 && arg2 == 0)))
    {
        int32_t var_8_1 = arg1;
        int32_t var_c_1 = arg1;
    }
    int32_t eax;
    eax = 1;
    return eax;
}

int32_t __onexit(_onexit_t arg1)
{
    int32_t eax;
    if (data_4144c8 != 0xffffffff)
    {
        eax = _register_onexit_function(&data_4144c8, arg1);
    }
    else
    {
        eax = _crt_atexit(arg1);
    }
    int32_t eax_1 = (-eax);
    return ((!(eax_1 - eax_1)) & arg1);
}

int32_t _atexit(_onexit_t arg1)
{
    int32_t eax = __onexit(arg1);
    int32_t eax_1 = (-eax);
    return ((-(eax_1 - eax_1)) - 1);
}

int32_t ___get_entropy()
{
    int32_t lpSystemTimeAsFileTime = 0;
    int32_t var_c = 0;
    GetSystemTimeAsFileTime(&lpSystemTimeAsFileTime);
    int32_t var_8 = (var_c ^ lpSystemTimeAsFileTime);
    uint32_t eax_2 = GetCurrentThreadId();
    var_8 = (var_8 ^ eax_2);
    uint32_t eax_3 = GetCurrentProcessId();
    var_8 = (var_8 ^ eax_3);
    int32_t lpPerformanceCount;
    QueryPerformanceCounter(&lpPerformanceCount);
    int32_t var_14;
    return (((var_14 ^ lpPerformanceCount) ^ var_8) ^ &var_8);
}

void ___security_init_cookie()
{
    uint32_t __security_cookie_1 = __security_cookie;
    if ((__security_cookie_1 == 0xbb40e64e || (__security_cookie_1 != 0xbb40e64e && (0xffff0000 & __security_cookie_1) == 0)))
    {
        uint32_t __security_cookie_2 = ___get_entropy();
        __security_cookie_1 = __security_cookie_2;
        if (__security_cookie_1 == 0xbb40e64e)
        {
            __security_cookie_1 = 0xbb40e64f;
        }
        else if ((0xffff0000 & __security_cookie_1) == 0)
        {
            __security_cookie_1 = (__security_cookie_1 | ((__security_cookie_2 | 0x4711) << 0x10));
        }
        __security_cookie = __security_cookie_1;
    }
    data_414014 = (!__security_cookie_1);
}

int32_t sub_4129b3() __pure
{
    return 0;
}

int32_t sub_4129b6() __pure
{
    return 1;
}

int32_t sub_4129ba() __pure
{
    return 0x4000;
}

int32_t sub_4129c0()
{
    return InitializeSListHead(&data_4144e0);
}

int32_t sub_4129cc() __pure
{
    int32_t eax;
    eax = 1;
    return eax;
}

errno_t __initialize_default_precision()
{
    errno_t eax = _controlfp_s(nullptr, 0x10000, 0x30000);
    if (eax != 0)
    {
        ___scrt_fastfail(7);
        breakpoint();
    }
    return eax;
}

int32_t sub_412a0d()
{
    int32_t eax;
    eax = data_414004 == 0;
    return eax;
}

int32_t sub_412a19() __pure
{
    return 0x438ef0;
}

int32_t sub_412a1f() __pure
{
    return 0x438eec;
}

int32_t ___scrt_fastfail(int32_t arg1)
{
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
    {
        trap(0xd);
    }
    int32_t var_330 = 3;
    sub_412be9();
    int32_t var_328;
    int32_t eax_1;
    int32_t ecx_1;
    int32_t edx;
    eax_1 = memset(&var_328, 0, 0x2cc);
    bool p = /* bool p = unimplemented  {add esp, 0xc} */;
    bool a = /* bool a = unimplemented  {add esp, 0xc} */;
    int32_t var_278 = eax_1;
    int32_t var_27c = ecx_1;
    int32_t var_280 = edx;
    void* const var_284 = nullptr;
    int32_t esi;
    int32_t var_288 = esi;
    int32_t edi;
    int32_t var_28c = edi;
    int16_t ss;
    int16_t var_260 = ss;
    int16_t cs;
    int16_t var_26c = cs;
    int16_t ds;
    int16_t var_290 = ds;
    int16_t es;
    int16_t var_294 = es;
    int16_t fs;
    int16_t var_298 = fs;
    int16_t gs;
    int16_t var_29c = gs;
    var_338;
    int32_t var_32c;
    bool d;
    int32_t var_330_1 = (((((&var_338 + 0xc)) ? 1 : 0) << 0xb) | ((((d) ? 1 : 0) << 0xa) | ((((&var_32c < 0) ? 1 : 0) << 7) | ((((&var_338 == 0xfffffff4) ? 1 : 0) << 6) | ((((a) ? 1 : 0) << 4) | ((((p) ? 1 : 0) << 2) | (((&var_338 >= 0xfffffff4) ? 1 : 0) << 0)))))));
    int32_t var_268 = var_330_1;
    void* const __return_addr_1 = __return_addr;
    var_328 = 0x10001;
    int32_t ebp;
    int32_t var_274 = ebp;
    int32_t var_5c;
    memset(&var_5c, 0, 0x50);
    var_5c = 0x40000015;
    int32_t var_58 = 1;
    void* const __return_addr_2 = __return_addr;
    int32_t ebx = (IsDebuggerPresent() - 1);
    char ebx_1 = (-ebx);
    int32_t* ExceptionInfo = &var_5c;
    int32_t* var_8 = &var_328;
    SetUnhandledExceptionFilter(nullptr);
    int32_t eax_6 = UnhandledExceptionFilter(&ExceptionInfo);
    if ((eax_6 == 0 && (ebx_1 - ebx_1) == 0xff))
    {
        sub_412be9();
    }
    return eax_6;
}

int32_t j_sub_4129b3()
{
    /* tailcall */
    return sub_4129b3();
}

HINSTANCE sub_412b45()
{
    HINSTANCE eax = GetModuleHandleW(nullptr);
    if ((eax != 0 && *eax == 0x5a4d))
    {
        int32_t* ecx_2 = (eax[0xf] + eax);
        if ((*ecx_2 == 0x4550 && (ecx_2[6] == 0x10b && ecx_2[0x1d] > 0xe)))
        {
            eax = ecx_2[0x3a] != 0;
            return eax;
        }
    }
    eax = 0;
    return eax;
}

LPTOP_LEVEL_EXCEPTION_FILTER sub_412b87()
{
    return SetUnhandledExceptionFilter(___scrt_unhandled_exception_filter@4);
}

int32_t __stdcall ___scrt_unhandled_exception_filter@4(int32_t* arg1)
{
    int32_t* esi = *arg1;
    if ((*esi == 0xe06d7363 && esi[4] == 3))
    {
        int32_t eax_1 = esi[5];
        if ((((eax_1 == 0x19930520 || eax_1 == 0x19930521) || eax_1 == 0x19930522) || eax_1 == 0x1994000))
        {
            *__current_exception() = esi;
            *__current_exception_context() = arg1[1];
            terminate();
            /* no return */
        }
    }
    return 0;
}

int32_t sub_412be9()
{
    data_4144e8 = 0;
}

void sub_412bf1()
{
    return;
}

void sub_412c1d()
{
    return;
}

void* __SEH_prolog4(int32_t arg1 @ esi, int32_t arg2 @ edi, void* arg3)
{
    enum _EXCEPTION_DISPOSITION (* var_4)(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, struct _CONTEXT* arg3, int32_t arg4) = __except_handler4;
    int32_t* fsbase;
    int32_t var_8 = *fsbase;
    int32_t eax = arg_8;
    int32_t ebp;
    arg_8 = ebp;
    void* esp = (&var_8 - eax);
    *(esp - 4) = nullptr;
    *(esp - 8) = arg1;
    *(esp - 0xc) = arg2;
    uint32_t __security_cookie_1 = __security_cookie;
    *(esp - 0x10) = (__security_cookie_1 ^ &arg_8);
    void* var_10 = (esp - 0x10);
    *(esp - 0x14) = __return_addr;
    void* __return_addr_1 = (arg3 ^ __security_cookie_1);
    arg3 = 0xfffffffe;
    __return_addr = __return_addr_1;
    *fsbase = &var_8;
    return __return_addr_1;
}

int32_t ___isa_available_init(uint64_t arg1 @ xcr0)
{
    data_4144ec = 0;
    data_414018 = (data_414018 | 1);
    if (IsProcessorFeaturePresent(PF_XMMI64_INSTRUCTIONS_AVAILABLE) != 0)
    {
        uint32_t var_14_1 = 0;
        uint32_t eax_1;
        uint32_t ecx_1;
        uint32_t edx_1;
        uint32_t ebx_1;
        eax_1 = __cpuid(0, 0);
        uint32_t var_28 = eax_1;
        uint32_t eax_2 = var_28;
        uint32_t eax_7;
        uint32_t ecx_2;
        uint32_t edx_2;
        uint32_t ebx_2;
        eax_7 = __cpuid(1, 0);
        var_28 = eax_7;
        uint32_t var_24_2 = ebx_2;
        uint32_t var_1c_2 = edx_2;
        int32_t edi_4;
        if ((((edx_1 ^ 0x49656e69) | (ecx_1 ^ 0x6c65746e)) | (ebx_1 ^ 0x756e6547)) != 0)
        {
        label_412d65:
            edi_4 = data_4144f0;
        }
        else
        {
            int32_t eax_12 = (var_28 & 0xfff3ff0);
            if ((eax_12 != 0x106c0 && (eax_12 != 0x20660 && (eax_12 != 0x20670 && (eax_12 != 0x30650 && (eax_12 != 0x30660 && eax_12 != 0x30670))))))
            {
                goto label_412d65;
            }
            edi_4 = (data_4144f0 | 1);
            data_4144f0 = edi_4;
        }
        uint32_t ebx_4;
        if (eax_2 < 7)
        {
            ebx_4 = var_14_1;
        }
        else
        {
            uint32_t* var_38_1 = &var_28;
            uint32_t eax_13;
            uint32_t ecx_4;
            uint32_t edx_3;
            uint32_t ebx_3;
            eax_13 = __cpuid(7, 0);
            var_28 = eax_13;
            uint32_t var_20_3 = ecx_4;
            uint32_t var_1c_3 = edx_3;
            ebx_4 = ebx_3;
            if ((ebx_4 & 0x200) != 0)
            {
                data_4144f0 = (edi_4 | 2);
            }
        }
        int32_t eax_15 = (data_414018 | 2);
        data_4144ec = 1;
        data_414018 = eax_15;
        if ((ecx_2 & 0x100000) != 0)
        {
            data_4144ec = 2;
            data_414018 = (eax_15 | 4);
            if (((ecx_2 & 0x8000000) != 0 && (ecx_2 & 0x10000000) != 0))
            {
                uint32_t eax_17;
                uint32_t edx_4;
                edx_4 = _xgetbv(0, arg1);
                uint32_t var_14_2 = edx_4;
                if ((eax_17 & 6) == 6)
                {
                    int32_t eax_21 = (data_414018 | 8);
                    data_4144ec = 3;
                    data_414018 = eax_21;
                    if ((ebx_4 & 0x20) != 0)
                    {
                        data_4144ec = 5;
                        data_414018 = (eax_21 | 0x20);
                        if (((ebx_4 & 0xd0030000) == 0xd0030000 && (eax_17 & 0xe0) == 0xe0))
                        {
                            data_414018 = (data_414018 | 0x40);
                            data_4144ec = 6;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int32_t ___asan_report_present()
{
    int32_t eax;
    eax = data_41401c != 0;
    return eax;
}

enum _EXCEPTION_DISPOSITION _except_handler4_common(uint32_t* CookiePointer, void (* CookieCheckFunction)(uint32_t), struct _EXCEPTION_RECORD* ExceptionRecord, struct _EXCEPTION_REGISTRATION_RECORD* EstablisherFrame, struct _CONTEXT* ContextRecord, void* DispatcherContext)
{
    /* tailcall */
    return _except_handler4_common(CookiePointer, CookieCheckFunction, ExceptionRecord, EstablisherFrame, ContextRecord, DispatcherContext);
}

int32_t __current_exception()
{
    /* tailcall */
    return __current_exception();
}

int32_t __current_exception_context()
{
    /* tailcall */
    return __current_exception_context();
}

void memset(uint8_t* arg1, uint8_t arg2, uint32_t arg3)
{
    /* tailcall */
    return memset(arg1, arg2, arg3);
}

void exit(int32_t status) __noreturn
{
    /* tailcall */
    return exit(status);
}

int32_t _seh_filter_exe()
{
    /* tailcall */
    return _seh_filter_exe();
}

int32_t _set_app_type()
{
    /* tailcall */
    return _set_app_type();
}

int32_t __setusermatherr()
{
    /* tailcall */
    return __setusermatherr();
}

int32_t _configure_wide_argv()
{
    /* tailcall */
    return _configure_wide_argv();
}

int32_t _initialize_wide_environment()
{
    /* tailcall */
    return _initialize_wide_environment();
}

wchar16** _get_initial_wide_environment()
{
    /* tailcall */
    return _get_initial_wide_environment();
}

int32_t _initterm()
{
    /* tailcall */
    return _initterm();
}

int32_t _initterm_e()
{
    /* tailcall */
    return _initterm_e();
}

void _exit(int32_t _Except) __noreturn
{
    /* tailcall */
    return _exit(_Except);
}

errno_t _set_fmode(int32_t _Value)
{
    /* tailcall */
    return _set_fmode(_Value);
}

int32_t __p___argc()
{
    /* tailcall */
    return __p___argc();
}

int32_t __p___wargv()
{
    /* tailcall */
    return __p___wargv();
}

void _cexit() __noreturn
{
    /* tailcall */
    return _cexit();
}

int32_t _c_exit()
{
    /* tailcall */
    return _c_exit();
}

int32_t _register_thread_local_exe_atexit_callback()
{
    /* tailcall */
    return _register_thread_local_exe_atexit_callback();
}

int32_t _configthreadlocale(int32_t _Flag)
{
    /* tailcall */
    return _configthreadlocale(_Flag);
}

int32_t _set_new_mode(int32_t _NewMode)
{
    /* tailcall */
    return _set_new_mode(_NewMode);
}

int32_t __p__commode()
{
    /* tailcall */
    return __p__commode();
}

int32_t _initialize_onexit_table()
{
    /* tailcall */
    return _initialize_onexit_table();
}

int32_t _register_onexit_function(struct _onexit_table_t* _Table, _onexit_t _Function)
{
    /* tailcall */
    return _register_onexit_function(_Table, _Function);
}

int32_t _crt_atexit()
{
    /* tailcall */
    return _crt_atexit();
}

errno_t _controlfp_s(uint32_t* _CurrentState, uint32_t _NewValue, uint32_t _Mask)
{
    /* tailcall */
    return _controlfp_s(_CurrentState, _NewValue, _Mask);
}

void terminate() __noreturn
{
    /* tailcall */
    return terminate();
}

int32_t initialize_legacy_wide_specifiers()
{
    int32_t ecx = data_4386cc;
    data_4386c8 = (data_4386c8 | 4);
    data_4386cc = ecx;
    int32_t ecx_1 = data_4386bc;
    data_4386b8 = (data_4386b8 | 2);
    data_4386bc = ecx_1;
    return 0;
}

int32_t __filter_x86_sse2_floating_point_exception_default(int32_t arg1 @ mxcsr, int32_t arg2)
{
    int32_t ecx;
    int32_t var_8 = ecx;
    if ((data_4144ec >= 1 && (arg2 == 0xc00002b4 || arg2 == 0xc00002b5)))
    {
        int32_t eax_2 = (arg1 ^ 0x3f);
        if (((eax_2 & 0x81) != 0 && (eax_2 & 0x204) == 0))
        {
            return 0xc000008e;
        }
        if (((eax_2 & 0x81) == 0 || (((eax_2 & 0x81) != 0 && (eax_2 & 0x204) != 0) && (eax_2 & 0x102) == 0)))
        {
            return 0xc0000090;
        }
        if ((((eax_2 & 0x81) != 0 && (eax_2 & 0x204) != 0) && (eax_2 & 0x102) != 0))
        {
            if ((eax_2 & 0x408) == 0)
            {
                return 0xc0000091;
            }
            if ((eax_2 & 0x810) == 0)
            {
                return 0xc0000093;
            }
            if ((eax_2 & 0x1020) == 0)
            {
                return 0xc000008f;
            }
        }
    }
    return arg2;
}

void* __SEH_prolog4_GS(int32_t arg1 @ esi, int32_t arg2 @ edi, void* arg3)
{
    enum _EXCEPTION_DISPOSITION (* var_4)(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, struct _CONTEXT* arg3, int32_t arg4) = __except_handler4;
    int32_t* fsbase;
    int32_t var_8 = *fsbase;
    int32_t eax = arg_8;
    int32_t ebp;
    arg_8 = ebp;
    void* esp = (&var_8 - eax);
    *(esp - 4) = nullptr;
    *(esp - 8) = arg1;
    *(esp - 0xc) = arg2;
    uint32_t __security_cookie_1 = __security_cookie;
    int32_t eax_1 = (__security_cookie_1 ^ &arg_8);
    int32_t var_14 = eax_1;
    *(esp - 0x10) = eax_1;
    void* var_10 = (esp - 0x10);
    *(esp - 0x14) = __return_addr;
    void* __return_addr_1 = (arg3 ^ __security_cookie_1);
    arg3 = 0xfffffffe;
    __return_addr = __return_addr_1;
    *fsbase = &var_8;
    return __return_addr_1;
}

int32_t __convention("regparm") __alloca_probe_16(void* arg1)
{
    void* ecx_1 = ((&arg_4 - arg1) & 0xf);
    /* tailcall */
    return __chkstk(((arg1 + ecx_1) | (ecx_1 - ecx_1)));
}

int32_t __convention("regparm") sub_413026(void* arg1)
{
    void* ecx_1 = ((&arg_4 - arg1) & 7);
    /* tailcall */
    return __chkstk(((arg1 + ecx_1) | (ecx_1 - ecx_1)));
}

void* const __convention("regparm") __chkstk(int32_t arg1)
{
    void* ecx_1 = ((&__return_addr - arg1) & (!(arg1 - arg1)));
    int32_t __saved_ecx;
    void* eax_2 = (&__saved_ecx & 0xfffff000);
    while (ecx_1 < eax_2)
    {
        eax_2 = (eax_2 - 0x1000);
        *eax_2;
    }
    void* const __return_addr_1 = __return_addr;
    *ecx_1 = __return_addr_1;
    return __return_addr_1;
}

void __stdcall _CxxThrowException(void* pExceptionObject, struct _s__ThrowInfo* pThrowInfo) __noreturn
{
    /* tailcall */
    return _CxxThrowException(pExceptionObject, pThrowInfo);
}

void memcpy(uint8_t* arg1, uint8_t* arg2, uint32_t arg3)
{
    /* tailcall */
    return memcpy(arg1, arg2, arg3);
}

void memmove(uint8_t* arg1, uint8_t* arg2, uint32_t arg3)
{
    /* tailcall */
    return memmove(arg1, arg2, arg3);
}

int32_t sub_4130d3(int32_t arg1 @ ebp)
{
    /* jump -> *(arg1 + 0x28) */
}

