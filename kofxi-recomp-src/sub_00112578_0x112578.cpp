#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00112578
// Address: 0x112578 - 0x1127b8
void sub_00112578_0x112578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112578_0x112578");
#endif

    switch (ctx->pc) {
        case 0x1125b0u: goto label_1125b0;
        case 0x1125bcu: goto label_1125bc;
        case 0x1125e8u: goto label_1125e8;
        case 0x112634u: goto label_112634;
        case 0x11265cu: goto label_11265c;
        case 0x11269cu: goto label_11269c;
        case 0x1126d8u: goto label_1126d8;
        case 0x11271cu: goto label_11271c;
        case 0x11272cu: goto label_11272c;
        case 0x112734u: goto label_112734;
        case 0x112748u: goto label_112748;
        case 0x112758u: goto label_112758;
        case 0x112770u: goto label_112770;
        case 0x112780u: goto label_112780;
        case 0x112788u: goto label_112788;
        default: break;
    }

    ctx->pc = 0x112578u;

    // 0x112578: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x112578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x11257c: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x11257cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x112580: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x112580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x112584: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x112584u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112588: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x112588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x11258c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x11258cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112590: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x112590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x112594: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x112594u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x112598: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x112598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11259c: 0x26918280  addiu       $s1, $s4, -0x7D80
    ctx->pc = 0x11259cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294935168));
    // 0x1125a0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1125a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1125a4: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1125a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1125a8: 0xc0445b2  jal         func_1116C8
    ctx->pc = 0x1125A8u;
    SET_GPR_U32(ctx, 31, 0x1125B0u);
    ctx->pc = 0x1125ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1125A8u;
            // 0x1125ac: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1116C8u;
    if (runtime->hasFunction(0x1116C8u)) {
        auto targetFn = runtime->lookupFunction(0x1116C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1125B0u; }
        if (ctx->pc != 0x1125B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001116C8_0x1116c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1125B0u; }
        if (ctx->pc != 0x1125B0u) { return; }
    }
    ctx->pc = 0x1125B0u;
label_1125b0:
    // 0x1125b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1125b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1125b4: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x1125B4u;
    SET_GPR_U32(ctx, 31, 0x1125BCu);
    ctx->pc = 0x1125B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1125B4u;
            // 0x1125b8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (runtime->hasFunction(0x111B48u)) {
        auto targetFn = runtime->lookupFunction(0x111B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1125BCu; }
        if (ctx->pc != 0x1125BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B48_0x111b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1125BCu; }
        if (ctx->pc != 0x1125BCu) { return; }
    }
    ctx->pc = 0x1125BCu;
label_1125bc:
    // 0x1125bc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1125bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1125c0: 0x8c62873c  lw          $v0, -0x78C4($v1)
    ctx->pc = 0x1125c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936380)));
    // 0x1125c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1125C4u;
    {
        const bool branch_taken_0x1125c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1125c4) {
            ctx->pc = 0x1125E0u;
            goto label_1125e0;
        }
    }
    ctx->pc = 0x1125CCu;
    // 0x1125cc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1125CCu;
    {
        const bool branch_taken_0x1125cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1125cc) {
            ctx->pc = 0x1125E0u;
            goto label_1125e0;
        }
    }
    ctx->pc = 0x1125D4u;
    // 0x1125d4: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x1125d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1125d8: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1125D8u;
    {
        const bool branch_taken_0x1125d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1125DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1125D8u;
            // 0x1125dc: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125d8) {
            ctx->pc = 0x1125F0u;
            goto label_1125f0;
        }
    }
    ctx->pc = 0x1125E0u;
label_1125e0:
    // 0x1125e0: 0xc0446de  jal         func_111B78
    ctx->pc = 0x1125E0u;
    SET_GPR_U32(ctx, 31, 0x1125E8u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1125E8u; }
        if (ctx->pc != 0x1125E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1125E8u; }
        if (ctx->pc != 0x1125E8u) { return; }
    }
    ctx->pc = 0x1125E8u;
