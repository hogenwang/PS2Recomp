#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D3D08
// Address: 0x2d3d08 - 0x2d3e20
void sub_002D3D08_0x2d3d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3D08_0x2d3d08");
#endif

    switch (ctx->pc) {
        case 0x2d3d58u: goto label_2d3d58;
        case 0x2d3d60u: goto label_2d3d60;
        case 0x2d3d70u: goto label_2d3d70;
        case 0x2d3d88u: goto label_2d3d88;
        case 0x2d3d9cu: goto label_2d3d9c;
        case 0x2d3dc0u: goto label_2d3dc0;
        case 0x2d3de8u: goto label_2d3de8;
        default: break;
    }

    ctx->pc = 0x2d3d08u;

    // 0x2d3d08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d3d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d3d0c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d3d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d3d10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d3d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d14: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d3d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d3d18: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2d3d18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d1c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d3d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d3d20: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2d3d20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d24: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d3d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2d3d28: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2d3d28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d2c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2d3d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2d3d30: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d3d30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d34: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d3d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d3d38: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2d3d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d3c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2d3d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2d3d40: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2d3d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2d3d44: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d3d48: 0x8cf60000  lw          $s6, 0x0($a3)
    ctx->pc = 0x2d3d48u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d3d4c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D3D4Cu;
    {
        const bool branch_taken_0x2d3d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3D4Cu;
            // 0x2d3d50: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3d4c) {
            ctx->pc = 0x2D3D90u;
            goto label_2d3d90;
        }
    }
    ctx->pc = 0x2D3D54u;
    // 0x2d3d54: 0x0  nop
    ctx->pc = 0x2d3d54u;
    // NOP
label_2d3d58:
    // 0x2d3d58: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d3d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3d5c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2d3d5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2d3d60:
    // 0x2d3d60: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2d3d60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2d3d64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d3d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d68: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D3D68u;
    SET_GPR_U32(ctx, 31, 0x2D3D70u);
    ctx->pc = 0x2D3D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3D68u;
            // 0x2d3d6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (runtime->hasFunction(0x2CFBF8u)) {
        auto targetFn = runtime->lookupFunction(0x2CFBF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3D70u; }
        if (ctx->pc != 0x2D3D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFBF8_0x2cfbf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3D70u; }
        if (ctx->pc != 0x2D3D70u) { return; }
    }
    ctx->pc = 0x2D3D70u;
label_2d3d70:
    // 0x2d3d70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d3d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d78: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D3D78u;
    {
        const bool branch_taken_0x2d3d78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3D78u;
            // 0x2d3d7c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3d78) {
            ctx->pc = 0x2D3DF0u;
            goto label_2d3df0;
        }
    }
    ctx->pc = 0x2D3D80u;
    // 0x2d3d80: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D3D80u;
    SET_GPR_U32(ctx, 31, 0x2D3D88u);
    ctx->pc = 0x2CFBF8u;
    if (runtime->hasFunction(0x2CFBF8u)) {
        auto targetFn = runtime->lookupFunction(0x2CFBF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3D88u; }
        if (ctx->pc != 0x2D3D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFBF8_0x2cfbf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3D88u; }
        if (ctx->pc != 0x2D3D88u) { return; }
    }
    ctx->pc = 0x2D3D88u;
label_2d3d88:
    // 0x2d3d88: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D3D88u;
    {
        const bool branch_taken_0x2d3d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3D88u;
            // 0x2d3d8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3d88) {
            ctx->pc = 0x2D3DF0u;
            goto label_2d3df0;
        }
    }
    ctx->pc = 0x2D3D90u;
label_2d3d90:
    // 0x2d3d90: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d3d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d94: 0xc0b495a  jal         func_2D2568
    ctx->pc = 0x2D3D94u;
    SET_GPR_U32(ctx, 31, 0x2D3D9Cu);
    ctx->pc = 0x2D3D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3D94u;
            // 0x2d3d98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2568u;
    if (runtime->hasFunction(0x2D2568u)) {
        auto targetFn = runtime->lookupFunction(0x2D2568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3D9Cu; }
        if (ctx->pc != 0x2D3D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2568_0x2d2568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3D9Cu; }
        if (ctx->pc != 0x2D3D9Cu) { return; }
    }
    ctx->pc = 0x2D3D9Cu;
