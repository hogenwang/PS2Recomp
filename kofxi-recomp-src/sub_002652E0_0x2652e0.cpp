#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002652E0
// Address: 0x2652e0 - 0x265500
void sub_002652E0_0x2652e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002652E0_0x2652e0");
#endif

    switch (ctx->pc) {
        case 0x265350u: goto label_265350;
        case 0x265390u: goto label_265390;
        case 0x2653d8u: goto label_2653d8;
        case 0x2653fcu: goto label_2653fc;
        case 0x265490u: goto label_265490;
        case 0x2654bcu: goto label_2654bc;
        default: break;
    }

    ctx->pc = 0x2652e0u;

    // 0x2652e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2652e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2652e4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2652e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2652e8: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x2652e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x2652ec: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x2652ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x2652f0: 0xa6f021  addu        $fp, $a1, $a2
    ctx->pc = 0x2652f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2652f4: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2652f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2652f8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2652f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2652fc: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2652fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x265300: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x265300u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265304: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x265304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x265308: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x265308u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26530c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x26530cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x265310: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x265310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265314: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x265314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x265318: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x265318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x26531c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x26531cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x265320: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x265320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x265324: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x265324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x265328: 0x12e00014  beqz        $s7, . + 4 + (0x14 << 2)
    ctx->pc = 0x265328u;
    {
        const bool branch_taken_0x265328 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x26532Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265328u;
            // 0x26532c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265328) {
            ctx->pc = 0x26537Cu;
            goto label_26537c;
        }
    }
    ctx->pc = 0x265330u;
    // 0x265330: 0x8ef60000  lw          $s6, 0x0($s7)
    ctx->pc = 0x265330u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x265334: 0x12c00012  beqz        $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x265334u;
    {
        const bool branch_taken_0x265334 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x265338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265334u;
            // 0x265338: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265334) {
            ctx->pc = 0x265380u;
            goto label_265380;
        }
    }
    ctx->pc = 0x26533Cu;
    // 0x26533c: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x26533cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265340: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x265340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x265344: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x265344u;
    {
        const bool branch_taken_0x265344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265344u;
            // 0x265348: 0x92630000  lbu         $v1, 0x0($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265344) {
            ctx->pc = 0x265374u;
            goto label_265374;
        }
    }
    ctx->pc = 0x26534Cu;
    // 0x26534c: 0x0  nop
    ctx->pc = 0x26534cu;
    // NOP
label_265350:
    // 0x265350: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x265350u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x265354: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x265354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x265358: 0x0  nop
    ctx->pc = 0x265358u;
    // NOP
    // 0x26535c: 0x0  nop
    ctx->pc = 0x26535cu;
    // NOP
    // 0x265360: 0x0  nop
    ctx->pc = 0x265360u;
    // NOP
    // 0x265364: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x265364u;
    {
        const bool branch_taken_0x265364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265364) {
            ctx->pc = 0x265350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_265350;
        }
    }
    ctx->pc = 0x26536Cu;
    // 0x26536c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26536Cu;
    {
        const bool branch_taken_0x26536c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26536Cu;
            // 0x265370: 0xafb50008  sw          $s5, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26536c) {
            ctx->pc = 0x265384u;
            goto label_265384;
        }
    }
    ctx->pc = 0x265374u;
label_265374:
    // 0x265374: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x265374u;
    {
        const bool branch_taken_0x265374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265374u;
            // 0x265378: 0xafb50008  sw          $s5, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265374) {
            ctx->pc = 0x265384u;
            goto label_265384;
        }
    }
    ctx->pc = 0x26537Cu;
label_26537c:
    // 0x26537c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x26537cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_265380:
    // 0x265380: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x265380u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_265384:
    // 0x265384: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x265384u;
    {
        const bool branch_taken_0x265384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265384u;
            // 0x265388: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265384) {
            ctx->pc = 0x265394u;
            goto label_265394;
        }
    }
    ctx->pc = 0x26538Cu;
    // 0x26538c: 0x0  nop
    ctx->pc = 0x26538cu;
    // NOP
