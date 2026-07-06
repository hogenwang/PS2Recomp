#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ADD78
// Address: 0x1add78 - 0x1ade30
void sub_001ADD78_0x1add78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADD78_0x1add78");
#endif

    switch (ctx->pc) {
        case 0x1addd8u: goto label_1addd8;
        case 0x1ade08u: goto label_1ade08;
        default: break;
    }

    ctx->pc = 0x1add78u;

    // 0x1add78: 0x28a50010  slti        $a1, $a1, 0x10
    ctx->pc = 0x1add78u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1add7c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1add7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add80: 0x14a00012  bnez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1ADD80u;
    {
        const bool branch_taken_0x1add80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD80u;
            // 0x1add84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add80) {
            ctx->pc = 0x1ADDCCu;
            goto label_1addcc;
        }
    }
    ctx->pc = 0x1ADD88u;
    // 0x1add88: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x1add88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1add8c: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x1add8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1add90: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1add90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1add94: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1add94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1add98: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1add98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1add9c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1add9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1adda0: 0x1465000a  bne         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1ADDA0u;
    {
        const bool branch_taken_0x1adda0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1ADDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDA0u;
            // 0x1adda4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adda0) {
            ctx->pc = 0x1ADDCCu;
            goto label_1addcc;
        }
    }
    ctx->pc = 0x1ADDA8u;
    // 0x1adda8: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x1adda8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1addac: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1addacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1addb0: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x1addb0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1addb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1addb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1addb8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1addb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1addbc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1addbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1addc0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1addc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1addc4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1addc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1addc8: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x1addc8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_1addcc:
    // 0x1addcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADDCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ADDD4u;
    // 0x1addd4: 0x0  nop
    ctx->pc = 0x1addd4u;
    // NOP
label_1addd8:
    // 0x1addd8: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1addd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1adddc: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ADDDCu;
    {
        const bool branch_taken_0x1adddc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDDCu;
            // 0x1adde0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adddc) {
            ctx->pc = 0x1ADE08u;
            goto label_1ade08;
        }
    }
    ctx->pc = 0x1ADDE4u;
    // 0x1adde4: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1adde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1adde8: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ADDE8u;
    {
        const bool branch_taken_0x1adde8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adde8) {
            ctx->pc = 0x1ADDECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDE8u;
            // 0x1addec: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ADDF0u;
            goto label_1addf0;
        }
    }
    ctx->pc = 0x1ADDF0u;
label_1addf0:
    // 0x1addf0: 0x24420021  addiu       $v0, $v0, 0x21
    ctx->pc = 0x1addf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
    // 0x1addf4: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x1addf4u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1addf8: 0x1012  mflo        $v0
    ctx->pc = 0x1addf8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1addfc: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1addfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ade00: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE00u;
            // 0x1ade04: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ADE08u;
label_1ade08:
    // 0x1ade08: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ade08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ade0c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ADE0Cu;
    {
        const bool branch_taken_0x1ade0c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ade0c) {
            ctx->pc = 0x1ADE10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE0Cu;
            // 0x1ade10: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ADE14u;
            goto label_1ade14;
        }
    }
    ctx->pc = 0x1ADE14u;
label_1ade14:
    // 0x1ade14: 0x24420039  addiu       $v0, $v0, 0x39
    ctx->pc = 0x1ade14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 57));
    // 0x1ade18: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x1ade18u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ade1c: 0x1012  mflo        $v0
    ctx->pc = 0x1ade1cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1ade20: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1ade20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ade24: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE24u;
            // 0x1ade28: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ADE2Cu;
    // 0x1ade2c: 0x0  nop
    ctx->pc = 0x1ade2cu;
    // NOP
    ctx->pc = 0x1ade30u;
}
