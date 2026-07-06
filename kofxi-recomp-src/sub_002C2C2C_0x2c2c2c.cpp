#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C2C2C
// Address: 0x2c2c2c - 0x2c30a8
void sub_002C2C2C_0x2c2c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2C2C_0x2c2c2c");
#endif

    switch (ctx->pc) {
        case 0x2c2c38u: goto label_2c2c38;
        case 0x2c2c60u: goto label_2c2c60;
        case 0x2c2c78u: goto label_2c2c78;
        case 0x2c2c88u: goto label_2c2c88;
        case 0x2c2ca4u: goto label_2c2ca4;
        case 0x2c2ce0u: goto label_2c2ce0;
        case 0x2c2d1cu: goto label_2c2d1c;
        case 0x2c2d58u: goto label_2c2d58;
        case 0x2c2d94u: goto label_2c2d94;
        case 0x2c2dd0u: goto label_2c2dd0;
        case 0x2c2e10u: goto label_2c2e10;
        case 0x2c2e28u: goto label_2c2e28;
        case 0x2c2e6cu: goto label_2c2e6c;
        case 0x2c2e98u: goto label_2c2e98;
        case 0x2c2edcu: goto label_2c2edc;
        case 0x2c2f30u: goto label_2c2f30;
        case 0x2c2f38u: goto label_2c2f38;
        case 0x2c2f40u: goto label_2c2f40;
        case 0x2c2f7cu: goto label_2c2f7c;
        case 0x2c2fa0u: goto label_2c2fa0;
        case 0x2c2fb0u: goto label_2c2fb0;
        case 0x2c2fe0u: goto label_2c2fe0;
        case 0x2c3010u: goto label_2c3010;
        case 0x2c3030u: goto label_2c3030;
        case 0x2c3038u: goto label_2c3038;
        case 0x2c3050u: goto label_2c3050;
        case 0x2c3060u: goto label_2c3060;
        case 0x2c3084u: goto label_2c3084;
        default: break;
    }

    ctx->pc = 0x2c2c2cu;

    // 0x2c2c2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c2c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c30: 0xc0a00b6  jal         func_2802D8
    ctx->pc = 0x2C2C30u;
    SET_GPR_U32(ctx, 31, 0x2C2C38u);
    ctx->pc = 0x2C2C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2C30u;
            // 0x2c2c34: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (runtime->hasFunction(0x2802D8u)) {
        auto targetFn = runtime->lookupFunction(0x2802D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2C38u; }
        if (ctx->pc != 0x2C2C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002802D8_0x2802d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2C38u; }
        if (ctx->pc != 0x2C2C38u) { return; }
    }
    ctx->pc = 0x2C2C38u;
label_2c2c38:
    // 0x2c2c38: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2C38u;
    {
        const bool branch_taken_0x2c2c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2c38) {
            ctx->pc = 0x2C2C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2C38u;
            // 0x2c2c3c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2C4Cu;
            goto label_2c2c4c;
        }
    }
    ctx->pc = 0x2C2C40u;
    // 0x2c2c40: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x2c2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2c2c44: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x2C2C44u;
    {
        const bool branch_taken_0x2c2c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2C44u;
            // 0x2c2c48: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c44) {
            ctx->pc = 0x2C3038u;
            goto label_2c3038;
        }
    }
    ctx->pc = 0x2C2C4Cu;
label_2c2c4c:
    // 0x2c2c4c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2c2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c2c50: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c2c50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2c54: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2c2c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c2c58: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c2c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c2c5c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2c2c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_2c2c60:
    // 0x2c2c60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c2c64: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2c2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c2c68: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2C68u;
    {
        const bool branch_taken_0x2c2c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2c68) {
            ctx->pc = 0x2C2C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2C68u;
            // 0x2c2c6c: 0x90540000  lbu         $s4, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2C90u;
            goto label_2c2c90;
        }
    }
    ctx->pc = 0x2C2C70u;
    // 0x2c2c70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C2C70u;
    {
        const bool branch_taken_0x2c2c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2C70u;
            // 0x2c2c74: 0xafa50024  sw          $a1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c70) {
            ctx->pc = 0x2C2C94u;
            goto label_2c2c94;
        }
    }
    ctx->pc = 0x2C2C78u;