label_265390:
    // 0x265390: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x265390u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_265394:
    // 0x265394: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x265394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265398: 0x322200c0  andi        $v0, $s1, 0xC0
    ctx->pc = 0x265398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)192);
    // 0x26539c: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x26539Cu;
    {
        const bool branch_taken_0x26539c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26539c) {
            ctx->pc = 0x2654B4u;
            goto label_2654b4;
        }
    }
    ctx->pc = 0x2653A4u;
    // 0x2653a4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2653a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2653a8: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x2653a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2653ac: 0x28a30100  slti        $v1, $a1, 0x100
    ctx->pc = 0x2653acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2653b0: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x2653B0u;
    {
        const bool branch_taken_0x2653b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2653b0) {
            ctx->pc = 0x2654B4u;
            goto label_2654b4;
        }
    }
    ctx->pc = 0x2653B8u;
    // 0x2653b8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2653b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2653bc: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2653BCu;
    {
        const bool branch_taken_0x2653bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2653C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2653BCu;
            // 0x2653c0: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2653bc) {
            ctx->pc = 0x265390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_265390;
        }
    }
    ctx->pc = 0x2653C4u;
    // 0x2653c4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2653c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2653c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2653c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2653cc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2653ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2653d0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2653d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2653d4: 0x0  nop
    ctx->pc = 0x2653d4u;
    // NOP
label_2653d8:
    // 0x2653d8: 0x92710000  lbu         $s1, 0x0($s3)
    ctx->pc = 0x2653d8u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2653dc: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2653DCu;
    {
        const bool branch_taken_0x2653dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2653E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2653DCu;
            // 0x2653e0: 0x322200c0  andi        $v0, $s1, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2653dc) {
            ctx->pc = 0x265468u;
            goto label_265468;
        }
    }
    ctx->pc = 0x2653E4u;
    // 0x2653e4: 0x12c00020  beqz        $s6, . + 4 + (0x20 << 2)
    ctx->pc = 0x2653E4u;
    {
        const bool branch_taken_0x2653e4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2653E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2653E4u;
            // 0x2653e8: 0x8fa70008  lw          $a3, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2653e4) {
            ctx->pc = 0x265468u;
            goto label_265468;
        }
    }
    ctx->pc = 0x2653ECu;
    // 0x2653ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2653ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2653f0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2653f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2653f4: 0xc0995da  jal         func_265768
    ctx->pc = 0x2653F4u;
    SET_GPR_U32(ctx, 31, 0x2653FCu);
    ctx->pc = 0x2653F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2653F4u;
            // 0x2653f8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x265768u;
    if (runtime->hasFunction(0x265768u)) {
        auto targetFn = runtime->lookupFunction(0x265768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2653FCu; }
        if (ctx->pc != 0x2653FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00265768_0x265768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2653FCu; }
        if (ctx->pc != 0x2653FCu) { return; }
    }
    ctx->pc = 0x2653FCu;
label_2653fc:
    // 0x2653fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2653fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265400: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x265400u;
    {
        const bool branch_taken_0x265400 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x265404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265400u;
            // 0x265404: 0x26830001  addiu       $v1, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265400) {
            ctx->pc = 0x265434u;
            goto label_265434;
        }
    }
    ctx->pc = 0x265408u;
    // 0x265408: 0x7e102b  sltu        $v0, $v1, $fp
    ctx->pc = 0x265408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x26540c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x26540Cu;
    {
        const bool branch_taken_0x26540c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26540c) {
            ctx->pc = 0x2654B4u;
            goto label_2654b4;
        }
    }
    ctx->pc = 0x265414u;
    // 0x265414: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x265414u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x265418: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x265418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x26541c: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x26541cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x265420: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x265420u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x265424: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x265424u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x265428: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x265428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26542c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x26542Cu;
    {
        const bool branch_taken_0x26542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26542Cu;
            // 0x265430: 0x2831023  subu        $v0, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26542c) {
            ctx->pc = 0x2654D0u;
            goto label_2654d0;
        }
    }
    ctx->pc = 0x265434u;
