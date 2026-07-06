#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177750
// Address: 0x177750 - 0x177ba0
void sub_00177750_0x177750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177750_0x177750");
#endif

    switch (ctx->pc) {
        case 0x177770u: goto label_177770;
        case 0x17777cu: goto label_17777c;
        case 0x177794u: goto label_177794;
        case 0x1777b0u: goto label_1777b0;
        case 0x1777c0u: goto label_1777c0;
        case 0x1777d4u: goto label_1777d4;
        case 0x1777e8u: goto label_1777e8;
        case 0x177800u: goto label_177800;
        case 0x17781cu: goto label_17781c;
        case 0x17782cu: goto label_17782c;
        case 0x17783cu: goto label_17783c;
        case 0x177890u: goto label_177890;
        case 0x177958u: goto label_177958;
        case 0x177990u: goto label_177990;
        case 0x1779c0u: goto label_1779c0;
        case 0x1779e4u: goto label_1779e4;
        case 0x177a08u: goto label_177a08;
        case 0x177a10u: goto label_177a10;
        case 0x177a9cu: goto label_177a9c;
        case 0x177ab8u: goto label_177ab8;
        case 0x177afcu: goto label_177afc;
        case 0x177b40u: goto label_177b40;
        case 0x177b48u: goto label_177b48;
        case 0x177b68u: goto label_177b68;
        default: break;
    }

    ctx->pc = 0x177750u;

    // 0x177750: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x177750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x177754: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x177754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x177758: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x177758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17775c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17775cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x177760: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x177760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x177764: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x177764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x177768: 0xc058f90  jal         func_163E40
    ctx->pc = 0x177768u;
    SET_GPR_U32(ctx, 31, 0x177770u);
    ctx->pc = 0x17776Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177768u;
            // 0x17776c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x163E40u;
    if (runtime->hasFunction(0x163E40u)) {
        auto targetFn = runtime->lookupFunction(0x163E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177770u; }
        if (ctx->pc != 0x177770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00163E40_0x163e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177770u; }
        if (ctx->pc != 0x177770u) { return; }
    }
    ctx->pc = 0x177770u;
label_177770:
    // 0x177770: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x177770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177774: 0xc067d58  jal         func_19F560
    ctx->pc = 0x177774u;
    SET_GPR_U32(ctx, 31, 0x17777Cu);
    ctx->pc = 0x177778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177774u;
            // 0x177778: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F560u;
    if (runtime->hasFunction(0x19F560u)) {
        auto targetFn = runtime->lookupFunction(0x19F560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17777Cu; }
        if (ctx->pc != 0x17777Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F560_0x19f560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17777Cu; }
        if (ctx->pc != 0x17777Cu) { return; }
    }
    ctx->pc = 0x17777Cu;
label_17777c:
    // 0x17777c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17777cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177780: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x177780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x177784: 0x128ac0  sll         $s1, $s2, 11
    ctx->pc = 0x177784u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x177788: 0x2484ad78  addiu       $a0, $a0, -0x5288
    ctx->pc = 0x177788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946168));
    // 0x17778c: 0xc06949c  jal         func_1A5270
    ctx->pc = 0x17778Cu;
    SET_GPR_U32(ctx, 31, 0x177794u);
    ctx->pc = 0x177790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17778Cu;
            // 0x177790: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5270u;
    if (runtime->hasFunction(0x1A5270u)) {
        auto targetFn = runtime->lookupFunction(0x1A5270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177794u; }
        if (ctx->pc != 0x177794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5270_0x1a5270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177794u; }
        if (ctx->pc != 0x177794u) { return; }
    }
    ctx->pc = 0x177794u;
