#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4FD0
// Address: 0x1c4fd0 - 0x1c5040
void sub_001C4FD0_0x1c4fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4FD0_0x1c4fd0");
#endif

    switch (ctx->pc) {
        case 0x1c4fe4u: goto label_1c4fe4;
        case 0x1c5008u: goto label_1c5008;
        default: break;
    }

    ctx->pc = 0x1c4fd0u;

    // 0x1c4fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4fd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c4fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c4fdc: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1C4FDCu;
    SET_GPR_U32(ctx, 31, 0x1C4FE4u);
    ctx->pc = 0x1C4FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4FDCu;
            // 0x1c4fe0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4FE4u; }
        if (ctx->pc != 0x1C4FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4FE4u; }
        if (ctx->pc != 0x1C4FE4u) { return; }
    }
    ctx->pc = 0x1C4FE4u;
label_1c4fe4:
    // 0x1c4fe4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c4fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4fe8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1c4fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c4fec: 0x2cc30011  sltiu       $v1, $a2, 0x11
    ctx->pc = 0x1c4fecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x1c4ff0: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1c4ff0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1c4ff4: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1C4FF4u;
    {
        const bool branch_taken_0x1c4ff4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4FF4u;
            // 0x1c4ff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ff4) {
            ctx->pc = 0x1C502Cu;
            goto label_1c502c;
        }
    }
    ctx->pc = 0x1C4FFCu;
    // 0x1c4ffc: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x1c4ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1c5000: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x1c5000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1c5004: 0x0  nop
    ctx->pc = 0x1c5004u;
    // NOP
label_1c5008:
    // 0x1c5008: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c5008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c500c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1c500cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c5010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5014: 0x10670006  beq         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5014u;
    {
        const bool branch_taken_0x1c5014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1C5018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5014u;
            // 0x1c5018: 0xa6202b  sltu        $a0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5014) {
            ctx->pc = 0x1C5030u;
            goto label_1c5030;
        }
    }
    ctx->pc = 0x1C501Cu;
    // 0x1c501c: 0x0  nop
    ctx->pc = 0x1c501cu;
    // NOP
    // 0x1c5020: 0x0  nop
    ctx->pc = 0x1c5020u;
    // NOP
    // 0x1c5024: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C5024u;
    {
        const bool branch_taken_0x1c5024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5024u;
            // 0x1c5028: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5024) {
            ctx->pc = 0x1C5008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5008;
        }
    }
    ctx->pc = 0x1C502Cu;
label_1c502c:
    // 0x1c502c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c502cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5030:
    // 0x1c5030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5034: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c5034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5038: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C503Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5038u;
            // 0x1c503c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5040u;
    ctx->pc = 0x1c5040u;
}