label_1125e8:
    // 0x1125e8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1125E8u;
    {
        const bool branch_taken_0x1125e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1125ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1125E8u;
            // 0x1125ec: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125e8) {
            ctx->pc = 0x11278Cu;
            goto label_11278c;
        }
    }
    ctx->pc = 0x1125F0u;
label_1125f0:
    // 0x1125f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1125f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1125f4: 0x24429780  addiu       $v0, $v0, -0x6880
    ctx->pc = 0x1125f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940544));
    // 0x1125f8: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x1125f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x1125fc: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1125fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x112600: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x112600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x112604: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x112604u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x112608: 0xae330010  sw          $s3, 0x10($s1)
    ctx->pc = 0x112608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 19));
    // 0x11260c: 0xae350014  sw          $s5, 0x14($s1)
    ctx->pc = 0x11260cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 21));
    // 0x112610: 0x2463a890  addiu       $v1, $v1, -0x5770
    ctx->pc = 0x112610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944912));
    // 0x112614: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x112614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x112618: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x112618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11261c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11261cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x112620: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x112620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x112624: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x112624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x112628: 0x32508000  andi        $s0, $s2, 0x8000
    ctx->pc = 0x112628u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x11262c: 0xc043318  jal         func_10CC60
    ctx->pc = 0x11262Cu;
    SET_GPR_U32(ctx, 31, 0x112634u);
    ctx->pc = 0x112630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11262Cu;
            // 0x112630: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (runtime->hasFunction(0x10CC60u)) {
        auto targetFn = runtime->lookupFunction(0x10CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112634u; }
        if (ctx->pc != 0x112634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateSemaWrapper_0x10cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112634u; }
        if (ctx->pc != 0x112634u) { return; }
    }
    ctx->pc = 0x112634u;
label_112634:
    // 0x112634: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x112634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112638: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x112638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11263c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x11263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x112640: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x112640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x112644: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x112644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x112648: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x112648u;
    {
        const bool branch_taken_0x112648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11264Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112648u;
            // 0x11264c: 0xae938280  sw          $s3, -0x7D80($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294935168), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112648) {
            ctx->pc = 0x1126E0u;
            goto label_1126e0;
        }
    }
    ctx->pc = 0x112650u;
    // 0x112650: 0x3c150036  lui         $s5, 0x36
    ctx->pc = 0x112650u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)54 << 16));
    // 0x112654: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x112654u;
    SET_GPR_U32(ctx, 31, 0x11265Cu);
    ctx->pc = 0x112658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112654u;
            // 0x112658: 0x8ea4874c  lw          $a0, -0x78B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11265Cu; }
        if (ctx->pc != 0x11265Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11265Cu; }
        if (ctx->pc != 0x11265Cu) { return; }
    }
    ctx->pc = 0x11265Cu;
label_11265c:
    // 0x11265c: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x11265cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x112660: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112664: 0x8ce386b8  lw          $v1, -0x7948($a3)
    ctx->pc = 0x112664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294936248)));
    // 0x112668: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x112668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11266c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11266Cu;
    {
        const bool branch_taken_0x11266c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x112670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11266Cu;
            // 0x112670: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11266c) {
            ctx->pc = 0x112690u;
            goto label_112690;
        }
    }
    ctx->pc = 0x112674u;
    // 0x112674: 0x8e838280  lw          $v1, -0x7D80($s4)
    ctx->pc = 0x112674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935168)));
    // 0x112678: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x112678u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x11267c: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x11267cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x112680: 0x31023  negu        $v0, $v1
    ctx->pc = 0x112680u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x112684: 0xace386b8  sw          $v1, -0x7948($a3)
    ctx->pc = 0x112684u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294936248), GPR_U32(ctx, 3));
    // 0x112688: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x112688u;
    {
        const bool branch_taken_0x112688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11268Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112688u;
            // 0x11268c: 0xae828280  sw          $v0, -0x7D80($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294935168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112688) {
            ctx->pc = 0x1126D0u;
            goto label_1126d0;
        }
    }
    ctx->pc = 0x112690u;
