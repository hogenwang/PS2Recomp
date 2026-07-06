#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00215DD0
// Address: 0x215dd0 - 0x215fe0
void sub_00215DD0_0x215dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215DD0_0x215dd0");
#endif

    switch (ctx->pc) {
        case 0x215decu: goto label_215dec;
        case 0x215dfcu: goto label_215dfc;
        case 0x215e0cu: goto label_215e0c;
        case 0x215e1cu: goto label_215e1c;
        case 0x215e40u: goto label_215e40;
        case 0x215e84u: goto label_215e84;
        case 0x215e98u: goto label_215e98;
        case 0x215eacu: goto label_215eac;
        case 0x215ec0u: goto label_215ec0;
        case 0x215ed0u: goto label_215ed0;
        case 0x215ee8u: goto label_215ee8;
        case 0x215f10u: goto label_215f10;
        case 0x215f54u: goto label_215f54;
        case 0x215f68u: goto label_215f68;
        case 0x215f7cu: goto label_215f7c;
        case 0x215f90u: goto label_215f90;
        case 0x215fa0u: goto label_215fa0;
        case 0x215fb4u: goto label_215fb4;
        default: break;
    }

    ctx->pc = 0x215dd0u;

label_215dd0:
    // 0x215dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215dd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x215dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x215ddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x215ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215de0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215de4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x215DE4u;
    SET_GPR_U32(ctx, 31, 0x215DECu);
    ctx->pc = 0x215DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215DE4u;
            // 0x215de8: 0x24840bf8  addiu       $a0, $a0, 0xBF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215DECu; }
        if (ctx->pc != 0x215DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215DECu; }
        if (ctx->pc != 0x215DECu) { return; }
    }
    ctx->pc = 0x215DECu;
label_215dec:
    // 0x215dec: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x215decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215df0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215df4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x215DF4u;
    SET_GPR_U32(ctx, 31, 0x215DFCu);
    ctx->pc = 0x215DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215DF4u;
            // 0x215df8: 0x24840928  addiu       $a0, $a0, 0x928 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215DFCu; }
        if (ctx->pc != 0x215DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215DFCu; }
        if (ctx->pc != 0x215DFCu) { return; }
    }
    ctx->pc = 0x215DFCu;
label_215dfc:
    // 0x215dfc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x215dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x215e00: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215e04: 0xc043e52  jal         func_10F948
    ctx->pc = 0x215E04u;
    SET_GPR_U32(ctx, 31, 0x215E0Cu);
    ctx->pc = 0x215E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215E04u;
            // 0x215e08: 0x24840ba8  addiu       $a0, $a0, 0xBA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E0Cu; }
        if (ctx->pc != 0x215E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E0Cu; }
        if (ctx->pc != 0x215E0Cu) { return; }
    }
    ctx->pc = 0x215E0Cu;
label_215e0c:
    // 0x215e0c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x215e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x215e10: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215e14: 0xc043e52  jal         func_10F948
    ctx->pc = 0x215E14u;
    SET_GPR_U32(ctx, 31, 0x215E1Cu);
    ctx->pc = 0x215E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215E14u;
            // 0x215e18: 0x24840bb8  addiu       $a0, $a0, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E1Cu; }
        if (ctx->pc != 0x215E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E1Cu; }
        if (ctx->pc != 0x215E1Cu) { return; }
    }
    ctx->pc = 0x215E1Cu;
label_215e1c:
    // 0x215e1c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x215e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x215e20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x215e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215e28: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215e2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215e30: 0x24840bc8  addiu       $a0, $a0, 0xBC8
    ctx->pc = 0x215e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3016));
    // 0x215e34: 0x8043e52  j           func_10F948
    ctx->pc = 0x215E34u;
    ctx->pc = 0x215E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215E34u;
            // 0x215e38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x215E3Cu;
    // 0x215e3c: 0x0  nop
    ctx->pc = 0x215e3cu;
    // NOP
