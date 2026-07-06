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

// Function: sub_00294628
// Address: 0x294628 - 0x2946b0
void sub_00294628_0x294628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294628_0x294628");
#endif

    switch (ctx->pc) {
        case 0x294628u: goto label_294628;
        case 0x29462cu: goto label_29462c;
        case 0x294630u: goto label_294630;
        case 0x294634u: goto label_294634;
        case 0x294638u: goto label_294638;
        case 0x29463cu: goto label_29463c;
        case 0x294640u: goto label_294640;
        case 0x294644u: goto label_294644;
        case 0x294648u: goto label_294648;
        case 0x29464cu: goto label_29464c;
        case 0x294650u: goto label_294650;
        case 0x294654u: goto label_294654;
        case 0x294658u: goto label_294658;
        case 0x29465cu: goto label_29465c;
        case 0x294660u: goto label_294660;
        case 0x294664u: goto label_294664;
        case 0x294668u: goto label_294668;
        case 0x29466cu: goto label_29466c;
        case 0x294670u: goto label_294670;
        case 0x294674u: goto label_294674;
        case 0x294678u: goto label_294678;
        case 0x29467cu: goto label_29467c;
        case 0x294680u: goto label_294680;
        case 0x294684u: goto label_294684;
        case 0x294688u: goto label_294688;
        case 0x29468cu: goto label_29468c;
        case 0x294690u: goto label_294690;
        case 0x294694u: goto label_294694;
        case 0x294698u: goto label_294698;
        case 0x29469cu: goto label_29469c;
        case 0x2946a0u: goto label_2946a0;
        case 0x2946a4u: goto label_2946a4;
        case 0x2946a8u: goto label_2946a8;
        case 0x2946acu: goto label_2946ac;
        default: break;
    }

    ctx->pc = 0x294628u;

label_294628:
    // 0x294628: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x294628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29462c:
    // 0x29462c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29462cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_294630:
    // 0x294630: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x294630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_294634:
    // 0x294634: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x294634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_294638:
    // 0x294638: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x294638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_29463c:
    // 0x29463c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29463cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_294640:
    // 0x294640: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_294644:
    // 0x294644: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x294644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_294648:
    // 0x294648: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x294648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_29464c:
    // 0x29464c: 0xc0a3dd0  jal         func_28F740
label_294650:
    if (ctx->pc == 0x294650u) {
        ctx->pc = 0x294650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29464Cu;
        // 0x294650: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294654u;
        goto label_294654;
    }
    ctx->pc = 0x29464Cu;
    SET_GPR_U32(ctx, 31, 0x294654u);
    ctx->pc = 0x294650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29464Cu;
    // 0x294650: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x29464Cu, 0x294654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294654u;
label_294654:
    // 0x294654: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x294654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_294658:
    // 0x294658: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_29465c:
    if (ctx->pc == 0x29465Cu) {
        ctx->pc = 0x29465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294658u;
        // 0x29465c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294660u;
        goto label_294660;
    }
    ctx->pc = 0x294658u;
    {
        const bool branch_taken_0x294658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294658u;
        // 0x29465c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294658) {
            ctx->pc = 0x294680u;
            goto label_294680;
        }
    }
    ctx->pc = 0x294660u;
label_294660:
    // 0x294660: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x294660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_294664:
    // 0x294664: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x294664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_294668:
    // 0x294668: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x294668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_29466c:
    // 0x29466c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29466cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294670:
    // 0x294670: 0xc0a5648  jal         func_295920
label_294674:
    if (ctx->pc == 0x294674u) {
        ctx->pc = 0x294674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294670u;
        // 0x294674: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294678u;
        goto label_294678;
    }
    ctx->pc = 0x294670u;
    SET_GPR_U32(ctx, 31, 0x294678u);
    ctx->pc = 0x294674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294670u;
    // 0x294674: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x294670u, 0x294678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294678u;
label_294678:
    // 0x294678: 0x10000005  b           . + 4 + (0x5 << 2)
label_29467c:
    if (ctx->pc == 0x29467Cu) {
        ctx->pc = 0x29467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294678u;
        // 0x29467c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294680u;
        goto label_294680;
    }
    ctx->pc = 0x294678u;
    {
        const bool branch_taken_0x294678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294678u;
        // 0x29467c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294678) {
            ctx->pc = 0x294690u;
            goto label_294690;
        }
    }
    ctx->pc = 0x294680u;
label_294680:
    // 0x294680: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x294680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_294684:
    // 0x294684: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x294684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_294688:
    // 0x294688: 0x40f809  jalr        $v0
label_29468c:
    if (ctx->pc == 0x29468Cu) {
        ctx->pc = 0x29468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294688u;
        // 0x29468c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294690u;
        goto label_294690;
    }
    ctx->pc = 0x294688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x294690u);
        ctx->pc = 0x29468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294688u;
        // 0x29468c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294688u, 0x294690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294690u;
label_294690:
    // 0x294690: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x294690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_294694:
    // 0x294694: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x294694u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_294698:
    // 0x294698: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x294698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29469c:
    // 0x29469c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29469cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2946a0:
    // 0x2946a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2946a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2946a4:
    // 0x2946a4: 0x3e00008  jr          $ra
label_2946a8:
    if (ctx->pc == 0x2946A8u) {
        ctx->pc = 0x2946A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2946A4u;
        // 0x2946a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2946ACu;
        goto label_2946ac;
    }
    ctx->pc = 0x2946A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2946A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2946A4u;
        // 0x2946a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2946A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2946ACu;
label_2946ac:
    // 0x2946ac: 0x0  nop
    ctx->pc = 0x2946acu;
    // NOP
}
