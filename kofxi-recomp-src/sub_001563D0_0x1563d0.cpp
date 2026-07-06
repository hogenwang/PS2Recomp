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

// Function: sub_001563D0
// Address: 0x1563d0 - 0x156450
void sub_001563D0_0x1563d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001563D0_0x1563d0");
#endif

    ctx->pc = 0x1563d0u;

    // 0x1563d0: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1563D0u;
    {
        const bool branch_taken_0x1563d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1563d0) {
            ctx->pc = 0x1563D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1563D0u;
            // 0x1563d4: 0x9082008c  lbu         $v0, 0x8C($a0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1563E0u;
            goto label_1563e0;
        }
    }
    ctx->pc = 0x1563D8u;
    // 0x1563d8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1563D8u;
    {
        const bool branch_taken_0x1563d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1563DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1563D8u;
        // 0x1563dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1563d8) {
            ctx->pc = 0x156440u;
            goto label_156440;
        }
    }
    ctx->pc = 0x1563E0u;
label_1563e0:
    // 0x1563e0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1563e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1563e4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1563E4u;
    {
        const bool branch_taken_0x1563e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1563e4) {
            ctx->pc = 0x1563E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1563E4u;
            // 0x1563e8: 0x84830000  lh          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156400u;
            goto label_156400;
        }
    }
    ctx->pc = 0x1563ECu;
    // 0x1563ec: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1563ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1563f0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x1563f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1563f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1563f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1563f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1563F8u;
    {
        const bool branch_taken_0x1563f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1563FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1563F8u;
        // 0x1563fc: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1563f8) {
            ctx->pc = 0x15640Cu;
            goto label_15640c;
        }
    }
    ctx->pc = 0x156400u;
label_156400:
    // 0x156400: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x156400u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x156404: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x156404u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x156408: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x156408u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_15640c:
    // 0x15640c: 0x9082008c  lbu         $v0, 0x8C($a0)
    ctx->pc = 0x15640cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x156410: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x156410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x156414: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x156414u;
    {
        const bool branch_taken_0x156414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156414) {
            ctx->pc = 0x156418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156414u;
            // 0x156418: 0x84830002  lh          $v1, 0x2($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156430u;
            goto label_156430;
        }
    }
    ctx->pc = 0x15641Cu;
    // 0x15641c: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x15641cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x156420: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x156420u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x156424: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x156424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x156428: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x156428u;
    {
        const bool branch_taken_0x156428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156428u;
        // 0x15642c: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156428) {
            ctx->pc = 0x15643Cu;
            goto label_15643c;
        }
    }
    ctx->pc = 0x156430u;
label_156430:
    // 0x156430: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x156430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x156434: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x156434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x156438: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x156438u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_15643c:
    // 0x15643c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15643cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156440:
    // 0x156440: 0x3e00008  jr          $ra
    ctx->pc = 0x156440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156448u;
    // 0x156448: 0x0  nop
    ctx->pc = 0x156448u;
    // NOP
    // 0x15644c: 0x0  nop
    ctx->pc = 0x15644cu;
    // NOP
}