label_112690:
    // 0x112690: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x112690u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x112694: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x112694u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x112698: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x112698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_11269c:
    // 0x11269c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x11269cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1126a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1126A0u;
    {
        const bool branch_taken_0x1126a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1126A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1126A0u;
            // 0x1126a4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126a0) {
            ctx->pc = 0x1126D0u;
            goto label_1126d0;
        }
    }
    ctx->pc = 0x1126A8u;
    // 0x1126a8: 0x24e386b8  addiu       $v1, $a3, -0x7948
    ctx->pc = 0x1126a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936248));
    // 0x1126ac: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1126acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1126b0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1126b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1126b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1126b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1126b8: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1126B8u;
    {
        const bool branch_taken_0x1126b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1126BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1126B8u;
            // 0x1126bc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126b8) {
            ctx->pc = 0x11269Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11269c;
        }
    }
    ctx->pc = 0x1126C0u;
    // 0x1126c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1126c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1126c4: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1126c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1126c8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1126c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1126cc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1126ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1126d0:
    // 0x1126d0: 0xc043320  jal         func_10CC80
    ctx->pc = 0x1126D0u;
    SET_GPR_U32(ctx, 31, 0x1126D8u);
    ctx->pc = 0x1126D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1126D0u;
            // 0x1126d4: 0x8ea4874c  lw          $a0, -0x78B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1126D8u; }
        if (ctx->pc != 0x1126D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1126D8u; }
        if (ctx->pc != 0x1126D8u) { return; }
    }
    ctx->pc = 0x1126D8u;
label_1126d8:
    // 0x1126d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1126D8u;
    {
        const bool branch_taken_0x1126d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1126DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1126D8u;
            // 0x1126dc: 0x26108ec0  addiu       $s0, $s0, -0x7140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126d8) {
            ctx->pc = 0x1126F0u;
            goto label_1126f0;
        }
    }
    ctx->pc = 0x1126E0u;
label_1126e0:
    // 0x1126e0: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1126e0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1126e4: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1126e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1126e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1126e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1126ec: 0x26108ec0  addiu       $s0, $s0, -0x7140
    ctx->pc = 0x1126ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938304));
label_1126f0:
    // 0x1126f0: 0x26c49980  addiu       $a0, $s6, -0x6680
    ctx->pc = 0x1126f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941056));
    // 0x1126f4: 0x26878280  addiu       $a3, $s4, -0x7D80
    ctx->pc = 0x1126f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294935168));
    // 0x1126f8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1126f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1126fc: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x1126fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x112700: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x112700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x112704: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112708: 0x2408001c  addiu       $t0, $zero, 0x1C
    ctx->pc = 0x112708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11270c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11270cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112710: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x112710u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x112714: 0xc044576  jal         func_1115D8
    ctx->pc = 0x112714u;
    SET_GPR_U32(ctx, 31, 0x11271Cu);
    ctx->pc = 0x112718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112714u;
            // 0x112718: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (runtime->hasFunction(0x1115D8u)) {
        auto targetFn = runtime->lookupFunction(0x1115D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11271Cu; }
        if (ctx->pc != 0x11271Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001115D8_0x1115d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11271Cu; }
        if (ctx->pc != 0x11271Cu) { return; }
    }
    ctx->pc = 0x11271Cu;
label_11271c:
    // 0x11271c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11271Cu;
    {
        const bool branch_taken_0x11271c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x112720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11271Cu;
            // 0x112720: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11271c) {
            ctx->pc = 0x11273Cu;
            goto label_11273c;
        }
    }
    ctx->pc = 0x112724u;
    // 0x112724: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x112724u;
    SET_GPR_U32(ctx, 31, 0x11272Cu);
    ctx->pc = 0x112728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112724u;
            // 0x112728: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11272Cu; }
        if (ctx->pc != 0x11272Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11272Cu; }
        if (ctx->pc != 0x11272Cu) { return; }
    }
    ctx->pc = 0x11272Cu;