label_265434:
    // 0x265434: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x265434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x265438: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x265438u;
    {
        const bool branch_taken_0x265438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26543Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265438u;
            // 0x26543c: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265438) {
            ctx->pc = 0x265464u;
            goto label_265464;
        }
    }
    ctx->pc = 0x265440u;
    // 0x265440: 0x2a3102b  sltu        $v0, $s5, $v1
    ctx->pc = 0x265440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x265444: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x265444u;
    {
        const bool branch_taken_0x265444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265444u;
            // 0x265448: 0x2961023  subu        $v0, $s4, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265444) {
            ctx->pc = 0x265464u;
            goto label_265464;
        }
    }
    ctx->pc = 0x26544Cu;
    // 0x26544c: 0x28424000  slti        $v0, $v0, 0x4000
    ctx->pc = 0x26544cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x265450: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x265450u;
    {
        const bool branch_taken_0x265450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265450u;
            // 0x265454: 0x322200c0  andi        $v0, $s1, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265450) {
            ctx->pc = 0x265468u;
            goto label_265468;
        }
    }
    ctx->pc = 0x265458u;
    // 0x265458: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x265458u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    // 0x26545c: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x26545cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x265460: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x265460u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_265464:
    // 0x265464: 0x322200c0  andi        $v0, $s1, 0xC0
    ctx->pc = 0x265464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)192);
label_265468:
    // 0x265468: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x265468u;
    {
        const bool branch_taken_0x265468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26546Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265468u;
            // 0x26546c: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265468) {
            ctx->pc = 0x2654B4u;
            goto label_2654b4;
        }
    }
    ctx->pc = 0x265470u;
    // 0x265470: 0x2909021  addu        $s2, $s4, $s0
    ctx->pc = 0x265470u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x265474: 0x25e102b  sltu        $v0, $s2, $fp
    ctx->pc = 0x265474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x265478: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x265478u;
    {
        const bool branch_taken_0x265478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26547Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265478u;
            // 0x26547c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265478) {
            ctx->pc = 0x2654B4u;
            goto label_2654b4;
        }
    }
    ctx->pc = 0x265480u;
    // 0x265480: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x265480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265484: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x265484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265488: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x265488u;
    SET_GPR_U32(ctx, 31, 0x265490u);
    ctx->pc = 0x26548Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265488u;
            // 0x26548c: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265490u; }
        if (ctx->pc != 0x265490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265490u; }
        if (ctx->pc != 0x265490u) { return; }
    }
    ctx->pc = 0x265490u;
label_265490:
    // 0x265490: 0x1620ffd1  bnez        $s1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x265490u;
    {
        const bool branch_taken_0x265490 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x265494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265490u;
            // 0x265494: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265490) {
            ctx->pc = 0x2653D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2653d8;
        }
    }
    ctx->pc = 0x265498u;
    // 0x265498: 0x3d2102b  sltu        $v0, $fp, $s2
    ctx->pc = 0x265498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x26549c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26549Cu;
    {
        const bool branch_taken_0x26549c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2654A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26549Cu;
            // 0x2654a0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26549c) {
            ctx->pc = 0x2654CCu;
            goto label_2654cc;
        }
    }
    ctx->pc = 0x2654A4u;
    // 0x2654a4: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x2654A4u;
    {
        const bool branch_taken_0x2654a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2654a4) {
            ctx->pc = 0x2654B4u;
            goto label_2654b4;
        }
    }
    ctx->pc = 0x2654ACu;
    // 0x2654ac: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2654acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2654b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2654b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2654b4:
    // 0x2654b4: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2654B4u;
    SET_GPR_U32(ctx, 31, 0x2654BCu);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2654BCu; }
        if (ctx->pc != 0x2654BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2654BCu; }
        if (ctx->pc != 0x2654BCu) { return; }
    }
    ctx->pc = 0x2654BCu;
label_2654bc:
    // 0x2654bc: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x2654bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x2654c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2654c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2654c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2654C4u;
    {
        const bool branch_taken_0x2654c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2654C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2654C4u;
            // 0x2654c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654c4) {
            ctx->pc = 0x2654D0u;
            goto label_2654d0;
        }
    }
    ctx->pc = 0x2654CCu;
label_2654cc:
    // 0x2654cc: 0x2431023  subu        $v0, $s2, $v1
    ctx->pc = 0x2654ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_2654d0:
    // 0x2654d0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2654d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2654d4: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2654d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2654d8: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x2654d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2654dc: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2654dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2654e0: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2654e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2654e4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2654e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2654e8: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2654e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2654ec: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2654ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2654f0: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2654f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2654f4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2654f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2654f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2654F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2654FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2654F8u;
            // 0x2654fc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265500u;
    ctx->pc = 0x265500u;
}