label_177794:
    // 0x177794: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x177794u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177798: 0x5260007e  beql        $s3, $zero, . + 4 + (0x7E << 2)
    ctx->pc = 0x177798u;
    {
        const bool branch_taken_0x177798 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x177798) {
            ctx->pc = 0x17779Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177798u;
            // 0x17779c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177994u;
            goto label_177994;
        }
    }
    ctx->pc = 0x1777A0u;
    // 0x1777a0: 0x113143  sra         $a2, $s1, 5
    ctx->pc = 0x1777a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 5));
    // 0x1777a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1777a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1777a8: 0xc067d70  jal         func_19F5C0
    ctx->pc = 0x1777A8u;
    SET_GPR_U32(ctx, 31, 0x1777B0u);
    ctx->pc = 0x1777ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1777A8u;
            // 0x1777ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F5C0u;
    if (runtime->hasFunction(0x19F5C0u)) {
        auto targetFn = runtime->lookupFunction(0x19F5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777B0u; }
        if (ctx->pc != 0x1777B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F5C0_0x19f5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777B0u; }
        if (ctx->pc != 0x1777B0u) { return; }
    }
    ctx->pc = 0x1777B0u;
label_1777b0:
    // 0x1777b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1777b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1777b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1777b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1777b8: 0xc067d5c  jal         func_19F570
    ctx->pc = 0x1777B8u;
    SET_GPR_U32(ctx, 31, 0x1777C0u);
    ctx->pc = 0x1777BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1777B8u;
            // 0x1777bc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F570u;
    if (runtime->hasFunction(0x19F570u)) {
        auto targetFn = runtime->lookupFunction(0x19F570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777C0u; }
        if (ctx->pc != 0x1777C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F570_0x19f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777C0u; }
        if (ctx->pc != 0x1777C0u) { return; }
    }
    ctx->pc = 0x1777C0u;
label_1777c0:
    // 0x1777c0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1777c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1777c4: 0x96720000  lhu         $s2, 0x0($s3)
    ctx->pc = 0x1777c4u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1777c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1777c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1777cc: 0xc0694e4  jal         func_1A5390
    ctx->pc = 0x1777CCu;
    SET_GPR_U32(ctx, 31, 0x1777D4u);
    ctx->pc = 0x1777D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1777CCu;
            // 0x1777d0: 0x2484ad78  addiu       $a0, $a0, -0x5288 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5390u;
    if (runtime->hasFunction(0x1A5390u)) {
        auto targetFn = runtime->lookupFunction(0x1A5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777D4u; }
        if (ctx->pc != 0x1777D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5390_0x1a5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777D4u; }
        if (ctx->pc != 0x1777D4u) { return; }
    }
    ctx->pc = 0x1777D4u;
label_1777d4:
    // 0x1777d4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1777d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1777d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1777d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1777dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1777dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1777e0: 0xc067d58  jal         func_19F560
    ctx->pc = 0x1777E0u;
    SET_GPR_U32(ctx, 31, 0x1777E8u);
    ctx->pc = 0x1777E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1777E0u;
            // 0x1777e4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F560u;
    if (runtime->hasFunction(0x19F560u)) {
        auto targetFn = runtime->lookupFunction(0x19F560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777E8u; }
        if (ctx->pc != 0x1777E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F560_0x19f560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777E8u; }
        if (ctx->pc != 0x1777E8u) { return; }
    }
    ctx->pc = 0x1777E8u;
label_1777e8:
    // 0x1777e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1777e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1777ec: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1777ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1777f0: 0x149ac0  sll         $s3, $s4, 11
    ctx->pc = 0x1777f0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 11));
    // 0x1777f4: 0x2484ad78  addiu       $a0, $a0, -0x5288
    ctx->pc = 0x1777f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946168));
    // 0x1777f8: 0xc06949c  jal         func_1A5270
    ctx->pc = 0x1777F8u;
    SET_GPR_U32(ctx, 31, 0x177800u);
    ctx->pc = 0x1777FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1777F8u;
            // 0x1777fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5270u;
    if (runtime->hasFunction(0x1A5270u)) {
        auto targetFn = runtime->lookupFunction(0x1A5270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177800u; }
        if (ctx->pc != 0x177800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5270_0x1a5270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177800u; }
        if (ctx->pc != 0x177800u) { return; }
    }
    ctx->pc = 0x177800u;
