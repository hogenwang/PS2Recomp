#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001073A8
// Address: 0x1073a8 - 0x107618
void sub_001073A8_0x1073a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001073A8_0x1073a8");
#endif

    switch (ctx->pc) {
        case 0x10743cu: goto label_10743c;
        case 0x107468u: goto label_107468;
        case 0x107478u: goto label_107478;
        case 0x107558u: goto label_107558;
        case 0x107568u: goto label_107568;
        default: break;
    }

    ctx->pc = 0x1073a8u;

    // 0x1073a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1073a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1073ac: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1073acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1073b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1073b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1073b4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1073b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1073b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1073b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1073bc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1073bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1073c0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1073c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1073c4: 0x8c820820  lw          $v0, 0x820($a0)
    ctx->pc = 0x1073c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2080)));
    // 0x1073c8: 0x435018  mult        $t2, $v0, $v1
    ctx->pc = 0x1073c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1073cc: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x1073ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1073d0: 0xac4906dc  sw          $t1, 0x6DC($v0)
    ctx->pc = 0x1073d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 9));
    // 0x1073d4: 0xac8901c0  sw          $t1, 0x1C0($a0)
    ctx->pc = 0x1073d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 9));
    // 0x1073d8: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x1073d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x1073dc: 0x54480006  bnel        $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1073DCu;
    {
        const bool branch_taken_0x1073dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x1073dc) {
            ctx->pc = 0x1073E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1073DCu;
            // 0x1073e0: 0x8c830184  lw          $v1, 0x184($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1073F8u;
            goto label_1073f8;
        }
    }
    ctx->pc = 0x1073E4u;
    // 0x1073e4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1073e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1073e8: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x1073e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x1073ec: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x1073ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x1073f0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1073f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1073f4: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x1073f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
label_1073f8:
    // 0x1073f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1073f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1073fc: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1073FCu;
    {
        const bool branch_taken_0x1073fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1073fc) {
            ctx->pc = 0x107400u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1073FCu;
            // 0x107400: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10740Cu;
            goto label_10740c;
        }
    }
    ctx->pc = 0x107404u;
    // 0x107404: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x107404u;
    {
        const bool branch_taken_0x107404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107404u;
            // 0x107408: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107404) {
            ctx->pc = 0x107420u;
            goto label_107420;
        }
    }
    ctx->pc = 0x10740Cu;
label_10740c:
    // 0x10740c: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x10740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x107410: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x107410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x107414: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x107414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x107418: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x107418u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x10741c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x10741cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_107420:
    // 0x107420: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x107420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x107424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107428: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107428u;
    {
        const bool branch_taken_0x107428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107428) {
            ctx->pc = 0x10742Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107428u;
            // 0x10742c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107444u;
            goto label_107444;
        }
    }
    ctx->pc = 0x107430u;
    // 0x107430: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x107430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x107434: 0xc04305a  jal         func_10C168
    ctx->pc = 0x107434u;
    SET_GPR_U32(ctx, 31, 0x10743Cu);
    ctx->pc = 0x107438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107434u;
            // 0x107438: 0x24a5a028  addiu       $a1, $a1, -0x5FD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (runtime->hasFunction(0x10C168u)) {
        auto targetFn = runtime->lookupFunction(0x10C168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10743Cu; }
        if (ctx->pc != 0x10743Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C168_0x10c168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10743Cu; }
        if (ctx->pc != 0x10743Cu) { return; }
    }
    ctx->pc = 0x10743Cu;
label_10743c:
    // 0x10743c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10743cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107440: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x107440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_107444:
    // 0x107444: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x107444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x107448: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x107448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10744c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x10744cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107450: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x107450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x107454: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x107454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x107458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10745c: 0x3e00008  jr          $ra
    ctx->pc = 0x10745Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10745Cu;
            // 0x107460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107464u;
    // 0x107464: 0x0  nop
    ctx->pc = 0x107464u;
    // NOP
