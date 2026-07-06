#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C7FB0
// Address: 0x1c7fb0 - 0x1c8150
void sub_001C7FB0_0x1c7fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7FB0_0x1c7fb0");
#endif

    switch (ctx->pc) {
        case 0x1c8010u: goto label_1c8010;
        default: break;
    }

    ctx->pc = 0x1c7fb0u;

    // 0x1c7fb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c7fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c7fb4: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x1c7fb4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7fb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7fbc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c7fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7fc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c7fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c7fc4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1c7fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1c7fc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c7fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c7fcc: 0x24128000  addiu       $s2, $zero, -0x8000
    ctx->pc = 0x1c7fccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1c7fd0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c7fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c7fd4: 0x24137fff  addiu       $s3, $zero, 0x7FFF
    ctx->pc = 0x1c7fd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1c7fd8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c7fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c7fdc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1c7fdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7fe0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c7fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c7fe4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1c7fe4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7fe8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1c7fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1c7fec: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1c7fecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ff0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1c7ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1c7ff4: 0x241707d6  addiu       $s7, $zero, 0x7D6
    ctx->pc = 0x1c7ff4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2006));
    // 0x1c7ff8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1c7ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1c7ffc: 0x241e0def  addiu       $fp, $zero, 0xDEF
    ctx->pc = 0x1c7ffcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3567));
    // 0x1c8000: 0x2451acb0  addiu       $s1, $v0, -0x5350
    ctx->pc = 0x1c8000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945968));
    // 0x1c8004: 0x8df9000c  lw          $t9, 0xC($t7)
    ctx->pc = 0x1c8004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
    // 0x1c8008: 0x8df80008  lw          $t8, 0x8($t7)
    ctx->pc = 0x1c8008u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x1c800c: 0x0  nop
    ctx->pc = 0x1c800cu;
    // NOP
label_1c8010:
    // 0x1c8010: 0x8de3001c  lw          $v1, 0x1C($t7)
    ctx->pc = 0x1c8010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x1c8014: 0x106040  sll         $t4, $s0, 1
    ctx->pc = 0x1c8014u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c8018: 0x8de20020  lw          $v0, 0x20($t7)
    ctx->pc = 0x1c8018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 32)));
    // 0x1c801c: 0x1962021  addu        $a0, $t4, $s6
    ctx->pc = 0x1c801cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 22)));
    // 0x1c8020: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c8020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8024: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x1c8024u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8028: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c8028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c802c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c802cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c8030: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c8030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c8034: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c8034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8038: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1c8038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c803c: 0x240e7fff  addiu       $t6, $zero, 0x7FFF
    ctx->pc = 0x1c803cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1c8040: 0x8de20028  lw          $v0, 0x28($t7)
    ctx->pc = 0x1c8040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 40)));
    // 0x1c8044: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1c8044u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c8048: 0x70a62818  mult1       $a1, $a1, $a2
    ctx->pc = 0x1c8048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c804c: 0x8de30024  lw          $v1, 0x24($t7)
    ctx->pc = 0x1c804cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 36)));
    // 0x1c8050: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c8050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c8054: 0x8f070000  lw          $a3, 0x0($t8)
    ctx->pc = 0x1c8054u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1c8058: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c8058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c805c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c805cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8060: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1c8060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8064: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x1c8064u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x1c8068: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x1c8068u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x1c806c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c806cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c8070: 0xa64018  mult        $t0, $a1, $a2
    ctx->pc = 0x1c8070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c8074: 0x70863018  mult1       $a2, $a0, $a2
    ctx->pc = 0x1c8074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1c8078: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c8078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c807c: 0x240d7fff  addiu       $t5, $zero, 0x7FFF
    ctx->pc = 0x1c807cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1c8080: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x1c8080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x1c8084: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c8084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c8088: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1c8088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c808c: 0x70822018  mult1       $a0, $a0, $v0
    ctx->pc = 0x1c808cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c8090: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x1c8090u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x1c8094: 0x2402f211  addiu       $v0, $zero, -0xDEF
    ctx->pc = 0x1c8094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963729));
    // 0x1c8098: 0x84303  sra         $t0, $t0, 12
    ctx->pc = 0x1c8098u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 12));
    // 0x1c809c: 0x70d75818  mult1       $t3, $a2, $s7
    ctx->pc = 0x1c809cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 23); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1c80a0: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x1c80a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1c80a4: 0x2402f82a  addiu       $v0, $zero, -0x7D6
    ctx->pc = 0x1c80a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965290));
    // 0x1c80a8: 0x11e5018  mult        $t2, $t0, $fp
    ctx->pc = 0x1c80a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1c80ac: 0x71024018  mult1       $t0, $t0, $v0
    ctx->pc = 0x1c80acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c80b0: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x1c80b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x1c80b4: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x1c80b4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x1c80b8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1c80b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c80bc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1c80bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c80c0: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x1c80c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1c80c4: 0x265182a  slt         $v1, $s3, $a1
    ctx->pc = 0x1c80c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1c80c8: 0x28878000  slti        $a3, $a0, -0x8000
    ctx->pc = 0x1c80c8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1c80cc: 0x28a98000  slti        $t1, $a1, -0x8000
    ctx->pc = 0x1c80ccu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1c80d0: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c80d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c80d4: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x1c80d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x1c80d8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1c80d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1c80dc: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x1c80dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1c80e0: 0x247200b  movn        $a0, $s2, $a3
    ctx->pc = 0x1c80e0u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
    // 0x1c80e4: 0x249280b  movn        $a1, $s2, $t1
    ctx->pc = 0x1c80e4u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    // 0x1c80e8: 0x1c2200b  movn        $a0, $t6, $v0
    ctx->pc = 0x1c80e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 14));
    // 0x1c80ec: 0x1941021  addu        $v0, $t4, $s4
    ctx->pc = 0x1c80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 20)));
    // 0x1c80f0: 0x1a3280b  movn        $a1, $t5, $v1
    ctx->pc = 0x1c80f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
    // 0x1c80f4: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x1c80f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c80f8: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x1c80f8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x1c80fc: 0xa5303  sra         $t2, $t2, 12
    ctx->pc = 0x1c80fcu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
    // 0x1c8100: 0x1956021  addu        $t4, $t4, $s5
    ctx->pc = 0x1c8100u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 21)));
    // 0x1c8104: 0xaf060000  sw          $a2, 0x0($t8)
    ctx->pc = 0x1c8104u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 6));
    // 0x1c8108: 0xa5840000  sh          $a0, 0x0($t4)
    ctx->pc = 0x1c8108u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c810c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x1c810cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x1c8110: 0xaf2a0000  sw          $t2, 0x0($t9)
    ctx->pc = 0x1c8110u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 10));
    // 0x1c8114: 0x27390004  addiu       $t9, $t9, 0x4
    ctx->pc = 0x1c8114u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
    // 0x1c8118: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1C8118u;
    {
        const bool branch_taken_0x1c8118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8118u;
        // 0x1c811c: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8118) {
            ctx->pc = 0x1C8010u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8010;
        }
    }
    ctx->pc = 0x1C8120u;
    // 0x1c8120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8124: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8128: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c8128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c812c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c812cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c8130: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c8130u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8134: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c8134u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c8138: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1c8138u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c813c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1c813cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c8140: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1c8140u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c8144: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8144u;
        // 0x1c8148: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C814Cu;
    // 0x1c814c: 0x0  nop
    ctx->pc = 0x1c814cu;
    // NOP
    if (ctx->pc == 0x1c814cu) { ctx->pc = 0x1c8150u; }
}
