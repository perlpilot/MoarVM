/* This file is generated from src/core/oplist by tools/update_ops.p6. */

/* Bank name defines. */
#define MVM_OP_BANK_primitives 0
#define MVM_OP_BANK_dev 1
#define MVM_OP_BANK_string 2
#define MVM_OP_BANK_math 3
#define MVM_OP_BANK_object 4
#define MVM_OP_BANK_io 5
#define MVM_OP_BANK_processthread 6
#define MVM_OP_BANK_serialization 7

/* Op name defines for bank primitives. */
#define MVM_OP_no_op 0
#define MVM_OP_goto 1
#define MVM_OP_if_i 2
#define MVM_OP_unless_i 3
#define MVM_OP_if_n 4
#define MVM_OP_unless_n 5
#define MVM_OP_if_s 6
#define MVM_OP_unless_s 7
#define MVM_OP_if_s0 8
#define MVM_OP_unless_s0 9
#define MVM_OP_if_o 10
#define MVM_OP_unless_o 11
#define MVM_OP_set 12
#define MVM_OP_extend_u8 13
#define MVM_OP_extend_u16 14
#define MVM_OP_extend_u32 15
#define MVM_OP_extend_i8 16
#define MVM_OP_extend_i16 17
#define MVM_OP_extend_i32 18
#define MVM_OP_trunc_u8 19
#define MVM_OP_trunc_u16 20
#define MVM_OP_trunc_u32 21
#define MVM_OP_trunc_i8 22
#define MVM_OP_trunc_i16 23
#define MVM_OP_trunc_i32 24
#define MVM_OP_extend_n32 25
#define MVM_OP_trunc_n32 26
#define MVM_OP_getlex 27
#define MVM_OP_bindlex 28
#define MVM_OP_getlex_ni 29
#define MVM_OP_getlex_nn 30
#define MVM_OP_getlex_ns 31
#define MVM_OP_getlex_no 32
#define MVM_OP_bindlex_ni 33
#define MVM_OP_bindlex_nn 34
#define MVM_OP_bindlex_ns 35
#define MVM_OP_bindlex_no 36
#define MVM_OP_getlex_ng 37
#define MVM_OP_bindlex_ng 38
#define MVM_OP_return_i 39
#define MVM_OP_return_n 40
#define MVM_OP_return_s 41
#define MVM_OP_return_o 42
#define MVM_OP_return 43
#define MVM_OP_const_i8 44
#define MVM_OP_const_i16 45
#define MVM_OP_const_i32 46
#define MVM_OP_const_i64 47
#define MVM_OP_const_n32 48
#define MVM_OP_const_n64 49
#define MVM_OP_const_s 50
#define MVM_OP_add_i 51
#define MVM_OP_sub_i 52
#define MVM_OP_mul_i 53
#define MVM_OP_div_i 54
#define MVM_OP_div_u 55
#define MVM_OP_mod_i 56
#define MVM_OP_mod_u 57
#define MVM_OP_neg_i 58
#define MVM_OP_abs_i 59
#define MVM_OP_inc_i 60
#define MVM_OP_inc_u 61
#define MVM_OP_dec_i 62
#define MVM_OP_dec_u 63
#define MVM_OP_getcode 64
#define MVM_OP_prepargs 65
#define MVM_OP_arg_i 66
#define MVM_OP_arg_n 67
#define MVM_OP_arg_s 68
#define MVM_OP_arg_o 69
#define MVM_OP_invoke_v 70
#define MVM_OP_invoke_i 71
#define MVM_OP_invoke_n 72
#define MVM_OP_invoke_s 73
#define MVM_OP_invoke_o 74
#define MVM_OP_add_n 75
#define MVM_OP_sub_n 76
#define MVM_OP_mul_n 77
#define MVM_OP_div_n 78
#define MVM_OP_neg_n 79
#define MVM_OP_abs_n 80
#define MVM_OP_eq_i 81
#define MVM_OP_ne_i 82
#define MVM_OP_lt_i 83
#define MVM_OP_le_i 84
#define MVM_OP_gt_i 85
#define MVM_OP_ge_i 86
#define MVM_OP_eq_n 87
#define MVM_OP_ne_n 88
#define MVM_OP_lt_n 89
#define MVM_OP_le_n 90
#define MVM_OP_gt_n 91
#define MVM_OP_ge_n 92
#define MVM_OP_argconst_i 93
#define MVM_OP_argconst_n 94
#define MVM_OP_argconst_s 95
#define MVM_OP_checkarity 96
#define MVM_OP_param_rp_i 97
#define MVM_OP_param_rp_n 98
#define MVM_OP_param_rp_s 99
#define MVM_OP_param_rp_o 100
#define MVM_OP_param_op_i 101
#define MVM_OP_param_op_n 102
#define MVM_OP_param_op_s 103
#define MVM_OP_param_op_o 104
#define MVM_OP_param_rn_i 105
#define MVM_OP_param_rn_n 106
#define MVM_OP_param_rn_s 107
#define MVM_OP_param_rn_o 108
#define MVM_OP_param_on_i 109
#define MVM_OP_param_on_n 110
#define MVM_OP_param_on_s 111
#define MVM_OP_param_on_o 112
#define MVM_OP_coerce_in 113
#define MVM_OP_coerce_ni 114
#define MVM_OP_band_i 115
#define MVM_OP_bor_i 116
#define MVM_OP_bxor_i 117
#define MVM_OP_bnot_i 118
#define MVM_OP_blshift_i 119
#define MVM_OP_brshift_i 120
#define MVM_OP_pow_i 121
#define MVM_OP_pow_n 122
#define MVM_OP_takeclosure 123
#define MVM_OP_jumplist 124
#define MVM_OP_caller 125
#define MVM_OP_getdynlex 126
#define MVM_OP_binddynlex 127
#define MVM_OP_coerce_is 128
#define MVM_OP_coerce_ns 129
#define MVM_OP_coerce_si 130
#define MVM_OP_coerce_sn 131
#define MVM_OP_smrt_numify 132
#define MVM_OP_smrt_strify 133
#define MVM_OP_param_sp 134
#define MVM_OP_param_sn 135
#define MVM_OP_ifnonnull 136
#define MVM_OP_cmp_i 137
#define MVM_OP_cmp_n 138
#define MVM_OP_not_i 139
#define MVM_OP_setlexvalue 140
#define MVM_OP_exception 141
#define MVM_OP_handled 142
#define MVM_OP_newexception 143
#define MVM_OP_bindexmessage 144
#define MVM_OP_bindexpayload 145
#define MVM_OP_bindexcategory 146
#define MVM_OP_getexmessage 147
#define MVM_OP_getexpayload 148
#define MVM_OP_getexcategory 149
#define MVM_OP_throwdyn 150
#define MVM_OP_throwlex 151
#define MVM_OP_throwlexotic 152
#define MVM_OP_throwcatdyn 153
#define MVM_OP_throwcatlex 154
#define MVM_OP_throwcatlexotic 155
#define MVM_OP_die 156
#define MVM_OP_newlexotic 157
#define MVM_OP_lexoticresult 158
#define MVM_OP_mod_n 159
#define MVM_OP_usecapture 160
#define MVM_OP_savecapture 161
#define MVM_OP_captureposelems 162
#define MVM_OP_captureposarg 163
#define MVM_OP_captureposarg_i 164
#define MVM_OP_captureposarg_n 165
#define MVM_OP_captureposarg_s 166
#define MVM_OP_captureposprimspec 167
#define MVM_OP_invokewithcapture 168
#define MVM_OP_multicacheadd 169
#define MVM_OP_multicachefind 170