label_107468:
    // 0x107468: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x107468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10746c: 0x3c0a0010  lui         $t2, 0x10
    ctx->pc = 0x10746cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16 << 16));
    // 0x107470: 0x254a7600  addiu       $t2, $t2, 0x7600
    ctx->pc = 0x107470u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30208));
    // 0x107474: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x107474u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_107478:
    // 0x107478: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x107478u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10747c: 0x2042fffc  addi        $v0, $v0, -0x4
    ctx->pc = 0x10747cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x107480: 0x78c90010  lq          $t1, 0x10($a2)
    ctx->pc = 0x107480u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x107484: 0x78ca0020  lq          $t2, 0x20($a2)
    ctx->pc = 0x107484u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x107488: 0x78cb0030  lq          $t3, 0x30($a2)
    ctx->pc = 0x107488u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x10748c: 0x78cc0040  lq          $t4, 0x40($a2)
    ctx->pc = 0x10748cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x107490: 0x78cd0050  lq          $t5, 0x50($a2)
    ctx->pc = 0x107490u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x107494: 0x78ce0060  lq          $t6, 0x60($a2)
    ctx->pc = 0x107494u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x107498: 0x78cf0070  lq          $t7, 0x70($a2)
    ctx->pc = 0x107498u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x10749c: 0x78b90000  lq          $t9, 0x0($a1)
    ctx->pc = 0x10749cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1074a0: 0x71194108  paddh       $t0, $t0, $t9
    ctx->pc = 0x1074a0u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x1074a4: 0x78b90010  lq          $t9, 0x10($a1)
    ctx->pc = 0x1074a4u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1074a8: 0x710341e8  pminh       $t0, $t0, $v1
    ctx->pc = 0x1074a8u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x1074ac: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x1074acu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1074b0: 0x71394908  paddh       $t1, $t1, $t9
    ctx->pc = 0x1074b0u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x1074b4: 0x78b90020  lq          $t9, 0x20($a1)
    ctx->pc = 0x1074b4u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1074b8: 0x712349e8  pminh       $t1, $t1, $v1
    ctx->pc = 0x1074b8u;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x1074bc: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x1074bcu;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1074c0: 0x71284ec8  ppacb       $t1, $t1, $t0
    ctx->pc = 0x1074c0u;
    SET_GPR_VEC(ctx, 9, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1074c4: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x1074c4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x1074c8: 0x714351e8  pminh       $t2, $t2, $v1
    ctx->pc = 0x1074c8u;
    SET_GPR_VEC(ctx, 10, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x1074cc: 0x78b90030  lq          $t9, 0x30($a1)
    ctx->pc = 0x1074ccu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1074d0: 0x714051c8  pmaxh       $t2, $t2, $zero
    ctx->pc = 0x1074d0u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1074d4: 0x71795908  paddh       $t3, $t3, $t9
    ctx->pc = 0x1074d4u;
    SET_GPR_VEC(ctx, 11, PS2_PADDH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 25)));
    // 0x1074d8: 0x78b90040  lq          $t9, 0x40($a1)
    ctx->pc = 0x1074d8u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1074dc: 0x716359e8  pminh       $t3, $t3, $v1
    ctx->pc = 0x1074dcu;
    SET_GPR_VEC(ctx, 11, PS2_PMINH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x1074e0: 0x716059c8  pmaxh       $t3, $t3, $zero
    ctx->pc = 0x1074e0u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x1074e4: 0x716a5ec8  ppacb       $t3, $t3, $t2
    ctx->pc = 0x1074e4u;
    SET_GPR_VEC(ctx, 11, PS2_PPACB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x1074e8: 0x71996108  paddh       $t4, $t4, $t9
    ctx->pc = 0x1074e8u;
    SET_GPR_VEC(ctx, 12, PS2_PADDH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 25)));
    // 0x1074ec: 0x78b90050  lq          $t9, 0x50($a1)
    ctx->pc = 0x1074ecu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x1074f0: 0x718361e8  pminh       $t4, $t4, $v1
    ctx->pc = 0x1074f0u;
    SET_GPR_VEC(ctx, 12, PS2_PMINH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 3)));
    // 0x1074f4: 0x718061c8  pmaxh       $t4, $t4, $zero
    ctx->pc = 0x1074f4u;
    SET_GPR_VEC(ctx, 12, PS2_PMAXH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x1074f8: 0x71b96908  paddh       $t5, $t5, $t9
    ctx->pc = 0x1074f8u;
    SET_GPR_VEC(ctx, 13, PS2_PADDH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 25)));
    // 0x1074fc: 0x78b90060  lq          $t9, 0x60($a1)
    ctx->pc = 0x1074fcu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x107500: 0x71a369e8  pminh       $t5, $t5, $v1
    ctx->pc = 0x107500u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 3)));
    // 0x107504: 0x71a069c8  pmaxh       $t5, $t5, $zero
    ctx->pc = 0x107504u;
    SET_GPR_VEC(ctx, 13, PS2_PMAXH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 0)));
    // 0x107508: 0x71ac6ec8  ppacb       $t5, $t5, $t4
    ctx->pc = 0x107508u;
    SET_GPR_VEC(ctx, 13, PS2_PPACB(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x10750c: 0x71d97108  paddh       $t6, $t6, $t9
    ctx->pc = 0x10750cu;
    SET_GPR_VEC(ctx, 14, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 25)));
    // 0x107510: 0x78b90070  lq          $t9, 0x70($a1)
    ctx->pc = 0x107510u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x107514: 0x71c371e8  pminh       $t6, $t6, $v1
    ctx->pc = 0x107514u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x107518: 0x71c071c8  pmaxh       $t6, $t6, $zero
    ctx->pc = 0x107518u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 0)));
    // 0x10751c: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x10751cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x107520: 0x71f97908  paddh       $t7, $t7, $t9
    ctx->pc = 0x107520u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x107524: 0x71e379e8  pminh       $t7, $t7, $v1
    ctx->pc = 0x107524u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x107528: 0x71e079c8  pmaxh       $t7, $t7, $zero
    ctx->pc = 0x107528u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x10752c: 0x71ee7ec8  ppacb       $t7, $t7, $t6
    ctx->pc = 0x10752cu;
    SET_GPR_VEC(ctx, 15, PS2_PPACB(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x107530: 0x7c8b0010  sq          $t3, 0x10($a0)
    ctx->pc = 0x107530u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 11));
    // 0x107534: 0x7c8d0020  sq          $t5, 0x20($a0)
    ctx->pc = 0x107534u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 13));
    // 0x107538: 0x7c8f0030  sq          $t7, 0x30($a0)
    ctx->pc = 0x107538u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 15));
    // 0x10753c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x10753cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x107540: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x107540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x107544: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x107544u;
    {
        const bool branch_taken_0x107544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107544u;
            // 0x107548: 0x24c60080  addiu       $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107544) {
            ctx->pc = 0x107478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107478;
        }
    }
    ctx->pc = 0x10754Cu;
    // 0x10754c: 0x3e00008  jr          $ra
    ctx->pc = 0x10754Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107554u;
    // 0x107554: 0x0  nop
    ctx->pc = 0x107554u;
    // NOP