label_177800:
    // 0x177800: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x177800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177804: 0x52200063  beql        $s1, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x177804u;
    {
        const bool branch_taken_0x177804 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x177804) {
            ctx->pc = 0x177808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177804u;
            // 0x177808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177994u;
            goto label_177994;
        }
    }
    ctx->pc = 0x17780Cu;
    // 0x17780c: 0x133143  sra         $a2, $s3, 5
    ctx->pc = 0x17780cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 19), 5));
    // 0x177810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177814: 0xc067d70  jal         func_19F5C0
    ctx->pc = 0x177814u;
    SET_GPR_U32(ctx, 31, 0x17781Cu);
    ctx->pc = 0x177818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177814u;
            // 0x177818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F5C0u;
    if (runtime->hasFunction(0x19F5C0u)) {
        auto targetFn = runtime->lookupFunction(0x19F5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17781Cu; }
        if (ctx->pc != 0x17781Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F5C0_0x19f5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17781Cu; }
        if (ctx->pc != 0x17781Cu) { return; }
    }
    ctx->pc = 0x17781Cu;
label_17781c:
    // 0x17781c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17781cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177824: 0xc067ca0  jal         func_19F280
    ctx->pc = 0x177824u;
    SET_GPR_U32(ctx, 31, 0x17782Cu);
    ctx->pc = 0x177828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177824u;
            // 0x177828: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    if (runtime->hasFunction(0x19F280u)) {
        auto targetFn = runtime->lookupFunction(0x19F280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17782Cu; }
        if (ctx->pc != 0x17782Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F280_0x19f280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17782Cu; }
        if (ctx->pc != 0x17782Cu) { return; }
    }
    ctx->pc = 0x17782Cu;
label_17782c:
    // 0x17782c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17782cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177834: 0xc067d5c  jal         func_19F570
    ctx->pc = 0x177834u;
    SET_GPR_U32(ctx, 31, 0x17783Cu);
    ctx->pc = 0x177838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177834u;
            // 0x177838: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F570u;
    if (runtime->hasFunction(0x19F570u)) {
        auto targetFn = runtime->lookupFunction(0x19F570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17783Cu; }
        if (ctx->pc != 0x17783Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F570_0x19f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17783Cu; }
        if (ctx->pc != 0x17783Cu) { return; }
    }
    ctx->pc = 0x17783Cu;