/* Op name defines for bank dev. */
#define MVM_OP_sleep 0
#define MVM_OP_anonoshtype 1

/* Op name defines for bank string. */
#define MVM_OP_concat_s 0
#define MVM_OP_repeat_s 1
#define MVM_OP_substr_s 2
#define MVM_OP_index_s 3
#define MVM_OP_graphs_s 4
#define MVM_OP_codes_s 5
#define MVM_OP_eq_s 6
#define MVM_OP_ne_s 7
#define MVM_OP_eqat_s 8
#define MVM_OP_haveat_s 9
#define MVM_OP_getcp_s 10
#define MVM_OP_indexcp_s 11
#define MVM_OP_uc 12
#define MVM_OP_lc 13
#define MVM_OP_tc 14
#define MVM_OP_buftostr 15
#define MVM_OP_strtobuf 16
#define MVM_OP_decode_s 17
#define MVM_OP_decode_b 18
#define MVM_OP_decode 19
#define MVM_OP_encode 20
#define MVM_OP_split 21
#define MVM_OP_join 22
#define MVM_OP_replace 23
#define MVM_OP_getcpbyname 24
#define MVM_OP_indexat_scb 25
#define MVM_OP_unipropcode 26
#define MVM_OP_unipvalcode 27
#define MVM_OP_hasuniprop 28
#define MVM_OP_hasunipropc 29
#define MVM_OP_concatr_s 30
#define MVM_OP_splice_s 31
#define MVM_OP_chars 32
#define MVM_OP_chr 33
#define MVM_OP_ordfirst 34
#define MVM_OP_ordat 35
#define MVM_OP_rindexfrom 36
#define MVM_OP_escape 37
#define MVM_OP_flip 38
#define MVM_OP_iscclass 39
#define MVM_OP_findcclass 40
#define MVM_OP_findnotcclass 41
#define MVM_OP_nfafromstatelist 42
#define MVM_OP_nfarunproto 43
#define MVM_OP_nfarunalt 44
#define MVM_OP_flattenropes 45
#define MVM_OP_gt_s 46
#define MVM_OP_ge_s 47
#define MVM_OP_lt_s 48
#define MVM_OP_le_s 49
#define MVM_OP_cmp_s 50