label_2c2c78:
    // 0x2c2c78: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C2C78u;
    {
        const bool branch_taken_0x2c2c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2c78) {
            ctx->pc = 0x2C2C7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2C78u;
            // 0x2c2c7c: 0xafa50024  sw          $a1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2C94u;
            goto label_2c2c94;
        }
    }
    ctx->pc = 0x2C2C80u;
    // 0x2c2c80: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2C2C80u;
    SET_GPR_U32(ctx, 31, 0x2C2C88u);
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2C88u; }
        if (ctx->pc != 0x2C2C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2C88u; }
        if (ctx->pc != 0x2C2C88u) { return; }
    }
    ctx->pc = 0x2C2C88u;
label_2c2c88:
    // 0x2c2c88: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2c2c88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2c2c8c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2c2c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c2c90:
    // 0x2c2c90: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x2c2c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
label_2c2c94:
    // 0x2c2c94: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2c2c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2c2c98: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2c2c98u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2c9c: 0xc0a00b6  jal         func_2802D8
    ctx->pc = 0x2C2C9Cu;
    SET_GPR_U32(ctx, 31, 0x2C2CA4u);
    ctx->pc = 0x2C2CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2C9Cu;
            // 0x2c2ca0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (runtime->hasFunction(0x2802D8u)) {
        auto targetFn = runtime->lookupFunction(0x2802D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2CA4u; }
        if (ctx->pc != 0x2C2CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002802D8_0x2802d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2CA4u; }
        if (ctx->pc != 0x2C2CA4u) { return; }
    }
    ctx->pc = 0x2C2CA4u;
label_2c2ca4:
    // 0x2c2ca4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2CA4u;
    {
        const bool branch_taken_0x2c2ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2CA4u;
            // 0x2c2ca8: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ca4) {
            ctx->pc = 0x2C2CB8u;
            goto label_2c2cb8;
        }
    }
    ctx->pc = 0x2C2CACu;
    // 0x2c2cac: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x2c2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2c2cb0: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x2C2CB0u;
    {
        const bool branch_taken_0x2c2cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2CB0u;
            // 0x2c2cb4: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2cb0) {
            ctx->pc = 0x2C3038u;
            goto label_2c3038;
        }
    }
    ctx->pc = 0x2C2CB8u;
label_2c2cb8:
    // 0x2c2cb8: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x2c2cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2c2cbc: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2c2cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c2cc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c2cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2cc4: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2c2cc4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2cc8: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2c2cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2c2ccc: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x2c2cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2c2cd0: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2c2cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2c2cd4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c2cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2cd8: 0xc0b0970  jal         func_2C25C0
    ctx->pc = 0x2C2CD8u;
    SET_GPR_U32(ctx, 31, 0x2C2CE0u);
    ctx->pc = 0x2C2CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2CD8u;
            // 0x2c2cdc: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C25C0u;
    if (runtime->hasFunction(0x2C25C0u)) {
        auto targetFn = runtime->lookupFunction(0x2C25C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2CE0u; }
        if (ctx->pc != 0x2C2CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C25C0_0x2c25c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2CE0u; }
        if (ctx->pc != 0x2C2CE0u) { return; }
    }
    ctx->pc = 0x2C2CE0u;
label_2c2ce0:
    // 0x2c2ce0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2CE0u;
    {
        const bool branch_taken_0x2c2ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2CE0u;
            // 0x2c2ce4: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ce0) {
            ctx->pc = 0x2C2CF4u;
            goto label_2c2cf4;
        }
    }
    ctx->pc = 0x2C2CE8u;
    // 0x2c2ce8: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x2c2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2c2cec: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x2C2CECu;
    {
        const bool branch_taken_0x2c2cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2CECu;
            // 0x2c2cf0: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2cec) {
            ctx->pc = 0x2C3038u;
            goto label_2c3038;
        }
    }
    ctx->pc = 0x2C2CF4u;
label_2c2cf4:
    // 0x2c2cf4: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x2c2cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2c2cf8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2c2cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c2cfc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c2cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d00: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2c2d00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2d04: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2c2d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2c2d08: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x2c2d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2c2d0c: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2c2d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2c2d10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c2d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d14: 0xc0a088a  jal         func_282228
    ctx->pc = 0x2C2D14u;
    SET_GPR_U32(ctx, 31, 0x2C2D1Cu);
    ctx->pc = 0x2C2D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D14u;
            // 0x2c2d18: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282228u;
    if (runtime->hasFunction(0x282228u)) {
        auto targetFn = runtime->lookupFunction(0x282228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D1Cu; }
        if (ctx->pc != 0x2C2D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282228_0x282228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D1Cu; }
        if (ctx->pc != 0x2C2D1Cu) { return; }
    }
    ctx->pc = 0x2C2D1Cu;