label_17783c:
    // 0x17783c: 0x26270008  addiu       $a3, $s1, 0x8
    ctx->pc = 0x17783cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x177840: 0x2626000c  addiu       $a2, $s1, 0xC
    ctx->pc = 0x177840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x177844: 0x1a40004e  blez        $s2, . + 4 + (0x4E << 2)
    ctx->pc = 0x177844u;
    {
        const bool branch_taken_0x177844 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x177848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177844u;
            // 0x177848: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177844) {
            ctx->pc = 0x177980u;
            goto label_177980;
        }
    }
    ctx->pc = 0x17784Cu;
    // 0x17784c: 0x2a410009  slti        $at, $s2, 0x9
    ctx->pc = 0x17784cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x177850: 0x14200035  bnez        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x177850u;
    {
        const bool branch_taken_0x177850 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x177854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177850u;
            // 0x177854: 0x2642fff8  addiu       $v0, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177850) {
            ctx->pc = 0x177928u;
            goto label_177928;
        }
    }
    ctx->pc = 0x177858u;
    // 0x177858: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x177858u;
    {
        const bool branch_taken_0x177858 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x17785Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177858u;
            // 0x17785c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177858) {
            ctx->pc = 0x177878u;
            goto label_177878;
        }
    }
    ctx->pc = 0x177860u;
    // 0x177860: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x177860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x177864: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x177864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x177868: 0x241082a  slt         $at, $s2, $at
    ctx->pc = 0x177868u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x17786c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17786Cu;
    {
        const bool branch_taken_0x17786c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17786c) {
            ctx->pc = 0x177878u;
            goto label_177878;
        }
    }
    ctx->pc = 0x177874u;
    // 0x177874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x177874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_177878:
    // 0x177878: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x177878u;
    {
        const bool branch_taken_0x177878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x177878) {
            ctx->pc = 0x177928u;
            goto label_177928;
        }
    }
    ctx->pc = 0x177880u;
    // 0x177880: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x177880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x177884: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x177884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177888: 0x2484a7e0  addiu       $a0, $a0, -0x5820
    ctx->pc = 0x177888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944736));
    // 0x17788c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x17788cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_177890:
    // 0x177890: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x177890u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x177894: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x177894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x177898: 0x102482a  slt         $t1, $t0, $v0
    ctx->pc = 0x177898u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17789c: 0xac8a0004  sw          $t2, 0x4($a0)
    ctx->pc = 0x17789cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 10));
    // 0x1778a0: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x1778a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1778a4: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x1778a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x1778a8: 0x8caa000c  lw          $t2, 0xC($a1)
    ctx->pc = 0x1778a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1778ac: 0xac8a000c  sw          $t2, 0xC($a0)
    ctx->pc = 0x1778acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 10));
    // 0x1778b0: 0x8c6a000c  lw          $t2, 0xC($v1)
    ctx->pc = 0x1778b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1778b4: 0xac8a0008  sw          $t2, 0x8($a0)
    ctx->pc = 0x1778b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
    // 0x1778b8: 0x8caa0018  lw          $t2, 0x18($a1)
    ctx->pc = 0x1778b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1778bc: 0xac8a0014  sw          $t2, 0x14($a0)
    ctx->pc = 0x1778bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 10));
    // 0x1778c0: 0x8c6a0018  lw          $t2, 0x18($v1)
    ctx->pc = 0x1778c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1778c4: 0xac8a0010  sw          $t2, 0x10($a0)
    ctx->pc = 0x1778c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 10));
    // 0x1778c8: 0x8caa0024  lw          $t2, 0x24($a1)
    ctx->pc = 0x1778c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1778cc: 0xac8a001c  sw          $t2, 0x1C($a0)
    ctx->pc = 0x1778ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 10));
    // 0x1778d0: 0x8c6a0024  lw          $t2, 0x24($v1)
    ctx->pc = 0x1778d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1778d4: 0xac8a0018  sw          $t2, 0x18($a0)
    ctx->pc = 0x1778d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 10));
    // 0x1778d8: 0x8caa0030  lw          $t2, 0x30($a1)
    ctx->pc = 0x1778d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1778dc: 0xac8a0024  sw          $t2, 0x24($a0)
    ctx->pc = 0x1778dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 10));
    // 0x1778e0: 0x8c6a0030  lw          $t2, 0x30($v1)
    ctx->pc = 0x1778e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1778e4: 0xac8a0020  sw          $t2, 0x20($a0)
    ctx->pc = 0x1778e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 10));
    // 0x1778e8: 0x8caa003c  lw          $t2, 0x3C($a1)
    ctx->pc = 0x1778e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1778ec: 0xac8a002c  sw          $t2, 0x2C($a0)
    ctx->pc = 0x1778ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 10));
    // 0x1778f0: 0x8c6a003c  lw          $t2, 0x3C($v1)
    ctx->pc = 0x1778f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1778f4: 0xac8a0028  sw          $t2, 0x28($a0)
    ctx->pc = 0x1778f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 10));
    // 0x1778f8: 0x8caa0048  lw          $t2, 0x48($a1)
    ctx->pc = 0x1778f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1778fc: 0xac8a0034  sw          $t2, 0x34($a0)
    ctx->pc = 0x1778fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 10));
    // 0x177900: 0x8c6a0048  lw          $t2, 0x48($v1)
    ctx->pc = 0x177900u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x177904: 0xac8a0030  sw          $t2, 0x30($a0)
    ctx->pc = 0x177904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 10));
    // 0x177908: 0x8caa0054  lw          $t2, 0x54($a1)
    ctx->pc = 0x177908u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x17790c: 0xac8a003c  sw          $t2, 0x3C($a0)
    ctx->pc = 0x17790cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 10));
    // 0x177910: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x177910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x177914: 0x8c6a0054  lw          $t2, 0x54($v1)
    ctx->pc = 0x177914u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x177918: 0xac8a0038  sw          $t2, 0x38($a0)
    ctx->pc = 0x177918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 10));
    // 0x17791c: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x17791cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x177920: 0x1520ffdb  bnez        $t1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x177920u;
    {
        const bool branch_taken_0x177920 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x177924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177920u;
            // 0x177924: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177920) {
            ctx->pc = 0x177890u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177890;
        }
    }
    ctx->pc = 0x177928u;
