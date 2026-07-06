#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021E9E0
// Address: 0x21e9e0 - 0x21ead0
void sub_0021E9E0_0x21e9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E9E0_0x21e9e0");
#endif

    switch (ctx->pc) {
        case 0x21ea24u: goto label_21ea24;
        case 0x21ea48u: goto label_21ea48;
        case 0x21ea50u: goto label_21ea50;
        case 0x21ea54u: goto label_21ea54;
        case 0x21ea68u: goto label_21ea68;
        case 0x21ea70u: goto label_21ea70;
        case 0x21ea90u: goto label_21ea90;
        case 0x21eaacu: goto label_21eaac;
        default: break;
    }

    ctx->pc = 0x21e9e0u;

    // 0x21e9e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x21e9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x21e9e4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21e9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21e9e8: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x21e9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x21e9ec: 0x24a51db8  addiu       $a1, $a1, 0x1DB8
    ctx->pc = 0x21e9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7608));
    // 0x21e9f0: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x21e9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x21e9f4: 0x808f0000  lb          $t7, 0x0($a0)
    ctx->pc = 0x21e9f4u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21e9f8: 0x15e0001b  bnez        $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x21E9F8u;
    {
        const bool branch_taken_0x21e9f8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E9F8u;
            // 0x21e9fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e9f8) {
            ctx->pc = 0x21EA68u;
            goto label_21ea68;
        }
    }
    ctx->pc = 0x21EA00u;
    // 0x21ea00: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x21ea00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x21ea04: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21ea04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21ea08: 0x2610b8e8  addiu       $s0, $s0, -0x4718
    ctx->pc = 0x21ea08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949096));
    // 0x21ea0c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21ea0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21ea10: 0x26060215  addiu       $a2, $s0, 0x215
    ctx->pc = 0x21ea10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 533));
    // 0x21ea14: 0x24a51dc0  addiu       $a1, $a1, 0x1DC0
    ctx->pc = 0x21ea14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7616));
    // 0x21ea18: 0x24e71dc8  addiu       $a3, $a3, 0x1DC8
    ctx->pc = 0x21ea18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7624));
    // 0x21ea1c: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x21EA1Cu;
    SET_GPR_U32(ctx, 31, 0x21EA24u);
    ctx->pc = 0x21EA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA1Cu;
            // 0x21ea20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA24u; }
        if (ctx->pc != 0x21EA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA24u; }
        if (ctx->pc != 0x21EA24u) { return; }
    }
    ctx->pc = 0x21EA24u;
label_21ea24:
    // 0x21ea24: 0x240f0063  addiu       $t7, $zero, 0x63
    ctx->pc = 0x21ea24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x21ea28: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21ea28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21ea2c: 0xae0f0010  sw          $t7, 0x10($s0)
    ctx->pc = 0x21ea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 15));
    // 0x21ea30: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21ea30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21ea34: 0x24841dd0  addiu       $a0, $a0, 0x1DD0
    ctx->pc = 0x21ea34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7632));
    // 0x21ea38: 0x24e71de0  addiu       $a3, $a3, 0x1DE0
    ctx->pc = 0x21ea38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7648));
    // 0x21ea3c: 0x240501c3  addiu       $a1, $zero, 0x1C3
    ctx->pc = 0x21ea3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 451));
    // 0x21ea40: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21EA40u;
    SET_GPR_U32(ctx, 31, 0x21EA48u);
    ctx->pc = 0x21EA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA40u;
            // 0x21ea44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA48u; }
        if (ctx->pc != 0x21EA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA48u; }
        if (ctx->pc != 0x21EA48u) { return; }
    }
    ctx->pc = 0x21EA48u;
