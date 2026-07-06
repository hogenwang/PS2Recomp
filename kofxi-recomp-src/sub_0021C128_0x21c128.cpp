#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021C128
// Address: 0x21c128 - 0x21c220
void sub_0021C128_0x21c128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C128_0x21c128");
#endif

    switch (ctx->pc) {
        case 0x21c144u: goto label_21c144;
        case 0x21c160u: goto label_21c160;
        case 0x21c194u: goto label_21c194;
        case 0x21c1a4u: goto label_21c1a4;
        case 0x21c1c0u: goto label_21c1c0;
        case 0x21c1f4u: goto label_21c1f4;
        case 0x21c1fcu: goto label_21c1fc;
        default: break;
    }

    ctx->pc = 0x21c128u;

label_21c128:
    // 0x21c128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c12c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c130: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21c130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21c134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c138: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21c138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21c13c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21C13Cu;
    SET_GPR_U32(ctx, 31, 0x21C144u);
    ctx->pc = 0x21C140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C13Cu;
            // 0x21c140: 0x248416f0  addiu       $a0, $a0, 0x16F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C144u; }
        if (ctx->pc != 0x21C144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C144u; }
        if (ctx->pc != 0x21C144u) { return; }
    }
    ctx->pc = 0x21C144u;
label_21c144:
    // 0x21c144: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21c144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c148: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21c148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c14c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21c150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c154: 0x24841010  addiu       $a0, $a0, 0x1010
    ctx->pc = 0x21c154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4112));
    // 0x21c158: 0x8043e52  j           func_10F948
    ctx->pc = 0x21C158u;
    ctx->pc = 0x21C15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C158u;
            // 0x21c15c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21C160u;
label_21c160:
    // 0x21c160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c164: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21c164u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21c168: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c16c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21c16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21c170: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21c170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21c174: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21c174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c17c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21c17cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c180: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21c180u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21c184: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x21c184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21c188: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x21c188u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21c18c: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x21C18Cu;
    SET_GPR_U32(ctx, 31, 0x21C194u);
    ctx->pc = 0x21C190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C18Cu;
            // 0x21c190: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C194u; }
        if (ctx->pc != 0x21C194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C194u; }
        if (ctx->pc != 0x21C194u) { return; }
    }
    ctx->pc = 0x21C194u;
label_21c194:
    // 0x21c194: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x21c194u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21c198: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21c198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c19c: 0xc08704a  jal         func_21C128
    ctx->pc = 0x21C19Cu;
    SET_GPR_U32(ctx, 31, 0x21C1A4u);
    ctx->pc = 0x21C1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C19Cu;
            // 0x21c1a0: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21C128u;
    goto label_21c128;
    ctx->pc = 0x21C1A4u;
label_21c1a4:
    // 0x21c1a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21c1a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c1a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c1a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c1ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c1acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c1b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c1b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c1b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21c1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x21C1B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C1B8u;
            // 0x21c1bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C1C0u;
label_21c1c0:
    // 0x21c1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c1c4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21c1c4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21c1c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21c1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21c1cc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21c1ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c1d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c1d4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x21c1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21c1d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21c1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21c1dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c1e0: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x21c1e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21c1e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21c1e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c1e8: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21c1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21c1ec: 0xc084582  jal         func_211608
    ctx->pc = 0x21C1ECu;
    SET_GPR_U32(ctx, 31, 0x21C1F4u);
    ctx->pc = 0x21C1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C1ECu;
            // 0x21c1f0: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (runtime->hasFunction(0x211608u)) {
        auto targetFn = runtime->lookupFunction(0x211608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C1F4u; }
        if (ctx->pc != 0x21C1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211608_0x211608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C1F4u; }
        if (ctx->pc != 0x21C1F4u) { return; }
    }
    ctx->pc = 0x21C1F4u;
label_21c1f4:
    // 0x21c1f4: 0xc08704a  jal         func_21C128
    ctx->pc = 0x21C1F4u;
    SET_GPR_U32(ctx, 31, 0x21C1FCu);
    ctx->pc = 0x21C1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C1F4u;
            // 0x21c1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21C128u;
    goto label_21c128;
    ctx->pc = 0x21C1FCu;
label_21c1fc:
    // 0x21c1fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21c200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c204: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x21c204u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21c208: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c20c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c20cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c210: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21c210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c214: 0x3e00008  jr          $ra
    ctx->pc = 0x21C214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C214u;
            // 0x21c218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C21Cu;
    // 0x21c21c: 0x0  nop
    ctx->pc = 0x21c21cu;
    // NOP
    ctx->pc = 0x21c220u;
}