label_2c2d1c:
    // 0x2c2d1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2D1Cu;
    {
        const bool branch_taken_0x2c2d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D1Cu;
            // 0x2c2d20: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d1c) {
            ctx->pc = 0x2C2D30u;
            goto label_2c2d30;
        }
    }
    ctx->pc = 0x2C2D24u;
    // 0x2c2d24: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2c2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2c2d28: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x2C2D28u;
    {
        const bool branch_taken_0x2c2d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D28u;
            // 0x2c2d2c: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d28) {
            ctx->pc = 0x2C3038u;
            goto label_2c3038;
        }
    }
    ctx->pc = 0x2C2D30u;
label_2c2d30:
    // 0x2c2d30: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2c2d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2c2d34: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2c2d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c2d38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c2d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d3c: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2c2d3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2d40: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2c2d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2c2d44: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x2c2d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2c2d48: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2c2d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2c2d4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c2d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d50: 0xc0b1476  jal         func_2C51D8
    ctx->pc = 0x2C2D50u;
    SET_GPR_U32(ctx, 31, 0x2C2D58u);
    ctx->pc = 0x2C2D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D50u;
            // 0x2c2d54: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C51D8u;
    if (runtime->hasFunction(0x2C51D8u)) {
        auto targetFn = runtime->lookupFunction(0x2C51D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D58u; }
        if (ctx->pc != 0x2C2D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C51D8_0x2c51d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D58u; }
        if (ctx->pc != 0x2C2D58u) { return; }
    }
    ctx->pc = 0x2C2D58u;
label_2c2d58:
    // 0x2c2d58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2D58u;
    {
        const bool branch_taken_0x2c2d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D58u;
            // 0x2c2d5c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d58) {
            ctx->pc = 0x2C2D6Cu;
            goto label_2c2d6c;
        }
    }
    ctx->pc = 0x2C2D60u;
    // 0x2c2d60: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x2c2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x2c2d64: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x2C2D64u;
    {
        const bool branch_taken_0x2c2d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D64u;
            // 0x2c2d68: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d64) {
            ctx->pc = 0x2C3038u;
            goto label_2c3038;
        }
    }
    ctx->pc = 0x2C2D6Cu;
label_2c2d6c:
    // 0x2c2d6c: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x2c2d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2c2d70: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2c2d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c2d74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c2d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d78: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2c2d78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2d7c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2c2d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2c2d80: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x2c2d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2c2d84: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2c2d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2c2d88: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c2d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d8c: 0xc0a088a  jal         func_282228
    ctx->pc = 0x2C2D8Cu;
    SET_GPR_U32(ctx, 31, 0x2C2D94u);
    ctx->pc = 0x2C2D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D8Cu;
            // 0x2c2d90: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282228u;
    if (runtime->hasFunction(0x282228u)) {
        auto targetFn = runtime->lookupFunction(0x282228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D94u; }
        if (ctx->pc != 0x2C2D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282228_0x282228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D94u; }
        if (ctx->pc != 0x2C2D94u) { return; }
    }
    ctx->pc = 0x2C2D94u;
label_2c2d94:
    // 0x2c2d94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2D94u;
    {
        const bool branch_taken_0x2c2d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D94u;
            // 0x2c2d98: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d94) {
            ctx->pc = 0x2C2DA8u;
            goto label_2c2da8;
        }
    }
    ctx->pc = 0x2C2D9Cu;
    // 0x2c2d9c: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x2c2d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2c2da0: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x2C2DA0u;
    {
        const bool branch_taken_0x2c2da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2DA0u;
            // 0x2c2da4: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2da0) {
            ctx->pc = 0x2C3038u;
            goto label_2c3038;
        }
    }
    ctx->pc = 0x2C2DA8u;
