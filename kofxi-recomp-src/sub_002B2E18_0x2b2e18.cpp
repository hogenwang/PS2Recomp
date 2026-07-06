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

// Function: sub_002B2E18
// Address: 0x2b2e18 - 0x2b2ec8
void sub_002B2E18_0x2b2e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2E18_0x2b2e18");
#endif

    switch (ctx->pc) {
        case 0x2b2e78u: goto label_2b2e78;
        case 0x2b2e90u: goto label_2b2e90;
        default: break;
    }

    ctx->pc = 0x2b2e18u;

    // 0x2b2e18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b2e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b2e1c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b2e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b2e20: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b2e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b2e24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b2e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2e28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b2e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b2e2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2e30: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x2b2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2b2e34: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B2E34u;
    {
        const bool branch_taken_0x2b2e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E34u;
        // 0x2b2e38: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e34) {
            ctx->pc = 0x2B2E90u;
            goto label_2b2e90;
        }
    }
    ctx->pc = 0x2B2E3Cu;
    // 0x2b2e3c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x2b2e3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b2e40: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B2E40u;
    {
        const bool branch_taken_0x2b2e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2e40) {
            ctx->pc = 0x2B2E90u;
            goto label_2b2e90;
        }
    }
    ctx->pc = 0x2B2E48u;
    // 0x2b2e48: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x2b2e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2b2e4c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2b2e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b2e50: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2b2e50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b2e54: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2B2E54u;
    {
        const bool branch_taken_0x2b2e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2e54) {
            ctx->pc = 0x2B2E90u;
            goto label_2b2e90;
        }
    }
    ctx->pc = 0x2B2E5Cu;
    // 0x2b2e5c: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x2b2e5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2b2e60: 0x5803c  dsll32      $s0, $a1, 0
    ctx->pc = 0x2b2e60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2b2e64: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2b2e64u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2b2e68: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x2b2e68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2b2e6c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2b2e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2b2e70: 0xc0acbd0  jal         func_2B2F40
    ctx->pc = 0x2B2E70u;
    SET_GPR_U32(ctx, 31, 0x2B2E78u);
    ctx->pc = 0x2B2E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2E70u;
    // 0x2b2e74: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2F40u, 0x2B2E70u, 0x2B2E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2E78u;
label_2b2e78:
    // 0x2b2e78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b2e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2e7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b2e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2e80: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b2e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b2e84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b2e84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2e88: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B2E88u;
    SET_GPR_U32(ctx, 31, 0x2B2E90u);
    ctx->pc = 0x2B2E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2E88u;
    // 0x2b2e8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B2E88u, 0x2B2E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2E90u;
label_2b2e90:
    // 0x2b2e90: 0x6230003  bgezl       $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2E90u;
    {
        const bool branch_taken_0x2b2e90 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2b2e90) {
            ctx->pc = 0x2B2E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2E90u;
            // 0x2b2e94: 0x8e430040  lw          $v1, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2EA0u;
            goto label_2b2ea0;
        }
    }
    ctx->pc = 0x2B2E98u;
    // 0x2b2e98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2E98u;
    {
        const bool branch_taken_0x2b2e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E98u;
        // 0x2b2e9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e98) {
            ctx->pc = 0x2B2EACu;
            goto label_2b2eac;
        }
    }
    ctx->pc = 0x2B2EA0u;
label_2b2ea0:
    // 0x2b2ea0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2ea4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2b2ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2b2ea8: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x2b2ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
label_2b2eac:
    // 0x2b2eac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b2eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b2eb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b2eb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2eb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b2eb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2eb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EBCu;
        // 0x2b2ec0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2EC4u;
    // 0x2b2ec4: 0x0  nop
    ctx->pc = 0x2b2ec4u;
    // NOP
    if (ctx->pc == 0x2b2ec4u) { ctx->pc = 0x2b2ec8u; }
}