label_177928:
    // 0x177928: 0x112082a  slt         $at, $t0, $s2
    ctx->pc = 0x177928u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x17792c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x17792Cu;
    {
        const bool branch_taken_0x17792c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17792c) {
            ctx->pc = 0x177980u;
            goto label_177980;
        }
    }
    ctx->pc = 0x177934u;
    // 0x177934: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x177934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x177938: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x177938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x17793c: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x17793cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x177940: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177944: 0x2442a7e0  addiu       $v0, $v0, -0x5820
    ctx->pc = 0x177944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944736));
    // 0x177948: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x177948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17794c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x17794cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x177950: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x177950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x177954: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x177954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_177958:
    // 0x177958: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x177958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17795c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x17795cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x177960: 0x112102a  slt         $v0, $t0, $s2
    ctx->pc = 0x177960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x177964: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x177964u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x177968: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x177968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x17796c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17796cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x177970: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x177970u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x177974: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x177974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x177978: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x177978u;
    {
        const bool branch_taken_0x177978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17797Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177978u;
            // 0x17797c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177978) {
            ctx->pc = 0x177958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177958;
        }
    }
    ctx->pc = 0x177980u;
label_177980:
    // 0x177980: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x177980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x177984: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x177984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177988: 0xc0694e4  jal         func_1A5390
    ctx->pc = 0x177988u;
    SET_GPR_U32(ctx, 31, 0x177990u);
    ctx->pc = 0x17798Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177988u;
            // 0x17798c: 0x2484ad78  addiu       $a0, $a0, -0x5288 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5390u;
    if (runtime->hasFunction(0x1A5390u)) {
        auto targetFn = runtime->lookupFunction(0x1A5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177990u; }
        if (ctx->pc != 0x177990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5390_0x1a5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177990u; }
        if (ctx->pc != 0x177990u) { return; }
    }
    ctx->pc = 0x177990u;
label_177990:
    // 0x177990: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x177990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177994:
    // 0x177994: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x177994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177998: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x177998u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17799c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17799cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1779a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1779a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1779a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1779a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1779a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1779a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1779ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1779ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1779B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1779ACu;
            // 0x1779b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1779B4u;
    // 0x1779b4: 0x0  nop
    ctx->pc = 0x1779b4u;
    // NOP
    // 0x1779b8: 0x0  nop
    ctx->pc = 0x1779b8u;
    // NOP
    // 0x1779bc: 0x0  nop
    ctx->pc = 0x1779bcu;
    // NOP
label_1779c0:
    // 0x1779c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1779c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1779c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1779c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1779c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1779c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1779cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1779ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1779d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1779d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1779d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1779d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1779d8: 0x8c52a7d8  lw          $s2, -0x5828($v0)
    ctx->pc = 0x1779d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944728)));
    // 0x1779dc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1779dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1779e0: 0x845137e0  lh          $s1, 0x37E0($v0)
    ctx->pc = 0x1779e0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14304)));
