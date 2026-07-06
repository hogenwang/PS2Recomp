#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00216738
// Address: 0x216738 - 0x2168a0
void sub_00216738_0x216738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216738_0x216738");
#endif

    switch (ctx->pc) {
        case 0x216754u: goto label_216754;
        case 0x216768u: goto label_216768;
        case 0x216788u: goto label_216788;
        case 0x2167ccu: goto label_2167cc;
        case 0x2167e0u: goto label_2167e0;
        case 0x2167f0u: goto label_2167f0;
        case 0x216818u: goto label_216818;
        case 0x21685cu: goto label_21685c;
        case 0x216870u: goto label_216870;
        case 0x216878u: goto label_216878;
        default: break;
    }

    ctx->pc = 0x216738u;

label_216738:
    // 0x216738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21673c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21673cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216740: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x216740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x216744: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216748: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21674c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21674Cu;
    SET_GPR_U32(ctx, 31, 0x216754u);
    ctx->pc = 0x216750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21674Cu;
            // 0x216750: 0x24840d48  addiu       $a0, $a0, 0xD48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216754u; }
        if (ctx->pc != 0x216754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216754u; }
        if (ctx->pc != 0x216754u) { return; }
    }
    ctx->pc = 0x216754u;
label_216754:
    // 0x216754: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x216758: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21675c: 0x24840868  addiu       $a0, $a0, 0x868
    ctx->pc = 0x21675cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2152));
    // 0x216760: 0xc043e52  jal         func_10F948
    ctx->pc = 0x216760u;
    SET_GPR_U32(ctx, 31, 0x216768u);
    ctx->pc = 0x216764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216760u;
            // 0x216764: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216768u; }
        if (ctx->pc != 0x216768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216768u; }
        if (ctx->pc != 0x216768u) { return; }
    }
    ctx->pc = 0x216768u;
label_216768:
    // 0x216768: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21676c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21676cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216770: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x216774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216778: 0x24840d18  addiu       $a0, $a0, 0xD18
    ctx->pc = 0x216778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3352));
    // 0x21677c: 0x8043e52  j           func_10F948
    ctx->pc = 0x21677Cu;
    ctx->pc = 0x216780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21677Cu;
            // 0x216780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x216784u;
    // 0x216784: 0x0  nop
    ctx->pc = 0x216784u;
    // NOP
label_216788:
    // 0x216788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21678c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21678cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216790: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x216794: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x216794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x216798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21679c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21679cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2167a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2167a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2167a4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2167a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2167a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2167a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2167ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2167acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2167b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2167b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2167b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2167b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2167b8: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x2167b8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x2167bc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2167bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2167c0: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x2167c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2167c4: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x2167C4u;
    SET_GPR_U32(ctx, 31, 0x2167CCu);
    ctx->pc = 0x2167C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2167C4u;
            // 0x2167c8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2167CCu; }
        if (ctx->pc != 0x2167CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2167CCu; }
        if (ctx->pc != 0x2167CCu) { return; }
    }
    ctx->pc = 0x2167CCu;
label_2167cc:
    // 0x2167cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2167ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2167d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2167d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2167d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2167d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2167d8: 0xc08449a  jal         func_211268
    ctx->pc = 0x2167D8u;
    SET_GPR_U32(ctx, 31, 0x2167E0u);
    ctx->pc = 0x2167DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2167D8u;
            // 0x2167dc: 0x24067d00  addiu       $a2, $zero, 0x7D00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2167E0u; }
        if (ctx->pc != 0x2167E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2167E0u; }
        if (ctx->pc != 0x2167E0u) { return; }
    }
    ctx->pc = 0x2167E0u;
label_2167e0:
    // 0x2167e0: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x2167e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2167e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2167e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2167e8: 0xc0859ce  jal         func_216738
    ctx->pc = 0x2167E8u;
    SET_GPR_U32(ctx, 31, 0x2167F0u);
    ctx->pc = 0x2167ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2167E8u;
            // 0x2167ec: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x216738u;
    goto label_216738;
    ctx->pc = 0x2167F0u;
label_2167f0:
    // 0x2167f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2167f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2167f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2167f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2167f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2167f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2167fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2167fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216800: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x216800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216804: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x216804u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216808: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x216808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21680c: 0x3e00008  jr          $ra
    ctx->pc = 0x21680Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21680Cu;
            // 0x216810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x216814u;
    // 0x216814: 0x0  nop
    ctx->pc = 0x216814u;
    // NOP
label_216818:
    // 0x216818: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21681c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21681cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216820: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x216820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x216824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216828: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21682c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21682cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x216830: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x216830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216834: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x216834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x216838: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x216838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21683c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21683cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x216840: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x216840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216844: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x216844u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x216848: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x216848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21684c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21684cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216850: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x216850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x216854: 0xc084582  jal         func_211608
    ctx->pc = 0x216854u;
    SET_GPR_U32(ctx, 31, 0x21685Cu);
    ctx->pc = 0x216858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216854u;
            // 0x216858: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (runtime->hasFunction(0x211608u)) {
        auto targetFn = runtime->lookupFunction(0x211608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21685Cu; }
        if (ctx->pc != 0x21685Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211608_0x211608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21685Cu; }
        if (ctx->pc != 0x21685Cu) { return; }
    }
    ctx->pc = 0x21685Cu;
label_21685c:
    // 0x21685c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21685cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216860: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x216860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216868: 0xc0845c2  jal         func_211708
    ctx->pc = 0x216868u;
    SET_GPR_U32(ctx, 31, 0x216870u);
    ctx->pc = 0x21686Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216868u;
            // 0x21686c: 0x24067d00  addiu       $a2, $zero, 0x7D00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216870u; }
        if (ctx->pc != 0x216870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216870u; }
        if (ctx->pc != 0x216870u) { return; }
    }
    ctx->pc = 0x216870u;
label_216870:
    // 0x216870: 0xc0859ce  jal         func_216738
    ctx->pc = 0x216870u;
    SET_GPR_U32(ctx, 31, 0x216878u);
    ctx->pc = 0x216874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216870u;
            // 0x216874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x216738u;
    goto label_216738;
    ctx->pc = 0x216878u;
label_216878:
    // 0x216878: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x216878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21687c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21687cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216880: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x216880u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x216884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216888: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x216888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21688c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21688cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216890: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x216890u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216894: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x216894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x216898: 0x3e00008  jr          $ra
    ctx->pc = 0x216898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21689Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216898u;
            // 0x21689c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2168A0u;
    ctx->pc = 0x2168a0u;
}
