#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029A1C8
// Address: 0x29a1c8 - 0x29a450
void sub_0029A1C8_0x29a1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A1C8_0x29a1c8");
#endif

    switch (ctx->pc) {
        case 0x29a210u: goto label_29a210;
        case 0x29a22cu: goto label_29a22c;
        case 0x29a234u: goto label_29a234;
        case 0x29a23cu: goto label_29a23c;
        case 0x29a244u: goto label_29a244;
        case 0x29a278u: goto label_29a278;
        case 0x29a2f8u: goto label_29a2f8;
        case 0x29a344u: goto label_29a344;
        case 0x29a370u: goto label_29a370;
        case 0x29a3f0u: goto label_29a3f0;
        case 0x29a430u: goto label_29a430;
        default: break;
    }

    ctx->pc = 0x29a1c8u;

    // 0x29a1c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29a1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29a1cc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29a1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29a1d0: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x29a1d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x29a1d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a1d8: 0x8e635308  lw          $v1, 0x5308($s3)
    ctx->pc = 0x29a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21256)));
    // 0x29a1dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a1e0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29a1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29a1e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29a1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29a1e8: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x29A1E8u;
    {
        const bool branch_taken_0x29a1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A1E8u;
            // 0x29a1ec: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a1e8) {
            ctx->pc = 0x29A25Cu;
            goto label_29a25c;
        }
    }
    ctx->pc = 0x29A1F0u;
    // 0x29a1f0: 0xdc710028  ld          $s1, 0x28($v1)
    ctx->pc = 0x29a1f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x29a1f4: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x29a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x29a1f8: 0xac5048a8  sw          $s0, 0x48A8($v0)
    ctx->pc = 0x29a1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18600), GPR_U32(ctx, 16));
    // 0x29a1fc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x29a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x29a200: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x29a200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a204: 0x24a5a198  addiu       $a1, $a1, -0x5E68
    ctx->pc = 0x29a204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943128));
    // 0x29a208: 0xc0a625c  jal         func_298970
    ctx->pc = 0x29A208u;
    SET_GPR_U32(ctx, 31, 0x29A210u);
    ctx->pc = 0x29A20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A208u;
            // 0x29a20c: 0xfc600028  sd          $zero, 0x28($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298970u;
    if (runtime->hasFunction(0x298970u)) {
        auto targetFn = runtime->lookupFunction(0x298970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A210u; }
        if (ctx->pc != 0x29A210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298970_0x298970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A210u; }
        if (ctx->pc != 0x29A210u) { return; }
    }
    ctx->pc = 0x29A210u;
label_29a210:
    // 0x29a210: 0x6010011  bgez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29A210u;
    {
        const bool branch_taken_0x29a210 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x29A214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A210u;
            // 0x29a214: 0x8e625308  lw          $v0, 0x5308($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a210) {
            ctx->pc = 0x29A258u;
            goto label_29a258;
        }
    }
    ctx->pc = 0x29A218u;
    // 0x29a218: 0x8e645308  lw          $a0, 0x5308($s3)
    ctx->pc = 0x29a218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21256)));
    // 0x29a21c: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x29a21cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x29a220: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x29a220u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x29a224: 0xc0a61ba  jal         func_2986E8
    ctx->pc = 0x29A224u;
    SET_GPR_U32(ctx, 31, 0x29A22Cu);
    ctx->pc = 0x29A228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A224u;
            // 0x29a228: 0x3c12003b  lui         $s2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2986E8u;
    if (runtime->hasFunction(0x2986E8u)) {
        auto targetFn = runtime->lookupFunction(0x2986E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A22Cu; }
        if (ctx->pc != 0x29A22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002986E8_0x2986e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A22Cu; }
        if (ctx->pc != 0x29A22Cu) { return; }
    }
    ctx->pc = 0x29A22Cu;