label_215e40:
    // 0x215e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215e44: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x215e44u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x215e48: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x215e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x215e4c: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x215e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x215e50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215e54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215e58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x215e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x215e5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x215e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x215e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x215e64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x215e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x215e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x215e6c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x215e6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e70: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x215e70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e74: 0x8cd40000  lw          $s4, 0x0($a2)
    ctx->pc = 0x215e74u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x215e78: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x215e78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x215e7c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x215E7Cu;
    SET_GPR_U32(ctx, 31, 0x215E84u);
    ctx->pc = 0x215E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215E7Cu;
            // 0x215e80: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E84u; }
        if (ctx->pc != 0x215E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E84u; }
        if (ctx->pc != 0x215E84u) { return; }
    }
    ctx->pc = 0x215E84u;
label_215e84:
    // 0x215e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e8c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x215e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215e90: 0xc0844dc  jal         func_211370
    ctx->pc = 0x215E90u;
    SET_GPR_U32(ctx, 31, 0x215E98u);
    ctx->pc = 0x215E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215E90u;
            // 0x215e94: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E98u; }
        if (ctx->pc != 0x215E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E98u; }
        if (ctx->pc != 0x215E98u) { return; }
    }
    ctx->pc = 0x215E98u;
label_215e98:
    // 0x215e98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ea0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x215ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215ea4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x215EA4u;
    SET_GPR_U32(ctx, 31, 0x215EACu);
    ctx->pc = 0x215EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215EA4u;
            // 0x215ea8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215EACu; }
        if (ctx->pc != 0x215EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215EACu; }
        if (ctx->pc != 0x215EACu) { return; }
    }
    ctx->pc = 0x215EACu;
label_215eac:
    // 0x215eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215eb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215eb4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x215eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215eb8: 0xc08449a  jal         func_211268
    ctx->pc = 0x215EB8u;
    SET_GPR_U32(ctx, 31, 0x215EC0u);
    ctx->pc = 0x215EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215EB8u;
            // 0x215ebc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215EC0u; }
        if (ctx->pc != 0x215EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215EC0u; }
        if (ctx->pc != 0x215EC0u) { return; }
    }
    ctx->pc = 0x215EC0u;
label_215ec0:
    // 0x215ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ec4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ec8: 0xc0849ec  jal         func_2127B0
    ctx->pc = 0x215EC8u;
    SET_GPR_U32(ctx, 31, 0x215ED0u);
    ctx->pc = 0x215ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215EC8u;
            // 0x215ecc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2127B0u;
    if (runtime->hasFunction(0x2127B0u)) {
        auto targetFn = runtime->lookupFunction(0x2127B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215ED0u; }
        if (ctx->pc != 0x215ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002127B0_0x2127b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215ED0u; }
        if (ctx->pc != 0x215ED0u) { return; }
    }
    ctx->pc = 0x215ED0u;
label_215ed0:
    // 0x215ed0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ed4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215ED4u;
    {
        const bool branch_taken_0x215ed4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x215ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215ED4u;
            // 0x215ed8: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ed4) {
            ctx->pc = 0x215EECu;
            goto label_215eec;
        }
    }
    ctx->pc = 0x215EDCu;
    // 0x215edc: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x215edcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x215ee0: 0xc085774  jal         func_215DD0
    ctx->pc = 0x215EE0u;
    SET_GPR_U32(ctx, 31, 0x215EE8u);
    ctx->pc = 0x215EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215EE0u;
            // 0x215ee4: 0x28fa023  subu        $s4, $s4, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215DD0u;
    goto label_215dd0;
    ctx->pc = 0x215EE8u;
label_215ee8:
    // 0x215ee8: 0x280782d  daddu       $t7, $s4, $zero
    ctx->pc = 0x215ee8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_215eec:
    // 0x215eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215ef0: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x215ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ef4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x215ef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215ef8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x215ef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215efc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x215efcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x215f00: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x215f00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215f04: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x215f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x215f08: 0x3e00008  jr          $ra
    ctx->pc = 0x215F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215F08u;
            // 0x215f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x215F10u;