label_2d3d9c:
    // 0x2d3d9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3da0: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D3DA0u;
    {
        const bool branch_taken_0x2d3da0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3DA0u;
            // 0x2d3da4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3da0) {
            ctx->pc = 0x2D3DF4u;
            goto label_2d3df4;
        }
    }
    ctx->pc = 0x2D3DA8u;
    // 0x2d3da8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d3dac: 0x1056000a  beq         $v0, $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x2D3DACu;
    {
        const bool branch_taken_0x2d3dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x2D3DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3DACu;
            // 0x2d3db0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3dac) {
            ctx->pc = 0x2D3DD8u;
            goto label_2d3dd8;
        }
    }
    ctx->pc = 0x2D3DB4u;
    // 0x2d3db4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d3db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3db8: 0xc0b3f3e  jal         func_2CFCF8
    ctx->pc = 0x2D3DB8u;
    SET_GPR_U32(ctx, 31, 0x2D3DC0u);
    ctx->pc = 0x2D3DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3DB8u;
            // 0x2d3dbc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCF8u;
    if (runtime->hasFunction(0x2CFCF8u)) {
        auto targetFn = runtime->lookupFunction(0x2CFCF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3DC0u; }
        if (ctx->pc != 0x2D3DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFCF8_0x2cfcf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3DC0u; }
        if (ctx->pc != 0x2D3DC0u) { return; }
    }
    ctx->pc = 0x2D3DC0u;
label_2d3dc0:
    // 0x2d3dc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3dc4: 0x5600000b  bnel        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2D3DC4u;
    {
        const bool branch_taken_0x2d3dc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3dc4) {
            ctx->pc = 0x2D3DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3DC4u;
            // 0x2d3dc8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D3DF4u;
            goto label_2d3df4;
        }
    }
    ctx->pc = 0x2D3DCCu;
    // 0x2d3dcc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d3dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d3dd0: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x2D3DD0u;
    {
        const bool branch_taken_0x2d3dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3DD0u;
            // 0x2d3dd4: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3dd0) {
            ctx->pc = 0x2D3D60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d3d60;
        }
    }
    ctx->pc = 0x2D3DD8u;
label_2d3dd8:
    // 0x2d3dd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d3dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ddc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d3ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3de0: 0xc0b4f88  jal         func_2D3E20
    ctx->pc = 0x2D3DE0u;
    SET_GPR_U32(ctx, 31, 0x2D3DE8u);
    ctx->pc = 0x2D3DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3DE0u;
            // 0x2d3de4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D3E20u;
    if (runtime->hasFunction(0x2D3E20u)) {
        auto targetFn = runtime->lookupFunction(0x2D3E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3DE8u; }
        if (ctx->pc != 0x2D3DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D3E20_0x2d3e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3DE8u; }
        if (ctx->pc != 0x2D3DE8u) { return; }
    }
    ctx->pc = 0x2D3DE8u;
label_2d3de8:
    // 0x2d3de8: 0x5050ffdb  beql        $v0, $s0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2D3DE8u;
    {
        const bool branch_taken_0x2d3de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2d3de8) {
            ctx->pc = 0x2D3DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3DE8u;
            // 0x2d3dec: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D3D58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d3d58;
        }
    }
    ctx->pc = 0x2D3DF0u;
label_2d3df0:
    // 0x2d3df0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d3df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d3df4:
    // 0x2d3df4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d3df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3df8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d3df8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3dfc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d3dfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3e00: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d3e00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d3e04: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d3e04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3e08: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2d3e08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d3e0c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2d3e0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3e10: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d3e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d3e14: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3E14u;
            // 0x2d3e18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D3E1Cu;
    // 0x2d3e1c: 0x0  nop
    ctx->pc = 0x2d3e1cu;
    // NOP
    ctx->pc = 0x2d3e20u;
}
