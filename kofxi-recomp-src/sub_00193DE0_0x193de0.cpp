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

// Function: sub_00193DE0
// Address: 0x193de0 - 0x193e80
void sub_00193DE0_0x193de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193DE0_0x193de0");
#endif

    switch (ctx->pc) {
        case 0x193df8u: goto label_193df8;
        default: break;
    }

    ctx->pc = 0x193de0u;

    // 0x193de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193de4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193de8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193dec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193df0: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x193DF0u;
    SET_GPR_U32(ctx, 31, 0x193DF8u);
    ctx->pc = 0x193DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193DF0u;
    // 0x193df4: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189FE0u, 0x193DF0u, 0x193DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DF8u;
label_193df8:
    // 0x193df8: 0x904204f0  lbu         $v0, 0x4F0($v0)
    ctx->pc = 0x193df8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1264)));
    // 0x193dfc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x193dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x193e00: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x193E00u;
    {
        const bool branch_taken_0x193e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193e00) {
            ctx->pc = 0x193E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193E00u;
            // 0x193e04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193E6Cu;
            goto label_193e6c;
        }
    }
    ctx->pc = 0x193E08u;
    // 0x193e08: 0x960203a4  lhu         $v0, 0x3A4($s0)
    ctx->pc = 0x193e08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 932)));
    // 0x193e0c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x193e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x193e10: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x193E10u;
    {
        const bool branch_taken_0x193e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193e10) {
            ctx->pc = 0x193E68u;
            goto label_193e68;
        }
    }
    ctx->pc = 0x193E18u;
    // 0x193e18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x193e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x193e1c: 0x9442d198  lhu         $v0, -0x2E68($v0)
    ctx->pc = 0x193e1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294955416)));
    // 0x193e20: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x193e20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x193e24: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x193E24u;
    {
        const bool branch_taken_0x193e24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x193e24) {
            ctx->pc = 0x193E68u;
            goto label_193e68;
        }
    }
    ctx->pc = 0x193E2Cu;
    // 0x193e2c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x193e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x193e30: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x193e30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x193e34: 0x2463d1a0  addiu       $v1, $v1, -0x2E60
    ctx->pc = 0x193e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955424));
    // 0x193e38: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x193e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193e3c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x193e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x193e40: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x193e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x193e44: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x193e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x193e48: 0x2442d1a4  addiu       $v0, $v0, -0x2E5C
    ctx->pc = 0x193e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955428));
    // 0x193e4c: 0x8e0600dc  lw          $a2, 0xDC($s0)
    ctx->pc = 0x193e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x193e50: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x193e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x193e54: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x193e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x193e58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x193e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e5c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x193e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x193e60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x193E60u;
    {
        const bool branch_taken_0x193e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E60u;
        // 0x193e64: 0xa464d198  sh          $a0, -0x2E68($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294955416), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193e60) {
            ctx->pc = 0x193E6Cu;
            goto label_193e6c;
        }
    }
    ctx->pc = 0x193E68u;
label_193e68:
    // 0x193e68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x193e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_193e6c:
    // 0x193e6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193e70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193e74: 0x3e00008  jr          $ra
    ctx->pc = 0x193E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E74u;
        // 0x193e78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193E7Cu;
    // 0x193e7c: 0x0  nop
    ctx->pc = 0x193e7cu;
    // NOP
    if (ctx->pc == 0x193e7cu) { ctx->pc = 0x193e80u; }
}
