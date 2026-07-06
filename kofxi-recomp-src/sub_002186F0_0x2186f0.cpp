#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002186F0
// Address: 0x2186f0 - 0x2188c0
void sub_002186F0_0x2186f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002186F0_0x2186f0");
#endif

    switch (ctx->pc) {
        case 0x21870cu: goto label_21870c;
        case 0x21871cu: goto label_21871c;
        case 0x21872cu: goto label_21872c;
        case 0x21873cu: goto label_21873c;
        case 0x218758u: goto label_218758;
        case 0x21879cu: goto label_21879c;
        case 0x2187b0u: goto label_2187b0;
        case 0x2187c4u: goto label_2187c4;
        case 0x2187d8u: goto label_2187d8;
        case 0x2187e8u: goto label_2187e8;
        case 0x218810u: goto label_218810;
        case 0x218854u: goto label_218854;
        case 0x218868u: goto label_218868;
        case 0x21887cu: goto label_21887c;
        case 0x218890u: goto label_218890;
        case 0x218898u: goto label_218898;
        default: break;
    }

    ctx->pc = 0x2186f0u;

label_2186f0:
    // 0x2186f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2186f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2186f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2186f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2186f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2186f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2186fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2186fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218700: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218704: 0xc043e52  jal         func_10F948
    ctx->pc = 0x218704u;
    SET_GPR_U32(ctx, 31, 0x21870Cu);
    ctx->pc = 0x218708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218704u;
            // 0x218708: 0x248410a0  addiu       $a0, $a0, 0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21870Cu; }
        if (ctx->pc != 0x21870Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21870Cu; }
        if (ctx->pc != 0x21870Cu) { return; }
    }
    ctx->pc = 0x21870Cu;
label_21870c:
    // 0x21870c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21870cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218710: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218714: 0xc043e52  jal         func_10F948
    ctx->pc = 0x218714u;
    SET_GPR_U32(ctx, 31, 0x21871Cu);
    ctx->pc = 0x218718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218714u;
            // 0x218718: 0x248410c0  addiu       $a0, $a0, 0x10C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21871Cu; }
        if (ctx->pc != 0x21871Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21871Cu; }
        if (ctx->pc != 0x21871Cu) { return; }
    }
    ctx->pc = 0x21871Cu;
label_21871c:
    // 0x21871c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21871cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x218720: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218724: 0xc043e52  jal         func_10F948
    ctx->pc = 0x218724u;
    SET_GPR_U32(ctx, 31, 0x21872Cu);
    ctx->pc = 0x218728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218724u;
            // 0x218728: 0x248410d0  addiu       $a0, $a0, 0x10D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21872Cu; }
        if (ctx->pc != 0x21872Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21872Cu; }
        if (ctx->pc != 0x21872Cu) { return; }
    }
    ctx->pc = 0x21872Cu;
label_21872c:
    // 0x21872c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x21872cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x218730: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218734: 0xc043e52  jal         func_10F948
    ctx->pc = 0x218734u;
    SET_GPR_U32(ctx, 31, 0x21873Cu);
    ctx->pc = 0x218738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218734u;
            // 0x218738: 0x248410e0  addiu       $a0, $a0, 0x10E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21873Cu; }
        if (ctx->pc != 0x21873Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21873Cu; }
        if (ctx->pc != 0x21873Cu) { return; }
    }
    ctx->pc = 0x21873Cu;
label_21873c:
    // 0x21873c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x21873cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x218740: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218744: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x218744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218748: 0x248410f0  addiu       $a0, $a0, 0x10F0
    ctx->pc = 0x218748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4336));
    // 0x21874c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21874cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218750: 0x8043e52  j           func_10F948
    ctx->pc = 0x218750u;
    ctx->pc = 0x218754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218750u;
            // 0x218754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x218758u;
label_218758:
    // 0x218758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21875c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21875cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x218760: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x218760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x218764: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x218764u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x218768: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x218768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21876c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21876cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x218770: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x218770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x218774: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x218774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218778: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x218778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21877c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21877cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218780: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x218780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x218784: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x218784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218788: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x218788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21878c: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x21878cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x218790: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x218790u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x218794: 0xc0844dc  jal         func_211370
    ctx->pc = 0x218794u;
    SET_GPR_U32(ctx, 31, 0x21879Cu);
    ctx->pc = 0x218798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218794u;
            // 0x218798: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21879Cu; }
        if (ctx->pc != 0x21879Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21879Cu; }
        if (ctx->pc != 0x21879Cu) { return; }
    }
    ctx->pc = 0x21879Cu;
label_21879c:
    // 0x21879c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21879cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2187a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2187a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2187a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2187a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2187a8: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2187A8u;
    SET_GPR_U32(ctx, 31, 0x2187B0u);
    ctx->pc = 0x2187ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2187A8u;
            // 0x2187ac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2187B0u; }
        if (ctx->pc != 0x2187B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2187B0u; }
        if (ctx->pc != 0x2187B0u) { return; }
    }
    ctx->pc = 0x2187B0u;
