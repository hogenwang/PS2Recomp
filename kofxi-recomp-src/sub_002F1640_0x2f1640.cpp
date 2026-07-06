#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1640
// Address: 0x2f1640 - 0x2f1718
void sub_002F1640_0x2f1640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1640_0x2f1640");
#endif

    switch (ctx->pc) {
        case 0x2f1680u: goto label_2f1680;
        case 0x2f1688u: goto label_2f1688;
        case 0x2f169cu: goto label_2f169c;
        case 0x2f16a8u: goto label_2f16a8;
        case 0x2f16c8u: goto label_2f16c8;
        case 0x2f16f4u: goto label_2f16f4;
        default: break;
    }

    ctx->pc = 0x2f1640u;

    // 0x2f1640: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f1640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f1644: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2f1644u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2f1648: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2f1648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2f164c: 0xddee1950  ld          $t6, 0x1950($t7)
    ctx->pc = 0x2f164cu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 15), 6480)));
    // 0x2f1650: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2f1650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2f1654: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f1654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1658: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2f1658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2f165c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f165cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1660: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f1660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f1664: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f1664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1668: 0xffae0000  sd          $t6, 0x0($sp)
    ctx->pc = 0x2f1668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 14));
    // 0x2f166c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f166cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1670: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2f1670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2f1674: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2f1674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f1678: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2F1678u;
    SET_GPR_U32(ctx, 31, 0x2F1680u);
    ctx->pc = 0x2F167Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1678u;
            // 0x2f167c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1680u; }
        if (ctx->pc != 0x2F1680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1680u; }
        if (ctx->pc != 0x2F1680u) { return; }
    }
    ctx->pc = 0x2F1680u;
label_2f1680:
    // 0x2f1680: 0xc048c54  jal         func_123150
    ctx->pc = 0x2F1680u;
    SET_GPR_U32(ctx, 31, 0x2F1688u);
    ctx->pc = 0x2F1684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1680u;
            // 0x2f1684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123150u;
    if (runtime->hasFunction(0x123150u)) {
        auto targetFn = runtime->lookupFunction(0x123150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1688u; }
        if (ctx->pc != 0x2F1688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123150_0x123150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1688u; }
        if (ctx->pc != 0x2F1688u) { return; }
    }
    ctx->pc = 0x2F1688u;
label_2f1688:
    // 0x2f1688: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x2f1688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2f168c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f168cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f1690: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2f1690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f1694: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2F1694u;
    SET_GPR_U32(ctx, 31, 0x2F169Cu);
    ctx->pc = 0x2F1698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1694u;
            // 0x2f1698: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F169Cu; }
        if (ctx->pc != 0x2F169Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F169Cu; }
        if (ctx->pc != 0x2F169Cu) { return; }
    }
    ctx->pc = 0x2F169Cu;
label_2f169c:
    // 0x2f169c: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x2f169cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2f16a0: 0xc048c54  jal         func_123150
    ctx->pc = 0x2F16A0u;
    SET_GPR_U32(ctx, 31, 0x2F16A8u);
    ctx->pc = 0x2F16A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F16A0u;
            // 0x2f16a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123150u;
    if (runtime->hasFunction(0x123150u)) {
        auto targetFn = runtime->lookupFunction(0x123150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F16A8u; }
        if (ctx->pc != 0x2F16A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123150_0x123150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F16A8u; }
        if (ctx->pc != 0x2F16A8u) { return; }
    }
    ctx->pc = 0x2F16A8u;
label_2f16a8:
    // 0x2f16a8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f16a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f16ac: 0x524821  addu        $t1, $v0, $s2
    ctx->pc = 0x2f16acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2f16b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2f16b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f16b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16b8: 0x24a51958  addiu       $a1, $a1, 0x1958
    ctx->pc = 0x2f16b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6488));
    // 0x2f16bc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2f16bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f16c0: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x2F16C0u;
    SET_GPR_U32(ctx, 31, 0x2F16C8u);
    ctx->pc = 0x2F16C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F16C0u;
            // 0x2f16c4: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F16C8u; }
        if (ctx->pc != 0x2F16C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F16C8u; }
        if (ctx->pc != 0x2F16C8u) { return; }
    }
    ctx->pc = 0x2F16C8u;
label_2f16c8:
    // 0x2f16c8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f16c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f16cc: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2f16ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2f16d0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2f16d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16d4: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2f16d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16d8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2f16d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16dc: 0x24841968  addiu       $a0, $a0, 0x1968
    ctx->pc = 0x2f16dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6504));
    // 0x2f16e0: 0x24e71980  addiu       $a3, $a3, 0x1980
    ctx->pc = 0x2f16e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6528));
    // 0x2f16e4: 0x24051043  addiu       $a1, $zero, 0x1043
    ctx->pc = 0x2f16e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4163));
    // 0x2f16e8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2f16e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f16ec: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2F16ECu;
    SET_GPR_U32(ctx, 31, 0x2F16F4u);
    ctx->pc = 0x2F16F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F16ECu;
            // 0x2f16f0: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F16F4u; }
        if (ctx->pc != 0x2F16F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F16F4u; }
        if (ctx->pc != 0x2F16F4u) { return; }
    }
    ctx->pc = 0x2F16F4u;
label_2f16f4:
    // 0x2f16f4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2f16f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f16f8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2f16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f16fc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2f16fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f1700: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2f1700u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1704: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2f1704u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f1708: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f1708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f170c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F170Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F170Cu;
            // 0x2f1710: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1714u;
    // 0x2f1714: 0x0  nop
    ctx->pc = 0x2f1714u;
    // NOP
    ctx->pc = 0x2f1718u;
}
