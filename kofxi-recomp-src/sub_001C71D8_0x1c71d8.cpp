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

// Function: sub_001C71D8
// Address: 0x1c71d8 - 0x1c7278
void sub_001C71D8_0x1c71d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C71D8_0x1c71d8");
#endif

    switch (ctx->pc) {
        case 0x1c71f4u: goto label_1c71f4;
        case 0x1c720cu: goto label_1c720c;
        case 0x1c7220u: goto label_1c7220;
        case 0x1c7250u: goto label_1c7250;
        default: break;
    }

    ctx->pc = 0x1c71d8u;

    // 0x1c71d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c71d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c71dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c71dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c71e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c71e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71e4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c71e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c71e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c71e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c71ec: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1C71ECu;
    SET_GPR_U32(ctx, 31, 0x1C71F4u);
    ctx->pc = 0x1C71F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C71ECu;
    // 0x1c71f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1C71ECu, 0x1C71F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71F4u;
label_1c71f4:
    // 0x1c71f4: 0x2c420012  sltiu       $v0, $v0, 0x12
    ctx->pc = 0x1c71f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x1c71f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c71f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C71FCu;
    {
        const bool branch_taken_0x1c71fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71FCu;
        // 0x1c7200: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c71fc) {
            ctx->pc = 0x1C720Cu;
            goto label_1c720c;
        }
    }
    ctx->pc = 0x1C7204u;
    // 0x1c7204: 0xc071c44  jal         func_1C7110
    ctx->pc = 0x1C7204u;
    SET_GPR_U32(ctx, 31, 0x1C720Cu);
    ctx->pc = 0x1C7110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7110u, 0x1C7204u, 0x1C720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C720Cu;
label_1c720c:
    // 0x1c720c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c720cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7210: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c7210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7214: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c7214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c7218: 0xc071c56  jal         func_1C7158
    ctx->pc = 0x1C7218u;
    SET_GPR_U32(ctx, 31, 0x1C7220u);
    ctx->pc = 0x1C721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7218u;
    // 0x1c721c: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7158u, 0x1C7218u, 0x1C7220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7220u;
label_1c7220:
    // 0x1c7220: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c7220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c7224: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c7224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7228: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c7228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c722c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c722cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7230: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1c7230u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7234: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7234u;
    {
        const bool branch_taken_0x1c7234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7234u;
        // 0x1c7238: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7234) {
            ctx->pc = 0x1C7240u;
            goto label_1c7240;
        }
    }
    ctx->pc = 0x1C723Cu;
    // 0x1c723c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c723cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1c7240:
    // 0x1c7240: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7240u;
    {
        const bool branch_taken_0x1c7240 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7240u;
        // 0x1c7244: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7240) {
            ctx->pc = 0x1C7260u;
            goto label_1c7260;
        }
    }
    ctx->pc = 0x1C7248u;
    // 0x1c7248: 0xc071c50  jal         func_1C7140
    ctx->pc = 0x1C7248u;
    SET_GPR_U32(ctx, 31, 0x1C7250u);
    ctx->pc = 0x1C724Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7248u;
    // 0x1c724c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7140u, 0x1C7248u, 0x1C7250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7250u;
label_1c7250:
    // 0x1c7250: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c7250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c7254: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c7254u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c7258: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1c7258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1c725c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c725cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c7260:
    // 0x1c7260: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c7260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7264: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c7264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c7268: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c7268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c726c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C726Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C726Cu;
        // 0x1c7270: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C726Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7274u;
    // 0x1c7274: 0x0  nop
    ctx->pc = 0x1c7274u;
    // NOP
    if (ctx->pc == 0x1c7274u) { ctx->pc = 0x1c7278u; }
}
