#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028B208
// Address: 0x28b208 - 0x28b3b0
void sub_0028B208_0x28b208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B208_0x28b208");
#endif

    switch (ctx->pc) {
        case 0x28b250u: goto label_28b250;
        case 0x28b260u: goto label_28b260;
        case 0x28b270u: goto label_28b270;
        case 0x28b298u: goto label_28b298;
        case 0x28b2a4u: goto label_28b2a4;
        case 0x28b2b4u: goto label_28b2b4;
        case 0x28b2c0u: goto label_28b2c0;
        case 0x28b2d0u: goto label_28b2d0;
        case 0x28b2f8u: goto label_28b2f8;
        case 0x28b308u: goto label_28b308;
        case 0x28b33cu: goto label_28b33c;
        case 0x28b348u: goto label_28b348;
        case 0x28b354u: goto label_28b354;
        case 0x28b364u: goto label_28b364;
        case 0x28b378u: goto label_28b378;
        case 0x28b384u: goto label_28b384;
        default: break;
    }

    ctx->pc = 0x28b208u;

    // 0x28b208: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x28b208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28b20c: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x28b20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x28b210: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x28b210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x28b214: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x28b214u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b218: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x28b218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x28b21c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x28b21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x28b220: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28b220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b224: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x28b224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x28b228: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x28b228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x28b22c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x28b22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x28b230: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28b230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28b234: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B234u;
    {
        const bool branch_taken_0x28b234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B234u;
            // 0x28b238: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b234) {
            ctx->pc = 0x28B244u;
            goto label_28b244;
        }
    }
    ctx->pc = 0x28B23Cu;
    // 0x28b23c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x28B23Cu;
    {
        const bool branch_taken_0x28b23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B23Cu;
            // 0x28b240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b23c) {
            ctx->pc = 0x28B388u;
            goto label_28b388;
        }
    }
    ctx->pc = 0x28B244u;
label_28b244:
    // 0x28b244: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28b244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b248: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x28B248u;
    SET_GPR_U32(ctx, 31, 0x28B250u);
    ctx->pc = 0x28B24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B248u;
            // 0x28b24c: 0x26540020  addiu       $s4, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (runtime->hasFunction(0x286A20u)) {
        auto targetFn = runtime->lookupFunction(0x286A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B250u; }
        if (ctx->pc != 0x28B250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A20_0x286a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B250u; }
        if (ctx->pc != 0x28B250u) { return; }
    }
    ctx->pc = 0x28B250u;
label_28b250:
    // 0x28b250: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x28b250u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b254: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28b254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b258: 0xc0a1b1c  jal         func_286C70
    ctx->pc = 0x28B258u;
    SET_GPR_U32(ctx, 31, 0x28B260u);
    ctx->pc = 0x28B25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B258u;
            // 0x28b25c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286C70u;
    if (runtime->hasFunction(0x286C70u)) {
        auto targetFn = runtime->lookupFunction(0x286C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B260u; }
        if (ctx->pc != 0x28B260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286C70_0x286c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B260u; }
        if (ctx->pc != 0x28B260u) { return; }
    }
    ctx->pc = 0x28B260u;
label_28b260:
    // 0x28b260: 0x2651000c  addiu       $s1, $s2, 0xC
    ctx->pc = 0x28b260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x28b264: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x28b264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x28b268: 0xc0a1a02  jal         func_286808
    ctx->pc = 0x28B268u;
    SET_GPR_U32(ctx, 31, 0x28B270u);
    ctx->pc = 0x28B26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B268u;
            // 0x28b26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (runtime->hasFunction(0x286808u)) {
        auto targetFn = runtime->lookupFunction(0x286808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B270u; }
        if (ctx->pc != 0x28B270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286808_0x286808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B270u; }
        if (ctx->pc != 0x28B270u) { return; }
    }
    ctx->pc = 0x28B270u;