label_29a22c:
    // 0x29a22c: 0xc0af176  jal         func_2BC5D8
    ctx->pc = 0x29A22Cu;
    SET_GPR_U32(ctx, 31, 0x29A234u);
    ctx->pc = 0x29A230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A22Cu;
            // 0x29a230: 0x8e045314  lw          $a0, 0x5314($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 21268)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D8u;
    if (runtime->hasFunction(0x2BC5D8u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A234u; }
        if (ctx->pc != 0x29A234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5D8_0x2bc5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A234u; }
        if (ctx->pc != 0x29A234u) { return; }
    }
    ctx->pc = 0x29A234u;
label_29a234:
    // 0x29a234: 0xc0af176  jal         func_2BC5D8
    ctx->pc = 0x29A234u;
    SET_GPR_U32(ctx, 31, 0x29A23Cu);
    ctx->pc = 0x29A238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A234u;
            // 0x29a238: 0x8e245310  lw          $a0, 0x5310($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 21264)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D8u;
    if (runtime->hasFunction(0x2BC5D8u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A23Cu; }
        if (ctx->pc != 0x29A23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5D8_0x2bc5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A23Cu; }
        if (ctx->pc != 0x29A23Cu) { return; }
    }
    ctx->pc = 0x29A23Cu;
label_29a23c:
    // 0x29a23c: 0xc0af176  jal         func_2BC5D8
    ctx->pc = 0x29A23Cu;
    SET_GPR_U32(ctx, 31, 0x29A244u);
    ctx->pc = 0x29A240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A23Cu;
            // 0x29a240: 0x8e445318  lw          $a0, 0x5318($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D8u;
    if (runtime->hasFunction(0x2BC5D8u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A244u; }
        if (ctx->pc != 0x29A244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5D8_0x2bc5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A244u; }
        if (ctx->pc != 0x29A244u) { return; }
    }
    ctx->pc = 0x29A244u;
label_29a244:
    // 0x29a244: 0xae605308  sw          $zero, 0x5308($s3)
    ctx->pc = 0x29a244u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 21256), GPR_U32(ctx, 0));
    // 0x29a248: 0xae005314  sw          $zero, 0x5314($s0)
    ctx->pc = 0x29a248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 21268), GPR_U32(ctx, 0));
    // 0x29a24c: 0xae205310  sw          $zero, 0x5310($s1)
    ctx->pc = 0x29a24cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 21264), GPR_U32(ctx, 0));
    // 0x29a250: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29A250u;
    {
        const bool branch_taken_0x29a250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A250u;
            // 0x29a254: 0xae405318  sw          $zero, 0x5318($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 21272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a250) {
            ctx->pc = 0x29A25Cu;
            goto label_29a25c;
        }
    }
    ctx->pc = 0x29A258u;
label_29a258:
    // 0x29a258: 0xfc510028  sd          $s1, 0x28($v0)
    ctx->pc = 0x29a258u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 17));
label_29a25c:
    // 0x29a25c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29a25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a260: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29a260u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a264: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29a264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a268: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29a268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a26c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a26cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a270: 0x3e00008  jr          $ra
    ctx->pc = 0x29A270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A270u;
            // 0x29a274: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A278u;
label_29a278:
    // 0x29a278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a27c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x29a27cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a28c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a290: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x29a290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a294: 0x10c20026  beq         $a2, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x29A294u;
    {
        const bool branch_taken_0x29a294 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x29A298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A294u;
            // 0x29a298: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a294) {
            ctx->pc = 0x29A330u;
            goto label_29a330;
        }
    }
    ctx->pc = 0x29A29Cu;
    // 0x29a29c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x29a29cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29a2a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A2A0u;
    {
        const bool branch_taken_0x29a2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A2A0u;
            // 0x29a2a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a2a0) {
            ctx->pc = 0x29A2B8u;
            goto label_29a2b8;
        }
    }
    ctx->pc = 0x29A2A8u;
    // 0x29a2a8: 0x50c00009  beql        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x29A2A8u;
    {
        const bool branch_taken_0x29a2a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a2a8) {
            ctx->pc = 0x29A2ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29A2A8u;
            // 0x29a2ac: 0x8c89000c  lw          $t1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29A2D0u;
            goto label_29a2d0;
        }
    }
    ctx->pc = 0x29A2B0u;
    // 0x29a2b0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x29A2B0u;
    {
        const bool branch_taken_0x29a2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a2b0) {
            ctx->pc = 0x29A34Cu;
            goto label_29a34c;
        }
    }
    ctx->pc = 0x29A2B8u;
