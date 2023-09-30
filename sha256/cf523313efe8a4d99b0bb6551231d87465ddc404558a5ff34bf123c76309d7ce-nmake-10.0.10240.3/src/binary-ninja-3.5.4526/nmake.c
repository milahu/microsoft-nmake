int32_t* sub_140001000()
{
    sub_14000dfd0(&data_140025c50, &data_140025c48, nullptr, 0, 0, 0, 0);
    int32_t* rax = sub_14000dcc4(&data_140025c50);
    data_140025c40 = rax;
    return rax;
}

int64_t* sub_140001044()
{
    if (data_140025c40 != 0)
    {
        data_140025c38 = (data_140025c38 | 0x20);
        sub_1400011b8();
        data_140025c40 = 0;
    }
    if ((data_140025c38 & 0x20) != 0)
    {
        char rax_1;
        int64_t r8_1;
        rax_1 = sub_14000f614(&data_140025c50);
        if (rax_1 != 0)
        {
            if ((data_140025c38 & 0x10) != 0)
            {
                r8_1 = sub_140003898(data_140025c24, 0x444, r8_1);
            }
            sub_140003898(data_140025c24, 0x43d, r8_1);
        }
    }
    int64_t* rax_2 = sub_14000dc58();
    char rdx = data_140025c38;
    int64_t* rbx = rax_2;
    if ((rdx & 0x40) == 0)
    {
        rax_2 = sub_14000dcc4(&data_140025c50);
        rdx = data_140025c38;
        rbx[1] = rax_2;
    }
    else
    {
        int64_t rcx_3 = data_140025c30;
        data_140025c30 = 0;
        rax_2[1] = rcx_3;
    }
    rax_2 = rdx;
    arg_8 = rbx;
    rax_2 = (rax_2 & 0x30);
    if (rax_2 != 0x10)
    {
        sub_14000dfd0(rbx[1], &data_140025c48, nullptr, 0, 0, 0, 0);
        rdx = data_140025c38;
    }
    if ((rdx & 0x20) != 0)
    {
        int64_t* i = data_140025c48;
        sub_140001474(&data_140011610, &arg_8, &data_140025c48);
        sub_140001474(&data_140011614, &arg_8, nullptr);
        data_140025c48 = i;
        int64_t* i_2 = i;
        if (i != 0)
        {
            int64_t* i_4 = data_14003d0e0;
            do
            {
                i = *i;
                *i_2 = i_4;
                i_4 = i_2;
                data_140025c48 = i;
                i_2 = i;
            } while (i != 0);
            data_14003d0e0 = i_4;
        }
    }
    int64_t** i_1 = data_140025c28;
    int64_t** i_3 = &data_140025c28;
    for (; i_1 != 0; i_1 = *i_1)
    {
        i_3 = i_1;
    }
    int64_t* rax_3 = arg_8;
    *i_3 = rax_3;
    return rax_3;
}

int64_t* sub_1400011b8()
{
    data_1400157ef = data_1400157ee;
    int64_t* rax_1 = sub_14000dc58();
    rax_1[1] = data_140025c40;
    int64_t* i = data_140025c48;
    data_140025c28 = rax_1;
    sub_140001474(&data_140011610, &data_140025c28, &data_140025c48);
    sub_140001474(&data_140011614, &data_140025c28, nullptr);
    data_140025c48 = i;
    int64_t* i_1 = i;
    if (i != 0)
    {
        int64_t* i_2 = data_14003d0e0;
        do
        {
            i = *i;
            *i_1 = i_2;
            i_2 = i_1;
            data_140025c48 = i;
            i_1 = i;
        } while (i != 0);
        data_14003d0e0 = i_2;
    }
    void* rcx_2 = data_140025c28;
    if ((rcx_2 == 0 && (data_140025c38 & 0x20) == 0))
    {
        i_1 = sub_140003898(data_140025c20, 0x43b, data_140025c40);
        rcx_2 = data_140025c28;
    }
    if ((rcx_2 != 0 || (rcx_2 == 0 && (data_140025c38 & 0x20) == 0)))
    {
        i_1 = sub_14000f614(*(rcx_2 + 8));
        if (i_1 != 0)
        {
            data_140025c38 = (data_140025c38 | 0x10);
        }
    }
    return i_1;
}

void sub_1400012a0()
{
    int64_t* rax;
    int64_t r8;
    if (data_140025c40 == 0)
    {
        data_140025c38 = (data_140025c38 & 0xdf);
    }
    else
    {
        rax = sub_1400011b8();
        data_140025c40 = 0;
    }
    int64_t rbx;
    rbx = data_1400157ef;
    if (data_140025c52 != 0)
    {
        rbx = (rbx | 0x20);
        data_1400157ef = rbx;
    }
    int64_t* rdi = data_140025c28;
    if (rdi == 0)
    {
        sub_140003898(data_140025c24, 0x40d, r8);
        breakpoint();
    }
    if ((data_140025c38 & 0x10) == 0)
    {
        if (*rdi == 0)
        {
            rax = sub_1400013b0(rdi[1]);
            if (rax == 0)
            {
                rdi = data_140025c28;
            }
            else
            {
                free(*(data_140025c28 + 8));
            }
        }
        if (((*rdi == 0 && rax == 0) || *rdi != 0))
        {
            data_1400157e0 = rdi;
        }
    }
    else
    {
        rbx = (rbx >> 5);
        rbx = (rbx & 1);
        char* rax_1 = sub_140009244(0x30);
        *(rax_1 + 0x10) = rdi[1];
        rax_1[0x28] = rbx;
        *rax_1 = data_140025c00;
        data_140025c00 = rax_1;
        void* rcx_4 = *rax_1;
        if (rcx_4 != 0)
        {
            *(rcx_4 + 8) = rax_1;
        }
    }
    if (((((data_140025c38 & 0x10) == 0 && *rdi == 0) && rax != 0) || (data_140025c38 & 0x10) != 0))
    {
        int64_t** rcx_8 = data_140025c28;
        rax = data_14003d0e0;
        data_14003d0e0 = rcx_8;
        *rcx_8 = rax;
    }
    data_140025c38 = (data_140025c38 | 0x80);
    data_140025c28 = 0;
}

uint64_t sub_1400013b0(wchar16* arg1)
{
    wchar16* _String1 = arg1;
    int64_t rbx;
    rbx = 0;
    int32_t rax = _wcsicmp(arg1, u".SILENT");
    if (rax == 0)
    {
        data_140025c38 = (data_140025c38 | 2);
        sub_14000b804((rax + 0x73), 1);
        rbx = 1;
    }
    int32_t rax_1 = _wcsicmp(_String1, u".IGNORE");
    uint64_t _String1_1;
    uint32_t rax_2;
    uint32_t rcx_3;
    uint32_t i_1;
    uint32_t i;
    if (rax_1 != 0)
    {
        _String1_1 = _String1;
        do
        {
            rcx_3 = *_String1_1;
            i = *(_String1_1 + (u".SUFFIXES" - _String1));
            if (rcx_3 != i)
            {
                break;
            }
            _String1_1 = (_String1_1 + 2);
        } while (i != 0);
        if ((rcx_3 - i) != 0)
        {
            int64_t rdx_4 = (u".PRECIOUS" - _String1);
            do
            {
                rax_2 = *_String1;
                i_1 = *(_String1 + rdx_4);
                if (rax_2 != i_1)
                {
                    break;
                }
                _String1 = &_String1[1];
            } while (i_1 != 0);
            if ((rax_2 - i_1) == 0)
            {
                data_140025c38 = (data_140025c38 | 8);
            }
        }
        else
        {
            data_140025c38 = (data_140025c38 | 1);
        }
    }
    else
    {
        data_140025c38 = (data_140025c38 | 4);
        sub_14000b804((rax_1 + 0x69), 1);
    }
    if (((rax_1 == 0 || (rax_1 != 0 && (rcx_3 - i) == 0)) || ((rax_1 != 0 && (rcx_3 - i) != 0) && (rax_2 - i_1) == 0)))
    {
        rbx = 1;
    }
    _String1_1 = rbx;
    return _String1_1;
}

void sub_140001474(int16_t* arg1, int64_t* arg2, int64_t** arg3)
{
    int64_t* i = *arg2;
    wchar16* j_1 = nullptr;
    int32_t* r12 = nullptr;
    j_2 = nullptr;
    int64_t r13 = 0;
    int64_t** rbp = arg3;
    wchar16* rsi = nullptr;
    for (; i != 0; i = *i)
    {
        wchar16* j_3 = wcspbrk(i[1], arg1);
        if (j_3 != 0)
        {
            uint64_t rcx_1 = i[1];
            if (*arg1 != 0x24)
            {
                j_3 = sub_14000f614(rcx_1);
                if (j_3 == 0)
                {
                    j_3 = sub_14000fde8(i[1]);
                    j_2 = j_3;
                    j_1 = j_3;
                    if (j_3 != 0)
                    {
                        r13 = i[1];
                    }
                }
            }
            else
            {
                r12 = sub_14000e740(rcx_1, 0xff, rbp);
                free(i[1]);
            }
            if ((*arg1 == 0x24 || ((*arg1 != 0x24 && j_3 == 0) && j_3 != 0)))
            {
                if (rsi == 0)
                {
                    *arg2 = *i;
                    *i = data_14003d0e0;
                    data_14003d0e0 = i;
                    i = *arg2;
                }
                else
                {
                    *rsi = *i;
                    *i = data_14003d0e0;
                    data_14003d0e0 = i;
                    i = *rsi;
                }
                if (*arg1 == 0x24)
                {
                    arg_20 = r12;
                    while (true)
                    {
                        int16_t* rax_5 = sub_14000160c(&arg_20);
                        if (rax_5 == 0)
                        {
                            break;
                        }
                        int64_t* j_4 = sub_14000dc58();
                        j_2 = j_4;
                        j_1 = j_4;
                        *(j_1 + 8) = sub_14000dcc4(rax_5);
                        *j_1 = *arg2;
                        if (rsi == 0)
                        {
                            rsi = j_1;
                        }
                        *arg2 = j_1;
                    }
                    free(r12);
                    rbp = arg3;
                    continue;
                }
                else
                {
                    if (j_1 != 0)
                    {
                        if (rsi == 0)
                        {
                            wchar16* j = *j_1;
                            rsi = j_1;
                            for (; j != 0; j = *j)
                            {
                                rsi = j;
                            }
                        }
                        wchar16* j_5;
                        do
                        {
                            j_5 = j_1;
                            j_1 = *j_1;
                        } while (j_1 != 0);
                        *j_5 = *arg2;
                        j_1 = j_2;
                        *arg2 = j_1;
                    }
                    free(r13);
                    continue;
                }
            }
        }
        rsi = i;
    }
}

int16_t* sub_14000160c(int64_t* arg1)
{
    int16_t* rcx = *arg1;
    while (true)
    {
        if ((*rcx != 0x20 && *rcx != 9))
        {
            int16_t i = *rcx;
            int16_t* r8 = rcx;
            if (i == 0)
            {
                return 0;
            }
            if (i == 0x22)
            {
                while (true)
                {
                    rcx = &rcx[1];
                    if (*rcx == 0)
                    {
                        break;
                    }
                    if (*rcx == 0x22)
                    {
                        break;
                    }
                    if ((!(*rcx != 0 && *rcx != 0x22)))
                    {
                        /* nop */
                    }
                }
            }
            else
            {
                while (i != 0x20)
                {
                    if (i == 9)
                    {
                        break;
                    }
                    rcx = &rcx[1];
                    i = *rcx;
                    if (i == 0)
                    {
                        break;
                    }
                }
                if (i == 0x20)
                {
                    goto label_140001681;
                }
            }
            if (*rcx == 0x20)
            {
            label_140001681:
                *rcx = 0;
            }
            else
            {
                if (*rcx == 9)
                {
                    goto label_140001681;
                }
                if (*rcx == 0x22)
                {
                    rcx = &rcx[1];
                    if (*rcx != 0)
                    {
                        goto label_140001681;
                    }
                }
                if ((*rcx == 0 || *rcx == 0x22))
                {
                    rcx = (rcx - 2);
                }
            }
            *arg1 = &rcx[1];
            return r8;
        }
        rcx = &rcx[1];
    }
}

uint64_t sub_14000169c()
{
    uint64_t rax;
    rax = data_140025c38;
    if (rax < 0)
    {
        rax = (rax & 0x7f);
        data_140025c38 = rax;
    }
    if ((rax & 0x10) == 0)
    {
        if ((rax & 6) == 0)
        {
            void** rcx_3;
            if ((rax & 1) == 0)
            {
                if (((rax & 8) != 0 && data_140025c28 != 0))
                {
                    rcx_3 = &data_140025c10;
                }
                if ((rax & 8) == 0)
                {
                    char* rax_2 = sub_140009244(0x30);
                    int64_t rcx_4 = data_140025c28;
                    data_140025c08 = rax_2;
                    *rax_2 = rcx_4;
                    *(data_140025c08 + 8) = data_140025c48;
                    goto label_1400017c7;
                }
            }
            if (((rax & 1) != 0 && data_140025c28 != 0))
            {
                rcx_3 = &data_140025c18;
            }
            if ((((rax & 1) != 0 && data_140025c28 != 0) || (((rax & 1) == 0 && (rax & 8) != 0) && data_140025c28 != 0)))
            {
                int64_t rdx;
                sub_140001f10(rcx_3, rdx);
                goto label_1400017c7;
            }
            if (((rax & 1) != 0 && data_140025c28 == 0))
            {
                uint64_t* i = data_140025c18;
                uint64_t* i_1 = i;
                if (i != 0)
                {
                    do
                    {
                        data_140025c18 = *i;
                        free(i_1[1]);
                        *i_1 = data_14003d0e0;
                        i = data_140025c18;
                        data_14003d0e0 = i_1;
                        i_1 = i;
                    } while (i != 0);
                    goto label_1400017c7;
                }
            }
        }
        else if (data_140025c28 != 0)
        {
            void* const r8_1;
            if ((rax & 2) != 0)
            {
                r8_1 = u".SILENT";
            }
            else
            {
                rax = (rax & 4);
                r8_1 = u".IGNORE";
                if (rax == 0)
                {
                    r8_1 = nullptr;
                }
            }
            sub_140003898(data_140025c24, 0x442, r8_1);
            goto label_1400017c7;
        }
    }
    else if (data_140025c28 != 0)
    {
        int64_t r8;
        sub_140003898(data_140025c24, 0x43e, r8);
    label_1400017c7:
        rax = data_140025c38;
    }
    rax = (rax | 0x40);
    data_140025c38 = rax;
    data_140025c28 = 0;
    data_140025c48 = 0;
    return rax;
}

uint64_t sub_1400017f0()
{
    uint64_t rax;
    rax = data_140025c38;
    int64_t rdi;
    rdi = 1;
    int64_t rsi;
    rsi = 1;
    if ((rax & 0x10) != 0)
    {
        rax = data_140025c00;
        *(rax + 0x18) = data_140025c28;
    }
    else if ((rax & 0xf) == 0)
    {
        void** i_1 = data_1400157e0;
        *(data_140025c08 + 0x10) = data_140025c28;
        *(data_140025c08 + 0x18) = data_140025c48;
        rax = data_1400157ef;
        *(data_140025c08 + 0x20) = rax;
        if (i_1 != 0)
        {
            void** i;
            do
            {
                char rax_2;
                int64_t r8_1;
                rax_2 = sub_1400013b0(i_1[1]);
                if (rax_2 != 0)
                {
                    sub_140003898(data_140025c24, 0x445, r8_1);
                }
                rax = sub_140001ddc(i_1[1], rsi);
                if (data_1400157f8 == 0)
                {
                    data_1400157f8 = i_1;
                    rdi = 0;
                }
                i = *i_1;
                data_1400157e0 = i;
                if (rdi != 0)
                {
                    rax = data_14003d0e0;
                    *i_1 = rax;
                    data_14003d0e0 = i_1;
                }
                rsi = 0;
                i_1 = i;
            } while (i != 0);
        }
    }
    else if (data_140025c28 != 0)
    {
        void* const r8_2;
        if ((rax & 2) != 0)
        {
            r8_2 = u".SILENT";
        }
        else if ((rax & 4) != 0)
        {
            r8_2 = u".IGNORE";
        }
        else if ((rax & 8) != 0)
        {
            r8_2 = u".PRECIOUS";
        }
        else
        {
            rax = (rax & 1);
            r8_2 = u".SUFFIXES";
            if (rax == 0)
            {
                r8_2 = nullptr;
            }
        }
        rax = sub_140003898(data_140025c24, 0x441, r8_2);
    }
    data_1400157e0 = 0;
    data_140025c28 = 0;
    data_140025c48 = 0;
    data_140025c08 = 0;
    data_140025c38 = 0;
    return rax;
}

uint64_t sub_140001968()
{
    if (wcschr(data_140025c40, 0x24) != 0)
    {
        int64_t* i = data_140025c48;
        int32_t* rax_1;
        int64_t r8_1;
        rax_1 = sub_14000e740(data_140025c40, 0xff, &data_140025c48);
        if (*rax_1 == 0)
        {
            sub_140003898(data_140025c24, 0x3ec, r8_1);
        }
        data_140025c48 = i;
        int64_t* i_1 = i;
        if (i != 0)
        {
            int64_t* i_2 = data_14003d0e0;
            do
            {
                i = *i;
                *i_1 = i_2;
                i_2 = i_1;
                data_140025c48 = i;
                i_1 = i;
            } while (i != 0);
            data_14003d0e0 = i_2;
        }
        free(data_140025c40);
        data_140025c40 = rax_1;
    }
    int16_t* rbx_1 = data_140025c40;
    wint_t _C = *rbx_1;
    if (_C != 0)
    {
        do
        {
            bool rcx_4;
            if (_C >= 0x80)
            {
                rcx_4 = iswspace(_C) == 0;
            }
            else
            {
                rcx_4 = (*(_C + &data_140011640) & 1);
            }
            if (rcx_4 == 0)
            {
                break;
            }
            rbx_1 = &rbx_1[1];
            _C = *rbx_1;
        } while (_C != 0);
        if (*rbx_1 != 0)
        {
            sub_140003898(data_140025c24, 0x3e9, *rbx_1);
        }
    }
    int16_t* rdx_2 = data_140025c30;
    wchar16* rcx_7 = data_140025c40;
    data_1400157ed = 1;
    uint64_t rax_4 = sub_140001c2c(rcx_7, rdx_2, 0);
    if (rax_4 == 0)
    {
        free(data_140025c40);
        rax_4 = free(data_140025c30);
    }
    data_140025c30 = 0;
    data_140025c40 = 0;
    return rax_4;
}

uint64_t sub_140001ac8(int16_t* arg1, int16_t* arg2, char arg3)
{
    int64_t rsi;
    rsi = arg3;
    int16_t* string = arg2;
    int16_t* rbx = arg1;
    if (*arg1 != 0)
    {
        do
        {
            bool rcx;
            if (*rbx >= 0x80)
            {
                rcx = iswspace(*rbx) == 0;
            }
            else
            {
                rcx = (*(*rbx + &data_140011640) & 1);
            }
            if (rcx == 0)
            {
                break;
            }
            rbx = &rbx[1];
        } while (*rbx != 0);
    }
    uint64_t rax;
    if (*rbx != 0)
    {
        if ((rsi & 4) == 0)
        {
            sub_140003898(data_140025c24, 0x3e9, *rbx);
        }
        else
        {
            rax = 0;
        }
    }
    if (((*rbx != 0 && (rsi & 4) == 0) || *rbx == 0))
    {
        if ((rsi & 0x40) != 0)
        {
            int64_t rbx_1 = 0;
            wchar16* i = wcschr(string, 0x24);
            if (i != 0)
            {
                do
                {
                    rbx_1 = (rbx_1 + 1);
                    i = wcschr(&i[1], 0x24);
                } while (i != 0);
                if (rbx_1 != 0)
                {
                    int64_t rax_1 = -1;
                    do
                    {
                        rax_1 = (rax_1 + 1);
                    } while (string[rax_1] != 0);
                    int16_t* string_1 = sub_140009214();
                    int16_t i_1 = *string;
                    int16_t* string_2 = string;
                    int16_t* string_3 = string_1;
                    for (; i_1 != 0; i_1 = *string_2)
                    {
                        *string_3 = i_1;
                        string_2 = &string_2[1];
                        string_3 = &string_3[1];
                        if (i_1 == 0x24)
                        {
                            *string_3 = 0x24;
                            string_3 = &string_3[1];
                        }
                    }
                    *string_3 = 0;
                    free(string);
                    string = string_1;
                }
            }
        }
        rax = sub_140001c2c(arg1, string, rsi);
    }
    return rax;
}

uint64_t sub_140001c2c(wchar16* arg1, int16_t* arg2, char arg3)
{
    int64_t r14;
    r14 = arg3;
    _RequiredCount = 0;
    wchar16* string = arg2;
    int64_t r15;
    r15 = 0;
    int16_t* string_1;
    if ((arg3 & 2) == 0)
    {
        uint64_t rax_2;
        if (data_1400157ed == 0)
        {
        label_140001cf5:
            data_1400157ed = 0;
            rax_2 = sub_14000918c(arg1);
            uint64_t* rbx_1 = rax_2;
            if (rax_2 != 0)
            {
                rax_2 = *(rax_2 + 0x18);
                if ((rax_2 & 2) == 0)
                {
                    rax_2 = (rax_2 & data_1400157ec);
                    if ((4 & rax_2) == 0)
                    {
                        goto label_140001d1b;
                    }
                    goto label_140001cc3;
                }
            label_140001cc3:
                rax_2 = 0;
            }
            else
            {
            label_140001d1b:
                int64_t* rax_5 = sub_14000dc58();
                rax_5[1] = string;
                if (rbx_1 != 0)
                {
                    r15 = 1;
                }
                else
                {
                    char* rax_6 = sub_140009244(&rbx_1[4]);
                    rbx_1 = rax_6;
                    *(rax_6 + 8) = arg1;
                }
                rbx_1[3] = (rbx_1[3] & 0xef);
                rbx_1[3] = (rbx_1[3] | r14);
                *rax_5 = rbx_1[2];
                rbx_1[2] = rax_5;
                if (r15 == 0)
                {
                    uint64_t** rcx_6 = data_140037098;
                    data_140037098 = 0;
                    *rbx_1 = *rcx_6;
                    *rcx_6 = rbx_1;
                }
                if (((r14 & 0x40) == 0 && wcschr(string, 0x24) != 0))
                {
                    rbx_1[3] = (rbx_1[3] | 1);
                    rax_2 = sub_14000dfd0(string, nullptr, nullptr, arg1, 1, 0, r14);
                    rbx_1[3] = (rbx_1[3] & 0xfe);
                    if (rax_2 == 0)
                    {
                        char rcx_9 = (rbx_1[3] | 0x10);
                        rbx_1[2] = 0;
                        rbx_1[3] = rcx_9;
                    }
                }
                rax_2 = 1;
            }
            return rax_2;
        }
        if ((data_1400157ec & 4) != 0)
        {
            goto label_140001cf5;
        }
        if (_wgetenv_s(&_RequiredCount, nullptr, 0, arg1) != 0)
        {
            goto label_140001cf5;
        }
        if (_RequiredCount <= 0)
        {
            goto label_140001cf5;
        }
        rax_2 = sub_14000918c(arg1);
        if (rax_2 != 0)
        {
            rax_2 = *(rax_2 + 0x18);
            if ((rax_2 & 2) != 0)
            {
                goto label_140001cc3;
            }
            rax_2 = (rax_2 & data_1400157ec);
            if ((4 & rax_2) != 0)
            {
                goto label_140001cc3;
            }
        }
        string_1 = string;
        goto label_140001cd8;
    }
    if (*arg2 == 0)
    {
        goto label_140001cf5;
    }
    string_1 = arg2;
label_140001cd8:
    errno_t rax_4;
    int64_t r8;
    rax_4 = _wputenv_s(arg1, sub_14000e6a4(string_1));
    if (rax_4 != 0)
    {
        sub_140003898(data_140025c24, 0x41f, r8);
    }
    goto label_140001cf5;
}

uint64_t sub_140001ddc(int16_t* arg1, char arg2)
{
    char* rbx = data_140025c08;
    int64_t rdi;
    rdi = arg2;
    if (rbx == 0)
    {
        char* rax_1 = sub_140009244(0x30);
        rbx = rax_1;
        data_140025c08 = rax_1;
    }
    char* rax_2 = sub_140009244(0x10);
    if (rdi == 0)
    {
        char* rax_3 = sub_140009244(0x30);
        *rax_3 = *rbx;
        *(rax_3 + 8) = *(rbx + 8);
        *(rax_3 + 0x10) = *(rbx + 0x10);
        *(rax_3 + 0x18) = *(rbx + 0x18);
        int64_t rcx_4;
        rcx_4 = rbx[0x20];
        rax_3[0x20] = rcx_4;
        *(rax_3 + 0x28) = *(rbx + 0x28);
        *(rax_2 + 8) = rax_3;
    }
    else
    {
        *(rax_2 + 8) = data_140025c08;
    }
    void** rax_4;
    int64_t r8;
    rax_4 = Concurrency::details::SchedulerProxy::Cleanup(arg1);
    uint64_t rax_5;
    if (rax_4 == 0)
    {
        *rax_2 = 0;
        int64_t* rax_6 = sub_140009244(0x30);
        rax_6[2] = data_1400157ef;
        rax_6[1] = arg1;
        rax_6[4] = rax_2;
        rax_5 = sub_14000dd88(arg1);
        uint64_t rdx = rax_5;
        *rax_6 = *(&data_140025800 + (rdx << 3));
        *(&data_140025800 + (rdx << 3)) = rax_6;
    }
    else
    {
        if (((rax_4[2] ^ data_1400157ef) & 0x20) != 0)
        {
            sub_140003898(data_140025c24, 0x43f, r8);
        }
        char** i_1 = &rax_4[4];
        for (char* i = *i_1; i != 0; i = *i)
        {
            i_1 = i;
        }
        *i_1 = rax_2;
        rax_5 = free(arg1);
    }
    return rax_5;
}

void sub_140001f10(void** arg1, int64_t arg2)
{
    _Context = arg2;
    void** rbx = data_140025c28;
    while (true)
    {
        void** rdi_1 = rbx;
        if (rbx == 0)
        {
            break;
        }
        wchar16* rax = wcschr(rbx[1], 0x24);
        if (rax != 0)
        {
            int64_t* i_3 = data_140025c48;
            int32_t* _String_1 = sub_14000e740(rbx[1], 0xff, &data_140025c48);
            if (i_3 != data_140025c48)
            {
                int64_t* i_4 = data_14003d0e0;
                int64_t* i;
                do
                {
                    i = *i_3;
                    *i_3 = i_4;
                    i_4 = i_3;
                    i_3 = i;
                } while (i != data_140025c48);
                data_14003d0e0 = i_4;
            }
            _Context = 0;
            void* _String = _String_1;
            while (true)
            {
                wchar16* rax_3 = wcstok_s(_String, &data_14001161c, &_Context);
                if (rax_3 == 0)
                {
                    break;
                }
                int64_t* rax_1 = sub_14000dc58();
                rax_1[1] = sub_14000dcc4(rax_3);
                void* _String_2 = arg1;
                for (_String = *arg1; _String != 0; _String = *_String)
                {
                    _String_2 = _String;
                }
                *_String_2 = rax_1;
            }
            free(_String_1);
            free(rbx[1]);
            rbx = *rbx;
            *rdi_1 = data_14003d0e0;
            data_14003d0e0 = rdi_1;
        }
        else
        {
            rbx = *rbx;
            void*** i_2 = arg1;
            *rdi_1 = (*rdi_1 & rax);
            for (void* i_1 = *arg1; i_1 != 0; i_1 = *i_1)
            {
                i_2 = i_1;
            }
            *i_2 = rdi_1;
        }
    }
}

uint64_t sub_140002054(int16_t* arg1, char arg2, int64_t* arg3, void** arg4)
{
    arg_20 = arg4;
    arg_20 = nullptr;
    int32_t rax = sub_14000209c(arg1, arg2, arg3, nullptr, &arg_20);
    void** rcx = arg_20;
    int32_t rbx = rax;
    if (rcx != 0)
    {
        rbx = (rbx + ?replace_all_in_string@detail@policies@math@boost@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBD1@Z(rcx));
        sub_140003278(&arg_20);
    }
    return rbx;
}

uint64_t sub_14000209c(int16_t* arg1, char arg2, int64_t* arg3, int16_t* arg4, uint64_t arg5)
{
    data_1400157e8 = (data_1400157e8 + 1);
    int64_t rsi;
    rsi = arg2;
    int32_t* rdi = arg1;
    int64_t rbp;
    rbp = 1;
    void** rax = Concurrency::details::SchedulerProxy::Cleanup(arg1);
    void** rbx = rax;
    if (rax == 0)
    {
        rbx = sub_140009244(&rax[6]);
        int32_t* rax_2 = sub_14000dcc4(rdi);
        rbx[3] = 0;
        rbx[4] = 0;
        rbx[1] = rax_2;
        rbx[2] = rsi;
        *(rbx + 0x11) = 0;
        uint64_t rcx_3 = sub_14000dd88(rdi);
        rbp = 0;
        *rbx = *(&data_140025800 + (rcx_3 << 3));
        *(&data_140025800 + (rcx_3 << 3)) = rbx;
    }
    uint64_t rax_6 = sub_140002160(rbx, rsi, arg3, rbp, arg4, arg5);
    data_1400157e8 = (data_1400157e8 - 1);
    return rax_6;
}

uint64_t sub_140002160(void* arg1, char arg2, int64_t* arg3, char arg4, int16_t* arg5, uint64_t arg6)
{
    void var_5a8;
    int64_t rax_1 = (__security_cookie ^ &var_5a8);
    void* s_10 = nullptr;
    int16_t* var_4d8 = arg5;
    int64_t* r15 = arg3;
    int16_t* var_530 = arg5;
    int64_t rbx;
    rbx = arg2;
    int64_t* lpSystemTimeAsFileTime = arg6;
    int64_t* var_4f8 = arg3;
    int32_t var_558 = 0;
    uint64_t rax_4;
    if (arg1 == 0)
    {
        *arg3 = 0;
        rax_4 = 0;
    }
    else
    {
        uint64_t rax_3;
        if ((*(arg1 + 0x11) & 1) != 0)
        {
            rax_3 = sub_140003898(0, 0x42f, *(arg1 + 8));
        }
        int64_t* rsi_1 = *(arg1 + 0x28);
        if (rsi_1 != 0)
        {
            int32_t rax_5 = ?replace_all_in_string@detail@policies@math@boost@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBD1@Z(*rsi_1);
            sub_140003278(rsi_1);
            int64_t rax_6 = *(arg1 + 0x18);
            *(arg1 + 0x28) = 0;
            *r15 = rax_6;
            rax_4 = rax_5;
        }
        else
        {
            rax_3 = *(arg1 + 0x11);
            void var_4f0;
            char var_4a8;
            if ((rax_3 & 2) == 0)
            {
                int64_t* i = *(arg1 + 0x20);
                rax_3 = (rax_3 | 1);
                void** k_7 = nullptr;
                void* s_9 = nullptr;
                void* rcx_5 = *(arg1 + 8);
                void* r12_1 = nullptr;
                data_140026470 = rcx_5;
                data_140026478 = rcx_5;
                void** var_4e8_1 = nullptr;
                void* s;
                __builtin_memset(&s, 0, 0x20);
                void* s_1;
                __builtin_memset(&s_1, 0, 0x18);
                void* s_7 = nullptr;
                void** var_4c8_1 = nullptr;
                void** var_4e0 = nullptr;
                *(arg1 + 0x11) = rax_3;
                int64_t* i_1 = i;
                int64_t* var_548_1;
                int32_t* k_6;
                int64_t* var_538_1;
                void* s_2;
                void* s_3;
                int32_t r14_2;
                if (i != 0)
                {
                    if ((*(i[1] + 0x20) & 0x20) != 0)
                    {
                        void* rax_12;
                        rax_12 = sub_140005ca8(rcx_5, &var_4a8, &var_4f0);
                        if (rax_12 != 0)
                        {
                            if ((var_4a8 & 0x10) != 0)
                            {
                                s_9 = s_2;
                            }
                            if (((var_4a8 & 0x10) == 0 || (((var_4a8 & 0x10) != 0 && s_9 == 0) && (s_9 >> 0x20) == 0)))
                            {
                                s_9 = s_3;
                            }
                        }
                        i = i_1;
                    }
                    int32_t* j_1;
                    int64_t* rsi_2;
                    int64_t* rsi_5;
                    do
                    {
                        rsi_2 = i[1];
                        var_538_1 = rsi_2;
                        if (rsi_2[5] == 0)
                        {
                            var_4c8_1 = &rsi_2[5];
                            j_1 = sub_140002b20(rsi_2, *(arg1 + 8));
                            void** j = j_1;
                            int32_t* j_2 = j_1;
                            void** k_2;
                            int32_t* k_3;
                            if (j_1 != 0)
                            {
                                int32_t r12_2 = var_558;
                                do
                                {
                                    s_1 = j[2];
                                    int64_t rdx_4;
                                    rdx_4 = rsi_2[4];
                                    int32_t rax_17 = sub_14000209c(j[1], rdx_4, &s_1, nullptr, &var_4e0);
                                    r12_2 = (r12_2 + rax_17);
                                    if ((data_140025c3b != 0 && rax_17 != 0))
                                    {
                                        if ((*(Concurrency::details::SchedulerProxy::Cleanup(j[1]) + 0x11) & 8) == 0)
                                        {
                                            int64_t r8_5 = j[1];
                                            data_140015040 = 0;
                                            sub_140003898(0, 0xfaa, r8_5);
                                        }
                                        *(arg1 + 0x11) = (*(arg1 + 0x11) | 8);
                                    }
                                    void* s_5 = s_1;
                                    void* s_8 = s_5;
                                    if (s_10 > s_5)
                                    {
                                        s_8 = s_10;
                                    }
                                    s_10 = s_8;
                                    if ((s_9 == 0 && (rsi_2[4] & 0x20) == 0))
                                    {
                                        if (sub_140005ca8(*(arg1 + 8), &var_4a8, &var_4f0) != 0)
                                        {
                                            if ((var_4a8 & 0x10) != 0)
                                            {
                                                s_9 = s_2;
                                            }
                                            if (((var_4a8 & 0x10) == 0 || (((var_4a8 & 0x10) != 0 && s_9 == 0) && (s_9 >> 0x20) == 0)))
                                            {
                                                s_9 = s_3;
                                            }
                                            *(arg1 + 0x18) = s_9;
                                        }
                                        s_5 = s_1;
                                    }
                                    if ((*(arg1 + 0x10) & 0x10) != 0)
                                    {
                                    label_140002450:
                                        int64_t* rax_22 = sub_14000dc58();
                                        rax_22[1] = sub_14000dcc4(j[1]);
                                        int64_t** k_4 = &k_7;
                                        for (void** k = k_2; k != 0; k = *k)
                                        {
                                            k_4 = k;
                                        }
                                        *k_4 = rax_22;
                                        k_2 = k_7;
                                    }
                                    else
                                    {
                                        if (s_9 < s_5)
                                        {
                                            goto label_140002450;
                                        }
                                        if ((data_140025c3a != 0 && s_9 == s_5))
                                        {
                                            goto label_140002450;
                                        }
                                    }
                                    int64_t* rax_25 = sub_14000dc58();
                                    int32_t* rax_26;
                                    rax_26 = sub_14000dcc4(j[1]);
                                    rax_25[1] = rax_26;
                                    int64_t** k_5 = &k_6;
                                    for (int64_t** k_1 = k_3; k_1 != 0; k_1 = *k_1)
                                    {
                                        k_5 = k_1;
                                    }
                                    *k_5 = rax_25;
                                    j = *j;
                                    k_3 = k_6;
                                } while (j != 0);
                                j_2 = j_1;
                                var_558 = r12_2;
                                r12_1 = s;
                            }
                            void** rcx_12 = var_4e0;
                            if (rcx_12 == 0)
                            {
                                r14_2 = var_558;
                            }
                            else
                            {
                                int32_t rax_27 = ?replace_all_in_string@detail@policies@math@boost@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBD1@Z(rcx_12);
                                r14_2 = (var_558 + rax_27);
                                var_558 = r14_2;
                                j_1 = sub_140003278(&var_4e0);
                            }
                            while (true)
                            {
                                int32_t* j_3 = j_2;
                                if (j_2 == 0)
                                {
                                    break;
                                }
                                free(*(j_2 + 8));
                                j_2 = *j_2;
                                j_1 = free(j_3);
                            }
                            rsi_5 = var_538_1;
                            char r9 = rsi_5[4];
                            if ((r9 & 0x20) != 0)
                            {
                                void** rdx_6 = rsi_5[2];
                                if (rdx_6 != 0)
                                {
                                    int32_t* rcx_16 = *(arg1 + 8);
                                    data_140026458 = 0;
                                    data_140026460 = 0;
                                    data_140026468 = k_2;
                                    j_1 = data_140025c3b;
                                    data_140026470 = rcx_16;
                                    data_140026478 = rcx_16;
                                    data_140026450 = k_3;
                                    if ((((j_1 != 0 && (*(arg1 + 0x11) & 8) == 0) || ((j_1 == 0 || (j_1 != 0 && (*(arg1 + 0x11) & 8) != 0)) && r14_2 == 0)) && s_9 < s_10))
                                    {
                                    label_1400025b5:
                                        int16_t* rax_28 = var_4d8;
                                        rsi_5 = data_140036cec;
                                        data_140036cec = 1;
                                        if (rax_28 == 0)
                                        {
                                            if (k_3 == 0)
                                            {
                                                rax_28 = nullptr;
                                            }
                                            else
                                            {
                                                rax_28 = *(k_3 + 8);
                                            }
                                            var_530 = rax_28;
                                            var_4d8 = rax_28;
                                        }
                                        r14_2 = (r14_2 + sub_140003c94(rcx_16, rdx_6, var_538_1[3], r9, rax_28));
                                        bool cond:8_1 = (*(arg1 + 0x10) & 4) != 0;
                                        var_558 = r14_2;
                                        void* rax_30;
                                        if ((!cond:8_1))
                                        {
                                            rax_30 = sub_140005ca8(*(arg1 + 8), &var_4a8, &var_4f0);
                                            if (rax_30 != 0)
                                            {
                                                if ((var_4a8 & 0x10) != 0)
                                                {
                                                    s = s_2;
                                                }
                                                if (((var_4a8 & 0x10) == 0 || (((var_4a8 & 0x10) != 0 && s_2 == 0) && (s_2 >> 0x20) == 0)))
                                                {
                                                    s = s_3;
                                                }
                                                r12_1 = s;
                                            }
                                        }
                                        if ((cond:8_1 || ((!cond:8_1) && rax_30 == 0)))
                                        {
                                            void* s_4 = s_7;
                                            if (s_4 == 0)
                                            {
                                                void* lpSystemTimeAsFileTime_1;
                                                GetSystemTimeAsFileTime(&lpSystemTimeAsFileTime_1);
                                                r12_1 = lpSystemTimeAsFileTime_1;
                                                s = r12_1;
                                            }
                                            else
                                            {
                                                r12_1 = s_4;
                                                s = s_4;
                                            }
                                        }
                                        rsi_2[5] = r12_1;
                                        arg3 = sub_140002f98(k_3);
                                        if (k_3 != k_2)
                                        {
                                            arg3 = sub_140002f98(k_2);
                                        }
                                        data_140036cec = rsi_5;
                                        rsi_5 = var_538_1;
                                        k_2 = nullptr;
                                        k_7 = nullptr;
                                        j_1 = data_140025c3b;
                                        k_3 = nullptr;
                                        k_6 = nullptr;
                                    }
                                    if ((((j_1 == 0 || (j_1 != 0 && (*(arg1 + 0x11) & 8) != 0)) && r14_2 != 0) || (((j_1 != 0 && (*(arg1 + 0x11) & 8) == 0) || ((j_1 == 0 || (j_1 != 0 && (*(arg1 + 0x11) & 8) != 0)) && r14_2 == 0)) && s_9 >= s_10)))
                                    {
                                        if ((data_140025c3a != 0 && s_9 == s_10))
                                        {
                                            goto label_1400025b5;
                                        }
                                        if ((s_9 == 0 && s_10 == 0))
                                        {
                                            goto label_1400025b5;
                                        }
                                    }
                                    if (((((((j_1 == 0 || (j_1 != 0 && (*(arg1 + 0x11) & 8) != 0)) && r14_2 != 0) || (((j_1 != 0 && (*(arg1 + 0x11) & 8) == 0) || ((j_1 == 0 || (j_1 != 0 && (*(arg1 + 0x11) & 8) != 0)) && r14_2 == 0)) && s_9 >= s_10)) && *rsi_5 != 0) || (((j_1 != 0 && (*(arg1 + 0x11) & 8) == 0) || ((j_1 == 0 || (j_1 != 0 && (*(arg1 + 0x11) & 8) != 0)) && r14_2 == 0)) && s_9 < s_10)) && j_1 != 0))
                                    {
                                        if ((*(arg1 + 0x11) & 8) != 0)
                                        {
                                            j_1 = sub_140003898(0, 0xfab, *(arg1 + 8));
                                            *(arg1 + 0x11) = (*(arg1 + 0x11) & 0xf7);
                                        }
                                        if (r14_2 != 0)
                                        {
                                            int64_t r8_11 = *(arg1 + 8);
                                            r14_2 = 0;
                                            var_558 = 0;
                                            data_140015040 = 0;
                                            j_1 = sub_140003898(0, 0xfaa, r8_11);
                                        }
                                    }
                                    if (((((j_1 == 0 || (j_1 != 0 && (*(arg1 + 0x11) & 8) != 0)) && r14_2 != 0) || (((j_1 != 0 && (*(arg1 + 0x11) & 8) == 0) || ((j_1 == 0 || (j_1 != 0 && (*(arg1 + 0x11) & 8) != 0)) && r14_2 == 0)) && s_9 >= s_10)) && *rsi_5 == 0))
                                    {
                                        goto label_1400025b5;
                                    }
                                }
                            }
                            else
                            {
                                if (rsi_5[2] != 0)
                                {
                                    if (var_548_1 == 0)
                                    {
                                        var_548_1 = rsi_5;
                                    }
                                    else
                                    {
                                        j_1 = sub_140003898(0, 0xfa4, *(arg1 + 8));
                                    }
                                }
                                if (s_7 > s_10)
                                {
                                    s_10 = s_7;
                                }
                                s_7 = s_10;
                            }
                            i = i_1;
                            if (((rsi_5[4] & 0x20) != 0 && *i == 0))
                            {
                                break;
                            }
                        }
                        else if (s_9 <= rsi_2[5])
                        {
                            s_9 = rsi_2[5];
                        }
                        i = *i;
                        s_10 = nullptr;
                        i_1 = i;
                    } while (i != 0);
                    if (((rsi_2[5] == 0 && (rsi_5[4] & 0x20) != 0) && *i == 0))
                    {
                        *(arg1 + 0x11) = (*(arg1 + 0x11) & 0xfe);
                        *(arg1 + 0x11) = (*(arg1 + 0x11) | 2);
                        j_1 = *(arg1 + 0x11);
                        if (r14_2 <= 0)
                        {
                            j_1 = (j_1 & 0xfb);
                        }
                        else
                        {
                            j_1 = (j_1 | 4);
                        }
                        *(arg1 + 0x11) = j_1;
                        if (r12_1 > s_9)
                        {
                            s_9 = r12_1;
                        }
                        *(arg1 + 0x18) = s_9;
                        *var_4f8 = s_9;
                        goto label_140002af2;
                    }
                    r15 = var_4f8;
                }
                struct FILETIME rbx_2;
                rbx_2.dwLowDateTime = *r15;
                rbx_2.dwHighDateTime = *(r15 + 4);
                data_140026458 = 0;
                data_140026460 = 0;
                if (rbx_2 == 0)
                {
                    if (*(arg1 + 0x18) != 0)
                    {
                        rbx_2.dwLowDateTime = *(arg1 + 0x18);
                        rbx_2.dwHighDateTime = *(arg1 + 0x1c);
                    }
                    else
                    {
                        void* rax_35;
                        rax_35 = sub_140005ca8(*(arg1 + 8), &var_4a8, &var_4f0);
                        if (rax_35 != 0)
                        {
                            struct FILETIME rax_36;
                            if ((var_4a8 & 0x10) != 0)
                            {
                                rbx_2.dwLowDateTime = s_2;
                                rbx_2.dwHighDateTime = *s_2[4];
                                if (rbx_2.dwLowDateTime == 0)
                                {
                                    rax_36.dwLowDateTime = rbx_2.dwLowDateTime;
                                    rax_36.dwHighDateTime = rbx_2.dwHighDateTime;
                                }
                            }
                            if (((var_4a8 & 0x10) == 0 || (((var_4a8 & 0x10) != 0 && rbx_2.dwLowDateTime == 0) && (rax_36 >> 0x20) == 0)))
                            {
                                rbx_2.dwLowDateTime = s_3;
                                rbx_2.dwHighDateTime = *s_3[4];
                            }
                        }
                    }
                }
                if ((*(arg1 + 0x10) & 1) != 0)
                {
                    struct FILETIME r8_14;
                    r8_14.dwLowDateTime = rbx_2.dwLowDateTime;
                    r8_14.dwHighDateTime = rbx_2.dwHighDateTime;
                    arg3 = sub_14000c33c((data_1400157e8 * 2), *(arg1 + 8), r8_14);
                }
                struct FILETIME r9_1;
                r9_1.dwLowDateTime = rbx_2.dwLowDateTime;
                r9_1.dwHighDateTime = rbx_2.dwHighDateTime;
                void var_258;
                void** rax_38 = sub_14000da54(arg1, &var_258, arg3, r9_1, &k_7, &k_6, &var_558, &s_7, &var_530);
                int64_t* r10_1 = var_548_1;
                void** r11_1;
                if ((rax_38 == 0 || (rax_38 != 0 && r10_1 != 0)))
                {
                    r11_1 = var_4e8_1;
                }
                if ((rax_38 != 0 && r10_1 == 0))
                {
                    r11_1 = rax_38[3];
                    data_140026460 = &var_258;
                    var_4e8_1 = r11_1;
                }
                bool cond:2_1 = data_140025c3b == 0;
                int32_t* rcx_25 = *(arg1 + 8);
                void** k_9 = k_7;
                int32_t* k_8 = k_6;
                r14_2 = var_558;
                data_140026470 = rcx_25;
                data_140026478 = rcx_25;
                data_140026468 = k_9;
                data_140026450 = k_8;
                void* s_6;
                if ((((!cond:2_1) && (*(arg1 + 0x11) & 8) == 0) || ((cond:2_1 || ((!cond:2_1) && (*(arg1 + 0x11) & 8) != 0)) && r14_2 == 0)))
                {
                    s_6 = s_7;
                    if (rbx_2 < s_6)
                    {
                    label_1400028d0:
                        r15 = data_140036cec;
                        data_140036cec = 1;
                        if (r10_1 == 0)
                        {
                            if (r11_1 == 0)
                            {
                                if ((data_1400157ec & 0x10) == 0)
                                {
                                    if (arg4 != 0)
                                    {
                                        goto label_1400029cb;
                                    }
                                    if (rbx_2 != 0)
                                    {
                                        goto label_1400029cb;
                                    }
                                    if (data_140025c3b == rbx_2.dwLowDateTime)
                                    {
                                        sub_140003898(0, 0x431, rcx_25);
                                    }
                                    else
                                    {
                                        r14_2 = (rbx_2 + 1);
                                    }
                                }
                                else if (var_538_1 != 0)
                                {
                                    r14_2 = (r14_2 + sub_140003c94(rcx_25, var_538_1[2], var_538_1[3], var_538_1[4], var_530));
                                }
                                if ((((((data_1400157ec & 0x10) == 0 && arg4 == 0) && rbx_2 == 0) && data_140025c3b != rbx_2.dwLowDateTime) || (data_1400157ec & 0x10) != 0))
                                {
                                    data_140036cec = r15;
                                }
                            }
                            else
                            {
                                if ((rax_38[5] == 0 || (rax_38[5] != 0 && (data_1400157ec & 0x40) != 0)))
                                {
                                    r14_2 = (r14_2 + sub_140003c94(rcx_25, r11_1, rax_38[4], *(arg1 + 0x10), var_530));
                                }
                                if ((rax_38[5] != 0 && (data_1400157ec & 0x40) == 0))
                                {
                                    sub_140002fe0(lpSystemTimeAsFileTime, rax_38, arg1);
                                }
                                data_140036cec = r15;
                            }
                        }
                        else
                        {
                            int16_t* rax_39 = var_530;
                            if (rax_39 == 0)
                            {
                                if (k_8 == 0)
                                {
                                    rax_39 = nullptr;
                                }
                                else
                                {
                                    rax_39 = *(k_8 + 8);
                                }
                            }
                            r14_2 = (r14_2 + sub_140003c94(rcx_25, r10_1[2], r10_1[3], r10_1[4], rax_39));
                        }
                        if (((((((r10_1 == 0 && r11_1 == 0) && (data_1400157ec & 0x10) == 0) && arg4 == 0) && rbx_2 == 0) && data_140025c3b == rbx_2.dwLowDateTime) || r10_1 != 0))
                        {
                            r10_1 = var_548_1;
                        label_1400029cb:
                            data_140036cec = r15;
                        }
                        if ((((r10_1 == 0 && r11_1 == 0) && (((((data_1400157ec & 0x10) == 0 && arg4 == 0) && rbx_2 == 0) && data_140025c3b != rbx_2.dwLowDateTime) || (data_1400157ec & 0x10) != 0)) || (((((((((r10_1 == 0 && r11_1 == 0) && (data_1400157ec & 0x10) == 0) && arg4 == 0) && rbx_2 == 0) && data_140025c3b == rbx_2.dwLowDateTime) || r10_1 != 0) && r10_1 == 0) || (r10_1 == 0 && r11_1 != 0)) && var_4e8_1 == 0)))
                        {
                            if (data_140026450 == 0)
                            {
                                goto label_1400029ee;
                            }
                            goto label_140002a00;
                        }
                        if ((((((((((r10_1 == 0 && r11_1 == 0) && (data_1400157ec & 0x10) == 0) && arg4 == 0) && rbx_2 == 0) && data_140025c3b == rbx_2.dwLowDateTime) || r10_1 != 0) && r10_1 == 0) || (r10_1 == 0 && r11_1 != 0)) && var_4e8_1 != 0))
                        {
                            goto label_1400029ee;
                        }
                        if ((((((((r10_1 == 0 && r11_1 == 0) && (data_1400157ec & 0x10) == 0) && arg4 == 0) && rbx_2 == 0) && data_140025c3b == rbx_2.dwLowDateTime) || r10_1 != 0) && r10_1 != 0))
                        {
                        label_1400029ee:
                            GetSystemTimeAsFileTime(&lpSystemTimeAsFileTime);
                            s_6 = (lpSystemTimeAsFileTime + 2);
                        label_140002a00:
                            r15 = var_4f8;
                            if ((var_4c8_1 != 0 && var_548_1 != 0))
                            {
                                *var_4c8_1 = s_6;
                            }
                        }
                    }
                    else
                    {
                        if ((data_140025c3a != 0 && rbx_2 == s_6))
                        {
                            goto label_1400028d0;
                        }
                        if ((rbx_2 == 0 && s_6 == 0))
                        {
                            goto label_1400028d0;
                        }
                        if ((*(arg1 + 0x10) & 0x10) != 0)
                        {
                            goto label_1400028d0;
                        }
                    }
                }
                if (((((cond:2_1 || ((!cond:2_1) && (*(arg1 + 0x11) & 8) != 0)) && r14_2 != 0) || ((((!cond:2_1) && (*(arg1 + 0x11) & 8) == 0) || ((cond:2_1 || ((!cond:2_1) && (*(arg1 + 0x11) & 8) != 0)) && r14_2 == 0)) && rbx_2 >= s_6)) && (data_1400157ec & 8) != 0))
                {
                label_140002a3b:
                    s_6 = s;
                }
                if ((((((cond:2_1 || ((!cond:2_1) && (*(arg1 + 0x11) & 8) != 0)) && r14_2 != 0) || ((((!cond:2_1) && (*(arg1 + 0x11) & 8) == 0) || ((cond:2_1 || ((!cond:2_1) && (*(arg1 + 0x11) & 8) != 0)) && r14_2 == 0)) && rbx_2 >= s_6)) && (data_1400157ec & 8) != 0) || ((((!cond:2_1) && (*(arg1 + 0x11) & 8) == 0) || ((cond:2_1 || ((!cond:2_1) && (*(arg1 + 0x11) & 8) != 0)) && r14_2 == 0)) && rbx_2 < s_6)))
                {
                    if ((data_140025c3b != 0 && r14_2 != 0))
                    {
                        bool cond:4_1 = (*(arg1 + 0x11) & 8) == 0;
                        data_140015040 = 0;
                        int32_t rdx_17;
                        if ((!cond:4_1))
                        {
                            rdx_17 = 0xfab;
                        }
                        if ((cond:4_1 && data_1400157e8 == 1))
                        {
                            rdx_17 = 0xfaa;
                        }
                        if (((!cond:4_1) || (cond:4_1 && data_1400157e8 == 1)))
                        {
                            sub_140003898(0, rdx_17, *(arg1 + 8));
                        }
                    }
                    if ((data_1400157ec & 8) == 0)
                    {
                    label_140002aae:
                        *(arg1 + 0x11) = (*(arg1 + 0x11) & 0xfe);
                        rax_38 = *(arg1 + 0x11);
                        if (*(arg1 + 0x28) == 0)
                        {
                            rax_38 = (rax_38 | 2);
                            *(arg1 + 0x11) = rax_38;
                            if (r14_2 <= 0)
                            {
                                rax_38 = (rax_38 & 0xfb);
                            }
                            else
                            {
                                rax_38 = (rax_38 | 4);
                            }
                            *(arg1 + 0x11) = rax_38;
                        }
                        if (s_6 > rbx_2)
                        {
                            rbx_2.dwLowDateTime = s_6;
                            rbx_2.dwHighDateTime = *s_6[4];
                        }
                        *(arg1 + 0x18) = rbx_2.dwLowDateTime;
                        *(arg1 + 0x1c) = rbx_2.dwHighDateTime;
                        *r15 = rbx_2.dwLowDateTime;
                        *(r15 + 4) = rbx_2.dwHighDateTime;
                        sub_140002f98(k_8);
                        if (k_8 != k_9)
                        {
                            sub_140002f98(k_9);
                        }
                    label_140002af2:
                        rax_4 = r14_2;
                    }
                    else
                    {
                        if (data_1400157e8 != 1)
                        {
                            goto label_140002aae;
                        }
                        sub_140002f98(k_8);
                        if (k_8 != k_9)
                        {
                            sub_140002f98(k_9);
                        }
                        int32_t rax_45 = data_140025c3c;
                        int32_t rax_46 = (-rax_45);
                        rax_4 = (rax_46 - rax_46);
                    }
                }
                if (((((cond:2_1 || ((!cond:2_1) && (*(arg1 + 0x11) & 8) != 0)) && r14_2 != 0) || ((((!cond:2_1) && (*(arg1 + 0x11) & 8) == 0) || ((cond:2_1 || ((!cond:2_1) && (*(arg1 + 0x11) & 8) != 0)) && r14_2 == 0)) && rbx_2 >= s_6)) && (data_1400157ec & 8) == 0))
                {
                    if ((data_1400157e8 == 1 && (*(arg1 + 0x11) & 8) == 0))
                    {
                        sub_1400039c0(2, rcx_25);
                    }
                    goto label_140002a3b;
                }
            }
            else
            {
                if ((rbx & 1) != 0)
                {
                    struct FILETIME r8_1;
                    r8_1.dwLowDateTime = *(arg1 + 0x18);
                    r8_1.dwHighDateTime = *(arg1 + 0x1c);
                    sub_14000c33c((data_1400157e8 * 2), *(arg1 + 8), r8_1);
                }
                *r15 = *(arg1 + 0x18);
                if ((((data_1400157ec & 8) == 0 && (data_1400157e8 == 1 && (*(arg1 + 0x11) & 4) == 0)) && sub_140005ca8(*(arg1 + 8), &var_4a8, &var_4f0) != 0))
                {
                    sub_1400039c0(2, *(arg1 + 8));
                }
                rax_4 = ((*(arg1 + 0x11) >> 2) & 1);
            }
        }
    }
    __security_check_cookie((rax_1 ^ &var_5a8));
    return rax_4;
}

int64_t** sub_140002b20(int64_t* arg1, int64_t arg2)
{
    void var_2e8;
    int64_t rax_1 = (__security_cookie ^ &var_2e8);
    void** i = *arg1;
    int64_t** k = nullptr;
    int64_t var_298 = arg2;
    int64_t* k_1 = nullptr;
    int64_t* var_2c0 = nullptr;
    int64_t* var_2a8 = arg1[1];
    void** i_1 = i;
    if (i != 0)
    {
        do
        {
            int16_t* r14_1 = i[1];
            int32_t* var_2b8_1 = r14_1;
            int16_t* rax_3 = r14_1;
            int16_t j = *r14_1;
            if (j != 0)
            {
                while (j != 0x24)
                {
                    if (j == 0x5e)
                    {
                        rax_3 = &rax_3[1];
                    }
                    rax_3 = &rax_3[1];
                    j = *rax_3;
                    if (j == 0)
                    {
                        break;
                    }
                }
                if (*rax_3 != 0)
                {
                    data_140026458 = arg2;
                    arg2 = 1;
                    int32_t* rax_4 = sub_14000e740(r14_1, arg2, &var_2a8);
                    r14_1 = rax_4;
                    var_2b8_1 = rax_4;
                }
            }
            int32_t* _Str_4;
            int64_t r8_2;
            _Str_4 = sub_14000dcc4(r14_1);
            int32_t* _Str_3 = _Str_4;
            while (true)
            {
                int16_t rax_5 = *_Str_3;
                if ((rax_5 != 0 && (rax_5 == 0x20 || rax_5 == 9)))
                {
                    _Str_3 = (_Str_3 + 2);
                    continue;
                }
                int16_t j_2 = *_Str_3;
                if (j_2 == 0)
                {
                    break;
                }
                int32_t* _Str_2 = _Str_3;
                if (j_2 == 0x7b)
                {
                    while (true)
                    {
                        _Str_3 = (_Str_3 + 2);
                        if (*_Str_3 == 0x22)
                        {
                            _Str_3 = (_Str_3 + 2);
                            int16_t j_1;
                            do
                            {
                                j_1 = *_Str_3;
                                if (j_1 == 0)
                                {
                                    break;
                                }
                                _Str_3 = (_Str_3 + 2);
                            } while (j_1 != 0x22);
                        }
                        if (*_Str_3 == 0x7d)
                        {
                            break;
                        }
                        if (*_Str_3 == 0)
                        {
                            break;
                        }
                        if ((!(*_Str_3 != 0x7d && *_Str_3 != 0)))
                        {
                            /* nop */
                        }
                    }
                    if (*_Str_3 == 0)
                    {
                        r8_2 = sub_140003898(0, 0x423, r8_2);
                    }
                    _Str_3 = (_Str_3 + 2);
                    j_2 = *_Str_3;
                }
                if ((((j_2 != 0x22 && j_2 != 0x7b) || j_2 == 0x7b) && j_2 != 0))
                {
                    while (*_Str_3 != 0x20)
                    {
                        if (*_Str_3 == 9)
                        {
                            break;
                        }
                        _Str_3 = (_Str_3 + 2);
                        if (*_Str_3 == 0)
                        {
                            break;
                        }
                    }
                }
                if (((j_2 != 0x22 && j_2 == 0x7b) && j_2 == 0x22))
                {
                    while (j_2 != 0)
                    {
                        _Str_3 = (_Str_3 + 2);
                        j_2 = *_Str_3;
                        if (j_2 == 0x22)
                        {
                            break;
                        }
                    }
                    if (j_2 == 0)
                    {
                        goto label_140002c42;
                    }
                }
                if (j_2 == 0x22)
                {
                    while (j_2 != 0)
                    {
                        _Str_3 = (_Str_3 + 2);
                        j_2 = *_Str_3;
                        if (j_2 == 0x22)
                        {
                            break;
                        }
                    }
                    if (j_2 == 0)
                    {
                        goto label_140002c42;
                    }
                }
                if ((((j_2 != 0x22 && j_2 == 0x7b) && j_2 == 0x22) || j_2 == 0x22))
                {
                    if (*_Str_3 != 0)
                    {
                        goto label_140002c47;
                    }
                label_140002c42:
                    sub_140003898(0, 0x40e, r8_2);
                label_140002c47:
                    _Str_3 = (_Str_3 + 2);
                }
                if ((((((j_2 != 0x22 && j_2 != 0x7b) || j_2 == 0x7b) && j_2 == 0) || (((j_2 != 0x22 && j_2 != 0x7b) || j_2 == 0x7b) && j_2 != 0)) || ((((j_2 != 0x22 && j_2 == 0x7b) && j_2 == 0x22) || j_2 == 0x22) && *_Str_3 == 0)))
                {
                    if (*_Str_3 == 0)
                    {
                        goto label_140002cdb;
                    }
                    *_Str_3 = 0;
                    _Str_3 = (_Str_3 + 2);
                label_140002cdb:
                    int32_t* _Str = _Str_2;
                    if (*_Str_2 != 0x7b)
                    {
                        _Str_2 = nullptr;
                    }
                    else
                    {
                        while (*_Str != 0x7d)
                        {
                            if (*_Str == 0x5e)
                            {
                                _Str = (_Str + 2);
                            }
                            _Str = (_Str + 2);
                            if (*_Str == 0)
                            {
                                break;
                            }
                        }
                        if (*_Str != 0)
                        {
                            *_Str = 0;
                            _Str = (_Str + 2);
                            _Str_2 = (_Str_2 + 2);
                        }
                    }
                    int64_t var_284_1 = 0;
                    char r13_1 = 0;
                    int64_t var_274_1 = 0;
                    int32_t* j_4 = sub_14000dcc4(_Str);
                    wchar16* rax_7 = wcspbrk(_Str, &data_140011614);
                    char var_288;
                    void var_25c;
                    if ((rax_7 != 0 || (rax_7 == 0 && _Str_2 != 0)))
                    {
                        int32_t* _Str_1 = gz_read(_Str_2, _Str, &var_288, &var_2c0);
                        if (_Str_1 != 0)
                        {
                            r13_1 = 1;
                            free(j_4);
                            _Str = _Str_1;
                            j_4 = sub_14000f570(_Str_1, &var_25c);
                        }
                    }
                    int32_t* j_3;
                    do
                    {
                        int64_t* k_5 = sub_140009244(0x18);
                        wchar16* rax_10 = wcschr(j_4, 0x20);
                        wchar16* rax_11;
                        if (rax_10 != 0)
                        {
                            rax_11 = wcschr(j_4, 0x22);
                            if (rax_11 == 0)
                            {
                                int64_t r15_1 = -1;
                                do
                                {
                                    r15_1 = (r15_1 + 1);
                                } while (*(j_4 + (r15_1 << 1)) != rax_11);
                                wchar16* _Destination = sub_140009214();
                                k_5[1] = _Destination;
                                wcscpy_s(_Destination, (r15_1 + 3), &data_140011624);
                                wcscat_s(k_5[1], (r15_1 + 3), j_4);
                                wcscat_s(k_5[1], (r15_1 + 3), &data_140011624);
                            }
                        }
                        if ((rax_10 == 0 || (rax_10 != 0 && rax_11 != 0)))
                        {
                            k_5[1] = sub_14000dcc4(j_4);
                        }
                        void* rax_14;
                        if (data_140025c39 != 0)
                        {
                            rax_14 = sub_140005ca8(j_4, &var_288, &var_2c0);
                            if (rax_14 == 0)
                            {
                                k_5[2] = 0;
                            }
                        }
                        if ((data_140025c39 == 0 || (data_140025c39 != 0 && rax_14 != 0)))
                        {
                            int64_t rax_15;
                            if ((var_288 & 0x10) != 0)
                            {
                                rax_15 = var_284_1;
                                if (rax_15 != 0)
                                {
                                    goto label_140002e6c;
                                }
                                if ((rax_15 >> 0x20) != 0)
                                {
                                    goto label_140002e6c;
                                }
                            }
                            rax_15 = var_274_1;
                        label_140002e6c:
                            k_5[2] = rax_15;
                        }
                        if (data_140025c39 == 0)
                        {
                            int64_t** k_3 = &k_1;
                            for (; k != 0; k = *k)
                            {
                                k_3 = k;
                            }
                            *k_3 = k_5;
                            k = k_1;
                        }
                        else
                        {
                            int64_t** k_4 = k;
                            int64_t** k_2 = k;
                            if (k != 0)
                            {
                                while (k_5[2] <= k_2[2])
                                {
                                    k_4 = k_2;
                                    k_2 = *k_2;
                                    if (k_2 == 0)
                                    {
                                        break;
                                    }
                                }
                            }
                            if ((k == 0 || (k != 0 && k_4 == k_2)))
                            {
                                k = k_5;
                                k_1 = k_5;
                            }
                            if ((k != 0 && k_4 != k_2))
                            {
                                *k_4 = k_5;
                                *k_5 = k_2;
                            }
                        }
                        r8_2 = free(j_4);
                        if (r13_1 == 0)
                        {
                            break;
                        }
                        wchar16* rax_16;
                        rax_16 = wcspbrk(_Str, &data_140011614);
                        if (rax_16 == 0)
                        {
                            break;
                        }
                        char (* rax_17)[0x104];
                        rax_17 = sub_140005e30(&var_288, var_2c0);
                        if (rax_17 == 0)
                        {
                            break;
                        }
                        j_3 = sub_14000f570(_Str, &var_25c);
                        j_4 = j_3;
                    } while (j_3 != 0);
                }
            }
            if (var_2b8_1 != i_1[1])
            {
                free(var_2b8_1);
            }
            free(_Str_4);
            i = *i_1;
            arg2 = var_298;
            i_1 = i;
        } while (i != 0);
    }
    __security_check_cookie((rax_1 ^ &var_2e8));
    return k;
}

void sub_140002f98(int64_t* arg1)
{
    if (arg1 != 0)
    {
        int64_t* i = arg1;
        int64_t* i_1 = arg1;
        do
        {
            i = *i;
            free(i_1[1]);
            *i_1 = data_14003d0e0;
            data_14003d0e0 = i_1;
            i_1 = i;
        } while (i != 0);
    }
}

int32_t* sub_140002fe0(int64_t* arg1, int64_t arg2, void* arg3)
{
    void** rbx = *arg1;
    char** rsi = nullptr;
    if (rbx != 0)
    {
        while ((!(rbx[1] == arg2 && rbx[2] == *(arg3 + 0x10))))
        {
            rsi = rbx;
            rbx = *rbx;
            if (rbx == 0)
            {
                break;
            }
        }
    }
    if ((rbx == 0 || rbx == 0))
    {
        char* rax_2 = sub_140009244(0x28);
        rbx = rax_2;
        *(rax_2 + 8) = arg2;
        rax_2[0x10] = *(arg3 + 0x10);
        if (rsi != 0)
        {
            *rsi = rax_2;
        }
        else
        {
            void*** rax_3 = *arg1;
            if (rax_3 == 0)
            {
                *arg1 = rbx;
            }
            else
            {
                *rax_3 = rbx;
            }
        }
    }
    int64_t* rax_4 = sub_14000dc58();
    void* i_2 = &rbx[3];
    rax_4[1] = sub_14000dcc4(*(arg3 + 8));
    for (void* i = *i_2; i != 0; i = *i)
    {
        i_2 = i;
    }
    *i_2 = rax_4;
    int64_t* rax_6 = sub_14000dc58();
    int32_t* rax_7 = sub_14000dcc4(data_140026460);
    void* i_3 = &rbx[4];
    rax_6[1] = rax_7;
    for (void* i_1 = *i_3; i_1 != 0; i_1 = *i_1)
    {
        i_3 = i_1;
    }
    *i_3 = rax_6;
    *(arg3 + 0x28) = arg1;
    return rax_7;
}

uint64_t ?replace_all_in_string@detail@policies@math@boost@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBD1@Z(void** arg1)
{
    uint64_t r14;
    uint64_t var_10 = r14;
    void** i = arg1;
    int32_t rbp = 0;
    if (arg1 != 0)
    {
        do
        {
            void** j = i[4];
            int64_t rsi_1 = 0;
            for (; j != 0; j = *j)
            {
                int16_t* string = j[1];
                int64_t rax_1 = -1;
                do
                {
                    rax_1 = (rax_1 + 1);
                } while (string[rax_1] != 0);
                rsi_1 = ((rsi_1 + 1) + rax_1);
                if ((*string != 0x22 && wcschr(string, 0x20) != 0))
                {
                    rsi_1 = (rsi_1 + 2);
                }
            }
            int16_t* _Destination = sub_140009214();
            *_Destination = 0;
            for (void** j_1 = i[4]; j_1 != 0; j_1 = *j_1)
            {
                int16_t* string_1 = j_1[1];
                wchar16* rax_5;
                if (*string_1 != 0x22)
                {
                    rax_5 = wcschr(string_1, 0x20);
                    if (rax_5 != 0)
                    {
                        r14 = 1;
                        wcscat_s(_Destination, (rsi_1 + 1), &data_140011624);
                    }
                }
                if ((*string_1 == 0x22 || (*string_1 != 0x22 && rax_5 == 0)))
                {
                    r14 = 0;
                }
                wcscat_s(_Destination, (rsi_1 + 1), j_1[1]);
                wchar16* _Source = &data_140011630;
                if (r14 != 0)
                {
                    _Source = &data_140011628;
                }
                wcscat_s(_Destination, (rsi_1 + 1), _Source);
            }
            void* rdx_5 = i[1];
            char r9_1 = i[2];
            void** rcx_4 = i[3];
            data_140026460 = _Destination;
            int32_t rax_6 = sub_140003d14(rcx_4, *(rdx_5 + 0x18), *(rdx_5 + 0x20), r9_1, nullptr);
            if (rax_6 == 0)
            {
                for (void** j_2 = i[3]; j_2 != 0; j_2 = *j_2)
                {
                    void** rax_7 = Concurrency::details::SchedulerProxy::Cleanup(j_2[1]);
                    char rcx_6 = (*(rax_7 + 0x11) & 0xfb);
                    rax_7[5] = 0;
                    *(rax_7 + 0x11) = (rcx_6 | 2);
                }
            }
            free(_Destination);
            i = *i;
            rbp = (rbp + rax_6);
        } while (i != 0);
    }
    return rbp;
}

void sub_140003278(int64_t* arg1)
{
    void** i = *arg1;
    while (i != 0)
    {
        int64_t* rdx_1 = i[3];
        void** i_1 = i;
        *rdx_1 = data_14003d0e0;
        int64_t** rax_2 = i[4];
        data_14003d0e0 = rax_2;
        *rax_2 = rdx_1;
        i = *i;
        free(i_1);
    }
    *arg1 = (*arg1 & i);
}

wchar16* sub_1400032c8(int64_t* arg1, int64_t* arg2)
{
    wchar16* rax = *arg1;
    if (rax[(*arg2 - 1)] != 0xa)
    {
        do
        {
            rax = fgetws(&data_140025c50, 0x400, data_140026480);
            if (rax == 0)
            {
                break;
            }
            int64_t rax_1 = -1;
            do
            {
                rax_1 = (rax_1 + 1);
            } while (&data_140025c50[rax_1] != 0);
            if ((*((rax_1 << 1) + &*(data_140025c48 + 4)) == 0x5c && *((rax_1 << 1) + &*(data_140025c48 + 6)) == 0xa))
            {
                *((rax_1 << 1) + &*(data_140025c48 + 4)) = 0x20;
            }
            int64_t rbp_1 = *arg2;
            int64_t rax_2 = -1;
            do
            {
                rax_2 = (rax_2 + 1);
            } while (&data_140025c50[rax_2] != 0);
            *arg2 = (*arg2 + rax_2);
            int64_t rax_3;
            int64_t r8_2;
            rax_3 = sub_140009274(*arg1, ((*arg2 << 1) + 2));
            if (rax_3 == 0)
            {
                sub_140003898(data_140025c20, 0x419, r8_2);
            }
            int64_t rdx_3 = (*arg2 - rbp_1);
            *arg1 = rax_3;
            wcscpy_s((rax_3 + (rbp_1 << 1)), (rdx_3 + 1), &data_140025c50);
            rax = *arg1;
        } while (rax[(*arg2 - 1)] != 0xa);
    }
    return rax;
}

int32_t* sub_1400033d0(int32_t* arg1, int32_t arg2, int64_t* arg3)
{
    uint64_t rsi = arg2;
    int64_t rcx = *arg3;
    int64_t* rbx = arg3;
    if (rcx == 0)
    {
        *rbx = sub_140009214();
    }
    else if ((rsi & 7) == 0)
    {
        int64_t rdi_1 = 0;
        int64_t rax_2;
        if ((rsi + 8) <= 0x1ffffffffffffffe)
        {
            rax_2 = realloc(rcx, ((rsi + 8) << 3));
            rdi_1 = rax_2;
        }
        if (((rsi + 8) > 0x1ffffffffffffffe || ((rsi + 8) <= 0x1ffffffffffffffe && rax_2 == 0)))
        {
            sub_140003898(data_140025c24, 0x41b, arg3);
        }
        *rbx = rdi_1;
    }
    int32_t* rax_3 = sub_14000dcc4(arg1);
    *(*rbx + (rsi << 3)) = rax_3;
    return rax_3;
}

wchar16* sub_140003468(wchar16* arg1, int32_t* arg2, int64_t* arg3)
{
    wchar16* rax = wcschr(arg1, 0x5c);
    if ((rax != 0 && ((rax[-1] == 0x20 || rax[-1] == 9) && rax[1] == 0xa)))
    {
        *rax = 0;
    }
    _Context = nullptr;
    wchar16* _String = arg1;
    wchar16* rax_1;
    while (true)
    {
        rax_1 = wcstok_s(_String, &data_140011d20, &_Context);
        if (rax_1 == 0)
        {
            break;
        }
        if (*rax_1 == 0x40)
        {
            rax_1 = sub_140003898(0, 0xfa1, &rax_1[1]);
            break;
        }
        sub_1400033d0(rax_1, *arg2, arg3);
        *arg2 = (*arg2 + 1);
        _String = nullptr;
    }
    return rax_1;
}

wchar16* sub_140003510(wchar16* arg1, int32_t* arg2, int64_t* arg3)
{
    arg_20 = 0;
    wchar16* rax = wcschr(arg1, 0x22);
    wchar16* rax_1;
    if (rax == 0)
    {
        rax_1 = sub_140003468(arg1, arg2, arg3);
    }
    else
    {
        int64_t r8_1 = 1;
        void* var_28;
        void* rbx_1;
        if ((rax == arg1 || (rax != arg1 && rax[-1] != 0x3d)))
        {
            *rax = 0;
            rbx_1 = &rax[1];
            var_28 = rbx_1;
            r8_1 = sub_140003468(arg1, arg2, arg3);
        }
        if ((rax != arg1 && rax[-1] == 0x3d))
        {
            *rax = 0x20;
            rbx_1 = &rax[-1];
            if (&rax[-1] > arg1)
            {
                do
                {
                    int16_t rax_3 = *rbx_1;
                    if (rax_3 == 0x20)
                    {
                        break;
                    }
                    if ((rax_3 - 9) <= 1)
                    {
                        break;
                    }
                    rbx_1 = (rbx_1 - 2);
                } while (rbx_1 > arg1);
            }
            if (rbx_1 != arg1)
            {
                *rbx_1 = 0;
                rbx_1 = (rbx_1 + 2);
                r8_1 = sub_140003468(arg1, arg2, arg3);
            }
            var_28 = rbx_1;
        }
        int64_t rsi_1 = -1;
        do
        {
            rsi_1 = (rsi_1 + 1);
        } while (*(rbx_1 + (rsi_1 << 1)) != 0);
        void* rdi_1 = rbx_1;
        if (*rbx_1 != 0)
        {
            do
            {
                if (*rdi_1 == 0x22)
                {
                    if (*(rdi_1 + 2) != 0x22)
                    {
                        *rdi_1 = 0;
                        rdi_1 = (rdi_1 + 2);
                        sub_1400033d0(rbx_1, *arg2, arg3);
                        *arg2 = (*arg2 + 1);
                        r8_1 = sub_140003510((rdi_1 + 2), arg2, arg3);
                        break;
                    }
                    void* rcx_3 = rdi_1;
                    *rdi_1 = 0x22;
                    int16_t i;
                    do
                    {
                        rcx_3 = (rcx_3 + 2);
                        i = *(rcx_3 + 2);
                        *rcx_3 = i;
                    } while (i != 0);
                }
                else if ((*rdi_1 == 0x5c && ((*(rdi_1 - 2) == 0x20 || *(rdi_1 - 2) == 9) && *(rdi_1 + 2) == 0xa)))
                {
                    *rdi_1 = 0;
                    int64_t var_20 = (rsi_1 - 2);
                    if (arg_20 == 0)
                    {
                        arg_20 = 1;
                        var_28 = sub_14000dcc4(rbx_1);
                    }
                    r8_1 = sub_1400032c8(&var_28, &var_20);
                    rbx_1 = var_28;
                    rdi_1 = (rbx_1 + ((rsi_1 - 2) << 1));
                    rsi_1 = var_20;
                }
                rdi_1 = (rdi_1 + 2);
            } while (*rdi_1 != 0);
        }
        rax_1 = (rbx_1 + (rsi_1 << 1));
        if (rdi_1 == rax_1)
        {
            rax_1 = sub_140003898(0, 0x3ee, r8_1);
        }
        if (arg_20 != 0)
        {
            rax_1 = free(rbx_1);
        }
    }
    return rax_1;
}

uint64_t sub_1400036ec(wchar16* arg1)
{
    int32_t i = 0;
    i_1 = 0;
    FILE* _Stream = _wfsopen(arg1, u"rt,ccs=unicode", 0x20);
    data_140026480 = _Stream;
    if (_Stream == 0)
    {
        sub_140003898(0, 0x41c, arg1);
        breakpoint();
    }
    int64_t var_48 = 0;
    int64_t rdi = 0;
    if (fgetws(&data_140025c50, 0x400, _Stream) != 0)
    {
        while (true)
        {
            int64_t rax_1 = -1;
            do
            {
                rax_1 = (rax_1 + 1);
            } while (&data_140025c50[rax_1] != 0);
            arg_18 = rax_1;
            int32_t* rbx;
            if (((rax_1 != 0x3ff || (rax_1 == 0x3ff && data_14002644c == 0xa)) && (*((rax_1 << 1) + &*(data_140025c48 + 6)) != 0xa || (*((rax_1 << 1) + &*(data_140025c48 + 6)) == 0xa && *((rax_1 << 1) + &*(data_140025c48 + 4)) != 0x5c))))
            {
                rbx = &data_140025c50;
            label_1400037fb:
                sub_140003510(rbx, &i_1, &var_48);
                if (rbx != &data_140025c50)
                {
                    free(rbx);
                }
                if (fgetws(&data_140025c50, 0x400, data_140026480) == 0)
                {
                    i = i_1;
                    rdi = var_48;
                    break;
                }
                continue;
            }
            if (((rax_1 == 0x3ff && data_14002644c != 0xa) || (((rax_1 != 0x3ff || (rax_1 == 0x3ff && data_14002644c == 0xa)) && *((rax_1 << 1) + &*(data_140025c48 + 6)) == 0xa) && *((rax_1 << 1) + &*(data_140025c48 + 4)) == 0x5c)))
            {
                if (*((rax_1 << 1) + &*(data_140025c48 + 6)) == 0xa)
                {
                    if (*((rax_1 << 1) + &*(data_140025c48 + 4)) == 0x5c)
                    {
                        int64_t rdx_1 = ((rax_1 - 1) * 2);
                        if (rdx_1 >= 0x800)
                        {
                            _lockexit();
                            breakpoint();
                        }
                        *(rdx_1 + &data_140025c50) = 0;
                        *((rax_1 << 1) + &*(data_140025c48 + 4)) = 0x20;
                        arg_18 = (rax_1 - 1);
                    }
                    goto label_1400037da;
                }
            label_1400037da:
                arg_20 = sub_14000dcc4(&data_140025c50);
                sub_1400032c8(&arg_20, &arg_18);
                rbx = arg_20;
                goto label_1400037fb;
            }
        }
    }
    if (fclose(data_140026480) == 0xffffffff)
    {
        sub_140003898(0, 0x424, arg1);
    }
    uint64_t i_2 = sub_14000b43c(i, rdi);
    if (i != 0)
    {
        i_2 = i;
        int64_t* rdi_1 = (rdi + (i_2 << 3));
        do
        {
            rdi_1 = &rdi_1[-1];
            i = (i - 1);
            int64_t rcx_6 = *rdi_1;
            if (rcx_6 != 0)
            {
                i_2 = free(rcx_6);
            }
        } while (i != 0);
    }
    return i_2;
}

uint64_t sub_140003898(int32_t arg1, int32_t arg2, int64_t arg3)
{
    arg_18 = arg3;
    int64_t r9;
    arg_20 = r9;
    bool cond:0 = (data_1400157ec & 0x20) == 0;
    int32_t _Except = 2;
    uint64_t rax_1;
    int32_t temp0_1;
    if ((!cond:0))
    {
        int32_t temp1_1;
        temp0_1 = HIGHD((0x10624dd3 * arg2));
        temp1_1 = LOWD((0x10624dd3 * arg2));
        rax_1 = temp1_1;
    }
    if ((cond:0 || ((!cond:0) && (temp0_1 >> 6) != 4)))
    {
        int64_t rdx_2 = sub_140003a8c();
        if (arg1 == 0)
        {
            sub_14000be7c(u"NMAKE : ", rdx_2);
        }
        else
        {
            sub_14000be7c(u"%s(%u) : ", data_140026490);
        }
        int32_t temp2_1;
        int32_t temp3_1;
        temp2_1 = HIGHD((0x10624dd3 * arg2));
        temp3_1 = LOWD((0x10624dd3 * arg2));
        uint64_t rdx_4 = temp2_1;
        uint32_t rdi_2 = (rdx_4 >> 6);
        if (rdi_2 == 1)
        {
            sub_1400039c0(0x14, rdx_4);
            if (arg2 == 0x41b)
            {
                _Except = 4;
            }
        }
        else
        {
            int32_t rcx;
            if (rdi_2 == 2)
            {
                rcx = 0x15;
            }
            if (rdi_2 == 4)
            {
                rcx = 0x16;
            }
            if ((rdi_2 == 2 || rdi_2 == 4))
            {
                sub_1400039c0(rcx, rdx_4);
            }
        }
        sub_14000be7c(u" U%04d: ", arg2);
        sub_14000bf3c(sub_14000bbec(arg2), &arg_18);
        int64_t rdx_7;
        rax_1 = sub_14000bea4();
        if (data_140037093 == 0)
        {
            rax_1 = fflush(__acrt_iob_func(2));
        }
        if (rdi_2 == 1)
        {
            sub_14000be7c(u"Stop.\n", rdx_7);
            sub_14000bb48();
            exit(_Except);
            /* no return */
        }
    }
    return rax_1;
}

void sub_1400039c0(int32_t arg1, int64_t arg2)
{
    arg_10 = arg2;
    int64_t r8;
    arg_18 = r8;
    int64_t r9;
    arg_20 = r9;
    int64_t rbx;
    rbx = 1;
    if ((arg1 == 0xd || (arg1 != 0xd && (data_1400157ec & 0x20) == 0)))
    {
        sub_140003a8c();
        int32_t rcx = arg1;
        if ((rcx - 0x14) <= 5)
        {
            rbx = 0;
        }
        if (rcx == 0x18)
        {
            if (rbx == 0)
            {
                sub_14000bea4();
            }
            else
            {
                sub_14000c008();
            }
            rcx = arg1;
        }
        void* rax_2 = sub_14000bbec(rcx);
        va_list rdx = &arg_10;
        if (rbx == 0)
        {
            sub_14000bf3c(rax_2, rdx);
        }
        else
        {
            sub_14000c044(rax_2, rdx);
        }
        if (((arg1 - 0xa) > 0xd && arg1 != 0x7c))
        {
            if (rbx == 0)
            {
                sub_14000bea4();
            }
            else
            {
                sub_14000c008();
            }
        }
        if (rbx != 0)
        {
            sub_14000bfb0();
        }
        else if (data_140037093 == 0)
        {
            fflush(__acrt_iob_func(2));
        }
    }
}

void sub_140003a8c()
{
    if (data_140026488 == 0)
    {
        data_140026488 = 1;
        sub_1400039c0(0x19, sub_1400039c0(0x18, u"14.00.23506.0"));
        if (data_140037093 == 0)
        {
            fflush(__acrt_iob_func(2));
        }
    }
}

void sub_140003ae0(int32_t* arg1, void** arg2, int16_t* arg3)
{
    int16_t* rbx = arg3;
    void** rsi = arg2;
    int64_t rbp;
    rbp = 1;
    int16_t* rdi = arg3;
    if (*arg3 != 0)
    {
        do
        {
            rdi = &rdi[1];
        } while (*rdi != 0);
    }
    *arg1 = 0;
    if (rbx < rdi)
    {
        while (true)
        {
            void* _Str = &rbx[wcsspn(rbx, &data_14001161c)];
            if (_Str >= rdi)
            {
                break;
            }
            if (rsi != 0)
            {
                *rsi = _Str;
                rsi = &rsi[1];
            }
            if (*_Str != 0x22)
            {
                wchar16* rax = wcspbrk(_Str, u" \t"/");
                rbx = rax;
                if (rax != 0)
                {
                    while (rbx < rdi)
                    {
                        if (*rbx != 0x2f)
                        {
                            break;
                        }
                        if (rbp != 0)
                        {
                            break;
                        }
                        rax = wcspbrk(&rbx[1], u" \t"/");
                        rbx = rax;
                        if (rax == 0)
                        {
                            break;
                        }
                    }
                    if ((rbx != 0 && *rbx == 0x22))
                    {
                        do
                        {
                            rbx = &rbx[1];
                            if (rbx >= rdi)
                            {
                                break;
                            }
                        } while (*rbx != 0x22);
                        rbx = wcspbrk(rbx, &data_14001161c);
                    }
                }
                if (rbp != 0)
                {
                    rbp = 0;
                    if (rbx == 0)
                    {
                    label_140003c50:
                        rbx = rdi;
                    }
                    else if ((*rbx == 0x2f && rsi != 0))
                    {
                        *rbx = 0;
                        rsi[-1] = sub_14000dcc4(rsi[-1]);
                        *rbx = 0x2f;
                        rbx = (rbx - 2);
                    }
                }
            }
            else
            {
                rbx = (_Str + 2);
                if (rbx >= rdi)
                {
                    goto label_140003c60;
                }
                do
                {
                    if (*rbx == 0x5c)
                    {
                        rbx = &rbx[1];
                    }
                    if (*rbx == 0x22)
                    {
                        break;
                    }
                    rbx = &rbx[1];
                } while (rbx < rdi);
                if (rbx >= rdi)
                {
                    goto label_140003c60;
                }
                rbx = wcspbrk(&rbx[1], &data_14001161c);
            }
            if ((((*_Str != 0x22 && rbp != 0) && rbx == 0) || ((((*_Str != 0x22 && rbp == 0) || ((*_Str != 0x22 && rbp != 0) && rbx != 0)) || *_Str == 0x22) && rbx != 0)))
            {
                if (rsi == 0)
                {
                    goto label_140003c60;
                }
                *rbx = 0;
                rbx = &rbx[1];
            label_140003c60:
                *arg1 = (*arg1 + 1);
                if (rbx >= rdi)
                {
                    break;
                }
                continue;
            }
            if (((((*_Str != 0x22 && rbp == 0) || ((*_Str != 0x22 && rbp != 0) && rbx != 0)) || *_Str == 0x22) && rbx == 0))
            {
                goto label_140003c50;
            }
        }
    }
    if (rsi != 0)
    {
        *rsi = nullptr;
    }
}

uint64_t sub_140003c94(int32_t* arg1, void** arg2, int64_t* arg3, char arg4, wchar16* arg5)
{
    int64_t rdi;
    rdi = arg4;
    int64_t* rax = sub_14000dc58();
    rax[1] = sub_14000dcc4(arg1);
    uint64_t rax_2 = sub_140003d14(rax, arg2, arg3, rdi, arg5);
    *rax = data_14003d0e0;
    data_14003d0e0 = rax;
    return rax_2;
}

uint64_t sub_140003d14(void** arg1, void** arg2, int64_t* arg3, char arg4, wchar16* arg5)
{
    arg_18 = arg3;
    i_2 = arg2;
    int64_t r15;
    int64_t var_38 = r15;
    data_140025c3c = (data_140025c3c + 1);
    int32_t* rax;
    rax = data_1400157ec;
    int32_t rbx = 0;
    int32_t var_64 = 0;
    int64_t rsi;
    rsi = arg4;
    int32_t var_60 = 0;
    void** i_1 = arg2;
    void** i = arg1;
    uint64_t rax_3;
    if ((rax & 8) != 0)
    {
    label_140003e2c:
        rax_3 = 0;
    }
    else
    {
        struct FILETIME var_48;
        if ((rax & 0x10) != 0)
        {
            if (arg1 != 0)
            {
                rsi = (rsi >> 2);
                rsi = (rsi & 1);
                do
                {
                    int16_t* rbx_1 = i[1];
                    if (*rbx_1 == 0x22)
                    {
                        void* rdx = &rbx_1[1];
                        *wcsrchr(rbx_1, 0x22) = 0;
                        int16_t j = *rdx;
                        *rbx_1 = j;
                        while (j != 0)
                        {
                            void* rcx_1 = rdx;
                            rdx = (rdx + 2);
                            j = *rdx;
                            *rcx_1 = j;
                        }
                    }
                    sub_1400039c0(5, rbx_1);
                    if (rsi == 0)
                    {
                        GetSystemTimeAsFileTime(&var_48);
                        HANDLE rax_2 = CreateFileW(rbx_1, FILE_WRITE_ATTRIBUTES, FILE_SHARE_NONE, nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
                        if (rax_2 != -1)
                        {
                            SetFileTime(rax_2, nullptr, nullptr, &var_48);
                            CloseHandle(rax_2);
                        }
                    }
                    i = *i;
                } while (i != 0);
            }
            goto label_140003e2c;
        }
        if (arg2 != 0)
        {
            rax = rsi;
            int32_t r14_1 = 0x5e;
            rax = (rax >> 6);
            rax = (rax & 1);
            char var_68_1 = rax;
            do
            {
                r15 = sub_1400077d0(i_1[1], &var_48, &arg_18, rax);
                data_14002648c = 0;
                struct FILETIME rax_5;
                rax_5.dwLowDateTime = var_48.dwLowDateTime;
                rax_5.dwHighDateTime = var_48.dwHighDateTime;
                i = 0;
                int16_t* var_58;
                var_58 = rax_5.dwLowDateTime;
                *var_58[4] = rax_5.dwHighDateTime;
                int16_t* string;
                string = rax_5.dwLowDateTime;
                *string[4] = rax_5.dwHighDateTime;
                struct FILETIME rdx_3;
                rdx_3.dwLowDateTime = rax_5.dwLowDateTime;
                rdx_3.dwHighDateTime = rax_5.dwHighDateTime;
                uint32_t rbx_3 = *rax_5;
                if (rbx_3 != 0)
                {
                    do
                    {
                        if ((*rdx_3 == r14_1 || (*rdx_3 != r14_1 && *rdx_3 == 0x24)))
                        {
                            rdx_3 = (rdx_3 + 2);
                        }
                        rdx_3 = (rdx_3 + 2);
                    } while (*rdx_3 != 0);
                }
                while (true)
                {
                    uint64_t rax_6 = (rbx_3 - 9);
                    if (((rax_6 > 0x37 || (rax_6 <= 0x37 && (!(TEST_BITQ(0x80001001800001, rax_6))))) && rbx_3 != r14_1))
                    {
                        break;
                    }
                    uint32_t rax_7 = rbx_3;
                    if (rax_7 == 0x21)
                    {
                        i = (i | 4);
                    }
                    if ((((rax_7 != 0x21 && rax_7 != 0x2d) && rax_7 != 0x40) && rax_7 == r14_1))
                    {
                        string = &string[1];
                        var_58 = string;
                        if ((*string != 0x20 && *string != 9))
                        {
                            break;
                        }
                    }
                    if ((rax_7 == 0x40 && (data_1400157ee & 4) == 0))
                    {
                        i = (i | 1);
                    }
                    if (rax_7 == 0x2d)
                    {
                        i = (i | 2);
                        var_58 = &string[1];
                        if (iswdigit(string[1]) == 0)
                        {
                            data_14002648c = 0xffffffff;
                        }
                        else
                        {
                            wchar16* _String = var_58;
                            data_14002648c = wcstoul(_String, &var_58, 0xa);
                            if (*_errno() == 0x22)
                            {
                                int32_t rcx_12 = data_140025c20;
                                *var_58 = 0;
                                sub_140003898(rcx_12, 0x436, _String);
                            }
                            void* rax_15 = var_58;
                            int32_t rax_16;
                            while (true)
                            {
                                rax_16 = iswspace(*rax_15);
                                if (rax_16 == 0)
                                {
                                    break;
                                }
                                rax_15 = &var_58[1];
                                var_58 = rax_15;
                            }
                            r14_1 = (rax_16 + 0x5e);
                        }
                        string = (var_58 - 2);
                        var_58 = string;
                    }
                    if (((((rax_7 == 0x21 || (((rax_7 != 0x21 && rax_7 != 0x2d) && rax_7 != 0x40) && rax_7 != r14_1)) || rax_7 == 0x2d) || rax_7 == 0x40) && rbx_3 == r14_1))
                    {
                        break;
                    }
                    string = &string[1];
                    var_58 = string;
                    rbx_3 = *string;
                }
                int32_t var_88;
                char rax_8;
                if ((i & 4) != 0)
                {
                    int32_t var_80;
                    var_80 = &var_64;
                    var_88 = arg5;
                    rax_8 = sub_1400059e0(string, arg_18, rsi, i, var_88, var_80);
                    if (rax_8 == 0)
                    {
                        string = var_58;
                    }
                    else
                    {
                        int16_t* string_1 = var_58;
                        if (wcschr(string_1, 0x24) == 0)
                        {
                            rax = var_58;
                        }
                        else
                        {
                            rax = sub_14000e740(var_58, 0xff, &arg_18);
                            var_58 = rax;
                        }
                        if (string_1 != rax)
                        {
                            free(rax);
                        }
                        rbx = var_64;
                        if (((rsi & 2) == 0 && (data_140025c3b != 0 && (rbx != 0 && rbx > data_14002648c))))
                        {
                            break;
                        }
                    }
                }
                if ((((i & 4) != 0 && rax_8 == 0) || (i & 4) == 0))
                {
                    int16_t* string_2 = string;
                    if (r15 == 0)
                    {
                        wchar16* rax_17 = wcschr(string, 0x24);
                        string = var_58;
                        if (rax_17 != 0)
                        {
                            int32_t* string_3 = sub_14000e740(string, 0xff, &arg_18);
                            string = string_3;
                            var_58 = string_3;
                        }
                    }
                    int64_t rax_18 = -1;
                    do
                    {
                        rax_18 = (rax_18 + 1);
                    } while (string[rax_18] != 0);
                    rsize_t _SizeInWords = 0x8000;
                    if ((rax_18 + 1) > 0x8000)
                    {
                        _SizeInWords = (rax_18 + 1);
                    }
                    int16_t* _Destination = sub_140009214();
                    wcscpy_s(_Destination, _SizeInWords, var_58);
                    if (sub_14000f778(_Destination, _SizeInWords, var_58, arg5) != 0)
                    {
                        sub_140003898(0, 0x447, var_58);
                    }
                    r15 = rsi;
                    r15 = (r15 & 4);
                    wchar16* r12_1;
                    r12_1 = rsi;
                    r12_1 = (r12_1 & 2);
                    while (true)
                    {
                        char r8_7;
                        if ((r15 == 0 || (r15 != 0 && (i & 8) != 0)))
                        {
                            r8_7 = 1;
                        }
                        if ((r15 != 0 && (i & 8) == 0))
                        {
                            r8_7 = 0;
                        }
                        char rdx_11;
                        if ((r15 != 0 || ((r15 == 0 && (rsi & 8) == 0) && (i & 1) == 0)))
                        {
                            rdx_11 = 1;
                        }
                        if ((r15 == 0 && ((rsi & 8) != 0 || ((rsi & 8) == 0 && (i & 1) != 0))))
                        {
                            rdx_11 = 0;
                        }
                        int64_t var_50;
                        var_88 = &var_50;
                        int32_t rax_22 = sub_140005114(_Destination, rdx_11, r8_7, ((i >> 1) & 1), var_88);
                        var_64 = rax_22;
                        rbx = rax_22;
                        if (r12_1 != 0)
                        {
                            break;
                        }
                        if (rax_22 == 0x103)
                        {
                            if (data_140036ced == r12_1)
                            {
                                sub_140003898(0, 0xfac, var_50);
                                rbx = 0;
                                var_64 = 0;
                            }
                            else if (var_60 < 0xa)
                            {
                                sub_140003898(0, 0xfad, var_50);
                                var_60 = (var_60 + 1);
                                continue;
                            }
                        }
                        if ((((rax_22 == 0x103 && data_140036ced == r12_1) || rax_22 != 0x103) && rbx == 0))
                        {
                            break;
                        }
                        if (rbx <= data_14002648c)
                        {
                            break;
                        }
                        if (data_140025c3b == 0)
                        {
                            sub_140003898(0, 0x435, var_50);
                        }
                        break;
                    }
                    int16_t* rcx_20 = var_58;
                    if (string_2 != rcx_20)
                    {
                        free(rcx_20);
                    }
                    struct FILETIME rcx_21;
                    rcx_21.dwLowDateTime = var_48.dwLowDateTime;
                    rcx_21.dwHighDateTime = var_48.dwHighDateTime;
                    free(rcx_21);
                    free(_Destination);
                    if ((r12_1 == 0 && (data_140025c3b != 0 && (rbx != 0 && rbx > data_14002648c))))
                    {
                        break;
                    }
                    r14_1 = 0x5e;
                }
                rax = var_68_1;
                i_1 = *i_2;
                i_2 = i_1;
            } while (i_1 != 0);
        }
        if ((rsi & 2) != 0)
        {
            goto label_140003e2c;
        }
        if (data_140025c3b == 0)
        {
            goto label_140003e2c;
        }
        if (rbx <= data_14002648c)
        {
            goto label_140003e2c;
        }
        rax_3 = rbx;
    }
    return rax_3;
}

void* const sub_140004288()
{
    __chkstk(0x10250);
    void var_10268;
    int64_t var_28 = (__security_cookie ^ &var_10268);
    wchar16* _Buffer = nullptr;
    void var_10028;
    wcscpy_s(&var_10028, 0x8000, u"set ");
    void* string = &data_140015808;
    int16_t var_10020;
    int16_t* _Destination = &var_10020;
    while ((!(*string != 0x20 && *string != 9)))
    {
        string = (string + 2);
    }
    void* const rax_3;
    if (wcschr(string, 0x3d) == 0)
    {
        rax_3 = &data_140011dec;
    }
    else
    {
        while (true)
        {
            int16_t i = *string;
            if (i != 0x3d)
            {
                *_Destination = i;
                _Destination = &_Destination[1];
                if (_Destination < &var_28)
                {
                    string = (string + 2);
                    continue;
                }
            }
            else
            {
                int64_t rsi_1 = -1;
                if (i != 0)
                {
                    do
                    {
                        if (i != 0x5e)
                        {
                            string = (string + 2);
                        }
                        if (i == 0x25)
                        {
                            void var_10238;
                            void* rcx_2 = &var_10238;
                            int16_t rax_4;
                            while (true)
                            {
                                rax_4 = *string;
                                if (rax_4 == 0x25)
                                {
                                    break;
                                }
                                if (rax_4 == 0)
                                {
                                    break;
                                }
                                *rcx_2 = rax_4;
                                rcx_2 = (rcx_2 + 2);
                                void var_10036;
                                if (rcx_2 == &var_10036)
                                {
                                    break;
                                }
                                string = (string + 2);
                            }
                            if (rax_4 != 0x25)
                            {
                                break;
                            }
                            int16_t rax_5 = *string;
                            string = (string + 2);
                            *rcx_2 = 0;
                            if (rax_5 == 0)
                            {
                                int64_t rax_8 = -1;
                                do
                                {
                                    rax_8 = (rax_8 + 1);
                                } while (*(&var_10238 + (rax_8 << 1)) != 0);
                                void* _Destination_1 = &_Destination[(rax_8 + 1)];
                                if (_Destination_1 >= &var_28)
                                {
                                    break;
                                }
                                *_Destination = 0x25;
                                wcscpy_s(&_Destination[1], ((&var_28 - &_Destination[1]) >> 1), &var_10238);
                                _Destination = _Destination_1;
                                break;
                            }
                            _wdupenv_s(&_Buffer, nullptr, &var_10238);
                            wchar16* _Source = _Buffer;
                            int64_t rax_6 = -1;
                            if (_Source == 0)
                            {
                                do
                                {
                                    rax_6 = (rax_6 + 1);
                                } while (*(&var_10238 + (rax_6 << 1)) != 0);
                                void* _Destination_3 = &_Destination[(rax_6 + 2)];
                                if (_Destination_3 >= &var_28)
                                {
                                    break;
                                }
                                *_Destination = 0x25;
                                wcscpy_s(&_Destination[1], ((&var_28 - &_Destination[1]) >> 1), &var_10238);
                                *(_Destination_3 - 2) = 0x25;
                                _Destination = _Destination_3;
                            }
                            else
                            {
                                do
                                {
                                    rax_6 = (rax_6 + 1);
                                } while (_Source[rax_6] != 0);
                                void* _Destination_2 = &_Destination[rax_6];
                                if (_Destination_2 >= &var_28)
                                {
                                    break;
                                }
                                wcscpy_s(_Destination, ((&var_28 - _Destination) >> 1), _Source);
                                _Destination = _Destination_2;
                                free(_Buffer);
                                _Buffer = nullptr;
                            }
                        }
                        if (i == 0x5e)
                        {
                            i = *(string + 2);
                            if (i == 0)
                            {
                                break;
                            }
                            string = (string + 4);
                        }
                        if (((i != 0x5e && i != 0x25) || i == 0x5e))
                        {
                            *_Destination = i;
                            _Destination = &_Destination[1];
                            if (_Destination >= &var_28)
                            {
                                break;
                            }
                        }
                        i = *string;
                    } while (i != 0);
                }
                if ((i == 0 || (i != 0 && (!((i == 0x5e || (i != 0x5e && i != 0x25)) && _Destination >= &var_28)))))
                {
                    *_Destination = 0;
                    wcscpy_s(&data_140015800, 0x8000, &var_10028);
                    var_10020 = 0;
                    do
                    {
                        rsi_1 = (rsi_1 + 1);
                    } while (*(&var_10028 + (rsi_1 << 1)) != 0);
                    rax_3 = &&data_140015800[rsi_1];
                    break;
                }
            }
            rax_3 = nullptr;
            break;
        }
    }
    __security_check_cookie((var_28 ^ &var_10268));
    return rax_3;
}

int32_t* sub_140004564(int16_t* arg1)
{
    int16_t* string = arg1;
    int32_t* rsi = sub_14000dcc4(&data_140011dec);
    if (*string != 0)
    {
        do
        {
            wchar16* rax_1 = wcschr(string, 0x25);
            wchar16* rax_2;
            if (rax_1 != 0)
            {
                rax_2 = wcschr(&rax_1[1], 0x25);
                if (rax_2 != 0)
                {
                    *rax_1 = 0;
                    *rax_2 = 0;
                    _Buffer = nullptr;
                    wchar16* rax_3 = sub_14000dd24(rsi, string);
                    _wdupenv_s(&_Buffer, nullptr, &rax_1[1]);
                    wchar16* _Buffer_1 = _Buffer;
                    if (_Buffer_1 == 0)
                    {
                        *rax_1 = 0x25;
                        rsi = sub_14000dd24(sub_14000dd24(rax_3, rax_1), &data_140011df0);
                    }
                    else
                    {
                        rsi = sub_14000dd24(rax_3, _Buffer_1);
                        free(_Buffer);
                        _Buffer = nullptr;
                    }
                    *rax_1 = 0x25;
                    string = &rax_2[1];
                    *rax_2 = 0x25;
                }
            }
            if ((rax_1 == 0 || (rax_1 != 0 && rax_2 == 0)))
            {
                rsi = sub_14000dd24(rsi, string);
                int64_t rax_8 = -1;
                do
                {
                    rax_8 = (rax_8 + 1);
                } while (string[rax_8] != 0);
                string = &string[rax_8];
            }
        } while (*string != 0);
    }
    return rsi;
}

void* sub_140004690(int32_t arg1, int64_t* arg2, int32_t* arg3)
{
    int16_t* _String1 = *arg2;
    int32_t i = arg1;
    wint_t* r14 = arg2[1];
    int64_t* r15 = arg2;
    int32_t rax = iswalpha(*_String1);
    void* rax_2;
    if (((rax == 0 || (rax != 0 && _String1[1] != 0x3a)) || ((rax != 0 && _String1[1] == 0x3a) && _String1[2] != 0)))
    {
        rax_2 = _wcsicmp(_String1, &data_140011df8);
        int32_t rdi_1;
        if (rax_2 == 0)
        {
            rdi_1 = (rax_2 + 1);
            if (i == rdi_1)
            {
            label_140004892:
                rax_2 = 0;
            }
            else
            {
                if (data_140015800 == 0)
                {
                    goto label_140004892;
                }
                rax_2 = sub_140004288();
                if (rax_2 == 0)
                {
                    goto label_140004892;
                }
                if (*rax_2 == 0)
                {
                    goto label_140004892;
                }
                int64_t r8;
                rax_2 = _wputenv(sub_14000dcc4(rax_2));
                *arg3 = rax_2;
                if (rax_2 == 0xffffffff)
                {
                    sub_140003898(data_140025c24, 0x41f, r8);
                }
            }
        }
        else
        {
            void* rbx;
            if (_wcsnicmp(_String1, (&data_140011e00), 2) == 0)
            {
                rbx = &_String1[2];
            }
            else
            {
                if (_wcsnicmp(_String1, u"chdir", 5) != 0)
                {
                    goto label_140004892;
                }
                rbx = &_String1[5];
            }
            if (i > 2)
            {
                goto label_140004892;
            }
            rdi_1 = 1;
            while (i != 0)
            {
                int16_t* rcx_10 = *r15;
                i = (i - 1);
                int16_t* rdx = rcx_10;
                if (*rcx_10 != 0)
                {
                    do
                    {
                        int16_t r8_1 = *rdx;
                        if (((0xfffd & (r8_1 - 0x5c)) != 0 && r8_1 != 0x22))
                        {
                            *rcx_10 = r8_1;
                        }
                        if ((0xfffd & (r8_1 - 0x5c)) == 0)
                        {
                            if (rdx[1] == 0x22)
                            {
                                *rcx_10 = r8_1;
                                rdx = &rdx[1];
                                rcx_10 = &rcx_10[1];
                            }
                            *rcx_10 = *rdx;
                        }
                        if ((((0xfffd & (r8_1 - 0x5c)) != 0 && r8_1 != 0x22) || (0xfffd & (r8_1 - 0x5c)) == 0))
                        {
                            rcx_10 = &rcx_10[1];
                        }
                        rdx = &rdx[1];
                    } while (*rdx != 0);
                }
                *rcx_10 = 0;
                r15 = &r15[1];
            }
            void* rcx_12;
            if ((*rbx == 0 && r14 != 0))
            {
                rax_2 = iswalpha(*r14);
                if ((rax_2 != 0 && (r14[1] == 0x3a && r14[2] == 0)))
                {
                    goto label_140004892;
                }
                rcx_12 = r14;
                goto label_14000486a;
            }
            rax_2 = (*rbx - 0x2e);
            if ((rax_2 > 1 && *rbx != 0x5c))
            {
                goto label_140004892;
            }
            rcx_12 = rbx;
        label_14000486a:
            int32_t* _Path = sub_140004564(rcx_12);
            *arg3 = _wchdir(_Path);
            free(_Path);
        }
        if ((rax_2 != 0 || (rax_2 == 0 && i != rdi_1)))
        {
            if (*arg3 == 0)
            {
                goto label_14000488d;
            }
            *arg3 = rdi_1;
        label_14000488d:
            rax_2 = rdi_1;
        }
    }
    if (((rax != 0 && _String1[1] == 0x3a) && _String1[2] == 0))
    {
        _chdrive((towupper(*_String1) - 0x40));
        rax_2 = 1;
        *arg3 = 0;
    }
    return rax_2;
}

int64_t sub_1400048b4(int16_t* arg1, int32_t arg2)
{
    int16_t* rbx = arg1;
    while ((!(*rbx != 0x20 && *rbx != 9)))
    {
        rbx = &rbx[1];
    }
    wchar16 r14 = 0;
    wchar16* rax = wcspbrk(rbx, u" \t<>\r");
    if (rax != 0)
    {
        r14 = *rax;
        *rax = 0;
    }
    FILE* _Stream;
    int32_t _OpenFlag;
    if (arg2 == 4)
    {
        _Stream = __acrt_iob_func(0);
        _OpenFlag = 0;
    }
    else
    {
        _OpenFlag = 0x109;
        _Stream = __acrt_iob_func(1);
        if (arg2 == 2)
        {
            _OpenFlag = 0x301;
        }
    }
    arg_10 = 0;
    int64_t r15;
    r15 = _wsopen_s(&arg_10, rbx, _OpenFlag, 0x40, 0x180) == 0;
    if (r15 != 0)
    {
        int32_t _FileHandleDst = _fileno(_Stream);
        int32_t rax_4;
        int64_t r8;
        rax_4 = _dup2(arg_10, _FileHandleDst);
        if (rax_4 == 0xffffffff)
        {
            sub_140003898(0, 0x411, r8);
        }
        _close(arg_10);
        if (arg2 == 3)
        {
            _lseek(_fileno(_Stream), 0, (arg2 - 1));
        }
    }
    while (*rbx != 0)
    {
        *rbx = 0x20;
        rbx = &rbx[1];
    }
    if (rax != 0)
    {
        *rax = r14;
    }
    int64_t rax_3;
    rax_3 = r15;
    return rax_3;
}

wchar16* sub_1400049fc(wchar16* arg1, char arg2, int32_t* arg3, int32_t* arg4)
{
    arg_10 = arg2;
    _Destination = arg1;
    int64_t rbp;
    rbp = 0;
    int64_t r13;
    r13 = 0;
    int64_t rdi;
    rdi = 0;
    arg_10 = 0;
    int32_t* _Source = nullptr;
    void* r12 = arg1;
    wchar16* rax_1;
    while (true)
    {
        int64_t r8;
        rax_1 = wcspbrk(arg1, &data_140011e28);
        wchar16* rbx_1 = rax_1;
        if (rax_1 == 0)
        {
            break;
        }
        rax_1 = *rax_1;
        if (rax_1 == 0x3c)
        {
            if (rbp != 0)
            {
                goto label_140004b66;
            }
            if (_Source == 0)
            {
                _Source = sub_14000dcc4(r12);
            }
            *rbx_1 = 0x20;
            r12 = &rbx_1[1];
            rbp = 1;
            arg_10 = 1;
            rax_1 = _dup(_fileno(__acrt_iob_func(0)));
            *arg3 = rax_1;
            if (rax_1 == 0xffffffff)
            {
                goto label_140004b66;
            }
            if (sub_1400048b4(&rbx_1[1], 4) == 0)
            {
                goto label_140004b66;
            }
            goto label_140004b59;
        }
        if (rax_1 == 0x3e)
        {
            if (r13 != 0)
            {
                goto label_140004b66;
            }
            if (_Source == 0)
            {
                _Source = sub_14000dcc4(r12);
            }
            *rbx_1 = 0x20;
            r13 = 1;
            void* rbx_2 = &rbx_1[1];
            r12 = rbx_2;
            if (*rbx_2 != 0x3e)
            {
                rbp = 2;
            }
            else
            {
                *rbx_2 = 0x20;
                rbp = 3;
                rbx_2 = (rbx_2 + 2);
            }
            rax_1 = _dup(_fileno(__acrt_iob_func(1)));
            *arg4 = rax_1;
            if ((rax_1 != 0xffffffff && sub_1400048b4(rbx_2, rbp) != 0))
            {
                rbp = arg_10;
                goto label_140004b59;
            }
            rbp = arg_10;
        label_140004b66:
            rdi = 1;
            if (_Source != 0)
            {
                wcscpy_s(_Destination, -1, _Source);
                free(_Source);
            }
            if ((rbp != 0 && *arg3 != 0xffffffff))
            {
                int32_t _FileHandleDst = _fileno(__acrt_iob_func(0));
                int32_t rax_9;
                int64_t r8_2;
                rax_9 = _dup2(*arg3, _FileHandleDst);
                if (rax_9 == 0xffffffff)
                {
                    sub_140003898(0, 0x411, r8_2);
                }
                _close(*arg3);
                *arg3 = 0xffffffff;
            }
            if ((r13 != 0 && *arg4 != 0xffffffff))
            {
                int32_t _FileHandleDst_1 = _fileno(__acrt_iob_func(1));
                int32_t rax_11;
                int64_t r8_3;
                rax_11 = _dup2(*arg4, _FileHandleDst_1);
                if (rax_11 == 0xffffffff)
                {
                    sub_140003898(0, 0x411, r8_3);
                }
                _close(*arg4);
                *arg4 = 0xffffffff;
            }
            break;
        }
        if (rax_1 == 0x7c)
        {
            goto label_140004b66;
        }
        sub_140003898(0, 0x411, r8);
    label_140004b59:
        arg1 = r12;
    }
    rax_1 = rdi;
    return rax_1;
}

int64_t sub_140004c30(int16_t* arg1, void** arg2)
{
    int16_t* r9 = arg1;
    int16_t* r8 = arg1;
    if (*arg1 == 0x3b)
    {
        do
        {
            r8 = &r8[1];
        } while (*r8 == 0x3b);
    }
    while (true)
    {
        int16_t rcx = *r8;
        if (rcx == 0)
        {
            break;
        }
        if (rcx == 0x3b)
        {
            break;
        }
        if (rcx != 0x22)
        {
            *r9 = rcx;
            r9 = &r9[1];
        }
        else
        {
            r8 = &r8[1];
            int16_t i = *r8;
            if (i == 0)
            {
                break;
            }
            while (i != 0x22)
            {
                r8 = &r8[1];
                *r9 = i;
                r9 = &r9[1];
                i = *r8;
                if (i == 0)
                {
                    break;
                }
            }
            if (*r8 == 0)
            {
                break;
            }
        }
        r8 = &r8[1];
    }
    bool c = *r8 != 0;
    *r9 = 0;
    *arg2 = ((arg2 - arg2) & &r8[1]);
    int64_t rax;
    rax = r9 != arg1;
    return rax;
}

wchar16* sub_140004cc4(int16_t* arg1, wchar16* arg2)
{
    void var_6d8;
    int64_t rax_1 = (__security_cookie ^ &var_6d8);
    wchar16* r12 = nullptr;
    int64_t r14 = -1;
    char var_688 = 0;
    void* r13 = nullptr;
    if (*arg1 == 0x22)
    {
        int64_t rax_2 = -1;
        do
        {
            rax_2 = (rax_2 + 1);
        } while (arg1[rax_2] != 0);
        r13 = &arg1[(-1 + rax_2)];
        if (0x22 == *r13)
        {
            var_688 = 1;
            do
            {
                arg1 = &arg1[1];
            } while (0x22 == *arg1);
            if (r13 > arg1)
            {
                void* rax_3;
                do
                {
                    rax_3 = (r13 - 2);
                    if (0x22 != *rax_3)
                    {
                        break;
                    }
                    r13 = rax_3;
                } while (rax_3 > arg1);
            }
            *r13 = 0;
        }
    }
    wchar16 _Drive;
    wchar16 _Ext;
    wchar16 _Dir;
    void var_248;
    _wsplitpath_s(arg1, &_Drive, 3, &_Dir, 0x100, &var_248, 0x100, &_Ext, 0x100);
    rsize_t var_678;
    wchar16* _Source;
    if (_Ext == 0)
    {
        errno_t rax_6 = _wgetenv_s(&var_678, nullptr, 0, u"PATHEXT");
        rsize_t rcx_1;
        if (rax_6 == 0)
        {
            rcx_1 = var_678;
            if (rcx_1 != 0)
            {
                wchar16* _Buffer = sub_140009214();
                _Source = _Buffer;
                if (_wgetenv_s(&var_678, _Buffer, var_678, u"PATHEXT") != 0)
                {
                    free(_Source);
                    _Source = nullptr;
                }
            }
        }
        if (((rax_6 != 0 || (rax_6 == 0 && rcx_1 == 0)) || ((rax_6 == 0 && rcx_1 != 0) && _Source == 0)))
        {
            var_678 = 0x21;
            wchar16* _Destination = sub_140009214();
            _Source = _Destination;
            wcscpy_s(_Destination, var_678, u".COM;.EXE;.BAT;.CMD;.VBS;.JS;.WS");
        }
    }
    else
    {
        int64_t rax_4 = -1;
        do
        {
            rax_4 = (rax_4 + 1);
        } while (&_Ext[rax_4] != 0);
        _Source = &_Ext;
        var_678 = (rax_4 + 1);
    }
    wchar16* rsi;
    if ((_Drive != 0 || (_Drive == 0 && _Dir != 0)))
    {
        int64_t rcx_13 = -1;
        do
        {
            rcx_13 = (rcx_13 + 1);
        } while (&_Drive[rcx_13] != 0);
        int64_t rax_14 = -1;
        do
        {
            rax_14 = (rax_14 + 1);
        } while (&_Dir[rax_14] != 0);
        wchar16* _Buffer_1 = sub_140009214();
        rsi = _Buffer_1;
        if (_wmakepath_s(_Buffer_1, ((rax_14 + 1) + rcx_13), &_Drive, &_Dir, nullptr, nullptr) != 0)
        {
            free(rsi);
            rsi = nullptr;
        }
    }
    if ((_Drive == 0 && _Dir == 0))
    {
        rsize_t _BufferCount_1;
        errno_t rax_10 = _wgetenv_s(&_BufferCount_1, nullptr, 0, u"PATH");
        if ((rax_10 != 0 || (rax_10 == 0 && _BufferCount_1 == 0)))
        {
            _BufferCount_1 = 1;
        }
        BOOL rax_11 = NeedCurrentDirectoryForExePathW(&var_248);
        if (rax_11 != 0)
        {
            _BufferCount_1 = (_BufferCount_1 + 2);
        }
        wchar16* _Destination_1 = sub_140009214();
        rsi = _Destination_1;
        wchar16* _Buffer_2 = _Destination_1;
        rsize_t _BufferCount;
        if (rax_11 == 0)
        {
            _BufferCount = _BufferCount_1;
        }
        else
        {
            wcscpy_s(_Destination_1, _BufferCount_1, &data_140011e4c);
            _Buffer_2 = &_Buffer_2[2];
            _BufferCount = (_BufferCount_1 - 2);
            _BufferCount_1 = _BufferCount;
        }
        errno_t rax_13 = _wgetenv_s(&_BufferCount_1, _Buffer_2, _BufferCount, u"PATH");
        if ((rax_13 != 0 || (rax_13 == 0 && _BufferCount_1 == 0)))
        {
            *_Buffer_2 = 0;
        }
    }
    wchar16* _Dir_1 = rsi;
    wchar16* rax_22;
    while (true)
    {
        wchar16* _Dir_2;
        if ((_Dir_1 != 0 && sub_140004c30(_Dir_1, &_Dir_2) != 0))
        {
            wchar16* _Destination_2 = sub_140009214();
            r12 = _Destination_2;
            wcscpy_s(_Destination_2, var_678, _Source);
            void* _Ext_2;
            wchar16* _Ext_1;
            for (_Ext_1 = r12; _Ext_1 != 0; _Ext_1 = _Ext_2)
            {
                if (sub_140004c30(_Ext_1, &_Ext_2) == 0)
                {
                    break;
                }
                if ((_wmakepath_s(arg2, 0x104, nullptr, _Dir_1, &var_248, _Ext_1) == 0 && _waccess_s(arg2, 0) == 0))
                {
                    break;
                }
            }
            if (_Ext_1 != 0)
            {
                if (var_688 != 0)
                {
                    do
                    {
                        r14 = (r14 + 1);
                    } while (arg2[r14] != 0);
                    int64_t rbx_2 = (r14 * 2);
                    memmove(&arg2[1], arg2, rbx_2);
                    *arg2 = 0x22;
                    *((rbx_2 + arg2) + 2) = 0x22;
                    arg2[(r14 + 2)] = 0;
                    *r13 = 0x22;
                }
                free(r12);
                free(rsi);
                if (_Source != &_Ext)
                {
                    free(_Source);
                }
                rax_22 = 1;
                break;
            }
            _Dir_1 = _Dir_2;
            continue;
        }
        free(r12);
        free(rsi);
        if (_Source != &_Ext)
        {
            free(_Source);
        }
        rax_22 = 0;
        break;
    }
    __security_check_cookie((rax_1 ^ &var_6d8));
    return rax_22;
}

uint64_t sub_140005114(int16_t* arg1, char arg2, char arg3, char arg4, int32_t** arg5)
{
    void var_4a8;
    int64_t rax_1 = (__security_cookie ^ &var_4a8);
    int32_t** r15 = arg5;
    int32_t lpExitCode_1 = 0;
    bool cond:0 = data_1400364a0 != 0;
    int64_t r12;
    r12 = arg3;
    char var_488 = arg4;
    int64_t rdi;
    rdi = arg2;
    int16_t* var_480 = arg1;
    int32_t** var_460 = r15;
    if ((!cond:0))
    {
        int32_t* rax_2 = sub_140005938();
        arg1 = var_480;
        data_1400364a0 = rax_2;
    }
    uint32_t rax_3 = *arg1;
    char r14 = 1;
    if (rax_3 == 0x2d)
    {
        var_488 = 1;
        var_480 = &arg1[1];
        if (iswdigit(arg1[1]) == 0)
        {
            data_14002648c = 0xffffffff;
        }
        else
        {
            wchar16* _String = var_480;
            data_14002648c = wcstoul(_String, &var_480, 0xa);
            if (*_errno() == 0x22)
            {
                *var_480 = 0;
                sub_140003898(0, 0x436, _String);
            }
            void* rax_9 = var_480;
            while (true)
            {
                if (iswspace(*rax_9) == 0)
                {
                    break;
                }
                rax_9 = &var_480[1];
                var_480 = rax_9;
            }
        }
        arg1 = var_480;
    }
    else if (rax_3 == 0x40)
    {
        arg1 = &arg1[1];
        var_480 = arg1;
        if (r12 != 0)
        {
            rdi = 0;
        }
    }
    uint64_t lpExitCode_4;
    if (*arg1 == 0)
    {
        lpExitCode_4 = 0;
    }
    else
    {
        int64_t rax_11 = -1;
        do
        {
            rax_11 = (rax_11 + 1);
        } while (arg1[rax_11] != 0);
        if (rax_11 >= 0x8000)
        {
            data_140015800 = 0;
        }
        else
        {
            wcscpy_s(&data_140015800, 0x8000, arg1);
            arg1 = var_480;
        }
        int32_t* rax_12 = sub_14000dcc4(arg1);
        int32_t* var_470_1 = rax_12;
        int32_t* r13_1 = rax_12;
        if (rdi != 0)
        {
            sub_14000bfe0(u"\t%s\n", rax_12);
            sub_14000bfb0();
        }
        int64_t* _ArgList = nullptr;
        int32_t var_484;
        sub_140003ae0(&var_484, nullptr, r13_1);
        uint64_t rdi_1 = var_484;
        if (rdi_1 != 0)
        {
            void** _ArgList_1 = sub_140009214();
            _ArgList = _ArgList_1;
            sub_140003ae0(&var_484, _ArgList_1, r13_1);
            wchar16* _String1 = *_ArgList;
            if (_String1 != 0)
            {
                wchar16* _String2 = data_140026498;
                if ((_String2 != 0 && _wcsicmp(_String1, _String2) == 0))
                {
                    if (data_1400157f0 == 0)
                    {
                        wchar16* r15_1 = *__p__wpgmptr();
                        data_1400157f0 = r15_1;
                        if (wcspbrk(r15_1, &data_140011630) != 0)
                        {
                            int64_t rsi = -1;
                            do
                            {
                                rsi = (rsi + 1);
                            } while (*(data_1400157f0 + (rsi << 1)) != 0);
                            wchar16* _Destination_1 = sub_140009214();
                            data_1400157f0 = _Destination_1;
                            wcscpy_s(_Destination_1, (rsi + 3), &data_140011624);
                            wcscat_s(data_1400157f0, (rsi + 3), r15_1);
                            wcscat_s(data_1400157f0, (rsi + 3), &data_140011624);
                            lpExitCode_1 = 0;
                        }
                        r15 = var_460;
                    }
                    *_ArgList = data_1400157f0;
                }
            }
            int32_t lpExitCode_3;
            if (r12 != 0)
            {
                lpExitCode_1 = wcspbrk(var_480, u"<>|&%") == 0;
                char rax_23;
                char rdx_10;
                rax_23 = sub_140004690(rdi_1, _ArgList, &lpExitCode_3);
                int64_t i_1 = 0;
                if (rax_23 == 0)
                {
                    int16_t* _Source = var_480;
                    int64_t rdi_2 = -1;
                    int64_t rcx_17 = -1;
                    do
                    {
                        rcx_17 = (rcx_17 + 1);
                    } while (_Source[rcx_17] != 0);
                    int32_t lpExitCode;
                    wchar16 var_248;
                    if (rcx_17 >= 0x1000)
                    {
                    label_1400054a6:
                        int32_t var_468 = 0xffffffff;
                        lpExitCode = 0xffffffff;
                        char rax_24 = sub_1400049fc(_Source, rdx_10, &var_468, &lpExitCode);
                        r15 = var_468;
                        int32_t lpExitCode_2 = lpExitCode;
                        r13_1 = rax_24;
                        char rax_26;
                        if (rax_24 == 0)
                        {
                            int16_t* r8_8 = var_480;
                            int64_t rcx_19 = -1;
                            do
                            {
                                rcx_19 = (rcx_19 + 1);
                            } while (r8_8[rcx_19] != 0);
                            if (rcx_19 >= 0x8000)
                            {
                                sub_140003898(0, 0x447, r8_8);
                            }
                            if ((r15 != 0xffffffff || (r15 == 0xffffffff && lpExitCode_2 != 0xffffffff)))
                            {
                                free(var_470_1);
                                int32_t* rax_25 = sub_14000dcc4(var_480);
                                var_470_1 = rax_25;
                                sub_140003ae0(&var_484, _ArgList, rax_25);
                            }
                            wchar16 var_458;
                            rax_26 = sub_140004cc4(*_ArgList, &var_458);
                            if (rax_26 == 0)
                            {
                                r13_1 = 1;
                            }
                            else
                            {
                                if (var_458 == 0x22)
                                {
                                    do
                                    {
                                        rdi_2 = (rdi_2 + 1);
                                    } while (&var_458[rdi_2] != 0);
                                    if (*(&*var_460[6] + (rdi_2 << 1)) == 0x22)
                                    {
                                        void var_456;
                                        memmove(&var_458, &var_456, (rdi_2 * 2));
                                        if (((rdi_2 << 1) + -fffffffffffffffc) >= 0x208)
                                        {
                                            _lockexit();
                                            breakpoint();
                                        }
                                        *(&var_458 + ((rdi_2 << 1) + -fffffffffffffffc)) = 0;
                                    }
                                }
                                *_ArgList = &var_458;
                                if (wcschr(&var_458, 0x20) != 0)
                                {
                                    var_248 = 0x22;
                                    void _Destination;
                                    wcscpy_s(&_Destination, 0x103, &var_458);
                                    wcscat_s(&var_248, 0x104, &data_140011624);
                                    *_ArgList = &var_248;
                                }
                                *_errno() = 0;
                                intptr_t rax_35 = _wspawnvp(0, &var_458, _ArgList);
                                lpExitCode_1 = rax_35;
                                if ((rax_35 == -1 && *_errno() != 0xc))
                                {
                                    r13_1 = r13_1;
                                    if (*__doserrno() == 0xc1)
                                    {
                                        r13_1 = 1;
                                    }
                                }
                            }
                        }
                        if (((rax_24 == 0 && rax_26 == 0) || rax_24 != 0))
                        {
                            lpExitCode_1 = lpExitCode_3;
                        }
                        if (r15 != 0xffffffff)
                        {
                            int32_t rax_29;
                            int64_t r8_10;
                            rax_29 = _dup2(r15, _fileno(__acrt_iob_func(0)));
                            if (rax_29 == 0xffffffff)
                            {
                                sub_140003898(0, 0x411, r8_10);
                            }
                            _close(r15);
                        }
                        if (lpExitCode_2 != 0xffffffff)
                        {
                            int32_t rax_32;
                            int64_t r8_11;
                            rax_32 = _dup2(lpExitCode_2, _fileno(__acrt_iob_func(1)));
                            if (rax_32 == 0xffffffff)
                            {
                                sub_140003898(0, 0x411, r8_11);
                            }
                            _close(lpExitCode_2);
                        }
                        i_1 = 0;
                        if (r13_1 == 0)
                        {
                            goto label_140005452;
                        }
                        _Source = var_480;
                        goto label_1400055cb;
                    }
                    if (lpExitCode_1 != 0)
                    {
                        goto label_1400054a6;
                    }
                    r13_1 = 1;
                label_1400055cb:
                    r15 = 0;
                    int64_t r8_12 = -1;
                    do
                    {
                        r8_12 = (r8_12 + 1);
                    } while (_Source[r8_12] != 0);
                    if (r8_12 >= 0x1000)
                    {
                        sub_140003898(0, 0x447, _Source);
                    }
                    else
                    {
                        wcscpy_s(&data_140015800, 0x8000, _Source);
                    }
                    int16_t* rcx_34 = *_ArgList;
                    int64_t rax_38;
                    if (*rcx_34 == 0x22)
                    {
                        rax_38 = -1;
                        do
                        {
                            rax_38 = (rax_38 + 1);
                        } while (rcx_34[rax_38] != 0);
                        if (rcx_34[(rax_38 - 1)] == 0x22)
                        {
                            rdi_1 = var_484;
                            for (int64_t i = (rdi_1 - 1); i >= 1; i = (i - 1))
                            {
                                if (wcspbrk(_ArgList[i], &data_140011624) != 0)
                                {
                                    r15 = 1;
                                    _ArgList[rdi_1] = &data_140011624;
                                    rdi_1 = (rdi_1 + 1);
                                    _ArgList[rdi_1] = 0;
                                    break;
                                }
                            }
                        }
                    }
                    if ((*rcx_34 != 0x22 || (*rcx_34 == 0x22 && *((rcx_34 + (rax_38 << 1)) - 2) != 0x22)))
                    {
                        rdi_1 = var_484;
                    }
                    int64_t rcx_36 = rdi_1;
                    if (rdi_1 >= 0)
                    {
                        int64_t temp3_1;
                        do
                        {
                            _ArgList[(rcx_36 + 2)] = _ArgList[rcx_36];
                            temp3_1 = rcx_36;
                            rcx_36 = (rcx_36 - 1);
                        } while ((temp3_1 - 1) >= 0);
                    }
                    *_ArgList = data_1400364a0;
                    void* const rax_43 = &data_140011e84;
                    if (r15 != 0)
                    {
                        rax_43 = u"/c "";
                    }
                    _ArgList[1] = rax_43;
                    *_errno() = 0;
                    intptr_t rax_45 = _wspawnvp(1, *_ArgList, _ArgList);
                    if (rax_45 != -1)
                    {
                        WaitForSingleObject(rax_45, 0xffffffff);
                        do
                        {
                            GetExitCodeProcess(rax_45, &lpExitCode);
                            lpExitCode_1 = lpExitCode;
                            if (lpExitCode_1 != 0x103)
                            {
                                break;
                            }
                            Sleep(0x3e8);
                            i_1 = (i_1 + 1);
                        } while (i_1 < 0xa);
                        CloseHandle(rax_45);
                        goto label_14000545a;
                    }
                    lpExitCode_1 = -1;
                label_140005462:
                    if (var_488 == 0)
                    {
                        int32_t* rax_46 = _errno();
                        if (*rax_46 == 0)
                        {
                            goto label_140005893;
                        }
                        if (*rax_46 != 2)
                        {
                            int32_t rdx_19;
                            int16_t* r8_19;
                            if (*rax_46 != 0xc)
                            {
                                _wcserror_s(&var_248, 0xc8, *_errno());
                                r8_19 = &var_248;
                                rdx_19 = 0x415;
                            }
                            else
                            {
                                if (r13_1 == 0)
                                {
                                    r8_19 = *_ArgList;
                                }
                                else
                                {
                                    r8_19 = _ArgList[2];
                                }
                                rdx_19 = 0x43a;
                            }
                            sub_140003898(0, rdx_19, r8_19);
                            goto label_140005893;
                        }
                        sub_140003898(0, 0x439, *_ArgList);
                        goto label_14000588f;
                    }
                    lpExitCode_1 = 0;
                }
                else
                {
                    lpExitCode_1 = lpExitCode_3;
                    r13_1 = 0;
                label_140005452:
                    rdi_1 = var_484;
                label_14000545a:
                    if (lpExitCode_1 == 0xffffffff)
                    {
                        goto label_140005462;
                    }
                label_14000588f:
                    if (lpExitCode_1 != 0)
                    {
                    label_140005893:
                        int32_t** r15_3 = var_460;
                        if (r15_3 != 0)
                        {
                            int32_t* rcx_41;
                            if (r13_1 == 0)
                            {
                                rcx_41 = *_ArgList;
                            }
                            else
                            {
                                rcx_41 = _ArgList[2];
                            }
                            *r15_3 = sub_14000dcc4(rcx_41);
                        }
                    }
                }
                r13_1 = var_470_1;
            }
            else
            {
                if (sub_140004690(rdi_1, _ArgList, &lpExitCode_3) != 0)
                {
                    lpExitCode_1 = lpExitCode_3;
                    if ((lpExitCode_1 != 0 && r15 != 0))
                    {
                        *r15 = sub_14000dcc4(*_ArgList);
                    }
                }
                rdi_1 = var_484;
            }
        }
        int32_t rcx_42 = 0;
        if (rdi_1 != 0xfffffffb)
        {
            int64_t* _ArgList_2 = _ArgList;
            while (*_ArgList_2 != 0)
            {
                if (*_ArgList_2 == r13_1)
                {
                    r14 = 0;
                    break;
                }
                rcx_42 = (rcx_42 + 1);
                _ArgList_2 = &_ArgList_2[1];
                if (rcx_42 >= (rdi_1 + 5))
                {
                    break;
                }
            }
        }
        if (_ArgList != 0)
        {
            free(_ArgList);
        }
        if ((r13_1 != 0 && r14 != 0))
        {
            free(r13_1);
        }
        lpExitCode_4 = lpExitCode_1;
    }
    __security_check_cookie((rax_1 ^ &var_4a8));
    return lpExitCode_4;
}

int32_t* sub_140005938()
{
    void var_258;
    int64_t rax_1 = (__security_cookie ^ &var_258);
    int32_t* _Buffer = nullptr;
    _wdupenv_s(&_Buffer, nullptr, u"COMSPEC");
    int32_t* _Buffer_1 = _Buffer;
    int32_t* rax_3;
    if (_Buffer_1 != 0)
    {
        int32_t* rax_2 = sub_14000dcc4(_Buffer_1);
        free(_Buffer);
        rax_3 = rax_2;
    }
    else
    {
        int16_t _ResultPath;
        int64_t r8_2 = _wsearchenv(u"CMD.EXE", u"PATH", &_ResultPath);
        if (_ResultPath == 0)
        {
            sub_140003898(0, 0x420, r8_2);
        }
        rax_3 = sub_14000dcc4(&_ResultPath);
    }
    __security_check_cookie((rax_1 ^ &var_258));
    return rax_3;
}

wchar16* sub_1400059e0(int16_t* arg1, int64_t arg2, char arg3, char arg4, wchar16* arg5, int32_t* arg6)
{
    int64_t rbp;
    int64_t var_10 = rbp;
    int64_t r12;
    int64_t var_28 = r12;
    arg_8 = arg1;
    wchar16* rax;
    rax = arg4;
    int64_t r15;
    r15 = arg3;
    int16_t rsi = 0;
    int64_t rdi = 0;
    void* rbx = arg1;
    int64_t var_58 = 0;
    if (*arg1 != 0)
    {
        rbp = 0x29;
        do
        {
            rax = 0;
            if (*rbx == 0x24)
            {
                if (*(rbx + 2) == 0x28)
                {
                    rbx = (rbx + 2);
                    rax = 1;
                }
                void* rcx = (rbx + 2);
                if (*rcx != 0x3f)
                {
                    rbx = rcx;
                    if ((*rcx == 0x2a && *(rcx + 2) == 0x2a))
                    {
                        if (rax == 0)
                        {
                        label_140005ace:
                            rdi = data_140026450;
                            rsi = 0x2a;
                            goto label_140005ad9;
                        }
                        if ((wcschr(u"DFBR", *(rcx + 4)) != 0 && *(rbx + 6) == 0x29))
                        {
                            goto label_140005ace;
                        }
                        if (*(rbx + 4) == 0x29)
                        {
                            goto label_140005ace;
                        }
                    }
                }
                else
                {
                    if (rax == 0)
                    {
                    label_140005a7c:
                        rdi = data_140026468;
                        rsi = 0x3f;
                    label_140005ad9:
                        var_58 = rdi;
                        break;
                    }
                    if ((wcschr(u"DFBR", *(rbx + 4)) != 0 && *(rbx + 6) == 0x29))
                    {
                        goto label_140005a7c;
                    }
                    if (*(rbx + 4) == 0x29)
                    {
                        goto label_140005a7c;
                    }
                }
            }
            rbx = (rbx + 2);
        } while (*rbx != 0);
        rax = arg4;
        arg1 = arg_8;
    }
    if (*rbx == 0)
    {
        rax = 0;
    }
    else
    {
        if (rdi != 0)
        {
            rdi = arg4;
            rbp = r15;
            rbp = (rbp & 4);
            uint8_t r14_1 = ((rax >> 1) & 1);
            r12 = r15;
            r12 = (r12 & 2);
            int64_t i;
            do
            {
                data_140025c48 = arg2;
                int64_t* rax_2 = data_140026450;
                if (rsi != 0x2a)
                {
                    rax_2 = data_140026468;
                }
                i = *rax_2;
                *rax_2 = 0;
                int32_t* rax_3 = sub_14000e740(arg1, 0xff, &data_140025c48);
                if (sub_14000f778(&data_1400264a0, 0x8000, rax_3, arg5) != 0)
                {
                    sub_140003898(0, 0x447, rax_3);
                }
                char r8_1;
                if ((rbp == 0 || (rbp != 0 && (rdi & 8) != 0)))
                {
                    r8_1 = 1;
                }
                if ((rbp != 0 && (rdi & 8) == 0))
                {
                    r8_1 = 0;
                }
                char rdx_2;
                if ((rbp != 0 || ((rbp == 0 && (arg3 & 8) == 0) && (rdi & 1) == 0)))
                {
                    rdx_2 = 1;
                }
                if ((rbp == 0 && ((arg3 & 8) != 0 || ((arg3 & 8) == 0 && (rdi & 1) != 0))))
                {
                    rdx_2 = 0;
                }
                int32_t* var_50;
                int32_t rax_5 = sub_140005114(&data_1400264a0, rdx_2, r8_1, r14_1, &var_50);
                *arg6 = rax_5;
                if ((r12 == 0 && (rax_5 != 0 && (rax_5 > data_14002648c && data_140025c3b == r12))))
                {
                    sub_140003898(0, 0x435, var_50);
                }
                int64_t* rax_6;
                if (rsi != 0x2a)
                {
                    rax_6 = data_140026468;
                    data_140026468 = i;
                }
                else
                {
                    rax_6 = data_140026450;
                    data_140026450 = i;
                }
                *rax_6 = i;
                free(rax_3);
                if ((r12 == 0 && data_140025c3b != 0))
                {
                    rax = *arg6;
                    if ((rax != 0 && rax > data_14002648c))
                    {
                        break;
                    }
                }
                arg1 = arg_8;
            } while (i != 0);
            rdi = var_58;
        }
        if (rsi != 0x2a)
        {
            data_140026468 = rdi;
        }
        else
        {
            data_140026450 = rdi;
        }
        rax = 1;
    }
    return rax;
}

void* sub_140005ca8(void* arg1, char* arg2, int64_t** arg3)
{
    void var_278;
    int64_t rax_1 = (__security_cookie ^ &var_278);
    void var_258;
    void* rdi = &var_258;
    void* rbx = arg1;
    int64_t rbp;
    rbp = wcspbrk(arg1, u""^*?") != 0;
    if (rbp != 0)
    {
        int64_t rax_3 = -1;
        do
        {
            rax_3 = (rax_3 + 1);
        } while (*(rbx + (rax_3 << 1)) != 0);
        if ((rax_3 + 1) > 0x104)
        {
            void* rax_5;
            int64_t r8;
            rax_5 = sub_140009214();
            rdi = rax_5;
            if (rax_5 == 0)
            {
                sub_140003898(data_140025c24, 0x41b, r8);
            }
        }
        void* rcx_3 = rdi;
        while (true)
        {
            int16_t rax_6 = *rbx;
            if (rax_6 == 0)
            {
                break;
            }
            if ((rax_6 != 0x5e && rax_6 != 0x22))
            {
                *rcx_3 = rax_6;
                rcx_3 = (rcx_3 + 2);
            }
            rbx = (rbx + 2);
        }
        *rcx_3 = 0;
        rbx = rdi;
    }
    FindFileHandle rax_7 = FindFirstFileW(rbx, arg2);
    *arg3 = rax_7;
    char rax_8;
    void* rax_11;
    if (rax_7 != -1)
    {
        rax_8 = sub_140005f9c(rbx, arg2);
        if (rax_8 != 0)
        {
            wchar16* rax_9;
            wchar16* rax_10;
            if (rbp != 0)
            {
                rax_9 = wcschr(rbx, 0x2a);
                if (rax_9 == 0)
                {
                    rax_10 = wcschr(rbx, (rax_9 + 0x3f));
                }
            }
            if ((rbp == 0 || ((rbp != 0 && rax_9 == 0) && rax_10 == 0)))
            {
                FindClose(*arg3);
                *arg3 = -ffffffffffffffff;
            }
            if (rdi != &var_258)
            {
                free(rdi);
            }
            if (((*arg2 & 0x10) == 0 && (*(arg2 + 0x14) == 0 && *(arg2 + 0x18) == 0)))
            {
                *(arg2 + 0x14) = 0xffffffff;
                *(arg2 + 0x18) = 0xffffffff;
            }
            rax_11 = &arg2[0x2c];
        }
    }
    if ((rax_7 == -1 || (rax_7 != -1 && rax_8 == 0)))
    {
        if (rdi != &var_258)
        {
            free(rdi);
        }
        rax_11 = nullptr;
    }
    __security_check_cookie((rax_1 ^ &var_278));
    return rax_11;
}

char (*)[0x104] sub_140005e30(struct WIN32_FIND_DATAW* arg1, FindFileHandle arg2)
{
    char (* rax_1)[0x104];
    if (FindNextFileW(arg2, arg1) != 0)
    {
        rax_1 = &arg1->cFileName;
    }
    else
    {
        FindClose(arg2);
        rax_1 = nullptr;
    }
    return rax_1;
}

int32_t* gz_read(wchar16* arg1, int32_t* arg2, char* arg3, int64_t** arg4)
{
    wchar16* rdi = arg1;
    void* rax = sub_140005ca8(arg2, arg3, arg4);
    int32_t* rax_7;
    int32_t* rcx_1;
    wchar16* _Destination;
    if (rax != 0)
    {
        rcx_1 = arg2;
    }
    else
    {
        if (rdi != 0)
        {
            while (true)
            {
                _Destination = &data_140025c50;
                do
                {
                    wchar16 i = *rdi;
                    if (i != 0)
                    {
                        while (0x22 == i)
                        {
                            rdi = &rdi[1];
                            i = *rdi;
                            if (i == 0)
                            {
                                break;
                            }
                        }
                        wchar16 rax_1 = *rdi;
                        if (rax_1 != 0)
                        {
                            rdi = &rdi[1];
                            *_Destination = rax_1;
                            if (rax_1 != 0x3b)
                            {
                                _Destination = &_Destination[1];
                                continue;
                            }
                        }
                    }
                    if (_Destination != &data_140025c50)
                    {
                        break;
                    }
                } while (*rdi != 0);
                if (_Destination == &data_140025c50)
                {
                    break;
                }
                if ((_Destination[-1] != 0x5c && _Destination[-1] != 0x2f))
                {
                    *_Destination = 0x5c;
                    _Destination = &_Destination[1];
                }
                *_Destination = 0;
                if (wcspbrk(&data_140025c50, &data_140011614) == 0)
                {
                    wcscpy_s(_Destination, (0x400 - ((_Destination - &data_140025c50) >> 1)), arg2);
                    if (sub_140005ca8(&data_140025c50, arg3, arg4) != 0)
                    {
                        break;
                    }
                }
            }
        }
        if ((rdi == 0 || (rdi != 0 && _Destination == &data_140025c50)))
        {
            rax_7 = nullptr;
        }
        if ((rdi != 0 && _Destination != &data_140025c50))
        {
            rcx_1 = &data_140025c50;
        }
    }
    if ((rax != 0 || ((rax == 0 && rdi != 0) && _Destination != &data_140025c50)))
    {
        rax_7 = sub_14000dcc4(rcx_1);
    }
    return rax_7;
}

void* const* sub_140005f9c(wchar16* arg1, void* arg2)
{
    BOOL rax_7;
    void* const* rdi_2;
    if (((*arg2 & 0x400) != 0 && *(arg2 + 0x24) == 0xa000000c))
    {
        void* lpFileName = (arg2 + 0x2c);
        wchar16* rax = wcsrchr(arg1, 0x5c);
        if (rax != 0)
        {
            int64_t rcx = -1;
            do
            {
                rcx = (rcx + 1);
            } while (rax[rcx] != 0);
            int64_t rax_1 = -1;
            do
            {
                rax_1 = (rax_1 + 1);
            } while (*(lpFileName + (rax_1 << 1)) != 0);
            int64_t rax_2 = -1;
            do
            {
                rax_2 = (rax_2 + 1);
            } while (arg1[rax_2] != 0);
            void* lpFileName_1;
            int64_t r8_1;
            lpFileName_1 = sub_140009214();
            if (lpFileName_1 == 0)
            {
                sub_140003898(data_140025c24, 0x41b, r8_1);
            }
            int16_t* lpFileName_2 = lpFileName_1;
            int64_t r8_2 = 0;
            uint64_t rdx_7 = (((rax - arg1) + 1) >> 1);
            if (arg1 > rax)
            {
                rdx_7 = 0;
            }
            if (rdx_7 != 0)
            {
                do
                {
                    r8_2 = (r8_2 + 1);
                    *lpFileName_2 = *((arg1 - lpFileName_1) + lpFileName_2);
                    lpFileName_2 = &lpFileName_2[1];
                } while (r8_2 != rdx_7);
            }
            int16_t rax_5 = 0x5c;
            while (true)
            {
                *lpFileName_2 = rax_5;
                lpFileName_2 = &lpFileName_2[1];
                rax_5 = *lpFileName;
                if (rax_5 == 0)
                {
                    break;
                }
                lpFileName = (lpFileName + 2);
            }
            *lpFileName_2 = 0;
            lpFileName = lpFileName_1;
        }
        rdi_2 = CreateFileW(lpFileName, 0x80000000, FILE_SHARE_READ, nullptr, OPEN_EXISTING, SECURITY_ANONYMOUS, nullptr);
        if (rax != 0)
        {
            free(lpFileName);
        }
        if (rdi_2 != -1)
        {
            rax_7 = GetFileTime(rdi_2, (arg2 + 4), (arg2 + 0xc), (arg2 + 0x14));
            if (rax_7 != 0)
            {
                CloseHandle(rdi_2);
            }
        }
    }
    void* const* rax_6;
    if (((((((*arg2 & 0x400) != 0 && *(arg2 + 0x24) == 0xa000000c) && rdi_2 != -1) && rax_7 != 0) || (*arg2 & 0x400) == 0) || ((*arg2 & 0x400) != 0 && *(arg2 + 0x24) != 0xa000000c)))
    {
        rax_6 = 1;
    }
    if (((*arg2 & 0x400) != 0 && *(arg2 + 0x24) == 0xa000000c))
    {
        if ((rdi_2 != -1 && rax_7 == 0))
        {
            CloseHandle(rdi_2);
        }
        if (((rdi_2 != -1 && rax_7 == 0) || rdi_2 == -1))
        {
            rax_6 = 0;
        }
    }
    return rax_6;
}

int64_t sub_14000613c()
{
    int64_t rsi;
    int64_t var_10 = rsi;
    int64_t rax = getwc(data_140026480);
    while (true)
    {
        int64_t rcx_1 = data_1400364b0;
        if (rcx_1 == 0)
        {
            if (data_140015041 == 0)
            {
                break;
            }
            if ((data_140015041 != 0 && rax != 0x21))
            {
                break;
            }
        }
        data_140015041 = 0;
        int16_t* rdi_1;
        if (rcx_1 != 0)
        {
            ungetwc(rax, data_140026480);
            rdi_1 = data_1400364b0;
            data_1400364b0 = 0;
        }
        else
        {
            rdi_1 = sub_140006490();
        }
        rsi = rdi_1 != data_1400364b8;
        int16_t* rax_2;
        int64_t r8_1;
        rax_2 = sub_1400065f8(rdi_1, &arg_8);
        char rdx_3 = arg_8;
        int16_t* rbx_1 = rax_2;
        if (rdx_3 == 9)
        {
            if (data_140026489 != 0)
            {
                sub_140003898(data_140025c20, 0x409, rdi_1);
            }
            if (sub_140008bcc(rbx_1) == 0x12)
            {
                rax = 0x20;
                break;
            }
        }
        else if (rdx_3 != 0xa)
        {
            if (rdx_3 == 0xb)
            {
                sub_140003898(data_140025c20, 0x41a, rax_2);
            }
            else if (rdx_3 == 0xc)
            {
                int32_t rax_13;
                int64_t rdx_9;
                rax_13 = _wcsnicmp(rax_2, &data_140011ecc, 2);
                if (rax_13 == 0)
                {
                    sub_14000bfe0(&data_140011ed4, rdx_9);
                    rbx_1 = &rbx_1[2];
                }
                sub_1400039c0(0xd, rbx_1);
            }
            else if (rdx_3 != 0xd)
            {
                sub_1400069a4(rax_2, rdx_3);
            }
            else
            {
                _Context = nullptr;
                wchar16* rax_14 = wcstok_s(rax_2, &data_14001161c, &_Context);
                if (wcstok_s(nullptr, &data_14001161c, &_Context) != 0)
                {
                    sub_140003898(data_140025c20, 0x409, rax_14);
                }
                void* rax_16 = sub_14000918c(rax_14);
                if (rax_16 != 0)
                {
                    *(rax_16 + 0x18) = (*(rax_16 + 0x18) | 0x10);
                }
            }
        }
        else if (*rax_2 != 0)
        {
            do
            {
                uint32_t rax_4 = *rbx_1;
                if (((rax_4 != 0x2b && rax_4 != 0x2d) && (rax_4 != 0x20 && rax_4 != 9)))
                {
                    r8_1 = sub_140003898(data_140025c20, 0x400, r8_1);
                }
                if (rax_4 == 0x2b)
                {
                    rbx_1 = &rbx_1[1];
                    wint_t _C = *rbx_1;
                    if (_C == 0)
                    {
                        break;
                    }
                    while (_C != 0x2d)
                    {
                        wchar16* rax_6;
                        int64_t r8_3;
                        rax_6 = wcschr(u"DINSU", towupper(_C));
                        wchar16* rax_8;
                        if ((rax_6 == 0 && data_140026489 != 0))
                        {
                            rax_8 = wcschr(u"ABCEKLPQRTY", towupper(*rbx_1));
                        }
                        if ((rax_6 != 0 || ((rax_6 == 0 && data_140026489 != 0) && rax_8 != 0)))
                        {
                            r8_1 = sub_14000b804(*rbx_1, 1);
                        }
                        if ((rax_6 == 0 && (data_140026489 == 0 || (data_140026489 != 0 && rax_8 == 0))))
                        {
                            r8_1 = sub_140003898(data_140025c20, 0x400, r8_3);
                        }
                        rbx_1 = &rbx_1[1];
                        _C = *rbx_1;
                        if (_C == 0)
                        {
                            break;
                        }
                    }
                    if (*rbx_1 == 0)
                    {
                        break;
                    }
                }
                if ((rax_4 == 0x2d || rax_4 == 0x2b))
                {
                    rbx_1 = &rbx_1[1];
                    wint_t _C_1 = *rbx_1;
                    if (_C_1 == 0)
                    {
                        break;
                    }
                    while (_C_1 != 0x2b)
                    {
                        wchar16* rax_10;
                        int64_t r8_4;
                        rax_10 = wcschr(u"DINSU", towupper(_C_1));
                        wchar16* rax_12;
                        if ((rax_10 == 0 && data_140026489 != 0))
                        {
                            rax_12 = wcschr(u"ABCEKLMPQRTV", towupper(*rbx_1));
                        }
                        if ((rax_10 != 0 || ((rax_10 == 0 && data_140026489 != 0) && rax_12 != 0)))
                        {
                            r8_1 = sub_14000b804(*rbx_1, 0);
                        }
                        if ((rax_10 == 0 && (data_140026489 == 0 || (data_140026489 != 0 && rax_12 == 0))))
                        {
                            r8_1 = sub_140003898(data_140025c20, 0x400, r8_4);
                        }
                        rbx_1 = &rbx_1[1];
                        _C_1 = *rbx_1;
                        if (_C_1 == 0)
                        {
                            break;
                        }
                    }
                }
                if (*rbx_1 == 0)
                {
                    break;
                }
                rbx_1 = &rbx_1[1];
            } while (*rbx_1 != 0);
        }
        data_140015041 = 1;
        if (rsi != 0)
        {
            free(rdi_1);
        }
        data_140025c20 = (data_140025c20 + 1);
        rax = getwc(data_140026480);
    }
    return rax;
}

int64_t sub_140006490()
{
    wint_t rax;
    int64_t r8;
    rax = sub_140008044(1);
    if ((rax == 0xa || rax == 0xffff))
    {
        sub_140003898(data_140025c20, 0x3fa, r8);
    }
    wint_t rcx_8 = rax;
    int32_t rdi = 0;
    wint_t _Character;
    while (true)
    {
        wint_t _Character_1 = sub_140008128(rcx_8, 1);
        _Character = _Character_1;
        if (_Character_1 == 0x23)
        {
            break;
        }
        if (_Character == 0xa)
        {
            break;
        }
        if (_Character == 0xffff)
        {
            break;
        }
        int64_t rdx_2 = data_1400364a8;
        int64_t rcx_3;
        if ((rdx_2 < 2 || (rdx_2 >= 2 && rdi > (rdx_2 - 2))))
        {
            int64_t rcx_4 = data_1400364b8;
            data_1400364a8 = (rdx_2 + 0x400);
            int64_t rax_3;
            if (rcx_4 != 0)
            {
                rax_3 = sub_140009274(rcx_4, (((rdx_2 + 0x400) << 1) + 2));
            }
            else
            {
                rax_3 = sub_140009214();
            }
            data_1400364b8 = rax_3;
            rcx_3 = rax_3;
        }
        if ((rdx_2 >= 2 && rdi <= (rdx_2 - 2)))
        {
            rcx_3 = data_1400364b8;
        }
        uint64_t rax_4 = rdi;
        rdi = (rdi + 1);
        *(rcx_3 + (rax_4 << 1)) = _Character;
        rcx_8 = getwc(data_140026480);
    }
    *(data_1400364b8 + (rdi << 1)) = 0;
    wint_t _Character_2;
    if (_Character == 0x23)
    {
        do
        {
            _Character_2 = getwc(data_140026480);
            _Character = _Character_2;
            if (_Character_2 == 0xa)
            {
                break;
            }
        } while (_Character != 0xffff);
    }
    if ((((_Character != 0x23 || (_Character == 0x23 && _Character_2 == 0xa)) && _Character == 0xffff) || (_Character == 0x23 && _Character_2 != 0xa)))
    {
        ungetwc(_Character, data_140026480);
    }
    /* tailcall */
    return sub_14000e6a4(data_1400364b8);
}

int16_t* sub_1400065f8(int16_t* arg1, char* arg2)
{
    int16_t i = *arg1;
    *arg2 = 0;
    arg_8 = arg1;
    int16_t* rbx = arg1;
    if (i != 0)
    {
        while (i != 0x20)
        {
            if (i == 9)
            {
                break;
            }
            rbx = &rbx[1];
            i = *rbx;
            if (i == 0)
            {
                break;
            }
        }
        arg_8 = rbx;
    }
    int16_t i_1 = *rbx;
    int64_t rdi_2 = ((rbx - arg1) >> 1);
    if (i_1 != 0)
    {
        while ((!(i_1 != 0x20 && i_1 != 9)))
        {
            rbx = &rbx[1];
            i_1 = *rbx;
            if (i_1 == 0)
            {
                break;
            }
        }
        arg_8 = rbx;
    }
    int32_t rax = _wcsnicmp(arg1, u"INCLUDE", 7);
    if ((rax != 0 || (rax == 0 && rdi_2 != 7)))
    {
        int32_t rax_1 = _wcsnicmp(arg1, u"CMDSWITCHES", 0xb);
        if ((rax_1 != 0 || (rax_1 == 0 && rdi_2 != 0xb)))
        {
            int32_t rax_2 = _wcsnicmp(arg1, u"ERROR", 5);
            if ((rax_2 != 0 || (rax_2 == 0 && rdi_2 != 5)))
            {
                int32_t rax_3 = _wcsnicmp(arg1, u"MESSAGE", 7);
                if ((rax_3 != 0 || (rax_3 == 0 && rdi_2 != 7)))
                {
                    int32_t rax_4 = _wcsnicmp(arg1, u"UNDEF", 5);
                    if ((rax_4 != 0 || (rax_4 == 0 && rdi_2 != 5)))
                    {
                        char rax_5 = sub_140006774(arg1, rdi_2, &arg_8);
                        *arg2 = rax_5;
                        if (rax_5 == 0)
                        {
                            sub_140003898(data_140025c20, 0x3f9, data_1400364b8);
                        }
                        rbx = arg_8;
                    }
                    if ((rax_4 == 0 && rdi_2 == 5))
                    {
                        *arg2 = 0xd;
                    }
                }
                if ((rax_3 == 0 && rdi_2 == 7))
                {
                    *arg2 = 0xc;
                }
            }
            if ((rax_2 == 0 && rdi_2 == 5))
            {
                *arg2 = 0xb;
            }
        }
        if ((rax_1 == 0 && rdi_2 == 0xb))
        {
            *arg2 = 0xa;
        }
    }
    if ((rax == 0 && rdi_2 == 7))
    {
        *arg2 = 9;
    }
    return rbx;
}

uint64_t sub_140006774(wchar16* arg1, int64_t arg2, int64_t* arg3)
{
    char rbx = 0;
    uint64_t rax = _wcsnicmp(arg1, &data_140011f74, 2);
    if ((rax != 0 || (rax == 0 && arg2 != 2)))
    {
        rax = _wcsnicmp(arg1, u"IFDEF", 5);
        if ((rax != 0 || (rax == 0 && arg2 != 5)))
        {
            rax = _wcsnicmp(arg1, u"IFNDEF", 6);
            if ((rax != 0 || (rax == 0 && arg2 != 6)))
            {
                int32_t rax_1 = _wcsnicmp(arg1, u"ELSE", 4);
                if ((rax_1 != 0 || (rax_1 == 0 && arg2 != 4)))
                {
                    rax = _wcsnicmp(arg1, u"ELSEIF", 6);
                    if ((rax != 0 || (rax == 0 && arg2 != 6)))
                    {
                        rax = _wcsnicmp(arg1, u"ELSEIFDEF", 9);
                        if ((rax != 0 || (rax == 0 && arg2 != 9)))
                        {
                            rax = _wcsnicmp(arg1, u"ELSEIFNDEF", 0xa);
                            if ((rax != 0 || (rax == 0 && arg2 != 0xa)))
                            {
                                rax = _wcsnicmp(arg1, u"ENDIF", 5);
                                if (rax == 0)
                                {
                                    rbx = 0;
                                    if (arg2 == 5)
                                    {
                                        rbx = (rax + 8);
                                    }
                                }
                            }
                            if ((rax == 0 && arg2 == 0xa))
                            {
                            label_14000695d:
                                rbx = 5;
                            }
                        }
                        if ((rax == 0 && arg2 == 9))
                        {
                        label_140006939:
                            rbx = 4;
                        }
                    }
                    if ((rax == 0 && arg2 == 6))
                    {
                    label_140006913:
                        rbx = 3;
                    }
                }
                if ((rax_1 == 0 && arg2 == 4))
                {
                    int16_t* _String1_1 = *arg3;
                    rax = *_String1_1;
                    if (rax == 0)
                    {
                        rbx = 2;
                    }
                    else
                    {
                        int16_t* _String1 = _String1_1;
                        while (rax != 0x20)
                        {
                            if (rax == 9)
                            {
                                break;
                            }
                            _String1_1 = &_String1_1[1];
                            rax = *_String1_1;
                            if (rax == 0)
                            {
                                break;
                            }
                        }
                        uint64_t rdi_1 = ((_String1_1 - _String1) >> 1);
                        while (true)
                        {
                            int16_t rax_5 = *_String1_1;
                            if (rax_5 == 0)
                            {
                                break;
                            }
                            if ((rax_5 != 0x20 && rax_5 != 9))
                            {
                                break;
                            }
                            _String1_1 = &_String1_1[1];
                        }
                        *arg3 = _String1_1;
                        rax = _wcsnicmp(_String1, &data_140011f74, 2);
                        if ((rax == 0 && rdi_1 == 2))
                        {
                            goto label_140006913;
                        }
                        rax = _wcsnicmp(_String1, u"IFDEF", 5);
                        if (rax == 0)
                        {
                            if (rdi_1 == 5)
                            {
                                goto label_140006939;
                            }
                            goto label_1400068d9;
                        }
                    label_1400068d9:
                        rax = _wcsnicmp(_String1, u"IFNDEF", 6);
                        if ((rax == 0 && rdi_1 == 6))
                        {
                            goto label_14000695d;
                        }
                    }
                }
            }
            if ((rax == 0 && arg2 == 6))
            {
                rbx = 7;
            }
        }
        if ((rax == 0 && arg2 == 5))
        {
            rbx = 6;
        }
    }
    if ((rax == 0 && arg2 == 2))
    {
        rbx = 1;
    }
    rax = rbx;
    return rax;
}

void sub_1400069a4(int16_t* arg1, char arg2)
{
    if (arg2 != 1)
    {
        bool cond:2_1;
        uint64_t rax;
        if (arg2 != 2)
        {
            if (arg2 <= 2)
            {
                goto label_140006a13;
            }
            if ((arg2 > 5 && arg2 > 7))
            {
                if (arg2 != 8)
                {
                    goto label_140006a13;
                }
                int32_t rax_1 = data_140015044;
                if (rax_1 < 0)
                {
                    sub_140003898(data_140025c20, 0x401, arg1);
                    breakpoint();
                }
                rax = (rax_1 - 1);
                data_140015044 = rax;
                if ((rax_1 - 1) < 0)
                {
                    goto label_140006a13;
                }
                cond:2_1 = (*(rax + &data_1400364c0) & 2) != 0;
            }
            if (arg2 <= 5)
            {
                int64_t rax_2 = data_140015044;
                if (rax_2 >= 0)
                {
                    int64_t rcx_1 = rax_2;
                    rax_2 = *(rax_2 + &data_1400364c0);
                    if ((rax_2 & 9) != 0)
                    {
                        rax_2 = (rax_2 & 0xfe);
                        rax_2 = (rax_2 | 8);
                        *(rcx_1 + &data_1400364c0) = rax_2;
                        if ((rax_2 & 4) != 0)
                        {
                            goto label_140006a09;
                        }
                        if ((rax_2 & 2) == 0)
                        {
                            goto label_140006aef;
                        }
                        rax_2 = (rax_2 & 0xfd);
                        rax_2 = (rax_2 | 4);
                        *(rcx_1 + &data_1400364c0) = rax_2;
                        goto label_140006a09;
                    }
                }
                sub_140003898(data_140025c20, 0x3fd, arg1);
                breakpoint();
            }
        }
        else
        {
            rax = data_140015044;
            if (rax >= 0)
            {
                uint64_t rcx_3 = rax;
                rax = *(rax + &data_1400364c0);
                if ((rax & 9) != 0)
                {
                    rax = (rax & 0xf6);
                    *(rcx_3 + &data_1400364c0) = rax;
                    if ((rax & 4) != 0)
                    {
                        goto label_140006a09;
                    }
                    if ((rax & 2) == 0)
                    {
                        rax = (rax | 2);
                    }
                    else
                    {
                        rax = (rax & 0xfd);
                    }
                    *(rcx_3 + &data_1400364c0) = rax;
                    cond:2_1 = (rax & 2) != 0;
                }
            }
            if ((rax < 0 || (rax >= 0 && (rax & 9) == 0)))
            {
                sub_140003898(data_140025c20, 0x3fd, arg1);
                breakpoint();
            }
        }
        if ((arg2 == 2 || (((arg2 != 2 && arg2 > 2) && arg2 > 5) && arg2 > 7)))
        {
            if (cond:2_1)
            {
                goto label_140006a13;
            }
            goto label_140006a09;
        }
    }
    int32_t rax_3 = data_140015044;
    if (rax_3 == 0xf)
    {
        sub_140003898(data_140025c20, 0x3fb, arg1);
        breakpoint();
    }
    int64_t rcx_6 = (rax_3 + 1);
    data_140015044 = (rax_3 + 1);
    *(rcx_6 + &data_1400364c0) = 1;
    if (rax_3 == 0xffffffff)
    {
    label_140006aef:
        if (sub_14000d1f8(arg1, arg2, arg1) != 0)
        {
            int64_t rax_6 = data_140015044;
            *(rax_6 + &data_1400364c0) = (*(rax_6 + &data_1400364c0) | 2);
            return;
        }
        goto label_140006a09;
    }
    if ((*(rcx_6 + &*(data_1400364b8 + 7)) & 2) != 0)
    {
        goto label_140006aef;
    }
    *(rcx_6 + &data_1400364c0) = 5;
label_140006a09:
    sub_140006b10();
label_140006a13:
}

uint64_t sub_140006b10()
{
    uint64_t rax_1;
    while (true)
    {
        int64_t r8_1;
        rax_1 = getwc(data_140026480);
        if (rax_1 != 0x21)
        {
            while (rax_1 != 0xffff)
            {
                data_140025c20 = (data_140025c20 + 1);
                while (true)
                {
                    if (rax_1 == 0x5c)
                    {
                        rax_1 = sub_140008128(0x5c, 1);
                        if ((rax_1 == 0x21 && data_140015041 != 0))
                        {
                            break;
                        }
                        data_140015041 = 0;
                    }
                    if (rax_1 != 0x23)
                    {
                        if (rax_1 == 0xa)
                        {
                            break;
                        }
                        if (rax_1 == 0xffff)
                        {
                            break;
                        }
                        rax_1 = getwc(data_140026480);
                    }
                    else
                    {
                        while (true)
                        {
                            rax_1 = getwc(data_140026480);
                            if (rax_1 == 0xa)
                            {
                                break;
                            }
                            if (rax_1 == 0xffff)
                            {
                                break;
                            }
                            if ((!(rax_1 != 0xa && rax_1 != 0xffff)))
                            {
                                /* nop */
                            }
                        }
                        if (rax_1 != 0xffff)
                        {
                            break;
                        }
                    }
                }
                if ((rax_1 != 0xa && rax_1 != 0xffff))
                {
                    break;
                }
                if (rax_1 == 0xa)
                {
                    if (rax_1 == 0xffff)
                    {
                        break;
                    }
                    if (rax_1 == 0x21)
                    {
                        break;
                    }
                    rax_1 = getwc(data_140026480);
                    if (rax_1 == 0x21)
                    {
                        break;
                    }
                }
            }
            if ((rax_1 == 0xffff && rax_1 != 0x21))
            {
                if (rax_1 == 0xffff)
                {
                    rax_1 = sub_140003898(data_140025c20, 0x3fc, r8_1);
                }
                break;
            }
        }
        int64_t rcx_5 = data_1400364b0;
        if ((rcx_5 != 0 && rcx_5 != data_1400364b8))
        {
            free(rcx_5);
        }
        int16_t* rax_2 = sub_140006490();
        data_1400364b0 = rax_2;
        rax_1 = sub_1400065f8(rax_2, &arg_8);
        if (arg_8 <= 8)
        {
            break;
        }
        data_140025c20 = (data_140025c20 + 1);
    }
    return rax_1;
}

uint64_t sub_140006c34(wchar16* arg1)
{
    int64_t rbx;
    arg_10 = rbx;
    _Context = arg1;
    data_140025c20 = 0;
    uint64_t rax_2;
    while (true)
    {
        if (fgetws(&data_140025c50, 0x400, data_140026480) == 0)
        {
            int64_t r8_3;
            rax_2 = feof(data_140026480);
            if (rax_2 == 0)
            {
                data_140025c24 = data_140025c20;
                sub_140003898(0, 0x41d, r8_3);
            }
            rax_2 = 0;
            break;
        }
        if (data_140025c50 == 0x5b)
        {
            _Context = nullptr;
            int16_t* _String = &data_140025c52;
            rbx = 0;
            wchar16* _String1;
            while (true)
            {
                _String1 = wcstok_s(_String, &data_140011d20, &_Context);
                if (_String1 == 0)
                {
                    break;
                }
                if (rbx != 0)
                {
                    break;
                }
                int64_t rcx = -1;
                do
                {
                    rcx = (rcx + 1);
                } while (_String1[rcx] != 0);
                if (_String1[(rcx - 1)] == 0x5d)
                {
                    rbx = 1;
                    _String1[(rcx - 1)] = 0;
                }
                if (_wcsicmp(_String1, u"nmake") == 0)
                {
                    break;
                }
                _String = nullptr;
            }
            if (_String1 != 0)
            {
                rax_2 = 1;
                break;
            }
        }
        data_140025c20 = (data_140025c20 + 1);
    }
    return rax_2;
}

int16_t* sub_140006d18(int16_t* arg1, int32_t arg2)
{
    int16_t* rbx = arg1;
    wint_t _Character = sub_14000613c();
    int16_t* rax_1;
    while (true)
    {
        if (_Character != 0)
        {
            if (_Character == 0xffff)
            {
                *rbx = 0;
                rax_1 = nullptr;
                break;
            }
            *rbx = _Character;
            rbx = &rbx[1];
            if (rbx == &arg1[arg2])
            {
                FILE* _Stream = data_140026480;
                rbx[-1] = 0;
                ungetwc(_Character, _Stream);
            }
            else if (_Character == 0xa)
            {
                data_140025c20 = (data_140025c20 + 1);
                data_140015041 = 1;
                *rbx = 0;
            }
            else
            {
                data_140015041 = 0;
                _Character = sub_14000613c();
                continue;
            }
        }
        rax_1 = rbx;
        break;
    }
    return rax_1;
}

wchar16* sub_140006dac(int64_t* arg1)
{
    void* rbx = &data_140036e90;
    uint64_t rdi;
    rdi = 0;
    wchar16* string = *arg1;
    int64_t rsi;
    rsi = 0;
    wchar16* rax_1;
    while (true)
    {
        rax_1 = wcschr(string, 0x3c);
        if (rax_1 == 0)
        {
            break;
        }
        string = &rax_1[1];
        rdi = rdi;
        if (*string == 0x3c)
        {
            rdi = 1;
        }
        if (rdi != 0)
        {
            void* rcx_1 = &string[1];
            uint64_t rdx_1 = *rcx_1;
            if (rdx_1 != 0)
            {
                while ((!(rdx_1 <= 0x3e && (TEST_BITQ(0x5000100000000600, rdx_1)))))
                {
                    if (rdx_1 == 0x5e)
                    {
                        break;
                    }
                    if (rdx_1 == 0x22)
                    {
                        rsi = rsi == 0;
                    }
                    if ((rdx_1 == 0x20 && rsi == 0))
                    {
                        break;
                    }
                    void* rax_2;
                    if (rdx_1 == 0x24)
                    {
                        rax_2 = (rcx_1 + 2);
                        if (*rax_2 == 0x28)
                        {
                            *rbx = 0x24;
                            rcx_1 = rax_2;
                            rbx = (rbx + 2);
                            *rbx = 0x28;
                            int16_t i = *rax_2;
                            if (i == 0xa)
                            {
                                break;
                            }
                            while (i != 0x29)
                            {
                                rcx_1 = (rcx_1 + 2);
                                *rbx = i;
                                rbx = (rbx + 2);
                                i = *rcx_1;
                                if (i == 0xa)
                                {
                                    break;
                                }
                            }
                            if (*rcx_1 == 0xa)
                            {
                                break;
                            }
                        }
                    }
                    if ((rdx_1 != 0x24 || (rdx_1 == 0x24 && *rax_2 != 0x28)))
                    {
                        *rbx = rdx_1;
                        rbx = (rbx + 2);
                        rcx_1 = (rcx_1 + 2);
                    }
                    rdx_1 = *rcx_1;
                    if (rdx_1 == 0)
                    {
                        break;
                    }
                }
            }
            *rbx = 0;
            rax_1 = &data_140036e90;
            *arg1 = rcx_1;
            break;
        }
    }
    return rax_1;
}

int16_t* sub_140006ee0(int16_t* arg1, int64_t* arg2, int64_t* arg3)
{
    void var_888;
    int64_t rax_1 = (__security_cookie ^ &var_888);
    char var_868 = 0;
    int64_t* rdi = arg2;
    int16_t* rsi = arg1;
    wchar16* _Destination_3 = nullptr;
    int64_t r15 = 0;
    wchar16* _Destination_2 = nullptr;
    int16_t _Destination;
    wcscpy_s(&_Destination, 0x400, &data_140012008);
    void var_844;
    if (sub_140006d18(&var_844, 0x3fe) == 0)
    {
        int32_t rax_3;
        int64_t r8;
        rax_3 = feof(data_140026480);
        if (rax_3 != 0)
        {
            r8 = sub_140003898(data_140025c20, 0x409, &data_140012000);
        }
        sub_140003898(data_140025c20, 0x41d, r8);
    }
    int16_t* var_860 = &_Destination;
    int16_t* string = &_Destination;
    while (true)
    {
        wchar16* rax_9 = wcschr(string, 0xa);
        if (rax_9 == 0)
        {
            break;
        }
        if ((rax_9 > &_Destination && rax_9[-1] != 0x5e))
        {
            break;
        }
        if (fgetws(&rax_9[1], (0x400 - ((&rax_9[1] - &_Destination) >> 1)), data_140026480) == 0)
        {
            int32_t rax_8;
            int64_t r8_2;
            rax_8 = feof(data_140026480);
            if (rax_8 != 0)
            {
                r8_2 = sub_140003898(data_140025c20, 0x409, &data_140012000);
            }
            sub_140003898(data_140025c20, 0x41d, r8_2);
        }
        data_140025c20 = (data_140025c20 + 1);
        string = &rax_9[1];
    }
    wchar16* i_2;
    int64_t r8_3;
    i_2 = sub_140006dac(&var_860);
    wchar16* i_1 = i_2;
    if (i_2 != 0)
    {
        wchar16* i;
        do
        {
            char* rax_10 = sub_140009244(0x18);
            *(rax_10 + 8) = sub_14000dcc4(i_1);
            void** j_1 = &data_140036ce0;
            for (void** j = data_140036ce0; j != 0; j = *j)
            {
                j_1 = j;
            }
            *j_1 = rax_10;
            i = sub_140006dac(&var_860);
            i_1 = i;
        } while (i != 0);
        rdi = arg2;
    }
    int64_t rcx_21;
    for (bool cond:0 = data_140036ce0 == 0; (!cond:0); cond:0 = rcx_21 == 0)
    {
        while (true)
        {
            int16_t* rbx_3 = &_Destination;
            do
            {
                int16_t rax_12 = *rbx_3;
                rbx_3 = &rbx_3[1];
                *rsi = rax_12;
                rsi = &rsi[1];
                if (rsi == *arg3)
                {
                    void* rax_15;
                    if (_Destination_2 != 0)
                    {
                        int64_t rdi_2 = (r15 + 0x400);
                        wchar16* _Destination_4;
                        if (rdi_2 >= r15)
                        {
                            _Destination_4 = sub_140009274(_Destination_2, (rdi_2 * 2));
                            _Destination_3 = _Destination_4;
                        }
                        if ((rdi_2 < r15 || (rdi_2 >= r15 && _Destination_4 == 0)))
                        {
                            r8_3 = sub_140003898(data_140025c20, 0x419, r8_3);
                        }
                        rsi = &_Destination_3[r15];
                        _Destination_2 = _Destination_3;
                        r15 = rdi_2;
                        rax_15 = &_Destination_3[rdi_2];
                        rdi = arg2;
                    }
                    else
                    {
                        wchar16* _Destination_1 = sub_140009214();
                        _Destination_2 = _Destination_1;
                        r8_3 = wcsncpy_s(_Destination_1, 0x800, *rdi, 0x400);
                        rsi = &_Destination_2[0x400];
                        r15 = 0x800;
                        rax_15 = &_Destination_2[0x800];
                    }
                    *arg3 = rax_15;
                    *rdi = _Destination_2;
                }
            } while (*rbx_3 != 0);
            int16_t var_846;
            if ((var_868 != 0 && (_Destination == 0x3c && var_846 == 0x3c)))
            {
                break;
            }
            var_868 = 1;
            int16_t* rax_20;
            rax_20 = sub_140006d18(&_Destination, 0x400);
            if (rax_20 == 0)
            {
                int32_t rax_21;
                int64_t r8_6;
                rax_21 = feof(data_140026480);
                if (rax_21 != 0)
                {
                    r8_6 = sub_140003898(data_140025c20, 0x409, &data_140012000);
                }
                r8_3 = sub_140003898(data_140025c20, 0x41d, r8_6);
            }
        }
        if (**&data_140036ce0 != 0)
        {
            int16_t* rax_17;
            rax_17 = sub_140006d18(&_Destination, 0x400);
            if (rax_17 == 0)
            {
                int32_t rax_18;
                int64_t r8_5;
                rax_18 = feof(data_140026480);
                if (rax_18 != 0)
                {
                    r8_5 = sub_140003898(data_140025c20, 0x409, &data_140012000);
                }
                r8_3 = sub_140003898(data_140025c20, 0x41d, r8_5);
            }
        }
        rcx_21 = **&data_140036ce0;
        data_140036ce0 = rcx_21;
    }
    *rsi = 0;
    __security_check_cookie((rax_1 ^ &var_888));
    return rsi;
}

int64_t sub_140007294(int64_t* arg1, wchar16* arg2)
{
    int64_t var_28 = (__security_cookie ^ &var_28);
    int16_t* rdi = *arg1;
    int64_t rbx = -1;
    int64_t r8 = -1;
    do
    {
        r8 = (r8 + 1);
    } while (rdi[r8] != 0);
    int64_t rax_2 = -1;
    do
    {
        rax_2 = (rax_2 + 1);
    } while (arg2[rax_2] != 0);
    rsize_t _SizeInWords = ((rax_2 - 1) + r8);
    int64_t rax_3 = (_SizeInWords * 2);
    int64_t rcx = (rax_3 + 0xf);
    if (rcx <= rax_3)
    {
        rcx = 0xffffffffffffff0;
    }
    int64_t rcx_1 = (rcx & 0xfffffffffffffff0);
    __chkstk(rcx_1);
    void var_48;
    void* rax_5 = ((&var_48 - rcx_1) + 0x20);
    while (true)
    {
        int16_t rcx_2 = *rdi;
        if (rcx_2 != 0x3c)
        {
            *rax_5 = rcx_2;
        }
        else
        {
            if (rdi[1] == 0x3c)
            {
                *rax_5 = 0;
                wcscat_s(((&var_48 - rcx_1) + 0x20), _SizeInWords, arg2);
                wcscat_s(((&var_48 - rcx_1) + 0x20), _SizeInWords, &rdi[2]);
                do
                {
                    rbx = (rbx + 1);
                } while (*(((&var_48 - rcx_1) + 0x20) + (rbx << 1)) != 0);
                wchar16* _Destination = sub_140009274(*arg1, ((rbx + 1) * 2));
                *arg1 = _Destination;
                int64_t rax_6 = wcscpy_s(_Destination, (rbx + 1), ((&var_48 - rcx_1) + 0x20));
                __security_check_cookie((var_28 ^ &var_28));
                return rax_6;
            }
            *rax_5 = 0x3c;
        }
        rdi = &rdi[1];
        rax_5 = (rax_5 + 2);
    }
}

wchar16* sub_1400073bc(FILE* arg1, int64_t arg2, int64_t* arg3, char arg4, char* arg5)
{
    int64_t rdi = arg2;
    FILE* _Stream = arg1;
    wchar16* i_1;
    i_1 = arg4;
    int64_t* rsi = arg3;
    int64_t r14;
    r14 = 1;
    wchar16* rax = wcsstr(*arg3, &data_140012008);
    char var_58 = 0;
    int64_t r15;
    r15 = 0;
    wchar16* var_50;
    if ((rax != 0 && (rax == *rsi || (rax != *rsi && rax[-1] == 0xa))))
    {
        wchar16* rax_1 = wcschr(&rax[2], 0xa);
        if (rax_1 != 0)
        {
            *rax_1 = 0;
        }
        int32_t* _String = sub_14000dcc4(&rax[2]);
        if (rax_1 != 0)
        {
            *rax_1 = 0xa;
        }
        var_50 = nullptr;
        wchar16* i_2 = wcstok_s(_String, &data_1400120b8, &var_50);
        i_1 = i_2;
        if (i_2 != 0)
        {
            wchar16* i;
            do
            {
                if (_wcsicmp(i_1, u"keep") == 0)
                {
                    *arg5 = 1;
                }
                else if (_wcsicmp(i_1, u"nokeep") == 0)
                {
                    *arg5 = 0;
                }
                else
                {
                    int32_t rax_4;
                    int64_t r8_1;
                    rax_4 = _wcsicmp(i_1, u"unicode");
                    if (rax_4 != 0)
                    {
                        sub_140003898(data_140025c20, 0x446, r8_1);
                    }
                    else
                    {
                        r15 = 1;
                    }
                }
                i = wcstok_s(nullptr, &data_1400120b8, &var_50);
                i_1 = i;
            } while (i != 0);
            var_58 = r15;
        }
        free(_String);
        if (r15 != 0)
        {
            fwrite(&data_1400120b4, 2, 1, _Stream);
        }
        i_1 = arg4;
        rdi = arg2;
    }
    wchar16* rax_5 = wcsncmp(*rsi, &data_140012008, 2);
    if (rax_5 != 0)
    {
        while (true)
        {
            rax_5 = wcschr(*rsi, 0xa);
            if (rax_5 == 0)
            {
                return rax_5;
            }
            if (i_1 != 0)
            {
                void* _Source = *rsi;
                *rax_5 = 0;
                i_1 = _Source;
                int32_t rax_6;
                if (*_Source != 0)
                {
                    do
                    {
                        rax_6 = iswspace(*i_1);
                        if (rax_6 == 0)
                        {
                            break;
                        }
                        i_1 = &i_1[1];
                    } while (*i_1 != 0);
                }
                if ((*_Source == 0 || (*_Source != 0 && rax_6 != 0)))
                {
                    void* const rdx = &data_140012028;
                    if (r14 == 0 != 0)
                    {
                        rdx = &data_140012020;
                    }
                    sub_14000bfe0(u"\techo. %s %s\n", rdx);
                }
                if ((*_Source != 0 && rax_6 == 0))
                {
                    int64_t rax_7 = -1;
                    do
                    {
                        rax_7 = (rax_7 + 1);
                    } while (*(rdi + (rax_7 << 1)) != 0);
                    while (*_Source != 0)
                    {
                        wcsncpy_s(&data_14003d150, 0x400, _Source, (0x400 - (rax_7 + 0xc)));
                        int64_t rax_9 = -1;
                        void* rbx_1 = -ffffffffffffffff;
                        do
                        {
                            rbx_1 = (rbx_1 + 1);
                        } while (&data_14003d150[rbx_1] != 0);
                        do
                        {
                            rax_9 = (rax_9 + 1);
                        } while (*(_Source + (rax_9 << 1)) != 0);
                        if ((0x400 - (rax_7 + 0xc)) < rax_9)
                        {
                            int16_t* rdi_3 = &data_14003d150;
                            if (data_14003d150 != 0)
                            {
                                do
                                {
                                    if (iswspace(*rdi_3) != 0)
                                    {
                                        rbx_1 = ((&rdi_3[-0xa001e8a8] >> 1) + 1);
                                    }
                                    rdi_3 = &rdi_3[1];
                                } while (*rdi_3 != 0);
                                rsi = arg3;
                            }
                            rdi = arg2;
                        }
                        i_1 = (rbx_1 * 2);
                        if (i_1 >= 0x800)
                        {
                            _lockexit();
                            breakpoint();
                        }
                        *(i_1 + &data_14003d150) = 0;
                        sub_14000bfe0(u"\techo %s %s %s\n", &data_14003d150);
                        _Source = (_Source + i_1);
                    }
                    _Stream = arg1;
                }
                *rax_5 = 0xa;
            }
            void* const _Buffer;
            uint64_t _ElementSize;
            if (var_58 != 0)
            {
                fwrite(*rsi, ((rax_5 - *rsi) >> 1), 2, _Stream);
                _ElementSize = 4;
                _Buffer = &data_1400120b0;
            }
            else
            {
                for (i_1 = *rsi; i_1 < rax_5; i_1 = &i_1[1])
                {
                    int32_t rax_11 = WideCharToMultiByte(0, 0, i_1, 1, &var_50, 4, nullptr, nullptr);
                    if (rax_11 != 0)
                    {
                        fwrite(&var_50, rax_11, 1, _Stream);
                    }
                }
                _ElementSize = 2;
                _Buffer = &data_1400120ac;
            }
            fwrite(_Buffer, _ElementSize, 1, _Stream);
            *rsi = &rax_5[1];
            r14 = 0;
            rax_5 = wcsncmp(&rax_5[1], &data_140012008, 2);
            if (rax_5 == 0)
            {
                break;
            }
            i_1 = arg4;
        }
    }
    *rsi = (*rsi + 4);
    return rax_5;
}

int32_t* sub_1400077d0(wchar16* arg1, int32_t** arg2, int64_t** arg3, char arg4)
{
    void var_4b8;
    int64_t rax_1 = (__security_cookie ^ &var_4b8);
    int32_t* rbx = arg1;
    wchar16* rax_2 = wcschr(arg1, 0xa);
    int32_t* i;
    if (rax_2 == 0)
    {
        *arg2 = sub_14000dcc4(rbx);
        i = 0;
    }
    else
    {
        *rax_2 = 0;
        *arg2 = sub_14000e740(rbx, 0xff, arg3);
        *rax_2 = 0xa;
        if (*arg2 == rbx)
        {
            *arg2 = sub_14000dcc4(rbx);
        }
        int32_t* var_478 = *arg2;
        int32_t* string_3 = sub_14000e740(&rax_2[1], 0xff, arg3);
        int32_t* string_2 = string_3;
        for (i = sub_140006dac(&var_478); i != 0; i = sub_140006dac(&var_478))
        {
            char var_488 = 0;
            int32_t* rax_6 = sub_14000dcc4(i);
            int32_t* r12_1 = rax_6;
            FILE* _Stream;
            if (*rax_6 != 0)
            {
                FILE* _Stream_1 = sub_14000fd2c(rax_6, &data_140012018);
                _Stream = _Stream_1;
                if (_Stream_1 == 0)
                {
                    sub_140003898(data_140025c20, 0x41e, r12_1);
                }
                else
                {
                    int32_t* string = *arg2;
                    wchar16* rax_13;
                    do
                    {
                        rax_13 = wcschr(string, 0x3c);
                        string = &rax_13[1];
                    } while (*string != 0x3c);
                    int64_t r8_6 = -1;
                    do
                    {
                        r8_6 = (r8_6 + 1);
                    } while (rax_13[(2 + r8_6)] != 0);
                    memmove(rax_13, &rax_13[2], ((r8_6 << 1) + 2));
                }
            }
            else
            {
                uint64_t _RequiredCount = 0;
                wchar16 var_468;
                errno_t rax_7 = _wgetenv_s(&_RequiredCount, &var_468, 0x103, &data_1400120a0);
                if ((rax_7 != 0 || (rax_7 == 0 && _RequiredCount == 0)))
                {
                    wcscpy_s(&var_468, 0x103, &data_1400120a8);
                }
                _Stream = nullptr;
                void var_258;
                if (GetTempFileNameW(&var_468, &data_140012010, 0, &var_258) != 0)
                {
                    wcscpy_s(&var_468, 0x103, &var_258);
                    _Stream = _wfsopen(&var_468, &data_140012018, 0x20);
                }
                if (_Stream == 0)
                {
                    sub_140003898(data_140025c20, 0x41e, &var_468);
                }
                if (wcschr(&var_468, 0x20) != 0)
                {
                    wchar16* rax_11 = wcschr(&var_468, 0x22);
                    if (rax_11 == 0)
                    {
                        int64_t rdi_1 = -1;
                        do
                        {
                            rdi_1 = (rdi_1 + 1);
                        } while (&var_468[rdi_1] != rax_11);
                        int64_t rbx_1 = (rdi_1 * 2);
                        void var_466;
                        memmove(&var_466, &var_468, rbx_1);
                        var_468 = 0x22;
                        *(&var_466 + rbx_1) = 0x22;
                        if (((rdi_1 << 1) + 4) >= 0x206)
                        {
                            _lockexit();
                            breakpoint();
                        }
                        *(&var_468 + ((rdi_1 << 1) + 4)) = 0;
                    }
                }
                sub_140007294(arg2, &var_468);
                free(r12_1);
                r12_1 = sub_14000dcc4(&var_468);
            }
            var_478 = *arg2;
            sub_1400073bc(_Stream, r12_1, &string_2, arg4, &var_488);
            int32_t* string_1 = string_2;
            wchar16* rax_15 = wcschr(string_1, 0xa);
            void* string_4;
            if (rax_15 != 0)
            {
                string_4 = &rax_15[1];
            }
            else
            {
                int64_t rax_16 = -1;
                do
                {
                    rax_16 = (rax_16 + 1);
                } while (*(string_1 + (rax_16 << 1)) != 0);
                string_4 = (string_1 + (rax_16 << 1));
            }
            string_2 = string_4;
            fclose(_Stream);
            if (var_488 == 0)
            {
                int64_t* rax_17 = sub_14000dc58();
                rax_17[1] = sub_14000dcc4(r12_1);
                void** j_1 = &data_140036e88;
                for (void** j = data_140036e88; j != 0; j = *j)
                {
                    j_1 = j;
                }
                *j_1 = rax_17;
            }
            free(r12_1);
        }
        if (string_3 != &rax_2[1])
        {
            free(string_3);
        }
        i = 1;
    }
    __security_check_cookie((rax_1 ^ &var_4b8));
    return i;
}

int64_t sub_140007b64(char arg1)
{
    int64_t rbx;
    rbx = arg1;
    while (true)
    {
        data_140015041 = 0;
        while (true)
        {
            int64_t rax_1;
            if (rbx == 0)
            {
                rax_1 = sub_14000613c();
            }
            else
            {
                rax_1 = getwc(data_140026480);
            }
            if (rax_1 != 0xffff)
            {
                if (rax_1 != 0xa)
                {
                    continue;
                }
                else
                {
                    data_140015041 = 1;
                    wint_t _Character;
                    if (rbx == 0)
                    {
                        _Character = sub_14000613c();
                    }
                    else
                    {
                        _Character = getwc(data_140026480);
                    }
                    if ((_Character == 0x3b && data_140026489 != 0))
                    {
                        break;
                    }
                    if (_Character == 0x23)
                    {
                        break;
                    }
                    rax_1 = ungetwc(_Character, data_140026480);
                }
            }
            return rax_1;
        }
        data_140025c20 = (data_140025c20 + 1);
    }
}

int64_t sub_140007bf0(int16_t arg1)
{
    int64_t r8;
    if ((arg1 == 0xa || arg1 == 0xffff))
    {
        sub_140003898(data_140025c20, 0x407, r8);
    }
    FILE* _Stream = data_140026480;
    data_140025c50 = arg1;
    if (fgetws(&data_140025c52, 0x3ff, _Stream) == 0)
    {
        int32_t rax_1;
        int64_t r8_1;
        rax_1 = feof(data_140026480);
        if (rax_1 != 0)
        {
            r8_1 = sub_140003898(data_140025c20, 0x409, &data_140012000);
        }
        sub_140003898(data_140025c20, 0x41d, r8_1);
    }
    int16_t* rcx_4 = &data_140025c50;
    int64_t rax_2 = -1;
    do
    {
        rax_2 = (rax_2 + 1);
    } while (&data_140025c50[rax_2] != 0);
    int64_t rax_4 = ((rax_2 - 1) * 2);
    if (*(rax_4 + &data_140025c50) == 0xa)
    {
        if (rax_4 >= 0x800)
        {
            _lockexit();
            breakpoint();
        }
        *(rax_4 + &data_140025c50) = 0;
    }
    while ((!(*rcx_4 != 0x20 && *rcx_4 != 9)))
    {
        rcx_4 = &rcx_4[1];
    }
    /* tailcall */
    return sub_140008bcc(rcx_4);
}

void* const* sub_140007cc8(wint_t arg1, void* arg2, int64_t arg3)
{
    void* rdi = arg2;
    arg2 = data_140015041;
    void* const* rax;
    while (true)
    {
        uint32_t r9_1 = arg1;
        if ((((r9_1 == 0x5b && data_140026489 == 0) || r9_1 == 0x5e) || ((r9_1 == 0x5b && data_140026489 != 0) && arg2 == 0)))
        {
            ungetwc(arg1, data_140026480);
            rdi = (rdi - 2);
        label_140007ea5:
            sub_140008874((rdi - 2), arg3);
            wint_t _Character;
            if (data_140015041 != 0)
            {
                rax = _wcsicmp(&data_140025c50, u"include");
                if (rax == 0)
                {
                    data_140015041 = 0;
                    _Character = sub_140008044(0);
                    if ((_Character == 0x3a || _Character == 0x3d))
                    {
                        ungetwc(_Character, data_140026480);
                    }
                    if ((_Character != 0x3a && _Character != 0x3d))
                    {
                        if (data_140026489 != 0)
                        {
                            sub_140003898(data_140025c20, 0x409, rdi);
                        }
                        rax = sub_140007bf0(_Character);
                    }
                }
            }
            if ((data_140015041 == 0 || (data_140015041 != 0 && rax != 0)))
            {
                data_140015041 = 0;
            }
            if (((data_140015041 == 0 || (data_140015041 != 0 && rax != 0)) || ((data_140015041 != 0 && rax == 0) && (_Character == 0x3a || _Character == 0x3d))))
            {
                rax = 0x10;
            }
            break;
        }
        int64_t r8;
        if (r9_1 == 0xffff)
        {
            rax = feof(data_140026480);
            if (rax == 0)
            {
                rax = sub_140003898(data_140025c20, 0x40e, r8);
            }
        }
        if ((((r9_1 == 0x5b && data_140026489 != 0) && arg2 != 0) || ((r9_1 == 0xffff && data_140036ce8 == 0) && data_140015044 < 0)))
        {
            rax = 0x17;
            break;
        }
        if (((r9_1 == 0xffff && data_140036ce8 == 0) && data_140015044 >= 0))
        {
            sub_140003898(data_140025c20, 0x3fc, r8);
        }
        int32_t rax_7;
        if ((((r9_1 == 0xffff && data_140036ce8 == 0) && data_140015044 >= 0) || r9_1 == 0xa))
        {
            rax_7 = data_140025c20;
        }
        if ((r9_1 == 0xffff && data_140036ce8 != 0))
        {
            if (fclose(data_140026480) == 0xffff)
            {
                sub_140003898(0, 0x424, data_140026490);
            }
            free(data_140026490);
            int32_t rax_3 = (data_140036ce8 - 1);
            data_140036ce8 = rax_3;
            int64_t rcx_4 = (rax_3 * 3);
            data_140026480 = *((rcx_4 << 3) + 0x140036d00);
            data_140026490 = *((rcx_4 << 3) + &data_140036cf8);
            rax_7 = *(&data_140036cf0 + (rcx_4 << 3));
        }
        int64_t rbx;
        if (((((r9_1 == 0xffff && data_140036ce8 == 0) && data_140015044 >= 0) || r9_1 == 0xa) || (r9_1 == 0xffff && data_140036ce8 != 0)))
        {
            data_140015041 = 1;
            data_140025c20 = (rax_7 + 1);
            rax = sub_14000613c();
            arg1 = rax;
            if (((rax == 0x3b && data_140026489 != 0) || ((rax != 0x3b || (rax == 0x3b && data_140026489 == 0)) && arg1 == 0x23)))
            {
                sub_140007b64(0);
                data_140025c20 = (data_140025c20 + 1);
                data_140015041 = 1;
                rax = sub_14000613c();
                arg1 = rax;
            }
            if ((arg1 != 0x20 && arg1 != 9))
            {
                arg2 = 1;
                data_140015041 = 1;
                if (arg1 == 0xffff)
                {
                    continue;
                }
                else
                {
                    rbx = 0x11;
                }
            label_140007e6c:
                ungetwc(arg1, data_140026480);
                rax = rbx;
                break;
            }
            rax = 0x12;
            goto label_140007f5f;
        }
        if (((((((r9_1 != 0xa && r9_1 != 0x3a) && r9_1 != 0x3b) && r9_1 != 0x3d) && r9_1 != 0x5b) && r9_1 != 0x5e) && r9_1 != 0xffff))
        {
            goto label_140007ea5;
        }
        if (r9_1 == 0x3d)
        {
            rax = 0x16;
            goto label_140007f5f;
        }
        if (r9_1 == 0x3b)
        {
            rax = 0x13;
        label_140007f5f:
            data_140015041 = 0;
            break;
        }
        if (r9_1 == 0x3a)
        {
            data_140015041 = 0;
            arg1 = sub_14000613c();
            if (arg1 == 0x3a)
            {
                *rdi = 0x3a;
                rax = 0x15;
                break;
            }
            rbx = 0x14;
            goto label_140007e6c;
        }
    }
    return rax;
}

void** sub_140007f84(char arg1, char arg2)
{
    int64_t rbx;
    rbx = arg2;
    void** rax;
    wint_t rcx;
    int16_t* rdx;
    if (data_14002648a != 0)
    {
        data_140025c20 = (data_140025c20 + 1);
        data_14002648a = 0;
        rax = sub_14000613c();
        if ((rax == 0x20 || rax == 9))
        {
            data_140015041 = 0;
            rax = 0x12;
        }
        if ((rax != 0x20 && rax != 9))
        {
            rcx = -1;
            data_140015041 = 1;
            if (rax != 0xffff)
            {
                ungetwc(rax, data_140026480);
                rax = 0x11;
            }
        }
        if (rax == 0xffff)
        {
            rdx = &data_140025c50;
        }
    }
    else if ((rbx - 0x18) <= 1)
    {
        sub_1400081f0(rbx, arg2, &data_140026450);
        rax = rbx;
    }
    else
    {
        wint_t rax_2 = sub_140008044(0);
        data_140025c50 = rax_2;
        rdx = &data_140025c52;
        rcx = rax_2;
        data_140025c52 = 0;
    }
    if (((data_14002648a == 0 && (rbx - 0x18) > 1) || (data_14002648a != 0 && rax == 0xffff)))
    {
        rax = sub_140007cc8(rcx, rdx, &data_140026450);
    }
    return rax;
}

uint64_t sub_140008044(char arg1)
{
    int64_t rbx;
    rbx = arg1;
    uint64_t rax_1;
    while (true)
    {
        if (rbx == 0)
        {
            rax_1 = sub_14000613c();
        }
        else
        {
            rax_1 = getwc(data_140026480);
        }
        if (((rax_1 == 0x20 || rax_1 == 9) || rax_1 == 0x5e))
        {
            if (rax_1 == 0x5e)
            {
                if (rbx == 0)
                {
                    rax_1 = sub_14000613c();
                }
                else
                {
                    rax_1 = getwc(data_140026480);
                }
                if ((rax_1 != 0x20 && rax_1 != 9))
                {
                    ungetwc(rax_1, data_140026480);
                    rax_1 = 0x5e;
                    break;
                }
            }
            data_140015041 = 0;
        }
        if (rax_1 == 0x5c)
        {
            rax_1 = sub_140008128(0x5c, rbx);
        }
        if (rax_1 == 0x20)
        {
            continue;
        }
        if ((rax_1 != 0x20 && rax_1 != 9))
        {
            break;
        }
        if (rax_1 != 9)
        {
            /* nop */
        }
    }
    if (rax_1 == 0x3b)
    {
        if (data_140015041 == 0)
        {
            goto label_140008124;
        }
        if (data_140026489 != 0)
        {
            goto label_140008104;
        }
    }
    if (rax_1 != 0x23)
    {
        goto label_140008124;
    }
label_140008104:
    sub_140007b64(rbx);
    rax_1 = 0xa;
    data_140015041 = 1;
label_140008124:
    return rax_1;
}

uint64_t sub_140008128(wint_t arg1, char arg2)
{
    int64_t rbx;
    rbx = arg2;
    uint64_t rax_3;
    while (true)
    {
        if (arg1 != 0x5c)
        {
            rax_3 = arg1;
            break;
        }
        wint_t _Character;
        if (rbx == 0)
        {
            _Character = sub_14000613c();
        }
        else
        {
            _Character = getwc(data_140026480);
        }
        if (_Character != 0xa)
        {
            ungetwc(_Character, data_140026480);
            rax_3 = 0x5c;
            break;
        }
        data_140025c20 = (data_140025c20 + 1);
        data_140015041 = 1;
        wint_t rax_1;
        if (rbx == 0)
        {
            rax_1 = sub_14000613c();
        }
        else
        {
            rax_1 = getwc(data_140026480);
        }
        arg1 = rax_1;
        if (((rax_1 != 0x3b || (rax_1 == 0x3b && data_140026489 == 0)) && arg1 != 0x23))
        {
            continue;
        }
        arg1 = rbx;
        sub_140007b64(arg1);
        data_140025c20 = (data_140025c20 + 1);
        wint_t rax_2;
        if (rbx == 0)
        {
            rax_2 = sub_14000613c();
        }
        else
        {
            rax_2 = getwc(data_140026480);
        }
        arg1 = rax_2;
    }
    return rax_3;
}

int32_t* sub_1400081f0(char arg1, char arg2, void* arg3)
{
    arg_18 = arg3;
    arg_10 = arg2;
    int16_t* rbx = &data_140025c50;
    int64_t r12 = 0;
    arg_10 = 0;
    int64_t r13 = 0;
    _Source_1 = &data_140025c50;
    int16_t* _Source = &data_140025c50;
    void* r15 = arg3;
    int64_t rdi;
    rdi = arg1;
    uint32_t rsi = sub_14000613c();
    wint_t rax_1;
    char rbp;
    if (rdi == 0x18)
    {
        rbp = 2;
    }
    else
    {
        wint_t _Character;
        if (rsi == 0x5e)
        {
            _Character = sub_14000613c();
        }
        if ((((rsi == 0x20 || rsi == 9) || (rsi == 0x5e && _Character == 0x20)) || (rsi == 0x5e && _Character == 9)))
        {
            rbp = 2;
            rax_1 = sub_140008044(0);
            goto label_140008295;
        }
        if (((rsi == 0x5e && _Character != 0x20) && _Character != 9))
        {
            ungetwc(_Character, data_140026480);
            rsi = 0x5e;
        }
        if ((((rsi == 0x5e && _Character != 0x20) && _Character != 9) || ((rsi != 0x20 && rsi != 9) && rsi != 0x5e)))
        {
            rbp = 1;
        }
    }
    while (true)
    {
        int64_t r8 = 0x3c;
        if (rsi != 0x22)
        {
            rax_1 = arg_10;
        }
        else
        {
            rax_1 = arg_10 == 0;
            arg_10 = rax_1;
        }
        if (rsi != 0x5e)
        {
            goto label_1400084f0;
        }
        if ((rax_1 == 0 && rdi == 0x19))
        {
            int16_t rax_2;
            rax_2 = sub_14000613c();
            rsi = rax_2;
            if (rsi > 0x2d)
            {
                if (rsi == 0x40)
                {
                label_140008357:
                    *rbx = 0x5e;
                    rbx = &rbx[1];
                    if (rbx == r15)
                    {
                        int64_t rcx_3 = data_140025c30;
                        if (rcx_3 != 0)
                        {
                            rdi = (r13 + 0x400);
                            int64_t rax_7;
                            if (rdi >= r13)
                            {
                                rax_7 = sub_140009274(rcx_3, (rdi * 2));
                                r12 = rax_7;
                            }
                            if ((rdi < r13 || (rdi >= r13 && rax_7 == 0)))
                            {
                                r8 = sub_140003898(data_140025c20, 0x419, r8);
                            }
                            data_140025c30 = r12;
                            rbx = (r12 + (r13 << 1));
                            r15 = (r12 + (rdi << 1));
                        }
                        else
                        {
                            rdi = 0x800;
                            wchar16* _Destination = sub_140009214();
                            data_140025c30 = _Destination;
                            r8 = wcsncpy_s(_Destination, 0x800, _Source, 0x400);
                            void* rax_6 = data_140025c30;
                            rbx = (rax_6 + 0x800);
                            r15 = (rax_6 + 0x1000);
                        }
                        _Source = data_140025c30;
                        r13 = rdi;
                        _Source_1 = _Source;
                        arg_18 = r15;
                    }
                    goto label_140008419;
                }
                if (rsi == 0x5c)
                {
                label_140008419:
                    rdi = 0;
                    goto label_140008432;
                }
                if ((rsi - 0x5e) > 0x1f)
                {
                    goto label_1400084e3;
                }
                if ((!(TEST_BITD(0xa0000001, (rsi - 0x5e)))))
                {
                    goto label_1400084e3;
                }
                goto label_140008357;
            }
            if (rsi == 0x2d)
            {
                goto label_140008357;
            }
            if (rsi == 0xa)
            {
                goto label_140008419;
            }
            if (rsi == 0x21)
            {
                goto label_140008357;
            }
            if (rsi <= 0x21)
            {
                goto label_1400084e3;
            }
            if (rsi <= 0x23)
            {
                goto label_140008419;
            }
            if (((rsi - 0x24) & 0xfffffffa) != 0)
            {
                goto label_1400084e3;
            }
            if (rsi == 0x25)
            {
                goto label_1400084e3;
            }
            goto label_140008357;
        }
        ungetwc(sub_14000613c(), data_140026480);
        rsi = 0x5e;
    label_1400084e3:
        r8 = 0x3c;
    label_1400084f0:
        uint32_t rcx_20 = rsi;
        if (rcx_20 > 0x3b)
        {
            if (rcx_20 > 0x44)
            {
                if (rcx_20 == 0x46)
                {
                label_1400085c0:
                    rdi = 0xd;
                label_1400085c3:
                    if (rdi == 0xc)
                    {
                        r8 = 0x3c;
                        goto label_1400085d3;
                    }
                    if (rdi != 1)
                    {
                        goto label_140008432;
                    }
                    rdi = arg1;
                    goto label_1400086f3;
                }
                if (rcx_20 == 0x52)
                {
                    goto label_1400085c0;
                }
                if (rcx_20 == 0x5c)
                {
                    rdi = 3;
                    goto label_140008432;
                }
                if (rcx_20 == 0xffff)
                {
                    goto label_1400086a1;
                }
            label_14000866a:
                if (rsi < 0x80)
                {
                    rcx_20 = *(rsi + &data_140011640);
                    rcx_20 = (rcx_20 & 1);
                    goto label_140008693;
                }
                int32_t rax_13;
                rax_13 = iswspace(rsi);
                rcx_20 = rax_13 == 0;
            label_140008693:
                char temp7_1 = rcx_20;
                rcx_20 = (-rcx_20);
                rdi = (rdi - rdi);
                rdi = (rdi & 0xa);
                goto label_1400085c3;
            }
            if (rcx_20 == 0x44)
            {
                goto label_1400085c0;
            }
            if (rcx_20 == 0x3c)
            {
            label_140008641:
                rdi = 0xc;
            label_1400085d3:
                if (arg1 != 0x18)
                {
                    goto label_140008432;
                }
                if (rsi != 0x3c)
                {
                    goto label_140008432;
                }
                wint_t _Character_2 = sub_14000613c();
                if (_Character_2 != 0x3c)
                {
                    r8 = ungetwc(_Character_2, data_140026480);
                }
                else
                {
                    int16_t* rax_11;
                    rax_11 = sub_140006ee0(rbx, &_Source_1, &arg_18);
                    data_140025c20 = (data_140025c20 - 1);
                    rbx = rax_11;
                    r15 = arg_18;
                    rdi = 6;
                    _Source = _Source_1;
                    rsi = 0xa;
                }
                rbp = *(((rbp * 0xe) + rdi) + 0x140011a90);
            label_14000843a:
                if (rbp == 0x40)
                {
                label_140008803:
                    ungetwc(rsi, data_140026480);
                    if (rbx > _Source)
                    {
                        void* rdi_1;
                        do
                        {
                            rdi_1 = &rbx[-1];
                            if (iswspace(*rdi_1) == 0)
                            {
                                break;
                            }
                            rbx = rdi_1;
                        } while (rdi_1 > _Source);
                    }
                    int64_t rcx_33 = data_140025c30;
                    *rbx = 0;
                    int32_t* rax_21;
                    if (rcx_33 == 0)
                    {
                        rax_21 = sub_14000dcc4(_Source);
                    }
                    else
                    {
                        rax_21 = sub_140009274(rcx_33, ((((rbx - rcx_33) >> 1) << 1) + 2));
                    }
                    if ((rcx_33 == 0 || (rcx_33 != 0 && rax_21 != 0)))
                    {
                        data_140025c30 = rax_21;
                    }
                    return rax_21;
                }
                if ((0x20 & rbp) != 0)
                {
                    r8 = sub_140003898(data_140025c20, ((rbp & 0xffffffdf) + 0x3e8), rsi);
                }
                if (rbp != 0)
                {
                    *rbx = rsi;
                    rbx = &rbx[1];
                    if (rbx == r15)
                    {
                        if (data_140025c30 != 0)
                        {
                            rdi = (r13 + 0x400);
                            int64_t rax_19;
                            if (rdi >= r13)
                            {
                                rax_19 = sub_140009274(data_140025c30, (rdi * 2));
                                r12 = rax_19;
                                if (rax_19 != 0)
                                {
                                    data_140025c30 = rax_19;
                                    rbx = (rax_19 + (r13 << 1));
                                    r15 = (rax_19 + (rdi << 1));
                                }
                            }
                            if ((rdi < r13 || (rdi >= r13 && rax_19 == 0)))
                            {
                                sub_140003898(data_140025c20, 0x419, r8);
                                breakpoint();
                            }
                        }
                        else
                        {
                            rdi = 0x800;
                            wchar16* _Destination_1 = sub_140009214();
                            data_140025c30 = _Destination_1;
                            wcsncpy_s(_Destination_1, 0x800, _Source, 0x400);
                            void* rax_18 = data_140025c30;
                            rbx = (rax_18 + 0x800);
                            r15 = (rax_18 + 0x1000);
                        }
                        arg_18 = r15;
                        r13 = rdi;
                    }
                }
                else
                {
                    data_140025c20 = (data_140025c20 + 1);
                    rbx[-1] = 0x20;
                    data_140015041 = 1;
                    wint_t _Character_1 = sub_14000613c();
                    data_140015041 = 0;
                    if ((_Character_1 == 0x20 || _Character_1 == 9))
                    {
                        rbp = 2;
                        while (true)
                        {
                            _Character_1 = sub_14000613c();
                            if (_Character_1 == 0x20)
                            {
                                continue;
                            }
                            if ((_Character_1 != 0x20 && _Character_1 != 9))
                            {
                                break;
                            }
                            if (_Character_1 != 9)
                            {
                                /* nop */
                            }
                        }
                    }
                    ungetwc(_Character_1, data_140026480);
                }
                goto label_1400087d9;
            }
            if (rcx_20 == 0x3d)
            {
                rdi = 2;
                goto label_140008432;
            }
            if (rcx_20 > 0x3e)
            {
                if (rcx_20 <= 0x40)
                {
                    goto label_140008641;
                }
                if (rcx_20 == 0x42)
                {
                    goto label_1400085c0;
                }
            }
            goto label_14000866a;
        }
        if (rcx_20 != 0x3b)
        {
            if (rcx_20 != 9)
            {
                if (rcx_20 == 0xa)
                {
                label_1400086a1:
                    rdi = 6;
                    goto label_140008432;
                }
                if (rcx_20 == 0x20)
                {
                    goto label_140008563;
                }
                if (rcx_20 != 0x23)
                {
                    if (rcx_20 == 0x24)
                    {
                        rdi = 7;
                        goto label_140008432;
                    }
                    if (rcx_20 == 0x28)
                    {
                        rdi = 8;
                        goto label_140008432;
                    }
                    if (rcx_20 == 0x29)
                    {
                        rdi = 9;
                        goto label_140008432;
                    }
                    if (rcx_20 == 0x2a)
                    {
                        rdi = 0xb;
                        goto label_140008432;
                    }
                    if (rcx_20 == 0x3a)
                    {
                        rdi = 4;
                        goto label_140008432;
                    }
                    goto label_14000866a;
                }
            label_1400086f3:
                if (rbp == 0)
                {
                    goto label_1400086fc;
                }
                if (rdi == 0x19)
                {
                    goto label_140008803;
                }
                rbp = *((rbp * 0xe) + 0x140011a91);
                goto label_14000843a;
            }
        label_140008563:
            rdi = 5;
        label_140008432:
            rbp = *(((rbp * 0xe) + rdi) + 0x140011a90);
            goto label_14000843a;
        }
        rdi = 0;
        if (rbp != 0)
        {
            goto label_140008432;
        }
        if (data_140026489 == 0)
        {
            goto label_140008432;
        }
    label_1400086fc:
        arg_10 = 0;
        sub_140007b64(0);
        data_140025c20 = (data_140025c20 + 1);
    label_1400087d9:
        rax_1 = sub_14000613c();
        rdi = arg1;
    label_140008295:
        rsi = rax_1;
    }
}

int64_t sub_140008874(int16_t* arg1, int64_t arg2)
{
    uint32_t rax = *arg1;
    void* rsi = &arg1[1];
    int64_t rbp;
    rbp = 0;
    int64_t r15;
    r15 = 0;
    int64_t rdi;
    if (rax == 0x22)
    {
        r15 = 1;
        rdi = 0x10;
    }
    else if (rax == 0x24)
    {
        rdi = 2;
    }
    else
    {
        rdi = rax != 0x7b;
        rdi = (rdi - 1);
        rdi = (rdi & 8);
    }
    uint32_t rbx_1;
    while (true)
    {
        int16_t rax_1;
        char rdx;
        int64_t r8_1;
        rax_1 = sub_14000613c();
        rbx_1 = rax_1;
        if (rbx_1 == 0x5e)
        {
            int16_t rax_3;
            rax_3 = sub_14000613c();
            rbx_1 = rax_3;
            if (rbx_1 == 0xa)
            {
                goto label_140008932;
            }
            if (rbx_1 == 0x23)
            {
                goto label_140008932;
            }
            if (rbx_1 != 0x24)
            {
                if (rbx_1 <= 0x27)
                {
                    goto label_14000893a;
                }
                if (rbx_1 <= 0x29)
                {
                    goto label_14000892b;
                }
                if (rbx_1 == 0x5c)
                {
                    goto label_140008932;
                }
                if ((rbx_1 - 0x5e) > 0x1f)
                {
                    goto label_14000893a;
                }
                if ((!(TEST_BITD(0xa0000001, (rbx_1 - 0x5e)))))
                {
                    goto label_14000893a;
                }
                goto label_14000892b;
            }
        label_14000892b:
            *rsi = 0x5e;
            rsi = (rsi + 2);
        label_140008932:
            rdx = 0;
        }
        else
        {
        label_14000893a:
            uint32_t rcx = rbx_1;
            switch (rcx)
            {
                case 9:
                {
                label_140008998:
                    uint32_t rax_2;
                    rax_2 = r15;
                    char temp4_1 = rax_2;
                    rax_2 = (-rax_2);
                    rdx = ((!(rdx - rdx)) & 5);
                    break;
                }
                case 0xa:
                {
                label_140008a73:
                    rdx = 6;
                    break;
                }
                case 0x20:
                {
                    goto label_140008998;
                }
                case 0x22:
                {
                    rdx = 0xe;
                    if (rdi == 0x12)
                    {
                        r15 = 1;
                    }
                    break;
                }
                case 0x23:
                {
                    rdx = 1;
                    break;
                }
                case 0x24:
                {
                    rdx = 7;
                    break;
                }
                case 0x29:
                {
                    rdx = 9;
                    break;
                }
                case 0x3a:
                {
                    rdx = 4;
                    break;
                }
                case 0x3b:
                {
                    rdx = 3;
                    break;
                }
                case 0x3d:
                {
                    rdx = 2;
                    break;
                }
                case 0x5c:
                {
                    rdx = 0xd;
                    break;
                }
                case 0x7b:
                {
                    rdx = 0xb;
                    break;
                }
                case 0x7d:
                {
                    rdx = 0xc;
                    break;
                }
            }
            if ((((((((rcx > 0x29 && rcx != 0x3a) && rcx != 0x3b) && rcx != 0x3d) && rcx != 0x5c) && rcx != 0x7b) && rcx != 0x7d) && rcx == 0xffff))
            {
                goto label_140008a73;
            }
            if (rcx == 0x28)
            {
                rdx = 8;
            }
            if ((((((((((rcx <= 0x29 && rcx != 0x29) && rcx != 9) && rcx != 0xa) && rcx != 0x20) && rcx != 0x22) && rcx != 0x23) && rcx != 0x24) && rcx != 0x28) || ((((((rcx > 0x29 && rcx != 0x3a) && rcx != 0x3b) && rcx != 0x3d) && rcx != 0x5c) && rcx != 0x7b) && rcx != 0x7d)))
            {
                if ((data_140025c38 & 0x80) == 0)
                {
                    char rcx_15;
                    if (rbx_1 >= 0x80)
                    {
                        int32_t rax_7;
                        rax_7 = iswspace(rbx_1);
                        rcx_15 = rax_7 == 0;
                    }
                    else
                    {
                        rcx_15 = (*(rbx_1 + &data_140011640) & 1);
                    }
                    rdx = ((rdx - rdx) & 0xa);
                }
                else
                {
                    bool rcx_13;
                    if (rbx_1 >= 0x80)
                    {
                        int32_t rax_5;
                        rax_5 = iswspace(rbx_1);
                        rcx_13 = rax_5 == 0;
                    }
                    else
                    {
                        rcx_13 = (*(rbx_1 + &data_140011640) & 1);
                    }
                    if (rcx_13 == 0)
                    {
                        if (rbx_1 == 0x2a)
                        {
                            goto label_140008a3d;
                        }
                        if (rbx_1 != 0x40)
                        {
                            goto label_140008932;
                        }
                        goto label_140008a3d;
                    }
                label_140008a3d:
                    rdx = 0xa;
                }
            }
        }
        rdi = *(((rdi * 0xf) + rdx) + 0x140011970);
        if (r15 != 0)
        {
            char rax_10 = rdi;
            if (rdi == 1)
            {
                rax_10 = 0x10;
            }
            rdi = rax_10;
        }
        if (rbp != 0)
        {
            if (rdx != 6)
            {
                *rsi = 0x5c;
                rsi = (rsi + 2);
            }
            else
            {
                data_140025c20 = (data_140025c20 + 1);
                data_140015041 = 1;
                int16_t rax_11;
                rax_11 = sub_14000613c();
                data_140015041 = 0;
                rbx_1 = rax_11;
                if ((rax_11 == 0x20 || rax_11 == 9))
                {
                    rdi = 0x40;
                    while (true)
                    {
                        int16_t rax_12;
                        rax_12 = sub_14000613c();
                        rbx_1 = rax_12;
                        if (rax_12 == 0x20)
                        {
                            continue;
                        }
                        if ((rax_12 != 0x20 && rax_12 != 9))
                        {
                            break;
                        }
                        if (rax_12 != 9)
                        {
                            /* nop */
                        }
                    }
                }
                if ((rax_11 != 0x20 && rax_11 != 9))
                {
                    rdi = rsi != &data_140025c52;
                }
            }
        }
        rbp = 0;
        if (rsi >= arg2)
        {
            sub_140003898(data_140025c20, 0x434, r8_1);
        }
        if (rdi == 0x40)
        {
            break;
        }
        if ((rdi & 0x20) != 0)
        {
            sub_140003898(data_140025c20, ((rdi & 0xffffffdf) + 0x3e8), rbx_1);
        }
        if (rdi != 0xf)
        {
            *rsi = rbx_1;
            rsi = (rsi + 2);
        }
        else
        {
            rbp = 1;
        }
    }
    ungetwc(rbx_1, data_140026480);
    *rsi = 0;
    /* tailcall */
    return sub_14000bb94(arg1);
}

int64_t sub_140008bcc(int16_t* arg1)
{
    void var_2b8;
    int64_t rax_1 = (__security_cookie ^ &var_2b8);
    int16_t* _String1 = arg1;
    int16_t rsi = 0;
    if ((*arg1 != 0 && *arg1 != 0x23))
    {
        wchar16* rbx = wcspbrk(arg1, &data_1400120d0);
        int64_t rax_3 = -1;
        if (rbx == 0)
        {
            do
            {
                rax_3 = (rax_3 + 1);
            } while (_String1[rax_3] != 0);
            rbx = &_String1[rax_3];
        }
        else
        {
            if (*rbx == 0x23)
            {
                rsi = 0x23;
            }
            *rbx = 0;
            if (rsi == 0)
            {
                void* rsi_1 = &rbx[1];
                while (true)
                {
                    int16_t rax_4 = *rsi_1;
                    if (rax_4 == 0)
                    {
                        break;
                    }
                    if (rax_4 == 0x23)
                    {
                        break;
                    }
                    if ((rax_4 != 0x20 && rax_4 != 9))
                    {
                        sub_140003898(data_140025c20, 0x409, rsi_1);
                    }
                    rsi_1 = (rsi_1 + 2);
                }
            }
        }
        if (rbx > _String1)
        {
            void* rax_5;
            do
            {
                rax_5 = &rbx[-1];
                if ((*rax_5 != 0x20 && *rax_5 != 9))
                {
                    break;
                }
                rbx = rax_5;
            } while (rax_5 > _String1);
        }
        *rbx = 0;
        void var_290;
        void var_288;
        if ((*_String1 == 0x3c && rbx[-1] == 0x3e))
        {
            rbx[-1] = 0;
            uint64_t rax_6 = sub_14000e6a4(&_String1[1]);
            uint64_t rsi_2 = rax_6;
            if (rax_6 == &_String1[1])
            {
                rsi_2 = sub_14000dcc4(&_String1[1]);
            }
            void* rax_8 = sub_14000918c(u"INCLUDE");
            int32_t* rcx_3;
            if (rax_8 == 0)
            {
                rcx_3 = nullptr;
            }
            else
            {
                rcx_3 = *(*(rax_8 + 0x10) + 8);
            }
            uint64_t rbx_1;
            if (rcx_3 == 0)
            {
                rbx_1 = 0;
            }
            else
            {
                int32_t* rax_10 = sub_14000dcc4(rcx_3);
                uint64_t rax_11 = sub_14000e6a4(rax_10);
                rbx_1 = rax_11;
                if (rax_11 != rax_10)
                {
                    free(rax_10);
                }
            }
            int32_t* _String1_1 = gz_read(rbx_1, rsi_2, &var_288, &var_290);
            _String1 = _String1_1;
            if (_String1_1 == 0)
            {
                sub_140003898(data_140025c20, 0x41c, rsi_2);
                breakpoint();
            }
            if (rbx_1 != 0)
            {
                free(rbx_1);
            }
            free(rsi_2);
        }
        if ((*_String1 != 0x3c || (*_String1 == 0x3c && rbx[-1] != 0x3e)))
        {
            if ((*_String1 == 0x22 && rbx[-1] == 0x22))
            {
                rbx[-1] = 0;
                _String1 = &_String1[1];
            }
            uint64_t _String1_4 = sub_14000e6a4(_String1);
            int16_t* _String1_3 = _String1_4;
            if (_String1_4 == _String1)
            {
                _String1_3 = sub_14000dcc4(_String1);
            }
            if (sub_140005ca8(_String1_3, &var_288, &var_290) == 0)
            {
                wchar16* rax_14 = wcspbrk(_String1_3, &data_1400120d8);
                int32_t rbp_1;
                int16_t* _String1_2;
                if (rax_14 != 0)
                {
                    _String1_2 = _String1_3;
                }
                else
                {
                    int64_t rcx_14 = data_140036ce8;
                    rbp_1 = rcx_14;
                    int64_t r14_1 = rcx_14;
                    if (rcx_14 >= 0)
                    {
                        wchar16** r13_2 = ((rcx_14 * 0x18) + &data_140036cf8);
                        while (true)
                        {
                            wchar16* rcx_15 = data_140026490;
                            if (rbp_1 != rcx_14)
                            {
                                rcx_15 = *r13_2;
                            }
                            wchar16* _Source = sub_140009078(rcx_15);
                            if (_Source != 0)
                            {
                                int64_t rcx_16 = -1;
                                do
                                {
                                    rcx_16 = (rcx_16 + 1);
                                } while (_String1_3[rcx_16] != 0);
                                int64_t rax_16 = -1;
                                do
                                {
                                    rax_16 = (rax_16 + 1);
                                } while (_Source[rax_16] != 0);
                                rsize_t _SizeInWords = ((rax_16 + 2) + rcx_16);
                                wchar16* _Destination = sub_140009214();
                                wcscpy_s(_Destination, _SizeInWords, _Source);
                                wcscat_s(_Destination, _SizeInWords, &data_1400120e0);
                                wcscat_s(_Destination, _SizeInWords, _String1_3);
                                if (sub_140005ca8(_Destination, &var_288, &var_290) != 0)
                                {
                                    _String1 = _Destination;
                                    free(_Source);
                                    break;
                                }
                                free(_Source);
                                free(_Destination);
                            }
                            rbp_1 = (rbp_1 - 1);
                            r13_2 = (r13_2 - 0x18);
                            int64_t temp0_1 = r14_1;
                            r14_1 = (r14_1 - 1);
                            if ((temp0_1 - 1) < 0)
                            {
                                break;
                            }
                            rcx_14 = data_140036ce8;
                        }
                    }
                    free(_String1_3);
                    if (rbp_1 < 0)
                    {
                        _String1_2 = _String1;
                    }
                }
                if ((rax_14 != 0 || (rax_14 == 0 && rbp_1 < 0)))
                {
                    sub_140003898(data_140025c20, 0x41c, _String1_2);
                }
            }
        }
        int32_t rdx_8 = data_140036ce8;
        int32_t rbx_4 = 0;
        if (rdx_8 > 0)
        {
            void* rsi_3 = &data_140036cf8;
            do
            {
                if (_wcsicmp(_String1, *rsi_3) == 0)
                {
                    sub_140003898(data_140025c20, 0x430, _String1);
                }
                rdx_8 = data_140036ce8;
                rbx_4 = (rbx_4 + 1);
                rsi_3 = (rsi_3 + 0x18);
            } while (rbx_4 < rdx_8);
        }
        bool cond:0 = data_14002648b == 0;
        data_140036ce8 = (rdx_8 + 1);
        data_140025c24 = 0;
        int64_t rcx_28 = (rdx_8 * 3);
        *((rcx_28 << 3) + 0x140036d00) = data_140026480;
        *(&data_140036cf0 + (rcx_28 << 3)) = data_140025c20;
        *((rcx_28 << 3) + &data_140036cf8) = data_140026490;
        if ((!cond:0))
        {
            sub_14000bfe0(u"Included: %s\n", _String1);
        }
        int64_t rax_24 = sub_14000fd2c(_String1, u"rt,ccs=unicode");
        data_140026480 = rax_24;
        if (rax_24 == 0)
        {
            sub_140003898(data_140025c20, 0x41c, _String1);
        }
        data_140026490 = sub_14000dcc4(_String1);
        data_140025c20 = 1;
        data_140015041 = 1;
        int64_t rax_26 = sub_14000613c();
        if ((rax_26 == 0x20 || rax_26 == 9))
        {
            data_140015041 = 0;
            rax_26 = 0x12;
        }
        if ((rax_26 != 0x20 && rax_26 != 9))
        {
            FILE* _Stream = data_140026480;
            data_140015041 = 1;
            ungetwc(rax_26, _Stream);
            data_140025c20 = (data_140025c20 - 1);
            rax_26 = 0x11;
        }
        __security_check_cookie((rax_1 ^ &var_2b8));
        return rax_26;
    }
    int64_t r8;
    sub_140003898(data_140025c20, 0x407, r8);
    breakpoint();
}

wchar16* sub_140009078(wchar16* arg1)
{
    void var_278;
    int64_t rax_1 = (__security_cookie ^ &var_278);
    wchar16* var_250;
    __builtin_memset(&var_250, 0, 0x20);
    uint64_t _FilenameCount;
    wchar16* _Ext;
    uint64_t _ExtCount;
    void _Drive;
    void _Dir;
    _wsplitpath_s(arg1, &_Drive, 3, &_Dir, 0x100, var_250, _FilenameCount, _Ext, _ExtCount);
    int64_t rdi = -1;
    int64_t rcx = -1;
    do
    {
        rcx = (rcx + 1);
    } while (*(&_Drive + (rcx << 1)) != 0);
    int64_t rax_2 = -1;
    do
    {
        rax_2 = (rax_2 + 1);
    } while (*(&_Dir + (rax_2 << 1)) != 0);
    wchar16* _Buffer = sub_140009214();
    _wmakepath_s(_Buffer, ((rax_2 + 1) + rcx), &_Drive, &_Dir, nullptr, nullptr);
    do
    {
        rdi = (rdi + 1);
    } while (_Buffer[rdi] != 0);
    if ((0x5c == _Buffer[(rdi - 1)] || (0x5c != *((_Buffer + (rdi << 1)) - 2) && 0x2f == _Buffer[(rdi - 1)])))
    {
        _Buffer[(rdi - 1)] = 0;
    }
    __security_check_cookie((rax_1 ^ &var_278));
    return _Buffer;
}

void* sub_14000918c(int16_t* arg1)
{
    int16_t i = *arg1;
    int16_t* rdx = arg1;
    if (i == 0)
    {
        data_140037098 = &data_1400364d0;
    }
    else
    {
        int32_t rcx = 0;
        do
        {
            rdx = &rdx[1];
            rcx = (rcx + i);
            i = *rdx;
        } while (i != 0);
        void* rax_1 = (&data_1400364d0 + (rcx << 3));
        data_140037098 = rax_1;
        while (true)
        {
            rax_1 = *rax_1;
            if (rax_1 == 0)
            {
                break;
            }
            void* rcx_2 = *(rax_1 + 8);
            void* r9_2 = (arg1 - rcx_2);
            uint32_t rdx_1;
            uint32_t i_1;
            do
            {
                rdx_1 = *rcx_2;
                i_1 = *(rcx_2 + r9_2);
                if (rdx_1 != i_1)
                {
                    break;
                }
                rcx_2 = (rcx_2 + 2);
            } while (i_1 != 0);
            if ((rdx_1 - i_1) == 0)
            {
                rcx_2 = *(rax_1 + 0x18);
                rcx_2 = (rcx_2 & 0x10);
                if (rcx_2 != 0)
                {
                    rax_1 = nullptr;
                }
                return rax_1;
            }
        }
    }
    return 0;
}

int64_t sub_140009214()
{
    int64_t rax;
    uint64_t _Size;
    int64_t r8;
    rax = malloc(_Size);
    if (rax == 0)
    {
        sub_140003898(data_140025c24, 0x41b, r8);
    }
    return rax;
}

char* sub_140009244(int64_t arg1)
{
    char* rax = sub_140009214();
    memset(rax, 0, arg1);
    return rax;
}

int64_t sub_140009274(int64_t arg1, uint64_t arg2)
{
    int64_t rbx;
    if (arg1 == 0)
    {
        rbx = sub_140009214();
    }
    else
    {
        int64_t rax;
        int64_t r8_1;
        rax = realloc(arg1, arg2);
        rbx = rax;
        if (rax == 0)
        {
            sub_140003898(data_140025c24, 0x41b, r8_1);
        }
    }
    return rbx;
}

uint64_t sub_1400092b4(int16_t* arg1, int16_t* arg2)
{
    void var_798;
    int64_t rax_1 = (__security_cookie ^ &var_798);
    int16_t* _Source = arg2;
    rsize_t _SizeInWords = 0;
    int16_t* var_730 = &data_14003de00;
    int64_t* var_738 = &data_14003ddf8;
    wchar16* _Destination_1 = nullptr;
    enum LOAD_LIBRARY_FLAGS dwFlags = LOAD_LIBRARY_AS_IMAGE_RESOURCE | LOAD_LIBRARY_AS_DATAFILE_EXCLUSIVE;
    uint64_t i_3;
    if (((*arg1 == 0 || (*arg1 != 0 && arg2 == 0)) || ((*arg1 != 0 && arg2 != 0) && *arg2 == 0)))
    {
        i_3 = 0x80070057;
    }
    if (((*arg1 != 0 && arg2 != 0) && *arg2 != 0))
    {
        data_14003ddf8 = 0;
        void var_248;
        if (wcsncpy_s(&var_248, 0x104, arg1, -1) != 0)
        {
        label_140009360:
            i_3 = 0x80004005;
        }
        else
        {
            int64_t rax_3 = -1;
            do
            {
                rax_3 = (rax_3 + 1);
            } while (*(&var_248 + (rax_3 << 1)) != 0);
            void var_24a;
            if ((*(&var_24a + (rax_3 << 1)) != 0x5c && wcsncat_s(&var_248, 0x104, &data_1400120e0, -1) != 0))
            {
                goto label_140009360;
            }
            int32_t i = 0x80070002;
            void* var_718 = &var_248;
            wchar16 lpBuffer = 0;
            int16_t** var_710_1 = &_Source;
            int32_t* var_708_1 = &dwFlags;
            int64_t** var_700_1 = &var_738;
            int16_t** var_6f8_1 = &var_730;
            int64_t* var_6f0_1 = &_Destination_1;
            int64_t* var_6e8_1 = &_SizeInWords;
            int64_t var_47e_1 = 0;
            int16_t var_476_1 = 0;
            int32_t rax_6 = (GetEnvironmentVariableW(u"VSLANG", &lpBuffer, 6) - 1);
            if ((rax_6 <= 4 && lpBuffer != 0))
            {
                sub_1400098fc(&var_718, &lpBuffer, 0xa, &i);
            }
            if (((rax_6 > 4 || (rax_6 <= 4 && lpBuffer == 0)) || ((rax_6 <= 4 && lpBuffer != 0) && i != 0)))
            {
                void* rcx_3 = data_14003d140;
                HINSTANCE hModule;
                FARPROC rbx_1;
                if (rcx_3 != 0)
                {
                    rbx_1 = DecodePointer(rcx_3);
                }
                else
                {
                    hModule = GetModuleHandleW(u"kernel32.dll");
                    if (hModule != 0)
                    {
                        FARPROC rax_7 = GetProcAddress(hModule, "SetThreadPreferredUILanguages");
                        rbx_1 = rax_7;
                        data_14003d140 = EncodePointer(rax_7);
                    }
                }
                if (((rcx_3 != 0 || (rcx_3 == 0 && hModule != 0)) && rbx_1 != 0))
                {
                    if ((GetEnvironmentVariableW(u"VS_UNICODE_OUTPUT", nullptr, 0) == 0 && rbx_1(0x100, 0, 0) == 0))
                    {
                        goto label_140009360;
                    }
                    void* rcx_6 = data_14003d138;
                    int32_t var_760 = 0;
                    int32_t var_75c = 0;
                    HINSTANCE hModule_1;
                    FARPROC rdi_1;
                    if (rcx_6 != 0)
                    {
                        rdi_1 = DecodePointer(rcx_6);
                    }
                    else
                    {
                        hModule_1 = GetModuleHandleW(u"kernel32.dll");
                        if (hModule_1 != 0)
                        {
                            FARPROC rax_12 = GetProcAddress(hModule_1, "GetThreadPreferredUILanguages");
                            rdi_1 = rax_12;
                            data_14003d138 = EncodePointer(rax_12);
                        }
                    }
                    if ((rcx_6 != 0 || (rcx_6 == 0 && hModule_1 != 0)))
                    {
                        if (rdi_1 == 0)
                        {
                            goto label_14000961c;
                        }
                        if (rdi_1(0x34, &var_75c, 0, &var_760) == 0)
                        {
                            goto label_140009360;
                        }
                        void* lpMem_1 = HeapAlloc(GetProcessHeap(), HEAP_NONE, (var_760 * 2));
                        wchar16* lpMem = lpMem_1;
                        if (lpMem_1 != 0)
                        {
                            if (rdi_1(0x34, &var_75c, lpMem_1, &var_760) == 0)
                            {
                                goto label_140009360;
                            }
                            wchar16* lpMem_2 = lpMem;
                            if (*lpMem != 0)
                            {
                                if (*lpMem_2 != 0)
                                {
                                    goto label_1400095cb;
                                }
                                while (i != 0)
                                {
                                    lpMem_2 = &lpMem_2[5];
                                    if (*lpMem_2 == 0)
                                    {
                                        break;
                                    }
                                label_1400095cb:
                                    sub_1400098fc(&var_718, lpMem_2, 0x10, &i);
                                }
                            }
                            HeapFree(GetProcessHeap(), HEAP_NONE, lpMem);
                            if (i == 0)
                            {
                                goto label_140009453;
                            }
                            goto label_14000961c;
                        }
                        i_3 = 0x8007000e;
                    }
                    if ((rcx_6 == 0 && hModule_1 == 0))
                    {
                    label_14000961c:
                        sub_1400098fc(&var_718, u"1033", 0xa, &i);
                        int32_t i_2 = i;
                        if (i_2 == 0)
                        {
                            goto label_140009453;
                        }
                        void var_458;
                        errno_t rax_19 = wcsncpy_s(&var_458, 0x104, &var_248, -1);
                        errno_t rax_20;
                        if (rax_19 == 0)
                        {
                            rax_20 = wcsncat_s(&var_458, 0x104, &data_1400121ac, -1);
                            if (rax_20 == 0)
                            {
                                char lpFindFileData;
                                FindFileHandle hFindFile = FindFirstFileW(&var_458, &lpFindFileData);
                                if (hFindFile != -1)
                                {
                                    int64_t rdi_3 = -1;
                                    do
                                    {
                                        rdi_3 = (rdi_3 + 1);
                                    } while (*(&var_248 + (rdi_3 << 1)) != 0);
                                    while (true)
                                    {
                                        if (FindNextFileW(hFindFile, &lpFindFileData) == 0)
                                        {
                                            break;
                                        }
                                        if ((lpFindFileData & 0x10) != 0)
                                        {
                                            wchar16 _Source_1;
                                            wchar16 _Source_2 = _Source_1;
                                            int16_t var_6aa;
                                            if ((_Source_2 == 0x2e && var_6aa == 0))
                                            {
                                                continue;
                                            }
                                            int16_t var_6a8;
                                            if ((_Source_2 == 0x2e && (var_6aa == 0x2e && var_6a8 == 0)))
                                            {
                                                continue;
                                            }
                                            int32_t var_778_1 = 1;
                                            int16_t var_764;
                                            if (swscanf_s(&_Source_1, u"%hu%c", &var_764) != 0xffffffff)
                                            {
                                                int64_t rax_27 = (rdi_3 * 2);
                                                if (rax_27 >= 0x208)
                                                {
                                                    _lockexit();
                                                    breakpoint();
                                                }
                                                *(&var_458 + rax_27) = 0;
                                                if (((wcsncat_s(&var_458, 0x104, &_Source_1, -1) == 0 && wcsncat_s(&var_458, 0x104, &data_1400120e0, -1) == 0) && wcsncat_s(&var_458, 0x104, _Source, -1) == 0))
                                                {
                                                    HINSTANCE rax_31 = LoadLibraryExW(&var_458, nullptr, dwFlags);
                                                    if (rax_31 != 0)
                                                    {
                                                        *var_738 = rax_31;
                                                        int16_t* rcx_27 = var_730;
                                                        if (rcx_27 != 0)
                                                        {
                                                            *rcx_27 = var_764;
                                                        }
                                                        wchar16* _Destination = _Destination_1;
                                                        if (_Destination != 0)
                                                        {
                                                            wcscpy_s(_Destination, _SizeInWords, &var_458);
                                                        }
                                                        i_2 = 0;
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    FindClose(hFindFile);
                                    i_3 = i_2;
                                }
                                else
                                {
                                    enum WIN32_ERROR i_4 = GetLastError();
                                    i_3 = (i_4 | 0x80070000);
                                    if (i_4 <= NO_ERROR)
                                    {
                                        i_3 = i_4;
                                    }
                                }
                            }
                        }
                        if ((rax_19 != 0 || (rax_19 == 0 && rax_20 != 0)))
                        {
                            i_3 = 0x80070003;
                        }
                    }
                }
                if (((rcx_3 == 0 && hModule == 0) || ((rcx_3 != 0 || (rcx_3 == 0 && hModule != 0)) && rbx_1 == 0)))
                {
                    uint16_t rax_22 = GetUserDefaultUILanguage();
                    uint16_t rcx_17 = (rax_22 & 0x3ff);
                    if ((rcx_17 == 1 || rcx_17 == 0xd))
                    {
                        rax_22 = 0x409;
                    }
                    uint16_t var_488 = rax_22;
                    int16_t* rdi_2 = &var_488;
                    int16_t var_484_1 = 0x409;
                    int32_t i_1 = 0;
                    uint16_t var_486_1 = ((rax_22 & 0x3ff) | 0x400);
                    do
                    {
                        wchar16 _Buffer;
                        _itow_s(*rdi_2, &_Buffer, 6, 0xa);
                        if (_Buffer != 0)
                        {
                            sub_1400098fc(&var_718, &_Buffer, 0xa, &i);
                        }
                        if (i == 0)
                        {
                            break;
                        }
                        i_1 = (i_1 + 1);
                        rdi_2 = &rdi_2[1];
                    } while (i_1 < 3);
                    if (i == 0)
                    {
                        goto label_140009453;
                    }
                    goto label_14000961c;
                }
            }
            if (((rax_6 <= 4 && lpBuffer != 0) && i == 0))
            {
            label_140009453:
                i_3 = 0;
            }
        }
    }
    __security_check_cookie((rax_1 ^ &var_798));
    return i_3;
}

HINSTANCE sub_1400098fc(int64_t* arg1, wchar16* arg2, int32_t arg3, int32_t* arg4)
{
    void var_298;
    int64_t rax_1 = (__security_cookie ^ &var_298);
    int16_t* _EndPtr;
    HINSTANCE rax_3 = wcstoul(arg2, &_EndPtr, arg3);
    int16_t rsi = rax_3;
    if (*_EndPtr == 0)
    {
        void var_270;
        _itow_s(rax_3, &var_270, 6, 0xa);
        void var_258;
        rax_3 = wcsncpy_s(&var_258, 0x104, *arg1, -1);
        if (rax_3 == 0)
        {
            rax_3 = wcsncat_s(&var_258, 0x104, &var_270, -1);
            if (rax_3 == 0)
            {
                rax_3 = wcsncat_s(&var_258, 0x104, &data_1400120e0, -1);
                if (rax_3 == 0)
                {
                    rax_3 = wcsncat_s(&var_258, 0x104, *arg1[1], -1);
                    if (rax_3 == 0)
                    {
                        rax_3 = LoadLibraryExW(&var_258, nullptr, *arg1[2]);
                        if (rax_3 != 0)
                        {
                            **arg1[3] = rax_3;
                            int16_t* rcx_8 = *arg1[4];
                            if (rcx_8 != 0)
                            {
                                *rcx_8 = rsi;
                            }
                            rax_3 = arg1[5];
                            wchar16* _Destination = *rax_3;
                            if (_Destination != 0)
                            {
                                rax_3 = wcscpy_s(_Destination, *arg1[6], &var_258);
                            }
                            *arg4 = 0;
                        }
                        else if (*arg4 == 0x80070002)
                        {
                            rax_3 = GetLastError();
                            int32_t rcx_10 = (rax_3 | 0x80070000);
                            if (rax_3 <= 0)
                            {
                                rcx_10 = rax_3;
                            }
                            *arg4 = rcx_10;
                        }
                    }
                }
            }
        }
    }
    __security_check_cookie((rax_1 ^ &var_298));
    return rax_3;
}

int64_t _guard_check_icall() __pure
{
    return;
}

uint64_t ErrorReportingDisabled()
{
    uint64_t rax = data_140037094;
    if ((rax > 0 && rax <= 2))
    {
        rax = 0;
    }
    if ((rax <= 0 || ((rax > 0 && rax > 2) && rax != 3)))
    {
        rax = 1;
    }
    if (rax == 3)
    {
        rax = ErrorReportingCheckOptIn() == 0;
    }
    return rax;
}

int64_t ErrorReportingCheckOptIn()
{
    int64_t rax;
    if (GetVersion() >= 6)
    {
        rax = 1;
    }
    else if (RegOpenKeyExW(-0xffffffff80000001, u"Software\Microsoft\VisualStudio\…", 0, KEY_READ, &hKey_1) != 0)
    {
    label_140009b4a:
        rax = 0;
    }
    else
    {
        HKEY hKey = hKey_1;
        lpcbData = 4;
        enum WIN32_ERROR rax_1 = RegQueryValueExW(hKey, u"UserCanAutoSendErrorReport", nullptr, &lpType, &lpData, &lpcbData);
        RegCloseKey(hKey_1);
        if (rax_1 != NO_ERROR)
        {
            goto label_140009b4a;
        }
        if (lpType != 4)
        {
            goto label_140009b4a;
        }
        if (lpcbData != 4)
        {
            goto label_140009b4a;
        }
        rax = lpData == 1;
    }
    return rax;
}

uint64_t sub_140009b54(uint8_t* arg1)
{
    uint64_t rax;
    if (RegOpenKeyExW(-0xffffffff80000002, u"Software\Wow6432node\Microsoft\P…", 0, KEY_READ, &hKey_1) != 0)
    {
    label_140009b8c:
        rax = 0;
    }
    else
    {
        HKEY hKey = hKey_1;
        lpcbData = 0x208;
        enum WIN32_ERROR rax_1 = RegQueryValueExW(hKey, u"DW0201", nullptr, &lpType, arg1, &lpcbData);
        RegCloseKey(hKey_1);
        *(arg1 + 0x206) = 0;
        if (rax_1 != NO_ERROR)
        {
            goto label_140009b8c;
        }
        if (lpType == 2)
        {
            if ((ExpandEnvironmentStringsW(arg1, arg1, 0x104) - 1) > 0x103)
            {
                goto label_140009b8c;
            }
        }
        else if (lpType != 1)
        {
            goto label_140009b8c;
        }
        rax = 1;
    }
    return rax;
}

HANDLE InitializeWatsonSharedMem()
{
    HANDLE hFileMappingObject = CreateFileMappingW(-ffffffffffffffff, &data_14003d0f8, PAGE_READWRITE, 0, 0x9cb8, nullptr);
    data_1400370a0 = hFileMappingObject;
    if (hFileMappingObject != 0)
    {
        hFileMappingObject = MapViewOfFileEx(hFileMappingObject, 0x6, 0, 0, nullptr, nullptr);
        data_1400370a8 = hFileMappingObject;
        if (hFileMappingObject != 0)
        {
            hFileMappingObject = 1;
        }
    }
    if (hFileMappingObject == 0)
    {
        CloseHandle(data_1400370a0);
        data_1400370a0 = 0;
    }
    if ((hFileMappingObject == 0 || hFileMappingObject == 0))
    {
        hFileMappingObject = 0;
    }
    return hFileMappingObject;
}

uint64_t ErrorReportingFilter(int64_t* arg1)
{
    bool cond:0 = data_14003d128 == 0;
    lpTargetHandle = nullptr;
    int32_t rbp = 1;
    uint64_t rax_29;
    if ((!cond:0))
    {
    label_140009cc6:
        rax_29 = 1;
    }
    else
    {
        int32_t rax_1 = data_140037094;
        if ((rax_1 <= 0 || ((rax_1 > 0 && rax_1 > 2) && rax_1 != 3)))
        {
            rax_1 = 1;
        }
        if (rax_1 == 3)
        {
            rax_1 = ErrorReportingCheckOptIn() == 0;
        }
        if (((rax_1 <= 0 || ((rax_1 > 0 && rax_1 > 2) && rax_1 != 3)) || rax_1 == 3))
        {
            if (rax_1 != 0)
            {
                goto label_140009cc6;
            }
            goto label_140009cf5;
        }
        if ((rax_1 > 0 && rax_1 <= 2))
        {
        label_140009cf5:
            bool cond:1_1 = data_1400370a8 != 0;
            data_14003d0f8 = 0x18;
            data_14003d100 = 0;
            data_14003d108 = 1;
            if ((!cond:1_1))
            {
                if (InitializeWatsonSharedMem() == 0)
                {
                    goto label_140009cc6;
                }
                goto label_140009d2e;
            }
        label_140009d2e:
            if (sub_140009b54(&data_14003d950) == 0)
            {
                goto label_140009cc6;
            }
            data_14003d128 = CreateEventW(&data_14003d0f8, 0, 0, nullptr);
            HANDLE rax_5 = CreateEventW(&data_14003d0f8, 0, 0, nullptr);
            HANDLE rax_6 = CreateMutexW(&data_14003d0f8, 0, nullptr);
            HANDLE rax_7 = GetCurrentProcess();
            BOOL rax_8 = DuplicateHandle(rax_7, rax_7, rax_7, &lpTargetHandle, 0x1fffff, 1, 0);
            if ((((rax_8 != 0 && data_14003d128 != 0) && rax_5 != 0) && (rax_6 != 0 && lpTargetHandle != 0)))
            {
                char* rbx_1 = data_1400370a8;
                memset(rbx_1, 0, 0x9cb8);
                *(rbx_1 + 0x40) = lpTargetHandle;
                *(data_1400370a8 + 8) = GetCurrentProcessId();
                uint32_t rax_11 = GetCurrentThreadId();
                int32_t* rdx_2 = data_1400370a8;
                rdx_2[3] = rax_11;
                *(rdx_2 + 0x30) = data_14003d128;
                *(rdx_2 + 0x20) = rax_5;
                *(rdx_2 + 0x38) = rax_6;
                *rdx_2 = 0x9cb8;
                rdx_2[1] = 0x20000;
                *(rdx_2 + 0x18) = arg1;
                *(rdx_2 + 0x10) = *(*arg1 + 0x10);
                uint32_t rax_14 = GetVersion();
                int32_t rcx_4 = data_140037094;
                int32_t rcx_5 = (rcx_4 - 1);
                void* r8_2;
                int32_t temp1_1;
                if (rcx_4 == 1)
                {
                    r8_2 = data_1400370a8;
                    *(r8_2 + 0x48) = 0;
                }
                else
                {
                    temp1_1 = rcx_5;
                    rcx_5 = (rcx_5 - 1);
                    if (temp1_1 == 1)
                    {
                        r8_2 = data_1400370a8;
                        *(r8_2 + 0x48) = 8;
                    }
                    if ((temp1_1 != 1 && rcx_5 == 1))
                    {
                        r8_2 = data_1400370a8;
                        *(r8_2 + 0x48) = 0;
                    }
                    if ((temp1_1 == 1 || (temp1_1 != 1 && rcx_5 == 1)))
                    {
                        rax_14 = rax_14 >= 6 == 0;
                        *(r8_2 + 0x4c) = rax_14;
                    }
                }
                if ((rcx_4 == 1 || (rcx_4 != 1 && (temp1_1 == 1 || (temp1_1 != 1 && rcx_5 == 1)))))
                {
                    bool rdx_3 = data_140036cef;
                    rax_14 = rdx_3;
                    *(r8_2 + 0x50) = 0;
                    char temp2_1 = rax_14;
                    rax_14 = (-rax_14);
                    *(r8_2 + 0x58) = 0;
                    *(r8_2 + 0x60) = 1;
                    *(r8_2 + 0x54) = (((!(rcx_5 - rcx_5)) & 0x10) | 4);
                    *(r8_2 + 0x68) = (((rax_14 - rax_14) & 0x10) | 1);
                    wcsncpy_s((r8_2 + 0x21c8), 0x38, data_140015090, -1);
                    wchar16** rax_18 = __p__wpgmptr();
                    wcsncpy_s((data_1400370a8 + 0x274), 0x104, *rax_18, -1);
                    void* rcx_13 = data_1400370a8;
                    if (rcx_13 != -0x47c)
                    {
                        __builtin_strcpy((rcx_13 + 0x47c), "HKLM\\Software\\Microsoft\\Internet Explorer\\Registration\\DigitalProductID");
                    }
                    else
                    {
                        *_errno() = 0x16;
                        _invalid_parameter_noinfo();
                        rcx_13 = data_1400370a8;
                    }
                    wcsncpy_s((rcx_13 + 0x7c0), 0x104, data_140015098, -1);
                    _snprintf(&data_14003db60, 0x104, u"dw20.exe -x -s %I64u", data_1400370a0);
                    memset(&data_14003dd70, 0, 0x68);
                    data_14003dd70 = 0x68;
                    if (CreateProcessW(&data_14003d950, &data_14003db60, nullptr, nullptr, 1, NORMAL_PRIORITY_CLASS | CREATE_DEFAULT_ERROR_MODE, nullptr, nullptr, &data_14003dd70, &data_14003ddd8) != 0)
                    {
                        CloseHandle(data_14003ddd8);
                        CloseHandle(data_14003dde0);
                        char i = 1;
                        do
                        {
                            if (WaitForSingleObject(data_14003d128, 0x4e20) == 0)
                            {
                                if (WaitForSingleObject(rax_5, 1) == 0)
                                {
                                    i = 0;
                                }
                            }
                            else
                            {
                                uint32_t rax_24 = WaitForSingleObject(rax_6, 0x4e20);
                                if (rax_24 == 0x102)
                                {
                                    break;
                                }
                                if (rax_24 == 0x80)
                                {
                                    ReleaseMutex(rax_6);
                                    break;
                                }
                                if (WaitForSingleObject(data_14003d128, 1) == 0)
                                {
                                    uint32_t rax_26;
                                    char rcx_23;
                                    rax_26 = WaitForSingleObject(rax_5, 1);
                                    i = (i & (rcx_23 - rcx_23));
                                }
                                else
                                {
                                    SetEvent(rax_5);
                                    i = 0;
                                }
                                ReleaseMutex(rax_6);
                            }
                        } while (i != 0);
                        if ((*(data_1400370a8 + 0x9aa0) & 0x10) != 0)
                        {
                            rbp = 0;
                        }
                    }
                }
            }
            if ((((rax_8 == 0 || (rax_8 != 0 && data_14003d128 == 0)) || ((rax_8 != 0 && data_14003d128 != 0) && rax_5 != 0)) && rax_5 != 0))
            {
                CloseHandle(rax_5);
            }
            if (rax_6 != 0)
            {
                CloseHandle(rax_6);
            }
            HANDLE hObject = lpTargetHandle;
            if (hObject != 0)
            {
                CloseHandle(hObject);
            }
            HANDLE hObject_1 = data_14003d128;
            if (hObject_1 != 0)
            {
                CloseHandle(hObject_1);
                data_14003d128 = 0;
            }
            void* lpBaseAddress = data_1400370a8;
            if (lpBaseAddress != 0)
            {
                UnmapViewOfFile(lpBaseAddress);
                data_1400370a8 = 0;
            }
            HANDLE hObject_2 = data_1400370a0;
            if (hObject_2 != 0)
            {
                CloseHandle(hObject_2);
                data_1400370a0 = 0;
            }
            if (data_140015042 != 0)
            {
                exit(1);
                /* no return */
            }
            rax_29 = rbp;
        }
    }
    return rax_29;
}

int64_t sub_14000a198(int64_t* arg1)
{
    if ((**arg1 != 0x80000003 && data_140037092 == 0))
    {
        data_140037092 = 1;
        data_140015098 = u"msvcr140.dll";
        data_140015090 = &data_140012ea0;
        data_140015042 = 0;
        /* tailcall */
        return ErrorReportingFilter(arg1);
    }
    return 0;
}

uint64_t sub_14000a1e0(int64_t* arg1, int128_t* arg2, int128_t* arg3)
{
    int128_t* rbx = arg3;
    int128_t* rsi = arg2;
    if (data_140026488 == 0)
    {
        arg2 = sub_140003a8c();
    }
    sub_14000bfe0(u"\nNMAKE : fatal error U1038: Int…", arg2);
    sub_14000bfb0();
    int128_t* rax = *arg1;
    *rsi = *rax;
    rsi[1] = rax[1];
    rsi[2] = rax[2];
    rsi[3] = rax[3];
    rsi[4] = rax[4];
    rsi[5] = rax[5];
    rsi[6] = rax[6];
    rsi[7] = rax[7];
    rsi[8] = rax[8];
    rsi[9] = rax[9];
    if (rbx != 0)
    {
        int128_t* rax_2 = arg1[1];
        int64_t i_1 = 9;
        int64_t i;
        do
        {
            *rbx = *rax_2;
            rbx[1] = rax_2[1];
            rbx[2] = rax_2[2];
            rbx[3] = rax_2[3];
            rbx[4] = rax_2[4];
            rbx[5] = rax_2[5];
            rbx[6] = rax_2[6];
            rbx = &rbx[8];
            int128_t zmm1 = rax_2[7];
            rax_2 = &rax_2[8];
            rbx[-1] = zmm1;
            i = i_1;
            i_1 = (i_1 - 1);
        } while (i != 1);
        *rbx = *rax_2;
        rbx[1] = rax_2[1];
        rbx[2] = rax_2[2];
        rbx[3] = rax_2[3];
        rbx[4] = rax_2[4];
    }
    int32_t rax_3 = data_140037094;
    if ((rax_3 <= 0 || ((rax_3 > 0 && rax_3 > 2) && rax_3 != 3)))
    {
        rax_3 = 1;
    }
    if (rax_3 == 3)
    {
        rax_3 = ErrorReportingCheckOptIn() == 0;
    }
    uint64_t rax_4;
    if (((rax_3 <= 0 || ((rax_3 > 0 && rax_3 > 2) && rax_3 != 3)) || rax_3 == 3))
    {
        if (rax_3 == 0)
        {
            goto label_14000a31d;
        }
        int32_t rdi;
        rdi = data_140037092 == 0;
        rax_4 = rdi;
        goto label_14000a346;
    }
    if ((rax_3 > 0 && rax_3 <= 2))
    {
    label_14000a31d:
        rax_4 = sub_14000a198(arg1);
    label_14000a346:
        return rax_4;
    }
}

int64_t sub_14000a348(int32_t arg1, int64_t arg2) __noreturn
{
    void var_908;
    int64_t var_38 = (__security_cookie ^ &var_908);
    int32_t rdi = arg1;
    SetErrorMode(SEM_FAILCRITICALERRORS);
    void var_2e8;
    memset(&var_2e8, 0, 0x98);
    void var_7b0;
    memset(&var_7b0, 0, 0x4c8);
    setlocale(2, ".ACP");
    data_1400370b0 = IsConsole(__acrt_iob_func(1));
    data_140037093 = IsConsole(__acrt_iob_func(2));
    _set_invalid_parameter_handler(_guard_check_icall);
    data_14003d0f8 = 0x18;
    data_14003d100 = 0;
    data_14003d108 = 1;
    InitializeWatsonSharedMem();
    data_140037094 = 2;
    int32_t rbx = 1;
    while (true)
    {
        int32_t var_808_1 = rbx;
        if (rbx >= rdi)
        {
            break;
        }
        int64_t* rsi_1 = (arg2 + (rbx << 3));
        int16_t* rcx_4 = *rsi_1;
        if ((0xfffd & (*rcx_4 - 0x2d)) == 0)
        {
            if (_wcsicmp(&rcx_4[1], u"errorreport:none") != 0)
            {
                if (_wcsicmp((*rsi_1 + 2), u"errorreport:prompt") == 0)
                {
                    data_140037094 = 1;
                    goto label_14000a492;
                }
                if (_wcsicmp((*rsi_1 + 2), u"errorreport:queue") == 0)
                {
                    data_140037094 = 2;
                    goto label_14000a492;
                }
                if (_wcsicmp((*rsi_1 + 2), u"errorreport:send") == 0)
                {
                    data_140037094 = 3;
                    goto label_14000a492;
                }
                if (_wcsicmp((*rsi_1 + 2), u"errorreport:test") == 0)
                {
                    data_140036cee = 1;
                    goto label_14000a492;
                }
            }
            else
            {
                data_140037094 = 0;
            label_14000a492:
                memmove(rsi_1, (arg2 + ((rbx + 1) << 3)), (((rdi - rbx) - 1) << 3));
                rdi = (rdi - 1);
                int32_t var_800_1 = rdi;
                rbx = (rbx - 1);
                int32_t var_808_2 = rbx;
            }
        }
        rbx = (rbx + 1);
    }
    if ((data_140037094 == 3 && ErrorReportingCheckOptIn() == 0))
    {
        sub_140003898(0, 0xfae, u"http://go.microsoft.com/fwlink/?…");
    }
    if (ErrorReportingDisabled() == 0)
    {
        SetUnhandledExceptionFilter(sub_14000a198);
    }
    if (data_140036cee != 0)
    {
        *nullptr = 0;
    }
    int32_t rcx_16 = 0;
    while (true)
    {
        int32_t var_7f8_1 = rcx_16;
        if (rcx_16 >= 0x100)
        {
            break;
        }
        *(&data_1400364d0 + (rcx_16 << 3)) = 0;
        rcx_16 = (rcx_16 + 1);
    }
    if (data_140026498 == 0)
    {
        wchar16* _Destination_1 = *__p__wpgmptr();
        if (wcschr(_Destination_1, 0x20) != 0)
        {
            int64_t rsi_2 = -1;
            do
            {
                rsi_2 = (rsi_2 + 1);
            } while (_Destination_1[rsi_2] != 0);
            wchar16* _Destination = sub_140009214();
            wcscpy_s(_Destination, (rsi_2 + 3), &data_140011624);
            wcscat_s(_Destination, (rsi_2 + 3), _Destination_1);
            wcscat_s(_Destination, (rsi_2 + 3), &data_140011624);
            _Destination_1 = _Destination;
        }
        data_140026498 = sub_14000dcc4(_Destination_1);
    }
    signal(2, sub_14000ba78);
    signal(0xf, sub_14000ba78);
    int32_t _Except = sub_14000ab18(rdi, arg2);
    sub_14000bb48();
    if (data_140015040 == 0)
    {
        _Except = 1;
    }
    exit(_Except);
    /* no return */
}

void* const sub_14000a944()
{
    sub_140001ac8(sub_14000dcc4(&data_140012d40), sub_14000dcc4(&data_140012d48), 0);
    sub_140001ac8(sub_14000dcc4(&data_140012d50), sub_14000dcc4(&data_140012d48), 0);
    sub_140001ac8(sub_14000dcc4(&data_140012d58), sub_14000dcc4(&data_140012d48), 0);
    sub_140001ac8(sub_14000dcc4(&data_140012d60), sub_14000dcc4(u"ml64"), 0);
    sub_140001ac8(sub_14000dcc4(&data_140012d74), sub_14000dcc4(&data_140012d7c), 0);
    sub_140001ac8(sub_14000dcc4(u"_NMAKE_VER"), sub_14000dcc4(u"14.00.23506.0"), 2);
    sub_140001ac8(sub_14000dcc4(u"MAKE"), sub_14000dcc4(data_140026498), 0x4c);
    void* const i = u".SUFFIXES";
    int32_t rdi = 0;
    uint64_t rbx_7 = 0;
    do
    {
        int32_t* rax_14 = sub_14000dcc4(i);
        int64_t* rbx_8 = *(rbx_7 + &data_140011770);
        data_140025c40 = rax_14;
        wcscpy_s(&data_140025c50, 0x400, *rbx_8);
        sub_1400012a0();
        void* rbx_9 = &rbx_8[1];
        while (true)
        {
            wchar16* _Source = *rbx_9;
            if (_Source == 0)
            {
                break;
            }
            wcscpy_s(&data_140025c50, 0x400, _Source);
            sub_140001044();
            rbx_9 = (rbx_9 + 8);
        }
        if (rdi == 0)
        {
            sub_14000169c();
        }
        sub_1400017f0();
        rdi = (rdi + 1);
        rbx_7 = (rdi << 3);
        i = *(rbx_7 + &data_140011900);
    } while (i != 0);
    return i;
}

uint64_t sub_14000ab18(int32_t arg1, int64_t arg2)
{
    void var_528;
    int64_t rax_1 = (__security_cookie ^ &var_528);
    wchar16* _Path_4 = nullptr;
    wchar16* _Buffer = nullptr;
    int32_t* rax_2 = sub_14000dcc4(u"MAKEDIR");
    wchar16* _Path_2 = _wgetcwd(nullptr, 0);
    wchar16* _Path_1 = _Path_2;
    wchar16* _Path = _Path_2;
    sub_140001ac8(rax_2, _Path_2, 0x42);
    _wdupenv_s(&_Buffer, nullptr, u"MAKEFLAGS");
    wchar16* _Source = _Buffer;
    if (_Source != 0)
    {
        int64_t rdx_1 = -1;
        do
        {
            rdx_1 = (rdx_1 + 1);
        } while (*(u"MAKEFLAGS=                  " + (rdx_1 << 1)) != 0);
        wcsncpy_s(u"                  ", (rdx_1 - 9), _Source, -1);
    }
    data_1400157ed = 1;
    int32_t* rax_3 = sub_14000dcc4(u"                  ");
    sub_140001ac8(sub_14000dcc4(u"MAKEFLAGS"), rax_3, 6);
    if (_Source != 0)
    {
        wchar16* i;
        do
        {
            wchar16 rcx_3 = *_Source;
            if (rcx_3 == 0)
            {
                break;
            }
            sub_14000b804(rcx_3, 1);
            i = _Source;
            _Source = &_Source[1];
        } while (i != -2);
    }
    free(_Buffer);
    _Buffer = nullptr;
    int64_t _RequiredCount;
    if (_wgetenv_s(&_RequiredCount, nullptr, 0, u"NTMAKEENV") == 0)
    {
        char rax_6 = data_140036ced;
        if (_RequiredCount != 0)
        {
            rax_6 = 1;
        }
        data_140036ced = rax_6;
    }
    sub_14000b43c((arg1 - 1), (arg2 + 8));
    if (data_140026488 == 0)
    {
        sub_140003a8c();
    }
    int16_t var_4d8;
    if ((data_1400157ec & 2) == 0)
    {
        sub_14000a944();
        data_140026490 = u"tools.ini";
        _wsearchenv(u"tools.ini", u"INIT", &var_4d8);
        if (var_4d8 != 0)
        {
            FILE* rax_7;
            wchar16* rcx_8;
            rax_7 = _wfsopen(&var_4d8, u"rt,ccs=unicode", 0x20);
            data_140026480 = rax_7;
            if (rax_7 == 0)
            {
                sub_140003898(0, 0x41d, &var_4d8);
                breakpoint();
            }
            char rax_8 = sub_140006c34(rcx_8);
            int32_t rax_9;
            int32_t rax_10;
            int16_t* r8_5;
            if (rax_8 != 0)
            {
                data_140025c20 = (data_140025c20 + 1);
                data_140026489 = 1;
                sub_14000c0b8();
                rax_10 = fclose(data_140026480);
                if (rax_10 == 0xffffffff)
                {
                    r8_5 = data_140026490;
                }
            }
            else
            {
                rax_9 = fclose(data_140026480);
                if (rax_9 == 0xffffffff)
                {
                    r8_5 = &var_4d8;
                }
            }
            if (((rax_8 != 0 && rax_10 == 0xffffffff) || (rax_8 == 0 && rax_9 == 0xffffffff)))
            {
                sub_140003898(0, 0x424, r8_5);
            }
        }
    }
    errno_t rax_12;
    int64_t r8_6;
    rax_12 = _wputenv_s(u"MAKEFLAGS", sub_14000dcc4(u"                  "));
    if (rax_12 != 0)
    {
        sub_140003898(0, 0x41f, r8_6);
    }
    if (data_140036e80 == 0)
    {
        int32_t rax_13;
        int64_t r8_7;
        rax_13 = _waccess(u"makefile", 4);
        if (rax_13 == 0)
        {
            int64_t* rax_14 = sub_14000dc58();
            rax_14[1] = sub_14000dcc4(u"makefile");
            data_140036e80 = rax_14;
        }
        else
        {
            void* rbx_3 = data_1400157f8;
            if (rbx_3 != 0)
            {
                int16_t* rbx_4 = *(rbx_3 + 8);
                int32_t rax_16 = _waccess(rbx_4, 4);
                if (rax_16 == 0)
                {
                    wchar16* rax_17 = wcsrchr(rbx_4, (rax_16 + 0x2e));
                    void** rax_18;
                    void var_288;
                    if (rax_17 != 0)
                    {
                        rax_18 = sub_14000d274(&var_4d8, 0x101, rbx_4, rax_17, &var_288);
                    }
                    if ((rax_17 == 0 || (rax_17 != 0 && rax_18 == 0)))
                    {
                        int64_t* rcx_14 = data_1400157f8;
                        data_1400157f8 = *rcx_14;
                        data_140036e80 = rcx_14;
                    }
                }
            }
            else if ((data_1400157ec & 1) == 0)
            {
                sub_140003898(0, 0x428, r8_7);
            }
        }
    }
    wchar16** rbx_5 = *__p__wenviron();
    wchar16* string = *rbx_5;
    if (string != 0)
    {
        do
        {
            wchar16* rax_21 = wcschr(string, 0x3d);
            if ((rax_21 != 0 && _wcsnicmp(*rbx_5, u"MAKEFLAGS", 8) != 0))
            {
                *rax_21 = 0;
                wchar16* rcx_17 = *rbx_5;
                if (*rcx_17 != 0)
                {
                    int16_t* _String = sub_14000dcc4(rcx_17);
                    int64_t rdx_8 = -1;
                    do
                    {
                        rdx_8 = (rdx_8 + 1);
                    } while (_String[rdx_8] != 0);
                    _wcsupr_s(_String, (rdx_8 + 1));
                    int32_t* rax_23 = sub_14000dcc4(&rax_21[1]);
                    data_1400157ed = 0;
                    *rax_21 = 0x3d;
                    if (sub_140001ac8(_String, rax_23, 4) == 0)
                    {
                        free(_String);
                        free(rax_23);
                    }
                }
            }
            rbx_5 = &rbx_5[1];
            string = *rbx_5;
        } while (string != 0);
        _Path = _Path_1;
    }
    void** i_1 = data_140036e80;
    if (i_1 != 0)
    {
        do
        {
            int16_t* rcx_23 = i_1[1];
            if ((*rcx_23 != 0x2d || (*rcx_23 == 0x2d && rcx_23[1] != 0)))
            {
                int32_t* _FileName = sub_14000dcc4(rcx_23);
                data_140026490 = _FileName;
                FILE* rax_27 = _wfsopen(_FileName, u"rt,ccs=unicode", 0x20);
                data_140026480 = rax_27;
                if (rax_27 == 0)
                {
                    sub_140003898(0, 0x41c, data_140026490);
                }
            }
            if ((*rcx_23 == 0x2d && rcx_23[1] == 0))
            {
                data_140026490 = sub_14000dcc4(u"STDIN");
                data_140026480 = __acrt_iob_func(0);
            }
            data_140025c20 = 0;
            data_140026489 = 0;
            sub_14000c0b8();
            FILE* rax_28 = __acrt_iob_func(0);
            FILE* _Stream = data_140026480;
            if ((_Stream != rax_28 && fclose(_Stream) == 0xffffffff))
            {
                sub_140003898(0, 0x424, data_140026490);
            }
            i_1 = *i_1;
        } while (i_1 != 0);
        i_1 = data_140036e80;
    }
    sub_140002f98(i_1);
    data_140025c24 = 0;
    int64_t rdx_11 = sub_14000d80c();
    uint64_t r15 = 1;
    if ((data_1400157ec & 1) != 0)
    {
        sub_1400039c0(8, rdx_11);
        void* i_2 = &data_1400364d0;
        void** j;
        do
        {
            for (j = *i_2; j != 0; j = *j)
            {
                void* rax_30 = j[2];
                if ((rax_30 != 0 && *(rax_30 + 8) != 0))
                {
                    sub_1400039c0(0xe, j[1]);
                    for (void** k = *j[2]; k != 0; k = *k)
                    {
                        int64_t rdx_13 = k[1];
                        if (rdx_13 != 0)
                        {
                            sub_14000bfe0(u"\t\t%s\n", rdx_13);
                        }
                    }
                }
            }
            i_2 = (i_2 + 8);
        } while (i_2 < &data_140036cd0);
        sub_14000c008();
        sub_1400039c0((j + 7), sub_14000bfb0());
        for (void** i_3 = data_140025c00; i_3 != 0; i_3 = *i_3)
        {
            void* const rcx_27 = &data_140012f88;
            if (i_3[5] != 0)
            {
                rcx_27 = u"%s::";
            }
            sub_1400039c0(0xa, sub_14000bfe0(rcx_27, i_3[2]));
            void** rdi_1 = i_3[3];
            if (rdi_1 != 0)
            {
                void* const rcx_28 = &data_140012f90;
                while (true)
                {
                    sub_14000bfe0(rcx_28, rdi_1[1]);
                    rdi_1 = *rdi_1;
                    if (rdi_1 == 0)
                    {
                        break;
                    }
                    rcx_28 = u"\t\t\t%s\n";
                }
            }
            sub_14000c008();
        }
        sub_14000bfe0(u"%s: ", u".SUFFIXES");
        void** i_4;
        for (i_4 = data_140025c18; i_4 != 0; i_4 = *i_4)
        {
            sub_14000bfe0(&data_140012f60, i_4[1]);
        }
        sub_14000c008();
        sub_1400039c0((i_4 + 9), sub_14000bfb0());
        void* r12 = &data_140025800;
        _Path_4 = 0x80;
        wchar16* _Path_7;
        do
        {
            void** i_5 = *r12;
            if (i_5 != 0)
            {
                void** j_1;
                do
                {
                    void* rax_32;
                    rax_32 = *(*(i_5[4] + 8) + 0x20);
                    rax_32 = (rax_32 & 0x20);
                    rax_32 = (-rax_32);
                    int64_t rdx_21 = sub_14000bfe0(u"%s:%c", i_5[1]);
                    int64_t rax_33 = i_5[1];
                    j_1 = i_5[4];
                    data_140026458 = rax_33;
                    data_140026470 = rax_33;
                    data_140026478 = rax_33;
                    for (; j_1 != 0; j_1 = *j_1)
                    {
                        int64_t* rsi_2 = j_1[1];
                        sub_1400039c0(0xb, rdx_21);
                        uint64_t r15_1 = 0;
                        int32_t k_1 = 1;
                        do
                        {
                            if ((rsi_2[4] & k_1) != 0)
                            {
                                sub_14000bfe0(u"-%c ", *(u"dinsb" + (r15_1 << 1)));
                            }
                            r15_1 = (r15_1 + 1);
                            k_1 = (k_1 * 2);
                        } while (k_1 < 0x10);
                        sub_1400039c0(0xa, sub_14000c458(*rsi_2, rsi_2[1]));
                        void** rbx_6 = rsi_2[2];
                        if (rbx_6 == 0)
                        {
                            rdx_21 = sub_14000c008();
                        }
                        else
                        {
                            rdx_21 = rbx_6[1];
                            void* const rcx_32;
                            if (rdx_21 != 0)
                            {
                                rcx_32 = &data_140012f90;
                                goto label_14000b245;
                            }
                            while (true)
                            {
                                rbx_6 = *rbx_6;
                                if (rbx_6 == 0)
                                {
                                    break;
                                }
                                rdx_21 = rbx_6[1];
                                if (rdx_21 != 0)
                                {
                                    rcx_32 = u"\t\t\t%s\n";
                                label_14000b245:
                                    rdx_21 = sub_14000bfe0(rcx_32, rdx_21);
                                }
                            }
                        }
                    }
                    i_5 = *i_5;
                    sub_14000c008();
                } while (i_5 != 0);
                r15 = (j_1 + 1);
            }
            r12 = (r12 + 8);
            _Path_7 = _Path_4;
            _Path_4 = (_Path_4 - r15);
        } while (_Path_7 != r15);
        sub_14000c008();
        sub_14000bfb0();
        _Path = _Path_1;
        data_140026458 = _Path_4;
        data_140026470 = _Path_4;
        data_140026478 = _Path_4;
    }
    int64_t rcx_33 = data_1400364b8;
    if (rcx_33 != 0)
    {
        free(rcx_33);
    }
    int32_t rbx_8;
    while (true)
    {
        int64_t* rax_34 = data_1400157f8;
        if (rax_34 == 0)
        {
            rbx_8 = _Path_4;
            break;
        }
        wchar16* rax_35;
        void** r9_2;
        rax_35 = wcspbrk(rax_34[1], &data_140011614);
        void* rcx_36 = *(data_1400157f8 + 8);
        if (rax_35 == 0)
        {
            char rdx_25 = data_1400157ee;
            _Path_1 = _Path_4;
            if ((sub_140002054(rcx_36, rdx_25, &_Path_1, r9_2) < 0 && (data_1400157ec & 8) != 0))
            {
                sub_140002f98(rax_34);
                rbx_8 = 0xff;
                break;
            }
        }
        else
        {
            FindFileHandle var_4e0;
            wchar16* i_6 = sub_140005ca8(rcx_36, &var_4d8, &var_4e0);
            if (i_6 == 0)
            {
                sub_140003898(0, 0x42d, *(data_1400157f8 + 8));
            }
            else
            {
                int32_t rax_37;
                do
                {
                    int32_t* rax_36;
                    uint32_t rdx_28;
                    void** r9_3;
                    rax_36 = sub_14000f570(*(data_1400157f8 + 8), i_6);
                    wchar16* _Path_3;
                    wchar16* _Path_5;
                    if ((var_4d8 & 0x10) != 0)
                    {
                        _Path_3 = _Path_5;
                    }
                    wchar16* _Path_6;
                    if (((var_4d8 & 0x10) == 0 || (((var_4d8 & 0x10) != 0 && _Path_3 == 0) && (_Path_3 >> 0x20) == 0)))
                    {
                        _Path_3 = _Path_6;
                    }
                    rdx_28 = data_1400157ee;
                    _Path_1 = _Path_3;
                    rax_37 = sub_140002054(rax_36, rdx_28, &_Path_1, r9_3);
                    free(rax_36);
                    if ((rax_37 < 0 && (data_1400157ec & 8) != 0))
                    {
                        break;
                    }
                    i_6 = sub_140005e30(&var_4d8, var_4e0);
                } while (i_6 != 0);
                if ((rax_37 < 0 && (data_1400157ec & 8) != 0))
                {
                    sub_140002f98(rax_34);
                    rbx_8 = -1;
                    break;
                }
            }
        }
        data_1400157f8 = *rax_34;
        *rax_34 = data_14003d0e0;
        data_14003d0e0 = rax_34;
    }
    _wchdir(_Path);
    __security_check_cookie((rax_1 ^ &var_528));
    return rbx_8;
}

void sub_14000b43c(int32_t arg1, int64_t arg2)
{
    if (arg1 != 0)
    {
        int64_t rdi_1 = arg2;
        arg_8 = 0;
        uint64_t rbp_1 = 0;
        int16_t j_1 = 0x20;
        uint64_t j_2;
        do
        {
            uint64_t r13_1 = rbp_1;
            int16_t* rsi_1 = *(rdi_1 + (r13_1 << 3));
            int16_t rax = *rsi_1;
            uint64_t j;
            if (rax == 0x40)
            {
                j = sub_1400036ec(&rsi_1[1]);
            }
            else if ((0xfffd & (rax - 0x2d)) != 0)
            {
                int16_t* rax_1;
                int64_t r8_1;
                rax_1 = wcschr(rsi_1, 0x3d);
                if (rax_1 == 0)
                {
                    sub_14000bb94(rsi_1);
                    if (*rsi_1 != 0)
                    {
                        int64_t* rax_7 = sub_14000dc58();
                        if (wcschr(rsi_1, 0x20) == 0)
                        {
                            rax_7[1] = sub_14000dcc4(rsi_1);
                        }
                        else
                        {
                            int64_t r14_1 = -1;
                            do
                            {
                                r14_1 = (r14_1 + 1);
                            } while (rsi_1[r14_1] != 0);
                            int16_t* rax_10 = sub_140009214();
                            int64_t rbx_4 = (r14_1 * 2);
                            *rax_10 = 0x22;
                            memcpy(&rax_10[1], rsi_1, rbx_4);
                            *((rbx_4 + rax_10) + 2) = 0x22;
                            rax_10[(r14_1 + 2)] = 0;
                            rax_7[1] = rax_10;
                            rdi_1 = arg2;
                        }
                        j = data_1400157f8;
                        j_2 = &data_1400157f8;
                        for (; j != 0; j = *j)
                        {
                            j_2 = j;
                        }
                        *j_2 = rax_7;
                        j_1 = (j + 0x20);
                    }
                }
                else
                {
                    if (rax_1 == rsi_1)
                    {
                        sub_140003898(0, 0x427, r8_1);
                    }
                    *rax_1 = 0;
                    int16_t* rax_2 = &rax_1[-1];
                    while ((!(*rax_2 != j_1 && *rax_2 != 9)))
                    {
                        rax_2 = (rax_2 - 2);
                    }
                    rax_2[1] = 0;
                    data_1400157ed = 1;
                    int32_t* rax_4 = sub_14000dcc4(&rax_1[(1 + wcsspn(&rax_1[1], &data_14001161c))]);
                    j = sub_140001ac8(sub_14000dcc4(&rsi_1[wcsspn(rsi_1, &data_14001161c)]), rax_4, 2);
                }
                *(rdi_1 + (r13_1 << 3)) = 0;
            }
            else
            {
                void* _String1 = &rsi_1[1];
                j = _wcsicmp(_String1, u"help");
                if (j == 0)
                {
                    j_2 = 1;
                    break;
                }
                while (*_String1 != 0)
                {
                    int64_t r8_4;
                    j = _wcsicmp(_String1, u"nologo");
                    if (j == 0)
                    {
                        j = sub_14000b804(*(_String1 + 4), 1);
                        break;
                    }
                    if (*_String1 == 0x3f)
                    {
                        j_2 = 1;
                        arg_8 = 1;
                        break;
                    }
                    if ((*_String1 != 0x66 && *_String1 != 0x46))
                    {
                        if ((0xffdf & (*_String1 - 0x58)) == 0)
                        {
                            wchar16* _FileName = (_String1 + 2);
                            if (*_FileName == 0)
                            {
                                rbp_1 = (rbp_1 + 1);
                                if (rbp_1 < arg1)
                                {
                                    _FileName = *(rdi_1 + (rbp_1 << 3));
                                }
                                if ((rbp_1 >= arg1 || (rbp_1 < arg1 && *_FileName == 0)))
                                {
                                    sub_140003898(0, 0x426, r8_4);
                                }
                            }
                            if ((*_FileName != 0x2d || (*_FileName == 0x2d && _FileName[1] != 0)))
                            {
                                if (_wfopen_s(&_Stream, _FileName, &data_140012e58) != 0)
                                {
                                    sub_140003898(0, 0x418, _FileName);
                                }
                                sub_14000bee0(_Stream);
                                j = fclose(_Stream);
                            }
                            if ((*_FileName == 0x2d && _FileName[1] == 0))
                            {
                                j = sub_14000bee0(__acrt_iob_func(1));
                            }
                            break;
                        }
                        j = sub_14000b804(*_String1, 1);
                        _String1 = (_String1 + 2);
                        continue;
                    }
                    void* rbx_5 = (_String1 + 2);
                    if (*rbx_5 == 0)
                    {
                        rbp_1 = (rbp_1 + 1);
                        if (rbp_1 < arg1)
                        {
                            rbx_5 = *(rdi_1 + (rbp_1 << 3));
                        }
                        if ((rbp_1 >= arg1 || (rbp_1 < arg1 && *rbx_5 == 0)))
                        {
                            sub_140003898(0, 0x425, r8_4);
                        }
                    }
                    int64_t* rax_15 = sub_14000dc58();
                    rax_15[1] = sub_14000dcc4(rbx_5);
                    uint64_t j_3 = &data_140036e80;
                    for (j_2 = data_140036e80; j_2 != 0; j_2 = *j_2)
                    {
                        j_3 = j_2;
                    }
                    *j_3 = rax_15;
                    rdi_1 = arg2;
                    break;
                }
                if ((!(*_String1 != 0 && j == 0)))
                {
                    goto label_14000b7dd;
                }
            }
            j_2 = arg_8;
        label_14000b7dd:
            rbp_1 = (rbp_1 + 1);
        } while (rbp_1 < arg1);
        if (j_2 != 0)
        {
            int32_t i = 0x64;
            int32_t i_1 = 0x67;
            int64_t rdx_3;
            do
            {
                rdx_3 = sub_1400039c0(i, u"NMAKE");
                i = (i + 1);
            } while (i < 0x67);
            do
            {
                if (i_1 == 0x71)
                {
                    i_1 = 0x72;
                }
                if (i_1 == 0x79)
                {
                    i_1 = 0x7a;
                }
                rdx_3 = sub_1400039c0(i_1, rdx_3);
                i_1 = (i_1 + 1);
            } while (i_1 <= 0x7c);
            exit(0);
            /* no return */
        }
    }
}

uint64_t sub_14000b804(wint_t arg1, char arg2)
{
    int64_t rdi;
    rdi = 0;
    char* rbx = &data_1400157ee;
    int64_t r14;
    r14 = arg2;
    uint64_t rax = towupper(arg1);
    uint32_t rsi = rax;
    switch (rsi)
    {
        case 0x41:
        {
            rdi = 0x10;
            break;
        }
        case 0x42:
        {
            data_140025c3a = 1;
            break;
        }
        case 0x43:
        {
            rdi = 0x20;
            break;
        }
        case 0x44:
        {
            rdi = 1;
            break;
        }
        case 0x45:
        {
            rbx = &data_1400157ec;
            break;
        }
        case 0x47:
        {
            data_14002648b = 1;
            break;
        }
        case 0x49:
        {
            rdi = 2;
            break;
        }
        case 0x4c:
        {
            rdi = 0x80;
            break;
        }
        case 0x4f:
        {
            data_140025c39 = 1;
            break;
        }
    }
    if ((rsi == 0x43 || rsi == 0x4c))
    {
        rbx = &data_1400157ec;
        data_140026488 = 1;
    }
    else if ((rsi == 0x45 || rsi == 0x4e))
    {
        rdi = 4;
    }
    if (((rsi > 0x4c && rsi != 0x4e) && rsi != 0x4f))
    {
        switch (rsi)
        {
            case 0x50:
            {
                rdi = 1;
                break;
            }
            case 0x51:
            {
                rdi = 8;
                break;
            }
            case 0x52:
            {
                rdi = 2;
                break;
            }
            case 0x53:
            {
                rdi = 8;
                break;
            }
            case 0x54:
            {
                rdi = 0x10;
                break;
            }
            case 0x55:
            {
                rdi = 0x40;
                break;
            }
            case 0x59:
            {
                rdi = 0x40;
                break;
            }
        }
        if (((((rsi == 0x50 || rsi == 0x51) || rsi == 0x52) || rsi == 0x54) || rsi == 0x59))
        {
            rbx = &data_1400157ec;
        }
        if (((((((rsi != 0x50 && rsi != 0x51) && rsi != 0x52) && rsi != 0x53) && rsi != 0x54) && rsi != 0x55) && rsi != 0x59))
        {
        label_14000b968:
            rax = sub_140003898(0, 0x429, arg1);
        }
    }
    if ((((((((rsi == 0x45 || rsi == 0x4e) || rsi == 0x4c) || rsi == 0x43) || rsi == 0x41) || rsi == 0x44) || rsi == 0x49) || ((rsi > 0x4c && rsi != 0x4e) && rsi != 0x4f)))
    {
        void* rcx;
        if (data_140036e78 != 0)
        {
            rcx = data_140036e70;
        }
        else
        {
            rax = sub_14000918c(u"MAKEFLAGS");
            data_140036e78 = rax;
            rcx = *(rax + 0x10);
            data_140036e70 = rcx;
        }
        if (r14 != 0)
        {
            *rbx = (*rbx | rdi);
            rax = *rbx;
            if (rsi == 0x51)
            {
                rax = (rax | 0x20);
                *rbx = rax;
            }
            if (wcschr(*(rcx + 8), rsi) == 0)
            {
                int16_t* rax_3 = wcschr(*(data_140036e70 + 8), 0x20);
                if (rax_3 != 0)
                {
                    *rax_3 = rsi;
                }
            }
        label_14000ba3d:
            int64_t r8_18;
            rax = _wputenv_s(u"MAKEFLAGS", sub_14000dcc4(u"                  "));
            if (rax != 0)
            {
                rax = sub_140003898(data_140025c20, 0x41f, r8_18);
            }
        }
        else if (rbx == &data_1400157ee)
        {
            rdi = (!rdi);
            *rbx = (*rbx & rdi);
            wchar16* rax_4 = wcschr(*(rcx + 8), rsi);
            if (rax_4 != 0)
            {
                wchar16 i;
                do
                {
                    i = rax_4[1];
                    *rax_4 = i;
                    rax_4 = &rax_4[1];
                } while (i != 0);
            }
            goto label_14000ba3d;
        }
    }
    if ((((((((((rsi <= 0x4c && rsi != 0x4c) && rsi != 0x20) && rsi != 0x41) && rsi != 0x42) && rsi != 0x43) && rsi != 0x44) && rsi != 0x45) && rsi != 0x47) && rsi != 0x49))
    {
        if (rsi != 0x4b)
        {
            goto label_14000b968;
        }
        data_140025c3b = 1;
    }
    return rax;
}

int64_t sub_14000ba78()
{
    signal(2, 1);
    int64_t r8 = signal(0xf, 1);
    if ((data_140036cec != 0 && ((data_1400157ee & 4) == 0 && (data_1400157ec & 0x10) == 0)))
    {
        wchar16* _FileName = data_140026470;
        if (_FileName != 0)
        {
            int32_t rax_1;
            rax_1 = _waccess(_FileName, 0);
            if (rax_1 != 0)
            {
                void** i = data_140025c10;
                wchar16* rdi_1 = data_140026470;
                int32_t rax_2;
                if (i != 0)
                {
                    do
                    {
                        rax_2 = _wcsicmp(i[1], rdi_1);
                        if (rax_2 == 0)
                        {
                            break;
                        }
                        i = *i;
                    } while (i != 0);
                    if (rax_2 != 0)
                    {
                        rdi_1 = data_140026470;
                    }
                }
                if (((i != 0 && rax_2 != 0) || i == 0))
                {
                    int32_t rax_3;
                    rax_3 = _wunlink(rdi_1);
                    if (rax_3 == 0)
                    {
                        r8 = sub_140003898(data_140025c20, 0xfa8, data_140026470);
                    }
                }
            }
        }
    }
    sub_140003898(0, 0x422, r8);
    /* tailcall */
    return sub_14000bb48();
}

int64_t sub_14000bb48()
{
    int64_t rax = _fcloseall();
    for (void** i = data_140036e88; i != 0; i = *i)
    {
        rax = _wunlink(i[1]);
        if ((data_1400157ee & 4) != 0)
        {
            sub_14000bfe0(u"\tdel %s\n", i[1]);
            rax = sub_14000bfb0();
        }
    }
    return rax;
}

int16_t* sub_14000bb94(int16_t* arg1)
{
    int64_t rax = -1;
    do
    {
        rax = (rax + 1);
    } while (arg1[rax] != 0);
    char rdx = 0;
    int16_t* i = &arg1[(rax - 1)];
    if ((*arg1 == 0x22 && *i == 0x22))
    {
        rdx = 1;
        goto label_14000bbd1;
    }
    for (; i > arg1; i = (i - 2))
    {
        if ((*i != 0x20 && *i != 0x2e))
        {
            break;
        }
    label_14000bbd1:
    }
    if (rdx != 0)
    {
        i = &i[1];
        *i = 0x22;
    }
    i[1] = 0;
    return i;
}

void* sub_14000bbec(int32_t arg1)
{
    void var_688;
    int64_t rax_1 = (__security_cookie ^ &var_688);
    void* rbx = nullptr;
    HINSTANCE hModule;
    if (data_14003ddf0 != 0)
    {
        hModule = data_14003ddf8;
    }
    else
    {
        void _Drive;
        void var_628;
        void _Dir;
        _wsplitpath_s(*__p__wpgmptr(), &_Drive, 3, &_Dir, 0x100, &var_628, 0x100, nullptr, 0);
        void _Buffer;
        _wmakepath_s(&_Buffer, 0x104, &_Drive, &_Dir, nullptr, nullptr);
        if (wcsncat_s(&var_628, 0x100, u"UI.DLL", -1) != 0)
        {
            hModule = nullptr;
            data_14003ddf8 = 0;
        }
        else
        {
            int32_t rax_4 = sub_1400092b4(&_Buffer, &var_628);
            hModule = data_14003ddf8;
            if (rax_4 < 0)
            {
                hModule = nullptr;
            }
            data_14003ddf8 = hModule;
        }
        data_14003ddf0 = 1;
    }
    HRSRC hResInfo = FindResourceExW(hModule, 6, ((arg1 >> 4) + 1), data_14003de00);
    if (hResInfo != 0)
    {
        int64_t* rax_7 = LoadResource(hModule, hResInfo);
        int64_t* rcx_6 = rax_7;
        if (rax_7 != 0)
        {
            int32_t i_1 = (arg1 & 0xf);
            if (i_1 != 0)
            {
                int32_t i;
                do
                {
                    rcx_6 = (rcx_6 + ((*rcx_6 + 1) << 1));
                    i = i_1;
                    i_1 = (i_1 - 1);
                } while (i != 1);
            }
            rbx = ((0 - 0) & (rcx_6 + 2));
        }
    }
    __security_check_cookie((rax_1 ^ &var_688));
    return rbx;
}

int64_t sub_14000bd80() __pure
{
    return &data_14003d120;
}

int64_t _snprintf(wchar16* arg1, uint64_t arg2, wchar16* arg3, int64_t arg4)
{
    arg_18 = arg3;
    _ArgList = arg4;
    int64_t rax = __stdio_common_vswprintf_s(data_14003d120, arg1, arg2, arg3, nullptr, &_ArgList);
    if (rax < 0)
    {
        rax = 0xffffffff;
    }
    return rax;
}

int64_t sub_14000bddc() __pure
{
    return &data_14003d130;
}

int64_t swscanf_s(wchar16* arg1, wchar16* arg2, int64_t arg3)
{
    arg_10 = arg2;
    _ArgList = arg3;
    int64_t r9;
    arg_20 = r9;
    return __stdio_common_vswscanf((data_14003d130 | 1), arg1, -1, arg2, nullptr, &_ArgList);
}

uint64_t IsConsole(FILE* arg1)
{
    intptr_t rax_1 = _get_osfhandle(_fileno(arg1));
    uint64_t rax_3;
    if ((GetFileType(rax_1) & 0xffff7fff) == 2)
    {
        rax_3 = GetConsoleMode(rax_1, &lpMode) != 0;
    }
    else
    {
        rax_3 = 0;
    }
    return rax_3;
}

int64_t sub_14000be7c(wchar16* arg1, int64_t arg2)
{
    arg_8 = arg1;
    arg_10 = arg2;
    int64_t r8;
    arg_18 = r8;
    int64_t r9;
    arg_20 = r9;
    return sub_14000bf3c(arg1, &arg_10);
}

uint64_t sub_14000bea4()
{
    wint_t rax;
    if (data_140037093 == 0)
    {
        rax = fputwc(0xa, __acrt_iob_func(2));
    }
    else
    {
        rax = _putwch(0xa);
    }
    return rax;
}

uint64_t sub_14000bee0(FILE* arg1)
{
    int32_t _FileHandleDst = _fileno(__acrt_iob_func(2));
    _dup2(_fileno(arg1), _FileHandleDst);
    uint64_t rax_3 = IsConsole(__acrt_iob_func(2));
    data_140037093 = rax_3;
    return rax_3;
}

int64_t sub_14000bf3c(wchar16* arg1, va_list arg2)
{
    int64_t rax;
    if (data_140037093 == 0)
    {
        FILE* _Stream = __acrt_iob_func(2);
        rax = __stdio_common_vfwprintf(data_14003d120, _Stream, arg1, nullptr, arg2);
    }
    else
    {
        rax = __conio_common_vcwprintf(data_14003d120, arg1, nullptr, arg2);
    }
    return rax;
}

int64_t sub_14000bfb0()
{
    if (data_1400370b0 == 0)
    {
        /* tailcall */
        return fflush(__acrt_iob_func(1));
    }
    return 0;
}

int64_t sub_14000bfe0(wchar16* arg1, int64_t arg2)
{
    arg_8 = arg1;
    arg_10 = arg2;
    int64_t r8;
    arg_18 = r8;
    int64_t r9;
    arg_20 = r9;
    return sub_14000c044(arg1, &arg_10);
}

uint64_t sub_14000c008()
{
    wint_t rax;
    if (data_1400370b0 == 0)
    {
        rax = fputwc(0xa, __acrt_iob_func(1));
    }
    else
    {
        rax = _putwch(0xa);
    }
    return rax;
}

int64_t sub_14000c044(wchar16* arg1, va_list arg2)
{
    int64_t rax;
    if (data_1400370b0 == 0)
    {
        FILE* _Stream = __acrt_iob_func(1);
        rax = __stdio_common_vfwprintf(data_14003d120, _Stream, arg1, nullptr, arg2);
    }
    else
    {
        rax = __conio_common_vcwprintf(data_14003d120, arg1, nullptr, arg2);
    }
    return rax;
}

void** sub_14000c0b8()
{
    int64_t rbx;
    arg_8 = rbx;
    int32_t rcx_1 = (data_140015048 + 1);
    data_14002648a = 1;
    data_140015048 = (rcx_1 + 1);
    *(rcx_1 + &data_140036cd0) = 0x17;
    int64_t rax_1 = (rcx_1 + 1);
    if (rax_1 >= 0x10)
    {
        _lockexit();
        breakpoint();
    }
    *(rax_1 + &data_140036cd0) = 0;
    data_140025c24 = data_140025c20;
    void** rax_3;
    char* r8;
    rax_3 = sub_140007f84((rcx_1 + 1), 0);
    int64_t rdx = data_140015048;
    int64_t r14;
    r14 = rax_3;
    int64_t rsi;
    rsi = 0;
    int64_t rcx_3 = rdx;
    r8 = *(rdx + &data_140036cd0);
    while (true)
    {
        rbx = r8;
        if (r8 == 0x17)
        {
            break;
        }
        if ((rbx & 0x40) != 0)
        {
            data_140015048 = (rdx - 1);
            rcx_3 = &data_140011b50[(r8 & 0xf)]();
        label_14000c210:
            rdx = data_140015048;
        }
        else if ((rbx & 0x10) == 0)
        {
            uint64_t rbp_2 = (rbx << 3);
            uint64_t rdi_1 = *(((r14 & 0xf) + rbp_2) + 0x140011ba0);
            void** rax_18;
            if ((rdi_1 & 0x20) != 0)
            {
                rax_18 = sub_140003898(data_140025c24, (rdi_1 + 0x3e8), &data_140025c50);
                rdx = data_140015048;
            }
            rdx = (rdx - 1);
            data_140015048 = rdx;
            if (rdi_1 < 0)
            {
                if (rsi == 0)
                {
                    rdx = rbx;
                    rax_18 = sub_140007f84(rcx_3, rdx);
                    rdx = data_140015048;
                    rsi = rax_18;
                }
                rdi_1 = ((rdi_1 & 0xf) + *(((rsi & 0xf) + rbp_2) + 0x140011b80));
            }
            char* r9_1 = &data_140011be0[rdi_1];
            rcx_3 = rdi_1;
            r8 = *r9_1;
            if (r8 != 0)
            {
                int32_t i;
                do
                {
                    rax_18 = *(r8 + r9_1);
                    rdx = (rdx + 1);
                    rcx_3 = rdx;
                    *(rcx_3 + &data_140036cd0) = rax_18;
                    i = r8;
                    r8 = (r8 - 1);
                } while (i != 1);
                data_140015048 = rdx;
            }
        }
        else
        {
            if (rbx != r14)
            {
                rcx_3 = sub_140003898(data_140025c24, 0x409, &data_140025c50);
                goto label_14000c210;
            }
            rdx = (rdx - 1);
            data_140015048 = rdx;
            rcx_3 = *(rdx + &data_140036cd0);
            if ((rcx_3 & 0x40) != 0)
            {
                data_140015048 = (rdx - 1);
                rcx_3 = &data_140011b50[(rcx_3 & 0xf)]();
                rdx = data_140015048;
            }
            int32_t rax_11 = data_140025c20;
            data_140025c24 = rax_11;
            if (rsi == 0)
            {
                rdx = *(rdx + &data_140036cd0);
                char rax_14;
                rax_14 = sub_140007f84(rcx_3, rdx);
                r14 = rax_14;
                data_140025c24 = data_140025c20;
                goto label_14000c210;
            }
            if (data_140025c50 == 0xa)
            {
                data_140025c24 = (rax_11 - 1);
            }
            r14 = rsi;
            rsi = 0;
        }
        rax_3 = rdx;
        r8 = *(rax_3 + &data_140036cd0);
    }
    data_140015048 = (rdx - 1);
    return rax_3;
}

int64_t sub_14000c304(int64_t arg1, int64_t arg2)
{
    int64_t rax = -1;
    do
    {
        rax = (rax + 1);
    } while (*(arg2 + (rax << 1)) != 0);
    int64_t rcx = (arg1 + rax);
    if (rcx > 0x28)
    {
        sub_14000bfe0(u"\n\t\t\t", arg2);
        rcx = 0;
    }
    return rcx;
}

int64_t sub_14000c33c(int32_t arg1, int64_t arg2, struct FILETIME arg3)
{
    void var_a8;
    int64_t rax_1 = (__security_cookie ^ &var_a8);
    struct FILETIME lpFileTime;
    lpFileTime.dwLowDateTime = arg3.dwLowDateTime;
    lpFileTime.dwHighDateTime = arg3.dwHighDateTime;
    int64_t rax_2;
    if (arg3 == 0)
    {
        rax_2 = sub_1400039c0((arg3 + 6), (arg1 + 0x1a));
    }
    else
    {
        void var_70;
        rax_2 = FileTimeToLocalFileTime(&lpFileTime, &var_70);
        if (rax_2 != 0)
        {
            void var_68;
            rax_2 = FileTimeToSystemTime(&var_70, &var_68);
            if (rax_2 != 0)
            {
                void lpDateStr;
                rax_2 = GetDateFormatW(0x400, 0, &var_68, u"ddd, MMM dd yyyy", &lpDateStr, 0x14);
                if (rax_2 != 0)
                {
                    void lpTimeStr;
                    rax_2 = GetTimeFormatW(0x400, 0, &var_68, u"HH:mm:ss", &lpTimeStr, 0xc);
                    if (rax_2 != 0)
                    {
                        int32_t var_80_2;
                        var_80_2 = arg2;
                        void* var_88_2;
                        var_88_2 = 0x20;
                        rax_2 = sub_1400039c0(4, &lpDateStr);
                    }
                }
            }
        }
    }
    __security_check_cookie((rax_1 ^ &var_a8));
    return rax_2;
}

char (*)[0x104] sub_14000c458(void** arg1, int64_t arg2)
{
    void var_2c8;
    int64_t rax_1 = (__security_cookie ^ &var_2c8);
    void** i = arg1;
    int64_t var_298 = arg2;
    char (* j)[0x104] = sub_1400039c0(0xc, arg2);
    char (* j_2)[0x104] = nullptr;
    for (; i != 0; i = *i)
    {
        wchar16* rax_2 = wcschr(i[1], 0x24);
        uint64_t _Str_1 = i[1];
        FindFileHandle var_2a8;
        void var_288;
        if (rax_2 == 0)
        {
            if (wcspbrk(_Str_1, &data_140011614) == 0)
            {
                sub_14000bfe0(&data_140012f60, i[1]);
                j = sub_14000c304(j_2, i[1]);
                j_2 = j;
            }
            else
            {
                for (j = sub_140005ca8(i[1], &var_288, &var_2a8); j != 0; j = sub_140005e30(&var_288, var_2a8))
                {
                    int32_t* rax_8 = sub_14000f570(i[1], j);
                    sub_14000bfe0(&data_140012f60, rax_8);
                    j_2 = sub_14000c304(j_2, rax_8);
                    free(rax_8);
                }
            }
        }
        else
        {
            wchar16* _Context = nullptr;
            int32_t* _String_1 = sub_14000e740(_Str_1, 1, &var_298);
            int32_t* _String = _String_1;
            while (true)
            {
                wchar16* _Str = wcstok_s(_String, &data_14001161c, &_Context);
                if (_Str == 0)
                {
                    break;
                }
                if (wcspbrk(_Str, &data_140011614) == 0)
                {
                    sub_14000bfe0(&data_140012f60, _Str);
                    j_2 = sub_14000c304(j_2, _Str);
                }
                else
                {
                    for (wchar16* j_1 = sub_140005ca8(_Str, &var_288, &var_2a8); j_1 != 0; j_1 = sub_140005e30(&var_288, var_2a8))
                    {
                        int32_t* rax_4 = sub_14000f570(_Str, j_1);
                        sub_14000bfe0(&data_140012f60, rax_4);
                        j_2 = sub_14000c304(j_2, rax_4);
                        free(rax_4);
                    }
                }
                _String = nullptr;
            }
            j = free(_String_1);
        }
    }
    __security_check_cookie((rax_1 ^ &var_2c8));
    return j;
}

int64_t sub_14000c658(char arg1)
{
    char* rbx = data_1400370d0;
    data_1400370d0 = (rbx - 0x10);
    int64_t rax;
    if ((*rbx == 0x16 && *(rbx - 0x10) == 0x16))
    {
        uint32_t rcx = arg1;
        int64_t rcx_9;
        if (rcx > 0xa)
        {
            if (rcx != 0xb)
            {
                if (rcx == 0xc)
                {
                    *(rbx - 8) = (*(rbx - 8) >> *(rbx + 8));
                    goto label_14000c902;
                }
                if (rcx == 0xd)
                {
                    *(rbx - 8) = (*(rbx - 8) << *(rbx + 8));
                    goto label_14000c902;
                }
                if (rcx == 0xe)
                {
                    *(rbx - 8) = (*(rbx - 8) - *(rbx + 8));
                    goto label_14000c902;
                }
                if (rcx == 0xf)
                {
                    *(rbx - 8) = (*(rbx - 8) + *(rbx + 8));
                    goto label_14000c902;
                }
                int64_t r8;
                if (rcx != 0x10)
                {
                    if (rcx == 0x11)
                    {
                        if (*(rbx + 8) == 0)
                        {
                            sub_140003898(data_140025c20, 0x437, r8);
                        }
                        int64_t rax_3;
                        int64_t rdx_1;
                        rdx_1 = HIGHQ(*(rbx - 8));
                        rax_3 = LOWQ(*(rbx - 8));
                        *(rbx + 8);
                        rax = (COMBINE(rdx_1, rax_3) / *(rbx + 8));
                    }
                    else
                    {
                        if (rcx != 0x12)
                        {
                            goto label_14000c906;
                        }
                        rax = (*(rbx - 8) * *(rbx + 8));
                    }
                    *(rbx - 8) = rax;
                    goto label_14000c902;
                }
                if (*(rbx + 8) == 0)
                {
                    sub_140003898(data_140025c20, 0x437, r8);
                }
                int64_t rax_5;
                int64_t rdx_3;
                rdx_3 = HIGHQ(*(rbx - 8));
                rax_5 = LOWQ(*(rbx - 8));
                *(rbx + 8);
                *(rbx - 8) = (COMBINE(rdx_3, rax_5) % *(rbx + 8));
                goto label_14000c902;
            }
            rcx_9 = *(rbx - 8) <= *(rbx + 8);
        label_14000c864:
            *(rbx - 8) = rcx_9;
        label_14000c902:
            rax = 1;
        }
        else
        {
            if (rcx == 0xa)
            {
                rcx_9 = *(rbx - 8) >= *(rbx + 8);
                goto label_14000c864;
            }
            if (rcx == 1)
            {
                rcx_9 = 0;
            }
            else
            {
                if (rcx != 2)
                {
                    switch (rcx)
                    {
                        case 3:
                        {
                            *(rbx - 8) = (*(rbx - 8) | *(rbx + 8));
                            goto label_14000c902;
                        }
                        case 4:
                        {
                            *(rbx - 8) = (*(rbx - 8) ^ *(rbx + 8));
                            goto label_14000c902;
                        }
                        case 5:
                        {
                            *(rbx - 8) = (*(rbx - 8) & *(rbx + 8));
                            goto label_14000c902;
                        }
                        case 6:
                        {
                            rcx_9 = *(rbx + 8) != *(rbx - 8);
                            goto label_14000c864;
                        }
                        case 7:
                        {
                            rcx_9 = *(rbx + 8) == *(rbx - 8);
                            goto label_14000c864;
                        }
                        case 8:
                        {
                            rcx_9 = *(rbx - 8) > *(rbx + 8);
                            goto label_14000c864;
                        }
                    }
                    if (rcx != 9)
                    {
                        goto label_14000c906;
                    }
                    rcx_9 = *(rbx - 8) < *(rbx + 8);
                    goto label_14000c864;
                }
                rcx_9 = 0;
                if (*(rbx - 8) == 0)
                {
                    goto label_14000c864;
                }
            }
            if (((rcx == 1 && *(rbx - 8) != 0) || (((rcx == 1 && *(rbx - 8) == 0) || rcx != 1) && *(rbx + 8) != 0)))
            {
                rcx_9 = 1;
                goto label_14000c864;
            }
            if ((((rcx == 1 && *(rbx - 8) == 0) || rcx != 1) && *(rbx + 8) == 0))
            {
                goto label_14000c864;
            }
        }
    }
    if (((*rbx != 0x16 || (*rbx == 0x16 && *(rbx - 0x10) != 0x16)) && *rbx != 0x17))
    {
    label_14000c906:
        rax = 0;
    }
    if ((((*rbx != 0x16 || (*rbx == 0x16 && *(rbx - 0x10) != 0x16)) && *rbx != 0x17) || (*rbx == 0x16 && *(rbx - 0x10) == 0x16)))
    {
        return rax;
    }
    if (((*rbx != 0x16 || (*rbx == 0x16 && *(rbx - 0x10) != 0x16)) && *rbx == 0x17))
    {
        if (*(rbx - 0x10) != 0x17)
        {
            goto label_14000c906;
        }
        rax = *(rbx - 8);
        int64_t r8_2 = (*(rbx + 8) - rax);
        int32_t r8_3;
        while (true)
        {
            int16_t rdx_5 = *rax;
            int16_t temp3_1 = *(rax + r8_2);
            if (rdx_5 != temp3_1)
            {
                r8_3 = ((r8_2 - r8_2) | 1);
                break;
            }
            rax = (rax + 2);
            if (rdx_5 == 0)
            {
                r8_3 = 0;
                break;
            }
        }
        uint32_t rdx_6 = arg1;
        int64_t rcx_21;
        if (rdx_6 == 6)
        {
            rcx_21 = r8_3 != 0;
        }
        else if (rdx_6 == 7)
        {
            rcx_21 = r8_3 == 0;
        }
        else if (rdx_6 == 8)
        {
            rcx_21 = r8_3 > 0;
        }
        else if (rdx_6 == 9)
        {
            rcx_21 = r8_3 < 0;
        }
        else if (rdx_6 == 0xa)
        {
            rcx_21 = r8_3 >= 0;
        }
        else
        {
            if (rdx_6 != 0xb)
            {
                goto label_14000c906;
            }
            rcx_21 = r8_3 <= 0;
        }
        *(rbx - 8) = rcx_21;
        *(rbx - 0x10) = 0x16;
        goto label_14000c902;
    }
}

int64_t sub_14000c914(char arg1)
{
    char* rdx = data_1400370d0;
    if (*rdx == 0x16)
    {
        uint32_t rcx = arg1;
        int64_t rax_1;
        if (rcx == 0x13)
        {
            rax_1 = (-*(rdx + 8));
        }
        if (rcx == 0x14)
        {
            rax_1 = (!*(rdx + 8));
        }
        if (rcx == 0x15)
        {
            rax_1 = *(rdx + 8) == 0;
        }
        if (((rcx == 0x13 || rcx == 0x14) || rcx == 0x15))
        {
            *(rdx + 8) = rax_1;
            rax_1 = 1;
            return rax_1;
        }
    }
    int64_t rax;
    rax = 0;
    return rax;
}

int16_t* sub_14000c958()
{
    int16_t* rax_1 = (data_1400370d8 + 2);
    data_1400370d8 = rax_1;
    int16_t* rbx = rax_1;
    int16_t i = *rax_1;
    if (i != 0)
    {
        do
        {
            if (i == 0x22)
            {
                if (rax_1[1] != 0x22)
                {
                    break;
                }
                rax_1 = &rax_1[1];
            }
            rax_1 = &rax_1[1];
            data_1400370d8 = rax_1;
            i = *rax_1;
        } while (i != 0);
    }
    if ((i == 0 || (i != 0 && *rax_1 == 0)))
    {
        sub_140003898(data_140025c20, 0x3fe, 0x22);
        rax_1 = data_1400370d8;
    }
    *rax_1 = 0;
    data_1400370d8 = (data_1400370d8 + 2);
    return rbx;
}

int16_t* sub_14000c9e0()
{
    int16_t* rax_1 = (data_1400370d8 + 2);
    data_1400370d8 = rax_1;
    int16_t* rbx = rax_1;
    int16_t i = *rax_1;
    if (i != 0)
    {
        do
        {
            if ((i == 0x5e && rax_1[1] == 0x5d))
            {
                int64_t r8_1 = -1;
                do
                {
                    r8_1 = (r8_1 + 1);
                } while (rax_1[(1 + r8_1)] != 0);
                memmove(rax_1, &rax_1[1], ((r8_1 << 1) + 2));
                rax_1 = data_1400370d8;
            }
            if (((i != 0x5e || (i == 0x5e && rax_1[1] != 0x5d)) && i == 0x5d))
            {
                break;
            }
            rax_1 = &rax_1[1];
            data_1400370d8 = rax_1;
            i = *rax_1;
        } while (i != 0);
    }
    if ((i == 0 || (i != 0 && *rax_1 == 0)))
    {
        sub_140003898(data_140025c20, 0x3fe, 0x5d);
        rax_1 = data_1400370d8;
    }
    *rax_1 = 0;
    data_1400370d8 = (data_1400370d8 + 2);
    return rbx;
}

uint64_t sub_14000caa0(char arg1, int64_t arg2, int64_t arg3)
{
    int64_t rdi;
    rdi = arg1;
    int64_t rbx;
    if (arg1 == 0x19)
    {
        rbx = 3;
    }
    else if (rdi == 0)
    {
        rbx = 4;
    }
    else if (rdi <= 0x15)
    {
        rbx = rdi > 0x12;
        rbx = (rbx + 1);
    }
    else
    {
        rbx = 0;
    }
    uint64_t rax_1 = rbx;
    if (*(((data_1400370b1 * 5) + rax_1) + &data_140011cc0) == 0)
    {
        rax_1 = sub_140003898(data_140025c20, 0x3ff, arg3);
    }
    data_1400370b1 = rbx;
    data_1400370c0 = arg2;
    data_1400370b3 = rdi;
    data_1400370b8 = rdi;
    return rax_1;
}

int16_t* sub_14000cb34()
{
    int16_t* rax = data_1400370d8;
    while (true)
    {
        int16_t rcx_1 = *rax;
        if ((rcx_1 != 0x20 && rcx_1 != 9))
        {
            int64_t r8;
            if (rcx_1 != 0x28)
            {
                r8 = sub_140003898(data_140025c20, 0x3ff, r8);
                rax = data_1400370d8;
            }
            int16_t rcx_3;
            while (true)
            {
                rax = &rax[1];
                data_1400370d8 = rax;
                rcx_3 = *rax;
                if (rcx_3 == 0x20)
                {
                    continue;
                }
                if ((rcx_3 != 0x20 && rcx_3 != 9))
                {
                    break;
                }
                if (rcx_3 != 9)
                {
                    /* nop */
                }
            }
            int16_t* rsi;
            if (rcx_3 != 0x22)
            {
                rsi = rax;
                int16_t* rdi_1;
                int16_t i;
                do
                {
                    rdi_1 = rax;
                    while (true)
                    {
                        i = *rax;
                        rax = &rax[1];
                        data_1400370d8 = rax;
                        if (i == 0)
                        {
                            r8 = sub_140003898(data_140025c20, 0x3ff, r8);
                            rax = data_1400370d8;
                        }
                        if (i == 0x29)
                        {
                            break;
                        }
                        if (i == 0x20)
                        {
                            continue;
                        }
                        if ((i != 0x20 && i != 9))
                        {
                            break;
                        }
                        if (i != 9)
                        {
                            /* nop */
                        }
                    }
                } while (i != 0x29);
                *rdi_1 = 0;
            }
            else
            {
                int16_t* rax_1;
                int64_t r8_1;
                rax_1 = sub_14000c958();
                int16_t* rcx_4 = data_1400370d8;
                rsi = rax_1;
                int16_t rdx_1;
                while (true)
                {
                    rdx_1 = *rcx_4;
                    if ((rdx_1 != 0x20 && rdx_1 != 9))
                    {
                        break;
                    }
                    rcx_4 = &rcx_4[1];
                    data_1400370d8 = rcx_4;
                }
                if (rdx_1 != 0x29)
                {
                    sub_140003898(data_140025c20, 0x3ff, r8_1);
                    rcx_4 = data_1400370d8;
                }
                data_1400370d8 = &rcx_4[1];
            }
            return rsi;
        }
        rax = &rax[1];
        data_1400370d8 = rax;
    }
}

uint64_t sub_14000cc64()
{
    int16_t* rcx = data_1400370d8;
    while (true)
    {
        wint_t _C = *rcx;
        if ((_C != 0x20 && _C != 9))
        {
            void** r8;
            if ((_C >= 0x80 || (_C < 0x80 && (*(_C + &data_140011640) & 2) == 0)))
            {
                r8 = &data_1400151f0;
            }
            void* i;
            int16_t j;
            if ((_C < 0x80 && (*(_C + &data_140011640) & 2) != 0))
            {
                i = data_1400150a0;
                r8 = &data_1400150a0;
                if (i != 0)
                {
                    int16_t* rdx_1;
                    do
                    {
                        j = *i;
                        rdx_1 = rcx;
                        if (j == 0)
                        {
                            break;
                        }
                        while (*rdx_1 == j)
                        {
                            i = (i + 2);
                            rdx_1 = &rdx_1[1];
                            j = *i;
                            if (j == 0)
                            {
                                break;
                            }
                        }
                        if (*i == 0)
                        {
                            break;
                        }
                        r8 = &r8[2];
                        i = *r8;
                    } while (i != 0);
                    if (j == 0)
                    {
                        rcx = rdx_1;
                        data_1400370d8 = rdx_1;
                    }
                }
            }
            uint64_t rax_16;
            uint64_t rdx_2;
            if (((((_C >= 0x80 || (_C < 0x80 && (*(_C + &data_140011640) & 2) == 0)) || (((_C < 0x80 && (*(_C + &data_140011640) & 2) != 0) && i != 0) && j == 0)) || ((_C < 0x80 && (*(_C + &data_140011640) & 2) != 0) && i == 0)) && *r8 != 0))
            {
                rcx = r8[1];
                rdx_2 = 0;
            label_14000ceb4:
                rax_16 = sub_14000caa0(rcx, rdx_2, r8);
            label_14000cedf:
                return rax_16;
            }
            if ((((((_C >= 0x80 || (_C < 0x80 && (*(_C + &data_140011640) & 2) == 0)) || (((_C < 0x80 && (*(_C + &data_140011640) & 2) != 0) && i != 0) && j == 0)) || ((_C < 0x80 && (*(_C + &data_140011640) & 2) != 0) && i == 0)) && *r8 == 0) || (((_C < 0x80 && (*(_C + &data_140011640) & 2) != 0) && i != 0) && j != 0)))
            {
                if (_C == 0x2d)
                {
                    rdx_2 = 0;
                    bool cond:0_1 = data_1400370b3 != 0x16;
                    data_1400370d8 = &rcx[1];
                    if (cond:0_1)
                    {
                        rcx = 0x13;
                    }
                    else
                    {
                        rcx = 0xe;
                    }
                    goto label_14000ceb4;
                }
                if (_C == 0x22)
                {
                    uint64_t rax_2;
                    rax_2 = sub_14000c958();
                    rdx_2 = rax_2;
                    rcx = 0x17;
                    goto label_14000ceb4;
                }
                if (_C == 0x5b)
                {
                    uint64_t rax_3;
                    rax_3 = sub_14000c9e0();
                    rdx_2 = rax_3;
                    rcx = 0x18;
                    goto label_14000ceb4;
                }
                int32_t rax_4;
                rax_4 = iswdigit(_C);
                if (rax_4 != 0)
                {
                    int64_t rdi_1 = data_1400370d8;
                    *_errno() = 0;
                    uint64_t rbx_1 = wcstol(data_1400370d8, &data_1400370d8, 0);
                    if (*_errno() == 0x22)
                    {
                        **&data_1400370d8 = 0;
                        sub_140003898(data_140025c20, 0x436, rdi_1);
                    }
                    wint_t rax_9;
                    rax_9 = towupper(**&data_1400370d8);
                    if (rax_9 == 0x4c)
                    {
                        data_1400370d8 = (data_1400370d8 + 2);
                    }
                    rdx_2 = rbx_1;
                    goto label_14000ceb2;
                }
                if (_C == 0)
                {
                    rdx_2 = 0;
                    data_1400370b2 = 1;
                    rcx = nullptr;
                    goto label_14000ceb4;
                }
                int32_t rax_12;
                if (_wcsnicmp(data_1400370d8, u"DEFINED", 7) == 0)
                {
                    data_1400370d8 = (data_1400370d8 + 0xe);
                    sub_14000cb34();
                    rax_12 = sub_14000d180();
                label_14000ceaf:
                    rdx_2 = rax_12;
                label_14000ceb2:
                    rcx = 0x16;
                    goto label_14000ceb4;
                }
                if (_wcsnicmp(data_1400370d8, u"EXISTS", 6) == 0)
                {
                    data_1400370d8 = (data_1400370d8 + 0xc);
                label_14000cea4:
                    rax_12 = _waccess(sub_14000cb34(), 0);
                    rax_12 = rax_12 == 0;
                    goto label_14000ceaf;
                }
                int32_t rax_14;
                int64_t r8_2;
                rax_14 = _wcsnicmp(data_1400370d8, u"EXIST", 5);
                if (rax_14 == 0)
                {
                    data_1400370d8 = (data_1400370d8 + 0xa);
                    goto label_14000cea4;
                }
                rax_16 = sub_140003898(data_140025c20, 0x3ff, r8_2);
                goto label_14000cedf;
            }
        }
        rcx = &rcx[1];
        data_1400370d8 = rcx;
    }
}

void* sub_14000cee0()
{
    int128_t* rax = data_1400370d0;
    int64_t r8;
    if (rax < &data_14003b0e0)
    {
        r8 = sub_140003898(data_140025c20, 0x3ff, r8);
        rax = data_1400370d0;
    }
    int128_t* rcx_3 = data_1400370c8;
    if (rcx_3 > &data_14003b0d0)
    {
        sub_140003898(data_140025c20, 0x412, r8);
        rax = data_1400370d0;
        rcx_3 = data_1400370c8;
    }
    *rcx_3 = *rax;
    data_1400370c8 = &rcx_3[1];
    data_1400370d0 = (rax - 0x10);
    return (rax - 0x10);
}

void* sub_14000cf64()
{
    data_1400370b1 = 3;
    void* i = &data_1400370e0;
    data_1400370d0 = &data_14003b0e0;
    bool rbx = false;
    data_1400370c8 = &data_1400370e0;
    data_1400370b2 = 0;
    data_1400370b3 = 0x19;
    int64_t r8;
    int64_t r8_1 = sub_14000caa0(0x19, 0, r8);
    bool cond:0 = data_1400370b2 != 0;
    int128_t* rdx = data_1400370d0;
    *rdx = *data_1400370b8;
    if ((!cond:0))
    {
        do
        {
            r8_1 = sub_14000cc64();
            char rax_1 = data_1400370b8;
            char* rdx_1 = data_1400370d0;
            char rcx_1;
            if (rax_1 != 0x19)
            {
                uint64_t rax_2 = rax_1;
                while (true)
                {
                    rcx_1 = *(rax_2 + &data_140011ce0);
                    if (rcx_1 > *(*rdx_1 + &data_140011ce0))
                    {
                        break;
                    }
                    if (rcx_1 == 0)
                    {
                        break;
                    }
                    r8_1 = sub_14000cee0();
                    rax_2 = data_1400370b8;
                    rdx_1 = data_1400370d0;
                }
                if (rcx_1 <= *(*rdx_1 + &data_140011ce0))
                {
                    while (*rdx_1 != 0x19)
                    {
                        r8_1 = sub_14000cee0();
                        rdx_1 = data_1400370d0;
                    }
                    if (rdx_1 < &data_14003b0e0)
                    {
                        r8_1 = sub_140003898(data_140025c20, 0x3ff, r8_1);
                        rdx_1 = data_1400370d0;
                    }
                    rdx = (rdx_1 - 0x10);
                }
            }
            if (((rax_1 == 0x19 || (rax_1 != 0x19 && rcx_1 > *(*rdx_1 + &data_140011ce0))) && rdx_1 != &data_14003d0d0))
            {
                rdx = &rdx_1[0x10];
                *rdx = *data_1400370b8;
            }
            if ((((rax_1 == 0x19 || (rax_1 != 0x19 && rcx_1 > *(*rdx_1 + &data_140011ce0))) && rdx_1 != &data_14003d0d0) || (rax_1 != 0x19 && rcx_1 <= *(*rdx_1 + &data_140011ce0))))
            {
                data_1400370d0 = rdx;
            }
            if (((rax_1 == 0x19 || (rax_1 != 0x19 && rcx_1 > *(*rdx_1 + &data_140011ce0))) && rdx_1 == &data_14003d0d0))
            {
                r8_1 = sub_140003898(data_140025c20, 0x412, r8_1);
                rdx = data_1400370d0;
            }
        } while (data_1400370b2 == 0);
    }
    void* rax_4;
    if (rdx != &data_14003b0d0)
    {
        rax_4 = sub_140003898(data_140025c20, 0x3ff, r8_1);
        rdx = data_1400370d0;
    }
    for (; i < data_1400370c8; i = (i + 0x10))
    {
        if (*i <= 0x15)
        {
            int64_t (* rax_5)(char arg1) = sub_14000c658;
            if (*i > 0x12)
            {
                rax_5 = sub_14000c914;
            }
            rax_4 = rax_5(*i);
            if (rax_4 == 0)
            {
                rax_4 = sub_140003898(data_140025c20, 0x438, r8_1);
            }
            rdx = data_1400370d0;
        }
        else
        {
            rdx = &rdx[1];
            bool cond:2_1 = *i != 0x18;
            data_1400370d0 = rdx;
            if (cond:2_1)
            {
                *rdx = *i;
            }
            else
            {
                r8_1 = 1;
                rax_4 = sub_140005114(*(i + 8), 0, r8_1, 0, nullptr);
                rdx = data_1400370d0;
                *(rdx + 8) = rax_4;
                *rdx = 0x16;
            }
        }
    }
    if ((rdx != &data_14003b0e0 || (rdx == &data_14003b0e0 && *rdx != 0x16)))
    {
        sub_140003898(data_140025c20, 0x3ff, r8_1);
    }
    if ((rdx == &data_14003b0e0 && *rdx == 0x16))
    {
        rbx = *(rdx + 8) != 0;
    }
    rax_4 = rbx;
    return rax_4;
}

void* sub_14000d180()
{
    _Context = 0;
    wchar16* _String;
    wchar16* rax = wcstok_s(_String, &data_14001161c, &_Context);
    wchar16* rax_1;
    int64_t r8_2;
    rax_1 = wcstok_s(nullptr, &data_14001161c, &_Context);
    if (rax_1 != 0)
    {
        r8_2 = sub_140003898(data_140025c20, 0x409, rax);
    }
    if (rax == 0)
    {
        sub_140003898(data_140025c20, 0x417, r8_2);
    }
    void* rax_2;
    rax_2 = sub_14000918c(rax) != 0;
    return rax_2;
}

void* sub_14000d1f8(int16_t* arg1, char arg2, int64_t arg3)
{
    int64_t rsi;
    rsi = arg2;
    if (*arg1 == 0)
    {
        sub_140003898(data_140025c20, 0x3fa, arg3);
    }
    uint32_t rdx = rsi;
    void* rax;
    if ((rdx == 4 || rdx == 6))
    {
        rax = sub_14000d180();
    }
    if ((rdx == 5 || rdx == 7))
    {
        rax = sub_14000d180() == 0;
    }
    if ((((rdx != 4 && rdx != 5) && rdx != 6) && rdx != 7))
    {
        data_1400370d8 = arg1;
        rax = sub_14000cf64();
    }
    return rax;
}

void** sub_14000d274(int16_t* arg1, rsize_t arg2, int16_t* arg3, int16_t* arg4, char* arg5)
{
    void** i = data_140025c00;
    int16_t* rdi = arg4;
    void** i_1 = i;
    int16_t* string = arg3;
    void** i_2;
    if (i != 0)
    {
        do
        {
            int16_t* r14_2 = i[2];
            wchar16* _Source_9 = wcsrchr(r14_2, 0x2e);
            wchar16* _Source_7 = _Source_9;
            int32_t rax_1;
            int64_t r8;
            rax_1 = sub_14000fb60(_Source_9, rdi);
            if (rax_1 == 0)
            {
                int16_t* _Source = &r14_2[1];
                *arg1 = 0;
                int16_t j = *_Source;
                int16_t* _Source_5 = _Source;
                wchar16* rax_4;
                int32_t j_3;
                wchar16* string_1;
                int16_t* _Source_8;
                int32_t j_4;
                if (j != 0)
                {
                    while (j != 0x7b)
                    {
                        if (j == 0x5e)
                        {
                            _Source_5 = &_Source_5[1];
                        }
                        else
                        {
                            r8 = 0x22;
                            if (j == 0x22)
                            {
                                do
                                {
                                    _Source_5 = &_Source_5[1];
                                } while (*_Source_5 != 0x22);
                            }
                        }
                        _Source_5 = &_Source_5[1];
                        j = *_Source_5;
                        if (j == 0)
                        {
                            break;
                        }
                    }
                    if (*_Source_5 != 0)
                    {
                        _Source_8 = _Source_5;
                        while (*_Source_8 != 0x7d)
                        {
                            if (*_Source_8 == 0x5e)
                            {
                                _Source_8 = &_Source_8[1];
                            }
                            _Source_8 = &_Source_8[1];
                            if (*_Source_8 == 0)
                            {
                                break;
                            }
                        }
                        void* string_2 = string;
                        j_4 = (((_Source_8 - _Source_5) - 2) >> 1);
                        j_3 = j_4;
                        if (*string == 0x22)
                        {
                            string_2 = &string[1];
                        }
                        void* _String1 = &_Source_5[1];
                        if (j_4 == 0)
                        {
                        label_14000d3e3:
                            if (j_3 == 0xffffffff)
                            {
                            label_14000d7b8:
                                i = i_1;
                            label_14000d7bd:
                                rdi = arg4;
                                string = arg3;
                            }
                        }
                        else
                        {
                            int16_t* r14_1 = (string_2 - _String1);
                            int32_t rax_2;
                            int32_t j_1;
                            do
                            {
                                if ((*_String1 != 0x5c && *_String1 != 0x2f))
                                {
                                    rax_2 = _wcsnicmp(_String1, (r14_1 + _String1), 1);
                                    if (rax_2 != 0)
                                    {
                                        break;
                                    }
                                }
                                if ((((*_String1 == 0x5c || *_String1 == 0x2f) && *(r14_1 + _String1) != 0x5c) && *(r14_1 + _String1) != 0x2f))
                                {
                                    j_3 = -1;
                                    goto label_14000d3e3;
                                }
                                _String1 = (_String1 + 2);
                                j_1 = j_3;
                                j_3 = (j_3 - 1);
                            } while (j_1 != 1);
                            if (((*_String1 != 0x5c && *_String1 != 0x2f) && rax_2 != 0))
                            {
                                goto label_14000d7b8;
                            }
                        }
                        if (((j_4 == 0 && j_3 != 0xffffffff) || j_4 != 0))
                        {
                            _Source_7 = _Source_5;
                            string_1 = &arg3[(1 + j_4)];
                            rax_4 = wcschr(string_1, 0x5c);
                            if (rax_4 == 0)
                            {
                                rax_4 = wcschr(string_1, 0x2f);
                            }
                            if (rax_4 != string_1)
                            {
                                goto label_14000d7b8;
                            }
                            if (_Source_8[-1] == 0x5c)
                            {
                                goto label_14000d7b8;
                            }
                            rdi = arg4;
                            string = arg3;
                            i = i_1;
                        }
                    }
                }
                if (((((((j != 0 && *_Source_5 != 0) && ((j_4 == 0 && j_3 != 0xffffffff) || j_4 != 0)) && rax_4 == 0) || j == 0) || (j != 0 && *_Source_5 == 0)) || (((((j != 0 && *_Source_5 != 0) && ((j_4 == 0 && j_3 != 0xffffffff) || j_4 != 0)) && rax_4 == string_1) && _Source_8[-1] != 0x5c) && _Source_8[-1] != 0x2f)))
                {
                    int32_t rdi_2;
                    int64_t r8_3;
                    if (*r14_2 == 0x7b)
                    {
                        int16_t* _Source_6 = _Source;
                        if (*_Source_6 != 0)
                        {
                            while (*_Source_6 != 0x7d)
                            {
                                if (*_Source_6 == 0x5e)
                                {
                                    _Source_6 = &_Source_6[1];
                                }
                                _Source_6 = &_Source_6[1];
                                if (*_Source_6 == 0)
                                {
                                    break;
                                }
                            }
                        }
                        int32_t _MaxCount_5 = ((_Source_6 - _Source) >> 1);
                        wchar16* _Destination = arg1;
                        if (_MaxCount_5 != 0)
                        {
                            rsize_t _MaxCount_1 = _MaxCount_5;
                            wcsncpy_s(_Destination, arg2, _Source, _MaxCount_1);
                            r14_2 = &_Source[(_MaxCount_5 + 1)];
                            if (r14_2[-2] != 0x5c)
                            {
                                arg1[_MaxCount_1] = 0x5c;
                                _MaxCount_5 = (_MaxCount_5 + 1);
                            }
                        }
                        else
                        {
                            rsize_t _MaxCount;
                            wchar16* _Source_3;
                            if (*string != 0x22)
                            {
                                _MaxCount = 2;
                                _Source_3 = &data_140013078;
                            }
                            else
                            {
                                _MaxCount = 3;
                                _Source_3 = &data_140013070;
                            }
                            _MaxCount_5 = _MaxCount;
                            wcsncpy_s(_Destination, arg2, _Source_3, _MaxCount);
                            r14_2 = &_Source[1];
                        }
                        wchar16* rbx_1 = wcsrchr(string, 0x5c);
                        wchar16* rax_7 = wcsrchr(string, 0x2f);
                        if (rax_7 > rbx_1)
                        {
                            rbx_1 = rax_7;
                        }
                        int64_t rax_10;
                        if (rbx_1 != 0)
                        {
                            int64_t _MaxCount_6 = _MaxCount_5;
                            r8_3 = wcscpy_s(&arg1[_MaxCount_6], (arg2 - _MaxCount_6), &rbx_1[1]);
                            rax_10 = ((arg4 - rbx_1) - 2);
                        }
                        else
                        {
                            int16_t* _Source_1 = string;
                            if (*string == 0x22)
                            {
                                _Source_1 = &string[1];
                            }
                            int64_t _MaxCount_7 = _MaxCount_5;
                            r8_3 = wcscpy_s(&arg1[_MaxCount_7], (arg2 - _MaxCount_7), _Source_1);
                            rax_10 = (arg4 - _Source_1);
                        }
                        rdi_2 = (_MaxCount_5 + (rax_10 >> 1));
                    label_14000d699:
                        int32_t _MaxCount_4 = ((_Source_7 - r14_2) >> 1);
                        if (_MaxCount_4 >= (arg2 - rdi_2))
                        {
                            sub_140003898(0, 0x434, r8_3);
                        }
                        int64_t rbx_2 = rdi_2;
                        rsize_t _MaxCount_2 = _MaxCount_4;
                        int64_t r8_7 = wcsncpy_s(&arg1[rbx_2], (arg2 - rbx_2), r14_2, _MaxCount_2);
                        if (*arg1 == 0x22)
                        {
                            _MaxCount_2 = (_MaxCount_2 + rbx_2);
                            if (arg1[(_MaxCount_2 - 1)] != 0x22)
                            {
                                if (((arg2 - _MaxCount_4) - rdi_2) <= 1)
                                {
                                    sub_140003898(0, 0x434, r8_7);
                                }
                                arg1[_MaxCount_2] = 0x22;
                                _MaxCount_4 = (_MaxCount_4 + 1);
                            }
                        }
                        arg1[(_MaxCount_4 + rbx_2)] = 0;
                        void** rax_28 = Concurrency::details::SchedulerProxy::Cleanup(arg1);
                        FindFileHandle hFindFile;
                        char rax_31;
                        int16_t* lpFileName;
                        if (rax_28 != 0)
                        {
                            int64_t rcx_22 = rax_28[3];
                            *(arg5 + 4) = rcx_22;
                            *(arg5 + 0x14) = rcx_22;
                        }
                        else
                        {
                            lpFileName = arg1;
                            _MaxCount_2 = 0;
                            if (*arg1 == 0x22)
                            {
                                int64_t rax_29 = -1;
                                do
                                {
                                    rax_29 = (rax_29 + 1);
                                } while (arg1[rax_29] != 0);
                                if (arg1[(rax_29 - 1)] == 0x22)
                                {
                                    lpFileName = sub_14000fcac(arg1);
                                    _MaxCount_2 = 1;
                                }
                            }
                            hFindFile = FindFirstFileW(lpFileName, arg5);
                            if (hFindFile != -1)
                            {
                                rax_31 = sub_140005f9c(lpFileName, arg5);
                                if (rax_31 != 0)
                                {
                                    FindClose(hFindFile);
                                    if (((*arg5 & 0x10) == 0 && (*(arg5 + 0x14) == 0 && *(arg5 + 0x18) == 0)))
                                    {
                                        *(arg5 + 0x14) = 0xffffffff;
                                        *(arg5 + 0x18) = 0xffffffff;
                                    }
                                }
                            }
                        }
                        if ((rax_28 != 0 || ((rax_28 == 0 && hFindFile != -1) && rax_31 != 0)))
                        {
                            i_2 = i;
                            goto label_14000d7f9;
                        }
                        if (((rax_28 == 0 && (hFindFile == -1 || (hFindFile != -1 && rax_31 == 0))) && _MaxCount_2 != 0))
                        {
                            free(lpFileName);
                        }
                        goto label_14000d7bd;
                    }
                    wchar16* _Source_2;
                    if (*_Source_5 == 0)
                    {
                        _Source_2 = string;
                    }
                    else
                    {
                        wchar16* _Source_4;
                        _Source_4 = wcsrchr(string, 0x2e);
                        _Source_2 = _Source_4;
                        wchar16 j_2 = *_Source_4;
                        uint64_t rax_14;
                        if (j_2 != 0x3a)
                        {
                            while (j_2 != 0x5c)
                            {
                                if (j_2 == 0x2f)
                                {
                                    break;
                                }
                                if (_Source_2 <= string)
                                {
                                    break;
                                }
                                _Source_2 = (_Source_2 - 2);
                                j_2 = *_Source_2;
                                if (j_2 == 0x3a)
                                {
                                    break;
                                }
                            }
                            rax_14 = (*_Source_2 - 0x2f);
                        }
                        if ((j_2 == 0x3a || ((j_2 != 0x3a && rax_14 <= 0x2d) && (TEST_BITQ(0x200000000801, rax_14)))))
                        {
                            _Source_2 = &_Source_2[1];
                        }
                    }
                    int64_t _MaxCount_3 = ((rdi - _Source_2) >> 1);
                    int32_t rsi = 0;
                    if ((_Source_2 != arg3 && *arg3 == 0x22))
                    {
                        *arg1 = 0x22;
                        rsi = 1;
                    }
                    if (_MaxCount_3 >= (arg2 - rsi))
                    {
                        sub_140003898(0, 0x434, r8);
                    }
                    int64_t rax_20 = rsi;
                    r8_3 = wcsncpy_s(&arg1[rax_20], (arg2 - rax_20), _Source_2, _MaxCount_3);
                    rdi_2 = (_MaxCount_3 + rsi);
                    goto label_14000d699;
                }
            }
            i = *i;
            i_1 = i;
        } while (i != 0);
    }
    i_2 = nullptr;
label_14000d7f9:
    return i_2;
}

void sub_14000d80c()
{
    void** i_1 = data_140025c00;
    void** i = data_140025c18;
    arg_8 = 0;
    data_140025c00 = 0;
    for (; i != 0; i = *i)
    {
        wchar16* _String1 = i[1];
        uint64_t _MaxCount = -1;
        do
        {
            _MaxCount = (_MaxCount + 1);
        } while (_String1[_MaxCount] != 0);
        void** j = i_1;
        if (i_1 != 0)
        {
            do
            {
                int16_t* _String2 = j[2];
                int16_t k = *_String2;
                if (k == 0x7b)
                {
                    do
                    {
                        if (k == 0x5e)
                        {
                            _String2 = &_String2[1];
                        }
                        _String2 = &_String2[1];
                        k = *_String2;
                    } while (k != 0x7d);
                    _String2 = &_String2[1];
                }
                void** k_2 = _wcsnicmp(_String1, _String2, _MaxCount);
                if ((k_2 != 0 || ((k_2 == 0 && _String2[_MaxCount] != 0x2e) && _String2[_MaxCount] != 0x7b)))
                {
                    j = *j;
                }
                if ((k_2 == 0 && (*(_String2 + (_MaxCount << 1)) == 0x2e || *(_String2 + (_MaxCount << 1)) == 0x7b)))
                {
                    void*** rcx_2 = j[1];
                    void** j_1 = j;
                    if (rcx_2 == 0)
                    {
                        i_1 = *j;
                    }
                    else
                    {
                        *rcx_2 = *j;
                    }
                    void* rcx_3 = *j;
                    if (rcx_3 != 0)
                    {
                        *(rcx_3 + 8) = j[1];
                    }
                    j = *j;
                    *j_1 = nullptr;
                    void** r14_1 = data_140025c00;
                    while (true)
                    {
                        if (r14_1 == 0)
                        {
                            void** k_1 = j_1[3];
                            while (k_1 != 0)
                            {
                                k_2 = j_1[5];
                                data_14003d110 = k_2;
                                if (k_2 != 0)
                                {
                                    data_14003d118 = j_1[2];
                                }
                                sub_14000dfd0(k_1[1], &arg_8, nullptr, 0, 0, 0, 0);
                                k_1 = *k_1;
                                data_14003d110 = 0;
                            }
                            void** k_3 = &data_140025c00;
                            j_1[4] = arg_8;
                            k_2 = data_140025c00;
                            arg_8 = 0;
                            for (; k_2 != 0; k_2 = *k_2)
                            {
                                k_3 = k_2;
                            }
                            *k_3 = j_1;
                            break;
                        }
                        if (_wcsicmp(r14_1[2], j_1[2]) == 0)
                        {
                            free(j_1[2]);
                            while (true)
                            {
                                int64_t* r14_2 = j_1[3];
                                if (r14_2 == 0)
                                {
                                    break;
                                }
                                j_1[3] = *r14_2;
                                free(r14_2[1]);
                                *r14_2 = data_14003d0e0;
                                data_14003d0e0 = r14_2;
                            }
                            free(j_1);
                            break;
                        }
                        r14_1 = *r14_1;
                    }
                }
            } while (j != 0);
        }
    }
    if (i_1 != 0)
    {
        void** i_2 = i_1;
        do
        {
            if ((data_1400157ec & 1) != 0)
            {
                sub_140003898(0, 0xfa5, i_1[2]);
            }
            free(i_1[2]);
            sub_140002f98(i_1[3]);
            sub_140002f98(i_1[4]);
            i_1 = *i_1;
            free(i_2);
            i_2 = i_1;
        } while (i_1 != 0);
    }
}

void** sub_14000da54(void* arg1, int16_t* arg2, int64_t arg3, int64_t arg4, void*** arg5, int32_t** arg6, int32_t* arg7, int64_t* arg8, int16_t** arg9)
{
    void var_2f8;
    int64_t rax_1 = (__security_cookie ^ &var_2f8);
    wchar16* rax_3 = wcsrchr(*(arg1 + 8), 0x2e);
    void** rax_4;
    void** rax_12;
    if (rax_3 != 0)
    {
        char var_298;
        rax_4 = sub_14000d274(arg2, 0x101, *(arg1 + 8), rax_3, &var_298);
        if (rax_4 != 0)
        {
            int64_t rax_5;
            int64_t var_294;
            if ((var_298 & 0x10) != 0)
            {
                rax_5 = var_294;
            }
            int64_t var_284;
            if (((var_298 & 0x10) == 0 || (((var_298 & 0x10) != 0 && rax_5 == 0) && (rax_5 >> 0x20) == 0)))
            {
                rax_5 = var_284;
            }
            *arg9 = arg2;
            int32_t* i = *arg6;
            int64_t var_2c8 = rax_5;
            if (i != 0)
            {
                do
                {
                    if (_wcsicmp(*(i + 8), arg2) == 0)
                    {
                        break;
                    }
                    i = *i;
                } while (i != 0);
                if (i != 0)
                {
                    *(arg1 + 0x10) = (*(arg1 + 0x10) & 0xfe);
                }
            }
            char rdx = *(arg1 + 0x10);
            void** var_2c0 = nullptr;
            int32_t rax_7 = sub_14000209c(arg2, rdx, &var_2c8, nullptr, &var_2c0);
            void** rcx_7 = var_2c0;
            int32_t r14_1 = rax_7;
            if (rcx_7 != 0)
            {
                r14_1 = (r14_1 + ?replace_all_in_string@detail@policies@math@boost@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBD1@Z(rcx_7));
                sub_140003278(&var_2c0);
            }
            int64_t rcx_9 = var_2c8;
            *arg7 = (*arg7 + r14_1);
            if (((((*(arg1 + 0x10) & 0x10) != 0 || ((*(arg1 + 0x10) & 0x10) == 0 && arg4 < rcx_9)) || ((((*(arg1 + 0x10) & 0x10) == 0 && arg4 >= rcx_9) && data_140025c3a != 0) && arg4 == rcx_9)) && i != 0))
            {
            label_14000dbf9:
                int32_t* rax_10;
                rax_10 = *(arg1 + 0x10);
                rax_10 = (rax_10 & 0x11);
                if (rax_10 == 1)
                {
                    *(arg1 + 8);
                    sub_1400039c0(3, arg2);
                    rcx_9 = var_2c8;
                }
            }
            if ((((((*(arg1 + 0x10) & 0x10) == 0 && arg4 >= rcx_9) && data_140025c3a == 0) || ((((*(arg1 + 0x10) & 0x10) == 0 && arg4 >= rcx_9) && data_140025c3a != 0) && arg4 != rcx_9)) || ((((*(arg1 + 0x10) & 0x10) != 0 || ((*(arg1 + 0x10) & 0x10) == 0 && arg4 < rcx_9)) || ((((*(arg1 + 0x10) & 0x10) == 0 && arg4 >= rcx_9) && data_140025c3a != 0) && arg4 == rcx_9)) && i != 0)))
            {
                if (*arg8 <= rcx_9)
                {
                    goto label_14000dc24;
                }
                rcx_9 = *arg8;
            label_14000dc24:
                *arg8 = rcx_9;
                rax_12 = rax_4;
            }
            if (((((*(arg1 + 0x10) & 0x10) != 0 || ((*(arg1 + 0x10) & 0x10) == 0 && arg4 < rcx_9)) || ((((*(arg1 + 0x10) & 0x10) == 0 && arg4 >= rcx_9) && data_140025c3a != 0) && arg4 == rcx_9)) && i == 0))
            {
                int64_t* rax_9 = sub_14000dc58();
                rax_9[1] = sub_14000dcc4(arg2);
                void** i_2 = arg5;
                for (void** i_1 = *arg5; i_1 != 0; i_1 = *i_1)
                {
                    i_2 = i_1;
                }
                *i_2 = rax_9;
                rcx_9 = var_2c8;
                if (*arg6 == 0)
                {
                    *arg6 = *arg5;
                }
                goto label_14000dbf9;
            }
        }
    }
    if ((rax_3 == 0 || (rax_3 != 0 && rax_4 == 0)))
    {
        rax_12 = nullptr;
    }
    __security_check_cookie((rax_1 ^ &var_2f8));
    return rax_12;
}

int64_t* sub_14000dc58()
{
    int64_t* rcx = data_14003d0e0;
    if (rcx != 0)
    {
        data_14003d0e0 = *rcx;
    }
    else
    {
        int64_t rbx_1 = data_14003d0f0;
        int64_t* rax_1;
        if (rbx_1 >= 0x10)
        {
            rax_1 = data_14003d0e8;
        }
        else
        {
            rbx_1 = 0x8000;
            rax_1 = sub_140009214();
        }
        rcx = rax_1;
        data_14003d0e8 = &rax_1[2];
        data_14003d0f0 = (rbx_1 - 0x10);
    }
    *rcx = 0;
    rcx[1] = 0;
    return rcx;
}

int32_t* sub_14000dcc4(int32_t* arg1)
{
    int64_t rdi = -1;
    do
    {
        rdi = (rdi + 1);
    } while (*(arg1 + (rdi << 1)) != 0);
    int32_t* rax_1 = sub_140009214();
    memcpy(rax_1, arg1, ((rdi + 1) * 2));
    return rax_1;
}

wchar16* sub_14000dd24(int64_t arg1, wchar16* arg2)
{
    int64_t rax = -1;
    int64_t r8 = -1;
    do
    {
        r8 = (r8 + 1);
    } while (*(arg1 + (r8 << 1)) != 0);
    do
    {
        rax = (rax + 1);
    } while (arg2[rax] != 0);
    int64_t rdi = (r8 + rax);
    wchar16* _Destination = sub_14000fd90(arg1, (rdi + 1));
    wcscat_s(_Destination, (rdi + 1), arg2);
    return _Destination;
}

uint64_t sub_14000dd88(int16_t* arg1)
{
    wint_t _C = *arg1;
    int32_t rbx = 0;
    int16_t* rdi = arg1;
    for (; _C != 0; _C = *rdi)
    {
        wint_t rax;
        if (_C != 0x2f)
        {
            rax = towupper(_C);
        }
        else
        {
            rax = 0x5c;
        }
        rbx = (rbx + rax);
        rdi = &rdi[1];
    }
    return (rbx & 0x7f);
}

void** Concurrency::details::SchedulerProxy::Cleanup(int16_t* arg1)
{
    int64_t rbp;
    rbp = 0;
    void** rax_1;
    if (*arg1 == 0)
    {
        rax_1 = nullptr;
    }
    else
    {
        int32_t rax;
        int64_t rdx_1;
        rax = sub_14000dd88(arg1);
        rax_1 = sub_14000faa4(arg1, rdx_1, rax);
        if (rax_1 == 0)
        {
            int32_t rax_2 = wcsncmp(arg1, &data_140013078, 2);
            int32_t rax_3;
            wchar16* _Destination_3;
            if (rax_2 != 0)
            {
                rax_3 = wcsncmp(arg1, &data_140013080, 2);
                if (rax_3 != 0)
                {
                    int64_t rsi_1 = -1;
                    do
                    {
                        rsi_1 = (rsi_1 + 1);
                    } while (arg1[rsi_1] != 0);
                    wchar16* _Destination = sub_140009214();
                    _Destination_3 = _Destination;
                    wcscpy_s(_Destination, (rsi_1 + 3), &data_140013078);
                    wcscat_s(_Destination_3, (rsi_1 + 3), arg1);
                    rbp = 1;
                }
            }
            if ((rax_2 == 0 || (rax_2 != 0 && rax_3 == 0)))
            {
                _Destination_3 = &arg1[2];
            }
            int32_t rax_5;
            int64_t rdx_5;
            rax_5 = sub_14000dd88(_Destination_3);
            void** rax_6 = sub_14000faa4(_Destination_3, rdx_5, rax_5);
            void** rsi_3 = rax_6;
            if (rax_6 == 0)
            {
                if (_Destination_3 != &arg1[2])
                {
                    _Destination_3[1] = 0x2f;
                }
                int32_t rax_8;
                int64_t rdx_6;
                rax_8 = sub_14000dd88(_Destination_3);
                rsi_3 = sub_14000faa4(_Destination_3, rdx_6, rax_8);
                if (rbp != 0)
                {
                    free(_Destination_3);
                }
                if (rsi_3 == 0)
                {
                    int16_t* _Destination_2;
                    if (*arg1 == 0x22)
                    {
                        _Destination_2 = sub_14000fcac(arg1);
                    }
                    else
                    {
                        int64_t rdi_1 = -1;
                        do
                        {
                            rdi_1 = (rdi_1 + 1);
                        } while (arg1[rdi_1] != 0);
                        wchar16* _Destination_1 = sub_140009214();
                        _Destination_2 = _Destination_1;
                        wcscpy_s(_Destination_1, (rdi_1 + 3), &data_140011624);
                        wcscat_s(_Destination_2, (rdi_1 + 3), arg1);
                        wcscat_s(_Destination_2, (rdi_1 + 3), &data_140011624);
                    }
                    int32_t rax_12;
                    int64_t rdx_11;
                    rax_12 = sub_14000dd88(_Destination_2);
                    void** rax_13 = sub_14000faa4(_Destination_2, rdx_11, rax_12);
                    free(_Destination_2);
                    rax_1 = rax_13;
                }
            }
            else if (rbp != 0)
            {
                free(_Destination_3);
            }
            if (((rax_6 == 0 && rsi_3 != 0) || rax_6 != 0))
            {
                rax_1 = rsi_3;
            }
        }
    }
    return rax_1;
}

uint64_t sub_14000dfd0(uint64_t arg1, uint64_t* arg2, int64_t* arg3, uint64_t arg4, int32_t arg5, int32_t arg6, char arg7)
{
    int64_t __saved_rbp_1;
    int64_t __saved_rbp = __saved_rbp_1;
    int64_t __saved_rsi_1;
    int64_t __saved_rsi = __saved_rsi_1;
    int64_t __saved_rdi_1;
    int64_t __saved_rdi = __saved_rdi_1;
    void var_2b8;
    void* rsp_1 = &var_2b8;
    int64_t __saved_rbx_1;
    __saved_rbx = __saved_rbx_1;
    int64_t* var_278;
    uint64_t var_28 = (__security_cookie ^ &var_278);
    int16_t* rdi = arg1;
    arg1 = 0;
    int64_t* rbx = arg3;
    int32_t var_270 = arg1;
    uint64_t* rsi = arg2;
    uint64_t* var_268 = rbx;
    uint64_t rax_1;
    if (arg2 == 0)
    {
        var_278 = nullptr;
    }
    else if (rbx != 0)
    {
        var_278 = *arg3;
    }
    else
    {
        rax_1 = *arg2;
        var_278 = rax_1;
        if (rax_1 != 0)
        {
            while (*rax_1 != 0)
            {
                rax_1 = *var_278;
                var_278 = rax_1;
            }
        }
    }
    if (*rdi != 0)
    {
        int64_t r8 = 0x24;
        while (true)
        {
            rax_1 = *rdi;
            if (rax_1 != 0)
            {
                while (rax_1 != 0x24)
                {
                    if (rax_1 == 0x22)
                    {
                        arg1 = arg1 == 0;
                    }
                    if ((arg1 == 0 && rax_1 == 0x5e))
                    {
                        rdi = &rdi[1];
                        arg1 = arg1;
                        if (*rdi == 0x22)
                        {
                            arg1 = 1;
                        }
                    }
                    rdi = &rdi[1];
                    rax_1 = *rdi;
                    if (rax_1 == 0)
                    {
                        break;
                    }
                }
                int32_t var_270_1 = arg1;
                if (*rdi != 0)
                {
                    rbx = arg7;
                    void* rdi_1 = &rdi[1];
                    if ((*rdi_1 == 0 && (rbx & 4) == 0))
                    {
                        sub_140003898(data_140025c24, 0x3ea, 0x24);
                        arg1 = var_270_1;
                        r8 = 0x24;
                    }
                    if (((*rdi_1 == 0 && (rbx & 4) == 0) || *rdi_1 != 0))
                    {
                        if ((arg1 == 0 && *rdi_1 == 0x5e))
                        {
                            rdi_1 = (rdi_1 + 2);
                            if (*rdi_1 >= 0x80)
                            {
                                rax_1 = iswspace(*rdi_1);
                                arg1 = rax_1 == 0;
                            }
                            else
                            {
                                arg1 = *(*rdi_1 + &data_140011640);
                                arg1 = (arg1 & 1);
                            }
                            if ((rbx & 4) == 0)
                            {
                                sub_140003898(data_140025c24, 0x3e9, *rdi_1);
                                r8 = 0x24;
                            }
                        }
                        if ((((((arg1 == 0 && *rdi_1 == 0x5e) && (rbx & 4) == 0) || arg1 != 0) || (arg1 == 0 && *rdi_1 != 0x5e)) && *rdi_1 != 0x24))
                        {
                            wchar16 ch;
                            bool rcx_12;
                            if (*rdi_1 != 0x28)
                            {
                                int64_t r8_5;
                                rax_1 = wcschr(u"*@<?", *rdi_1);
                                if (rax_1 != 0)
                                {
                                    if (data_14003d110 == 0)
                                    {
                                        goto label_14000e62d;
                                    }
                                    if ((data_1400157ec & 0x40) != 0)
                                    {
                                        goto label_14000e62d;
                                    }
                                    rax_1 = *rdi_1;
                                    if (rax_1 == 0x3c)
                                    {
                                        goto label_14000e62d;
                                    }
                                    int16_t var_23c_1 = 0;
                                    data_14003d118;
                                    int16_t var_240 = 0x24;
                                    int16_t var_23e_1 = rax_1;
                                    r8_5 = sub_140003898(0, 0x44c, &var_240);
                                }
                                if (*rdi_1 >= 0x80)
                                {
                                    rax_1 = iswspace(*rdi_1);
                                    rcx_12 = rax_1 == 0;
                                }
                                else
                                {
                                    rcx_12 = (*(*rdi_1 + &data_140011640) & 1);
                                }
                                if ((rcx_12 == 0 && (rbx & 4) == 0))
                                {
                                    sub_140003898(data_140025c24, 0x3ea, r8_5);
                                label_14000e45e:
                                    ch = *rdi_1;
                                    int16_t var_236_1 = 0;
                                }
                                if (rcx_12 != 0)
                                {
                                    goto label_14000e45e;
                                }
                            }
                            else
                            {
                                int16_t* rbx_1 = &ch;
                                while (true)
                                {
                                    rdi_1 = (rdi_1 + 2);
                                    int16_t rax_6 = *rdi_1;
                                    if (rax_6 != 0)
                                    {
                                        if (rax_6 == 0x29)
                                        {
                                            break;
                                        }
                                        if (rax_6 != 0x3a)
                                        {
                                            if (rax_6 == 0x5e)
                                            {
                                                rdi_1 = (rdi_1 + 2);
                                                bool rcx_4;
                                                if (*rdi_1 >= 0x80)
                                                {
                                                    int32_t rax_4;
                                                    rax_4 = iswspace(*rdi_1);
                                                    rcx_4 = rax_4 == 0;
                                                }
                                                else
                                                {
                                                    rcx_4 = (*(*rdi_1 + &data_140011640) & 1);
                                                }
                                                if (rcx_4 == 0)
                                                {
                                                    r8 = sub_140003898(data_140025c24, 0x3e9, *rdi_1);
                                                }
                                            }
                                            *rbx_1 = *rdi_1;
                                            rbx_1 = &rbx_1[1];
                                            continue;
                                        }
                                    }
                                    int16_t i = *rdi_1;
                                    if (i != 0x29)
                                    {
                                        do
                                        {
                                            if (i == 0x5e)
                                            {
                                                rdi_1 = (rdi_1 + 2);
                                            }
                                            if (*rdi_1 == 0)
                                            {
                                                break;
                                            }
                                            rdi_1 = (rdi_1 + 2);
                                            i = *rdi_1;
                                        } while (i != 0x29);
                                        if (*rdi_1 != 0x29)
                                        {
                                            r8 = sub_140003898(data_140025c24, 0x3e8, r8);
                                        }
                                    }
                                    break;
                                }
                                *rbx_1 = 0;
                                if (((rbx_1 - &ch) & 0xfffffffffffffffe) > 0x202)
                                {
                                    sub_140003898(data_140025c24, 0x434, r8);
                                }
                                if (wcschr(u"*@<?", ch) != 0)
                                {
                                    if (data_14003d110 == 0)
                                    {
                                        goto label_14000e62d;
                                    }
                                    if ((data_1400157ec & 0x40) != 0)
                                    {
                                        goto label_14000e62d;
                                    }
                                    int64_t rdx_2 = -1;
                                    do
                                    {
                                        rdx_2 = (rdx_2 + 1);
                                    } while (&ch[rdx_2] != 0);
                                    uint64_t rax_7 = ((rdx_2 + 4) * 2);
                                    int64_t rcx_9 = (rax_7 + 0xf);
                                    if (rcx_9 <= rax_7)
                                    {
                                        rcx_9 = 0xffffffffffffff0;
                                    }
                                    int64_t rcx_10 = (rcx_9 & 0xfffffffffffffff0);
                                    __chkstk(rcx_10);
                                    rsp_1 = (rsp_1 - rcx_10);
                                    _snprintf((rsp_1 + 0x40), (rdx_2 + 4), u"$(%s)", &ch);
                                    data_14003d118;
                                    sub_140003898(0, 0x44c, (rsp_1 + 0x40));
                                }
                            }
                            if ((((*rdi_1 != 0x28 && rcx_12 == 0) && (rbx & 4) == 0) || *rdi_1 == 0x28))
                            {
                                if (rsi == 0)
                                {
                                    int64_t var_250 = 0;
                                    int32_t* var_248_1 = sub_14000dcc4(&data_140011630);
                                    rbx = &var_250;
                                label_14000e492:
                                    rax_1 = sub_14000918c(&ch);
                                    uint64_t rsi_1 = rax_1;
                                    if (rax_1 == 0)
                                    {
                                        goto label_14000e54b;
                                    }
                                    if (arg4 != 0)
                                    {
                                        void* rcx_16 = arg4;
                                        uint32_t rdx_5;
                                        do
                                        {
                                            rdx_5 = *rcx_16;
                                            rax_1 = *(rcx_16 + (&ch - arg4));
                                            if (rdx_5 != rax_1)
                                            {
                                                break;
                                            }
                                            rcx_16 = (rcx_16 + 2);
                                        } while (rax_1 != 0);
                                        if ((rdx_5 - rax_1) != 0)
                                        {
                                            goto label_14000e4ff;
                                        }
                                        int32_t rcx_17 = arg5;
                                        void** i_1 = *(rsi_1 + 0x10);
                                        if (arg5 != arg6)
                                        {
                                            while (i_1 != 0)
                                            {
                                                i_1 = *i_1;
                                                rcx_17 = (rcx_17 - 1);
                                                if (rcx_17 == arg6)
                                                {
                                                    break;
                                                }
                                            }
                                            if (i_1 == 0)
                                            {
                                                goto label_14000e534;
                                            }
                                        }
                                        if (i_1 == 0)
                                        {
                                            goto label_14000e534;
                                        }
                                        rax_1 = i_1[1];
                                        goto label_14000e539;
                                    }
                                label_14000e4ff:
                                    rax_1 = *(rsi_1 + 0x18);
                                    if ((rax_1 & 1) == 0)
                                    {
                                        if ((rax_1 & 0x10) == 0)
                                        {
                                            rbx[1] = *(*(rsi_1 + 0x10) + 8);
                                        label_14000e54b:
                                            uint64_t* rcx_20 = arg2;
                                            if (rcx_20 != 0)
                                            {
                                                if ((rsi_1 == 0 || (rsi_1 != 0 && (*(rsi_1 + 0x18) & 0x10) != 0)))
                                                {
                                                    rcx_20 = arg2;
                                                    rbx[1] = sub_14000dcc4(&data_140011dec);
                                                }
                                                *rbx = 0;
                                                rax_1 = var_278;
                                                if (rax_1 == 0)
                                                {
                                                    *rcx_20 = rbx;
                                                }
                                                else
                                                {
                                                    *rax_1 = rbx;
                                                }
                                                var_278 = rbx;
                                            }
                                            if (rsi_1 != 0)
                                            {
                                                uint32_t rdx_8;
                                                rax_1 = wcschr(rbx[1], 0x24);
                                                if (rax_1 != 0)
                                                {
                                                    *(rsi_1 + 0x18) = (*(rsi_1 + 0x18) | 1);
                                                    uint64_t rax_13 = arg4;
                                                    int32_t rax_14;
                                                    uint32_t i_2;
                                                    int32_t rcx_22;
                                                    uint32_t rdx_9;
                                                    if (rax_13 != 0)
                                                    {
                                                        void* r8_9 = (&ch - rax_13);
                                                        do
                                                        {
                                                            rdx_9 = *rax_13;
                                                            i_2 = *(rax_13 + r8_9);
                                                            if (rdx_9 != i_2)
                                                            {
                                                                break;
                                                            }
                                                            rax_13 = (rax_13 + 2);
                                                        } while (i_2 != 0);
                                                        if ((rdx_9 - i_2) != 0)
                                                        {
                                                            rax_14 = arg5;
                                                            rcx_22 = rax_14;
                                                        }
                                                    }
                                                    if ((rax_13 == 0 || (rax_13 != 0 && (rdx_9 - i_2) == 0)))
                                                    {
                                                        rcx_22 = arg6;
                                                        rax_14 = arg5;
                                                    }
                                                    rdx_8 = arg7;
                                                    *(rsp_1 + 0x30) = rdx_8;
                                                    *(rsp_1 + 0x28) = rcx_22;
                                                    int64_t rcx_23 = rbx[1];
                                                    *(rsp_1 + 0x20) = (rax_14 + 1);
                                                    sub_14000dfd0(rcx_23, arg2, &var_278, &ch);
                                                    *(rsi_1 + 0x18) = (*(rsi_1 + 0x18) & 0xfe);
                                                    rsi = arg2;
                                                }
                                            }
                                            if ((rsi_1 == 0 || (rsi_1 != 0 && rax_1 == 0)))
                                            {
                                                rsi = arg2;
                                            }
                                            goto label_14000e62d;
                                        }
                                    label_14000e534:
                                        rax_1 = sub_14000dcc4(&data_140011dec);
                                    label_14000e539:
                                        rbx[1] = rax_1;
                                        goto label_14000e54b;
                                    }
                                    if ((arg7 & 4) == 0)
                                    {
                                        sub_140003898(data_140025c24, 0x42e, &ch);
                                        goto label_14000e54b;
                                    }
                                    if (var_268 != 0)
                                    {
                                        *var_268 = var_278;
                                    }
                                    goto label_14000e65a;
                                }
                                rbx = sub_14000dc58();
                                goto label_14000e492;
                            }
                        }
                    }
                    if ((((*rdi_1 == 0 && (rbx & 4) != 0) || (((((*rdi_1 == 0 && (rbx & 4) == 0) || *rdi_1 != 0) && arg1 == 0) && *rdi_1 == 0x5e) && (rbx & 4) != 0)) || ((((*rdi_1 == 0 && (rbx & 4) == 0) || *rdi_1 != 0) && ((((arg1 == 0 && *rdi_1 == 0x5e) && (rbx & 4) == 0) || arg1 != 0) || (arg1 == 0 && *rdi_1 != 0x5e))) && *rdi_1 != 0x24)))
                    {
                        if (var_268 == 0)
                        {
                            goto label_14000e65a;
                        }
                        *var_268 = var_278;
                    label_14000e65a:
                        rax_1 = 0;
                        goto label_14000e68c;
                    }
                    if (((((*rdi_1 == 0 && (rbx & 4) == 0) || *rdi_1 != 0) && ((((arg1 == 0 && *rdi_1 == 0x5e) && (rbx & 4) == 0) || arg1 != 0) || (arg1 == 0 && *rdi_1 != 0x5e))) && *rdi_1 == 0x24))
                    {
                        if (*(rdi_1 + 2) != 0x5e)
                        {
                            if (*(rdi_1 + 2) != 0x28)
                            {
                                goto label_14000e633;
                            }
                            rbx = (rdi_1 + 4);
                            if (*rbx == 0x5e)
                            {
                            label_14000e185:
                                rdi_1 = rbx;
                                goto label_14000e633;
                            }
                            if (*rbx == 0x40)
                            {
                                rbx = (rbx + 2);
                                if (*rbx == 0x5e)
                                {
                                label_14000e1ad:
                                    sub_140003898(data_140025c24, 0x3e9, *(rbx + 2));
                                label_14000e62d:
                                    r8 = 0x24;
                                    goto label_14000e633;
                                }
                                if (*rbx == 0x29)
                                {
                                    goto label_14000e185;
                                }
                                if (wcschr(u"DFBR", *rbx) == 0)
                                {
                                    goto label_14000e62d;
                                }
                                rbx = (rbx + 2);
                                if (*rbx == 0x5e)
                                {
                                    goto label_14000e1ad;
                                }
                                r8 = 0x24;
                                if (*rbx != 0x29)
                                {
                                    goto label_14000e633;
                                }
                                goto label_14000e185;
                            }
                            bool cond:1_1 = *(rdi_1 + 2) == 0x5e;
                            rdi_1 = (rdi_1 + 2);
                            if ((!cond:1_1))
                            {
                                rdi_1 = (rdi_1 + 2);
                            }
                            goto label_14000e633;
                        }
                        rdi_1 = (rdi_1 + 2);
                    label_14000e633:
                        rdi = (rdi_1 + 2);
                        if (*rdi != 0)
                        {
                            arg1 = var_270_1;
                            continue;
                        }
                    }
                }
            }
            rbx = var_268;
            break;
        }
    }
    if (rbx != 0)
    {
        *rbx = var_278;
    }
    rax_1 = 1;
label_14000e68c:
    __security_check_cookie((var_28 ^ &var_278));
    return rax_1;
}

uint64_t sub_14000e6a4(wchar16* arg1)
{
    i_1 = nullptr;
    uint64_t rdi = arg1;
    if (wcschr(arg1, 0x24) != 0)
    {
        sub_14000dfd0(rdi, &i_1, nullptr, 0, 0, 0, 0);
        int64_t* i = i_1;
        int32_t* rax_1 = sub_14000e740(rdi, 0xff, &i_1);
        i_1 = i;
        rdi = rax_1;
        int64_t* i_2 = i;
        if (i != 0)
        {
            int64_t* i_3 = data_14003d0e0;
            do
            {
                i = *i;
                *i_2 = i_3;
                i_3 = i_2;
                i_1 = i;
                i_2 = i;
            } while (i != 0);
            data_14003d0e0 = i_3;
        }
    }
    return rdi;
}

int32_t* sub_14000e740(uint64_t arg1, char arg2, int64_t** arg3)
{
    void var_8a8;
    int64_t var_28 = (__security_cookie ^ &var_8a8);
    uint64_t var_838 = arg1;
    int16_t* rdi = arg1;
    char var_868 = 0;
    arg1 = 0;
    int64_t* var_858 = &var_28;
    void var_828;
    void* rsi = &var_828;
    int16_t i = *rdi;
    void* rbx = &var_828;
    int32_t var_848 = arg1;
    int64_t var_840 = 0x400;
    void* var_850 = &var_828;
    void* var_860 = &var_828;
    if (i != 0)
    {
        rsi = 0;
        while (true)
        {
            if (i != 0)
            {
                while (i != 0x24)
                {
                    if (rbx == var_858)
                    {
                        sub_14000eb78(&var_850, &var_860, &var_858, &var_840, &var_828);
                        rbx = var_860;
                        arg1 = var_848;
                    }
                    int16_t rax_2 = *rdi;
                    if (rax_2 == 0x22)
                    {
                        arg1 = arg1 == 0;
                        var_848 = arg1;
                    }
                    if ((arg1 == 0 && rax_2 == 0x5e))
                    {
                        *rbx = 0x5e;
                        rbx = (rbx + 2);
                        var_860 = rbx;
                        if (rbx == var_858)
                        {
                            sub_14000eb78(&var_850, &var_860, &var_858, &var_840, &var_828);
                            rbx = var_860;
                            arg1 = var_848;
                        }
                        rdi = &rdi[1];
                        arg1 = arg1;
                        rax_2 = *rdi;
                        if (rax_2 == 0x22)
                        {
                            arg1 = 1;
                        }
                        var_848 = arg1;
                    }
                    rdi = &rdi[1];
                    *rbx = rax_2;
                    rbx = (rbx + 2);
                    var_838 = rdi;
                    var_860 = rbx;
                    i = *rdi;
                    if (i == 0)
                    {
                        break;
                    }
                }
                rsi = var_868;
            }
            if (rbx == var_858)
            {
                sub_14000eb78(&var_850, &var_860, &var_858, &var_840, &var_828);
                rbx = var_860;
            }
            if (*rdi != 0)
            {
                void* rbx_1 = &rdi[2];
                int32_t var_880;
                void* var_878_1;
                wchar16* rax_3;
                if (rdi[1] == 0x28)
                {
                    rax_3 = wcschr(u"*@<?", rdi[2]);
                    if (rax_3 != 0)
                    {
                        var_878_1 = &var_828;
                        var_880 = 3;
                    label_14000e943:
                        sub_14000ec20(&var_850, &var_838, &var_860, &var_858, &var_840, var_880, var_878_1);
                    }
                }
                if (((rdi[1] != 0x28 || (rdi[1] == 0x28 && rax_3 == 0)) && rdi[1] != 0x24))
                {
                    wchar16* rax_5;
                    int64_t r8_4;
                    rax_5 = wcschr(u"*@<?", rdi[1]);
                    if (rax_5 != 0)
                    {
                        var_878_1 = &var_828;
                        var_880 = 1;
                        goto label_14000e943;
                    }
                    if (*arg3 == 0)
                    {
                        sub_140003898(data_140025c24, 0x410, r8_4);
                    }
                    wchar16* rax_7;
                    int64_t rdx_6;
                    rax_7 = wcschr(*arg3[1], 0x24);
                    int16_t* rbx_2;
                    if (rax_7 == 0)
                    {
                        int64_t* rax_10 = *arg3;
                        rbx_2 = rax_10[1];
                        *arg3 = *rax_10;
                    }
                    else
                    {
                        int64_t** rcx_6 = *arg3;
                        rdx_6 = arg2;
                        *arg3 = *rcx_6;
                        rsi = 1;
                        rbx_2 = sub_14000e740(rcx_6[1], rdx_6, arg3);
                        var_868 = 1;
                    }
                    var_880 = &var_840;
                    sub_14000f188(&var_850, &var_838, &var_860, &var_858, rbx_2, var_880, &var_828);
                    if (rsi != 0)
                    {
                        free(rbx_2);
                        rsi = 0;
                        var_868 = 0;
                    }
                }
                if (((rdi[1] == 0x28 && rax_3 != 0) || ((rdi[1] != 0x28 || (rdi[1] == 0x28 && rax_3 == 0)) && rdi[1] != 0x24)))
                {
                    rdi = var_838;
                    rbx = var_860;
                    i = *rdi;
                    if (i != 0)
                    {
                        arg1 = var_848;
                        continue;
                    }
                }
                if (((rdi[1] != 0x28 || (rdi[1] == 0x28 && rax_3 == 0)) && rdi[1] == 0x24))
                {
                    if (*rbx_1 == 0x5e)
                    {
                    label_14000e9c3:
                        var_878_1 = &var_828;
                        var_880 = 5;
                    }
                    else
                    {
                        if (arg2 != 1)
                        {
                            goto label_14000e9c3;
                        }
                        if (*rbx_1 == 0x40)
                        {
                            var_878_1 = &var_828;
                            var_880 = 2;
                        }
                        else
                        {
                            if (*rbx_1 == 0x28)
                            {
                                rbx_1 = (rbx_1 + 2);
                            }
                            uint32_t rax_4;
                            rax_4 = (*(rbx_1 + 2) - 0x42);
                            if (rax_4 > 0x10)
                            {
                                goto label_14000e9c3;
                            }
                            if ((!(TEST_BITD(0x10015, rax_4))))
                            {
                                goto label_14000e9c3;
                            }
                            if (*(rbx_1 + 4) != 0x29)
                            {
                                goto label_14000e9c3;
                            }
                            var_878_1 = &var_828;
                            var_880 = 4;
                        }
                    }
                    goto label_14000e943;
                }
            }
            if (rbx == var_858)
            {
                sub_14000eb78(&var_850, &var_860, &var_858, &var_840, &var_828);
                rbx = var_860;
            }
            rsi = var_850;
            break;
        }
    }
    *rbx = 0;
    int32_t* rax_13;
    int64_t r8_8;
    rax_13 = sub_140009214();
    if (rax_13 != 0)
    {
        memcpy(rax_13, rsi, ((((rbx + 2) - rsi) >> 1) * 2));
        __security_check_cookie((var_28 ^ &var_8a8));
        return rax_13;
    }
    sub_140003898(data_140025c24, 0x419, r8_8);
    breakpoint();
}

int64_t sub_14000eb78(int64_t* arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4, int64_t arg5)
{
    int64_t* rdi = arg1;
    if (*arg1 == arg5)
    {
        *arg4;
        int32_t* rax_2 = sub_140009214();
        memcpy(rax_2, *rdi, (*arg4 * 2));
        *rdi = rax_2;
    }
    int64_t rbx_3 = (*arg4 + 0x400);
    int64_t rax_3 = sub_14000fd90(*rdi, rbx_3);
    int64_t rcx_3 = *arg4;
    *rdi = rax_3;
    *arg4 = rbx_3;
    int64_t rax_4 = (rax_3 + (rbx_3 << 1));
    *arg2 = (rax_3 + (rcx_3 << 1));
    *arg3 = rax_4;
    return rax_4;
}

uint64_t sub_14000ec20(int64_t* arg1, int64_t* arg2, uint64_t* arg3, int64_t* arg4, int64_t* arg5, int32_t arg6, int64_t arg7)
{
    uint64_t* r12 = arg3;
    int64_t* r15 = arg2;
    char var_78 = 0;
    int16_t* i_1 = nullptr;
    char var_77 = 0;
    int32_t* i_6 = nullptr;
    rsize_t var_58 = 0;
    int32_t rsi = 1;
    int16_t* rdi;
    rdi = 0;
    int16_t* r13 = nullptr;
    if (arg6 == 3)
    {
        rsi = 2;
        var_78 = 1;
    }
    else if (arg6 == 4)
    {
        rsi = 4;
        var_78 = 1;
    }
    if ((arg6 == 2 || arg6 == 4))
    {
        i_1 = data_140026458;
    }
    else if ((arg6 == 1 || arg6 == 3))
    {
        int64_t rdx_1 = *arg2;
        uint32_t rcx = *(rdx_1 + (rsi << 1));
        uint64_t rcx_4;
        if (rcx == 0x2a)
        {
            rcx_4 = (rsi + 1);
            if (*(rdx_1 + (rcx_4 << 1)) == 0x2a)
            {
                i_1 = data_140026450;
                rsi = rcx_4;
            }
            else
            {
                i_1 = data_140026478;
                var_77 = 1;
            }
        }
        if (rcx == 0x3c)
        {
            i_1 = data_140026460;
        }
        if (rcx == 0x3f)
        {
            i_1 = data_140026468;
        }
        if (((rcx == 0x2a && *(rdx_1 + (rcx_4 << 1)) == 0x2a) || rcx == 0x3f))
        {
            rdi = 1;
        }
        if ((((rcx != 0x2a && rcx != 0x3c) && rcx != 0x3f) && rcx == 0x40))
        {
            i_1 = data_140026470;
        }
        rsi = (rsi + 1);
    }
    uint64_t rax_4;
    if (((arg6 != 1 && arg6 != 2) && arg6 != 3))
    {
        rax_4 = (arg6 - 4);
    }
    if ((((arg6 == 4 || arg6 == 2) || arg6 == 3) || arg6 == 1))
    {
        if (i_1 == 0)
        {
            rdi = *r15;
            while (*rdi != 0)
            {
                if (*rdi == 0x20)
                {
                    break;
                }
                if (*rdi == 9)
                {
                    break;
                }
                rdi = &rdi[1];
            }
            int16_t rbx = *rdi;
            int32_t rcx_5 = data_140025c24;
            *rdi = 0;
            sub_140003898(rcx_5, 0xfa6, *r15);
            *rdi = rbx;
            rdi = 0;
            int32_t* i_4 = sub_14000dcc4(&data_140011dec);
            i_1 = i_4;
            i_6 = i_4;
        }
        if (rdi == 0)
        {
            int64_t rdi_3 = -1;
            do
            {
                rdi_3 = (rdi_3 + 1);
            } while (i_1[rdi_3] != 0);
            rsize_t rdi_4 = (rdi_3 + 1);
            if (rdi_4 == 1)
            {
                rdi_4 = 2;
            }
            r13 = sub_140009214();
            if (var_77 != 0)
            {
                i_1 = sub_14000eff8(0x52, r13, rdi_4, i_1);
            }
            if (var_78 != 0)
            {
                i_1 = sub_14000eff8(*(*r15 + (rsi << 1)), r13, rdi_4, i_1);
            }
        }
        else
        {
            int64_t var_50 = 0x400;
            int16_t* i = i_1;
            int16_t* i_5 = sub_140009214();
            int16_t* i_3 = i_5;
            int16_t* i_2 = i_5;
            i_1 = i_5;
            void* r15_1 = &i_5[0x400];
            void* var_68 = r15_1;
            if (i != 0)
            {
                do
                {
                    int16_t* r14 = *(i + 8);
                    if (var_78 != 0)
                    {
                        int64_t rdi_1 = -1;
                        do
                        {
                            rdi_1 = (rdi_1 + 1);
                        } while (r14[rdi_1] != 0);
                        if ((rdi_1 + 1) > var_58)
                        {
                            if (r13 != 0)
                            {
                                free(r13);
                            }
                            var_58 = (rdi_1 + 1);
                            r13 = sub_140009214();
                        }
                        r14 = sub_14000eff8(*(*arg2 + (rsi << 1)), r13, var_58, r14);
                    }
                    while (*r14 != 0)
                    {
                        if (i_1 == r15_1)
                        {
                            sub_14000eb78(&i_3, &i_2, &var_68, &var_50, 0);
                            i_1 = i_2;
                            r15_1 = var_68;
                        }
                        *i_1 = *r14;
                        i_1 = &i_1[1];
                        i_2 = i_1;
                        r14 = &r14[1];
                    }
                    if (i_1 == r15_1)
                    {
                        sub_14000eb78(&i_3, &i_2, &var_68, &var_50, 0);
                        i_1 = i_2;
                        r15_1 = var_68;
                    }
                    *i_1 = 0;
                    if (*i != 0)
                    {
                        *i_1 = 0x20;
                        i_1 = &i_1[1];
                        i_2 = i_1;
                        if (i_1 == r15_1)
                        {
                            sub_14000eb78(&i_3, &i_2, &var_68, &var_50, 0);
                            i_1 = i_2;
                            r15_1 = var_68;
                        }
                        *i_1 = 0;
                    }
                    i = *i;
                } while (i != 0);
                i_1 = i_3;
            }
            r15 = arg2;
            i_6 = i_1;
            r12 = arg3;
        }
        rax_4 = sub_14000f188(arg1, r15, r12, arg4, i_1, arg5, arg7);
        if (i_6 != 0)
        {
            rax_4 = free(i_6);
        }
        if (r13 != 0)
        {
            rax_4 = free(r13);
        }
    }
    if (((((arg6 != 1 && arg6 != 2) && arg6 != 3) && arg6 != 4) && rax_4 == 1))
    {
        if (*r12 == *arg4)
        {
            sub_14000eb78(arg1, r12, arg4, arg5, arg7);
        }
        uint64_t rax_7 = *r12;
        *rax_7 = 0x24;
        rax_4 = (rax_7 + 2);
        *r15 = (*r15 + 4);
        *r12 = rax_4;
    }
    return rax_4;
}

int16_t* sub_14000eff8(int16_t arg1, int16_t* arg2, rsize_t arg3, wchar16* arg4)
{
    int16_t* rbx = arg2;
    void* rsi = nullptr;
    void* rdi = nullptr;
    errno_t rax;
    int64_t r8_1;
    rax = wcscpy_s(rbx, arg3, arg4);
    if (rax != 0)
    {
        sub_140003898(data_140025c24, 0x410, r8_1);
    }
    int64_t r15;
    r15 = *rbx == 0x22;
    int64_t rax_1 = -1;
    do
    {
        rax_1 = (rax_1 + 1);
    } while (rbx[rax_1] != 0);
    void* rax_3 = &rbx[(rax_1 - 1)];
    while (rax_3 >= rbx)
    {
        if ((*rax_3 != 0x5c && *rax_3 != 0x2f))
        {
            if ((*rax_3 == 0x2e && rsi == 0))
            {
                rsi = rax_3;
            }
            rax_3 = (rax_3 - 2);
            continue;
        }
        rdi = rax_3;
        break;
    }
    uint32_t rax_4 = arg1;
    if ((((rax_4 != 0x42 && rax_4 != 0x44) && rax_4 != 0x46) && (rax_4 == 0x52 && rsi != 0)))
    {
        *rsi = 0;
    }
    if (rax_4 == 0x44)
    {
        if (rdi != 0)
        {
            if ((rbx[1] == 0x3a && rdi == &rbx[2]))
            {
                rdi = (rdi + 2);
            }
            *rdi = 0;
        }
        else if (rbx[1] == 0x3a)
        {
            rbx[2] = 0;
        }
        else
        {
            errno_t rax_6;
            int64_t r8_2;
            rax_6 = wcscpy_s(rbx, arg3, &data_1400120a8);
            if (rax_6 != 0)
            {
                sub_140003898(data_140025c24, 0x410, r8_2);
            }
        }
    }
    if ((rax_4 == 0x42 && rsi != 0))
    {
        *rsi = 0;
    }
    if ((rax_4 == 0x46 || rax_4 == 0x42))
    {
        if (rdi != 0)
        {
            rbx = (rdi + 2);
        }
        else if (rbx[1] == 0x3a)
        {
            rbx = &rbx[2];
        }
    }
    if (r15 != 0)
    {
        if ((*rbx != 0x22 && rbx > arg2))
        {
            rbx = (rbx - 2);
            *rbx = 0x22;
        }
        wchar16* rax_7 = wcschr(rbx, 0);
        if (rax_7[-1] != 0x22)
        {
            *rax_7 = 0x22;
        }
    }
    return rbx;
}

wchar16* sub_14000f188(int64_t* arg1, int64_t* arg2, void** arg3, int64_t* arg4, int16_t* arg5, int64_t* arg6, int64_t arg7)
{
    *arg2 = (*arg2 + 2);
    int16_t* rax = *arg2;
    if (*rax == 0x5e)
    {
        *arg2 = &rax[1];
    }
    wchar16* rax_2 = wcschr(*arg2, 0x3a);
    int16_t* r8 = *arg2;
    arg_10 = rax_2;
    int16_t* rcx_1 = r8;
    for (int16_t i = *r8; i != 0; i = *rcx_1)
    {
        if (i == 0x29)
        {
            break;
        }
        if (i == 0x5e)
        {
            rcx_1 = &rcx_1[1];
        }
        rcx_1 = &rcx_1[1];
    }
    wchar16* rax_6;
    if ((*r8 == 0x28 && (rax_2 != 0 && rax_2 < rcx_1)))
    {
        sub_14000f300(arg1, &arg_10, arg3, arg4, arg5, arg6, arg7);
        rax_6 = arg_10;
        *arg2 = rax_6;
    label_14000f2fc:
        return rax_6;
    }
    int16_t* rdi_1 = arg5;
    if (*rdi_1 != 0)
    {
        do
        {
            if (*arg3 == *arg4)
            {
                sub_14000eb78(arg1, arg3, arg4, arg6, arg7);
            }
            int16_t* rcx_4 = *arg3;
            int16_t rax_8 = *rdi_1;
            rdi_1 = &rdi_1[1];
            *rcx_4 = rax_8;
            *arg3 = &rcx_4[1];
        } while (*rdi_1 != 0);
    }
    int16_t* rax_10 = *arg2;
    if (*rax_10 == 0x24)
    {
        *arg2 = &rax_10[1];
    }
    rax_6 = *arg2;
    if (*rax_6 == 0x28)
    {
        do
        {
            *arg2 = (*arg2 + 2);
            rax_6 = *arg2;
        } while (*rax_6 != 0x29);
    }
    else if ((*rax_6 == 0x2a && rax_6[1] == 0x2a))
    {
        *arg2 = (*arg2 + 2);
    }
    *arg2 = (*arg2 + 2);
    goto label_14000f2fc;
}

int64_t sub_14000f300(int64_t* arg1, int64_t* arg2, void** arg3, int64_t* arg4, int16_t* arg5, int64_t* arg6, int64_t arg7)
{
    void** r14 = arg3;
    *arg2 = (*arg2 + 2);
    int16_t* rbx = *arg2;
    while (true)
    {
        int16_t rax_1 = *rbx;
        if (rax_1 == 0)
        {
            if (rax_1 != 0x3d)
            {
                arg3 = sub_140003898(data_140025c20, 0x3eb, arg3);
            }
            break;
        }
        if (rax_1 == 0x3d)
        {
            break;
        }
        if (rax_1 == 0x5e)
        {
            rbx = &rbx[1];
        }
        rbx = &rbx[1];
    }
    if (rbx == *arg2)
    {
        arg3 = sub_140003898(data_140025c20, 0x3ed, arg3);
    }
    int16_t* rsi = rbx;
    if (*rbx != 0)
    {
        while (*rsi != 0x29)
        {
            if (*rsi == 0x5e)
            {
                rsi = &rsi[1];
            }
            rsi = &rsi[1];
            if (*rsi == 0)
            {
                break;
            }
        }
    }
    if (((*rbx == 0 || (*rbx != 0 && *rsi != 0x29)) && *rsi != 0x29))
    {
        sub_140003898(data_140025c20, 0x3e8, arg3);
    }
    *arg2;
    int16_t* _String2_1 = sub_140009214();
    int16_t* rdi = *arg2;
    int16_t* _String2 = _String2_1;
    int16_t* _String2_2 = _String2_1;
    while (true)
    {
        int16_t rdx_1 = *rdi;
        if (rdx_1 == 0x3d)
        {
            break;
        }
        if (rdx_1 == 0x5e)
        {
            rdi = &rdi[1];
        }
        *_String2_2 = *rdi;
        _String2_2 = &_String2_2[1];
        rdi = &rdi[1];
    }
    *_String2_2 = 0;
    uint64_t _MaxCount = -1;
    do
    {
        _MaxCount = (_MaxCount + 1);
    } while (_String2[_MaxCount] != 0);
    int16_t* rax_5 = sub_140009214();
    int16_t* r12 = rax_5;
    int16_t* rcx_12 = rax_5;
    while (true)
    {
        rdi = &rdi[1];
        int16_t rdx_3 = *rdi;
        if (rdx_3 == 0x29)
        {
            break;
        }
        if (rdx_3 == 0x5e)
        {
            rdi = &rdi[1];
        }
        *rcx_12 = *rdi;
        rcx_12 = &rcx_12[1];
    }
    int16_t* _String1 = arg5;
    *arg2 = &rsi[1];
    *rcx_12 = 0;
    int16_t i = *_String1;
    if (i != 0)
    {
        do
        {
            int32_t rax_8;
            if (i == *_String2)
            {
                rax_8 = wcsncmp(_String1, _String2, _MaxCount);
                if (rax_8 == 0)
                {
                    int16_t* rdi_1 = r12;
                    if (*r12 != 0)
                    {
                        do
                        {
                            if (*r14 == *arg4)
                            {
                                sub_14000eb78(arg1, r14, arg4, arg6, arg7);
                            }
                            int16_t* rcx_15 = *r14;
                            int16_t rax_10 = *rdi_1;
                            rdi_1 = &rdi_1[1];
                            *rcx_15 = rax_10;
                            *r14 = &rcx_15[1];
                        } while (*rdi_1 != 0);
                        _String2 = _String2_1;
                    }
                    _String1 = &_String1[_MaxCount];
                }
            }
            if ((i != *_String2 || (i == *_String2 && rax_8 != 0)))
            {
                if (*r14 == *arg4)
                {
                    sub_14000eb78(arg1, r14, arg4, arg6, arg7);
                }
                int16_t* rcx_17 = *r14;
                int16_t rax_13 = *_String1;
                _String1 = &_String1[1];
                *rcx_17 = rax_13;
                *r14 = &rcx_17[1];
            }
            i = *_String1;
        } while (i != 0);
    }
    free(_String2);
    /* tailcall */
    return free(r12);
}

int32_t* sub_14000f570(wchar16* arg1, wchar16* arg2)
{
    void var_488;
    int64_t rax_1 = (__security_cookie ^ &var_488);
    wchar16* var_460;
    __builtin_memset(&var_460, 0, 0x20);
    uint64_t _FilenameCount;
    wchar16* _Ext;
    uint64_t _ExtCount;
    void _Drive;
    void _Dir;
    _wsplitpath_s(arg1, &_Drive, 3, &_Dir, 0x100, var_460, _FilenameCount, _Ext, _ExtCount);
    void _Buffer;
    _wmakepath_s(&_Buffer, 0x104, &_Drive, &_Dir, arg2, nullptr);
    int32_t* rax_2 = sub_14000dcc4(&_Buffer);
    __security_check_cookie((rax_1 ^ &var_488));
    return rax_2;
}

void* const* sub_14000f614(int16_t* arg1)
{
    char rbx = 0;
    void* const* rax;
    if (*arg1 == 0x7b)
    {
        arg1 = &arg1[1];
        rax = *arg1;
        if (rax != 0)
        {
            while (rax != 0x7d)
            {
                if (rax == 0x5e)
                {
                    arg1 = &arg1[1];
                }
                arg1 = &arg1[1];
                rax = *arg1;
                if (rax == 0)
                {
                    break;
                }
            }
            if (*arg1 != 0)
            {
                arg1 = &arg1[1];
            }
        }
    }
    if (*arg1 == 0x2e)
    {
        int16_t* rax_1 = arg1;
        while (*rax_1 != 0x7b)
        {
            if (*rax_1 == 0x5e)
            {
                rax_1 = &rax_1[1];
            }
            rax_1 = &rax_1[1];
            if (*rax_1 == 0)
            {
                break;
            }
        }
        int16_t* rdx_1 = arg1;
        for (; arg1 < rax_1; arg1 = &arg1[1])
        {
            if (*arg1 == 0x5c)
            {
                break;
            }
            if (*arg1 == 0x2f)
            {
                break;
            }
        }
        void* string;
        if ((*rax_1 == 0 || (*rax_1 != 0 && arg1 != rax_1)))
        {
            rax = wcspbrk(&rdx_1[1], &data_140013098);
            if ((rax != 0 && *rax == 0x2e))
            {
                string = (rax + 2);
            label_14000f71c:
                if ((wcschr(string, 0x2f) == 0 && wcschr(string, 0x5c) == 0))
                {
                    int64_t r8_1;
                    rax = wcschr(string, 0x2e);
                    if (rax == 0)
                    {
                        rbx = 1;
                    }
                    else
                    {
                        sub_140003898(data_140025c24, 0x444, r8_1);
                    }
                }
            }
        }
        if ((*rax_1 != 0 && arg1 == rax_1))
        {
            rax = &rax_1[1];
            int16_t i = *rax;
            if (i != 0)
            {
                while (i != 0x7d)
                {
                    if (i == 0x5e)
                    {
                        rax = (rax + 2);
                    }
                    rax = (rax + 2);
                    i = *rax;
                    if (i == 0)
                    {
                        break;
                    }
                }
                if ((*rax != 0 && *(rax + 2) == 0x2e))
                {
                    string = (4 + rax);
                    goto label_14000f71c;
                }
            }
        }
    }
    rax = rbx;
    return rax;
}

uint64_t sub_14000f778(int16_t* arg1, int64_t arg2, int16_t* arg3, wchar16* arg4)
{
    int64_t rbp;
    int64_t var_8 = rbp;
    int64_t rsi;
    int64_t var_10 = rsi;
    int64_t r14;
    int64_t var_30 = r14;
    int64_t r15;
    int64_t var_38 = r15;
    void var_2a8;
    int64_t rax_1 = (__security_cookie ^ &var_2a8);
    uint64_t rax_2 = *arg3;
    void* r12 = &arg1[arg2];
    int16_t* rdi = arg3;
    int16_t* rbx = arg1;
    if (rax_2 != 0)
    {
        while (rbx < r12)
        {
            if (rax_2 == 0x25)
            {
                rdi = &rdi[1];
                rax_2 = *rdi;
                if (rax_2 == 0)
                {
                    rdi = (rdi - 2);
                label_14000fa05:
                    rdi = &rdi[1];
                    rax_2 = *rdi;
                    if (rax_2 == 0)
                    {
                        break;
                    }
                    continue;
                }
                else
                {
                    if (rax_2 == 0x25)
                    {
                        *rbx = 0x25;
                        goto label_14000f813;
                    }
                    if (rax_2 == 0x73)
                    {
                        if (arg4 != 0)
                        {
                            wchar16* i_2 = arg4;
                            wchar16* i;
                            do
                            {
                                wchar16 rcx_13 = *i_2;
                                if (rcx_13 == 0)
                                {
                                    break;
                                }
                                if (rbx >= r12)
                                {
                                    break;
                                }
                                *rbx = rcx_13;
                                rbx = &rbx[1];
                                i = i_2;
                                i_2 = &i_2[1];
                            } while (i != -2);
                        }
                        goto label_14000fa05;
                    }
                    if (rax_2 == 0x7c)
                    {
                        void* i_1 = &rdi[-1];
                        int16_t _Drive = 0;
                        r15 = 0;
                        r14 = 0;
                        rbp = 0;
                        rsi = 0;
                        while (true)
                        {
                            rdi = &rdi[1];
                            uint64_t r8 = *rdi;
                            int32_t rcx = r8;
                            if (r8 == 0)
                            {
                                rdi = (rdi - 2);
                            }
                            else
                            {
                                switch (rcx)
                                {
                                    case 0x46:
                                    {
                                        if (rdi[-1] == 0x7c)
                                        {
                                            rsi = 1;
                                            rbp = 1;
                                            r14 = 1;
                                            r15 = 1;
                                        }
                                        break;
                                    }
                                    case 0x64:
                                    {
                                        rsi = 1;
                                        break;
                                    }
                                    case 0x65:
                                    {
                                        r15 = 1;
                                        break;
                                    }
                                    case 0x66:
                                    {
                                        r14 = 1;
                                        break;
                                    }
                                }
                                if (rcx == 0x70)
                                {
                                    rbp = 1;
                                }
                                if (((((rcx == 0x64 || rcx == 0x65) || rcx == 0x66) || rcx == 0x70) || rcx == 0x46))
                                {
                                    if (r8 == 0x46)
                                    {
                                        if (arg4 == 0)
                                        {
                                            sub_140003898(0, 0x449, r8);
                                        }
                                        if (rsi != 0)
                                        {
                                            uint64_t var_288_1;
                                            __builtin_memset(&var_288_1, 0, 0x28);
                                            wchar16* _Filename;
                                            uint64_t _FilenameCount;
                                            wchar16* _Ext;
                                            uint64_t _ExtCount;
                                            _wsplitpath_s(arg4, &_Drive, 0x104, nullptr, var_288_1, _Filename, _FilenameCount, _Ext, _ExtCount);
                                        }
                                        if (rbp != 0)
                                        {
                                            int64_t rcx_6 = -1;
                                            do
                                            {
                                                rcx_6 = (rcx_6 + 1);
                                            } while (&_Drive[rcx_6] != 0);
                                            wchar16* var_280_1;
                                            __builtin_memset(&var_280_1, 0, 0x20);
                                            uint64_t _FilenameCount_1;
                                            wchar16* _Ext_1;
                                            uint64_t _ExtCount_1;
                                            _wsplitpath_s(arg4, nullptr, 0, &&_Drive[rcx_6], (0x104 - rcx_6), var_280_1, _FilenameCount_1, _Ext_1, _ExtCount_1);
                                        }
                                        if (r14 != 0)
                                        {
                                            int64_t rax_4 = -1;
                                            do
                                            {
                                                rax_4 = (rax_4 + 1);
                                            } while (&_Drive[rax_4] != 0);
                                            _wsplitpath_s(arg4, nullptr, 0, nullptr, 0, ((&var_2a8 + (rax_4 << 1)) + 0x50), (0x104 - rax_4), nullptr, 0);
                                        }
                                        if (r15 != 0)
                                        {
                                            int64_t rax_6 = -1;
                                            do
                                            {
                                                rax_6 = (rax_6 + 1);
                                            } while (&_Drive[rax_6] != 0);
                                            uint64_t var_288_4;
                                            __builtin_memset(&var_288_4, 0, 0x18);
                                            wchar16* _Filename_1;
                                            uint64_t _FilenameCount_2;
                                            _wsplitpath_s(arg4, nullptr, 0, nullptr, var_288_4, _Filename_1, _FilenameCount_2, ((&var_2a8 + (rax_6 << 1)) + 0x50), (0x104 - rax_6));
                                        }
                                        if (_Drive != 0)
                                        {
                                            int16_t* rcx_12 = (&_Drive - rbx);
                                            while (rbx < r12)
                                            {
                                                *rbx = *(rcx_12 + rbx);
                                                rbx = &rbx[1];
                                                if (*(rcx_12 + rbx) == 0)
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
                            for (; i_1 <= rdi; i_1 = (i_1 + 2))
                            {
                                if (rbx >= r12)
                                {
                                    break;
                                }
                                *rbx = *i_1;
                                rbx = &rbx[1];
                            }
                            break;
                        }
                        goto label_14000fa05;
                    }
                    *rbx = 0x25;
                    rbx = &rbx[1];
                    if (rbx == r12)
                    {
                        break;
                    }
                    rax_2 = *rdi;
                }
            }
            *rbx = rax_2;
        label_14000f813:
            rbx = &rbx[1];
            goto label_14000fa05;
        }
    }
    if (((rax_2 == 0 || (rax_2 != 0 && rbx < r12)) && rbx < r12))
    {
        *rbx = 0;
        rax_2 = 0;
    }
    if ((((rax_2 == 0 || (rax_2 != 0 && rbx < r12)) && rbx >= r12) || (rax_2 != 0 && rbx >= r12)))
    {
        rax_2 = 1;
    }
    __security_check_cookie((rax_1 ^ &var_2a8));
    return rax_2;
}

void** sub_14000faa4(int16_t* arg1, int64_t arg2, int32_t arg3)
{
    void** rdi = *(&data_140025800 + (arg3 << 3));
    void** rax_3;
    while (true)
    {
        if (rdi == 0)
        {
            rax_3 = nullptr;
            break;
        }
        int16_t* rsi_1 = arg1;
        int16_t* r14_1 = rdi[1];
        if (*arg1 != 0)
        {
            while (*r14_1 != 0)
            {
                bool cond:0_1;
                if ((*rsi_1 != 0x5c && *rsi_1 != 0x2f))
                {
                    wint_t rax_1 = towupper(*r14_1);
                    cond:0_1 = towupper(*rsi_1) != rax_1;
                }
                if (((*rsi_1 == 0x5c || *rsi_1 == 0x2f) && *r14_1 != 0x5c))
                {
                    cond:0_1 = *r14_1 != 0x2f;
                }
                if ((((*rsi_1 != 0x5c && *rsi_1 != 0x2f) || ((*rsi_1 == 0x5c || *rsi_1 == 0x2f) && *r14_1 != 0x5c)) && cond:0_1))
                {
                    break;
                }
                rsi_1 = &rsi_1[1];
                r14_1 = &r14_1[1];
                if (*rsi_1 == 0)
                {
                    break;
                }
            }
        }
        if ((*rsi_1 == 0 && *r14_1 == 0))
        {
            rax_3 = rdi;
            break;
        }
        rdi = *rdi;
    }
    return rax_3;
}

int64_t sub_14000fb60(int16_t* arg1, int16_t* arg2)
{
    int64_t var_18 = (__security_cookie ^ &var_18);
    int64_t r9 = -1;
    int16_t* r8 = arg1;
    int64_t rax_2 = -1;
    do
    {
        rax_2 = (rax_2 + 1);
    } while (arg1[rax_2] != 0);
    void* rcx = ((rax_2 << 1) + 0x11);
    if (rcx <= ((rax_2 << 1) + 2))
    {
        rcx = 0xffffffffffffff0;
    }
    void* rcx_1 = (rcx & 0xfffffffffffffff0);
    __chkstk(rcx_1);
    void var_38;
    void* rsp = (&var_38 - rcx_1);
    do
    {
        r9 = (r9 + 1);
    } while (arg2[r9] != 0);
    void* rcx_2 = ((r9 << 1) + 0x11);
    if (rcx_2 <= ((r9 << 1) + 2))
    {
        rcx_2 = 0xffffffffffffff0;
    }
    void* rcx_3 = (rcx_2 & 0xfffffffffffffff0);
    __chkstk(rcx_3);
    if (*r8 == 0x22)
    {
        r8 = &r8[1];
    }
    int16_t i = *r8;
    int16_t* rcx_4 = (rsp + 0x20);
    if (i != 0)
    {
        do
        {
            *rcx_4 = i;
            rcx_4 = &rcx_4[1];
            i = *((r8 - (rsp + 0x20)) + rcx_4);
        } while (i != 0);
        if ((rcx_4 != (rsp + 0x20) && rcx_4[-1] == 0x22))
        {
            rcx_4 = &rcx_4[-1];
        }
    }
    *rcx_4 = 0;
    if (*arg2 == 0x22)
    {
        arg2 = &arg2[1];
    }
    int16_t i_1 = *arg2;
    void* r8_2 = ((rsp - rcx_3) + 0x20);
    if (i_1 != 0)
    {
        do
        {
            *r8_2 = i_1;
            r8_2 = (r8_2 + 2);
            i_1 = *((arg2 - ((rsp - rcx_3) + 0x20)) + r8_2);
        } while (i_1 != 0);
        if ((r8_2 != ((rsp - rcx_3) + 0x20) && *(r8_2 - 2) == 0x22))
        {
            r8_2 = (r8_2 - 2);
        }
    }
    *r8_2 = 0;
    int64_t rax_9 = _wcsicmp((rsp + 0x20), ((rsp - rcx_3) + 0x20));
    __security_check_cookie((var_18 ^ &var_18));
    return rax_9;
}

int16_t* sub_14000fcac(int16_t* arg1)
{
    int16_t* rbx = arg1;
    int64_t rcx = -1;
    do
    {
        rcx = (rcx + 1);
    } while (rbx[rcx] != 0);
    int16_t* rax_1 = sub_140009214();
    if (*rbx == 0x22)
    {
        rbx = &rbx[1];
    }
    int16_t i = *rbx;
    int16_t* rcx_3 = rax_1;
    if (i != 0)
    {
        do
        {
            *rcx_3 = i;
            rcx_3 = &rcx_3[1];
            i = *((rbx - rax_1) + rcx_3);
        } while (i != 0);
    }
    if (rcx_3[-1] == 0x22)
    {
        rcx_3 = &rcx_3[-1];
    }
    *rcx_3 = 0;
    return rax_1;
}

int64_t sub_14000fd2c(int16_t* arg1, wchar16* arg2)
{
    int16_t* rbx = arg1;
    if (*arg1 == 0x22)
    {
        int16_t* r8_1 = &rbx[1];
        *wcsrchr(arg1, 0x22) = 0;
        int16_t i = *r8_1;
        *rbx = i;
        while (i != 0)
        {
            int16_t* rcx = r8_1;
            r8_1 = &r8_1[1];
            i = *r8_1;
            *rcx = i;
        }
    }
    /* tailcall */
    return _wfsopen(rbx, arg2, 0x20);
}

int64_t sub_14000fd90(int64_t arg1, int64_t arg2)
{
    int64_t rbx = 0;
    int64_t rax_1;
    int64_t r8;
    if (arg1 == 0)
    {
        if (arg2 <= 0x7ffffffffffffff8)
        {
            rax_1 = malloc((arg2 * 2));
        }
        else
        {
        label_14000fdd9:
            sub_140003898(data_140025c24, 0x41b, r8);
        }
    }
    else
    {
        if (arg2 > 0x7ffffffffffffff8)
        {
            goto label_14000fdd9;
        }
        rax_1 = realloc(arg1, (arg2 * 2));
    }
    if (((arg1 == 0 && arg2 <= 0x7ffffffffffffff8) || arg1 != 0))
    {
        rbx = rax_1;
        if (rax_1 == 0)
        {
            goto label_14000fdd9;
        }
    }
    return rbx;
}

void* sub_14000fde8(void* arg1)
{
    void var_298;
    int64_t rax_1 = (__security_cookie ^ &var_298);
    FindFileHandle var_278;
    void var_268;
    void* rax_2 = sub_140005ca8(arg1, &var_268, &var_278);
    if (rax_2 != 0)
    {
        int64_t* rdi_1 = sub_14000dc58();
        rdi_1[1] = sub_14000f570(arg1, rax_2);
        while (true)
        {
            char (* rax_7)[0x104] = sub_140005e30(&var_268, var_278);
            if (rax_7 == 0)
            {
                break;
            }
            int64_t** rax_5 = sub_14000dc58();
            int32_t* rax_6 = sub_14000f570(arg1, rax_7);
            *rax_5 = rdi_1;
            rdi_1 = rax_5;
            rax_5[1] = rax_6;
        }
        rax_2 = rdi_1;
    }
    __security_check_cookie((rax_1 ^ &var_298));
    return rax_2;
}

int64_t pre_c_initialization()
{
    _set_app_type(_crt_console_app);
    _set_fmode(0x4000);
    *__p__commode() = 0;
    if (__scrt_initialize_onexit_tables(1) == 0)
    {
        __scrt_fastfail(7);
        breakpoint();
    }
    sub_140010984();
    atexit(sub_1400109d0);
    if (_configure_wide_argv(_crt_argv_unexpanded_arguments) != 0)
    {
        __scrt_fastfail(7);
        breakpoint();
    }
    sub_140010754();
    if (sub_140010780() != 0)
    {
        __setusermatherr(sub_1400108e4);
    }
    _configthreadlocale(0);
    _initialize_wide_environment();
    return 0;
}

int64_t post_pgo_initialization()
{
    __scrt_initialize_default_local_stdio_options();
    return 0;
}

int64_t pre_cpp_initialization()
{
    sub_14001093c();
    /* tailcall */
    return _set_new_mode(0);
}

int64_t sub_14000ff84()
{
    if (__scrt_initialize_crt(1) == 0)
    {
        __scrt_fastfail(7);
        breakpoint();
    }
    char var_18 = 0;
    int64_t rbx;
    rbx = __scrt_acquire_startup_lock();
    int32_t rcx = data_140015770;
    if (rcx == 1)
    {
        rcx = __scrt_fastfail(7);
    }
    if (rcx != 0)
    {
        char var_18_1 = 1;
    }
    else
    {
        data_140015770 = 1;
        if (_initterm_e(&data_1400115b0, &data_1400115d0) != 0)
        {
            return 0xff;
        }
        _initterm(&data_140011598, &data_1400115a8);
        data_140015770 = 2;
    }
    rcx = rbx;
    __scrt_release_startup_lock(rcx);
    if ((data_14003de10 != 0 && sub_140010544(&data_14003de10) != 0))
    {
        int64_t rbx_1 = data_14003de10;
        j__guard_check_icall();
        rbx_1(0, 2, 0);
    }
    if ((data_14003de08 != 0 && sub_140010544(&data_14003de08) != 0))
    {
        _register_thread_local_exe_atexit_callback(data_14003de08);
    }
    __telemetry_main_invoke_trigger(nullptr);
    wchar16*** rax_6 = __p___wargv();
    int32_t* rax_7 = __p___argc();
    _get_initial_wide_environment();
    sub_14000a348(*rax_7, *rax_6);
    /* no return */
}

int64_t _start()
{
    __security_init_cookie();
    /* tailcall */
    return sub_14000ff84();
}

void __security_check_cookie(int64_t arg1)
{
    if (arg1 == __security_cookie)
    {
        int64_t rcx = (ROLQ(arg1, 0x10));
        if ((rcx & 0xffff) == 0)
        {
            return;
        }
        arg1 = (RORQ(rcx, 0x10));
    }
    /* tailcall */
    return __report_gsfailure(arg1);
}

int64_t __raise_securityfailure(struct EXCEPTION_POINTERS* arg1)
{
    SetUnhandledExceptionFilter(nullptr);
    UnhandledExceptionFilter(arg1);
    /* tailcall */
    return TerminateProcess(GetCurrentProcess(), 0xc0000409);
}

void __report_gsfailure(uint64_t stack_cookie) __noreturn
{
    stack_cookie_1 = stack_cookie;
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) == 0)
    {
        capture_previous_context(&data_1400152a0);
        data_140015398 = __return_addr;
        data_140015338 = &stack_cookie_1;
        data_140015210 = data_140015398;
        data_140015320 = stack_cookie_1;
        data_140015200 = 0xc0000409;
        data_140015204 = 1;
        data_140015218 = 1;
        data_140015220 = 2;
        uint64_t __security_cookie_1 = __security_cookie;
        int64_t var_10 = data_140015010;
        __raise_securityfailure(&data_140011600);
        return;
    }
    trap(0xd);
}

int64_t _lockexit()
{
    return __report_securityfailure(8);
}

int64_t __report_securityfailure(int32_t arg1)
{
    arg_8 = arg1;
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) == 0)
    {
        capture_current_context(&data_1400152a0);
        data_140015398 = __return_addr;
        data_140015338 = &arg_8;
        data_140015210 = data_140015398;
        data_140015200 = 0xc0000409;
        data_140015204 = 1;
        data_140015218 = 1;
        data_140015220 = arg_8;
        return __raise_securityfailure(&data_140011600);
    }
    trap(0xd);
}

struct IMAGE_RUNTIME_FUNCTION_ENTRY* capture_current_context(struct CONTEXT* arg1)
{
    RtlCaptureContext(arg1);
    uint64_t Rip = arg1->Rip;
    struct IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionEntry = RtlLookupFunctionEntry(Rip, &ImageBase, nullptr);
    if (FunctionEntry != 0)
    {
        FunctionEntry = RtlVirtualUnwind(UNW_FLAG_NHANDLER, ImageBase, Rip, FunctionEntry, arg1, &HandlerData, &EstablisherFrame, nullptr);
    }
    return FunctionEntry;
}

EXCEPTION_ROUTINE capture_previous_context(struct CONTEXT* arg1)
{
    RtlCaptureContext(arg1);
    uint64_t Rip = arg1->Rip;
    int32_t i = 0;
    EXCEPTION_ROUTINE FunctionEntry;
    do
    {
        FunctionEntry = RtlLookupFunctionEntry(Rip, &ImageBase, nullptr);
        if (FunctionEntry == 0)
        {
            break;
        }
        FunctionEntry = RtlVirtualUnwind(UNW_FLAG_NHANDLER, ImageBase, Rip, FunctionEntry, arg1, &HandlerData, &EstablisherFrame, nullptr);
        i = (i + 1);
    } while (i < 2);
    return FunctionEntry;
}

int64_t __scrt_acquire_startup_lock()
{
    int64_t rax = sub_140010be8();
    bool z_1;
    if (rax != 0)
    {
        void* gsbase;
        int64_t rcx_1 = *(*(gsbase + 0x30) + 8);
        do
        {
            rax = 0;
            if (0 == data_140015778)
            {
                data_140015778 = rcx_1;
                z_1 = true;
            }
            else
            {
                rax = data_140015778;
                z_1 = false;
            }
            if (z_1)
            {
                break;
            }
        } while (rcx_1 != rax);
        if ((!z_1))
        {
            rax = 1;
        }
    }
    if ((rax == 0 || (rax != 0 && z_1)))
    {
        rax = 0;
    }
    return rax;
}

int64_t __scrt_initialize_crt(int32_t arg1)
{
    char rax = data_1400157b0;
    if (arg1 == 0)
    {
        rax = 1;
    }
    data_1400157b0 = rax;
    uint64_t xcr0;
    sub_140010a24(xcr0);
    int64_t rax_1 = sub_140010cc8();
    if (rax_1 != 0)
    {
        rax_1 = sub_140010cc8();
        if (rax_1 != 0)
        {
            rax_1 = 1;
        }
    }
    if ((rax_1 == 0 || rax_1 == 0))
    {
        rax_1 = 0;
    }
    return rax_1;
}

uint64_t __scrt_initialize_onexit_tables(int32_t arg1)
{
    if (arg1 > 1)
    {
        __scrt_fastfail(5);
        breakpoint();
    }
    int32_t rax = sub_140010be8();
    uint64_t rax_1;
    if ((rax == 0 || (rax != 0 && arg1 != 0)))
    {
        uint64_t __security_cookie_1 = __security_cookie;
        rax_1 = 1;
        int64_t r8_2 = ((RORQ(-1, (0x40 - (__security_cookie_1 & 0x3f)))) ^ __security_cookie_1);
        int64_t var_20_1 = r8_2;
        *data_140015780 = r8_2;
        int64_t var_20_2 = r8_2;
        data_140015790 = r8_2;
        data_140015798 = r8_2;
        data_1400157a8 = r8_2;
    }
    if ((rax != 0 && arg1 == 0))
    {
        if (_initialize_onexit_table((&data_140015780)) == 0)
        {
            rax_1 = _initialize_onexit_table((&data_140015798)) == 0;
        }
        else
        {
            rax_1 = 0;
        }
    }
    return rax_1;
}

uint64_t sub_140010544(int64_t arg1)
{
    struct Section_Header* const rdx_1 = &__section_headers;
    while (true)
    {
        struct Section_Header* const var_18_1 = rdx_1;
        if (rdx_1 == &data_140000310)
        {
            rdx_1 = nullptr;
            break;
        }
        uint64_t virtualAddress = rdx_1->virtualAddress;
        if (((arg1 - &__dos_header) >= virtualAddress && (arg1 - &__dos_header) < (rdx_1->virtualSize + virtualAddress)))
        {
            break;
        }
        rdx_1 = &rdx_1[1];
    }
    uint64_t rax;
    if (rdx_1 == 0)
    {
        rax = 0;
    }
    else if ((rdx_1->characteristics & 0x80000000) == 0)
    {
        rax = 1;
    }
    else
    {
        rax = 0;
    }
    return rax;
}

int64_t __scrt_release_startup_lock(char arg1)
{
    int64_t rbx;
    rbx = arg1;
    int64_t rax = sub_140010be8();
    if ((rax != 0 && rbx == 0))
    {
        data_140015778;
        data_140015778 = 0;
    }
    return rax;
}

int64_t __scrt_uninitialize_crt(char arg1, char arg2)
{
    int64_t rbx;
    rbx = arg1;
    int64_t rax;
    rax = 1;
    return rax;
}

_onexit_t _onexit(_onexit_t arg1)
{
    uint64_t __security_cookie_1 = __security_cookie;
    int32_t rax;
    if ((RORQ((__security_cookie_1 ^ data_140015780), (__security_cookie_1 & 0x3f))) != -1)
    {
        rax = _register_onexit_function(&data_140015780, arg1);
    }
    else
    {
        rax = _crt_atexit(arg1);
    }
    _onexit_t rcx_3 = nullptr;
    if (rax == 0)
    {
        rcx_3 = arg1;
    }
    return rcx_3;
}

uint64_t atexit(_onexit_t arg1)
{
    _onexit_t rax = _onexit(arg1);
    int32_t rax_1 = (-rax);
    return ((-(rax_1 - rax_1)) - 1);
}

uint64_t __security_init_cookie()
{
    lpSystemTimeAsFileTime = 0;
    uint64_t __security_cookie_1 = __security_cookie;
    if (__security_cookie_1 == 0x2b992ddfa232)
    {
        GetSystemTimeAsFileTime(&lpSystemTimeAsFileTime);
        lpSystemTimeAsFileTime_1 = lpSystemTimeAsFileTime;
        uint64_t rax_2 = GetCurrentThreadId();
        lpSystemTimeAsFileTime_1 = (lpSystemTimeAsFileTime_1 ^ rax_2);
        uint64_t rax_4 = GetCurrentProcessId();
        lpSystemTimeAsFileTime_1 = (lpSystemTimeAsFileTime_1 ^ rax_4);
        QueryPerformanceCounter(&lpPerformanceCount);
        __security_cookie_1 = (((((lpPerformanceCount << 0x20) ^ lpPerformanceCount) ^ lpSystemTimeAsFileTime_1) ^ &lpSystemTimeAsFileTime_1) & 0xffffffffffff);
        if (__security_cookie_1 == 0x2b992ddfa232)
        {
            __security_cookie_1 = 0x2b992ddfa233;
        }
        __security_cookie = __security_cookie_1;
    }
    uint64_t rax_10 = (!__security_cookie_1);
    data_140015010 = rax_10;
    return rax_10;
}

int64_t sub_140010744() __pure
{
    return 1;
}

int64_t sub_14001074c() __pure
{
    return 0x4000;
}

int64_t sub_140010754()
{
    /* tailcall */
    return InitializeSListHead(&data_1400157c0);
}

int64_t __scrt_initialize_default_local_stdio_options()
{
    data_14003d120 = (data_14003d120 | 4);
    data_14003d130 = (data_14003d130 | 2);
    return &data_14003d130;
}

int64_t sub_140010780()
{
    int64_t rax;
    rax = data_140015004 == 0;
    return rax;
}

int64_t sub_14001078c() __pure
{
    return &data_14003de10;
}

int64_t sub_140010794() __pure
{
    return &data_14003de08;
}

uint64_t __scrt_fastfail(int32_t arg1)
{
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
    {
        trap(0xd);
    }
    data_1400157d0 = 0;
    void ContextRecord;
    memset(&ContextRecord, 0, 0x4d0);
    RtlCaptureContext(&ContextRecord);
    uint64_t ControlPc;
    struct IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionEntry = RtlLookupFunctionEntry(ControlPc, &ImageBase, nullptr);
    if (FunctionEntry != 0)
    {
        RtlVirtualUnwind(UNW_FLAG_NHANDLER, ImageBase, ControlPc, FunctionEntry, &ContextRecord, &HandlerData, &EstablisherFrame, nullptr);
    }
    void* const __return_addr_2 = __return_addr;
    int64_t* var_440 = &__saved_rbx;
    int32_t var_578;
    memset(&var_578, 0, 0x98);
    void* const __return_addr_1 = __return_addr;
    var_578 = 0x40000015;
    int32_t var_574 = 1;
    bool cond:0 = IsDebuggerPresent() == 1;
    int32_t* ExceptionInfo = &var_578;
    uint64_t rbx_1;
    rbx_1 = cond:0;
    void* var_580 = &ContextRecord;
    SetUnhandledExceptionFilter(nullptr);
    uint64_t rax_4 = UnhandledExceptionFilter(&ExceptionInfo);
    if (rax_4 == 0)
    {
        char temp0_1 = rbx_1;
        rbx_1 = (-rbx_1);
        rax_4 = (rax_4 - rax_4);
        data_1400157d0 = (data_1400157d0 & rax_4);
    }
    return rax_4;
}

int64_t sub_1400108e4() __pure
{
    return 0;
}

HINSTANCE __scrt_is_managed_app()
{
    HINSTANCE rax = GetModuleHandleW(nullptr);
    if (rax == 0)
    {
    label_1400108fc:
        rax = 0;
    }
    else
    {
        if (*rax != 0x5a4d)
        {
            goto label_1400108fc;
        }
        rax = (*(rax + 0x3c) + rax);
        if (*rax != 0x4550)
        {
            goto label_1400108fc;
        }
        if (rax[3] != 0x20b)
        {
            goto label_1400108fc;
        }
        if (*(rax + 0x84) <= 0xe)
        {
            goto label_1400108fc;
        }
        rax = rax[0x1f] != 0;
    }
    return rax;
}

int64_t sub_14001093c()
{
    /* tailcall */
    return SetUnhandledExceptionFilter(sub_14001094c);
}

int64_t sub_14001094c(int64_t* arg1)
{
    int32_t* rax = *arg1;
    if ((*rax == 0xe06d7363 && rax[6] == 4))
    {
        int32_t rcx = rax[8];
        if (((rcx - 0x19930520) <= 2 || ((rcx - 0x19930520) > 2 && rcx == 0x1994000)))
        {
            terminate();
            /* no return */
        }
    }
    return 0;
}

void sub_140010984()
{
    for (void* const i = &data_140013438; i < &data_140013438; i = (i + 8))
    {
        int64_t rdi_1 = *i;
        if (rdi_1 != 0)
        {
            j__guard_check_icall();
            rdi_1(rdi_1);
        }
    }
}

void sub_1400109d0()
{
    for (void* const i = &data_140013448; i < &data_140013448; i = (i + 8))
    {
        int64_t rdi_1 = *i;
        if (rdi_1 != 0)
        {
            j__guard_check_icall();
            rdi_1(rdi_1);
        }
    }
}

int64_t j__guard_check_icall()
{
    /* tailcall */
    return _guard_check_icall();
}

int64_t sub_140010a24(uint64_t arg1 @ xcr0)
{
    char var_20 = 0;
    data_14001501c = 2;
    uint32_t temp0;
    temp0 = __cpuid(0, 0);
    data_140015018 = 1;
    int32_t r8_1;
    int32_t temp1;
    int32_t temp2;
    int32_t temp3;
    r8_1 = (((temp3 ^ 0x49656e69) | (temp2 ^ 0x6c65746e)) | (temp1 ^ 0x756e6547)) == 0;
    int32_t r10_1;
    r10_1 = (((temp1 ^ 0x68747541) | (temp3 ^ 0x69746e65)) | (temp2 ^ 0x444d4163)) == 0;
    uint32_t temp0_1;
    temp0_1 = __cpuid(1, 0);
    uint32_t var_18 = temp0_1;
    int32_t var_10 = temp2;
    int32_t r8_2 = data_1400157d4;
    int32_t var_14 = temp1;
    int32_t var_c = temp3;
    if (r8_1 != 0)
    {
        data_140015020 = -1;
        r8_2 = (r8_2 | 4);
        int32_t rax_2 = (temp0_1 & 0xfff3ff0);
        data_1400157d4 = r8_2;
        if (rax_2 == 0x106c0)
        {
        label_140010b05:
            r8_2 = (r8_2 | 1);
            data_1400157d4 = r8_2;
        }
        else
        {
            if (rax_2 == 0x20660)
            {
                goto label_140010b05;
            }
            if (rax_2 == 0x20670)
            {
                goto label_140010b05;
            }
            uint64_t rax_3 = (rax_2 - 0x30650);
            if ((rax_3 <= 0x20 && (TEST_BITQ(0x100010001, rax_3))))
            {
                goto label_140010b05;
            }
        }
    }
    if ((r10_1 != 0 && (temp0_1 & 0xff00f00) >= 0x600f00))
    {
        r8_2 = (r8_2 | 4);
        data_1400157d4 = r8_2;
    }
    int32_t var_28 = temp3;
    int32_t var_24 = temp2;
    if (temp0 >= 7)
    {
        uint32_t temp0_2;
        temp0_2 = __cpuid(7, 0);
        uint32_t var_18_1 = temp0_2;
        int32_t var_14_1 = temp1;
        int32_t var_10_1 = temp2;
        int32_t var_c_1 = temp3;
        var_20 = temp1;
        if ((TEST_BITD(temp1, 9)))
        {
            data_1400157d4 = (r8_2 | 2);
        }
    }
    if ((TEST_BITD(temp2, 0x14)))
    {
        data_140015018 = 2;
        data_14001501c = 6;
        if (((TEST_BITD(temp2, 0x1b)) && (TEST_BITD(temp2, 0x1c))))
        {
            uint32_t temp0_3;
            temp0_3 = _xgetbv(0, arg1);
            if ((((temp0_3 << 0x20) | temp1) & 6) == 6)
            {
                int32_t rax_8 = (data_14001501c | 8);
                data_140015018 = 3;
                data_14001501c = rax_8;
                if ((var_20 & 0x20) != 0)
                {
                    data_140015018 = 5;
                    data_14001501c = (rax_8 | 0x20);
                }
            }
        }
    }
    return 0;
}

int64_t sub_140010be8()
{
    int64_t rax;
    rax = data_140015030 != 0;
    return rax;
}

void __telemetry_main_invoke_trigger(struct HINSTANCE__* __formal0)
{
    /* tailcall */
    return __telemetry_main_invoke_trigger(__formal0);
}

void __telemetry_main_return_trigger(struct HINSTANCE__* __formal0)
{
    /* tailcall */
    return __telemetry_main_return_trigger(__formal0);
}

enum _EXCEPTION_DISPOSITION __C_specific_handler(struct _EXCEPTION_RECORD* ExceptionRecord, void* EstablisherFrame, struct _CONTEXT* ContextRecord, struct _DISPATCHER_CONTEXT* DispatcherContext)
{
    /* tailcall */
    return __C_specific_handler(ExceptionRecord, EstablisherFrame, ContextRecord, DispatcherContext);
}

char* memset(char* arg1, char arg2, void* arg3)
{
    /* tailcall */
    return memset(arg1, arg2, arg3);
}

void exit(int32_t _Except) __noreturn
{
    /* tailcall */
    return exit(_Except);
}

int32_t _seh_filter_exe(uint32_t _ExceptionNum, struct _EXCEPTION_POINTERS* _ExceptionPtr)
{
    /* tailcall */
    return _seh_filter_exe(_ExceptionNum, _ExceptionPtr);
}

void _set_app_type(enum _crt_app_type _Type)
{
    /* tailcall */
    return _set_app_type(_Type);
}

void __setusermatherr(_UserMathErrorFunctionPointer _UserMathErrorFunction)
{
    /* tailcall */
    return __setusermatherr(_UserMathErrorFunction);
}

errno_t _configure_wide_argv(enum _crt_argv_mode mode)
{
    /* tailcall */
    return _configure_wide_argv(mode);
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

void _initterm(_PVFV* _First, _PVFV* _Last)
{
    /* tailcall */
    return _initterm(_First, _Last);
}

int32_t _initterm_e(_PIFV* _First, _PIFV* _Last)
{
    /* tailcall */
    return _initterm_e(_First, _Last);
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

int32_t* __p___argc()
{
    /* tailcall */
    return __p___argc();
}

wchar16*** __p___wargv()
{
    /* tailcall */
    return __p___wargv();
}

void _cexit()
{
    /* tailcall */
    return _cexit();
}

void _c_exit()
{
    /* tailcall */
    return _c_exit();
}

void _register_thread_local_exe_atexit_callback(_tls_callback_type _Callback)
{
    /* tailcall */
    return _register_thread_local_exe_atexit_callback(_Callback);
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

int32_t* __p__commode()
{
    /* tailcall */
    return __p__commode();
}

int32_t _initialize_onexit_table(struct _onexit_table_t* _Table)
{
    /* tailcall */
    return _initialize_onexit_table(_Table);
}

int32_t _register_onexit_function(struct _onexit_table_t* _Table, _onexit_t _Function)
{
    /* tailcall */
    return _register_onexit_function(_Table, _Function);
}

int32_t _crt_atexit(_PVFV _Function)
{
    /* tailcall */
    return _crt_atexit(_Function);
}

void terminate() __noreturn
{
    /* tailcall */
    return terminate();
}

int64_t initialize_legacy_wide_specifiers()
{
    data_14003d120 = (data_14003d120 | 4);
    data_14003d130 = (data_14003d130 | 2);
    return 0;
}

BOOL IsProcessorFeaturePresent(enum PROCESSOR_FEATURE_ID ProcessorFeature)
{
    /* tailcall */
    return IsProcessorFeaturePresent(ProcessorFeature);
}

int64_t sub_140010cc8() __pure
{
    int64_t rax;
    rax = 1;
    return rax;
}

int64_t __GSHandlerCheck(int64_t arg1, int64_t arg2, int64_t arg3, void* arg4)
{
    __GSHandlerCheckCommon(arg2, arg4, *(arg4 + 0x38));
    return 1;
}

int64_t __GSHandlerCheckCommon(int64_t arg1, void* arg2, int32_t* arg3)
{
    int64_t r9 = arg1;
    int64_t r10 = arg1;
    if ((*arg3 & 4) != 0)
    {
        r10 = ((arg3[1] + arg1) & (-arg3[2]));
    }
    void* rcx_2 = (*(*(arg2 + 0x10) + 8) + *(arg2 + 8));
    if ((*(rcx_2 + 3) & 0xf) != 0)
    {
        r9 = (r9 + (*(rcx_2 + 3) & 0xfffffff0));
    }
    /* tailcall */
    return __security_check_cookie((r9 ^ *((*arg3 & 0xfffffff8) + r10)));
}

uint64_t __GSHandlerCheck_SEH(struct _EXCEPTION_RECORD* arg1, int64_t arg2, struct _CONTEXT* arg3, struct _DISPATCHER_CONTEXT* arg4)
{
    int32_t* HandlerData = arg4->HandlerData;
    void* rbx_2 = &HandlerData[(*HandlerData * 4)];
    __GSHandlerCheckCommon(arg2, arg4, (rbx_2 + 4));
    int32_t r11 = *(rbx_2 + 4);
    enum _EXCEPTION_DISPOSITION rdx_1 = ExceptionContinueSearch;
    int32_t r11_1 = (r11 & 2);
    if ((arg1->ExceptionFlags & 0x66) == 0)
    {
        r11_1 = (r11 & 1);
    }
    if (r11_1 != 0)
    {
        rdx_1 = __C_specific_handler(arg1, arg2, arg3, arg4);
    }
    return rdx_1;
}

void __chkstk(int64_t arg1 @ rax)
{
    void* r10 = (&arg_8 - arg1);
    if (&arg_8 < arg1)
    {
        r10 = nullptr;
    }
    void* gsbase;
    char* r11 = *(gsbase + 0x10);
    if (r10 < r11)
    {
        r10 = (r10 & 0xf000);
        do
        {
            r11 = &r11[-0x1000];
            *r11 = 0;
        } while (r10 != r11);
    }
}

char* memcpy(int32_t* arg1, int32_t* arg2, void* arg3)
{
    /* tailcall */
    return memcpy(arg1, arg2, arg3);
}

int64_t _guard_dispatch_icall_nop(int64_t arg1 @ rax)
{
    /* jump -> arg1 */
}

uint64_t sub_140010e62(int64_t* arg1, void* arg2)
{
    return sub_14000a1e0(arg1, (arg2 + 0x620), (arg2 + 0x150));
}

int64_t thread_start<uint32_t (__cdecl*)(void* __ptr64)>::filt$0::filt$0(int64_t* arg1)
{
    return _seh_filter_exe(**arg1, arg1);
}

uint64_t __scrt_is_nonwritable_in_current_image$filt$0(int64_t* arg1)
{
    int32_t rcx;
    rcx = **arg1 == 0xc0000005;
    return rcx;
}

