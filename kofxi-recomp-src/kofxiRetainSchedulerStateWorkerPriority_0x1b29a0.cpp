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

// Function: kofxiRetainSchedulerStateWorkerPriority
// Address: 0x1b29a0 - 0x1b2a28
void kofxiRetainSchedulerStateWorkerPriority_0x1b29a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiRetainSchedulerStateWorkerPriority_0x1b29a0");
#endif

    switch (ctx->pc) {
        case 0x1b29ccu: goto label_1b29cc;
        case 0x1b29e4u: goto label_1b29e4;
        case 0x1b29fcu: goto label_1b29fc;
        default: break;
    }

    ctx->pc = 0x1b29a0u;

    // 0x1b29a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b29a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b29a4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b29a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b29a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b29ac: 0x24523030  addiu       $s2, $v0, 0x3030
    ctx->pc = 0x1b29acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12336));
    // 0x1b29b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b29b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b29b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b29b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b29b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b29b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b29bc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B29BCu;
    {
        const bool branch_taken_0x1b29bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B29BCu;
        // 0x1b29c0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29bc) {
            ctx->pc = 0x1B2A04u;
            goto label_1b2a04;
        }
    }
    ctx->pc = 0x1B29C4u;
    // 0x1b29c4: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x1B29C4u;
    SET_GPR_U32(ctx, 31, 0x1B29CCu);
    ctx->pc = 0x1B29C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B29C4u;
    // 0x1b29c8: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x1B29C4u, 0x1B29CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B29CCu;
label_1b29cc:
    // 0x1b29cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b29ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29d0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b29d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b29d4: 0x8c453000  lw          $a1, 0x3000($v0)
    ctx->pc = 0x1b29d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12288)));
    // 0x1b29d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b29d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29dc: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B29DCu;
    SET_GPR_U32(ctx, 31, 0x1B29E4u);
    ctx->pc = 0x1B29E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B29DCu;
    // 0x1b29e0: 0x26103088  addiu       $s0, $s0, 0x3088 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x1B29DCu, 0x1B29E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B29E4u;
label_1b29e4:
    // 0x1b29e4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b29e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b29e8: 0xac62a920  sw          $v0, -0x56E0($v1)
    ctx->pc = 0x1b29e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945056), GPR_U32(ctx, 2));
    // 0x1b29ec: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1b29ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1b29f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b29f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b29f4: 0xc06cc66  jal         func_1B3198
    ctx->pc = 0x1B29F4u;
    SET_GPR_U32(ctx, 31, 0x1B29FCu);
    ctx->pc = 0x1B29F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B29F4u;
    // 0x1b29f8: 0xacb1a924  sw          $s1, -0x56DC($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294945060), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3198u, 0x1B29F4u, 0x1B29FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B29FCu;
label_1b29fc:
    // 0x1b29fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b29fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2a00: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b2a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b2a04:
    // 0x1b2a04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b2a08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2a0c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1b2a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1b2a10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2a14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2a14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2a18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b2a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A1Cu;
        // 0x1b2a20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2A24u;
    // 0x1b2a24: 0x0  nop
    ctx->pc = 0x1b2a24u;
    // NOP
    if (ctx->pc == 0x1b2a24u) { ctx->pc = 0x1b2a28u; }
}
