#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C3D10
// Address: 0x1c3d10 - 0x1c3e90
void sub_001C3D10_0x1c3d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3D10_0x1c3d10");
#endif

    switch (ctx->pc) {
        case 0x1c3d50u: goto label_1c3d50;
        case 0x1c3d68u: goto label_1c3d68;
        case 0x1c3d88u: goto label_1c3d88;
        case 0x1c3dc4u: goto label_1c3dc4;
        case 0x1c3de0u: goto label_1c3de0;
        case 0x1c3decu: goto label_1c3dec;
        case 0x1c3e04u: goto label_1c3e04;
        case 0x1c3e14u: goto label_1c3e14;
        case 0x1c3e4cu: goto label_1c3e4c;
        case 0x1c3e58u: goto label_1c3e58;
        default: break;
    }

    ctx->pc = 0x1c3d10u;

    // 0x1c3d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c3d14: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c3d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c3d18: 0x3c1401bf  lui         $s4, 0x1BF
    ctx->pc = 0x1c3d18u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)447 << 16));
    // 0x1c3d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c3d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c3d20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c3d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c3d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c3d28: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c3d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c3d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c3d30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c3d30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d34: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x1c3d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1c3d38: 0x26845b00  addiu       $a0, $s4, 0x5B00
    ctx->pc = 0x1c3d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 23296));
    // 0x1c3d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c3d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c3d44: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c3d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c3d48: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1C3D48u;
    SET_GPR_U32(ctx, 31, 0x1C3D50u);
    ctx->pc = 0x1C3D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D48u;
            // 0x1c3d4c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D50u; }
        if (ctx->pc != 0x1C3D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D50u; }
        if (ctx->pc != 0x1C3D50u) { return; }
    }
    ctx->pc = 0x1C3D50u;
label_1c3d50:
    // 0x1c3d50: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c3d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c3d54: 0x8c62e990  lw          $v0, -0x1670($v1)
    ctx->pc = 0x1c3d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961552)));
    // 0x1c3d58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3D58u;
    {
        const bool branch_taken_0x1c3d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d58) {
            ctx->pc = 0x1C3D68u;
            goto label_1c3d68;
        }
    }
    ctx->pc = 0x1C3D60u;
    // 0x1c3d60: 0xc070ec2  jal         func_1C3B08
    ctx->pc = 0x1C3D60u;
    SET_GPR_U32(ctx, 31, 0x1C3D68u);
    ctx->pc = 0x1C3B08u;
    if (runtime->hasFunction(0x1C3B08u)) {
        auto targetFn = runtime->lookupFunction(0x1C3B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D68u; }
        if (ctx->pc != 0x1C3D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3B08_0x1c3b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D68u; }
        if (ctx->pc != 0x1C3D68u) { return; }
    }
    ctx->pc = 0x1C3D68u;
label_1c3d68:
    // 0x1c3d68: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3D68u;
    {
        const bool branch_taken_0x1c3d68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d68) {
            ctx->pc = 0x1C3D80u;
            goto label_1c3d80;
        }
    }
    ctx->pc = 0x1C3D70u;
    // 0x1c3d70: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3D70u;
    {
        const bool branch_taken_0x1c3d70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d70) {
            ctx->pc = 0x1C3D80u;
            goto label_1c3d80;
        }
    }
    ctx->pc = 0x1C3D78u;
    // 0x1c3d78: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3D78u;
    {
        const bool branch_taken_0x1c3d78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d78) {
            ctx->pc = 0x1C3D88u;
            goto label_1c3d88;
        }
    }
    ctx->pc = 0x1C3D80u;
label_1c3d80:
    // 0x1c3d80: 0xc070ec2  jal         func_1C3B08
    ctx->pc = 0x1C3D80u;
    SET_GPR_U32(ctx, 31, 0x1C3D88u);
    ctx->pc = 0x1C3B08u;
    if (runtime->hasFunction(0x1C3B08u)) {
        auto targetFn = runtime->lookupFunction(0x1C3B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D88u; }
        if (ctx->pc != 0x1C3D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3B08_0x1c3b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D88u; }
        if (ctx->pc != 0x1C3D88u) { return; }
    }
    ctx->pc = 0x1C3D88u;