label_29a2b8:
    // 0x29a2b8: 0x10c2001f  beq         $a2, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x29A2B8u;
    {
        const bool branch_taken_0x29a2b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x29A2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A2B8u;
            // 0x29a2bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a2b8) {
            ctx->pc = 0x29A338u;
            goto label_29a338;
        }
    }
    ctx->pc = 0x29A2C0u;
    // 0x29a2c0: 0x50c20022  beql        $a2, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x29A2C0u;
    {
        const bool branch_taken_0x29a2c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x29a2c0) {
            ctx->pc = 0x29A2C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29A2C0u;
            // 0x29a2c4: 0x8c8a0008  lw          $t2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29A34Cu;
            goto label_29a34c;
        }
    }
    ctx->pc = 0x29A2C8u;
    // 0x29a2c8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x29A2C8u;
    {
        const bool branch_taken_0x29a2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a2c8) {
            ctx->pc = 0x29A34Cu;
            goto label_29a34c;
        }
    }
    ctx->pc = 0x29A2D0u;
label_29a2d0:
    // 0x29a2d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29a2d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a2d4: 0x8c8b0010  lw          $t3, 0x10($a0)
    ctx->pc = 0x29a2d4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x29a2d8: 0x91500  sll         $v0, $t1, 20
    ctx->pc = 0x29a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 20));
    // 0x29a2dc: 0xc9182a  slt         $v1, $a2, $t1
    ctx->pc = 0x29a2dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x29a2e0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x29A2E0u;
    {
        const bool branch_taken_0x29a2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A2E0u;
            // 0x29a2e4: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a2e0) {
            ctx->pc = 0x29A34Cu;
            goto label_29a34c;
        }
    }
    ctx->pc = 0x29A2E8u;
    // 0x29a2e8: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x29a2e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x29a2ec: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x29a2ecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a2f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29a2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a2f4: 0x0  nop
    ctx->pc = 0x29a2f4u;
    // NOP
label_29a2f8:
    // 0x29a2f8: 0xa8001a  div         $zero, $a1, $t0
    ctx->pc = 0x29a2f8u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29a2fc: 0x1671021  addu        $v0, $t3, $a3
    ctx->pc = 0x29a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x29a300: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x29a300u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a304: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x29a304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x29a308: 0x510c0001  beql        $t0, $t4, . + 4 + (0x1 << 2)
    ctx->pc = 0x29A308u;
    {
        const bool branch_taken_0x29a308 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 12));
        if (branch_taken_0x29a308) {
            ctx->pc = 0x29A30Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29A308u;
            // 0x29a30c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29A310u;
            goto label_29a310;
        }
    }
    ctx->pc = 0x29A310u;
label_29a310:
    // 0x29a310: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x29a310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x29a314: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x29a314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x29a318: 0x2010  mfhi        $a0
    ctx->pc = 0x29a318u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x29a31c: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x29a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x29a320: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x29A320u;
    {
        const bool branch_taken_0x29a320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A320u;
            // 0x29a324: 0x6a5026  xor         $t2, $v1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a320) {
            ctx->pc = 0x29A2F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29a2f8;
        }
    }
    ctx->pc = 0x29A328u;
    // 0x29a328: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29A328u;
    {
        const bool branch_taken_0x29a328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a328) {
            ctx->pc = 0x29A34Cu;
            goto label_29a34c;
        }
    }
    ctx->pc = 0x29A330u;
