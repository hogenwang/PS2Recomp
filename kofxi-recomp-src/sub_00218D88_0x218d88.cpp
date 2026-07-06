#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00218D88
// Address: 0x218d88 - 0x219008
void sub_00218D88_0x218d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218D88_0x218d88");
#endif

    switch (ctx->pc) {
        case 0x218da4u: goto label_218da4;
        case 0x218db4u: goto label_218db4;
        case 0x218dc4u: goto label_218dc4;
        case 0x218dd4u: goto label_218dd4;
        case 0x218de4u: goto label_218de4;
        case 0x218df4u: goto label_218df4;
        case 0x218e04u: goto label_218e04;
        case 0x218e28u: goto label_218e28;
        case 0x218e6cu: goto label_218e6c;
        case 0x218e80u: goto label_218e80;
        case 0x218e94u: goto label_218e94;
        case 0x218ea8u: goto label_218ea8;
        case 0x218ebcu: goto label_218ebc;
        case 0x218ed0u: goto label_218ed0;
        case 0x218ee4u: goto label_218ee4;
        case 0x218ef4u: goto label_218ef4;
        case 0x218f18u: goto label_218f18;
        case 0x218f5cu: goto label_218f5c;
        case 0x218f70u: goto label_218f70;
        case 0x218f84u: goto label_218f84;
        case 0x218f98u: goto label_218f98;
        case 0x218facu: goto label_218fac;
        case 0x218fc0u: goto label_218fc0;
        case 0x218fd4u: goto label_218fd4;
        case 0x218fdcu: goto label_218fdc;
        default: break;
    }

    ctx->pc = 0x218d88u;

label_218d88:
    // 0x218d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x218d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218d90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x218d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x218d94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x218d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d98: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218d9c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x218D9Cu;
    SET_GPR_U32(ctx, 31, 0x218DA4u);
    ctx->pc = 0x218DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218D9Cu;
            // 0x218da0: 0x24841170  addiu       $a0, $a0, 0x1170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DA4u; }
        if (ctx->pc != 0x218DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DA4u; }
        if (ctx->pc != 0x218DA4u) { return; }
    }
    ctx->pc = 0x218DA4u;
label_218da4:
    // 0x218da4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218da8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x218da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218dac: 0xc043e52  jal         func_10F948
    ctx->pc = 0x218DACu;
    SET_GPR_U32(ctx, 31, 0x218DB4u);
    ctx->pc = 0x218DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218DACu;
            // 0x218db0: 0x24841190  addiu       $a0, $a0, 0x1190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DB4u; }
        if (ctx->pc != 0x218DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DB4u; }
        if (ctx->pc != 0x218DB4u) { return; }
    }
    ctx->pc = 0x218DB4u;
label_218db4:
    // 0x218db4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218db8: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x218db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x218dbc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x218DBCu;
    SET_GPR_U32(ctx, 31, 0x218DC4u);
    ctx->pc = 0x218DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218DBCu;
            // 0x218dc0: 0x248411a0  addiu       $a0, $a0, 0x11A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DC4u; }
        if (ctx->pc != 0x218DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DC4u; }
        if (ctx->pc != 0x218DC4u) { return; }
    }
    ctx->pc = 0x218DC4u;
label_218dc4:
    // 0x218dc4: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x218dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x218dc8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218dcc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x218DCCu;
    SET_GPR_U32(ctx, 31, 0x218DD4u);
    ctx->pc = 0x218DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218DCCu;
            // 0x218dd0: 0x248411b0  addiu       $a0, $a0, 0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DD4u; }
        if (ctx->pc != 0x218DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DD4u; }
        if (ctx->pc != 0x218DD4u) { return; }
    }
    ctx->pc = 0x218DD4u;
label_218dd4:
    // 0x218dd4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218dd8: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x218dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x218ddc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x218DDCu;
    SET_GPR_U32(ctx, 31, 0x218DE4u);
    ctx->pc = 0x218DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218DDCu;
            // 0x218de0: 0x248411c0  addiu       $a0, $a0, 0x11C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DE4u; }
        if (ctx->pc != 0x218DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DE4u; }
        if (ctx->pc != 0x218DE4u) { return; }
    }
    ctx->pc = 0x218DE4u;
label_218de4:
    // 0x218de4: 0x8e050150  lw          $a1, 0x150($s0)
    ctx->pc = 0x218de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x218de8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218dec: 0xc043e52  jal         func_10F948
    ctx->pc = 0x218DECu;
    SET_GPR_U32(ctx, 31, 0x218DF4u);
    ctx->pc = 0x218DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218DECu;
            // 0x218df0: 0x248411d0  addiu       $a0, $a0, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DF4u; }
        if (ctx->pc != 0x218DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DF4u; }
        if (ctx->pc != 0x218DF4u) { return; }
    }
    ctx->pc = 0x218DF4u;