label_21ea48:
    // 0x21ea48: 0xc089fc0  jal         func_227F00
    ctx->pc = 0x21EA48u;
    SET_GPR_U32(ctx, 31, 0x21EA50u);
    ctx->pc = 0x21EA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA48u;
            // 0x21ea4c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227F00u;
    if (runtime->hasFunction(0x227F00u)) {
        auto targetFn = runtime->lookupFunction(0x227F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA50u; }
        if (ctx->pc != 0x21EA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227F00_0x227f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA50u; }
        if (ctx->pc != 0x21EA50u) { return; }
    }
    ctx->pc = 0x21EA50u;
label_21ea50:
    // 0x21ea50: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x21ea50u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ea54:
    // 0x21ea54: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x21ea54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21ea58: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x21ea58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ea5c: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x21ea5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x21ea60: 0x3e00008  jr          $ra
    ctx->pc = 0x21EA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA60u;
            // 0x21ea64: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21EA68u;
label_21ea68:
    // 0x21ea68: 0xc04a9f0  jal         func_12A7C0
    ctx->pc = 0x21EA68u;
    SET_GPR_U32(ctx, 31, 0x21EA70u);
    ctx->pc = 0x12A7C0u;
    if (runtime->hasFunction(0x12A7C0u)) {
        auto targetFn = runtime->lookupFunction(0x12A7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA70u; }
        if (ctx->pc != 0x21EA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A7C0_0x12a7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA70u; }
        if (ctx->pc != 0x21EA70u) { return; }
    }
    ctx->pc = 0x21EA70u;
label_21ea70:
    // 0x21ea70: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21ea70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21ea74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21ea74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ea78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21ea78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ea7c: 0x24a51c08  addiu       $a1, $a1, 0x1C08
    ctx->pc = 0x21ea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7176));
    // 0x21ea80: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x21EA80u;
    {
        const bool branch_taken_0x21ea80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA80u;
            // 0x21ea84: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ea80) {
            ctx->pc = 0x21EA54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21ea54;
        }
    }
    ctx->pc = 0x21EA88u;
    // 0x21ea88: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x21EA88u;
    SET_GPR_U32(ctx, 31, 0x21EA90u);
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA90u; }
        if (ctx->pc != 0x21EA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA90u; }
        if (ctx->pc != 0x21EA90u) { return; }
    }
    ctx->pc = 0x21EA90u;
label_21ea90:
    // 0x21ea90: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x21ea90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x21ea94: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21ea94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21ea98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ea98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ea9c: 0x24c6bba5  addiu       $a2, $a2, -0x445B
    ctx->pc = 0x21ea9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949797));
    // 0x21eaa0: 0x24a51df8  addiu       $a1, $a1, 0x1DF8
    ctx->pc = 0x21eaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7672));
    // 0x21eaa4: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x21EAA4u;
    SET_GPR_U32(ctx, 31, 0x21EAACu);
    ctx->pc = 0x21EAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EAA4u;
            // 0x21eaa8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAACu; }
        if (ctx->pc != 0x21EAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAACu; }
        if (ctx->pc != 0x21EAACu) { return; }
    }
    ctx->pc = 0x21EAACu;
label_21eaac:
    // 0x21eaac: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x21EAACu;
    {
        const bool branch_taken_0x21eaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EAACu;
            // 0x21eab0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eaac) {
            ctx->pc = 0x21EA54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21ea54;
        }
    }
    ctx->pc = 0x21EAB4u;
    // 0x21eab4: 0x0  nop
    ctx->pc = 0x21eab4u;
    // NOP
    // 0x21eab8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21eab8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21eabc: 0x25efb7f4  addiu       $t7, $t7, -0x480C
    ctx->pc = 0x21eabcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948852));
    // 0x21eac0: 0x25ee001c  addiu       $t6, $t7, 0x1C
    ctx->pc = 0x21eac0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 28));
    // 0x21eac4: 0xac8f0000  sw          $t7, 0x0($a0)
    ctx->pc = 0x21eac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
    // 0x21eac8: 0x3e00008  jr          $ra
    ctx->pc = 0x21EAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EAC8u;
            // 0x21eacc: 0xac8e0004  sw          $t6, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21EAD0u;
    ctx->pc = 0x21ead0u;
}
