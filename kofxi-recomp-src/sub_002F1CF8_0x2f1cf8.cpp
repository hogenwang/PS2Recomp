#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1CF8
// Address: 0x2f1cf8 - 0x2f1de0
void sub_002F1CF8_0x2f1cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1CF8_0x2f1cf8");
#endif

    switch (ctx->pc) {
        case 0x2f1d40u: goto label_2f1d40;
        case 0x2f1d50u: goto label_2f1d50;
        case 0x2f1d68u: goto label_2f1d68;
        case 0x2f1d98u: goto label_2f1d98;
        case 0x2f1db0u: goto label_2f1db0;
        case 0x2f1dbcu: goto label_2f1dbc;
        default: break;
    }

    ctx->pc = 0x2f1cf8u;

    // 0x2f1cf8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f1cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f1cfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f1cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f1d00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2f1d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2f1d04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f1d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f1d08: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f1d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f1d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f1d10: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2f1d10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f1d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f1d18: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f1d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f1d1c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2f1d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2f1d20: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f1d20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d24: 0xffa80030  sd          $t0, 0x30($sp)
    ctx->pc = 0x2f1d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 8));
    // 0x2f1d28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f1d28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d2c: 0xffa90038  sd          $t1, 0x38($sp)
    ctx->pc = 0x2f1d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 9));
    // 0x2f1d30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f1d30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d34: 0xffaa0040  sd          $t2, 0x40($sp)
    ctx->pc = 0x2f1d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 10));
    // 0x2f1d38: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2F1D38u;
    SET_GPR_U32(ctx, 31, 0x2F1D40u);
    ctx->pc = 0x2F1D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1D38u;
            // 0x2f1d3c: 0xffab0048  sd          $t3, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (runtime->hasFunction(0x2F1BD8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1D40u; }
        if (ctx->pc != 0x2F1D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1BD8_0x2f1bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1D40u; }
        if (ctx->pc != 0x2F1D40u) { return; }
    }
    ctx->pc = 0x2F1D40u;
label_2f1d40:
    // 0x2f1d40: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2f1d40u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2f1d44: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2f1d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2f1d48: 0xc08917a  jal         func_2245E8
    ctx->pc = 0x2F1D48u;
    SET_GPR_U32(ctx, 31, 0x2F1D50u);
    ctx->pc = 0x2F1D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1D48u;
            // 0x2f1d4c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    if (runtime->hasFunction(0x2245E8u)) {
        auto targetFn = runtime->lookupFunction(0x2245E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1D50u; }
        if (ctx->pc != 0x2F1D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002245E8_0x2245e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1D50u; }
        if (ctx->pc != 0x2F1D50u) { return; }
    }
    ctx->pc = 0x2F1D50u;
label_2f1d50:
    // 0x2f1d50: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f1d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f1d54: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2f1d54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1d58: 0x104f0003  beq         $v0, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1D58u;
    {
        const bool branch_taken_0x2f1d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x2F1D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1D58u;
            // 0x2f1d5c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1d58) {
            ctx->pc = 0x2F1D68u;
            goto label_2f1d68;
        }
    }
    ctx->pc = 0x2F1D60u;
    // 0x2f1d60: 0xc089144  jal         func_224510
    ctx->pc = 0x2F1D60u;
    SET_GPR_U32(ctx, 31, 0x2F1D68u);
    ctx->pc = 0x2F1D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1D60u;
            // 0x2f1d64: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1D68u; }
        if (ctx->pc != 0x2F1D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1D68u; }
        if (ctx->pc != 0x2F1D68u) { return; }
    }
    ctx->pc = 0x2F1D68u;
label_2f1d68:
    // 0x2f1d68: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2f1d68u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2f1d6c: 0x3c0d003a  lui         $t5, 0x3A
    ctx->pc = 0x2f1d6cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)58 << 16));
    // 0x2f1d70: 0x8deef1c4  lw          $t6, -0xE3C($t7)
    ctx->pc = 0x2f1d70u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963652)));
    // 0x2f1d74: 0x29ce0003  slti        $t6, $t6, 0x3
    ctx->pc = 0x2f1d74u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f1d78: 0x15c00010  bnez        $t6, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F1D78u;
    {
        const bool branch_taken_0x2f1d78 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1D78u;
            // 0x2f1d7c: 0xadb1f1c0  sw          $s1, -0xE40($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 4294963648), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1d78) {
            ctx->pc = 0x2F1DBCu;
            goto label_2f1dbc;
        }
    }
    ctx->pc = 0x2F1D80u;
    // 0x2f1d80: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f1d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f1d84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f1d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d88: 0x24841b20  addiu       $a0, $a0, 0x1B20
    ctx->pc = 0x2f1d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6944));
    // 0x2f1d8c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f1d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d90: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2F1D90u;
    SET_GPR_U32(ctx, 31, 0x2F1D98u);
    ctx->pc = 0x2F1D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1D90u;
            // 0x2f1d94: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1D98u; }
        if (ctx->pc != 0x2F1D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1D98u; }
        if (ctx->pc != 0x2F1D98u) { return; }
    }
    ctx->pc = 0x2F1D98u;
label_2f1d98:
    // 0x2f1d98: 0x8faf0030  lw          $t7, 0x30($sp)
    ctx->pc = 0x2f1d98u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1d9c: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x2f1d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2f1da0: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1DA0u;
    {
        const bool branch_taken_0x2f1da0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1DA0u;
            // 0x2f1da4: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1da0) {
            ctx->pc = 0x2F1DB0u;
            goto label_2f1db0;
        }
    }
    ctx->pc = 0x2F1DA8u;
    // 0x2f1da8: 0xc043e36  jal         func_10F8D8
    ctx->pc = 0x2F1DA8u;
    SET_GPR_U32(ctx, 31, 0x2F1DB0u);
    ctx->pc = 0x10F8D8u;
    if (runtime->hasFunction(0x10F8D8u)) {
        auto targetFn = runtime->lookupFunction(0x10F8D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1DB0u; }
        if (ctx->pc != 0x2F1DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F8D8_0x10f8d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1DB0u; }
        if (ctx->pc != 0x2F1DB0u) { return; }
    }
    ctx->pc = 0x2F1DB0u;
label_2f1db0:
    // 0x2f1db0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f1db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f1db4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2F1DB4u;
    SET_GPR_U32(ctx, 31, 0x2F1DBCu);
    ctx->pc = 0x2F1DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1DB4u;
            // 0x2f1db8: 0x24841b30  addiu       $a0, $a0, 0x1B30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1DBCu; }
        if (ctx->pc != 0x2F1DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1DBCu; }
        if (ctx->pc != 0x2F1DBCu) { return; }
    }
    ctx->pc = 0x2F1DBCu;
label_2f1dbc:
    // 0x2f1dbc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2f1dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1dc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1dc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1dc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f1dc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f1dc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f1dc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1dcc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f1dccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f1dd0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f1dd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1dd4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2f1dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f1dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1DD8u;
            // 0x2f1ddc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1DE0u;
    ctx->pc = 0x2f1de0u;
}
