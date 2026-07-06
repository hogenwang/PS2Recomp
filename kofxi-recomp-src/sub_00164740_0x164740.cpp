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

// Function: sub_00164740
// Address: 0x164740 - 0x1647c0
void sub_00164740_0x164740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164740_0x164740");
#endif

    ctx->pc = 0x164740u;

    // 0x164740: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x164740u;
    {
        const bool branch_taken_0x164740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x164740) {
            ctx->pc = 0x1647B8u;
            goto label_1647b8;
        }
    }
    ctx->pc = 0x164748u;
    // 0x164748: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x164748u;
    {
        const bool branch_taken_0x164748 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x164748) {
            ctx->pc = 0x1647B8u;
            goto label_1647b8;
        }
    }
    ctx->pc = 0x164750u;
    // 0x164750: 0x90a7008c  lbu         $a3, 0x8C($a1)
    ctx->pc = 0x164750u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x164754: 0x30e30002  andi        $v1, $a3, 0x2
    ctx->pc = 0x164754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x164758: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x164758u;
    {
        const bool branch_taken_0x164758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x164758) {
            ctx->pc = 0x16475Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164758u;
            // 0x16475c: 0x848305ec  lh          $v1, 0x5EC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164768u;
            goto label_164768;
        }
    }
    ctx->pc = 0x164760u;
    // 0x164760: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164760u;
    {
        const bool branch_taken_0x164760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164760u;
        // 0x164764: 0x948305ec  lhu         $v1, 0x5EC($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164760) {
            ctx->pc = 0x164770u;
            goto label_164770;
        }
    }
    ctx->pc = 0x164768u;
label_164768:
    // 0x164768: 0x31823  negu        $v1, $v1
    ctx->pc = 0x164768u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16476c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16476cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_164770:
    // 0x164770: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x164770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x164774: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x164774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x164778: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x164778u;
    {
        const bool branch_taken_0x164778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x164778) {
            ctx->pc = 0x16477Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164778u;
            // 0x16477c: 0x848305ee  lh          $v1, 0x5EE($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1518)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164788u;
            goto label_164788;
        }
    }
    ctx->pc = 0x164780u;
    // 0x164780: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164780u;
    {
        const bool branch_taken_0x164780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164780u;
        // 0x164784: 0x948305ee  lhu         $v1, 0x5EE($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1518)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164780) {
            ctx->pc = 0x164790u;
            goto label_164790;
        }
    }
    ctx->pc = 0x164788u;
label_164788:
    // 0x164788: 0x31823  negu        $v1, $v1
    ctx->pc = 0x164788u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16478c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16478cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_164790:
    // 0x164790: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x164790u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x164794: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x164794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x164798: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x164798u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16479c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x16479cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1647a0: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x1647a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1647a4: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x1647a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1647a8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1647a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1647ac: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x1647acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1647b0: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1647b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x1647b4: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x1647b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
label_1647b8:
    // 0x1647b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1647B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1647B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1647C0u;
}