label_1779e4:
    // 0x1779e4: 0x620002a  bltz        $s1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1779E4u;
    {
        const bool branch_taken_0x1779e4 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1779e4) {
            ctx->pc = 0x177A90u;
            goto label_177a90;
        }
    }
    ctx->pc = 0x1779ECu;
    // 0x1779ec: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1779ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1779f0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1779f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1779f4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1779f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1779f8: 0x2442af70  addiu       $v0, $v0, -0x5090
    ctx->pc = 0x1779f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
    // 0x1779fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1779fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x177a00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177a04: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x177a04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_177a08:
    // 0x177a08: 0xc05e010  jal         func_178040
    ctx->pc = 0x177A08u;
    SET_GPR_U32(ctx, 31, 0x177A10u);
    ctx->pc = 0x177A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177A08u;
            // 0x177a0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178040u;
    if (runtime->hasFunction(0x178040u)) {
        auto targetFn = runtime->lookupFunction(0x178040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A10u; }
        if (ctx->pc != 0x177A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178040_0x178040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A10u; }
        if (ctx->pc != 0x177A10u) { return; }
    }
    ctx->pc = 0x177A10u;
label_177a10:
    // 0x177a10: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x177a10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x177a14: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x177a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x177a18: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x177A18u;
    {
        const bool branch_taken_0x177a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x177a18) {
            ctx->pc = 0x177B80u;
            goto label_177b80;
        }
    }
    ctx->pc = 0x177A20u;
    // 0x177a20: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177a24: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x177a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x177a28: 0x9444a7c8  lhu         $a0, -0x5838($v0)
    ctx->pc = 0x177a28u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294944712)));
    // 0x177a2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x177a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x177a30: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177a34: 0xa464a7c8  sh          $a0, -0x5838($v1)
    ctx->pc = 0x177a34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294944712), (uint16_t)GPR_U32(ctx, 4));
    // 0x177a38: 0x9442a7c8  lhu         $v0, -0x5838($v0)
    ctx->pc = 0x177a38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294944712)));
    // 0x177a3c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x177a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x177a40: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x177A40u;
    {
        const bool branch_taken_0x177a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177a40) {
            ctx->pc = 0x177A08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177a08;
        }
    }
    ctx->pc = 0x177A48u;
    // 0x177a48: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177a4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x177a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x177a50: 0x2442ac60  addiu       $v0, $v0, -0x53A0
    ctx->pc = 0x177a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945888));
    // 0x177a54: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x177a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x177a58: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x177a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x177a5c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x177a5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x177a60: 0xa44337e0  sh          $v1, 0x37E0($v0)
    ctx->pc = 0x177a60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14304), (uint16_t)GPR_U32(ctx, 3));
    // 0x177a64: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x177a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x177a68: 0x844337f8  lh          $v1, 0x37F8($v0)
    ctx->pc = 0x177a68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14328)));
    // 0x177a6c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x177a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x177a70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x177a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x177a74: 0xa44337f8  sh          $v1, 0x37F8($v0)
    ctx->pc = 0x177a74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14328), (uint16_t)GPR_U32(ctx, 3));
    // 0x177a78: 0x308200fe  andi        $v0, $a0, 0xFE
    ctx->pc = 0x177a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
    // 0x177a7c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x177a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x177a80: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x177a80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x177a84: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x177a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x177a88: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x177a88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x177a8c: 0x0  nop
    ctx->pc = 0x177a8cu;
    // NOP
