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

// Function: sub_001E6408
// Address: 0x1e6408 - 0x1e6468
void sub_001E6408_0x1e6408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6408_0x1e6408");
#endif

    switch (ctx->pc) {
        case 0x1e6408u: goto label_1e6408;
        case 0x1e640cu: goto label_1e640c;
        case 0x1e6410u: goto label_1e6410;
        case 0x1e6414u: goto label_1e6414;
        case 0x1e6418u: goto label_1e6418;
        case 0x1e641cu: goto label_1e641c;
        case 0x1e6420u: goto label_1e6420;
        case 0x1e6424u: goto label_1e6424;
        case 0x1e6428u: goto label_1e6428;
        case 0x1e642cu: goto label_1e642c;
        case 0x1e6430u: goto label_1e6430;
        case 0x1e6434u: goto label_1e6434;
        case 0x1e6438u: goto label_1e6438;
        case 0x1e643cu: goto label_1e643c;
        case 0x1e6440u: goto label_1e6440;
        case 0x1e6444u: goto label_1e6444;
        case 0x1e6448u: goto label_1e6448;
        case 0x1e644cu: goto label_1e644c;
        case 0x1e6450u: goto label_1e6450;
        case 0x1e6454u: goto label_1e6454;
        case 0x1e6458u: goto label_1e6458;
        case 0x1e645cu: goto label_1e645c;
        case 0x1e6460u: goto label_1e6460;
        case 0x1e6464u: goto label_1e6464;
        default: break;
    }

    ctx->pc = 0x1e6408u;

label_1e6408:
    // 0x1e6408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e640c:
    // 0x1e640c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e640cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e6410:
    // 0x1e6410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e6414:
    // 0x1e6414: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e6414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e6418:
    // 0x1e6418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e641c:
    // 0x1e641c: 0xc079a08  jal         func_1E6820
label_1e6420:
    if (ctx->pc == 0x1E6420u) {
        ctx->pc = 0x1E6420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E641Cu;
        // 0x1e6420: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6424u;
        goto label_1e6424;
    }
    ctx->pc = 0x1E641Cu;
    SET_GPR_U32(ctx, 31, 0x1E6424u);
    ctx->pc = 0x1E6420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E641Cu;
    // 0x1e6420: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6820u, 0x1E641Cu, 0x1E6424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6424u;
label_1e6424:
    // 0x1e6424: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e6424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6428:
    // 0x1e6428: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_1e642c:
    if (ctx->pc == 0x1E642Cu) {
        ctx->pc = 0x1E642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6428u;
        // 0x1e642c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6430u;
        goto label_1e6430;
    }
    ctx->pc = 0x1E6428u;
    {
        const bool branch_taken_0x1e6428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e6428) {
            ctx->pc = 0x1E642Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6428u;
            // 0x1e642c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6454u;
            goto label_1e6454;
        }
    }
    ctx->pc = 0x1E6430u;
label_1e6430:
    // 0x1e6430: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e6430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e6434:
    // 0x1e6434: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e6438:
    if (ctx->pc == 0x1E6438u) {
        ctx->pc = 0x1E6438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6434u;
        // 0x1e6438: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E643Cu;
        goto label_1e643c;
    }
    ctx->pc = 0x1E6434u;
    {
        const bool branch_taken_0x1e6434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6434u;
        // 0x1e6438: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6434) {
            ctx->pc = 0x1E6450u;
            goto label_1e6450;
        }
    }
    ctx->pc = 0x1E643Cu;
label_1e643c:
    // 0x1e643c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1e643cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1e6440:
    // 0x1e6440: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1e6444:
    if (ctx->pc == 0x1E6444u) {
        ctx->pc = 0x1E6444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6440u;
        // 0x1e6444: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6448u;
        goto label_1e6448;
    }
    ctx->pc = 0x1E6440u;
    {
        const bool branch_taken_0x1e6440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6440) {
            ctx->pc = 0x1E6444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6440u;
            // 0x1e6444: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6454u;
            goto label_1e6454;
        }
    }
    ctx->pc = 0x1E6448u;
label_1e6448:
    // 0x1e6448: 0x40f809  jalr        $v0
label_1e644c:
    if (ctx->pc == 0x1E644Cu) {
        ctx->pc = 0x1E644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6448u;
        // 0x1e644c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6450u;
        goto label_1e6450;
    }
    ctx->pc = 0x1E6448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6450u);
        ctx->pc = 0x1E644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6448u;
        // 0x1e644c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6448u, 0x1E6450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6450u;
label_1e6450:
    // 0x1e6450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e6450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6454:
    // 0x1e6454: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e6454u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e6458:
    // 0x1e6458: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e645c:
    // 0x1e645c: 0x3e00008  jr          $ra
label_1e6460:
    if (ctx->pc == 0x1E6460u) {
        ctx->pc = 0x1E6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E645Cu;
        // 0x1e6460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6464u;
        goto label_1e6464;
    }
    ctx->pc = 0x1E645Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E645Cu;
        // 0x1e6460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E645Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6464u;
label_1e6464:
    // 0x1e6464: 0x0  nop
    ctx->pc = 0x1e6464u;
    // NOP
    if (ctx->pc == 0x1e6464u) { ctx->pc = 0x1e6468u; }
}