label_28b270:
    // 0x28b270: 0x2445003f  addiu       $a1, $v0, 0x3F
    ctx->pc = 0x28b270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x28b274: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28b274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28b278: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x28b278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x28b27c: 0x2442007e  addiu       $v0, $v0, 0x7E
    ctx->pc = 0x28b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 126));
    // 0x28b280: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x28b280u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x28b284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28b284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b288: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x28b288u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x28b28c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28b28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b290: 0xc0a1b6a  jal         func_286DA8
    ctx->pc = 0x28B290u;
    SET_GPR_U32(ctx, 31, 0x28B298u);
    ctx->pc = 0x28B294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B290u;
            // 0x28b294: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286DA8u;
    if (runtime->hasFunction(0x286DA8u)) {
        auto targetFn = runtime->lookupFunction(0x286DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B298u; }
        if (ctx->pc != 0x28B298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286DA8_0x286da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B298u; }
        if (ctx->pc != 0x28B298u) { return; }
    }
    ctx->pc = 0x28B298u;
label_28b298:
    // 0x28b298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28b298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b29c: 0xc0a1c52  jal         func_287148
    ctx->pc = 0x28B29Cu;
    SET_GPR_U32(ctx, 31, 0x28B2A4u);
    ctx->pc = 0x28B2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B29Cu;
            // 0x28b2a0: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287148u;
    if (runtime->hasFunction(0x287148u)) {
        auto targetFn = runtime->lookupFunction(0x287148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2A4u; }
        if (ctx->pc != 0x28B2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287148_0x287148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2A4u; }
        if (ctx->pc != 0x28B2A4u) { return; }
    }
    ctx->pc = 0x28B2A4u;
label_28b2a4:
    // 0x28b2a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28b2a8: 0xdc700000  ld          $s0, 0x0($v1)
    ctx->pc = 0x28b2a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28b2ac: 0xc0a198a  jal         func_286628
    ctx->pc = 0x28B2ACu;
    SET_GPR_U32(ctx, 31, 0x28B2B4u);
    ctx->pc = 0x28B2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B2ACu;
            // 0x28b2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286628u;
    if (runtime->hasFunction(0x286628u)) {
        auto targetFn = runtime->lookupFunction(0x286628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2B4u; }
        if (ctx->pc != 0x28B2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286628_0x286628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2B4u; }
        if (ctx->pc != 0x28B2B4u) { return; }
    }
    ctx->pc = 0x28B2B4u;
label_28b2b4:
    // 0x28b2b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28b2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b2b8: 0xc0a1b6a  jal         func_286DA8
    ctx->pc = 0x28B2B8u;
    SET_GPR_U32(ctx, 31, 0x28B2C0u);
    ctx->pc = 0x28B2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B2B8u;
            // 0x28b2bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286DA8u;
    if (runtime->hasFunction(0x286DA8u)) {
        auto targetFn = runtime->lookupFunction(0x286DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2C0u; }
        if (ctx->pc != 0x28B2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286DA8_0x286da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2C0u; }
        if (ctx->pc != 0x28B2C0u) { return; }
    }
    ctx->pc = 0x28B2C0u;
label_28b2c0:
    // 0x28b2c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28b2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b2c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28b2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b2c8: 0xc0a1cd2  jal         func_287348
    ctx->pc = 0x28B2C8u;
    SET_GPR_U32(ctx, 31, 0x28B2D0u);
    ctx->pc = 0x28B2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B2C8u;
            // 0x28b2cc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287348u;
    if (runtime->hasFunction(0x287348u)) {
        auto targetFn = runtime->lookupFunction(0x287348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2D0u; }
        if (ctx->pc != 0x28B2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287348_0x287348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2D0u; }
        if (ctx->pc != 0x28B2D0u) { return; }
    }
    ctx->pc = 0x28B2D0u;