label_107558:
    // 0x107558: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x107558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10755c: 0x3c0a0010  lui         $t2, 0x10
    ctx->pc = 0x10755cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16 << 16));
    // 0x107560: 0x254a7600  addiu       $t2, $t2, 0x7600
    ctx->pc = 0x107560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30208));
    // 0x107564: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x107564u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_107568:
    // 0x107568: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x107568u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10756c: 0x2042fffc  addi        $v0, $v0, -0x4
    ctx->pc = 0x10756cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x107570: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x107570u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107574: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x107574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x107578: 0x7b290010  lq          $t1, 0x10($t9)
    ctx->pc = 0x107578u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x10757c: 0x7b2a0020  lq          $t2, 0x20($t9)
    ctx->pc = 0x10757cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 25), 32)));
    // 0x107580: 0x7b2b0030  lq          $t3, 0x30($t9)
    ctx->pc = 0x107580u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 25), 48)));
    // 0x107584: 0x7b2c0040  lq          $t4, 0x40($t9)
    ctx->pc = 0x107584u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 25), 64)));
    // 0x107588: 0x7b2d0050  lq          $t5, 0x50($t9)
    ctx->pc = 0x107588u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 25), 80)));
    // 0x10758c: 0x7b2e0060  lq          $t6, 0x60($t9)
    ctx->pc = 0x10758cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 25), 96)));
    // 0x107590: 0x7b2f0070  lq          $t7, 0x70($t9)
    ctx->pc = 0x107590u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 25), 112)));
    // 0x107594: 0x710341e8  pminh       $t0, $t0, $v1
    ctx->pc = 0x107594u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x107598: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x107598u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x10759c: 0x712349e8  pminh       $t1, $t1, $v1
    ctx->pc = 0x10759cu;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x1075a0: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x1075a0u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1075a4: 0x71284ec8  ppacb       $t1, $t1, $t0
    ctx->pc = 0x1075a4u;
    SET_GPR_VEC(ctx, 9, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1075a8: 0x714351e8  pminh       $t2, $t2, $v1
    ctx->pc = 0x1075a8u;
    SET_GPR_VEC(ctx, 10, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x1075ac: 0x714051c8  pmaxh       $t2, $t2, $zero
    ctx->pc = 0x1075acu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1075b0: 0x716359e8  pminh       $t3, $t3, $v1
    ctx->pc = 0x1075b0u;
    SET_GPR_VEC(ctx, 11, PS2_PMINH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x1075b4: 0x716059c8  pmaxh       $t3, $t3, $zero
    ctx->pc = 0x1075b4u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x1075b8: 0x716a5ec8  ppacb       $t3, $t3, $t2
    ctx->pc = 0x1075b8u;
    SET_GPR_VEC(ctx, 11, PS2_PPACB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x1075bc: 0x718361e8  pminh       $t4, $t4, $v1
    ctx->pc = 0x1075bcu;
    SET_GPR_VEC(ctx, 12, PS2_PMINH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 3)));
    // 0x1075c0: 0x718061c8  pmaxh       $t4, $t4, $zero
    ctx->pc = 0x1075c0u;
    SET_GPR_VEC(ctx, 12, PS2_PMAXH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x1075c4: 0x71a369e8  pminh       $t5, $t5, $v1
    ctx->pc = 0x1075c4u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 3)));
    // 0x1075c8: 0x71a069c8  pmaxh       $t5, $t5, $zero
    ctx->pc = 0x1075c8u;
    SET_GPR_VEC(ctx, 13, PS2_PMAXH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 0)));
    // 0x1075cc: 0x71ac6ec8  ppacb       $t5, $t5, $t4
    ctx->pc = 0x1075ccu;
    SET_GPR_VEC(ctx, 13, PS2_PPACB(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x1075d0: 0x71c371e8  pminh       $t6, $t6, $v1
    ctx->pc = 0x1075d0u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x1075d4: 0x71c071c8  pmaxh       $t6, $t6, $zero
    ctx->pc = 0x1075d4u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 0)));
    // 0x1075d8: 0x71e379e8  pminh       $t7, $t7, $v1
    ctx->pc = 0x1075d8u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x1075dc: 0x71e079c8  pmaxh       $t7, $t7, $zero
    ctx->pc = 0x1075dcu;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x1075e0: 0x71ee7ec8  ppacb       $t7, $t7, $t6
    ctx->pc = 0x1075e0u;
    SET_GPR_VEC(ctx, 15, PS2_PPACB(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x1075e4: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x1075e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x1075e8: 0x7c8b0010  sq          $t3, 0x10($a0)
    ctx->pc = 0x1075e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 11));
    // 0x1075ec: 0x7c8d0020  sq          $t5, 0x20($a0)
    ctx->pc = 0x1075ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 13));
    // 0x1075f0: 0x7c8f0030  sq          $t7, 0x30($a0)
    ctx->pc = 0x1075f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 15));
    // 0x1075f4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1075F4u;
    {
        const bool branch_taken_0x1075f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1075F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1075F4u;
            // 0x1075f8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1075f4) {
            ctx->pc = 0x107568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107568;
        }
    }
    ctx->pc = 0x1075FCu;
    // 0x1075fc: 0x0  nop
    ctx->pc = 0x1075fcu;
    // NOP
    // 0x107600: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x107600u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x107604: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x107604u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x107608: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x107608u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x10760c: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x10760cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x107610: 0x3e00008  jr          $ra
    ctx->pc = 0x107610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107618u;
    ctx->pc = 0x107618u;
}
