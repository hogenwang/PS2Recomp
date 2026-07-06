#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7D60
// Address: 0x1a7d60 - 0x1a7eb8
void sub_001A7D60_0x1a7d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7D60_0x1a7d60");
#endif

    switch (ctx->pc) {
        case 0x1a7e5cu: goto label_1a7e5c;
        case 0x1a7e70u: goto label_1a7e70;
        case 0x1a7e74u: goto label_1a7e74;
        case 0x1a7e98u: goto label_1a7e98;
        case 0x1a7eacu: goto label_1a7eac;
        default: break;
    }

    ctx->pc = 0x1a7d60u;

    // 0x1a7d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a7d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7d64: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x1a7d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x1a7d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7d6c: 0x9063b282  lbu         $v1, -0x4D7E($v1)
    ctx->pc = 0x1a7d6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947458)));
    // 0x1a7d70: 0x5060004f  beql        $v1, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x1A7D70u;
    {
        const bool branch_taken_0x1a7d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7d70) {
            ctx->pc = 0x1A7D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D70u;
            // 0x1a7d74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7EB0u;
            goto label_1a7eb0;
        }
    }
    ctx->pc = 0x1A7D78u;
    // 0x1a7d78: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7d7c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a7d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a7d80: 0x7c40fc50  sq          $zero, -0x3B0($v0)
    ctx->pc = 0x1a7d80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294966352), GPR_VEC(ctx, 0));
    // 0x1a7d84: 0x34650005  ori         $a1, $v1, 0x5
    ctx->pc = 0x1a7d84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x1a7d88: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7d8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a7d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a7d90: 0xac45fc50  sw          $a1, -0x3B0($v0)
    ctx->pc = 0x1a7d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966352), GPR_U32(ctx, 5));
    // 0x1a7d94: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a7d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a7d98: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1a7d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a7d9c: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7da0: 0xfc43fc60  sd          $v1, -0x3A0($v0)
    ctx->pc = 0x1a7da0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294966368), GPR_U64(ctx, 3));
    // 0x1a7da4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1a7da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a7da8: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7dac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7DACu;
    {
        const bool branch_taken_0x1a7dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7DACu;
            // 0x1a7db0: 0xfc43fc68  sd          $v1, -0x398($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294966376), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7dac) {
            ctx->pc = 0x1A7DBCu;
            goto label_1a7dbc;
        }
    }
    ctx->pc = 0x1A7DB4u;
    // 0x1a7db4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7DB4u;
    {
        const bool branch_taken_0x1a7db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7DB4u;
            // 0x1a7db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7db4) {
            ctx->pc = 0x1A7DC0u;
            goto label_1a7dc0;
        }
    }
    ctx->pc = 0x1A7DBCu;
label_1a7dbc:
    // 0x1a7dbc: 0x24021180  addiu       $v0, $zero, 0x1180
    ctx->pc = 0x1a7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4480));
label_1a7dc0:
    // 0x1a7dc0: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1a7dc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7dc4: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x1a7dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x1a7dc8: 0x34a22300  ori         $v0, $a1, 0x2300
    ctx->pc = 0x1a7dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8960);
    // 0x1a7dcc: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1a7dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a7dd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a7dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7dd4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1a7dd4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1a7dd8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1a7dd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1a7ddc: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7de0: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7de4: 0xfc44fc78  sd          $a0, -0x388($v0)
    ctx->pc = 0x1a7de4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294966392), GPR_U64(ctx, 4));
    // 0x1a7de8: 0xc51025  or          $v0, $a2, $a1
    ctx->pc = 0x1a7de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1a7dec: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x1a7decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1a7df0: 0xfc62fc70  sd          $v0, -0x390($v1)
    ctx->pc = 0x1a7df0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294966384), GPR_U64(ctx, 2));
    // 0x1a7df4: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x1a7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1a7df8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a7df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7dfc: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x1a7dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1a7e00: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1a7e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a7e04: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7e08: 0xfc43fc80  sd          $v1, -0x380($v0)
    ctx->pc = 0x1a7e08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294966400), GPR_U64(ctx, 3));
    // 0x1a7e0c: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7e10: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7e14: 0xfc64fc88  sd          $a0, -0x378($v1)
    ctx->pc = 0x1a7e14u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294966408), GPR_U64(ctx, 4));
    // 0x1a7e18: 0xfc40fc90  sd          $zero, -0x370($v0)
    ctx->pc = 0x1a7e18u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294966416), GPR_U64(ctx, 0));
    // 0x1a7e1c: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x1a7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1a7e20: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7e24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a7e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7e28: 0xfc43fc98  sd          $v1, -0x368($v0)
    ctx->pc = 0x1a7e28u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294966424), GPR_U64(ctx, 3));
    // 0x1a7e2c: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7e30: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x1a7e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1a7e34: 0xfc44fca0  sd          $a0, -0x360($v0)
    ctx->pc = 0x1a7e34u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294966432), GPR_U64(ctx, 4));
    // 0x1a7e38: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7e3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a7e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e40: 0xfc43fca8  sd          $v1, -0x358($v0)
    ctx->pc = 0x1a7e40u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294966440), GPR_U64(ctx, 3));
    // 0x1a7e44: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7e48: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1a7e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1a7e4c: 0x7c40fcb0  sq          $zero, -0x350($v0)
    ctx->pc = 0x1a7e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294966448), GPR_VEC(ctx, 0));
    // 0x1a7e50: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7e54: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1A7E54u;
    SET_GPR_U32(ctx, 31, 0x1A7E5Cu);
    ctx->pc = 0x1A7E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E54u;
            // 0x1a7e58: 0xac43fcb0  sw          $v1, -0x350($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294966448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E5Cu; }
        if (ctx->pc != 0x1A7E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E5Cu; }
        if (ctx->pc != 0x1A7E5Cu) { return; }
    }
    ctx->pc = 0x1A7E5Cu;
