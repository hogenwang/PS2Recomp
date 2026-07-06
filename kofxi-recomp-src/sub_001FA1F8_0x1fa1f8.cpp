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

// Function: sub_001FA1F8
// Address: 0x1fa1f8 - 0x1fa288
void sub_001FA1F8_0x1fa1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA1F8_0x1fa1f8");
#endif

    switch (ctx->pc) {
        case 0x1fa210u: goto label_1fa210;
        case 0x1fa240u: goto label_1fa240;
        case 0x1fa264u: goto label_1fa264;
        default: break;
    }

    ctx->pc = 0x1fa1f8u;

    // 0x1fa1f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fa1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa1fc: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1fa1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1fa200: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1fa200u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1fa204: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA204u;
        // 0x1fa208: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA20Cu;
    // 0x1fa20c: 0x0  nop
    ctx->pc = 0x1fa20cu;
    // NOP
label_1fa210:
    // 0x1fa210: 0x8c833708  lw          $v1, 0x3708($a0)
    ctx->pc = 0x1fa210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14088)));
    // 0x1fa214: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA214u;
    {
        const bool branch_taken_0x1fa214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa214) {
            ctx->pc = 0x1FA234u;
            goto label_1fa234;
        }
    }
    ctx->pc = 0x1FA21Cu;
    // 0x1fa21c: 0x8c620db8  lw          $v0, 0xDB8($v1)
    ctx->pc = 0x1fa21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3512)));
    // 0x1fa220: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FA220u;
    {
        const bool branch_taken_0x1fa220 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fa220) {
            ctx->pc = 0x1FA224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA220u;
            // 0x1fa224: 0xac650db8  sw          $a1, 0xDB8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 3512), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA228u;
            goto label_1fa228;
        }
    }
    ctx->pc = 0x1FA228u;
label_1fa228:
    // 0x1fa228: 0x8c620dbc  lw          $v0, 0xDBC($v1)
    ctx->pc = 0x1fa228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3516)));
    // 0x1fa22c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FA22Cu;
    {
        const bool branch_taken_0x1fa22c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fa22c) {
            ctx->pc = 0x1FA230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA22Cu;
            // 0x1fa230: 0xac660dbc  sw          $a2, 0xDBC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 3516), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA234u;
            goto label_1fa234;
        }
    }
    ctx->pc = 0x1FA234u;
label_1fa234:
    // 0x1fa234: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA23Cu;
    // 0x1fa23c: 0x0  nop
    ctx->pc = 0x1fa23cu;
    // NOP
label_1fa240:
    // 0x1fa240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fa240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fa244: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fa244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fa248: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa24c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fa24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fa250: 0x8e023708  lw          $v0, 0x3708($s0)
    ctx->pc = 0x1fa250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14088)));
    // 0x1fa254: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA254u;
    {
        const bool branch_taken_0x1fa254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa254) {
            ctx->pc = 0x1FA258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA254u;
            // 0x1fa258: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA278u;
            goto label_1fa278;
        }
    }
    ctx->pc = 0x1FA25Cu;
    // 0x1fa25c: 0xc07e8a2  jal         func_1FA288
    ctx->pc = 0x1FA25Cu;
    SET_GPR_U32(ctx, 31, 0x1FA264u);
    ctx->pc = 0x1FA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA288u, 0x1FA25Cu, 0x1FA264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA264u;
label_1fa264:
    // 0x1fa264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa268: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fa268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa26c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa26cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa270: 0x807eaba  j           func_1FAAE8
    ctx->pc = 0x1FA270u;
    ctx->pc = 0x1FA274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA270u;
    // 0x1fa274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAAE8u, 0x1FA270u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1FA278u;
label_1fa278:
    // 0x1fa278: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fa278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa27c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA27Cu;
        // 0x1fa280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA284u;
    // 0x1fa284: 0x0  nop
    ctx->pc = 0x1fa284u;
    // NOP
    if (ctx->pc == 0x1fa284u) { ctx->pc = 0x1fa288u; }
}