label_29a330:
    // 0x29a330: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29A330u;
    {
        const bool branch_taken_0x29a330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A330u;
            // 0x29a334: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a330) {
            ctx->pc = 0x29A33Cu;
            goto label_29a33c;
        }
    }
    ctx->pc = 0x29A338u;
label_29a338:
    // 0x29a338: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x29a338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_29a33c:
    // 0x29a33c: 0xc0a636e  jal         func_298DB8
    ctx->pc = 0x29A33Cu;
    SET_GPR_U32(ctx, 31, 0x29A344u);
    ctx->pc = 0x298DB8u;
    if (runtime->hasFunction(0x298DB8u)) {
        auto targetFn = runtime->lookupFunction(0x298DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A344u; }
        if (ctx->pc != 0x29A344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298DB8_0x298db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A344u; }
        if (ctx->pc != 0x29A344u) { return; }
    }
    ctx->pc = 0x29A344u;
label_29a344:
    // 0x29a344: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x29a344u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a348: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x29a348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29a34c:
    // 0x29a34c: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x29a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x29a350: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29a350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29a354: 0x61f80  sll         $v1, $a2, 30
    ctx->pc = 0x29a354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 30));
    // 0x29a358: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x29a358u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x29a35c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a364: 0x6a1025  or          $v0, $v1, $t2
    ctx->pc = 0x29a364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x29a368: 0x3e00008  jr          $ra
    ctx->pc = 0x29A368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A368u;
            // 0x29a36c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A370u;
label_29a370:
    // 0x29a370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29a370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29a374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a378: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29a378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29a37c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x29a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29a380: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x29a380u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a384: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x29A384u;
    {
        const bool branch_taken_0x29a384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A384u;
            // 0x29a388: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a384) {
            ctx->pc = 0x29A444u;
            goto label_29a444;
        }
    }
    ctx->pc = 0x29A38Cu;
    // 0x29a38c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x29a38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29a390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a394: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x29A394u;
    {
        const bool branch_taken_0x29a394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29A398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A394u;
            // 0x29a398: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a394) {
            ctx->pc = 0x29A3F8u;
            goto label_29a3f8;
        }
    }
    ctx->pc = 0x29A39Cu;
    // 0x29a39c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x29a39cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29a3a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A3A0u;
    {
        const bool branch_taken_0x29a3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A3A0u;
            // 0x29a3a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a3a0) {
            ctx->pc = 0x29A3B8u;
            goto label_29a3b8;
        }
    }
    ctx->pc = 0x29A3A8u;
    // 0x29a3a8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29A3A8u;
    {
        const bool branch_taken_0x29a3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A3A8u;
            // 0x29a3ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a3a8) {
            ctx->pc = 0x29A3D0u;
            goto label_29a3d0;
        }
    }
    ctx->pc = 0x29A3B0u;
    // 0x29a3b0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x29A3B0u;
    {
        const bool branch_taken_0x29a3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a3b0) {
            ctx->pc = 0x29A440u;
            goto label_29a440;
        }
    }
    ctx->pc = 0x29A3B8u;
label_29a3b8:
    // 0x29a3b8: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x29A3B8u;
    {
        const bool branch_taken_0x29a3b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29A3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A3B8u;
            // 0x29a3bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a3b8) {
            ctx->pc = 0x29A40Cu;
            goto label_29a40c;
        }
    }
    ctx->pc = 0x29A3C0u;
    // 0x29a3c0: 0x5062001d  beql        $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x29A3C0u;
    {
        const bool branch_taken_0x29a3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29a3c0) {
            ctx->pc = 0x29A3C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29A3C0u;
            // 0x29a3c4: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29A438u;
            goto label_29a438;
        }
    }
    ctx->pc = 0x29A3C8u;
    // 0x29a3c8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x29A3C8u;
    {
        const bool branch_taken_0x29a3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A3C8u;
            // 0x29a3cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a3c8) {
            ctx->pc = 0x29A440u;
            goto label_29a440;
        }
    }
    ctx->pc = 0x29A3D0u;