label_28b2d0:
    // 0x28b2d0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x28b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28b2d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28B2D4u;
    {
        const bool branch_taken_0x28b2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B2D4u;
            // 0x28b2d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2d4) {
            ctx->pc = 0x28B300u;
            goto label_28b300;
        }
    }
    ctx->pc = 0x28B2DCu;
    // 0x28b2dc: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B2DCu;
    {
        const bool branch_taken_0x28b2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x28B2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B2DCu;
            // 0x28b2e0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2dc) {
            ctx->pc = 0x28B2F0u;
            goto label_28b2f0;
        }
    }
    ctx->pc = 0x28B2E4u;
    // 0x28b2e4: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x28b2e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28b2e8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B2E8u;
    {
        const bool branch_taken_0x28b2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b2e8) {
            ctx->pc = 0x28B300u;
            goto label_28b300;
        }
    }
    ctx->pc = 0x28B2F0u;
label_28b2f0:
    // 0x28b2f0: 0xc0a217e  jal         func_2885F8
    ctx->pc = 0x28B2F0u;
    SET_GPR_U32(ctx, 31, 0x28B2F8u);
    ctx->pc = 0x28B2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B2F0u;
            // 0x28b2f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2885F8u;
    if (runtime->hasFunction(0x2885F8u)) {
        auto targetFn = runtime->lookupFunction(0x2885F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2F8u; }
        if (ctx->pc != 0x28B2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002885F8_0x2885f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2F8u; }
        if (ctx->pc != 0x28B2F8u) { return; }
    }
    ctx->pc = 0x28B2F8u;
label_28b2f8:
    // 0x28b2f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28B2F8u;
    {
        const bool branch_taken_0x28b2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B2F8u;
            // 0x28b2fc: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2f8) {
            ctx->pc = 0x28B30Cu;
            goto label_28b30c;
        }
    }
    ctx->pc = 0x28B300u;
label_28b300:
    // 0x28b300: 0xc0a1b6a  jal         func_286DA8
    ctx->pc = 0x28B300u;
    SET_GPR_U32(ctx, 31, 0x28B308u);
    ctx->pc = 0x28B304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B300u;
            // 0x28b304: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286DA8u;
    if (runtime->hasFunction(0x286DA8u)) {
        auto targetFn = runtime->lookupFunction(0x286DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B308u; }
        if (ctx->pc != 0x28B308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286DA8_0x286da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B308u; }
        if (ctx->pc != 0x28B308u) { return; }
    }
    ctx->pc = 0x28B308u;
label_28b308:
    // 0x28b308: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x28b308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_28b30c:
    // 0x28b30c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x28b30cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28b310: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B310u;
    {
        const bool branch_taken_0x28b310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B310u;
            // 0x28b314: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b310) {
            ctx->pc = 0x28B320u;
            goto label_28b320;
        }
    }
    ctx->pc = 0x28B318u;
    // 0x28b318: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28b318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b31c: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x28b31cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_28b320:
    // 0x28b320: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B320u;
    {
        const bool branch_taken_0x28b320 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x28B324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B320u;
            // 0x28b324: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b320) {
            ctx->pc = 0x28B330u;
            goto label_28b330;
        }
    }
    ctx->pc = 0x28B328u;
    // 0x28b328: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28B328u;
    {
        const bool branch_taken_0x28b328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B328u;
            // 0x28b32c: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b328) {
            ctx->pc = 0x28B334u;
            goto label_28b334;
        }
    }
    ctx->pc = 0x28B330u;
label_28b330:
    // 0x28b330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28b330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b334:
    // 0x28b334: 0xc0a2d60  jal         func_28B580
    ctx->pc = 0x28B334u;
    SET_GPR_U32(ctx, 31, 0x28B33Cu);
    ctx->pc = 0x28B338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B334u;
            // 0x28b338: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B580u;
    if (runtime->hasFunction(0x28B580u)) {
        auto targetFn = runtime->lookupFunction(0x28B580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B33Cu; }
        if (ctx->pc != 0x28B33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B580_0x28b580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B33Cu; }
        if (ctx->pc != 0x28B33Cu) { return; }
    }
    ctx->pc = 0x28B33Cu;
