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

// Function: sub_002825B8
// Address: 0x2825b8 - 0x282630
void sub_002825B8_0x2825b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002825B8_0x2825b8");
#endif

    switch (ctx->pc) {
        case 0x2825ccu: goto label_2825cc;
        case 0x2825e8u: goto label_2825e8;
        case 0x282618u: goto label_282618;
        default: break;
    }

    ctx->pc = 0x2825b8u;

    // 0x2825b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2825b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2825bc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2825bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2825c0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2825c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2825c4: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2825C4u;
    SET_GPR_U32(ctx, 31, 0x2825CCu);
    ctx->pc = 0x2825C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2825C4u;
    // 0x2825c8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2825C4u, 0x2825CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2825CCu;
label_2825cc:
    // 0x2825cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2825ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825d0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2825D0u;
    {
        const bool branch_taken_0x2825d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2825d0) {
            ctx->pc = 0x2825D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2825D0u;
            // 0x2825d4: 0x240200ee  addiu       $v0, $zero, 0xEE (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2825FCu;
            goto label_2825fc;
        }
    }
    ctx->pc = 0x2825D8u;
    // 0x2825d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2825d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2825dc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2825dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2825e0: 0xc0a06ea  jal         func_281BA8
    ctx->pc = 0x2825E0u;
    SET_GPR_U32(ctx, 31, 0x2825E8u);
    ctx->pc = 0x2825E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2825E0u;
    // 0x2825e4: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281BA8u, 0x2825E0u, 0x2825E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2825E8u;
label_2825e8:
    // 0x2825e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2825e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2825ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825f0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2825f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2825f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2825F4u;
    {
        const bool branch_taken_0x2825f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2825F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825F4u;
        // 0x2825f8: 0x203100b  movn        $v0, $s0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2825f4) {
            ctx->pc = 0x28261Cu;
            goto label_28261c;
        }
    }
    ctx->pc = 0x2825FCu;
label_2825fc:
    // 0x2825fc: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2825fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x282600: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x282600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x282604: 0x240500d3  addiu       $a1, $zero, 0xD3
    ctx->pc = 0x282604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x282608: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x282608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x28260c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28260cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282610: 0xc0a5648  jal         func_295920
    ctx->pc = 0x282610u;
    SET_GPR_U32(ctx, 31, 0x282618u);
    ctx->pc = 0x282614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282610u;
    // 0x282614: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x282610u, 0x282618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282618u;
label_282618:
    // 0x282618: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x282618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28261c:
    // 0x28261c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28261cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282620: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x282620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282624: 0x3e00008  jr          $ra
    ctx->pc = 0x282624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282624u;
        // 0x282628: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28262Cu;
    // 0x28262c: 0x0  nop
    ctx->pc = 0x28262cu;
    // NOP
}