label_29a3d0:
    // 0x29a3d0: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x29a3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x29a3d4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x29a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x29a3d8: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x29a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29a3dc: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x29A3DCu;
    {
        const bool branch_taken_0x29a3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A3DCu;
            // 0x29a3e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a3dc) {
            ctx->pc = 0x29A444u;
            goto label_29a444;
        }
    }
    ctx->pc = 0x29A3E4u;
    // 0x29a3e4: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x29a3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x29a3e8: 0xc049c22  jal         func_127088
    ctx->pc = 0x29A3E8u;
    SET_GPR_U32(ctx, 31, 0x29A3F0u);
    ctx->pc = 0x29A3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A3E8u;
            // 0x29a3ec: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A3F0u; }
        if (ctx->pc != 0x29A3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A3F0u; }
        if (ctx->pc != 0x29A3F0u) { return; }
    }
    ctx->pc = 0x29A3F0u;
label_29a3f0:
    // 0x29a3f0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x29A3F0u;
    {
        const bool branch_taken_0x29a3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A3F0u;
            // 0x29a3f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a3f0) {
            ctx->pc = 0x29A444u;
            goto label_29a444;
        }
    }
    ctx->pc = 0x29A3F8u;
label_29a3f8:
    // 0x29a3f8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x29a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29a3fc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29A3FCu;
    {
        const bool branch_taken_0x29a3fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A3FCu;
            // 0x29a400: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a3fc) {
            ctx->pc = 0x29A440u;
            goto label_29a440;
        }
    }
    ctx->pc = 0x29A404u;
    // 0x29a404: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29A404u;
    {
        const bool branch_taken_0x29a404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A404u;
            // 0x29a408: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a404) {
            ctx->pc = 0x29A420u;
            goto label_29a420;
        }
    }
    ctx->pc = 0x29A40Cu;
label_29a40c:
    // 0x29a40c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x29a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29a410: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A410u;
    {
        const bool branch_taken_0x29a410 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a410) {
            ctx->pc = 0x29A414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29A410u;
            // 0x29a414: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29A420u;
            goto label_29a420;
        }
    }
    ctx->pc = 0x29A418u;
    // 0x29a418: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29A418u;
    {
        const bool branch_taken_0x29a418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A418u;
            // 0x29a41c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a418) {
            ctx->pc = 0x29A440u;
            goto label_29a440;
        }
    }
    ctx->pc = 0x29A420u;
label_29a420:
    // 0x29a420: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29A420u;
    {
        const bool branch_taken_0x29a420 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A420u;
            // 0x29a424: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a420) {
            ctx->pc = 0x29A440u;
            goto label_29a440;
        }
    }
    ctx->pc = 0x29A428u;
    // 0x29a428: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x29A428u;
    SET_GPR_U32(ctx, 31, 0x29A430u);
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A430u; }
        if (ctx->pc != 0x29A430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A430u; }
        if (ctx->pc != 0x29A430u) { return; }
    }
    ctx->pc = 0x29A430u;
label_29a430:
    // 0x29a430: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29A430u;
    {
        const bool branch_taken_0x29a430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A430u;
            // 0x29a434: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a430) {
            ctx->pc = 0x29A444u;
            goto label_29a444;
        }
    }
    ctx->pc = 0x29A438u;
label_29a438:
    // 0x29a438: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x29a438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x29a43c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x29a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29a440:
    // 0x29a440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29a444:
    // 0x29a444: 0x3e00008  jr          $ra
    ctx->pc = 0x29A444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A444u;
            // 0x29a448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A44Cu;
    // 0x29a44c: 0x0  nop
    ctx->pc = 0x29a44cu;
    // NOP
    ctx->pc = 0x29a450u;
}