label_2c2da8:
    // 0x2c2da8: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x2c2da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2c2dac: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2c2dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c2db0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c2db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2db4: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2c2db4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2db8: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2c2db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2c2dbc: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x2c2dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2c2dc0: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2c2dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2c2dc4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c2dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2dc8: 0xc0b11f0  jal         func_2C47C0
    ctx->pc = 0x2C2DC8u;
    SET_GPR_U32(ctx, 31, 0x2C2DD0u);
    ctx->pc = 0x2C2DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2DC8u;
            // 0x2c2dcc: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C47C0u;
    if (runtime->hasFunction(0x2C47C0u)) {
        auto targetFn = runtime->lookupFunction(0x2C47C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2DD0u; }
        if (ctx->pc != 0x2C2DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C47C0_0x2c47c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2DD0u; }
        if (ctx->pc != 0x2C2DD0u) { return; }
    }
    ctx->pc = 0x2C2DD0u;
label_2c2dd0:
    // 0x2c2dd0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2DD0u;
    {
        const bool branch_taken_0x2c2dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2DD0u;
            // 0x2c2dd4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2dd0) {
            ctx->pc = 0x2C2DE4u;
            goto label_2c2de4;
        }
    }
    ctx->pc = 0x2C2DD8u;
    // 0x2c2dd8: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x2c2dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x2c2ddc: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x2C2DDCu;
    {
        const bool branch_taken_0x2c2ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2DDCu;
            // 0x2c2de0: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ddc) {
            ctx->pc = 0x2C3038u;
            goto label_2c3038;
        }
    }
    ctx->pc = 0x2C2DE4u;
label_2c2de4:
    // 0x2c2de4: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2c2de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c2de8: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c2de8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2dec: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c2decu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c2df0: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c2df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c2df4: 0x1a800044  blez        $s4, . + 4 + (0x44 << 2)
    ctx->pc = 0x2C2DF4u;
    {
        const bool branch_taken_0x2c2df4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2C2DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2DF4u;
            // 0x2c2df8: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2df4) {
            ctx->pc = 0x2C2F08u;
            goto label_2c2f08;
        }
    }
    ctx->pc = 0x2C2DFCu;
    // 0x2c2dfc: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2c2dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2c2e00: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2E00u;
    {
        const bool branch_taken_0x2c2e00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2e00) {
            ctx->pc = 0x2C2E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2E00u;
            // 0x2c2e04: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2E18u;
            goto label_2c2e18;
        }
    }
    ctx->pc = 0x2C2E08u;
    // 0x2c2e08: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2C2E08u;
    SET_GPR_U32(ctx, 31, 0x2C2E10u);
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2E10u; }
        if (ctx->pc != 0x2C2E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2E10u; }
        if (ctx->pc != 0x2C2E10u) { return; }
    }
    ctx->pc = 0x2C2E10u;
label_2c2e10:
    // 0x2c2e10: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2c2e10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x2c2e14: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2c2e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2c2e18:
    // 0x2c2e18: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2E18u;
    {
        const bool branch_taken_0x2c2e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2e18) {
            ctx->pc = 0x2C2E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2E18u;
            // 0x2c2e1c: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2E30u;
            goto label_2c2e30;
        }
    }
    ctx->pc = 0x2C2E20u;
    // 0x2c2e20: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2C2E20u;
    SET_GPR_U32(ctx, 31, 0x2C2E28u);
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2E28u; }
        if (ctx->pc != 0x2C2E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2E28u; }
        if (ctx->pc != 0x2C2E28u) { return; }
    }
    ctx->pc = 0x2C2E28u;
label_2c2e28:
    // 0x2c2e28: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2c2e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2c2e2c: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x2c2e2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c2e30:
    // 0x2c2e30: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2C2E30u;
    {
        const bool branch_taken_0x2c2e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2E30u;
            // 0x2c2e34: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e30) {
            ctx->pc = 0x2C2F08u;
            goto label_2c2f08;
        }
    }
    ctx->pc = 0x2C2E38u;
    // 0x2c2e38: 0x24030081  addiu       $v1, $zero, 0x81
    ctx->pc = 0x2c2e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x2c2e3c: 0x90d00000  lbu         $s0, 0x0($a2)
    ctx->pc = 0x2c2e3cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c2e40: 0x320200df  andi        $v0, $s0, 0xDF
    ctx->pc = 0x2c2e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)223);
    // 0x2c2e44: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C2E44u;
    {
        const bool branch_taken_0x2c2e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C2E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2E44u;
            // 0x2c2e48: 0x320200e0  andi        $v0, $s0, 0xE0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)224);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e44) {
            ctx->pc = 0x2C2E9Cu;
            goto label_2c2e9c;
        }
    }
    ctx->pc = 0x2C2E4Cu;
    // 0x2c2e4c: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x2c2e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x2c2e50: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2c2e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2c2e54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c2e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e58: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2c2e58u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c2e5c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c2e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2e60: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2c2e60u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2e64: 0xc09fc76  jal         func_27F1D8
    ctx->pc = 0x2C2E64u;
    SET_GPR_U32(ctx, 31, 0x2C2E6Cu);
    ctx->pc = 0x2C2E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2E64u;
            // 0x2c2e68: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F1D8u;
    if (runtime->hasFunction(0x27F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x27F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2E6Cu; }
        if (ctx->pc != 0x2C2E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F1D8_0x27f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2E6Cu; }
        if (ctx->pc != 0x2C2E6Cu) { return; }
    }
    ctx->pc = 0x2C2E6Cu;