label_177a90:
    // 0x177a90: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177a94: 0xc05dee8  jal         func_177BA0
    ctx->pc = 0x177A94u;
    SET_GPR_U32(ctx, 31, 0x177A9Cu);
    ctx->pc = 0x177A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177A94u;
            // 0x177a98: 0xa440a7c8  sh          $zero, -0x5838($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294944712), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177BA0u;
    if (runtime->hasFunction(0x177BA0u)) {
        auto targetFn = runtime->lookupFunction(0x177BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A9Cu; }
        if (ctx->pc != 0x177A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177BA0_0x177ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A9Cu; }
        if (ctx->pc != 0x177A9Cu) { return; }
    }
    ctx->pc = 0x177A9Cu;
label_177a9c:
    // 0x177a9c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x177a9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x177aa0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x177aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x177aa4: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x177aa4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x177aa8: 0x6000035  bltz        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x177AA8u;
    {
        const bool branch_taken_0x177aa8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x177AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177AA8u;
            // 0x177aac: 0xa46237e0  sh          $v0, 0x37E0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14304), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177aa8) {
            ctx->pc = 0x177B80u;
            goto label_177b80;
        }
    }
    ctx->pc = 0x177AB0u;
    // 0x177ab0: 0xc05df8c  jal         func_177E30
    ctx->pc = 0x177AB0u;
    SET_GPR_U32(ctx, 31, 0x177AB8u);
    ctx->pc = 0x177AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177AB0u;
            // 0x177ab4: 0x3204ffff  andi        $a0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x177E30u;
    if (runtime->hasFunction(0x177E30u)) {
        auto targetFn = runtime->lookupFunction(0x177E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AB8u; }
        if (ctx->pc != 0x177AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177E30_0x177e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AB8u; }
        if (ctx->pc != 0x177AB8u) { return; }
    }
    ctx->pc = 0x177AB8u;
label_177ab8:
    // 0x177ab8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x177ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x177abc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x177abcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x177ac0: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x177AC0u;
    {
        const bool branch_taken_0x177ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x177ac0) {
            ctx->pc = 0x177B80u;
            goto label_177b80;
        }
    }
    ctx->pc = 0x177AC8u;
    // 0x177ac8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x177ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x177acc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177ad0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x177ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x177ad4: 0x2442af70  addiu       $v0, $v0, -0x5090
    ctx->pc = 0x177ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
    // 0x177ad8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x177ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x177adc: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x177adcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177ae0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x177ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x177ae4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x177ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x177ae8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x177ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x177aec: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x177AECu;
    {
        const bool branch_taken_0x177aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x177aec) {
            ctx->pc = 0x177B08u;
            goto label_177b08;
        }
    }
    ctx->pc = 0x177AF4u;
    // 0x177af4: 0xc05df30  jal         func_177CC0
    ctx->pc = 0x177AF4u;
    SET_GPR_U32(ctx, 31, 0x177AFCu);
    ctx->pc = 0x177AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177AF4u;
            // 0x177af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177CC0u;
    if (runtime->hasFunction(0x177CC0u)) {
        auto targetFn = runtime->lookupFunction(0x177CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AFCu; }
        if (ctx->pc != 0x177AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177CC0_0x177cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AFCu; }
        if (ctx->pc != 0x177AFCu) { return; }
    }
    ctx->pc = 0x177AFCu;
label_177afc:
    // 0x177afc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x177AFCu;
    {
        const bool branch_taken_0x177afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177afc) {
            ctx->pc = 0x177B60u;
            goto label_177b60;
        }
    }
    ctx->pc = 0x177B04u;
    // 0x177b04: 0x0  nop
    ctx->pc = 0x177b04u;
    // NOP