/* Op name defines for bank math. */
#define MVM_OP_sin_n 0
#define MVM_OP_asin_n 1
#define MVM_OP_cos_n 2
#define MVM_OP_acos_n 3
#define MVM_OP_tan_n 4
#define MVM_OP_atan_n 5
#define MVM_OP_atan2_n 6
#define MVM_OP_sec_n 7
#define MVM_OP_asec_n 8
#define MVM_OP_sinh_n 9
#define MVM_OP_cosh_n 10
#define MVM_OP_tanh_n 11
#define MVM_OP_sech_n 12
#define MVM_OP_sqrt_n 13
#define MVM_OP_gcd_i 14
#define MVM_OP_lcm_i 15

/* Op name defines for bank object. */
#define MVM_OP_knowhow 0
#define MVM_OP_findmeth 1
#define MVM_OP_findmeth_s 2
#define MVM_OP_can 3
#define MVM_OP_can_s 4
#define MVM_OP_create 5
#define MVM_OP_gethow 6
#define MVM_OP_getwhat 7
#define MVM_OP_atkey_i 8
#define MVM_OP_atkey_n 9
#define MVM_OP_atkey_s 10
#define MVM_OP_atkey_o 11
#define MVM_OP_bindkey_i 12
#define MVM_OP_bindkey_n 13
#define MVM_OP_bindkey_s 14
#define MVM_OP_bindkey_o 15
#define MVM_OP_existskey 16
#define MVM_OP_deletekey 17
#define MVM_OP_getwhere 18
#define MVM_OP_eqaddr 19
#define MVM_OP_reprname 20
#define MVM_OP_isconcrete 21
#define MVM_OP_atpos_i 22
#define MVM_OP_atpos_n 23
#define MVM_OP_atpos_s 24
#define MVM_OP_atpos_o 25
#define MVM_OP_bindpos_i 26
#define MVM_OP_bindpos_n 27
#define MVM_OP_bindpos_s 28
#define MVM_OP_bindpos_o 29
#define MVM_OP_push_i 30
#define MVM_OP_push_n 31
#define MVM_OP_push_s 32
#define MVM_OP_push_o 33
#define MVM_OP_pop_i 34
#define MVM_OP_pop_n 35
#define MVM_OP_pop_s 36
#define MVM_OP_pop_o 37
#define MVM_OP_shift_i 38
#define MVM_OP_shift_n 39
#define MVM_OP_shift_s 40
#define MVM_OP_shift_o 41
#define MVM_OP_unshift_i 42
#define MVM_OP_unshift_n 43
#define MVM_OP_unshift_s 44
#define MVM_OP_unshift_o 45
#define MVM_OP_splice 46
#define MVM_OP___INVALID_1__ 47
#define MVM_OP_setelemspos 48
#define MVM_OP_box_i 49
#define MVM_OP_box_n 50
#define MVM_OP_box_s 51
#define MVM_OP_unbox_i 52
#define MVM_OP_unbox_n 53
#define MVM_OP_unbox_s 54
#define MVM_OP_bindattr_i 55
#define MVM_OP_bindattr_n 56
#define MVM_OP_bindattr_s 57
#define MVM_OP_bindattr_o 58
#define MVM_OP_bindattrs_i 59
#define MVM_OP_bindattrs_n 60
#define MVM_OP_bindattrs_s 61
#define MVM_OP_bindattrs_o 62
#define MVM_OP_getattr_i 63
#define MVM_OP_getattr_n 64
#define MVM_OP_getattr_s 65
#define MVM_OP_getattr_o 66
#define MVM_OP_getattrs_i 67
#define MVM_OP_getattrs_n 68
#define MVM_OP_getattrs_s 69
#define MVM_OP_getattrs_o 70
#define MVM_OP_isnull 71
#define MVM_OP_knowhowattr 72
#define MVM_OP_iscoderef 73
#define MVM_OP_null 74
#define MVM_OP_clone 75
#define MVM_OP_isnull_s 76
#define MVM_OP_bootint 77
#define MVM_OP_bootnum 78
#define MVM_OP_bootstr 79
#define MVM_OP_bootarray 80
#define MVM_OP_boothash 81
#define MVM_OP_sethllconfig 82
#define MVM_OP_hllboxtype_i 83
#define MVM_OP_hllboxtype_n 84
#define MVM_OP_hllboxtype_s 85
#define MVM_OP_elems 86
#define MVM_OP_null_s 87
#define MVM_OP_newtype 88
#define MVM_OP_islist 89
#define MVM_OP_ishash 90
#define MVM_OP_iter 91
#define MVM_OP_iterkey_s 92
#define MVM_OP_iterval 93
#define MVM_OP_getcodename 94
#define MVM_OP_composetype 95
#define MVM_OP_setmethcache 96
#define MVM_OP_setmethcacheauth 97
#define MVM_OP_settypecache 98
#define MVM_OP_setinvokespec 99
#define MVM_OP_isinvokable 100
#define MVM_OP_iscont 101
#define MVM_OP_decont 102
#define MVM_OP_setboolspec 103
#define MVM_OP_istrue 104
#define MVM_OP_isfalse 105
#define MVM_OP_istrue_s 106
#define MVM_OP_isfalse_s 107
#define MVM_OP_getcodeobj 108
#define MVM_OP_setcodeobj 109
#define MVM_OP_setcodename 110
#define MVM_OP_forceouterctx 111
#define MVM_OP_getcomp 112
#define MVM_OP_bindcomp 113
#define MVM_OP_getcurhllsym 114
#define MVM_OP_bindcurhllsym 115
#define MVM_OP_getwho 116
#define MVM_OP_setwho 117
#define MVM_OP_rebless 118
#define MVM_OP_istype 119
#define MVM_OP_ctx 120
#define MVM_OP_ctxouter 121
#define MVM_OP_ctxcaller 122
#define MVM_OP_ctxlexpad 123
#define MVM_OP_curcode 124
#define MVM_OP_callercode 125
#define MVM_OP_bootintarray 126
#define MVM_OP_bootnumarray 127
#define MVM_OP_bootstrarray 128