label_2c2e6c:
    // 0x2c2e6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2E6Cu;
    {
        const bool branch_taken_0x2c2e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2E6Cu;
            // 0x2c2e70: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e6c) {
            ctx->pc = 0x2C2E80u;
            goto label_2c2e80;
        }
    }
    ctx->pc = 0x2C2E74u;
    // 0x2c2e74: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x2c2e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2c2e78: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2C2E78u;
    {
        const bool branch_taken_0x2c2e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2E78u;
            // 0x2c2e7c: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e78) {
            ctx->pc = 0x2C3038u;
            goto label_2c3038;
        }
    }
    ctx->pc = 0x2C2E80u;
label_2c2e80:
    // 0x2c2e80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2e84: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c2e84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2e88: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c2e8c: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c2e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c2e90: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2c2e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x2c2e94: 0xa0900000  sb          $s0, 0x0($a0)
    ctx->pc = 0x2c2e94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 16));
label_2c2e98:
    // 0x2c2e98: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x2c2e98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c2e9c:
    // 0x2c2e9c: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C2E9Cu;
    {
        const bool branch_taken_0x2c2e9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2E9Cu;
            // 0x2c2ea0: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e9c) {
            ctx->pc = 0x2C2F08u;
            goto label_2c2f08;
        }
    }
    ctx->pc = 0x2C2EA4u;
    // 0x2c2ea4: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x2c2ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2c2ea8: 0x90d00000  lbu         $s0, 0x0($a2)
    ctx->pc = 0x2c2ea8u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c2eac: 0x320200df  andi        $v0, $s0, 0xDF
    ctx->pc = 0x2c2eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)223);
    // 0x2c2eb0: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C2EB0u;
    {
        const bool branch_taken_0x2c2eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C2EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2EB0u;
            // 0x2c2eb4: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2eb0) {
            ctx->pc = 0x2C2F0Cu;
            goto label_2c2f0c;
        }
    }
    ctx->pc = 0x2C2EB8u;
    // 0x2c2eb8: 0x320200e0  andi        $v0, $s0, 0xE0
    ctx->pc = 0x2c2eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)224);
    // 0x2c2ebc: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2c2ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2c2ec0: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2c2ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2c2ec4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c2ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ec8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2c2ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c2ecc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c2eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2ed0: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2c2ed0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2ed4: 0xc09fc76  jal         func_27F1D8
    ctx->pc = 0x2C2ED4u;
    SET_GPR_U32(ctx, 31, 0x2C2EDCu);
    ctx->pc = 0x2C2ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2ED4u;
            // 0x2c2ed8: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F1D8u;
    if (runtime->hasFunction(0x27F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x27F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2EDCu; }
        if (ctx->pc != 0x2C2EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F1D8_0x27f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2EDCu; }
        if (ctx->pc != 0x2C2EDCu) { return; }
    }
    ctx->pc = 0x2C2EDCu;
label_2c2edc:
    // 0x2c2edc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2EDCu;
    {
        const bool branch_taken_0x2c2edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2EDCu;
            // 0x2c2ee0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2edc) {
            ctx->pc = 0x2C2EF0u;
            goto label_2c2ef0;
        }
    }
    ctx->pc = 0x2C2EE4u;
    // 0x2c2ee4: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x2c2ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2c2ee8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2C2EE8u;
    {
        const bool branch_taken_0x2c2ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2EE8u;
            // 0x2c2eec: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ee8) {
            ctx->pc = 0x2C3038u;
            goto label_2c3038;
        }
    }
    ctx->pc = 0x2C2EF0u;
