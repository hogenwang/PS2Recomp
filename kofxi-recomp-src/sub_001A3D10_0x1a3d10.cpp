#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3D10
// Address: 0x1a3d10 - 0x1a3db0
void sub_001A3D10_0x1a3d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3D10_0x1a3d10");
#endif

    switch (ctx->pc) {
        case 0x1a3d34u: goto label_1a3d34;
        case 0x1a3d3cu: goto label_1a3d3c;
        case 0x1a3d48u: goto label_1a3d48;
        case 0x1a3d84u: goto label_1a3d84;
        case 0x1a3d90u: goto label_1a3d90;
        case 0x1a3da0u: goto label_1a3da0;
        default: break;
    }

    ctx->pc = 0x1a3d10u;

    // 0x1a3d10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a3d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a3d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3d18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a3d1c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1a3d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a3d20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a3d24: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1a3d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1a3d28: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1a3d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1a3d2c: 0xc043318  jal         func_10CC60
    ctx->pc = 0x1A3D2Cu;
    SET_GPR_U32(ctx, 31, 0x1A3D34u);
    ctx->pc = 0x1A3D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3D2Cu;
            // 0x1a3d30: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (runtime->hasFunction(0x10CC60u)) {
        auto targetFn = runtime->lookupFunction(0x10CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D34u; }
        if (ctx->pc != 0x1A3D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateSemaWrapper_0x10cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D34u; }
        if (ctx->pc != 0x1A3D34u) { return; }
    }
    ctx->pc = 0x1A3D34u;
label_1a3d34:
    // 0x1a3d34: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x1A3D34u;
    SET_GPR_U32(ctx, 31, 0x1A3D3Cu);
    ctx->pc = 0x1A3D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3D34u;
            // 0x1a3d38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D3Cu; }
        if (ctx->pc != 0x1A3D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D3Cu; }
        if (ctx->pc != 0x1A3D3Cu) { return; }
    }
    ctx->pc = 0x1A3D3Cu;
label_1a3d3c:
    // 0x1a3d3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3d40: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1A3D40u;
    SET_GPR_U32(ctx, 31, 0x1A3D48u);
    ctx->pc = 0x1A3D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3D40u;
            // 0x1a3d44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (runtime->hasFunction(0x10CAF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D48u; }
        if (ctx->pc != 0x1A3D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallChangeThreadPriorityWrappers_0x10caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D48u; }
        if (ctx->pc != 0x1A3D48u) { return; }
    }
    ctx->pc = 0x1A3D48u;
label_1a3d48:
    // 0x1a3d48: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x1a3d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1a3d4c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1a3d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1a3d50: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1a3d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1a3d54: 0x2463d6f0  addiu       $v1, $v1, -0x2910
    ctx->pc = 0x1a3d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956784));
    // 0x1a3d58: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a3d5c: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1a3d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x1a3d60: 0x24423c40  addiu       $v0, $v0, 0x3C40
    ctx->pc = 0x1a3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15424));
    // 0x1a3d64: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a3d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a3d68: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1a3d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1a3d6c: 0x246397c0  addiu       $v1, $v1, -0x6840
    ctx->pc = 0x1a3d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940608));
    // 0x1a3d70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3d74: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x1a3d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x1a3d78: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a3d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a3d7c: 0xc043298  jal         func_10CA60
    ctx->pc = 0x1A3D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A3D84u);
    ctx->pc = 0x1A3D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3D7Cu;
            // 0x1a3d80: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA60u;
    if (runtime->hasFunction(0x10CA60u)) {
        auto targetFn = runtime->lookupFunction(0x10CA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D84u; }
        if (ctx->pc != 0x1A3D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateThreadWrapper_0x10ca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D84u; }
        if (ctx->pc != 0x1A3D84u) { return; }
    }
    ctx->pc = 0x1A3D84u;
label_1a3d84:
    // 0x1a3d84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3d88: 0xc043768  jal         func_10DDA0
    ctx->pc = 0x1A3D88u;
    SET_GPR_U32(ctx, 31, 0x1A3D90u);
    ctx->pc = 0x1A3D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3D88u;
            // 0x1a3d8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DDA0u;
    if (runtime->hasFunction(0x10DDA0u)) {
        auto targetFn = runtime->lookupFunction(0x10DDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D90u; }
        if (ctx->pc != 0x1A3D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadStartWithContextInit_0x10dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D90u; }
        if (ctx->pc != 0x1A3D90u) { return; }
    }
    ctx->pc = 0x1A3D90u;
label_1a3d90:
    // 0x1a3d90: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x1a3d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x1a3d94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a3d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3d98: 0xc046cc4  jal         func_11B310
    ctx->pc = 0x1A3D98u;
    SET_GPR_U32(ctx, 31, 0x1A3DA0u);
    ctx->pc = 0x1A3D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3D98u;
            // 0x1a3d9c: 0x24843d00  addiu       $a0, $a0, 0x3D00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B310u;
    if (runtime->hasFunction(0x11B310u)) {
        auto targetFn = runtime->lookupFunction(0x11B310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DA0u; }
        if (ctx->pc != 0x1A3DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B310_0x11b310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DA0u; }
        if (ctx->pc != 0x1A3DA0u) { return; }
    }
    ctx->pc = 0x1A3DA0u;
label_1a3da0:
    // 0x1a3da0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3da8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3DA8u;
            // 0x1a3dac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3DB0u;
    ctx->pc = 0x1a3db0u;
}
