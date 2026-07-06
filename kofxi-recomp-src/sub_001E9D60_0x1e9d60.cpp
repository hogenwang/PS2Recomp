#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E9D60
// Address: 0x1e9d60 - 0x1e9e10
void sub_001E9D60_0x1e9d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9D60_0x1e9d60");
#endif

    switch (ctx->pc) {
        case 0x1e9d80u: goto label_1e9d80;
        case 0x1e9d90u: goto label_1e9d90;
        case 0x1e9db8u: goto label_1e9db8;
        case 0x1e9dd0u: goto label_1e9dd0;
        case 0x1e9de8u: goto label_1e9de8;
        case 0x1e9dfcu: goto label_1e9dfc;
        default: break;
    }

    ctx->pc = 0x1e9d60u;

    // 0x1e9d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e9d64: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1e9d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e9d68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e9d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e9d6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e9d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e9d74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e9d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e9d78: 0xc07f688  jal         func_1FDA20
    ctx->pc = 0x1E9D78u;
    SET_GPR_U32(ctx, 31, 0x1E9D80u);
    ctx->pc = 0x1E9D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D78u;
            // 0x1e9d7c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA20u;
    if (runtime->hasFunction(0x1FDA20u)) {
        auto targetFn = runtime->lookupFunction(0x1FDA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D80u; }
        if (ctx->pc != 0x1E9D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDA20_0x1fda20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D80u; }
        if (ctx->pc != 0x1E9D80u) { return; }
    }
    ctx->pc = 0x1E9D80u;
label_1e9d80:
    // 0x1e9d80: 0x1051000d  beq         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E9D80u;
    {
        const bool branch_taken_0x1e9d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1E9D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D80u;
            // 0x1e9d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d80) {
            ctx->pc = 0x1E9DB8u;
            goto label_1e9db8;
        }
    }
    ctx->pc = 0x1E9D88u;
    // 0x1e9d88: 0xc07ad76  jal         func_1EB5D8
    ctx->pc = 0x1E9D88u;
    SET_GPR_U32(ctx, 31, 0x1E9D90u);
    ctx->pc = 0x1E9D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D88u;
            // 0x1e9d8c: 0x8e052174  lw          $a1, 0x2174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8564)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB5D8u;
    if (runtime->hasFunction(0x1EB5D8u)) {
        auto targetFn = runtime->lookupFunction(0x1EB5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D90u; }
        if (ctx->pc != 0x1E9D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB5D8_0x1eb5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D90u; }
        if (ctx->pc != 0x1E9D90u) { return; }
    }
    ctx->pc = 0x1E9D90u;
label_1e9d90:
    // 0x1e9d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d94: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1e9d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e9d98: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9D98u;
    {
        const bool branch_taken_0x1e9d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1E9D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D98u;
            // 0x1e9d9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d98) {
            ctx->pc = 0x1E9DB8u;
            goto label_1e9db8;
        }
    }
    ctx->pc = 0x1E9DA0u;
    // 0x1e9da0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9da0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9da4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e9da4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e9da8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9dac: 0x807f682  j           func_1FDA08
    ctx->pc = 0x1E9DACu;
    ctx->pc = 0x1E9DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9DACu;
            // 0x1e9db0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA08u;
    {
        auto targetFn = runtime->lookupFunction(0x1FDA08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E9DB4u;
    // 0x1e9db4: 0x0  nop
    ctx->pc = 0x1e9db4u;
    // NOP
label_1e9db8:
    // 0x1e9db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9dbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e9dbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e9dc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9DC4u;
            // 0x1e9dc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9DCCu;
    // 0x1e9dcc: 0x0  nop
    ctx->pc = 0x1e9dccu;
    // NOP
label_1e9dd0:
    // 0x1e9dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e9dd4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1e9dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e9dd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e9dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e9ddc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e9ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e9de0: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1E9DE0u;
    SET_GPR_U32(ctx, 31, 0x1E9DE8u);
    ctx->pc = 0x1E9DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9DE0u;
            // 0x1e9de4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DE8u; }
        if (ctx->pc != 0x1E9DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DE8u; }
        if (ctx->pc != 0x1E9DE8u) { return; }
    }
    ctx->pc = 0x1E9DE8u;
label_1e9de8:
    // 0x1e9de8: 0x260336b4  addiu       $v1, $s0, 0x36B4
    ctx->pc = 0x1e9de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 14004));
    // 0x1e9dec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9DECu;
    {
        const bool branch_taken_0x1e9dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9DECu;
            // 0x1e9df0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9dec) {
            ctx->pc = 0x1E9E00u;
            goto label_1e9e00;
        }
    }
    ctx->pc = 0x1E9DF4u;
    // 0x1e9df4: 0xc07a784  jal         func_1E9E10
    ctx->pc = 0x1E9DF4u;
    SET_GPR_U32(ctx, 31, 0x1E9DFCu);
    ctx->pc = 0x1E9DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9DF4u;
            // 0x1e9df8: 0xae03216c  sw          $v1, 0x216C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9E10u;
    if (runtime->hasFunction(0x1E9E10u)) {
        auto targetFn = runtime->lookupFunction(0x1E9E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DFCu; }
        if (ctx->pc != 0x1E9DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9E10_0x1e9e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DFCu; }
        if (ctx->pc != 0x1E9DFCu) { return; }
    }
    ctx->pc = 0x1E9DFCu;
label_1e9dfc:
    // 0x1e9dfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9e00:
    // 0x1e9e00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9e04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e9e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e9e08: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E08u;
            // 0x1e9e0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9E10u;
    ctx->pc = 0x1e9e10u;
}