label_215f10:
    // 0x215f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215f14: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x215f14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x215f18: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x215f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x215f1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215f20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215f24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x215f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x215f28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x215f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x215f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x215f30: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x215f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f34: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x215f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x215f38: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x215f38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f3c: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x215f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x215f40: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x215f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215f44: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x215f44u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x215f48: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x215f48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f4c: 0xc084612  jal         func_211848
    ctx->pc = 0x215F4Cu;
    SET_GPR_U32(ctx, 31, 0x215F54u);
    ctx->pc = 0x215F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215F4Cu;
            // 0x215f50: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F54u; }
        if (ctx->pc != 0x215F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F54u; }
        if (ctx->pc != 0x215F54u) { return; }
    }
    ctx->pc = 0x215F54u;
label_215f54:
    // 0x215f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x215f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f5c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x215f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215f60: 0xc084612  jal         func_211848
    ctx->pc = 0x215F60u;
    SET_GPR_U32(ctx, 31, 0x215F68u);
    ctx->pc = 0x215F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215F60u;
            // 0x215f64: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F68u; }
        if (ctx->pc != 0x215F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F68u; }
        if (ctx->pc != 0x215F68u) { return; }
    }
    ctx->pc = 0x215F68u;
label_215f68:
    // 0x215f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x215f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f70: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x215f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215f74: 0xc084612  jal         func_211848
    ctx->pc = 0x215F74u;
    SET_GPR_U32(ctx, 31, 0x215F7Cu);
    ctx->pc = 0x215F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215F74u;
            // 0x215f78: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F7Cu; }
        if (ctx->pc != 0x215F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F7Cu; }
        if (ctx->pc != 0x215F7Cu) { return; }
    }
    ctx->pc = 0x215F7Cu;
label_215f7c:
    // 0x215f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x215f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f84: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x215f84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f88: 0xc0845c2  jal         func_211708
    ctx->pc = 0x215F88u;
    SET_GPR_U32(ctx, 31, 0x215F90u);
    ctx->pc = 0x215F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215F88u;
            // 0x215f8c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F90u; }
        if (ctx->pc != 0x215F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F90u; }
        if (ctx->pc != 0x215F90u) { return; }
    }
    ctx->pc = 0x215F90u;
label_215f90:
    // 0x215f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x215f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f98: 0xc084a6a  jal         func_2129A8
    ctx->pc = 0x215F98u;
    SET_GPR_U32(ctx, 31, 0x215FA0u);
    ctx->pc = 0x215F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215F98u;
            // 0x215f9c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2129A8u;
    if (runtime->hasFunction(0x2129A8u)) {
        auto targetFn = runtime->lookupFunction(0x2129A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215FA0u; }
        if (ctx->pc != 0x215FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002129A8_0x2129a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215FA0u; }
        if (ctx->pc != 0x215FA0u) { return; }
    }
    ctx->pc = 0x215FA0u;
label_215fa0:
    // 0x215fa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215fa4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215FA4u;
    {
        const bool branch_taken_0x215fa4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x215FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215FA4u;
            // 0x215fa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215fa4) {
            ctx->pc = 0x215FBCu;
            goto label_215fbc;
        }
    }
    ctx->pc = 0x215FACu;
    // 0x215fac: 0xc085774  jal         func_215DD0
    ctx->pc = 0x215FACu;
    SET_GPR_U32(ctx, 31, 0x215FB4u);
    ctx->pc = 0x215DD0u;
    goto label_215dd0;
    ctx->pc = 0x215FB4u;
label_215fb4:
    // 0x215fb4: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x215fb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x215fb8: 0x1f42823  subu        $a1, $t7, $s4
    ctx->pc = 0x215fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_215fbc:
    // 0x215fbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215fc0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x215fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215fc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x215fc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215fc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x215fc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215fcc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x215fccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x215fd0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x215fd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215fd4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x215fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x215fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x215FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215FD8u;
            // 0x215fdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x215FE0u;
    ctx->pc = 0x215fe0u;
}