/* Op name defines for bank io. */
#define MVM_OP_copy_f 0
#define MVM_OP_append_f 1
#define MVM_OP_rename_f 2
#define MVM_OP_delete_f 3
#define MVM_OP_chmod_f 4
#define MVM_OP_exists_f 5
#define MVM_OP_mkdir 6
#define MVM_OP_rmdir 7
#define MVM_OP_open_dir 8
#define MVM_OP_read_dir 9
#define MVM_OP_close_dir 10
#define MVM_OP_open_fh 11
#define MVM_OP_close_fh 12
#define MVM_OP_read_fhs 13
#define MVM_OP_read_fhbuf 14
#define MVM_OP_slurp 15
#define MVM_OP_spew 16
#define MVM_OP_write_fhs 17
#define MVM_OP_write_fhbuf 18
#define MVM_OP_seek_fh 19
#define MVM_OP_lock_fh 20
#define MVM_OP_unlock_fh 21
#define MVM_OP_flush_fh 22
#define MVM_OP_sync_fh 23
#define MVM_OP_pipe_fh 24
#define MVM_OP_trunc_fh 25
#define MVM_OP_eof_fh 26
#define MVM_OP_getstdin 27
#define MVM_OP_getstdout 28
#define MVM_OP_getstderr 29
#define MVM_OP_connect_sk 30
#define MVM_OP_close_sk 31
#define MVM_OP_bind_sk 32
#define MVM_OP_listen_sk 33
#define MVM_OP_accept_sk 34
#define MVM_OP_send_sks 35
#define MVM_OP_send_skbuf 36
#define MVM_OP_recv_sks 37
#define MVM_OP_recv_skbuf 38
#define MVM_OP_getaddr_sk 39
#define MVM_OP_hostname 40
#define MVM_OP_nametoaddr 41
#define MVM_OP_addrtoname 42
#define MVM_OP_porttosvc 43
#define MVM_OP_setencoding 44
#define MVM_OP_print 45
#define MVM_OP_say 46