label_28b33c:
    // 0x28b33c: 0xfe420048  sd          $v0, 0x48($s2)
    ctx->pc = 0x28b33cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 2));
    // 0x28b340: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x28B340u;
    SET_GPR_U32(ctx, 31, 0x28B348u);
    ctx->pc = 0x28B344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B340u;
            // 0x28b344: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B348u; }
        if (ctx->pc != 0x28B348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B348u; }
        if (ctx->pc != 0x28B348u) { return; }
    }
    ctx->pc = 0x28B348u;
label_28b348:
    // 0x28b348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28b348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b34c: 0xc0a1b6a  jal         func_286DA8
    ctx->pc = 0x28B34Cu;
    SET_GPR_U32(ctx, 31, 0x28B354u);
    ctx->pc = 0x28B350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B34Cu;
            // 0x28b350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286DA8u;
    if (runtime->hasFunction(0x286DA8u)) {
        auto targetFn = runtime->lookupFunction(0x286DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B354u; }
        if (ctx->pc != 0x28B354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286DA8_0x286da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B354u; }
        if (ctx->pc != 0x28B354u) { return; }
    }
    ctx->pc = 0x28B354u;
label_28b354:
    // 0x28b354: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x28b354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x28b358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28b358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b35c: 0xc0a1c52  jal         func_287148
    ctx->pc = 0x28B35Cu;
    SET_GPR_U32(ctx, 31, 0x28B364u);
    ctx->pc = 0x28B360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B35Cu;
            // 0x28b360: 0x529c0  sll         $a1, $a1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287148u;
    if (runtime->hasFunction(0x287148u)) {
        auto targetFn = runtime->lookupFunction(0x287148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B364u; }
        if (ctx->pc != 0x28B364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287148_0x287148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B364u; }
        if (ctx->pc != 0x28B364u) { return; }
    }
    ctx->pc = 0x28B364u;
label_28b364:
    // 0x28b364: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x28b364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b368: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28b368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b36c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28b36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b370: 0xc0a18ea  jal         func_2863A8
    ctx->pc = 0x28B370u;
    SET_GPR_U32(ctx, 31, 0x28B378u);
    ctx->pc = 0x28B374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B370u;
            // 0x28b374: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2863A8u;
    if (runtime->hasFunction(0x2863A8u)) {
        auto targetFn = runtime->lookupFunction(0x2863A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B378u; }
        if (ctx->pc != 0x28B378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002863A8_0x2863a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B378u; }
        if (ctx->pc != 0x28B378u) { return; }
    }
    ctx->pc = 0x28B378u;
label_28b378:
    // 0x28b378: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x28b378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x28b37c: 0xc0a1a4e  jal         func_286938
    ctx->pc = 0x28B37Cu;
    SET_GPR_U32(ctx, 31, 0x28B384u);
    ctx->pc = 0x28B380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B37Cu;
            // 0x28b380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286938u;
    if (runtime->hasFunction(0x286938u)) {
        auto targetFn = runtime->lookupFunction(0x286938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B384u; }
        if (ctx->pc != 0x28B384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286938_0x286938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B384u; }
        if (ctx->pc != 0x28B384u) { return; }
    }
    ctx->pc = 0x28B384u;
label_28b384:
    // 0x28b384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28b388:
    // 0x28b388: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x28b388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28b38c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x28b38cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28b390: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x28b390u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28b394: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x28b394u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28b398: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x28b398u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28b39c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x28b39cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b3a0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x28b3a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x28B3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B3A4u;
            // 0x28b3a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B3ACu;
    // 0x28b3ac: 0x0  nop
    ctx->pc = 0x28b3acu;
    // NOP
    ctx->pc = 0x28b3b0u;
}