label_2c2ef0:
    // 0x2c2ef0: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2c2ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c2ef4: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c2ef4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2ef8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c2ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c2efc: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c2efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c2f00: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2c2f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x2c2f04: 0xa0900000  sb          $s0, 0x0($a0)
    ctx->pc = 0x2c2f04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 16));
label_2c2f08:
    // 0x2c2f08: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x2c2f08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_2c2f0c:
    // 0x2c2f0c: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2C2F0Cu;
    {
        const bool branch_taken_0x2c2f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2f0c) {
            ctx->pc = 0x2C3008u;
            goto label_2c3008;
        }
    }
    ctx->pc = 0x2C2F14u;
    // 0x2c2f14: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2c2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2c2f18: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C2F18u;
    {
        const bool branch_taken_0x2c2f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F18u;
            // 0x2c2f1c: 0xdfa80018  ld          $t0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2f18) {
            ctx->pc = 0x2C2F50u;
            goto label_2c2f50;
        }
    }
    ctx->pc = 0x2C2F20u;
    // 0x2c2f20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c2f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2f24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C2F24u;
    {
        const bool branch_taken_0x2c2f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2f24) {
            ctx->pc = 0x2C2F50u;
            goto label_2c2f50;
        }
    }
    ctx->pc = 0x2C2F2Cu;
    // 0x2c2f2c: 0x0  nop
    ctx->pc = 0x2c2f2cu;
    // NOP
label_2c2f30:
    // 0x2c2f30: 0xc0af12a  jal         func_2BC4A8
    ctx->pc = 0x2C2F30u;
    SET_GPR_U32(ctx, 31, 0x2C2F38u);
    ctx->pc = 0x2C2F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F30u;
            // 0x2c2f34: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC4A8u;
    if (runtime->hasFunction(0x2BC4A8u)) {
        auto targetFn = runtime->lookupFunction(0x2BC4A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F38u; }
        if (ctx->pc != 0x2C2F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC4A8_0x2bc4a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F38u; }
        if (ctx->pc != 0x2C2F38u) { return; }
    }
    ctx->pc = 0x2C2F38u;
label_2c2f38:
    // 0x2c2f38: 0xc0b11a4  jal         func_2C4690
    ctx->pc = 0x2C2F38u;
    SET_GPR_U32(ctx, 31, 0x2C2F40u);
    ctx->pc = 0x2C2F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F38u;
            // 0x2c2f3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4690u;
    if (runtime->hasFunction(0x2C4690u)) {
        auto targetFn = runtime->lookupFunction(0x2C4690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F40u; }
        if (ctx->pc != 0x2C2F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4690_0x2c4690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F40u; }
        if (ctx->pc != 0x2C2F40u) { return; }
    }
    ctx->pc = 0x2C2F40u;
label_2c2f40:
    // 0x2c2f40: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2c2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2c2f44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c2f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2f48: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C2F48u;
    {
        const bool branch_taken_0x2c2f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F48u;
            // 0x2c2f4c: 0xdfa80018  ld          $t0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2f48) {
            ctx->pc = 0x2C2F30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c2f30;
        }
    }
    ctx->pc = 0x2C2F50u;
label_2c2f50:
    // 0x2c2f50: 0x1100002d  beqz        $t0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C2F50u;
    {
        const bool branch_taken_0x2c2f50 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F50u;
            // 0x2c2f54: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2f50) {
            ctx->pc = 0x2C3008u;
            goto label_2c3008;
        }
    }
    ctx->pc = 0x2C2F58u;
    // 0x2c2f58: 0x240300a3  addiu       $v1, $zero, 0xA3
    ctx->pc = 0x2c2f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x2c2f5c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2c2f5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c2f60: 0x14430029  bne         $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C2F60u;
    {
        const bool branch_taken_0x2c2f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C2F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F60u;
            // 0x2c2f64: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2f60) {
            ctx->pc = 0x2C3008u;
            goto label_2c3008;
        }
    }
    ctx->pc = 0x2C2F68u;
    // 0x2c2f68: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x2c2f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x2c2f6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c2f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f70: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c2f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c2f74: 0xc0a0554  jal         func_281550
    ctx->pc = 0x2C2F74u;
    SET_GPR_U32(ctx, 31, 0x2C2F7Cu);
    ctx->pc = 0x2C2F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F74u;
            // 0x2c2f78: 0x27a70054  addiu       $a3, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281550u;
    if (runtime->hasFunction(0x281550u)) {
        auto targetFn = runtime->lookupFunction(0x281550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F7Cu; }
        if (ctx->pc != 0x2C2F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281550_0x281550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F7Cu; }
        if (ctx->pc != 0x2C2F7Cu) { return; }
    }
    ctx->pc = 0x2C2F7Cu;