label_218df4:
    // 0x218df4: 0x8e050154  lw          $a1, 0x154($s0)
    ctx->pc = 0x218df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x218df8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218dfc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x218DFCu;
    SET_GPR_U32(ctx, 31, 0x218E04u);
    ctx->pc = 0x218E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218DFCu;
            // 0x218e00: 0x248411e0  addiu       $a0, $a0, 0x11E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E04u; }
        if (ctx->pc != 0x218E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E04u; }
        if (ctx->pc != 0x218E04u) { return; }
    }
    ctx->pc = 0x218E04u;
label_218e04:
    // 0x218e04: 0x26100158  addiu       $s0, $s0, 0x158
    ctx->pc = 0x218e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x218e08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x218e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218e0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x218e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218e10: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218e14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218e14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218e18: 0x248411f0  addiu       $a0, $a0, 0x11F0
    ctx->pc = 0x218e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4592));
    // 0x218e1c: 0x8043e52  j           func_10F948
    ctx->pc = 0x218E1Cu;
    ctx->pc = 0x218E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218E1Cu;
            // 0x218e20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x218E24u;
    // 0x218e24: 0x0  nop
    ctx->pc = 0x218e24u;
    // NOP
label_218e28:
    // 0x218e28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218e2c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x218e2cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x218e30: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x218e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x218e34: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x218e34u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x218e38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x218e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218e3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x218e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x218e40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x218e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x218e44: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x218e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218e48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x218e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x218e4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x218e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218e50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x218e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x218e54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x218e54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218e58: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x218e58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218e5c: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x218e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x218e60: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x218e60u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x218e64: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x218E64u;
    SET_GPR_U32(ctx, 31, 0x218E6Cu);
    ctx->pc = 0x218E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218E64u;
            // 0x218e68: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E6Cu; }
        if (ctx->pc != 0x218E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E6Cu; }
        if (ctx->pc != 0x218E6Cu) { return; }
    }
    ctx->pc = 0x218E6Cu;
label_218e6c:
    // 0x218e6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218e70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x218e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218e74: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x218e74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218e78: 0xc08449a  jal         func_211268
    ctx->pc = 0x218E78u;
    SET_GPR_U32(ctx, 31, 0x218E80u);
    ctx->pc = 0x218E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218E78u;
            // 0x218e7c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E80u; }
        if (ctx->pc != 0x218E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E80u; }
        if (ctx->pc != 0x218E80u) { return; }
    }
    ctx->pc = 0x218E80u;
label_218e80:
    // 0x218e80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218e84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x218e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218e88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x218e88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218e8c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x218E8Cu;
    SET_GPR_U32(ctx, 31, 0x218E94u);
    ctx->pc = 0x218E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218E8Cu;
            // 0x218e90: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E94u; }
        if (ctx->pc != 0x218E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E94u; }
        if (ctx->pc != 0x218E94u) { return; }
    }
    ctx->pc = 0x218E94u;
label_218e94:
    // 0x218e94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218e98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x218e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218e9c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x218e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ea0: 0xc08449a  jal         func_211268
    ctx->pc = 0x218EA0u;
    SET_GPR_U32(ctx, 31, 0x218EA8u);
    ctx->pc = 0x218EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218EA0u;
            // 0x218ea4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EA8u; }
        if (ctx->pc != 0x218EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EA8u; }
        if (ctx->pc != 0x218EA8u) { return; }
    }
    ctx->pc = 0x218EA8u;
label_218ea8:
    // 0x218ea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218eac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x218eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218eb0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x218eb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218eb4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x218EB4u;
    SET_GPR_U32(ctx, 31, 0x218EBCu);
    ctx->pc = 0x218EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218EB4u;
            // 0x218eb8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EBCu; }
        if (ctx->pc != 0x218EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EBCu; }
        if (ctx->pc != 0x218EBCu) { return; }
    }
    ctx->pc = 0x218EBCu;
label_218ebc:
    // 0x218ebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ec0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x218ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ec4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x218ec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ec8: 0xc0844dc  jal         func_211370
    ctx->pc = 0x218EC8u;
    SET_GPR_U32(ctx, 31, 0x218ED0u);
    ctx->pc = 0x218ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218EC8u;
            // 0x218ecc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218ED0u; }
        if (ctx->pc != 0x218ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218ED0u; }
        if (ctx->pc != 0x218ED0u) { return; }
    }
    ctx->pc = 0x218ED0u;
label_218ed0:
    // 0x218ed0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x218ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ed4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x218ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ed8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218edc: 0xc08449a  jal         func_211268
    ctx->pc = 0x218EDCu;
    SET_GPR_U32(ctx, 31, 0x218EE4u);
    ctx->pc = 0x218EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218EDCu;
            // 0x218ee0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EE4u; }
        if (ctx->pc != 0x218EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EE4u; }
        if (ctx->pc != 0x218EE4u) { return; }
    }
    ctx->pc = 0x218EE4u;
label_218ee4:
    // 0x218ee4: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x218ee4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218ee8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x218ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218eec: 0xc086362  jal         func_218D88
    ctx->pc = 0x218EECu;
    SET_GPR_U32(ctx, 31, 0x218EF4u);
    ctx->pc = 0x218EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218EECu;
            // 0x218ef0: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218D88u;
    goto label_218d88;
    ctx->pc = 0x218EF4u;