label_1a7e5c:
    // 0x1a7e5c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a7e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a7e60: 0x3c0501bf  lui         $a1, 0x1BF
    ctx->pc = 0x1a7e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)447 << 16));
    // 0x1a7e64: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x1a7e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x1a7e68: 0xc040a04  jal         func_102810
    ctx->pc = 0x1A7E68u;
    SET_GPR_U32(ctx, 31, 0x1A7E70u);
    ctx->pc = 0x1A7E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E68u;
            // 0x1a7e6c: 0x24a5fc50  addiu       $a1, $a1, -0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (runtime->hasFunction(0x102810u)) {
        auto targetFn = runtime->lookupFunction(0x102810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E70u; }
        if (ctx->pc != 0x1A7E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102810_0x102810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E70u; }
        if (ctx->pc != 0x1A7E70u) { return; }
    }
    ctx->pc = 0x1A7E70u;
label_1a7e70:
    // 0x1a7e70: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x1a7e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
label_1a7e74:
    // 0x1a7e74: 0x8c43a000  lw          $v1, -0x6000($v0)
    ctx->pc = 0x1a7e74u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294942720))); // MMIO: 0x1000a000
    // 0x1a7e78: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1a7e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1a7e7c: 0x0  nop
    ctx->pc = 0x1a7e7cu;
    // NOP
    // 0x1a7e80: 0x0  nop
    ctx->pc = 0x1a7e80u;
    // NOP
    // 0x1a7e84: 0x0  nop
    ctx->pc = 0x1a7e84u;
    // NOP
    // 0x1a7e88: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A7E88u;
    {
        const bool branch_taken_0x1a7e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7e88) {
            ctx->pc = 0x1A7E74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a7e74;
        }
    }
    ctx->pc = 0x1A7E90u;
    // 0x1a7e90: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1A7E90u;
    SET_GPR_U32(ctx, 31, 0x1A7E98u);
    ctx->pc = 0x1A7E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E90u;
            // 0x1a7e94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E98u; }
        if (ctx->pc != 0x1A7E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E98u; }
        if (ctx->pc != 0x1A7E98u) { return; }
    }
    ctx->pc = 0x1A7E98u;
label_1a7e98:
    // 0x1a7e98: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a7e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a7e9c: 0x3c0501bf  lui         $a1, 0x1BF
    ctx->pc = 0x1a7e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)447 << 16));
    // 0x1a7ea0: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x1a7ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x1a7ea4: 0xc040a04  jal         func_102810
    ctx->pc = 0x1A7EA4u;
    SET_GPR_U32(ctx, 31, 0x1A7EACu);
    ctx->pc = 0x1A7EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7EA4u;
            // 0x1a7ea8: 0x24a5fcc0  addiu       $a1, $a1, -0x340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (runtime->hasFunction(0x102810u)) {
        auto targetFn = runtime->lookupFunction(0x102810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7EACu; }
        if (ctx->pc != 0x1A7EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102810_0x102810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7EACu; }
        if (ctx->pc != 0x1A7EACu) { return; }
    }
    ctx->pc = 0x1A7EACu;
label_1a7eac:
    // 0x1a7eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7eb0:
    // 0x1a7eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7EB0u;
            // 0x1a7eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7EB8u;
    ctx->pc = 0x1a7eb8u;
}