label_1c3d88:
    // 0x1c3d88: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1C3D88u;
    {
        const bool branch_taken_0x1c3d88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D88u;
            // 0x1c3d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d88) {
            ctx->pc = 0x1C3E6Cu;
            goto label_1c3e6c;
        }
    }
    ctx->pc = 0x1C3D90u;
    // 0x1c3d90: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3D90u;
    {
        const bool branch_taken_0x1c3d90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D90u;
            // 0x1c3d94: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d90) {
            ctx->pc = 0x1C3DA8u;
            goto label_1c3da8;
        }
    }
    ctx->pc = 0x1C3D98u;
    // 0x1c3d98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3D9Cu;
    {
        const bool branch_taken_0x1c3d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D9Cu;
            // 0x1c3da0: 0x2484a000  addiu       $a0, $a0, -0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d9c) {
            ctx->pc = 0x1C3DBCu;
            goto label_1c3dbc;
        }
    }
    ctx->pc = 0x1C3DA4u;
    // 0x1c3da4: 0x0  nop
    ctx->pc = 0x1c3da4u;
    // NOP
label_1c3da8:
    // 0x1c3da8: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3DA8u;
    {
        const bool branch_taken_0x1c3da8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DA8u;
            // 0x1c3dac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3da8) {
            ctx->pc = 0x1C3DD0u;
            goto label_1c3dd0;
        }
    }
    ctx->pc = 0x1C3DB0u;
    // 0x1c3db0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c3db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c3db4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3db8: 0x2484a030  addiu       $a0, $a0, -0x5FD0
    ctx->pc = 0x1c3db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942768));
label_1c3dbc:
    // 0x1c3dbc: 0xc06d1f4  jal         func_1B47D0
    ctx->pc = 0x1C3DBCu;
    SET_GPR_U32(ctx, 31, 0x1C3DC4u);
    ctx->pc = 0x1B47D0u;
    if (runtime->hasFunction(0x1B47D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B47D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DC4u; }
        if (ctx->pc != 0x1C3DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B47D0_0x1b47d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DC4u; }
        if (ctx->pc != 0x1C3DC4u) { return; }
    }
    ctx->pc = 0x1C3DC4u;
label_1c3dc4:
    // 0x1c3dc4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1C3DC4u;
    {
        const bool branch_taken_0x1c3dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DC4u;
            // 0x1c3dc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3dc4) {
            ctx->pc = 0x1C3E6Cu;
            goto label_1c3e6c;
        }
    }
    ctx->pc = 0x1C3DCCu;
    // 0x1c3dcc: 0x0  nop
    ctx->pc = 0x1c3dccu;
    // NOP
label_1c3dd0:
    // 0x1c3dd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3dd4: 0x26945b00  addiu       $s4, $s4, 0x5B00
    ctx->pc = 0x1c3dd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 23296));
    // 0x1c3dd8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1C3DD8u;
    SET_GPR_U32(ctx, 31, 0x1C3DE0u);
    ctx->pc = 0x1C3DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DD8u;
            // 0x1c3ddc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DE0u; }
        if (ctx->pc != 0x1C3DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DE0u; }
        if (ctx->pc != 0x1C3DE0u) { return; }
    }
    ctx->pc = 0x1C3DE0u;
label_1c3de0:
    // 0x1c3de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3de4: 0xc070dca  jal         func_1C3728
    ctx->pc = 0x1C3DE4u;
    SET_GPR_U32(ctx, 31, 0x1C3DECu);
    ctx->pc = 0x1C3DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DE4u;
            // 0x1c3de8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3728u;
    if (runtime->hasFunction(0x1C3728u)) {
        auto targetFn = runtime->lookupFunction(0x1C3728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DECu; }
        if (ctx->pc != 0x1C3DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3728_0x1c3728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DECu; }
        if (ctx->pc != 0x1C3DECu) { return; }
    }
    ctx->pc = 0x1C3DECu;
label_1c3dec:
    // 0x1c3dec: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C3DECu;
    {
        const bool branch_taken_0x1c3dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3dec) {
            ctx->pc = 0x1C3DF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DECu;
            // 0x1c3df0: 0x26700009  addiu       $s0, $s3, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3E20u;
            goto label_1c3e20;
        }
    }
    ctx->pc = 0x1C3DF4u;
    // 0x1c3df4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c3df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c3df8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c3df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3dfc: 0xc06d1f4  jal         func_1B47D0
    ctx->pc = 0x1C3DFCu;
    SET_GPR_U32(ctx, 31, 0x1C3E04u);
    ctx->pc = 0x1C3E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DFCu;
            // 0x1c3e00: 0x2484a060  addiu       $a0, $a0, -0x5FA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B47D0u;
    if (runtime->hasFunction(0x1B47D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B47D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E04u; }
        if (ctx->pc != 0x1C3E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B47D0_0x1b47d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E04u; }
        if (ctx->pc != 0x1C3E04u) { return; }
    }
    ctx->pc = 0x1C3E04u;