label_177b08:
    // 0x177b08: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x177b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x177b0c: 0x2463ac60  addiu       $v1, $v1, -0x53A0
    ctx->pc = 0x177b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945888));
    // 0x177b10: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x177b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x177b14: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x177b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x177b18: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x177b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x177b1c: 0xa44437e0  sh          $a0, 0x37E0($v0)
    ctx->pc = 0x177b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14304), (uint16_t)GPR_U32(ctx, 4));
    // 0x177b20: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x177b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x177b24: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177b28: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x177b28u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x177b2c: 0x2442a580  addiu       $v0, $v0, -0x5A80
    ctx->pc = 0x177b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944128));
    // 0x177b30: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x177b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177b34: 0x34a20080  ori         $v0, $a1, 0x80
    ctx->pc = 0x177b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x177b38: 0xc05da6c  jal         func_1769B0
    ctx->pc = 0x177B38u;
    SET_GPR_U32(ctx, 31, 0x177B40u);
    ctx->pc = 0x177B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177B38u;
            // 0x177b3c: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1769B0u;
    if (runtime->hasFunction(0x1769B0u)) {
        auto targetFn = runtime->lookupFunction(0x1769B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B40u; }
        if (ctx->pc != 0x177B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001769B0_0x1769b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B40u; }
        if (ctx->pc != 0x177B40u) { return; }
    }
    ctx->pc = 0x177B40u;
label_177b40:
    // 0x177b40: 0xc05da6c  jal         func_1769B0
    ctx->pc = 0x177B40u;
    SET_GPR_U32(ctx, 31, 0x177B48u);
    ctx->pc = 0x177B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177B40u;
            // 0x177b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1769B0u;
    if (runtime->hasFunction(0x1769B0u)) {
        auto targetFn = runtime->lookupFunction(0x1769B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B48u; }
        if (ctx->pc != 0x177B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001769B0_0x1769b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B48u; }
        if (ctx->pc != 0x177B48u) { return; }
    }
    ctx->pc = 0x177B48u;
label_177b48:
    // 0x177b48: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x177b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x177b4c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x177b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x177b50: 0x846337f8  lh          $v1, 0x37F8($v1)
    ctx->pc = 0x177b50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14328)));
    // 0x177b54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x177b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x177b58: 0xa44337f8  sh          $v1, 0x37F8($v0)
    ctx->pc = 0x177b58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14328), (uint16_t)GPR_U32(ctx, 3));
    // 0x177b5c: 0x0  nop
    ctx->pc = 0x177b5cu;
    // NOP
label_177b60:
    // 0x177b60: 0xc05e010  jal         func_178040
    ctx->pc = 0x177B60u;
    SET_GPR_U32(ctx, 31, 0x177B68u);
    ctx->pc = 0x177B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177B60u;
            // 0x177b64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178040u;
    if (runtime->hasFunction(0x178040u)) {
        auto targetFn = runtime->lookupFunction(0x178040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B68u; }
        if (ctx->pc != 0x177B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178040_0x178040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B68u; }
        if (ctx->pc != 0x177B68u) { return; }
    }
    ctx->pc = 0x177B68u;
label_177b68:
    // 0x177b68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177B68u;
    {
        const bool branch_taken_0x177b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177b68) {
            ctx->pc = 0x177B80u;
            goto label_177b80;
        }
    }
    ctx->pc = 0x177B70u;
    // 0x177b70: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x177b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x177b74: 0x1000ff9b  b           . + 4 + (-0x65 << 2)
    ctx->pc = 0x177B74u;
    {
        const bool branch_taken_0x177b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177B74u;
            // 0x177b78: 0x845137e0  lh          $s1, 0x37E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b74) {
            ctx->pc = 0x1779E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1779e4;
        }
    }
    ctx->pc = 0x177B7Cu;
    // 0x177b7c: 0x0  nop
    ctx->pc = 0x177b7cu;
    // NOP
label_177b80:
    // 0x177b80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x177b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177b84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177b84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177b88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177b8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177b90: 0x3e00008  jr          $ra
    ctx->pc = 0x177B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177B90u;
            // 0x177b94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177B98u;
    // 0x177b98: 0x0  nop
    ctx->pc = 0x177b98u;
    // NOP
    // 0x177b9c: 0x0  nop
    ctx->pc = 0x177b9cu;
    // NOP
    ctx->pc = 0x177ba0u;
}
