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

// Function: sub_0020DA70
// Address: 0x20da70 - 0x20db00
void sub_0020DA70_0x20da70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DA70_0x20da70");
#endif

    switch (ctx->pc) {
        case 0x20daf0u: goto label_20daf0;
        default: break;
    }

    ctx->pc = 0x20da70u;

    // 0x20da70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20da70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20da74: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x20da74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x20da78: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x20da78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x20da7c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x20DA7Cu;
    {
        const bool branch_taken_0x20da7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA7Cu;
        // 0x20da80: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da7c) {
            ctx->pc = 0x20DAACu;
            goto label_20daac;
        }
    }
    ctx->pc = 0x20DA84u;
    // 0x20da84: 0x249c2  srl         $t1, $v0, 7
    ctx->pc = 0x20da84u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x20da88: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DA88u;
    {
        const bool branch_taken_0x20da88 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA88u;
        // 0x20da8c: 0x304a0007  andi        $t2, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da88) {
            ctx->pc = 0x20DA9Cu;
            goto label_20da9c;
        }
    }
    ctx->pc = 0x20DA90u;
    // 0x20da90: 0x51400003  beql        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DA90u;
    {
        const bool branch_taken_0x20da90 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x20da90) {
            ctx->pc = 0x20DA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DA90u;
            // 0x20da94: 0x218c2  srl         $v1, $v0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DAA0u;
            goto label_20daa0;
        }
    }
    ctx->pc = 0x20DA98u;
    // 0x20da98: 0x254afff8  addiu       $t2, $t2, -0x8
    ctx->pc = 0x20da98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
label_20da9c:
    // 0x20da9c: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x20da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_20daa0:
    // 0x20daa0: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x20daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x20daa4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20DAA4u;
    {
        const bool branch_taken_0x20daa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAA4u;
        // 0x20daa8: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20daa4) {
            ctx->pc = 0x20DAD8u;
            goto label_20dad8;
        }
    }
    ctx->pc = 0x20DAACu;
label_20daac:
    // 0x20daac: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x20daacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20dab0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DAB0u;
    {
        const bool branch_taken_0x20dab0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAB0u;
        // 0x20dab4: 0x304a0007  andi        $t2, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dab0) {
            ctx->pc = 0x20DAC4u;
            goto label_20dac4;
        }
    }
    ctx->pc = 0x20DAB8u;
    // 0x20dab8: 0x51400003  beql        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DAB8u;
    {
        const bool branch_taken_0x20dab8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dab8) {
            ctx->pc = 0x20DABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DAB8u;
            // 0x20dabc: 0x28410118  slti        $at, $v0, 0x118 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)280) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DAC8u;
            goto label_20dac8;
        }
    }
    ctx->pc = 0x20DAC0u;
    // 0x20dac0: 0x254afff8  addiu       $t2, $t2, -0x8
    ctx->pc = 0x20dac0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
label_20dac4:
    // 0x20dac4: 0x28410118  slti        $at, $v0, 0x118
    ctx->pc = 0x20dac4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)280) ? 1 : 0);
label_20dac8:
    // 0x20dac8: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DAC8u;
    {
        const bool branch_taken_0x20dac8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dac8) {
            ctx->pc = 0x20DACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DAC8u;
            // 0x20dacc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DAD8u;
            goto label_20dad8;
        }
    }
    ctx->pc = 0x20DAD0u;
    // 0x20dad0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x20DAD0u;
    {
        const bool branch_taken_0x20dad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAD0u;
        // 0x20dad4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dad0) {
            ctx->pc = 0x20DAD8u;
            goto label_20dad8;
        }
    }
    ctx->pc = 0x20DAD8u;
label_20dad8:
    // 0x20dad8: 0x25940  sll         $t3, $v0, 5
    ctx->pc = 0x20dad8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x20dadc: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x20dadcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x20dae0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x20dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x20dae4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20dae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20dae8: 0xc083680  jal         func_20DA00
    ctx->pc = 0x20DAE8u;
    SET_GPR_U32(ctx, 31, 0x20DAF0u);
    ctx->pc = 0x20DAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DAE8u;
    // 0x20daec: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DA00u, 0x20DAE8u, 0x20DAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DAF0u;
label_20daf0:
    // 0x20daf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20daf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20daf4: 0x3e00008  jr          $ra
    ctx->pc = 0x20DAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAF4u;
        // 0x20daf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DAFCu;
    // 0x20dafc: 0x0  nop
    ctx->pc = 0x20dafcu;
    // NOP
    if (ctx->pc == 0x20dafcu) { ctx->pc = 0x20db00u; }
}
