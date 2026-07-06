#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C1CB8
// Address: 0x2c1cb8 - 0x2c1d68
void sub_002C1CB8_0x2c1cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1CB8_0x2c1cb8");
#endif

    switch (ctx->pc) {
        case 0x2c1ce4u: goto label_2c1ce4;
        case 0x2c1d00u: goto label_2c1d00;
        case 0x2c1d0cu: goto label_2c1d0c;
        case 0x2c1d3cu: goto label_2c1d3c;
        default: break;
    }

    ctx->pc = 0x2c1cb8u;

    // 0x2c1cb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c1cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c1cbc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c1cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c1cc0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c1cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c1cc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c1cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1cc8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c1cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c1ccc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c1cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1cd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c1cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c1cd4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2c1cd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1cd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c1cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c1cdc: 0xc0b077a  jal         func_2C1DE8
    ctx->pc = 0x2C1CDCu;
    SET_GPR_U32(ctx, 31, 0x2C1CE4u);
    ctx->pc = 0x2C1CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1CDCu;
            // 0x2c1ce0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1DE8u;
    if (runtime->hasFunction(0x2C1DE8u)) {
        auto targetFn = runtime->lookupFunction(0x2C1DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1CE4u; }
        if (ctx->pc != 0x2C1CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1DE8_0x2c1de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1CE4u; }
        if (ctx->pc != 0x2C1CE4u) { return; }
    }
    ctx->pc = 0x2C1CE4u;
label_2c1ce4:
    // 0x2c1ce4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1ce8: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1CE8u;
    {
        const bool branch_taken_0x2c1ce8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2C1CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1CE8u;
            // 0x2c1cec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ce8) {
            ctx->pc = 0x2C1CF8u;
            goto label_2c1cf8;
        }
    }
    ctx->pc = 0x2C1CF0u;
    // 0x2c1cf0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C1CF0u;
    {
        const bool branch_taken_0x2c1cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1CF0u;
            // 0x2c1cf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1cf0) {
            ctx->pc = 0x2C1D48u;
            goto label_2c1d48;
        }
    }
    ctx->pc = 0x2C1CF8u;
label_2c1cf8:
    // 0x2c1cf8: 0xc0b07a0  jal         func_2C1E80
    ctx->pc = 0x2C1CF8u;
    SET_GPR_U32(ctx, 31, 0x2C1D00u);
    ctx->pc = 0x2C1CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1CF8u;
            // 0x2c1cfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1E80u;
    if (runtime->hasFunction(0x2C1E80u)) {
        auto targetFn = runtime->lookupFunction(0x2C1E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D00u; }
        if (ctx->pc != 0x2C1D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1E80_0x2c1e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D00u; }
        if (ctx->pc != 0x2C1D00u) { return; }
    }
    ctx->pc = 0x2C1D00u;
label_2c1d00:
    // 0x2c1d00: 0x2670ffff  addiu       $s0, $s3, -0x1
    ctx->pc = 0x2c1d00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2c1d04: 0xc0b090a  jal         func_2C2428
    ctx->pc = 0x2C1D04u;
    SET_GPR_U32(ctx, 31, 0x2C1D0Cu);
    ctx->pc = 0x2C1D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D04u;
            // 0x2c1d08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2428u;
    if (runtime->hasFunction(0x2C2428u)) {
        auto targetFn = runtime->lookupFunction(0x2C2428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D0Cu; }
        if (ctx->pc != 0x2C1D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2428_0x2c2428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D0Cu; }
        if (ctx->pc != 0x2C1D0Cu) { return; }
    }
    ctx->pc = 0x2C1D0Cu;
label_2c1d0c:
    // 0x2c1d0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c1d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1d10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c1d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c1d14: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2c1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c1d18: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2c1d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c1d1c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1D1Cu;
    {
        const bool branch_taken_0x2c1d1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D1Cu;
            // 0x2c1d20: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1d1c) {
            ctx->pc = 0x2C1D2Cu;
            goto label_2c1d2c;
        }
    }
    ctx->pc = 0x2C1D24u;
    // 0x2c1d24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C1D24u;
    {
        const bool branch_taken_0x2c1d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D24u;
            // 0x2c1d28: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1d24) {
            ctx->pc = 0x2C1D48u;
            goto label_2c1d48;
        }
    }
    ctx->pc = 0x2C1D2Cu;
label_2c1d2c:
    // 0x2c1d2c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2c1d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c1d30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c1d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1d34: 0xc049c48  jal         func_127120
    ctx->pc = 0x2C1D34u;
    SET_GPR_U32(ctx, 31, 0x2C1D3Cu);
    ctx->pc = 0x2C1D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D34u;
            // 0x2c1d38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D3Cu; }
        if (ctx->pc != 0x2C1D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D3Cu; }
        if (ctx->pc != 0x2C1D3Cu) { return; }
    }
    ctx->pc = 0x2C1D3Cu;
label_2c1d3c:
    // 0x2c1d3c: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x2c1d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2c1d40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c1d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1d44: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2c1d44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2c1d48:
    // 0x2c1d48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c1d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c1d4c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c1d4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1d50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c1d50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1d54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c1d54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1d58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c1d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D5Cu;
            // 0x2c1d60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1D64u;
    // 0x2c1d64: 0x0  nop
    ctx->pc = 0x2c1d64u;
    // NOP
    ctx->pc = 0x2c1d68u;
}