label_2187b0:
    // 0x2187b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2187b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2187b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2187b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2187b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2187b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2187bc: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2187BCu;
    SET_GPR_U32(ctx, 31, 0x2187C4u);
    ctx->pc = 0x2187C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2187BCu;
            // 0x2187c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2187C4u; }
        if (ctx->pc != 0x2187C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2187C4u; }
        if (ctx->pc != 0x2187C4u) { return; }
    }
    ctx->pc = 0x2187C4u;
label_2187c4:
    // 0x2187c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2187c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2187c8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2187c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2187cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2187ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2187d0: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2187D0u;
    SET_GPR_U32(ctx, 31, 0x2187D8u);
    ctx->pc = 0x2187D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2187D0u;
            // 0x2187d4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2187D8u; }
        if (ctx->pc != 0x2187D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2187D8u; }
        if (ctx->pc != 0x2187D8u) { return; }
    }
    ctx->pc = 0x2187D8u;
label_2187d8:
    // 0x2187d8: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x2187d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2187dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2187dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2187e0: 0xc0861bc  jal         func_2186F0
    ctx->pc = 0x2187E0u;
    SET_GPR_U32(ctx, 31, 0x2187E8u);
    ctx->pc = 0x2187E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2187E0u;
            // 0x2187e4: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2186F0u;
    goto label_2186f0;
    ctx->pc = 0x2187E8u;
label_2187e8:
    // 0x2187e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2187e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2187ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2187ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2187f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2187f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2187f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2187f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2187f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2187f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2187fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2187fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218800: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x218800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x218804: 0x3e00008  jr          $ra
    ctx->pc = 0x218804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218804u;
            // 0x218808: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21880Cu;
    // 0x21880c: 0x0  nop
    ctx->pc = 0x21880cu;
    // NOP
label_218810:
    // 0x218810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218814: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x218814u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x218818: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x218818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21881c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21881cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218820: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x218820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x218824: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x218824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x218828: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x218828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21882c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21882cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x218830: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x218830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218834: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x218834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x218838: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x218838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21883c: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21883cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x218840: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218844: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x218844u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x218848: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x218848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21884c: 0xc084612  jal         func_211848
    ctx->pc = 0x21884Cu;
    SET_GPR_U32(ctx, 31, 0x218854u);
    ctx->pc = 0x218850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21884Cu;
            // 0x218850: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218854u; }
        if (ctx->pc != 0x218854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218854u; }
        if (ctx->pc != 0x218854u) { return; }
    }
    ctx->pc = 0x218854u;
label_218854:
    // 0x218854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218858: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x218858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21885c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21885cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218860: 0xc084612  jal         func_211848
    ctx->pc = 0x218860u;
    SET_GPR_U32(ctx, 31, 0x218868u);
    ctx->pc = 0x218864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218860u;
            // 0x218864: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218868u; }
        if (ctx->pc != 0x218868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218868u; }
        if (ctx->pc != 0x218868u) { return; }
    }
    ctx->pc = 0x218868u;
label_218868:
    // 0x218868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21886c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21886cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218870: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218870u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218874: 0xc084612  jal         func_211848
    ctx->pc = 0x218874u;
    SET_GPR_U32(ctx, 31, 0x21887Cu);
    ctx->pc = 0x218878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218874u;
            // 0x218878: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21887Cu; }
        if (ctx->pc != 0x21887Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21887Cu; }
        if (ctx->pc != 0x21887Cu) { return; }
    }
    ctx->pc = 0x21887Cu;
label_21887c:
    // 0x21887c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21887cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218880: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218888: 0xc084612  jal         func_211848
    ctx->pc = 0x218888u;
    SET_GPR_U32(ctx, 31, 0x218890u);
    ctx->pc = 0x21888Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218888u;
            // 0x21888c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218890u; }
        if (ctx->pc != 0x218890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218890u; }
        if (ctx->pc != 0x218890u) { return; }
    }
    ctx->pc = 0x218890u;
label_218890:
    // 0x218890: 0xc0861bc  jal         func_2186F0
    ctx->pc = 0x218890u;
    SET_GPR_U32(ctx, 31, 0x218898u);
    ctx->pc = 0x218894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218890u;
            // 0x218894: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2186F0u;
    goto label_2186f0;
    ctx->pc = 0x218898u;
label_218898:
    // 0x218898: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x218898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21889c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21889cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2188a0: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2188a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2188a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2188a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2188a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2188a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2188ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2188acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2188b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2188b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2188b4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2188b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2188b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2188B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2188BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2188B8u;
            // 0x2188bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2188C0u;
    ctx->pc = 0x2188c0u;
}