label_2c2f7c:
    // 0x2c2f7c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2c2f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2c2f80: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C2F80u;
    {
        const bool branch_taken_0x2c2f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F80u;
            // 0x2c2f84: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2f80) {
            ctx->pc = 0x2C2FACu;
            goto label_2c2fac;
        }
    }
    ctx->pc = 0x2C2F88u;
    // 0x2c2f88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c2f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2f8c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2c2f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c2f90: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c2f90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2f94: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c2f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c2f98: 0xdfa60048  ld          $a2, 0x48($sp)
    ctx->pc = 0x2c2f98u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c2f9c: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c2f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_2c2fa0:
    // 0x2c2fa0: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x2c2fa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2c2fa4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2FA4u;
    {
        const bool branch_taken_0x2c2fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2FA4u;
            // 0x2c2fa8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2fa4) {
            ctx->pc = 0x2C2FBCu;
            goto label_2c2fbc;
        }
    }
    ctx->pc = 0x2C2FACu;
label_2c2fac:
    // 0x2c2fac: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x2c2facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_2c2fb0:
    // 0x2c2fb0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2c2fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2c2fb4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2C2FB4u;
    {
        const bool branch_taken_0x2c2fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2FB4u;
            // 0x2c2fb8: 0xafa3002c  sw          $v1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2fb4) {
            ctx->pc = 0x2C3038u;
            goto label_2c3038;
        }
    }
    ctx->pc = 0x2C2FBCu;
label_2c2fbc:
    // 0x2c2fbc: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x2c2fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x2c2fc0: 0x3c08002c  lui         $t0, 0x2C
    ctx->pc = 0x2c2fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)44 << 16));
    // 0x2c2fc4: 0x24e743b0  addiu       $a3, $a3, 0x43B0
    ctx->pc = 0x2c2fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17328));
    // 0x2c2fc8: 0x25084690  addiu       $t0, $t0, 0x4690
    ctx->pc = 0x2c2fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 18064));
    // 0x2c2fcc: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x2c2fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x2c2fd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c2fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2fd4: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2c2fd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c2fd8: 0xc0a0a02  jal         func_282808
    ctx->pc = 0x2C2FD8u;
    SET_GPR_U32(ctx, 31, 0x2C2FE0u);
    ctx->pc = 0x2C2FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2FD8u;
            // 0x2c2fdc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282808u;
    if (runtime->hasFunction(0x282808u)) {
        auto targetFn = runtime->lookupFunction(0x282808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2FE0u; }
        if (ctx->pc != 0x2C2FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282808_0x282808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2FE0u; }
        if (ctx->pc != 0x2C2FE0u) { return; }
    }
    ctx->pc = 0x2C2FE0u;
label_2c2fe0:
    // 0x2c2fe0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2FE0u;
    {
        const bool branch_taken_0x2c2fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2FE0u;
            // 0x2c2fe4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2fe0) {
            ctx->pc = 0x2C2FF4u;
            goto label_2c2ff4;
        }
    }
    ctx->pc = 0x2C2FE8u;
    // 0x2c2fe8: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x2c2fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2c2fec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C2FECu;
    {
        const bool branch_taken_0x2c2fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2FECu;
            // 0x2c2ff0: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2fec) {
            ctx->pc = 0x2C3038u;
            goto label_2c3038;
        }
    }
    ctx->pc = 0x2C2FF4u;
label_2c2ff4:
    // 0x2c2ff4: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2c2ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c2ff8: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c2ff8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2ffc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c2ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c3000: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c3000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c3004: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2c3004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_2c3008:
    // 0x2c3008: 0xc0a065c  jal         func_281970
    ctx->pc = 0x2C3008u;
    SET_GPR_U32(ctx, 31, 0x2C3010u);
    ctx->pc = 0x2C300Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3008u;
            // 0x2c300c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281970u;
    if (runtime->hasFunction(0x281970u)) {
        auto targetFn = runtime->lookupFunction(0x281970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3010u; }
        if (ctx->pc != 0x2C3010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281970_0x281970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3010u; }
        if (ctx->pc != 0x2C3010u) { return; }
    }
    ctx->pc = 0x2C3010u;
