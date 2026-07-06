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

// Function: sub_001DA2C8
// Address: 0x1da2c8 - 0x1da368
void sub_001DA2C8_0x1da2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA2C8_0x1da2c8");
#endif

    switch (ctx->pc) {
        case 0x1da2c8u: goto label_1da2c8;
        case 0x1da2ccu: goto label_1da2cc;
        case 0x1da2d0u: goto label_1da2d0;
        case 0x1da2d4u: goto label_1da2d4;
        case 0x1da2d8u: goto label_1da2d8;
        case 0x1da2dcu: goto label_1da2dc;
        case 0x1da2e0u: goto label_1da2e0;
        case 0x1da2e4u: goto label_1da2e4;
        case 0x1da2e8u: goto label_1da2e8;
        case 0x1da2ecu: goto label_1da2ec;
        case 0x1da2f0u: goto label_1da2f0;
        case 0x1da2f4u: goto label_1da2f4;
        case 0x1da2f8u: goto label_1da2f8;
        case 0x1da2fcu: goto label_1da2fc;
        case 0x1da300u: goto label_1da300;
        case 0x1da304u: goto label_1da304;
        case 0x1da308u: goto label_1da308;
        case 0x1da30cu: goto label_1da30c;
        case 0x1da310u: goto label_1da310;
        case 0x1da314u: goto label_1da314;
        case 0x1da318u: goto label_1da318;
        case 0x1da31cu: goto label_1da31c;
        case 0x1da320u: goto label_1da320;
        case 0x1da324u: goto label_1da324;
        case 0x1da328u: goto label_1da328;
        case 0x1da32cu: goto label_1da32c;
        case 0x1da330u: goto label_1da330;
        case 0x1da334u: goto label_1da334;
        case 0x1da338u: goto label_1da338;
        case 0x1da33cu: goto label_1da33c;
        case 0x1da340u: goto label_1da340;
        case 0x1da344u: goto label_1da344;
        case 0x1da348u: goto label_1da348;
        case 0x1da34cu: goto label_1da34c;
        case 0x1da350u: goto label_1da350;
        case 0x1da354u: goto label_1da354;
        case 0x1da358u: goto label_1da358;
        case 0x1da35cu: goto label_1da35c;
        case 0x1da360u: goto label_1da360;
        case 0x1da364u: goto label_1da364;
        default: break;
    }

    ctx->pc = 0x1da2c8u;

label_1da2c8:
    // 0x1da2c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1da2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1da2cc:
    // 0x1da2cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1da2d0:
    // 0x1da2d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da2d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1da2d4:
    // 0x1da2d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1da2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1da2d8:
    // 0x1da2d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1da2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1da2dc:
    // 0x1da2dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1da2dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1da2e0:
    // 0x1da2e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1da2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1da2e4:
    // 0x1da2e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1da2e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1da2e8:
    // 0x1da2e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1da2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1da2ec:
    // 0x1da2ec: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1da2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1da2f0:
    // 0x1da2f0: 0xc072a66  jal         func_1CA998
label_1da2f4:
    if (ctx->pc == 0x1DA2F4u) {
        ctx->pc = 0x1DA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2F0u;
        // 0x1da2f4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA2F8u;
        goto label_1da2f8;
    }
    ctx->pc = 0x1DA2F0u;
    SET_GPR_U32(ctx, 31, 0x1DA2F8u);
    ctx->pc = 0x1DA2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA2F0u;
    // 0x1da2f4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA998u, 0x1DA2F0u, 0x1DA2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA2F8u;
label_1da2f8:
    // 0x1da2f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da2fc:
    // 0x1da2fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1da2fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1da300:
    // 0x1da300: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1da300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1da304:
    // 0x1da304: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_1da308:
    if (ctx->pc == 0x1DA308u) {
        ctx->pc = 0x1DA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA304u;
        // 0x1da308: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA30Cu;
        goto label_1da30c;
    }
    ctx->pc = 0x1DA304u;
    {
        const bool branch_taken_0x1da304 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA304u;
        // 0x1da308: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da304) {
            ctx->pc = 0x1DA34Cu;
            goto label_1da34c;
        }
    }
    ctx->pc = 0x1DA30Cu;
label_1da30c:
    // 0x1da30c: 0xc076812  jal         func_1DA048
label_1da310:
    if (ctx->pc == 0x1DA310u) {
        ctx->pc = 0x1DA314u;
        goto label_1da314;
    }
    ctx->pc = 0x1DA30Cu;
    SET_GPR_U32(ctx, 31, 0x1DA314u);
    ctx->pc = 0x1DA048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA048u, 0x1DA30Cu, 0x1DA314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA314u;
label_1da314:
    // 0x1da314: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1da314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1da318:
    // 0x1da318: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1da318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1da31c:
    // 0x1da31c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1da320:
    // 0x1da320: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1da320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1da324:
    // 0x1da324: 0x40f809  jalr        $v0
label_1da328:
    if (ctx->pc == 0x1DA328u) {
        ctx->pc = 0x1DA328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA324u;
        // 0x1da328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA32Cu;
        goto label_1da32c;
    }
    ctx->pc = 0x1DA324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA32Cu);
        ctx->pc = 0x1DA328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA324u;
        // 0x1da328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA324u, 0x1DA32Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA32Cu;
label_1da32c:
    // 0x1da32c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1da32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1da330:
    // 0x1da330: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1da330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1da334:
    // 0x1da334: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1da334u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1da338:
    // 0x1da338: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1da338u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1da33c:
    // 0x1da33c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1da33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1da340:
    // 0x1da340: 0x40f809  jalr        $v0
label_1da344:
    if (ctx->pc == 0x1DA344u) {
        ctx->pc = 0x1DA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA340u;
        // 0x1da344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA348u;
        goto label_1da348;
    }
    ctx->pc = 0x1DA340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA348u);
        ctx->pc = 0x1DA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA340u;
        // 0x1da344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA340u, 0x1DA348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA348u;
label_1da348:
    // 0x1da348: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1da348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da34c:
    // 0x1da34c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1da350:
    // 0x1da350: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1da354:
    // 0x1da354: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1da354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1da358:
    // 0x1da358: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1da358u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1da35c:
    // 0x1da35c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1da35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1da360:
    // 0x1da360: 0x3e00008  jr          $ra
label_1da364:
    if (ctx->pc == 0x1DA364u) {
        ctx->pc = 0x1DA364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA360u;
        // 0x1da364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA368u;
        goto label_fallthrough_0x1da360;
    }
    ctx->pc = 0x1DA360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA360u;
        // 0x1da364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1da360:
    ctx->pc = 0x1DA368u;
}
