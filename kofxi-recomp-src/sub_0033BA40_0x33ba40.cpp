#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033BA40
// Address: 0x33ba40 - 0x33bb40
void sub_0033BA40_0x33ba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BA40_0x33ba40");
#endif

    switch (ctx->pc) {
        case 0x33bab0u: goto label_33bab0;
        case 0x33bac4u: goto label_33bac4;
        case 0x33bb04u: goto label_33bb04;
        case 0x33bb14u: goto label_33bb14;
        default: break;
    }

    ctx->pc = 0x33ba40u;

    // 0x33ba40: 0x3e00008  jr          $ra
    ctx->pc = 0x33BA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BA48u;
    // 0x33ba48: 0x0  nop
    ctx->pc = 0x33ba48u;
    // NOP
    // 0x33ba4c: 0x0  nop
    ctx->pc = 0x33ba4cu;
    // NOP
    // 0x33ba50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33ba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33ba54: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33ba58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33ba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33ba5c: 0x240504b4  addiu       $a1, $zero, 0x4B4
    ctx->pc = 0x33ba5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1204));
    // 0x33ba60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33ba60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33ba64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33ba64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33ba68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33ba68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33ba6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33ba6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba70: 0x90469730  lbu         $a2, -0x68D0($v0)
    ctx->pc = 0x33ba70u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33ba74: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x33ba74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x33ba78: 0x24848b10  addiu       $a0, $a0, -0x74F0
    ctx->pc = 0x33ba78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937360));
    // 0x33ba7c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33ba80: 0x8c43e8c8  lw          $v1, -0x1738($v0)
    ctx->pc = 0x33ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961352)));
    // 0x33ba84: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x33ba84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x33ba88: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33ba8c: 0xa440e8a8  sh          $zero, -0x1758($v0)
    ctx->pc = 0x33ba8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961320), (uint16_t)GPR_U32(ctx, 0));
    // 0x33ba90: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33ba94: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x33ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33ba98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ba9c: 0x94520004  lhu         $s2, 0x4($v0)
    ctx->pc = 0x33ba9cu;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33baa0: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x33BAA0u;
    {
        const bool branch_taken_0x33baa0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BAA0u;
        // 0x33baa4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33baa0) {
            ctx->pc = 0x33BAE8u;
            goto label_33bae8;
        }
    }
    ctx->pc = 0x33BAA8u;
    // 0x33baa8: 0xc0cf0f4  jal         func_33C3D0
    ctx->pc = 0x33BAA8u;
    SET_GPR_U32(ctx, 31, 0x33BAB0u);
    ctx->pc = 0x33BAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BAA8u;
    // 0x33baac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C3D0u, 0x33BAA8u, 0x33BAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BAB0u;
label_33bab0:
    // 0x33bab0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33BAB0u;
    {
        const bool branch_taken_0x33bab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bab0) {
            ctx->pc = 0x33BAE8u;
            goto label_33bae8;
        }
    }
    ctx->pc = 0x33BAB8u;
    // 0x33bab8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33bab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33babc: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x33babcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x33bac0: 0x248433f0  addiu       $a0, $a0, 0x33F0
    ctx->pc = 0x33bac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
label_33bac4:
    // 0x33bac4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x33bac4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33bac8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33bac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33bacc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33BACCu;
    {
        const bool branch_taken_0x33bacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bacc) {
            ctx->pc = 0x33BAE8u;
            goto label_33bae8;
        }
    }
    ctx->pc = 0x33BAD4u;
    // 0x33bad4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33bad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x33bad8: 0x2a02000f  slti        $v0, $s0, 0xF
    ctx->pc = 0x33bad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x33badc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x33BADCu;
    {
        const bool branch_taken_0x33badc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BADCu;
        // 0x33bae0: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33badc) {
            ctx->pc = 0x33BAC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33bac4;
        }
    }
    ctx->pc = 0x33BAE4u;
    // 0x33bae4: 0x0  nop
    ctx->pc = 0x33bae4u;
    // NOP
label_33bae8:
    // 0x33bae8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33baec: 0xa450e8a8  sh          $s0, -0x1758($v0)
    ctx->pc = 0x33baecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961320), (uint16_t)GPR_U32(ctx, 16));
    // 0x33baf0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33baf4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33baf8: 0x2484d070  addiu       $a0, $a0, -0x2F90
    ctx->pc = 0x33baf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955120));
    // 0x33bafc: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x33BAFCu;
    SET_GPR_U32(ctx, 31, 0x33BB04u);
    ctx->pc = 0x33BB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BAFCu;
    // 0x33bb00: 0xa040e888  sb          $zero, -0x1778($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961288), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x33BAFCu, 0x33BB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BB04u;
label_33bb04:
    // 0x33bb04: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33bb04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33bb08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33bb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bb0c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x33BB0Cu;
    SET_GPR_U32(ctx, 31, 0x33BB14u);
    ctx->pc = 0x33BB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BB0Cu;
    // 0x33bb10: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x33BB0Cu, 0x33BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BB14u;
label_33bb14:
    // 0x33bb14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33bb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33bb18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33bb18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33bb1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33bb1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33bb20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33bb20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bb24: 0x3e00008  jr          $ra
    ctx->pc = 0x33BB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BB24u;
        // 0x33bb28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BB2Cu;
    // 0x33bb2c: 0x0  nop
    ctx->pc = 0x33bb2cu;
    // NOP
    // 0x33bb30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33bb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33bb34: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33bb38: 0x8055728  j           func_155CA0
    ctx->pc = 0x33BB38u;
    ctx->pc = 0x33BB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BB38u;
    // 0x33bb3c: 0xa0439738  sb          $v1, -0x68C8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940472), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    sub_00155CA0_0x155ca0(rdram, ctx, runtime); return;
    ctx->pc = 0x33BB40u;
}