label_2c3010:
    // 0x2c3010: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3010u;
    {
        const bool branch_taken_0x2c3010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3010u;
            // 0x2c3014: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3010) {
            ctx->pc = 0x2C3024u;
            goto label_2c3024;
        }
    }
    ctx->pc = 0x2C3018u;
    // 0x2c3018: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x2c3018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2c301c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C301Cu;
    {
        const bool branch_taken_0x2c301c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C301Cu;
            // 0x2c3020: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c301c) {
            ctx->pc = 0x2C3038u;
            goto label_2c3038;
        }
    }
    ctx->pc = 0x2C3024u;
label_2c3024:
    // 0x2c3024: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3024u;
    {
        const bool branch_taken_0x2c3024 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3024u;
            // 0x2c3028: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3024) {
            ctx->pc = 0x2C3030u;
            goto label_2c3030;
        }
    }
    ctx->pc = 0x2C302Cu;
    // 0x2c302c: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x2c302cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_2c3030:
    // 0x2c3030: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C3030u;
    {
        const bool branch_taken_0x2c3030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3030u;
            // 0x2c3034: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3030) {
            ctx->pc = 0x2C3088u;
            goto label_2c3088;
        }
    }
    ctx->pc = 0x2C3038u;
label_2c3038:
    // 0x2c3038: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2c3038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c303c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c303cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c3040: 0x240500a2  addiu       $a1, $zero, 0xA2
    ctx->pc = 0x2c3040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x2c3044: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c3044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3048: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C3048u;
    SET_GPR_U32(ctx, 31, 0x2C3050u);
    ctx->pc = 0x2C304Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3048u;
            // 0x2c304c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3050u; }
        if (ctx->pc != 0x2C3050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3050u; }
        if (ctx->pc != 0x2C3050u) { return; }
    }
    ctx->pc = 0x2C3050u;
label_2c3050:
    // 0x2c3050: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2c3050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c3054: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2c3054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c3058: 0xc0a0738  jal         func_281CE0
    ctx->pc = 0x2C3058u;
    SET_GPR_U32(ctx, 31, 0x2C3060u);
    ctx->pc = 0x2C305Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3058u;
            // 0x2c305c: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281CE0u;
    if (runtime->hasFunction(0x281CE0u)) {
        auto targetFn = runtime->lookupFunction(0x281CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3060u; }
        if (ctx->pc != 0x2C3060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281CE0_0x281ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3060u; }
        if (ctx->pc != 0x2C3060u) { return; }
    }
    ctx->pc = 0x2C3060u;
label_2c3060:
    // 0x2c3060: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3060u;
    {
        const bool branch_taken_0x2c3060 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3060u;
            // 0x2c3064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3060) {
            ctx->pc = 0x2C3088u;
            goto label_2c3088;
        }
    }
    ctx->pc = 0x2C3068u;
    // 0x2c3068: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3068u;
    {
        const bool branch_taken_0x2c3068 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3068) {
            ctx->pc = 0x2C307Cu;
            goto label_2c307c;
        }
    }
    ctx->pc = 0x2C3070u;
    // 0x2c3070: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c3070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c3074: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3074u;
    {
        const bool branch_taken_0x2c3074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2C3078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3074u;
            // 0x2c3078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3074) {
            ctx->pc = 0x2C3088u;
            goto label_2c3088;
        }
    }
    ctx->pc = 0x2C307Cu;
label_2c307c:
    // 0x2c307c: 0xc0b0c5c  jal         func_2C3170
    ctx->pc = 0x2C307Cu;
    SET_GPR_U32(ctx, 31, 0x2C3084u);
    ctx->pc = 0x2C3080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C307Cu;
            // 0x2c3080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C3170u;
    if (runtime->hasFunction(0x2C3170u)) {
        auto targetFn = runtime->lookupFunction(0x2C3170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3084u; }
        if (ctx->pc != 0x2C3084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C3170_0x2c3170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3084u; }
        if (ctx->pc != 0x2C3084u) { return; }
    }
    ctx->pc = 0x2C3084u;
label_2c3084:
    // 0x2c3084: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3088:
    // 0x2c3088: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2c3088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c308c: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x2c308cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c3090: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x2c3090u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c3094: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2c3094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c3098: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x2c3098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c309c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2c309cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c30a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C30A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C30A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C30A0u;
            // 0x2c30a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C30A8u;
    ctx->pc = 0x2c30a8u;
}