label_218ef4:
    // 0x218ef4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x218ef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218efc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x218efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218f00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x218f00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218f04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x218f04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x218f08: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x218f08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218f0c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x218f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x218f10: 0x3e00008  jr          $ra
    ctx->pc = 0x218F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218F10u;
            // 0x218f14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x218F18u;
label_218f18:
    // 0x218f18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218f1c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x218f1cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x218f20: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x218f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x218f24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x218f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218f28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x218f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x218f2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x218f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x218f30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x218f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x218f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x218f38: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x218f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f3c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x218f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x218f40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x218f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f44: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x218f44u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x218f48: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218f48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f4c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x218f4cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x218f50: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x218f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x218f54: 0xc084582  jal         func_211608
    ctx->pc = 0x218F54u;
    SET_GPR_U32(ctx, 31, 0x218F5Cu);
    ctx->pc = 0x218F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218F54u;
            // 0x218f58: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (runtime->hasFunction(0x211608u)) {
        auto targetFn = runtime->lookupFunction(0x211608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F5Cu; }
        if (ctx->pc != 0x218F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211608_0x211608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F5Cu; }
        if (ctx->pc != 0x218F5Cu) { return; }
    }
    ctx->pc = 0x218F5Cu;
label_218f5c:
    // 0x218f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x218f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f64: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218f64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f68: 0xc0845c2  jal         func_211708
    ctx->pc = 0x218F68u;
    SET_GPR_U32(ctx, 31, 0x218F70u);
    ctx->pc = 0x218F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218F68u;
            // 0x218f6c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F70u; }
        if (ctx->pc != 0x218F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F70u; }
        if (ctx->pc != 0x218F70u) { return; }
    }
    ctx->pc = 0x218F70u;
label_218f70:
    // 0x218f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x218f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f78: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218f78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f7c: 0xc084612  jal         func_211848
    ctx->pc = 0x218F7Cu;
    SET_GPR_U32(ctx, 31, 0x218F84u);
    ctx->pc = 0x218F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218F7Cu;
            // 0x218f80: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F84u; }
        if (ctx->pc != 0x218F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F84u; }
        if (ctx->pc != 0x218F84u) { return; }
    }
    ctx->pc = 0x218F84u;
label_218f84:
    // 0x218f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x218f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f8c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f90: 0xc0845c2  jal         func_211708
    ctx->pc = 0x218F90u;
    SET_GPR_U32(ctx, 31, 0x218F98u);
    ctx->pc = 0x218F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218F90u;
            // 0x218f94: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F98u; }
        if (ctx->pc != 0x218F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F98u; }
        if (ctx->pc != 0x218F98u) { return; }
    }
    ctx->pc = 0x218F98u;
label_218f98:
    // 0x218f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x218f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218fa0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218fa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218fa4: 0xc084612  jal         func_211848
    ctx->pc = 0x218FA4u;
    SET_GPR_U32(ctx, 31, 0x218FACu);
    ctx->pc = 0x218FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218FA4u;
            // 0x218fa8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FACu; }
        if (ctx->pc != 0x218FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FACu; }
        if (ctx->pc != 0x218FACu) { return; }
    }
    ctx->pc = 0x218FACu;
label_218fac:
    // 0x218fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218fb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x218fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218fb4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218fb8: 0xc084612  jal         func_211848
    ctx->pc = 0x218FB8u;
    SET_GPR_U32(ctx, 31, 0x218FC0u);
    ctx->pc = 0x218FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218FB8u;
            // 0x218fbc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FC0u; }
        if (ctx->pc != 0x218FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FC0u; }
        if (ctx->pc != 0x218FC0u) { return; }
    }
    ctx->pc = 0x218FC0u;
label_218fc0:
    // 0x218fc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x218fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218fc4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218fc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218fcc: 0xc0845c2  jal         func_211708
    ctx->pc = 0x218FCCu;
    SET_GPR_U32(ctx, 31, 0x218FD4u);
    ctx->pc = 0x218FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218FCCu;
            // 0x218fd0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FD4u; }
        if (ctx->pc != 0x218FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FD4u; }
        if (ctx->pc != 0x218FD4u) { return; }
    }
    ctx->pc = 0x218FD4u;
label_218fd4:
    // 0x218fd4: 0xc086362  jal         func_218D88
    ctx->pc = 0x218FD4u;
    SET_GPR_U32(ctx, 31, 0x218FDCu);
    ctx->pc = 0x218FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218FD4u;
            // 0x218fd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218D88u;
    goto label_218d88;
    ctx->pc = 0x218FDCu;
label_218fdc:
    // 0x218fdc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x218fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x218fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218fe4: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x218fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x218fe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x218fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218fec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x218fecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218ff0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x218ff0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x218ff4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x218ff4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218ff8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x218ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x218ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x218FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218FFCu;
            // 0x219000: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219004u;
    // 0x219004: 0x0  nop
    ctx->pc = 0x219004u;
    // NOP
    ctx->pc = 0x219008u;
}