/* Op name defines for bank processthread. */
#define MVM_OP_getenv 0
#define MVM_OP_setenv 1
#define MVM_OP_delenv 2
#define MVM_OP_nametogid 3
#define MVM_OP_gidtoname 4
#define MVM_OP_nametouid 5
#define MVM_OP_uidtoname 6
#define MVM_OP_getusername 7
#define MVM_OP_getuid 8
#define MVM_OP_getgid 9
#define MVM_OP_gethomedir 10
#define MVM_OP_getencoding 11
#define MVM_OP_procshell 12
#define MVM_OP_procshellbg 13
#define MVM_OP_procrun 14
#define MVM_OP_procrunbg 15
#define MVM_OP_prockill 16
#define MVM_OP_procwait 17
#define MVM_OP_procalive 18
#define MVM_OP_detach 19
#define MVM_OP_daemonize 20
#define MVM_OP_chdir 21
#define MVM_OP_rand_i 22
#define MVM_OP_rand_n 23
#define MVM_OP_time_i 24
#define MVM_OP_clargs 25
#define MVM_OP_newthread 26
#define MVM_OP_jointhread 27
#define MVM_OP_time_n 28
#define MVM_OP_exit 29
#define MVM_OP_loadbytecode 30

/* Op name defines for bank serialization. */
#define MVM_OP_sha1 0
#define MVM_OP_createsc 1
#define MVM_OP_scsetobj 2
#define MVM_OP_scsetcode 3
#define MVM_OP_scgetobj 4
#define MVM_OP_scgethandle 5
#define MVM_OP_scgetobjidx 6
#define MVM_OP_scsetdesc 7
#define MVM_OP_scobjcount 8
#define MVM_OP_setobjsc 9
#define MVM_OP_getobjsc 10
#define MVM_OP_serialize 11
#define MVM_OP_deserialize 12
#define MVM_OP_wval 13
#define MVM_OP_wval_wide 14
#define MVM_OP_scwbdisable 15
#define MVM_OP_scwbenable 16

MVMOpInfo * MVM_op_get_op(unsigned char bank, unsigned char op);
