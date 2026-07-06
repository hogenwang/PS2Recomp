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

// Function: sub_001ECA48
// Address: 0x1eca48 - 0x1ecb00
void sub_001ECA48_0x1eca48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECA48_0x1eca48");
#endif

    switch (ctx->pc) {
        case 0x1eca94u: goto label_1eca94;
        case 0x1ecaacu: goto label_1ecaac;
        case 0x1ecac4u: goto label_1ecac4;
        case 0x1ecadcu: goto label_1ecadc;
        default: break;
    }

    ctx->pc = 0x1eca48u;

    // 0x1eca48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eca48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eca4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1eca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eca50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eca50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eca54: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1eca54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eca58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1eca5c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1eca5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1eca60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1eca64: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1eca64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca68: 0x2610fffa  addiu       $s0, $s0, -0x6
    ctx->pc = 0x1eca68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x1eca6c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1eca6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1eca70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eca74: 0x26310006  addiu       $s1, $s1, 0x6
    ctx->pc = 0x1eca74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x1eca78: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1eca78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eca7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca80: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1eca80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1eca84: 0x14a30017  bne         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1ECA84u;
    {
        const bool branch_taken_0x1eca84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ECA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA84u;
        // 0x1eca88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca84) {
            ctx->pc = 0x1ECAE4u;
            goto label_1ecae4;
        }
    }
    ctx->pc = 0x1ECA8Cu;
    // 0x1eca8c: 0xc07b2c0  jal         func_1ECB00
    ctx->pc = 0x1ECA8Cu;
    SET_GPR_U32(ctx, 31, 0x1ECA94u);
    ctx->pc = 0x1ECB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECB00u, 0x1ECA8Cu, 0x1ECA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECA94u;
label_1eca94:
    // 0x1eca94: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ECA94u;
    {
        const bool branch_taken_0x1eca94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eca94) {
            ctx->pc = 0x1ECA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ECA94u;
            // 0x1eca98: 0x2610fff4  addiu       $s0, $s0, -0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ECAB4u;
            goto label_1ecab4;
        }
    }
    ctx->pc = 0x1ECA9Cu;
    // 0x1eca9c: 0x2610fffe  addiu       $s0, $s0, -0x2
    ctx->pc = 0x1eca9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x1ecaa0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1ecaa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1ecaa4: 0xc07b2c0  jal         func_1ECB00
    ctx->pc = 0x1ECAA4u;
    SET_GPR_U32(ctx, 31, 0x1ECAACu);
    ctx->pc = 0x1ECAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECAA4u;
    // 0x1ecaa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECB00u, 0x1ECAA4u, 0x1ECAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECAACu;
label_1ecaac:
    // 0x1ecaac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1ECAACu;
    {
        const bool branch_taken_0x1ecaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAACu;
        // 0x1ecab0: 0x2610fff4  addiu       $s0, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecaac) {
            ctx->pc = 0x1ECAE4u;
            goto label_1ecae4;
        }
    }
    ctx->pc = 0x1ECAB4u;
label_1ecab4:
    // 0x1ecab4: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1ecab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1ecab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ecab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecabc: 0xc07b2d6  jal         func_1ECB58
    ctx->pc = 0x1ECABCu;
    SET_GPR_U32(ctx, 31, 0x1ECAC4u);
    ctx->pc = 0x1ECAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECABCu;
    // 0x1ecac0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECB58u, 0x1ECABCu, 0x1ECAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECAC4u;
label_1ecac4:
    // 0x1ecac4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ecac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecac8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ecac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecacc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECACCu;
    {
        const bool branch_taken_0x1ecacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECACCu;
        // 0x1ecad0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecacc) {
            ctx->pc = 0x1ECAE4u;
            goto label_1ecae4;
        }
    }
    ctx->pc = 0x1ECAD4u;
    // 0x1ecad4: 0xc07b2ec  jal         func_1ECBB0
    ctx->pc = 0x1ECAD4u;
    SET_GPR_U32(ctx, 31, 0x1ECADCu);
    ctx->pc = 0x1ECBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECBB0u, 0x1ECAD4u, 0x1ECADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECADCu;
label_1ecadc:
    // 0x1ecadc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1ecadcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1ecae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ecae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ecae4:
    // 0x1ecae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ecae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ecae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ecaec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ecaecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecaf0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ecaf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ecaf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ecaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ecaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAF8u;
        // 0x1ecafc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECB00u;
}