label_11272c:
    // 0x11272c: 0xc0446de  jal         func_111B78
    ctx->pc = 0x11272Cu;
    SET_GPR_U32(ctx, 31, 0x112734u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112734u; }
        if (ctx->pc != 0x112734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112734u; }
        if (ctx->pc != 0x112734u) { return; }
    }
    ctx->pc = 0x112734u;
label_112734:
    // 0x112734: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x112734u;
    {
        const bool branch_taken_0x112734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112734u;
            // 0x112738: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112734) {
            ctx->pc = 0x11278Cu;
            goto label_11278c;
        }
    }
    ctx->pc = 0x11273Cu;
label_11273c:
    // 0x11273c: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x11273cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x112740: 0xc0446de  jal         func_111B78
    ctx->pc = 0x112740u;
    SET_GPR_U32(ctx, 31, 0x112748u);
    ctx->pc = 0x112744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112740u;
            // 0x112744: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112748u; }
        if (ctx->pc != 0x112748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112748u; }
        if (ctx->pc != 0x112748u) { return; }
    }
    ctx->pc = 0x112748u;
label_112748:
    // 0x112748: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112748u;
    {
        const bool branch_taken_0x112748 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x112748) {
            ctx->pc = 0x112760u;
            goto label_112760;
        }
    }
    ctx->pc = 0x112750u;
    // 0x112750: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x112750u;
    SET_GPR_U32(ctx, 31, 0x112758u);
    ctx->pc = 0x112754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112750u;
            // 0x112754: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112758u; }
        if (ctx->pc != 0x112758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112758u; }
        if (ctx->pc != 0x112758u) { return; }
    }
    ctx->pc = 0x112758u;
label_112758:
    // 0x112758: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x112758u;
    {
        const bool branch_taken_0x112758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11275Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112758u;
            // 0x11275c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112758) {
            ctx->pc = 0x11278Cu;
            goto label_11278c;
        }
    }
    ctx->pc = 0x112760u;
label_112760:
    // 0x112760: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x112760u;
    {
        const bool branch_taken_0x112760 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x112760) {
            ctx->pc = 0x112778u;
            goto label_112778;
        }
    }
    ctx->pc = 0x112768u;
    // 0x112768: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x112768u;
    SET_GPR_U32(ctx, 31, 0x112770u);
    ctx->pc = 0x11276Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112768u;
            // 0x11276c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112770u; }
        if (ctx->pc != 0x112770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112770u; }
        if (ctx->pc != 0x112770u) { return; }
    }
    ctx->pc = 0x112770u;
label_112770:
    // 0x112770: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x112770u;
    {
        const bool branch_taken_0x112770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112770u;
            // 0x112774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112770) {
            ctx->pc = 0x11278Cu;
            goto label_11278c;
        }
    }
    ctx->pc = 0x112778u;
label_112778:
    // 0x112778: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x112778u;
    SET_GPR_U32(ctx, 31, 0x112780u);
    ctx->pc = 0x11277Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112778u;
            // 0x11277c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112780u; }
        if (ctx->pc != 0x112780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112780u; }
        if (ctx->pc != 0x112780u) { return; }
    }
    ctx->pc = 0x112780u;
label_112780:
    // 0x112780: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x112780u;
    SET_GPR_U32(ctx, 31, 0x112788u);
    ctx->pc = 0x112784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112780u;
            // 0x112784: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112788u; }
        if (ctx->pc != 0x112788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112788u; }
        if (ctx->pc != 0x112788u) { return; }
    }
    ctx->pc = 0x112788u;
label_112788:
    // 0x112788: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x112788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11278c:
    // 0x11278c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x11278cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112790: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x112790u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112794: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x112794u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x112798: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x112798u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11279c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x11279cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1127a0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1127a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1127a4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1127a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1127a8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1127a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1127ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1127ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1127B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1127ACu;
            // 0x1127b0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1127B4u;
    // 0x1127b4: 0x0  nop
    ctx->pc = 0x1127b4u;
    // NOP
    ctx->pc = 0x1127b8u;
}