label_1c3e04:
    // 0x1c3e04: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c3e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c3e08: 0x24a5a088  addiu       $a1, $a1, -0x5F78
    ctx->pc = 0x1c3e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942856));
    // 0x1c3e0c: 0xc0709d4  jal         func_1C2750
    ctx->pc = 0x1C3E0Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E14u);
    ctx->pc = 0x1C3E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E0Cu;
            // 0x1c3e10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2750u;
    if (runtime->hasFunction(0x1C2750u)) {
        auto targetFn = runtime->lookupFunction(0x1C2750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E14u; }
        if (ctx->pc != 0x1C3E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2750_0x1c2750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E14u; }
        if (ctx->pc != 0x1C3E14u) { return; }
    }
    ctx->pc = 0x1C3E14u;
label_1c3e14:
    // 0x1c3e14: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C3E14u;
    {
        const bool branch_taken_0x1c3e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E14u;
            // 0x1c3e18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e14) {
            ctx->pc = 0x1C3E6Cu;
            goto label_1c3e6c;
        }
    }
    ctx->pc = 0x1C3E1Cu;
    // 0x1c3e1c: 0x0  nop
    ctx->pc = 0x1c3e1cu;
    // NOP
label_1c3e20:
    // 0x1c3e20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c3e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e24: 0x230001b  divu        $zero, $s1, $s0
    ctx->pc = 0x1c3e24u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x1c3e28: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x1c3e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1c3e2c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1c3e2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e34: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C3E34u;
    {
        const bool branch_taken_0x1c3e34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3e34) {
            ctx->pc = 0x1C3E38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E34u;
            // 0x1c3e38: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3E3Cu;
            goto label_1c3e3c;
        }
    }
    ctx->pc = 0x1C3E3Cu;
label_1c3e3c:
    // 0x1c3e3c: 0x8812  mflo        $s1
    ctx->pc = 0x1c3e3cu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1c3e40: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c3e40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e44: 0xc070d64  jal         func_1C3590
    ctx->pc = 0x1C3E44u;
    SET_GPR_U32(ctx, 31, 0x1C3E4Cu);
    ctx->pc = 0x1C3E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E44u;
            // 0x1c3e48: 0x1188c0  sll         $s1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3590u;
    if (runtime->hasFunction(0x1C3590u)) {
        auto targetFn = runtime->lookupFunction(0x1C3590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E4Cu; }
        if (ctx->pc != 0x1C3E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3590_0x1c3590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E4Cu; }
        if (ctx->pc != 0x1C3E4Cu) { return; }
    }
    ctx->pc = 0x1C3E4Cu;
label_1c3e4c:
    // 0x1c3e4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e50: 0xc070e2c  jal         func_1C38B0
    ctx->pc = 0x1C3E50u;
    SET_GPR_U32(ctx, 31, 0x1C3E58u);
    ctx->pc = 0x1C3E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E50u;
            // 0x1c3e54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    if (runtime->hasFunction(0x1C38B0u)) {
        auto targetFn = runtime->lookupFunction(0x1C38B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E58u; }
        if (ctx->pc != 0x1C3E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C38B0_0x1c38b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E58u; }
        if (ctx->pc != 0x1C3E58u) { return; }
    }
    ctx->pc = 0x1C3E58u;
label_1c3e58:
    // 0x1c3e58: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C3E58u;
    {
        const bool branch_taken_0x1c3e58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3e58) {
            ctx->pc = 0x1C3E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E58u;
            // 0x1c3e5c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3E60u;
            goto label_1c3e60;
        }
    }
    ctx->pc = 0x1C3E60u;
label_1c3e60:
    // 0x1c3e60: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x1c3e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c3e64: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1c3e64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c3e68: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1c3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1c3e6c:
    // 0x1c3e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3e70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3e74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c3e74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3e78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c3e78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c3e7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c3e7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3e80: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c3e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3e84: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E84u;
            // 0x1c3e88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C3E8Cu;
    // 0x1c3e8c: 0x0  nop
    ctx->pc = 0x1c3e8cu;
    // NOP
    ctx->pc = 0x1c3e90u;
}
